#ifndef PHY_REG_C_RX_EQ_LANE_H
#define PHY_REG_C_RX_EQ_LANE_H



// 0x0000	DFE_CTRL_REG0		DFE Control
typedef union {
	struct {
		uint8_t DFE_ADAPT_SPLR_EN_LANE_7_0               : 8;	/*  [7:0]     r/w 8'hff*/
		uint8_t DFE_F0D_MODE_LANE                        : 1;	/*      8     r/w   0*/
		uint8_t DFE_F0B_MODE_LANE                        : 1;	/*      9     r/w   0*/
		uint8_t DFE_MMSE_MODE_LANE                       : 1;	/*     10     r/w   1*/
		uint8_t DFE_F0K_MODE_LANE                        : 1;	/*     11     r/w   0*/
		uint8_t DFE_F0A_MODE_LANE                        : 1;	/*     12     r/w   1*/
		uint8_t DFE_ADAPT_CONT_LANE                      : 1;	/*     13     r/w   0*/
		uint8_t DFE_ADAPT_ABORT_LANE                     : 1;	/*     14     r/w   0*/
		uint8_t DFE_F0X_MODE_LANE                        : 1;	/*     15     r/w   0*/
		uint8_t DFE_START_LANE                           : 1;	/*     16     r/w   0*/
		uint8_t DFE_DONE_LANE                            : 1;	/*     17       r   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t DFE_ADAPT_ADJ_VREF_DC_MID_EN_LANE        : 1;	/*     19     r/w   0*/
		uint8_t DFE_ADAPT_ADJ_VREF_DC_EN_LANE            : 1;	/*     20     r/w   0*/
		uint8_t DFE_PAM2_LP_MODE_LANE                    : 1;	/*     21     r/w   0*/
		uint8_t DFE_PAM2_MODE_LANE                       : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_TAP_RESTORE_LANE                     : 1;	/*     24     r/w   0*/
		uint8_t DFE_TAP_REFRESH_LANE                     : 1;	/*     25     r/w   0*/
		uint8_t DFE_VREF_MODE_LANE_1_0                   : 2;	/*[27:26]     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t DFE_EE_MODE_LANE                         : 1;	/*     30     r/w   0*/
		uint8_t DFE_EC_MODE_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG0_t;
__xdata __at( 0x2400 ) volatile DFE_CTRL_REG0_t DFE_CTRL_REG0;
#define reg_DFE_ADAPT_SPLR_EN_LANE_7_0  DFE_CTRL_REG0.BF.DFE_ADAPT_SPLR_EN_LANE_7_0
#define reg_DFE_F0D_MODE_LANE  DFE_CTRL_REG0.BF.DFE_F0D_MODE_LANE
#define reg_DFE_F0B_MODE_LANE  DFE_CTRL_REG0.BF.DFE_F0B_MODE_LANE
#define reg_DFE_MMSE_MODE_LANE  DFE_CTRL_REG0.BF.DFE_MMSE_MODE_LANE
#define reg_DFE_F0K_MODE_LANE  DFE_CTRL_REG0.BF.DFE_F0K_MODE_LANE
#define reg_DFE_F0A_MODE_LANE  DFE_CTRL_REG0.BF.DFE_F0A_MODE_LANE
#define reg_DFE_ADAPT_CONT_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_CONT_LANE
#define reg_DFE_ADAPT_ABORT_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_ABORT_LANE
#define reg_DFE_F0X_MODE_LANE  DFE_CTRL_REG0.BF.DFE_F0X_MODE_LANE
#define reg_DFE_START_LANE  DFE_CTRL_REG0.BF.DFE_START_LANE
#define reg_DFE_DONE_LANE  DFE_CTRL_REG0.BF.DFE_DONE_LANE
#define reg_DFE_ADAPT_ADJ_VREF_DC_MID_EN_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_ADJ_VREF_DC_MID_EN_LANE
#define reg_DFE_ADAPT_ADJ_VREF_DC_EN_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_ADJ_VREF_DC_EN_LANE
#define reg_DFE_PAM2_LP_MODE_LANE  DFE_CTRL_REG0.BF.DFE_PAM2_LP_MODE_LANE
#define reg_DFE_PAM2_MODE_LANE  DFE_CTRL_REG0.BF.DFE_PAM2_MODE_LANE
#define reg_DFE_TAP_RESTORE_LANE  DFE_CTRL_REG0.BF.DFE_TAP_RESTORE_LANE
#define reg_DFE_TAP_REFRESH_LANE  DFE_CTRL_REG0.BF.DFE_TAP_REFRESH_LANE
#define reg_DFE_VREF_MODE_LANE_1_0  DFE_CTRL_REG0.BF.DFE_VREF_MODE_LANE_1_0
#define reg_DFE_EE_MODE_LANE  DFE_CTRL_REG0.BF.DFE_EE_MODE_LANE
#define reg_DFE_EC_MODE_LANE  DFE_CTRL_REG0.BF.DFE_EC_MODE_LANE

// 0x0004	DFE_CTRL_REG1		DFE Control
typedef union {
	struct {
		uint8_t DFE_FBMD_DCE_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t DFE_FBMD_DC_LANE                         : 1;	/*      1     r/w   0*/
		uint8_t DFE_FBMD_F0K_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t DFE_FBMD_F0D_LANE                        : 1;	/*      3     r/w   0*/
		uint8_t DFE_FBMD_P14P23_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t DFE_FBMD_P12P34_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t DFE_FBMD_EO_LANE                         : 1;	/*      6     r/w   0*/
		uint8_t DFE_FBMD_DS_LANE                         : 1;	/*      7     r/w   0*/
		uint8_t DFE_FBMD_F0_LANE                         : 1;	/*      8     r/w   0*/
		uint8_t DFE_FBMD_VREF_LANE                       : 1;	/*      9     r/w   0*/
		uint8_t DFE_LOWER_EO_EN_LANE                     : 1;	/*     10     r/w   0*/
		uint8_t DFE_UPPER_EO_EN_LANE                     : 1;	/*     11     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_F0_LANE                 : 1;	/*     12     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_F2_LANE                 : 1;	/*     13     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_F3_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_F4_LANE                 : 1;	/*     15     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_F0D_LANE                : 1;	/*     16     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_VREF_LANE               : 1;	/*     17     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_DC_LANE                 : 1;	/*     18     r/w   0*/
		uint8_t DFE_CMN_MODE_MLSB_LANE                   : 1;	/*     19     r/w   0*/
		uint8_t DFE_CMN_MODE_TMB_LANE                    : 1;	/*     20     r/w   0*/
		uint8_t DFE_F0D_DN1_NO_TRAN_ADAPT_EN_LANE        : 1;	/*     21     r/w   0*/
		uint8_t DFE_F0D_DN1_MSB_TRAN_ADAPT_EN_LANE       : 1;	/*     22     r/w   0*/
		uint8_t DFE_F0B_DN1_NO_TRAN_ADAPT_EN_LANE        : 1;	/*     23     r/w   0*/
		uint8_t DFE_F0B_DN1_MSB_ATRAN_ADAPT_EN_LANE      : 1;	/*     24     r/w   0*/
		uint8_t DFE_DN1_NO_TRAN_ADAPT_EN_LANE            : 1;	/*     25     r/w   0*/
		uint8_t DFE_DN1_MSB_TRAN_ADAPT_EN_LANE           : 1;	/*     26     r/w   0*/
		uint8_t DFE_FIR_DN1_NO_TRAN_ADAPT_EN_LANE        : 1;	/*     27     r/w   0*/
		uint8_t DFE_FIR_DN1_MSB_TRAN_ADAPT_EN_LANE       : 1;	/*     28     r/w   0*/
		uint8_t DFE_EDGE_ALL_TRAN_EN_LANE                : 1;	/*     29     r/w   0*/
		uint8_t DFE_FIR_ADAPT_HN1_EN_LANE                : 1;	/*     30     r/w   0*/
		uint8_t DFE_FIR_ADAPT_HP1_EN_LANE                : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG1_t;
__xdata __at( 0x2404 ) volatile DFE_CTRL_REG1_t DFE_CTRL_REG1;
#define reg_DFE_FBMD_DCE_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_DCE_LANE
#define reg_DFE_FBMD_DC_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_DC_LANE
#define reg_DFE_FBMD_F0K_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_F0K_LANE
#define reg_DFE_FBMD_F0D_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_F0D_LANE
#define reg_DFE_FBMD_P14P23_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_P14P23_LANE
#define reg_DFE_FBMD_P12P34_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_P12P34_LANE
#define reg_DFE_FBMD_EO_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_EO_LANE
#define reg_DFE_FBMD_DS_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_DS_LANE
#define reg_DFE_FBMD_F0_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_F0_LANE
#define reg_DFE_FBMD_VREF_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_VREF_LANE
#define reg_DFE_LOWER_EO_EN_LANE  DFE_CTRL_REG1.BF.DFE_LOWER_EO_EN_LANE
#define reg_DFE_UPPER_EO_EN_LANE  DFE_CTRL_REG1.BF.DFE_UPPER_EO_EN_LANE
#define reg_DFE_TMB_VLD_MODE_F0_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_F0_LANE
#define reg_DFE_TMB_VLD_MODE_F2_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_F2_LANE
#define reg_DFE_TMB_VLD_MODE_F3_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_F3_LANE
#define reg_DFE_TMB_VLD_MODE_F4_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_F4_LANE
#define reg_DFE_TMB_VLD_MODE_F0D_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_F0D_LANE
#define reg_DFE_TMB_VLD_MODE_VREF_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_VREF_LANE
#define reg_DFE_TMB_VLD_MODE_DC_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_DC_LANE
#define reg_DFE_CMN_MODE_MLSB_LANE  DFE_CTRL_REG1.BF.DFE_CMN_MODE_MLSB_LANE
#define reg_DFE_CMN_MODE_TMB_LANE  DFE_CTRL_REG1.BF.DFE_CMN_MODE_TMB_LANE
#define reg_DFE_F0D_DN1_NO_TRAN_ADAPT_EN_LANE  DFE_CTRL_REG1.BF.DFE_F0D_DN1_NO_TRAN_ADAPT_EN_LANE
#define reg_DFE_F0D_DN1_MSB_TRAN_ADAPT_EN_LANE  DFE_CTRL_REG1.BF.DFE_F0D_DN1_MSB_TRAN_ADAPT_EN_LANE
#define reg_DFE_F0B_DN1_NO_TRAN_ADAPT_EN_LANE  DFE_CTRL_REG1.BF.DFE_F0B_DN1_NO_TRAN_ADAPT_EN_LANE
#define reg_DFE_F0B_DN1_MSB_ATRAN_ADAPT_EN_LANE  DFE_CTRL_REG1.BF.DFE_F0B_DN1_MSB_ATRAN_ADAPT_EN_LANE
#define reg_DFE_DN1_NO_TRAN_ADAPT_EN_LANE  DFE_CTRL_REG1.BF.DFE_DN1_NO_TRAN_ADAPT_EN_LANE
#define reg_DFE_DN1_MSB_TRAN_ADAPT_EN_LANE  DFE_CTRL_REG1.BF.DFE_DN1_MSB_TRAN_ADAPT_EN_LANE
#define reg_DFE_FIR_DN1_NO_TRAN_ADAPT_EN_LANE  DFE_CTRL_REG1.BF.DFE_FIR_DN1_NO_TRAN_ADAPT_EN_LANE
#define reg_DFE_FIR_DN1_MSB_TRAN_ADAPT_EN_LANE  DFE_CTRL_REG1.BF.DFE_FIR_DN1_MSB_TRAN_ADAPT_EN_LANE
#define reg_DFE_EDGE_ALL_TRAN_EN_LANE  DFE_CTRL_REG1.BF.DFE_EDGE_ALL_TRAN_EN_LANE
#define reg_DFE_FIR_ADAPT_HN1_EN_LANE  DFE_CTRL_REG1.BF.DFE_FIR_ADAPT_HN1_EN_LANE
#define reg_DFE_FIR_ADAPT_HP1_EN_LANE  DFE_CTRL_REG1.BF.DFE_FIR_ADAPT_HP1_EN_LANE

// 0x0008	DFE_CTRL_REG2		DFE Control
typedef union {
	struct {
		uint8_t DFE_UPDATE_EN_LANE_30_0_b0               : 8;	/* [30:0]     r/w 31'h0*/
		uint8_t DFE_UPDATE_EN_LANE_30_0_b1               : 8;	/* [30:0]     r/w 31'h0*/
		uint8_t DFE_UPDATE_EN_LANE_30_0_b2               : 8;	/* [30:0]     r/w 31'h0*/
		uint8_t DFE_UPDATE_EN_LANE_30_0_b3               : 7;	/* [30:0]     r/w 31'h0*/
		uint8_t DFE_UPDATED_LANE                         : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG2_t;
__xdata __at( 0x2408 ) volatile DFE_CTRL_REG2_t DFE_CTRL_REG2;
#define reg_DFE_UPDATE_EN_LANE_30_0_b0  DFE_CTRL_REG2.BF.DFE_UPDATE_EN_LANE_30_0_b0
#define reg_DFE_UPDATE_EN_LANE_30_0_b1  DFE_CTRL_REG2.BF.DFE_UPDATE_EN_LANE_30_0_b1
#define reg_DFE_UPDATE_EN_LANE_30_0_b2  DFE_CTRL_REG2.BF.DFE_UPDATE_EN_LANE_30_0_b2
#define reg_DFE_UPDATE_EN_LANE_30_0_b3  DFE_CTRL_REG2.BF.DFE_UPDATE_EN_LANE_30_0_b3
#define reg_DFE_UPDATED_LANE  DFE_CTRL_REG2.BF.DFE_UPDATED_LANE

// 0x000c	DFE_CTRL_REG3		DFE Control
typedef union {
	struct {
		uint8_t DFE_FLOAT_SEL_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t DFE_DATA_F0_SEL_LANE                     : 1;	/*      4     r/w   1*/
		uint8_t DFE_CLR_FRAC_EN_LANE_1_0                 : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t DFE_VOTE_TOP_BOT_OUTER_LANE              : 1;	/*      7     r/w   1*/
		uint8_t DFE_DCE_DS_SEL_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_TMB_ERR_EN_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t DFE_TMB_ERR_EN_FIR_LANE_2_0              : 3;	/*[21:19]     r/w 3'h7*/
		uint8_t DFE_UPDATE_DC_EN_LANE                    : 1;	/*     22     r/w 1'h0*/
		uint8_t DFE_UPDATE_DCE_EN_LANE                   : 1;	/*     23     r/w 1'h0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w 1'h0*/
		uint8_t DFE_UPDATE_VREF_EN_LANE                  : 1;	/*     25     r/w 1'h0*/
		uint8_t DFE_UPDATE_HN1_EN_LANE                   : 1;	/*     26     r/w 1'h0*/
		uint8_t DFE_UPDATE_HP1_EN_LANE                   : 1;	/*     27     r/w 1'h0*/
		uint8_t DFE_UPDATE_UB_EN_LANE                    : 1;	/*     28     r/w 1'h0*/
		uint8_t DFE_UPDATE_UT_EN_LANE                    : 1;	/*     29     r/w 1'h0*/
		uint8_t DFE_UPDATE_VREF_MID_EN_LANE              : 1;	/*     30     r/w 1'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG3_t;
__xdata __at( 0x240c ) volatile DFE_CTRL_REG3_t DFE_CTRL_REG3;
#define reg_DFE_FLOAT_SEL_LANE_3_0  DFE_CTRL_REG3.BF.DFE_FLOAT_SEL_LANE_3_0
#define reg_DFE_DATA_F0_SEL_LANE  DFE_CTRL_REG3.BF.DFE_DATA_F0_SEL_LANE
#define reg_DFE_CLR_FRAC_EN_LANE_1_0  DFE_CTRL_REG3.BF.DFE_CLR_FRAC_EN_LANE_1_0
#define reg_DFE_VOTE_TOP_BOT_OUTER_LANE  DFE_CTRL_REG3.BF.DFE_VOTE_TOP_BOT_OUTER_LANE
#define reg_DFE_DCE_DS_SEL_LANE  DFE_CTRL_REG3.BF.DFE_DCE_DS_SEL_LANE
#define reg_DFE_TMB_ERR_EN_LANE_2_0  DFE_CTRL_REG3.BF.DFE_TMB_ERR_EN_LANE_2_0
#define reg_DFE_TMB_ERR_EN_FIR_LANE_2_0  DFE_CTRL_REG3.BF.DFE_TMB_ERR_EN_FIR_LANE_2_0
#define reg_DFE_UPDATE_DC_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_DC_EN_LANE
#define reg_DFE_UPDATE_DCE_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_DCE_EN_LANE
#define reg_DFE_UPDATE_VREF_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_VREF_EN_LANE
#define reg_DFE_UPDATE_HN1_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_HN1_EN_LANE
#define reg_DFE_UPDATE_HP1_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_HP1_EN_LANE
#define reg_DFE_UPDATE_UB_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_UB_EN_LANE
#define reg_DFE_UPDATE_UT_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_UT_EN_LANE
#define reg_DFE_UPDATE_VREF_MID_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_VREF_MID_EN_LANE

// 0x0010	DFE_CTRL_REG4		DFE Control
typedef union {
	struct {
		uint8_t EYE_OPEN_LANE_5_0                        : 6;	/*  [5:0]     r/w   0*/
		uint8_t DFE_DIS_LANE                             : 1;	/*      6     r/w   0*/
		uint8_t ANA_RX_SEL_MU_F_LANE                     : 1;	/*      7     r/w   1*/
		uint8_t DFE_RATE_MODE_LANE_1_0                   : 2;	/*  [9:8]     r/w   0*/
		uint8_t DFE_F0K_COARSE_STEP_EN_LANE              : 1;	/*     10     r/w   0*/
		uint8_t DFE_F0D_COARSE_STEP_EN_LANE              : 1;	/*     11     r/w   0*/
		uint8_t DFE_F0B_FINE_STEP_EN_LANE                : 1;	/*     12     r/w   0*/
		uint8_t DFE_F0B_COARSE_STEP_EN_LANE              : 1;	/*     13     r/w   0*/
		uint8_t DFE_F0_FINE_STEP_EN_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t DFE_F0_COARSE_STEP_EN_LANE               : 1;	/*     15     r/w   0*/
		uint8_t DFE_VREF_FINE_STEP_EN_LANE               : 1;	/*     16     r/w   0*/
		uint8_t DFE_VREF_COARSE_STEP_EN_LANE             : 1;	/*     17     r/w   0*/
		uint8_t DFE_DC_FINE_STEP_EN_LANE                 : 1;	/*     18     r/w   0*/
		uint8_t DFE_DC_COARSE_STEP_EN_LANE               : 1;	/*     19     r/w   0*/
		uint8_t DFE_FINE_STEP_EN_LANE                    : 1;	/*     20     r/w   0*/
		uint8_t DFE_COARSE_STEP_EN_LANE                  : 1;	/*     21     r/w   0*/
		uint8_t CDR_EDGE_PATH_SEL_LANE                   : 1;	/*     22     r/w   0*/
		uint8_t DFE_TAP_SETTLE_SCALE_LANE_1_0_b0         : 1;	/*[24:23]     r/w   0*/
		uint8_t DFE_TAP_SETTLE_SCALE_LANE_1_0_b1         : 1;	/*[24:23]     r/w   0*/
		uint8_t DFE_RT_SAT_VREF_LANE                     : 1;	/*     25       r   0*/
		uint8_t DFE_RT_SAT_F0_LANE                       : 1;	/*     26       r   0*/
		uint8_t DFE_LOCK_CLR_LANE                        : 1;	/*     27     r/w   0*/
		uint8_t DFE_LOCK_LANE                            : 1;	/*     28       r   0*/
		uint8_t DFE_DLY_SAT_VREF_LANE                    : 1;	/*     29       r   0*/
		uint8_t DFE_DLY_SAT_F0_LANE                      : 1;	/*     30       r   0*/
		uint8_t DFE_TRACK_MODE_LANE                      : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG4_t;
__xdata __at( 0x2410 ) volatile DFE_CTRL_REG4_t DFE_CTRL_REG4;
#define reg_EYE_OPEN_LANE_5_0  DFE_CTRL_REG4.BF.EYE_OPEN_LANE_5_0
#define reg_DFE_DIS_LANE  DFE_CTRL_REG4.BF.DFE_DIS_LANE
#define reg_ANA_RX_SEL_MU_F_LANE  DFE_CTRL_REG4.BF.ANA_RX_SEL_MU_F_LANE
#define reg_DFE_RATE_MODE_LANE_1_0  DFE_CTRL_REG4.BF.DFE_RATE_MODE_LANE_1_0
#define reg_DFE_F0K_COARSE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_F0K_COARSE_STEP_EN_LANE
#define reg_DFE_F0D_COARSE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_F0D_COARSE_STEP_EN_LANE
#define reg_DFE_F0B_FINE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_F0B_FINE_STEP_EN_LANE
#define reg_DFE_F0B_COARSE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_F0B_COARSE_STEP_EN_LANE
#define reg_DFE_F0_FINE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_F0_FINE_STEP_EN_LANE
#define reg_DFE_F0_COARSE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_F0_COARSE_STEP_EN_LANE
#define reg_DFE_VREF_FINE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_VREF_FINE_STEP_EN_LANE
#define reg_DFE_VREF_COARSE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_VREF_COARSE_STEP_EN_LANE
#define reg_DFE_DC_FINE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_DC_FINE_STEP_EN_LANE
#define reg_DFE_DC_COARSE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_DC_COARSE_STEP_EN_LANE
#define reg_DFE_FINE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_FINE_STEP_EN_LANE
#define reg_DFE_COARSE_STEP_EN_LANE  DFE_CTRL_REG4.BF.DFE_COARSE_STEP_EN_LANE
#define reg_CDR_EDGE_PATH_SEL_LANE  DFE_CTRL_REG4.BF.CDR_EDGE_PATH_SEL_LANE
#define reg_DFE_TAP_SETTLE_SCALE_LANE_1_0_b0  DFE_CTRL_REG4.BF.DFE_TAP_SETTLE_SCALE_LANE_1_0_b0
#define reg_DFE_TAP_SETTLE_SCALE_LANE_1_0_b1  DFE_CTRL_REG4.BF.DFE_TAP_SETTLE_SCALE_LANE_1_0_b1
#define reg_DFE_RT_SAT_VREF_LANE  DFE_CTRL_REG4.BF.DFE_RT_SAT_VREF_LANE
#define reg_DFE_RT_SAT_F0_LANE  DFE_CTRL_REG4.BF.DFE_RT_SAT_F0_LANE
#define reg_DFE_LOCK_CLR_LANE  DFE_CTRL_REG4.BF.DFE_LOCK_CLR_LANE
#define reg_DFE_LOCK_LANE  DFE_CTRL_REG4.BF.DFE_LOCK_LANE
#define reg_DFE_DLY_SAT_VREF_LANE  DFE_CTRL_REG4.BF.DFE_DLY_SAT_VREF_LANE
#define reg_DFE_DLY_SAT_F0_LANE  DFE_CTRL_REG4.BF.DFE_DLY_SAT_F0_LANE
#define reg_DFE_TRACK_MODE_LANE  DFE_CTRL_REG4.BF.DFE_TRACK_MODE_LANE

// 0x0014	DFE_CTRL_REG5		Dfe_ctrl Output Override
typedef union {
	struct {
		uint8_t DFE_CTRL_BYPASS_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t DFE_CTRL_ADAPT_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t DFE_CTRL_POL0_LANE                       : 1;	/*      2     r/w   0*/
		uint8_t DFE_CTRL_POL2_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_CTRL_POL3_LANE_2_0_b0                : 2;	/*  [8:6]     r/w 3'h0*/
		uint8_t DFE_CTRL_POL3_LANE_2_0_b1                : 1;	/*  [8:6]     r/w 3'h0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t DFE_CTRL_POL4_LANE_2_0                   : 3;	/*[12:10]     r/w 3'h0*/
		uint8_t DFE_CTRL_SPLR_LANE_2_0                   : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_CTRL_FB_SEL_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t DFE_FSM_DEBUG_MODE_LANE                  : 1;	/*     28     r/w   0*/
		uint8_t DFE_FSM_DEBUG_NEXT_LANE                  : 1;	/*     29     r/w   0*/
		uint8_t DFE_FSM_DEBUG_PAUSE_LANE                 : 1;	/*     30       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG5_t;
__xdata __at( 0x2414 ) volatile DFE_CTRL_REG5_t DFE_CTRL_REG5;
#define reg_DFE_CTRL_BYPASS_LANE  DFE_CTRL_REG5.BF.DFE_CTRL_BYPASS_LANE
#define reg_DFE_CTRL_ADAPT_LANE  DFE_CTRL_REG5.BF.DFE_CTRL_ADAPT_LANE
#define reg_DFE_CTRL_POL0_LANE  DFE_CTRL_REG5.BF.DFE_CTRL_POL0_LANE
#define reg_DFE_CTRL_POL2_LANE_2_0  DFE_CTRL_REG5.BF.DFE_CTRL_POL2_LANE_2_0
#define reg_DFE_CTRL_POL3_LANE_2_0_b0  DFE_CTRL_REG5.BF.DFE_CTRL_POL3_LANE_2_0_b0
#define reg_DFE_CTRL_POL3_LANE_2_0_b1  DFE_CTRL_REG5.BF.DFE_CTRL_POL3_LANE_2_0_b1
#define reg_DFE_CTRL_POL4_LANE_2_0  DFE_CTRL_REG5.BF.DFE_CTRL_POL4_LANE_2_0
#define reg_DFE_CTRL_SPLR_LANE_2_0  DFE_CTRL_REG5.BF.DFE_CTRL_SPLR_LANE_2_0
#define reg_DFE_CTRL_FB_SEL_LANE_7_0  DFE_CTRL_REG5.BF.DFE_CTRL_FB_SEL_LANE_7_0
#define reg_DFE_FSM_DEBUG_MODE_LANE  DFE_CTRL_REG5.BF.DFE_FSM_DEBUG_MODE_LANE
#define reg_DFE_FSM_DEBUG_NEXT_LANE  DFE_CTRL_REG5.BF.DFE_FSM_DEBUG_NEXT_LANE
#define reg_DFE_FSM_DEBUG_PAUSE_LANE  DFE_CTRL_REG5.BF.DFE_FSM_DEBUG_PAUSE_LANE

// 0x0018	DFE_CTRL_REG6		DFE Timing Control
typedef union {
	struct {
		uint8_t DFE_ADAPT_LPNUM_LANE_9_0_b0              : 8;	/*  [9:0]     r/w 10'h1*/
		uint8_t DFE_ADAPT_LPNUM_LANE_9_0_b1              : 2;	/*  [9:0]     r/w 10'h1*/
		uint8_t DFE_POL_LPNUM_LANE_9_0_b0                : 6;	/*[19:10]     r/w 10'h1*/
		uint8_t DFE_POL_LPNUM_LANE_9_0_b1                : 4;	/*[19:10]     r/w 10'h1*/
		uint8_t DFE_SWITCH_TIME_LANE_9_0_b0              : 4;	/*[29:20]     r/w 10'h3f*/
		uint8_t DFE_SWITCH_TIME_LANE_9_0_b1              : 6;	/*[29:20]     r/w 10'h3f*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG6_t;
__xdata __at( 0x2418 ) volatile DFE_CTRL_REG6_t DFE_CTRL_REG6;
#define reg_DFE_ADAPT_LPNUM_LANE_9_0_b0  DFE_CTRL_REG6.BF.DFE_ADAPT_LPNUM_LANE_9_0_b0
#define reg_DFE_ADAPT_LPNUM_LANE_9_0_b1  DFE_CTRL_REG6.BF.DFE_ADAPT_LPNUM_LANE_9_0_b1
#define reg_DFE_POL_LPNUM_LANE_9_0_b0  DFE_CTRL_REG6.BF.DFE_POL_LPNUM_LANE_9_0_b0
#define reg_DFE_POL_LPNUM_LANE_9_0_b1  DFE_CTRL_REG6.BF.DFE_POL_LPNUM_LANE_9_0_b1
#define reg_DFE_SWITCH_TIME_LANE_9_0_b0  DFE_CTRL_REG6.BF.DFE_SWITCH_TIME_LANE_9_0_b0
#define reg_DFE_SWITCH_TIME_LANE_9_0_b1  DFE_CTRL_REG6.BF.DFE_SWITCH_TIME_LANE_9_0_b1

// 0x001c	RX_EQ_CLK_CTRL		Dfe And Eom Clock Reset Control
typedef union {
	struct {
		uint8_t DFE_CLK_OFF_LANE                         : 1;	/*      0     r/w   1*/
		uint8_t DFE_MCU_CLK_EN_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t RESET_DFE_LANE                           : 1;	/*      2     r/w   1*/
		uint8_t DFE_UPDATE_DIS_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t DFE_EN_LANE                              : 1;	/*      4     r/w   1*/
		uint8_t DFE_PAT_DIS_LANE                         : 1;	/*      5     r/w   1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_CLK_ON_LANE                          : 1;	/*      8     r/w   0*/
		uint8_t INT_DFE_EN_LANE                          : 1;	/*      9       r   0*/
		uint8_t DFE_F0X_SEL_LANE_4_0                     : 5;	/*[14:10]     r/w   0*/
		uint8_t DFE_F0X_PART_ATRAN_ADAPT_EN_LANE         : 1;	/*     15     r/w   0*/
		uint8_t DFE_F0X_FULL_ATRAN_ADAPT_EN_LANE         : 1;	/*     16     r/w   0*/
		uint8_t DFE_F0X_PART_TRAN_ADAPT_EN_LANE          : 1;	/*     17     r/w   0*/
		uint8_t DFE_F0X_FULL_TRAN_ADAPT_EN_LANE          : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 5;	/*[28:19]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/*[28:19]     r/w   0*/
		uint8_t DFE_UPDATE_DIS_FM_REG_LANE               : 1;	/*     29     r/w   0*/
		uint8_t DFE_PAT_DIS_FM_REG_LANE                  : 1;	/*     30     r/w   0*/
		uint8_t DFE_EN_FM_REG_LANE                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EQ_CLK_CTRL_t;
__xdata __at( 0x241c ) volatile RX_EQ_CLK_CTRL_t RX_EQ_CLK_CTRL;
#define reg_DFE_CLK_OFF_LANE  RX_EQ_CLK_CTRL.BF.DFE_CLK_OFF_LANE
#define reg_DFE_MCU_CLK_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_MCU_CLK_EN_LANE
#define reg_RESET_DFE_LANE  RX_EQ_CLK_CTRL.BF.RESET_DFE_LANE
#define reg_DFE_UPDATE_DIS_LANE  RX_EQ_CLK_CTRL.BF.DFE_UPDATE_DIS_LANE
#define reg_DFE_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_EN_LANE
#define reg_DFE_PAT_DIS_LANE  RX_EQ_CLK_CTRL.BF.DFE_PAT_DIS_LANE
#define reg_DFE_CLK_ON_LANE  RX_EQ_CLK_CTRL.BF.DFE_CLK_ON_LANE
#define reg_INT_DFE_EN_LANE  RX_EQ_CLK_CTRL.BF.INT_DFE_EN_LANE
#define reg_DFE_F0X_SEL_LANE_4_0  RX_EQ_CLK_CTRL.BF.DFE_F0X_SEL_LANE_4_0
#define reg_DFE_F0X_PART_ATRAN_ADAPT_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_F0X_PART_ATRAN_ADAPT_EN_LANE
#define reg_DFE_F0X_FULL_ATRAN_ADAPT_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_F0X_FULL_ATRAN_ADAPT_EN_LANE
#define reg_DFE_F0X_PART_TRAN_ADAPT_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_F0X_PART_TRAN_ADAPT_EN_LANE
#define reg_DFE_F0X_FULL_TRAN_ADAPT_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_F0X_FULL_TRAN_ADAPT_EN_LANE
#define reg_DFE_UPDATE_DIS_FM_REG_LANE  RX_EQ_CLK_CTRL.BF.DFE_UPDATE_DIS_FM_REG_LANE
#define reg_DFE_PAT_DIS_FM_REG_LANE  RX_EQ_CLK_CTRL.BF.DFE_PAT_DIS_FM_REG_LANE
#define reg_DFE_EN_FM_REG_LANE  RX_EQ_CLK_CTRL.BF.DFE_EN_FM_REG_LANE

// 0x0020	DFE_ANA_REG0		DFE To Analog Force
typedef union {
	struct {
		uint8_t DFE_CTRL_ANA_BYPASS_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t ANA_RX_DFE_FLOATING_SEL_FORCE_LANE       : 1;	/*      1     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P1_FORCE_LANE : 1;	/*      2     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P2_FORCE_LANE : 1;	/*      3     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P3_FORCE_LANE : 1;	/*      4     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P4_FORCE_LANE : 1;	/*      5     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_D_FORCE_LANE        : 1;	/*      6     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_S_FORCE_LANE        : 1;	/*      7     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_P1_FORCE_LANE     : 1;	/*      8     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_P2_FORCE_LANE     : 1;	/*      9     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_P3_FORCE_LANE     : 1;	/*     10     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_P4_FORCE_LANE     : 1;	/*     11     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_P1_FORCE_LANE     : 1;	/*     12     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_P2_FORCE_LANE     : 1;	/*     13     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_P3_FORCE_LANE     : 1;	/*     14     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_P4_FORCE_LANE     : 1;	/*     15     r/w   0*/
		uint8_t ANA_RX_DFE_F4_POL_EN_D_FORCE_LANE        : 1;	/*     16     r/w   0*/
		uint8_t ANA_RX_DFE_F4_POL_EN_S_FORCE_LANE        : 1;	/*     17     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_D_FORCE_LANE           : 1;	/*     18     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_S_FORCE_LANE           : 1;	/*     19     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_P1P3_FORCE_LANE      : 1;	/*     20     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_S_P1P3_FORCE_LANE      : 1;	/*     21     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_P2P4_FORCE_LANE      : 1;	/*     22     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_S_P2P4_FORCE_LANE      : 1;	/*     23     r/w   0*/
		uint8_t ANA_RX_DFE_F4_POL_D_FORCE_LANE           : 1;	/*     24     r/w   0*/
		uint8_t ANA_RX_DFE_F4_POL_S_FORCE_LANE           : 1;	/*     25     r/w   0*/
		uint8_t ANA_RX_PAM2_LP_EN_FORCE_LANE             : 1;	/*     26     r/w   0*/
		uint8_t ANA_RX_ADAPT_P1P3_EN_FORCE_LANE          : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_ANA_REG0_t;
__xdata __at( 0x2420 ) volatile DFE_ANA_REG0_t DFE_ANA_REG0;
#define reg_DFE_CTRL_ANA_BYPASS_LANE  DFE_ANA_REG0.BF.DFE_CTRL_ANA_BYPASS_LANE
#define reg_ANA_RX_DFE_FLOATING_SEL_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_FLOATING_SEL_FORCE_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P1_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P1_FORCE_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P2_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P2_FORCE_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P3_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P3_FORCE_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P4_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P4_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_D_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_EN_D_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_S_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_EN_S_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_D_P1_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_D_P1_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_D_P2_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_D_P2_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_D_P3_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_D_P3_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_D_P4_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_D_P4_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_S_P1_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_S_P1_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_S_P2_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_S_P2_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_S_P3_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_S_P3_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_S_P4_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_S_P4_FORCE_LANE
#define reg_ANA_RX_DFE_F4_POL_EN_D_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F4_POL_EN_D_FORCE_LANE
#define reg_ANA_RX_DFE_F4_POL_EN_S_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F4_POL_EN_S_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_D_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_D_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_S_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_S_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_D_P1P3_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_D_P1P3_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_S_P1P3_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_S_P1P3_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_D_P2P4_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_D_P2P4_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_S_P2P4_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_S_P2P4_FORCE_LANE
#define reg_ANA_RX_DFE_F4_POL_D_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F4_POL_D_FORCE_LANE
#define reg_ANA_RX_DFE_F4_POL_S_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F4_POL_S_FORCE_LANE
#define reg_ANA_RX_PAM2_LP_EN_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_PAM2_LP_EN_FORCE_LANE
#define reg_ANA_RX_ADAPT_P1P3_EN_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_ADAPT_P1P3_EN_FORCE_LANE

// 0x0024	DFE_ANA_REG1		DFE To Analog Override 0
typedef union {
	struct {
		uint8_t ANA_RX_DFE_FLOATING_SEL_LANE_3_0         : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P1_LANE   : 1;	/*      4     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P2_LANE   : 1;	/*      5     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P3_LANE   : 1;	/*      6     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P4_LANE   : 1;	/*      7     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_P1P3_LANE_2_0        : 3;	/* [10:8]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_S_P1P3_LANE_2_0        : 3;	/*[13:11]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b0     : 2;	/*[16:14]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b1     : 1;	/*[16:14]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_S_P2P4_LANE_2_0        : 3;	/*[19:17]     r/w   0*/
		uint8_t ANA_RX_DFE_F4_POL_D_LANE_2_0             : 3;	/*[22:20]     r/w   0*/
		uint8_t ANA_RX_DFE_F4_POL_S_LANE_2_0_b0          : 1;	/*[25:23]     r/w   0*/
		uint8_t ANA_RX_DFE_F4_POL_S_LANE_2_0_b1          : 2;	/*[25:23]     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_D_LANE              : 1;	/*     26     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_S_LANE              : 1;	/*     27     r/w   0*/
		uint8_t ANA_RX_DFE_F4_POL_EN_D_LANE              : 1;	/*     28     r/w   0*/
		uint8_t ANA_RX_DFE_F4_POL_EN_S_LANE              : 1;	/*     29     r/w   0*/
		uint8_t ANA_RX_PAM2_LP_EN_LANE                   : 1;	/*     30     r/w   0*/
		uint8_t ANA_PU_DFE_LANE                          : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_ANA_REG1_t;
__xdata __at( 0x2424 ) volatile DFE_ANA_REG1_t DFE_ANA_REG1;
#define reg_ANA_RX_DFE_FLOATING_SEL_LANE_3_0  DFE_ANA_REG1.BF.ANA_RX_DFE_FLOATING_SEL_LANE_3_0
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P1_LANE  DFE_ANA_REG1.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P1_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P2_LANE  DFE_ANA_REG1.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P2_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P3_LANE  DFE_ANA_REG1.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P3_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P4_LANE  DFE_ANA_REG1.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P4_LANE
#define reg_ANA_RX_DFE_F2_POL_D_P1P3_LANE_2_0  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_D_P1P3_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_S_P1P3_LANE_2_0  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_S_P1P3_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b0  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b0
#define reg_ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b1  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_D_P2P4_LANE_2_0_b1
#define reg_ANA_RX_DFE_F2_POL_S_P2P4_LANE_2_0  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_S_P2P4_LANE_2_0
#define reg_ANA_RX_DFE_F4_POL_D_LANE_2_0  DFE_ANA_REG1.BF.ANA_RX_DFE_F4_POL_D_LANE_2_0
#define reg_ANA_RX_DFE_F4_POL_S_LANE_2_0_b0  DFE_ANA_REG1.BF.ANA_RX_DFE_F4_POL_S_LANE_2_0_b0
#define reg_ANA_RX_DFE_F4_POL_S_LANE_2_0_b1  DFE_ANA_REG1.BF.ANA_RX_DFE_F4_POL_S_LANE_2_0_b1
#define reg_ANA_RX_DFE_F0_POL_EN_D_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F0_POL_EN_D_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_S_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F0_POL_EN_S_LANE
#define reg_ANA_RX_DFE_F4_POL_EN_D_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F4_POL_EN_D_LANE
#define reg_ANA_RX_DFE_F4_POL_EN_S_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F4_POL_EN_S_LANE
#define reg_ANA_RX_PAM2_LP_EN_LANE  DFE_ANA_REG1.BF.ANA_RX_PAM2_LP_EN_LANE
#define reg_ANA_PU_DFE_LANE  DFE_ANA_REG1.BF.ANA_PU_DFE_LANE

// 0x0028	DFE_ANA_REG2		DFE To Analog Override 2
typedef union {
	struct {
		uint8_t ANA_RX_DFE_F2_POL_EN_D_P1_LANE_2_0       : 3;	/*  [2:0]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_P2_LANE_2_0       : 3;	/*  [5:3]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_P3_LANE_2_0_b0    : 2;	/*  [8:6]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_P3_LANE_2_0_b1    : 1;	/*  [8:6]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_P4_LANE_2_0       : 3;	/* [11:9]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_P1_LANE_2_0       : 3;	/*[14:12]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b0    : 1;	/*[17:15]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b1    : 2;	/*[17:15]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_P3_LANE_2_0       : 3;	/*[20:18]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_P4_LANE_2_0       : 3;	/*[23:21]     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_D_LANE_2_0             : 3;	/*[26:24]     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_S_LANE_2_0             : 3;	/*[29:27]     r/w   0*/
		uint8_t ANA_RX_ADAPT_P1P3_EN_LANE                : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_ANA_REG2_t;
__xdata __at( 0x2428 ) volatile DFE_ANA_REG2_t DFE_ANA_REG2;
#define reg_ANA_RX_DFE_F2_POL_EN_D_P1_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_D_P1_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_EN_D_P2_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_D_P2_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_EN_D_P3_LANE_2_0_b0  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_D_P3_LANE_2_0_b0
#define reg_ANA_RX_DFE_F2_POL_EN_D_P3_LANE_2_0_b1  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_D_P3_LANE_2_0_b1
#define reg_ANA_RX_DFE_F2_POL_EN_D_P4_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_D_P4_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_EN_S_P1_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_S_P1_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b0  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b0
#define reg_ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b1  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_S_P2_LANE_2_0_b1
#define reg_ANA_RX_DFE_F2_POL_EN_S_P3_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_S_P3_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_EN_S_P4_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F2_POL_EN_S_P4_LANE_2_0
#define reg_ANA_RX_DFE_F0_POL_D_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F0_POL_D_LANE_2_0
#define reg_ANA_RX_DFE_F0_POL_S_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F0_POL_S_LANE_2_0
#define reg_ANA_RX_ADAPT_P1P3_EN_LANE  DFE_ANA_REG2.BF.ANA_RX_ADAPT_P1P3_EN_LANE

// 0x002c	DFE_STEP_REG0		DFE Step Size
typedef union {
	struct {
		uint8_t DFE_STEP_COARSE_EO_DN_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t DFE_STEP_COARSE_EO_UP_LANE_3_0           : 4;	/*  [7:4]     r/w 4'h9*/
		uint8_t DFE_STEP_COARSE_FX2_LANE_3_0             : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t DFE_STEP_COARSE_FX1_LANE_3_0             : 4;	/*[15:12]     r/w 4'h2*/
		uint8_t DFE_STEP_COARSE_F0_LANE_3_0              : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t DFE_STEP_COARSE_DC_LANE_3_0              : 4;	/*[23:20]     r/w 4'h2*/
		uint8_t DFE_STEP_ACCU_DC_LANE_3_0                : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t DFE_STEP_FINE_DC_LANE_3_0                : 4;	/*[31:28]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG0_t;
__xdata __at( 0x242c ) volatile DFE_STEP_REG0_t DFE_STEP_REG0;
#define reg_DFE_STEP_COARSE_EO_DN_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_EO_DN_LANE_3_0
#define reg_DFE_STEP_COARSE_EO_UP_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_EO_UP_LANE_3_0
#define reg_DFE_STEP_COARSE_FX2_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_FX2_LANE_3_0
#define reg_DFE_STEP_COARSE_FX1_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_FX1_LANE_3_0
#define reg_DFE_STEP_COARSE_F0_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_F0_LANE_3_0
#define reg_DFE_STEP_COARSE_DC_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_DC_LANE_3_0
#define reg_DFE_STEP_ACCU_DC_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_ACCU_DC_LANE_3_0
#define reg_DFE_STEP_FINE_DC_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_FINE_DC_LANE_3_0

// 0x0030	DFE_STEP_REG1		DFE Step Size
typedef union {
	struct {
		uint8_t DFE_STEP_ACCU_FX2_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t DFE_STEP_ACCU_FX1_LANE_3_0               : 4;	/*  [7:4]     r/w 4'h8*/
		uint8_t DFE_STEP_ACCU_F0_LANE_3_0                : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t DFE_STEP_FINE_EO_DN_LANE_3_0             : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_EO_UP_LANE_3_0             : 4;	/*[19:16]     r/w 4'ha*/
		uint8_t DFE_STEP_FINE_FX2_LANE_3_0               : 4;	/*[23:20]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_FX1_LANE_3_0               : 4;	/*[27:24]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_F0_LANE_3_0                : 4;	/*[31:28]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG1_t;
__xdata __at( 0x2430 ) volatile DFE_STEP_REG1_t DFE_STEP_REG1;
#define reg_DFE_STEP_ACCU_FX2_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_ACCU_FX2_LANE_3_0
#define reg_DFE_STEP_ACCU_FX1_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_ACCU_FX1_LANE_3_0
#define reg_DFE_STEP_ACCU_F0_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_ACCU_F0_LANE_3_0
#define reg_DFE_STEP_FINE_EO_DN_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_EO_DN_LANE_3_0
#define reg_DFE_STEP_FINE_EO_UP_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_EO_UP_LANE_3_0
#define reg_DFE_STEP_FINE_FX2_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_FX2_LANE_3_0
#define reg_DFE_STEP_FINE_FX1_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_FX1_LANE_3_0
#define reg_DFE_STEP_FINE_F0_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_F0_LANE_3_0

// 0x0034	DFE_STEP_REG2		DFE Step Size
typedef union {
	struct {
		uint8_t DFE_STEP_COARSE_FX3_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t DFE_STEP_FINE_PEAK_UP_LANE_3_0           : 4;	/*  [7:4]     r/w 4'h6*/
		uint8_t DFE_STEP_COARSE_PEAK_UP_LANE_3_0         : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t DFE_STEP_FINE_PEAK_DN_LANE_3_0           : 4;	/*[15:12]     r/w 4'ha*/
		uint8_t DFE_STEP_COARSE_PEAK_DN_LANE_3_0         : 4;	/*[19:16]     r/w 4'h9*/
		uint8_t DFE_STEP_ACCU_F0B_LANE_3_0               : 4;	/*[23:20]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_F0B_LANE_3_0               : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t DFE_STEP_COARSE_F0B_LANE_3_0             : 4;	/*[31:28]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG2_t;
__xdata __at( 0x2434 ) volatile DFE_STEP_REG2_t DFE_STEP_REG2;
#define reg_DFE_STEP_COARSE_FX3_LANE_3_0  DFE_STEP_REG2.BF.DFE_STEP_COARSE_FX3_LANE_3_0
#define reg_DFE_STEP_FINE_PEAK_UP_LANE_3_0  DFE_STEP_REG2.BF.DFE_STEP_FINE_PEAK_UP_LANE_3_0
#define reg_DFE_STEP_COARSE_PEAK_UP_LANE_3_0  DFE_STEP_REG2.BF.DFE_STEP_COARSE_PEAK_UP_LANE_3_0
#define reg_DFE_STEP_FINE_PEAK_DN_LANE_3_0  DFE_STEP_REG2.BF.DFE_STEP_FINE_PEAK_DN_LANE_3_0
#define reg_DFE_STEP_COARSE_PEAK_DN_LANE_3_0  DFE_STEP_REG2.BF.DFE_STEP_COARSE_PEAK_DN_LANE_3_0
#define reg_DFE_STEP_ACCU_F0B_LANE_3_0  DFE_STEP_REG2.BF.DFE_STEP_ACCU_F0B_LANE_3_0
#define reg_DFE_STEP_FINE_F0B_LANE_3_0  DFE_STEP_REG2.BF.DFE_STEP_FINE_F0B_LANE_3_0
#define reg_DFE_STEP_COARSE_F0B_LANE_3_0  DFE_STEP_REG2.BF.DFE_STEP_COARSE_F0B_LANE_3_0

// 0x0038	DFE_STEP_REG3		DFE Step Size
typedef union {
	struct {
		uint8_t DFE_STEP_ACCU_FX3_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t DFE_STEP_FINE_FX3_LANE_3_0               : 4;	/*  [7:4]     r/w 4'h6*/
		uint8_t DFE_STEP_ACCU_F2_TUNE_LANE_3_0           : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_F2_TUNE_LANE_3_0           : 4;	/*[15:12]     r/w 4'h4*/
		uint8_t DFE_STEP_COARSE_F2_TUNE_LANE_3_0         : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t DFE_STEP_ACCU_EE_LANE_3_0                : 4;	/*[23:20]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_EE_LANE_3_0                : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t DFE_STEP_COARSE_EE_LANE_3_0              : 4;	/*[31:28]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG3_t;
__xdata __at( 0x2438 ) volatile DFE_STEP_REG3_t DFE_STEP_REG3;
#define reg_DFE_STEP_ACCU_FX3_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_ACCU_FX3_LANE_3_0
#define reg_DFE_STEP_FINE_FX3_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_FINE_FX3_LANE_3_0
#define reg_DFE_STEP_ACCU_F2_TUNE_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_ACCU_F2_TUNE_LANE_3_0
#define reg_DFE_STEP_FINE_F2_TUNE_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_FINE_F2_TUNE_LANE_3_0
#define reg_DFE_STEP_COARSE_F2_TUNE_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_COARSE_F2_TUNE_LANE_3_0
#define reg_DFE_STEP_ACCU_EE_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_ACCU_EE_LANE_3_0
#define reg_DFE_STEP_FINE_EE_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_FINE_EE_LANE_3_0
#define reg_DFE_STEP_COARSE_EE_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_COARSE_EE_LANE_3_0

// 0x003c	DFE_STEP_REG4		DFE Step Size
typedef union {
	struct {
		uint8_t DFE_STEP_ACCU_VREF_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_VREF_LANE_3_0              : 4;	/*  [7:4]     r/w 4'h4*/
		uint8_t DFE_STEP_COARSE_VREF_LANE_3_0            : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t DFE_STEP_ACCU_FIR_LANE_3_0               : 4;	/*[15:12]     r/w 4'h4*/
		uint8_t DFE_STEP_FINE_FIR_LANE_3_0               : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t DFE_STEP_COARSE_FIR_LANE_3_0             : 4;	/*[23:20]     r/w 4'h2*/
		uint8_t DFE_F2_THRESH_TUNE_LANE_5_0              : 6;	/*[29:24]     r/w 6'h10*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG4_t;
__xdata __at( 0x243c ) volatile DFE_STEP_REG4_t DFE_STEP_REG4;
#define reg_DFE_STEP_ACCU_VREF_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_ACCU_VREF_LANE_3_0
#define reg_DFE_STEP_FINE_VREF_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_FINE_VREF_LANE_3_0
#define reg_DFE_STEP_COARSE_VREF_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_COARSE_VREF_LANE_3_0
#define reg_DFE_STEP_ACCU_FIR_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_ACCU_FIR_LANE_3_0
#define reg_DFE_STEP_FINE_FIR_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_FINE_FIR_LANE_3_0
#define reg_DFE_STEP_COARSE_FIR_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_COARSE_FIR_LANE_3_0
#define reg_DFE_F2_THRESH_TUNE_LANE_5_0  DFE_STEP_REG4.BF.DFE_F2_THRESH_TUNE_LANE_5_0

// 0x0040	DFE_STATIC_REG0		
typedef union {
	struct {
		uint8_t DFE_EO_UP_THRE_COARSE_LANE_4_0           : 5;	/*  [4:0]     r/w 5'h3*/
		uint8_t DFE_EO_UP_THRE_FINE_LANE_4_0_b0          : 3;	/*  [9:5]     r/w 5'h4*/
		uint8_t DFE_EO_UP_THRE_FINE_LANE_4_0_b1          : 2;	/*  [9:5]     r/w 5'h4*/
		uint8_t DFE_FR_EVEN_SEL_LANE                     : 1;	/*     10     r/w   1*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t DFE_F2_THRESH_TUNE_EN_LANE               : 1;	/*     13     r/w   1*/
		uint8_t DFE_ADAPT_ADJ_VREF_DC_SWAP_LANE_1_0      : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_ADAPT_ADJ_VREF_DC_THRESH_2_LANE_5_0  : 6;	/*[21:16]     r/w 6'h12*/
		uint8_t DFE_COUPLE_TAP_MODE_LANE                 : 1;	/*     22     r/w   0*/
		uint8_t DFE_SAT_HOLD_LANE                        : 1;	/*     23     r/w   0*/
		uint8_t DFE_ADAPT_ADJ_VREF_DC_THRESH_1_LANE_4_0  : 5;	/*[28:24]     r/w 5'h6*/
		uint8_t DFE_SQ_EN_LANE                           : 1;	/*     29     r/w   1*/
		uint8_t DFE_SAT_EN_LANE_1_0                      : 2;	/*[31:30]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG0_t;
__xdata __at( 0x2440 ) volatile DFE_STATIC_REG0_t DFE_STATIC_REG0;
#define reg_DFE_EO_UP_THRE_COARSE_LANE_4_0  DFE_STATIC_REG0.BF.DFE_EO_UP_THRE_COARSE_LANE_4_0
#define reg_DFE_EO_UP_THRE_FINE_LANE_4_0_b0  DFE_STATIC_REG0.BF.DFE_EO_UP_THRE_FINE_LANE_4_0_b0
#define reg_DFE_EO_UP_THRE_FINE_LANE_4_0_b1  DFE_STATIC_REG0.BF.DFE_EO_UP_THRE_FINE_LANE_4_0_b1
#define reg_DFE_FR_EVEN_SEL_LANE  DFE_STATIC_REG0.BF.DFE_FR_EVEN_SEL_LANE
#define reg_DFE_F2_THRESH_TUNE_EN_LANE  DFE_STATIC_REG0.BF.DFE_F2_THRESH_TUNE_EN_LANE
#define reg_DFE_ADAPT_ADJ_VREF_DC_SWAP_LANE_1_0  DFE_STATIC_REG0.BF.DFE_ADAPT_ADJ_VREF_DC_SWAP_LANE_1_0
#define reg_DFE_ADAPT_ADJ_VREF_DC_THRESH_2_LANE_5_0  DFE_STATIC_REG0.BF.DFE_ADAPT_ADJ_VREF_DC_THRESH_2_LANE_5_0
#define reg_DFE_COUPLE_TAP_MODE_LANE  DFE_STATIC_REG0.BF.DFE_COUPLE_TAP_MODE_LANE
#define reg_DFE_SAT_HOLD_LANE  DFE_STATIC_REG0.BF.DFE_SAT_HOLD_LANE
#define reg_DFE_ADAPT_ADJ_VREF_DC_THRESH_1_LANE_4_0  DFE_STATIC_REG0.BF.DFE_ADAPT_ADJ_VREF_DC_THRESH_1_LANE_4_0
#define reg_DFE_SQ_EN_LANE  DFE_STATIC_REG0.BF.DFE_SQ_EN_LANE
#define reg_DFE_SAT_EN_LANE_1_0  DFE_STATIC_REG0.BF.DFE_SAT_EN_LANE_1_0

// 0x0044	DFE_STATIC_REG1		
typedef union {
	struct {
		uint8_t DFE_ANA_SETTLE_DC_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t DFE_ANA_SETTLE_F2_TUNE_LANE_1_0          : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t DFE_ANA_SETTLE_F5TO30_LANE_1_0           : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t DFE_ANA_SETTLE_FIR_LANE_1_0              : 2;	/*  [7:6]     r/w 2'h2*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t DFE_ANA_SETTLE_F0TO4_LANE_1_0            : 2;	/*[13:12]     r/w 2'h2*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_ANA_SETTLE_PATHSWITCH_LANE_3_0       : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t DFE_ANA_SETTLE_PATHON_LANE_3_0           : 4;	/*[23:20]     r/w 4'h8*/
		uint8_t DFE_ANA_SETTLE_PATHOFF_LANE_3_0          : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t DFE_FAST_SETTLE_LANE                     : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG1_t;
__xdata __at( 0x2444 ) volatile DFE_STATIC_REG1_t DFE_STATIC_REG1;
#define reg_DFE_ANA_SETTLE_DC_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_DC_LANE_1_0
#define reg_DFE_ANA_SETTLE_F2_TUNE_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_F2_TUNE_LANE_1_0
#define reg_DFE_ANA_SETTLE_F5TO30_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_F5TO30_LANE_1_0
#define reg_DFE_ANA_SETTLE_FIR_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_FIR_LANE_1_0
#define reg_DFE_ANA_SETTLE_F0TO4_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_F0TO4_LANE_1_0
#define reg_DFE_ANA_SETTLE_PATHSWITCH_LANE_3_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHSWITCH_LANE_3_0
#define reg_DFE_ANA_SETTLE_PATHON_LANE_3_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHON_LANE_3_0
#define reg_DFE_ANA_SETTLE_PATHOFF_LANE_3_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHOFF_LANE_3_0
#define reg_DFE_FAST_SETTLE_LANE  DFE_STATIC_REG1.BF.DFE_FAST_SETTLE_LANE

// 0x0048	DFE_STATIC_REG3		Polarity Flip Registers
typedef union {
	struct {
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P1_XOR_LANE : 1;	/*      0     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P2_XOR_LANE : 1;	/*      1     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P3_XOR_LANE : 1;	/*      2     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_P4_XOR_LANE : 1;	/*      3     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_D_XOR_LANE_2_0         : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F0_POL_S_XOR_LANE_2_0_b0      : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F0_POL_S_XOR_LANE_2_0_b1      : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F4_POL_S_XOR_LANE_2_0         : 3;	/*[12:10]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F4_POL_D_XOR_LANE_2_0         : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F2_POL_S_P1P3_XOR_LANE_2_0    : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F2_POL_D_P1P3_XOR_LANE_2_0    : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F2_POL_S_P2P4_XOR_LANE_2_0_b0 : 2;	/*[24:22]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F2_POL_S_P2P4_XOR_LANE_2_0_b1 : 1;	/*[24:22]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F2_POL_D_P2P4_XOR_LANE_2_0    : 3;	/*[27:25]     r/w 3'h0*/
		uint8_t DFE_DC_SIGN_XOR_LANE                     : 1;	/*     28     r/w   0*/
		uint8_t DFE_DC_E_SIGN_XOR_LANE                   : 1;	/*     29     r/w   0*/
		uint8_t DFE_VREF_SIGN_XOR_LANE                   : 1;	/*     30     r/w   0*/
		uint8_t ANA_RX_ADAPT_P1P3_EN_XOR_LANE            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG3_t;
__xdata __at( 0x2448 ) volatile DFE_STATIC_REG3_t DFE_STATIC_REG3;
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P1_XOR_LANE  DFE_STATIC_REG3.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P1_XOR_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P2_XOR_LANE  DFE_STATIC_REG3.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P2_XOR_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P3_XOR_LANE  DFE_STATIC_REG3.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P3_XOR_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_P4_XOR_LANE  DFE_STATIC_REG3.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_P4_XOR_LANE
#define reg_ANA_RX_DFE_F0_POL_D_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F0_POL_D_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F0_POL_S_XOR_LANE_2_0_b0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F0_POL_S_XOR_LANE_2_0_b0
#define reg_ANA_RX_DFE_F0_POL_S_XOR_LANE_2_0_b1  DFE_STATIC_REG3.BF.ANA_RX_DFE_F0_POL_S_XOR_LANE_2_0_b1
#define reg_ANA_RX_DFE_F4_POL_S_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F4_POL_S_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F4_POL_D_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F4_POL_D_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_S_P1P3_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F2_POL_S_P1P3_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_D_P1P3_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F2_POL_D_P1P3_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_S_P2P4_XOR_LANE_2_0_b0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F2_POL_S_P2P4_XOR_LANE_2_0_b0
#define reg_ANA_RX_DFE_F2_POL_S_P2P4_XOR_LANE_2_0_b1  DFE_STATIC_REG3.BF.ANA_RX_DFE_F2_POL_S_P2P4_XOR_LANE_2_0_b1
#define reg_ANA_RX_DFE_F2_POL_D_P2P4_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F2_POL_D_P2P4_XOR_LANE_2_0
#define reg_DFE_DC_SIGN_XOR_LANE  DFE_STATIC_REG3.BF.DFE_DC_SIGN_XOR_LANE
#define reg_DFE_DC_E_SIGN_XOR_LANE  DFE_STATIC_REG3.BF.DFE_DC_E_SIGN_XOR_LANE
#define reg_DFE_VREF_SIGN_XOR_LANE  DFE_STATIC_REG3.BF.DFE_VREF_SIGN_XOR_LANE
#define reg_ANA_RX_ADAPT_P1P3_EN_XOR_LANE  DFE_STATIC_REG3.BF.ANA_RX_ADAPT_P1P3_EN_XOR_LANE

// 0x004c	DFE_STATIC_REG4		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t DFE_ANA_SETTLE_5NS_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t DFE_ANA_SETTLE_10NS_LANE_7_0             : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t DFE_ANA_SETTLE_15NS_LANE_7_0             : 8;	/*[23:16]     r/w 8'hb*/
		uint8_t DFE_ANA_SETTLE_20NS_LANE_7_0             : 8;	/*[31:24]     r/w 8'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG4_t;
__xdata __at( 0x244c ) volatile DFE_STATIC_REG4_t DFE_STATIC_REG4;
#define reg_DFE_ANA_SETTLE_5NS_LANE_7_0  DFE_STATIC_REG4.BF.DFE_ANA_SETTLE_5NS_LANE_7_0
#define reg_DFE_ANA_SETTLE_10NS_LANE_7_0  DFE_STATIC_REG4.BF.DFE_ANA_SETTLE_10NS_LANE_7_0
#define reg_DFE_ANA_SETTLE_15NS_LANE_7_0  DFE_STATIC_REG4.BF.DFE_ANA_SETTLE_15NS_LANE_7_0
#define reg_DFE_ANA_SETTLE_20NS_LANE_7_0  DFE_STATIC_REG4.BF.DFE_ANA_SETTLE_20NS_LANE_7_0

// 0x0050	DFE_STATIC_REG5		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t DFE_ANA_SETTLE_100NS_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h47*/
		uint8_t DFE_ANA_SETTLE_200NS_LANE_7_0            : 8;	/* [15:8]     r/w 8'h8d*/
		uint8_t DFE_ANA_SETTLE_300NS_LANE_7_0            : 8;	/*[23:16]     r/w 8'hd3*/
		uint8_t DFE_ANA_SETTLE_400NS_LANE_7_0            : 8;	/*[31:24]     r/w 8'hff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG5_t;
__xdata __at( 0x2450 ) volatile DFE_STATIC_REG5_t DFE_STATIC_REG5;
#define reg_DFE_ANA_SETTLE_100NS_LANE_7_0  DFE_STATIC_REG5.BF.DFE_ANA_SETTLE_100NS_LANE_7_0
#define reg_DFE_ANA_SETTLE_200NS_LANE_7_0  DFE_STATIC_REG5.BF.DFE_ANA_SETTLE_200NS_LANE_7_0
#define reg_DFE_ANA_SETTLE_300NS_LANE_7_0  DFE_STATIC_REG5.BF.DFE_ANA_SETTLE_300NS_LANE_7_0
#define reg_DFE_ANA_SETTLE_400NS_LANE_7_0  DFE_STATIC_REG5.BF.DFE_ANA_SETTLE_400NS_LANE_7_0

// 0x0054	DFE_STATIC_REG6		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b0   : 8;	/* [11:0]     r/w 12'h21*/
		uint8_t DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b1   : 4;	/* [11:0]     r/w 12'h21*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b0   : 8;	/*[27:16]     r/w 12'h21*/
		uint8_t DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b1   : 4;	/*[27:16]     r/w 12'h21*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG6_t;
__xdata __at( 0x2454 ) volatile DFE_STATIC_REG6_t DFE_STATIC_REG6;
#define reg_DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b0  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b0
#define reg_DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b1  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b1
#define reg_DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b0  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b0
#define reg_DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b1  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b1

// 0x0058	DFE_STATIC_REG7		DFE Peak Threshold
typedef union {
	struct {
		uint8_t DFE_PEAK_DN_THRE_COARSE_LANE_4_0         : 5;	/*  [4:0]     r/w 5'h3*/
		uint8_t DFE_PEAK_DN_THRE_FINE_LANE_4_0_b0        : 3;	/*  [9:5]     r/w 5'h4*/
		uint8_t DFE_PEAK_DN_THRE_FINE_LANE_4_0_b1        : 2;	/*  [9:5]     r/w 5'h4*/
		uint8_t DFE_ANA_SETTLE_1NS_LANE_7_0_b0           : 6;	/*[17:10]     r/w 8'h1*/
		uint8_t DFE_ANA_SETTLE_1NS_LANE_7_0_b1           : 2;	/*[17:10]     r/w 8'h1*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 4;	/*[31:20]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:20]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG7_t;
__xdata __at( 0x2458 ) volatile DFE_STATIC_REG7_t DFE_STATIC_REG7;
#define reg_DFE_PEAK_DN_THRE_COARSE_LANE_4_0  DFE_STATIC_REG7.BF.DFE_PEAK_DN_THRE_COARSE_LANE_4_0
#define reg_DFE_PEAK_DN_THRE_FINE_LANE_4_0_b0  DFE_STATIC_REG7.BF.DFE_PEAK_DN_THRE_FINE_LANE_4_0_b0
#define reg_DFE_PEAK_DN_THRE_FINE_LANE_4_0_b1  DFE_STATIC_REG7.BF.DFE_PEAK_DN_THRE_FINE_LANE_4_0_b1
#define reg_DFE_ANA_SETTLE_1NS_LANE_7_0_b0  DFE_STATIC_REG7.BF.DFE_ANA_SETTLE_1NS_LANE_7_0_b0
#define reg_DFE_ANA_SETTLE_1NS_LANE_7_0_b1  DFE_STATIC_REG7.BF.DFE_ANA_SETTLE_1NS_LANE_7_0_b1

// 0x005c	DFE_STATIC_REG8		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t UD_DC_FLIP_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t UD_VREF_FLIP_LANE_2_0                    : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [9:6]     r/w   0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:6]     r/w   0*/
		uint8_t DFE_ANA_SETTLE_DCE_LANE_11_0_b0          : 6;	/*[21:10]     r/w 12'h21*/
		uint8_t DFE_ANA_SETTLE_DCE_LANE_11_0_b1          : 6;	/*[21:10]     r/w 12'h21*/
		uint8_t DFE_ANA_SETTLE_1US_LANE_9_0_b0           : 2;	/*[31:22]     r/w 10'h2c3*/
		uint8_t DFE_ANA_SETTLE_1US_LANE_9_0_b1           : 8;	/*[31:22]     r/w 10'h2c3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG8_t;
__xdata __at( 0x245c ) volatile DFE_STATIC_REG8_t DFE_STATIC_REG8;
#define reg_UD_DC_FLIP_LANE_2_0  DFE_STATIC_REG8.BF.UD_DC_FLIP_LANE_2_0
#define reg_UD_VREF_FLIP_LANE_2_0  DFE_STATIC_REG8.BF.UD_VREF_FLIP_LANE_2_0
#define reg_DFE_ANA_SETTLE_DCE_LANE_11_0_b0  DFE_STATIC_REG8.BF.DFE_ANA_SETTLE_DCE_LANE_11_0_b0
#define reg_DFE_ANA_SETTLE_DCE_LANE_11_0_b1  DFE_STATIC_REG8.BF.DFE_ANA_SETTLE_DCE_LANE_11_0_b1
#define reg_DFE_ANA_SETTLE_1US_LANE_9_0_b0  DFE_STATIC_REG8.BF.DFE_ANA_SETTLE_1US_LANE_9_0_b0
#define reg_DFE_ANA_SETTLE_1US_LANE_9_0_b1  DFE_STATIC_REG8.BF.DFE_ANA_SETTLE_1US_LANE_9_0_b1

// 0x0060	DFE_STATIC_REG9		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t UD_9_FLIP_LANE_1_0                       : 2;	/*  [3:2]     r/w   0*/
		uint8_t UD_10_FLIP_LANE_1_0                      : 2;	/*  [5:4]     r/w   0*/
		uint8_t UD_12_FLIP_LANE_1_0                      : 2;	/*  [7:6]     r/w   0*/
		uint8_t UD_11_FLIP_LANE                          : 1;	/*      8     r/w   0*/
		uint8_t UD_13_FLIP_LANE                          : 1;	/*      9     r/w   0*/
		uint8_t UD_14_FLIP_LANE_1_0                      : 2;	/*[11:10]     r/w   0*/
		uint8_t UD_15_FLIP_LANE                          : 1;	/*     12     r/w   0*/
		uint8_t UD_16_FLIP_LANE_1_0                      : 2;	/*[14:13]     r/w   0*/
		uint8_t UD_17_FLIP_LANE                          : 1;	/*     15     r/w   0*/
		uint8_t UD_18_FLIP_LANE_1_0                      : 2;	/*[17:16]     r/w   0*/
		uint8_t UD_19_FLIP_LANE                          : 1;	/*     18     r/w   0*/
		uint8_t UD_20_FLIP_LANE_1_0                      : 2;	/*[20:19]     r/w   0*/
		uint8_t UD_21_FLIP_LANE                          : 1;	/*     21     r/w   0*/
		uint8_t UD_22_FLIP_LANE                          : 1;	/*     22     r/w   0*/
		uint8_t UD_23_FLIP_LANE                          : 1;	/*     23     r/w   0*/
		uint8_t UD_24_FLIP_LANE                          : 1;	/*     24     r/w   0*/
		uint8_t UD_25_FLIP_LANE                          : 1;	/*     25     r/w   0*/
		uint8_t UD_26_FLIP_LANE                          : 1;	/*     26     r/w   0*/
		uint8_t UD_27_FLIP_LANE                          : 1;	/*     27     r/w   0*/
		uint8_t UD_28_FLIP_LANE                          : 1;	/*     28     r/w   0*/
		uint8_t UD_29_FLIP_LANE                          : 1;	/*     29     r/w   0*/
		uint8_t UD_30_FLIP_LANE                          : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG9_t;
__xdata __at( 0x2460 ) volatile DFE_STATIC_REG9_t DFE_STATIC_REG9;
#define reg_UD_9_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_9_FLIP_LANE_1_0
#define reg_UD_10_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_10_FLIP_LANE_1_0
#define reg_UD_12_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_12_FLIP_LANE_1_0
#define reg_UD_11_FLIP_LANE  DFE_STATIC_REG9.BF.UD_11_FLIP_LANE
#define reg_UD_13_FLIP_LANE  DFE_STATIC_REG9.BF.UD_13_FLIP_LANE
#define reg_UD_14_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_14_FLIP_LANE_1_0
#define reg_UD_15_FLIP_LANE  DFE_STATIC_REG9.BF.UD_15_FLIP_LANE
#define reg_UD_16_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_16_FLIP_LANE_1_0
#define reg_UD_17_FLIP_LANE  DFE_STATIC_REG9.BF.UD_17_FLIP_LANE
#define reg_UD_18_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_18_FLIP_LANE_1_0
#define reg_UD_19_FLIP_LANE  DFE_STATIC_REG9.BF.UD_19_FLIP_LANE
#define reg_UD_20_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_20_FLIP_LANE_1_0
#define reg_UD_21_FLIP_LANE  DFE_STATIC_REG9.BF.UD_21_FLIP_LANE
#define reg_UD_22_FLIP_LANE  DFE_STATIC_REG9.BF.UD_22_FLIP_LANE
#define reg_UD_23_FLIP_LANE  DFE_STATIC_REG9.BF.UD_23_FLIP_LANE
#define reg_UD_24_FLIP_LANE  DFE_STATIC_REG9.BF.UD_24_FLIP_LANE
#define reg_UD_25_FLIP_LANE  DFE_STATIC_REG9.BF.UD_25_FLIP_LANE
#define reg_UD_26_FLIP_LANE  DFE_STATIC_REG9.BF.UD_26_FLIP_LANE
#define reg_UD_27_FLIP_LANE  DFE_STATIC_REG9.BF.UD_27_FLIP_LANE
#define reg_UD_28_FLIP_LANE  DFE_STATIC_REG9.BF.UD_28_FLIP_LANE
#define reg_UD_29_FLIP_LANE  DFE_STATIC_REG9.BF.UD_29_FLIP_LANE
#define reg_UD_30_FLIP_LANE  DFE_STATIC_REG9.BF.UD_30_FLIP_LANE

// 0x0064	DFE_STATIC_REG10		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t UD_0_FLIP_LANE_2_0                       : 3;	/*  [2:0]     r/w   0*/
		uint8_t RESERVED_3                               : 3;	/*  [5:3]     r/w   0*/
		uint8_t UD_2_FLIP_LANE_2_0_b0                    : 2;	/*  [8:6]     r/w   0*/
		uint8_t UD_2_FLIP_LANE_2_0_b1                    : 1;	/*  [8:6]     r/w   0*/
		uint8_t UD_3_FLIP_LANE_2_0                       : 3;	/* [11:9]     r/w   0*/
		uint8_t UD_4_FLIP_LANE_2_0                       : 3;	/*[14:12]     r/w   0*/
		uint8_t UD_5_FLIP_LANE_2_0_b0                    : 1;	/*[17:15]     r/w   0*/
		uint8_t UD_5_FLIP_LANE_2_0_b1                    : 2;	/*[17:15]     r/w   0*/
		uint8_t UD_6_FLIP_LANE_2_0                       : 3;	/*[20:18]     r/w   0*/
		uint8_t UD_7_FLIP_LANE_2_0                       : 3;	/*[23:21]     r/w   0*/
		uint8_t UD_8_FLIP_LANE_2_0                       : 3;	/*[26:24]     r/w   0*/
		uint8_t UD_DCE_FLIP_LANE                         : 1;	/*     27     r/w   0*/
		uint8_t UD_HP1_FLIP_LANE                         : 1;	/*     28     r/w   0*/
		uint8_t UD_HN1_FLIP_LANE                         : 1;	/*     29     r/w   0*/
		uint8_t UD_2UT_FLIP_LANE                         : 1;	/*     30     r/w   0*/
		uint8_t UD_2UB_FLIP_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG10_t;
__xdata __at( 0x2464 ) volatile DFE_STATIC_REG10_t DFE_STATIC_REG10;
#define reg_UD_0_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_0_FLIP_LANE_2_0
#define reg_UD_2_FLIP_LANE_2_0_b0  DFE_STATIC_REG10.BF.UD_2_FLIP_LANE_2_0_b0
#define reg_UD_2_FLIP_LANE_2_0_b1  DFE_STATIC_REG10.BF.UD_2_FLIP_LANE_2_0_b1
#define reg_UD_3_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_3_FLIP_LANE_2_0
#define reg_UD_4_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_4_FLIP_LANE_2_0
#define reg_UD_5_FLIP_LANE_2_0_b0  DFE_STATIC_REG10.BF.UD_5_FLIP_LANE_2_0_b0
#define reg_UD_5_FLIP_LANE_2_0_b1  DFE_STATIC_REG10.BF.UD_5_FLIP_LANE_2_0_b1
#define reg_UD_6_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_6_FLIP_LANE_2_0
#define reg_UD_7_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_7_FLIP_LANE_2_0
#define reg_UD_8_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_8_FLIP_LANE_2_0
#define reg_UD_DCE_FLIP_LANE  DFE_STATIC_REG10.BF.UD_DCE_FLIP_LANE
#define reg_UD_HP1_FLIP_LANE  DFE_STATIC_REG10.BF.UD_HP1_FLIP_LANE
#define reg_UD_HN1_FLIP_LANE  DFE_STATIC_REG10.BF.UD_HN1_FLIP_LANE
#define reg_UD_2UT_FLIP_LANE  DFE_STATIC_REG10.BF.UD_2UT_FLIP_LANE
#define reg_UD_2UB_FLIP_LANE  DFE_STATIC_REG10.BF.UD_2UB_FLIP_LANE

// 0x0068	DFE_STATIC_REG11		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t DFE_HOLD_TIME_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h4*/
		uint8_t DFE_SAT_F0_TRIG_OFF_LANE_1_0             : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t DFE_SAT_F0_TRIG_ON_LANE_1_0_b0           : 1;	/*  [8:7]     r/w 2'h0*/
		uint8_t DFE_SAT_F0_TRIG_ON_LANE_1_0_b1           : 1;	/*  [8:7]     r/w 2'h0*/
		uint8_t DFE_SAT_VREF_TRIG_OFF_LANE_1_0           : 2;	/* [10:9]     r/w 2'h0*/
		uint8_t DFE_SAT_VREF_TRIG_ON_LANE_1_0            : 2;	/*[12:11]     r/w 2'h0*/
		uint8_t RESERVED_13                              : 3;	/*[31:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:13]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:13]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG11_t;
__xdata __at( 0x2468 ) volatile DFE_STATIC_REG11_t DFE_STATIC_REG11;
#define reg_DFE_HOLD_TIME_LANE_4_0  DFE_STATIC_REG11.BF.DFE_HOLD_TIME_LANE_4_0
#define reg_DFE_SAT_F0_TRIG_OFF_LANE_1_0  DFE_STATIC_REG11.BF.DFE_SAT_F0_TRIG_OFF_LANE_1_0
#define reg_DFE_SAT_F0_TRIG_ON_LANE_1_0_b0  DFE_STATIC_REG11.BF.DFE_SAT_F0_TRIG_ON_LANE_1_0_b0
#define reg_DFE_SAT_F0_TRIG_ON_LANE_1_0_b1  DFE_STATIC_REG11.BF.DFE_SAT_F0_TRIG_ON_LANE_1_0_b1
#define reg_DFE_SAT_VREF_TRIG_OFF_LANE_1_0  DFE_STATIC_REG11.BF.DFE_SAT_VREF_TRIG_OFF_LANE_1_0
#define reg_DFE_SAT_VREF_TRIG_ON_LANE_1_0  DFE_STATIC_REG11.BF.DFE_SAT_VREF_TRIG_ON_LANE_1_0

// 0x0070	DFE_FIR_REG0		DFE FIR REG
typedef union {
	struct {
		uint8_t DFE_HP1_2C_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_HP1_SM_LANE_3_0                      : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DFE_FEXTHP1_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DFE_FENHP1_LANE                          : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FIR_REG0_t;
__xdata __at( 0x2470 ) volatile DFE_FIR_REG0_t DFE_FIR_REG0;
#define reg_DFE_HP1_2C_LANE_7_0  DFE_FIR_REG0.BF.DFE_HP1_2C_LANE_7_0
#define reg_DFE_HP1_SM_LANE_3_0  DFE_FIR_REG0.BF.DFE_HP1_SM_LANE_3_0
#define reg_DFE_FEXTHP1_LANE_3_0  DFE_FIR_REG0.BF.DFE_FEXTHP1_LANE_3_0
#define reg_DFE_FENHP1_LANE  DFE_FIR_REG0.BF.DFE_FENHP1_LANE

// 0x0074	DFE_FIR_REG1		DFE FIR REG
typedef union {
	struct {
		uint8_t DFE_HN1_2C_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_HN1_SM_LANE_3_0                      : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DFE_FEXTHN1_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DFE_FENHN1_LANE                          : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FIR_REG1_t;
__xdata __at( 0x2474 ) volatile DFE_FIR_REG1_t DFE_FIR_REG1;
#define reg_DFE_HN1_2C_LANE_7_0  DFE_FIR_REG1.BF.DFE_HN1_2C_LANE_7_0
#define reg_DFE_HN1_SM_LANE_3_0  DFE_FIR_REG1.BF.DFE_HN1_SM_LANE_3_0
#define reg_DFE_FEXTHN1_LANE_3_0  DFE_FIR_REG1.BF.DFE_FEXTHN1_LANE_3_0
#define reg_DFE_FENHN1_LANE  DFE_FIR_REG1.BF.DFE_FENHN1_LANE

// 0x0078	DFE_STEP_REG5		DFE Step Size
typedef union {
	struct {
		uint8_t DFE_STEP_ACCU_FX4_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t DFE_STEP_FINE_FX4_LANE_3_0               : 4;	/*  [7:4]     r/w 4'h6*/
		uint8_t DFE_STEP_COARSE_FX4_LANE_3_0             : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t DFE_STEP_ACCU_F0X_LANE_3_0               : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_F0X_LANE_3_0               : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t DFE_STEP_COARSE_F0X_LANE_3_0             : 4;	/*[23:20]     r/w 4'h2*/
		uint8_t DFE_MON_READ_EN_LANE                     : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 5;	/*[29:25]     r/w   0*/
		uint8_t DFE_F0X_FINE_STEP_EN_LANE                : 1;	/*     30     r/w   0*/
		uint8_t DFE_F0X_COARSE_STEP_EN_LANE              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG5_t;
__xdata __at( 0x2478 ) volatile DFE_STEP_REG5_t DFE_STEP_REG5;
#define reg_DFE_STEP_ACCU_FX4_LANE_3_0  DFE_STEP_REG5.BF.DFE_STEP_ACCU_FX4_LANE_3_0
#define reg_DFE_STEP_FINE_FX4_LANE_3_0  DFE_STEP_REG5.BF.DFE_STEP_FINE_FX4_LANE_3_0
#define reg_DFE_STEP_COARSE_FX4_LANE_3_0  DFE_STEP_REG5.BF.DFE_STEP_COARSE_FX4_LANE_3_0
#define reg_DFE_STEP_ACCU_F0X_LANE_3_0  DFE_STEP_REG5.BF.DFE_STEP_ACCU_F0X_LANE_3_0
#define reg_DFE_STEP_FINE_F0X_LANE_3_0  DFE_STEP_REG5.BF.DFE_STEP_FINE_F0X_LANE_3_0
#define reg_DFE_STEP_COARSE_F0X_LANE_3_0  DFE_STEP_REG5.BF.DFE_STEP_COARSE_F0X_LANE_3_0
#define reg_DFE_MON_READ_EN_LANE  DFE_STEP_REG5.BF.DFE_MON_READ_EN_LANE
#define reg_DFE_F0X_FINE_STEP_EN_LANE  DFE_STEP_REG5.BF.DFE_F0X_FINE_STEP_EN_LANE
#define reg_DFE_F0X_COARSE_STEP_EN_LANE  DFE_STEP_REG5.BF.DFE_F0X_COARSE_STEP_EN_LANE

// 0x007c	DFE_MON_REG0		DFE Monitor Bus
typedef union {
	struct {
		uint8_t DFE_MON_READ_CTRL_LANE_15_0_b0           : 8;	/* [15:0]       r   0*/
		uint8_t DFE_MON_READ_CTRL_LANE_15_0_b1           : 8;	/* [15:0]       r   0*/
		uint8_t DFE_MON_READ_HSL_LANE_15_0_b0            : 8;	/*[31:16]       r   0*/
		uint8_t DFE_MON_READ_HSL_LANE_15_0_b1            : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_MON_REG0_t;
__xdata __at( 0x247c ) volatile DFE_MON_REG0_t DFE_MON_REG0;
#define reg_DFE_MON_READ_CTRL_LANE_15_0_b0  DFE_MON_REG0.BF.DFE_MON_READ_CTRL_LANE_15_0_b0
#define reg_DFE_MON_READ_CTRL_LANE_15_0_b1  DFE_MON_REG0.BF.DFE_MON_READ_CTRL_LANE_15_0_b1
#define reg_DFE_MON_READ_HSL_LANE_15_0_b0  DFE_MON_REG0.BF.DFE_MON_READ_HSL_LANE_15_0_b0
#define reg_DFE_MON_READ_HSL_LANE_15_0_b1  DFE_MON_REG0.BF.DFE_MON_READ_HSL_LANE_15_0_b1
#define reg_DFE_MON_READ_CTRL_LANE_15_0  DFE_MON_REG0.WT.W0
#define reg_DFE_MON_READ_HSL_LANE_15_0  DFE_MON_REG0.WT.W1

// 0x0080	DFE_FEN_REG0_P1		DFE FEN REG0 Path1
typedef union {
	struct {
		uint8_t DFE_FENDC_D_P1_LANE_2_0                  : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DFE_FENDC_S_P1_LANE_2_0                  : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FENDC_E_P1_LANE                      : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_FENVREF_P1_LANE_2_0_b0               : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FENVREF_P1_LANE_2_0_b1               : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FEN0_D_P1_LANE_2_0                   : 3;	/*[12:10]     r/w 3'h0*/
		uint8_t DFE_FEN0_S_P1_LANE_2_0                   : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEN2_D_P1_LANE_2_0                   : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t DFE_FEN2_S_P1_LANE_2_0                   : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t DFE_FEN2_TUNE3_D_P1_LANE                 : 1;	/*     22     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE3_S_P1_LANE                 : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE1_D_P1_LANE                 : 1;	/*     24     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE1_S_P1_LANE                 : 1;	/*     25     r/w 1'b0*/
		uint8_t DFE_FEN3_D_P1_LANE_2_0                   : 3;	/*[28:26]     r/w 3'h0*/
		uint8_t DFE_FEN3_S_P1_LANE_2_0                   : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG0_P1_t;
__xdata __at( 0x2480 ) volatile DFE_FEN_REG0_P1_t DFE_FEN_REG0_P1;
#define reg_DFE_FENDC_D_P1_LANE_2_0  DFE_FEN_REG0_P1.BF.DFE_FENDC_D_P1_LANE_2_0
#define reg_DFE_FENDC_S_P1_LANE_2_0  DFE_FEN_REG0_P1.BF.DFE_FENDC_S_P1_LANE_2_0
#define reg_DFE_FENDC_E_P1_LANE  DFE_FEN_REG0_P1.BF.DFE_FENDC_E_P1_LANE
#define reg_DFE_FENVREF_P1_LANE_2_0_b0  DFE_FEN_REG0_P1.BF.DFE_FENVREF_P1_LANE_2_0_b0
#define reg_DFE_FENVREF_P1_LANE_2_0_b1  DFE_FEN_REG0_P1.BF.DFE_FENVREF_P1_LANE_2_0_b1
#define reg_DFE_FEN0_D_P1_LANE_2_0  DFE_FEN_REG0_P1.BF.DFE_FEN0_D_P1_LANE_2_0
#define reg_DFE_FEN0_S_P1_LANE_2_0  DFE_FEN_REG0_P1.BF.DFE_FEN0_S_P1_LANE_2_0
#define reg_DFE_FEN2_D_P1_LANE_2_0  DFE_FEN_REG0_P1.BF.DFE_FEN2_D_P1_LANE_2_0
#define reg_DFE_FEN2_S_P1_LANE_2_0  DFE_FEN_REG0_P1.BF.DFE_FEN2_S_P1_LANE_2_0
#define reg_DFE_FEN2_TUNE3_D_P1_LANE  DFE_FEN_REG0_P1.BF.DFE_FEN2_TUNE3_D_P1_LANE
#define reg_DFE_FEN2_TUNE3_S_P1_LANE  DFE_FEN_REG0_P1.BF.DFE_FEN2_TUNE3_S_P1_LANE
#define reg_DFE_FEN2_TUNE1_D_P1_LANE  DFE_FEN_REG0_P1.BF.DFE_FEN2_TUNE1_D_P1_LANE
#define reg_DFE_FEN2_TUNE1_S_P1_LANE  DFE_FEN_REG0_P1.BF.DFE_FEN2_TUNE1_S_P1_LANE
#define reg_DFE_FEN3_D_P1_LANE_2_0  DFE_FEN_REG0_P1.BF.DFE_FEN3_D_P1_LANE_2_0
#define reg_DFE_FEN3_S_P1_LANE_2_0  DFE_FEN_REG0_P1.BF.DFE_FEN3_S_P1_LANE_2_0

// 0x0084	DFE_FEN_REG1_P1		DFE FEN REG1 Path1
typedef union {
	struct {
		uint8_t DFE_FEN4_D_P1_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DFE_FEN4_S_P1_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FEN5_P1_LANE_2_0_b0                  : 2;	/*  [8:6]     r/w 3'h0*/
		uint8_t DFE_FEN5_P1_LANE_2_0_b1                  : 1;	/*  [8:6]     r/w 3'h0*/
		uint8_t DFE_FEN6_P1_LANE_2_0                     : 3;	/* [11:9]     r/w 3'h0*/
		uint8_t DFE_FEN7_P1_LANE_2_0                     : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t DFE_FEN8_P1_LANE_2_0_b0                  : 1;	/*[17:15]     r/w 3'h0*/
		uint8_t DFE_FEN8_P1_LANE_2_0_b1                  : 2;	/*[17:15]     r/w 3'h0*/
		uint8_t DFE_FEN9_P1_LANE_1_0                     : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t DFE_FEN10_P1_LANE_1_0                    : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t DFE_FEN11_P1_LANE                        : 1;	/*     22     r/w 1'b0*/
		uint8_t DFE_FEN12_P1_LANE_1_0_b0                 : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN12_P1_LANE_1_0_b1                 : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN13_P1_LANE                        : 1;	/*     25     r/w 1'b0*/
		uint8_t DFE_FEN14_P1_LANE_1_0                    : 2;	/*[27:26]     r/w 2'h0*/
		uint8_t DFE_FEN15_P1_LANE                        : 1;	/*     28     r/w 1'b0*/
		uint8_t DFE_FEN16_P1_LANE_1_0                    : 2;	/*[30:29]     r/w 2'h0*/
		uint8_t DFE_FEN17_P1_LANE                        : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG1_P1_t;
__xdata __at( 0x2484 ) volatile DFE_FEN_REG1_P1_t DFE_FEN_REG1_P1;
#define reg_DFE_FEN4_D_P1_LANE_2_0  DFE_FEN_REG1_P1.BF.DFE_FEN4_D_P1_LANE_2_0
#define reg_DFE_FEN4_S_P1_LANE_2_0  DFE_FEN_REG1_P1.BF.DFE_FEN4_S_P1_LANE_2_0
#define reg_DFE_FEN5_P1_LANE_2_0_b0  DFE_FEN_REG1_P1.BF.DFE_FEN5_P1_LANE_2_0_b0
#define reg_DFE_FEN5_P1_LANE_2_0_b1  DFE_FEN_REG1_P1.BF.DFE_FEN5_P1_LANE_2_0_b1
#define reg_DFE_FEN6_P1_LANE_2_0  DFE_FEN_REG1_P1.BF.DFE_FEN6_P1_LANE_2_0
#define reg_DFE_FEN7_P1_LANE_2_0  DFE_FEN_REG1_P1.BF.DFE_FEN7_P1_LANE_2_0
#define reg_DFE_FEN8_P1_LANE_2_0_b0  DFE_FEN_REG1_P1.BF.DFE_FEN8_P1_LANE_2_0_b0
#define reg_DFE_FEN8_P1_LANE_2_0_b1  DFE_FEN_REG1_P1.BF.DFE_FEN8_P1_LANE_2_0_b1
#define reg_DFE_FEN9_P1_LANE_1_0  DFE_FEN_REG1_P1.BF.DFE_FEN9_P1_LANE_1_0
#define reg_DFE_FEN10_P1_LANE_1_0  DFE_FEN_REG1_P1.BF.DFE_FEN10_P1_LANE_1_0
#define reg_DFE_FEN11_P1_LANE  DFE_FEN_REG1_P1.BF.DFE_FEN11_P1_LANE
#define reg_DFE_FEN12_P1_LANE_1_0_b0  DFE_FEN_REG1_P1.BF.DFE_FEN12_P1_LANE_1_0_b0
#define reg_DFE_FEN12_P1_LANE_1_0_b1  DFE_FEN_REG1_P1.BF.DFE_FEN12_P1_LANE_1_0_b1
#define reg_DFE_FEN13_P1_LANE  DFE_FEN_REG1_P1.BF.DFE_FEN13_P1_LANE
#define reg_DFE_FEN14_P1_LANE_1_0  DFE_FEN_REG1_P1.BF.DFE_FEN14_P1_LANE_1_0
#define reg_DFE_FEN15_P1_LANE  DFE_FEN_REG1_P1.BF.DFE_FEN15_P1_LANE
#define reg_DFE_FEN16_P1_LANE_1_0  DFE_FEN_REG1_P1.BF.DFE_FEN16_P1_LANE_1_0
#define reg_DFE_FEN17_P1_LANE  DFE_FEN_REG1_P1.BF.DFE_FEN17_P1_LANE

// 0x0088	DFE_FEN_REG2_P1		DFE FEN REG2 Path1
typedef union {
	struct {
		uint8_t DFE_FEN18_P1_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DFE_FEN19_P1_LANE                        : 1;	/*      2     r/w 1'b0*/
		uint8_t DFE_FEN20_P1_LANE_1_0                    : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t DFE_FEN21_P1_LANE                        : 1;	/*      5     r/w 1'b0*/
		uint8_t DFE_FEN22_P1_LANE                        : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_FEN23_P1_LANE                        : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEN24_P1_LANE                        : 1;	/*      8     r/w 1'b0*/
		uint8_t DFE_FEN25_P1_LANE                        : 1;	/*      9     r/w 1'b0*/
		uint8_t DFE_FEN26_P1_LANE                        : 1;	/*     10     r/w 1'b0*/
		uint8_t DFE_FEN27_P1_LANE                        : 1;	/*     11     r/w 1'b0*/
		uint8_t DFE_FEN28_P1_LANE                        : 1;	/*     12     r/w 1'b0*/
		uint8_t DFE_FEN29_P1_LANE                        : 1;	/*     13     r/w 1'b0*/
		uint8_t DFE_FEN30_P1_LANE                        : 1;	/*     14     r/w 1'b0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w 17'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG2_P1_t;
__xdata __at( 0x2488 ) volatile DFE_FEN_REG2_P1_t DFE_FEN_REG2_P1;
#define reg_DFE_FEN18_P1_LANE_1_0  DFE_FEN_REG2_P1.BF.DFE_FEN18_P1_LANE_1_0
#define reg_DFE_FEN19_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN19_P1_LANE
#define reg_DFE_FEN20_P1_LANE_1_0  DFE_FEN_REG2_P1.BF.DFE_FEN20_P1_LANE_1_0
#define reg_DFE_FEN21_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN21_P1_LANE
#define reg_DFE_FEN22_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN22_P1_LANE
#define reg_DFE_FEN23_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN23_P1_LANE
#define reg_DFE_FEN24_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN24_P1_LANE
#define reg_DFE_FEN25_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN25_P1_LANE
#define reg_DFE_FEN26_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN26_P1_LANE
#define reg_DFE_FEN27_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN27_P1_LANE
#define reg_DFE_FEN28_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN28_P1_LANE
#define reg_DFE_FEN29_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN29_P1_LANE
#define reg_DFE_FEN30_P1_LANE  DFE_FEN_REG2_P1.BF.DFE_FEN30_P1_LANE

// 0x008c	DFE_FEN_REG0_P2		DFE FEN REG0 Path2
typedef union {
	struct {
		uint8_t DFE_FENDC_D_P2_LANE_2_0                  : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DFE_FENDC_S_P2_LANE_2_0                  : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FENDC_E_P2_LANE                      : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_FENVREF_P2_LANE_2_0_b0               : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FENVREF_P2_LANE_2_0_b1               : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FEN0_D_P2_LANE_2_0                   : 3;	/*[12:10]     r/w 3'h0*/
		uint8_t DFE_FEN0_S_P2_LANE_2_0                   : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEN2_D_P2_LANE_2_0                   : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t DFE_FEN2_S_P2_LANE_2_0                   : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t DFE_FEN2_TUNE3_D_P2_LANE                 : 1;	/*     22     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE3_S_P2_LANE                 : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE1_D_P2_LANE                 : 1;	/*     24     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE1_S_P2_LANE                 : 1;	/*     25     r/w 1'b0*/
		uint8_t DFE_FEN3_D_P2_LANE_2_0                   : 3;	/*[28:26]     r/w 3'h0*/
		uint8_t DFE_FEN3_S_P2_LANE_2_0                   : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG0_P2_t;
__xdata __at( 0x248c ) volatile DFE_FEN_REG0_P2_t DFE_FEN_REG0_P2;
#define reg_DFE_FENDC_D_P2_LANE_2_0  DFE_FEN_REG0_P2.BF.DFE_FENDC_D_P2_LANE_2_0
#define reg_DFE_FENDC_S_P2_LANE_2_0  DFE_FEN_REG0_P2.BF.DFE_FENDC_S_P2_LANE_2_0
#define reg_DFE_FENDC_E_P2_LANE  DFE_FEN_REG0_P2.BF.DFE_FENDC_E_P2_LANE
#define reg_DFE_FENVREF_P2_LANE_2_0_b0  DFE_FEN_REG0_P2.BF.DFE_FENVREF_P2_LANE_2_0_b0
#define reg_DFE_FENVREF_P2_LANE_2_0_b1  DFE_FEN_REG0_P2.BF.DFE_FENVREF_P2_LANE_2_0_b1
#define reg_DFE_FEN0_D_P2_LANE_2_0  DFE_FEN_REG0_P2.BF.DFE_FEN0_D_P2_LANE_2_0
#define reg_DFE_FEN0_S_P2_LANE_2_0  DFE_FEN_REG0_P2.BF.DFE_FEN0_S_P2_LANE_2_0
#define reg_DFE_FEN2_D_P2_LANE_2_0  DFE_FEN_REG0_P2.BF.DFE_FEN2_D_P2_LANE_2_0
#define reg_DFE_FEN2_S_P2_LANE_2_0  DFE_FEN_REG0_P2.BF.DFE_FEN2_S_P2_LANE_2_0
#define reg_DFE_FEN2_TUNE3_D_P2_LANE  DFE_FEN_REG0_P2.BF.DFE_FEN2_TUNE3_D_P2_LANE
#define reg_DFE_FEN2_TUNE3_S_P2_LANE  DFE_FEN_REG0_P2.BF.DFE_FEN2_TUNE3_S_P2_LANE
#define reg_DFE_FEN2_TUNE1_D_P2_LANE  DFE_FEN_REG0_P2.BF.DFE_FEN2_TUNE1_D_P2_LANE
#define reg_DFE_FEN2_TUNE1_S_P2_LANE  DFE_FEN_REG0_P2.BF.DFE_FEN2_TUNE1_S_P2_LANE
#define reg_DFE_FEN3_D_P2_LANE_2_0  DFE_FEN_REG0_P2.BF.DFE_FEN3_D_P2_LANE_2_0
#define reg_DFE_FEN3_S_P2_LANE_2_0  DFE_FEN_REG0_P2.BF.DFE_FEN3_S_P2_LANE_2_0

// 0x0090	DFE_FEN_REG1_P2		DFE FEN REG1 Path2
typedef union {
	struct {
		uint8_t DFE_FEN4_D_P2_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DFE_FEN4_S_P2_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FEN5_P2_LANE_2_0_b0                  : 2;	/*  [8:6]     r/w 3'h0*/
		uint8_t DFE_FEN5_P2_LANE_2_0_b1                  : 1;	/*  [8:6]     r/w 3'h0*/
		uint8_t DFE_FEN6_P2_LANE_2_0                     : 3;	/* [11:9]     r/w 3'h0*/
		uint8_t DFE_FEN7_P2_LANE_2_0                     : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t DFE_FEN8_P2_LANE_2_0_b0                  : 1;	/*[17:15]     r/w 3'h0*/
		uint8_t DFE_FEN8_P2_LANE_2_0_b1                  : 2;	/*[17:15]     r/w 3'h0*/
		uint8_t DFE_FEN9_P2_LANE_1_0                     : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t DFE_FEN10_P2_LANE_1_0                    : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t DFE_FEN11_P2_LANE                        : 1;	/*     22     r/w 1'b0*/
		uint8_t DFE_FEN12_P2_LANE_1_0_b0                 : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN12_P2_LANE_1_0_b1                 : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN13_P2_LANE                        : 1;	/*     25     r/w 1'b0*/
		uint8_t DFE_FEN14_P2_LANE_1_0                    : 2;	/*[27:26]     r/w 2'h0*/
		uint8_t DFE_FEN15_P2_LANE                        : 1;	/*     28     r/w 1'b0*/
		uint8_t DFE_FEN16_P2_LANE_1_0                    : 2;	/*[30:29]     r/w 2'h0*/
		uint8_t DFE_FEN17_P2_LANE                        : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG1_P2_t;
__xdata __at( 0x2490 ) volatile DFE_FEN_REG1_P2_t DFE_FEN_REG1_P2;
#define reg_DFE_FEN4_D_P2_LANE_2_0  DFE_FEN_REG1_P2.BF.DFE_FEN4_D_P2_LANE_2_0
#define reg_DFE_FEN4_S_P2_LANE_2_0  DFE_FEN_REG1_P2.BF.DFE_FEN4_S_P2_LANE_2_0
#define reg_DFE_FEN5_P2_LANE_2_0_b0  DFE_FEN_REG1_P2.BF.DFE_FEN5_P2_LANE_2_0_b0
#define reg_DFE_FEN5_P2_LANE_2_0_b1  DFE_FEN_REG1_P2.BF.DFE_FEN5_P2_LANE_2_0_b1
#define reg_DFE_FEN6_P2_LANE_2_0  DFE_FEN_REG1_P2.BF.DFE_FEN6_P2_LANE_2_0
#define reg_DFE_FEN7_P2_LANE_2_0  DFE_FEN_REG1_P2.BF.DFE_FEN7_P2_LANE_2_0
#define reg_DFE_FEN8_P2_LANE_2_0_b0  DFE_FEN_REG1_P2.BF.DFE_FEN8_P2_LANE_2_0_b0
#define reg_DFE_FEN8_P2_LANE_2_0_b1  DFE_FEN_REG1_P2.BF.DFE_FEN8_P2_LANE_2_0_b1
#define reg_DFE_FEN9_P2_LANE_1_0  DFE_FEN_REG1_P2.BF.DFE_FEN9_P2_LANE_1_0
#define reg_DFE_FEN10_P2_LANE_1_0  DFE_FEN_REG1_P2.BF.DFE_FEN10_P2_LANE_1_0
#define reg_DFE_FEN11_P2_LANE  DFE_FEN_REG1_P2.BF.DFE_FEN11_P2_LANE
#define reg_DFE_FEN12_P2_LANE_1_0_b0  DFE_FEN_REG1_P2.BF.DFE_FEN12_P2_LANE_1_0_b0
#define reg_DFE_FEN12_P2_LANE_1_0_b1  DFE_FEN_REG1_P2.BF.DFE_FEN12_P2_LANE_1_0_b1
#define reg_DFE_FEN13_P2_LANE  DFE_FEN_REG1_P2.BF.DFE_FEN13_P2_LANE
#define reg_DFE_FEN14_P2_LANE_1_0  DFE_FEN_REG1_P2.BF.DFE_FEN14_P2_LANE_1_0
#define reg_DFE_FEN15_P2_LANE  DFE_FEN_REG1_P2.BF.DFE_FEN15_P2_LANE
#define reg_DFE_FEN16_P2_LANE_1_0  DFE_FEN_REG1_P2.BF.DFE_FEN16_P2_LANE_1_0
#define reg_DFE_FEN17_P2_LANE  DFE_FEN_REG1_P2.BF.DFE_FEN17_P2_LANE

// 0x0094	DFE_FEN_REG2_P2		DFE FEN REG2 Path2
typedef union {
	struct {
		uint8_t DFE_FEN18_P2_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DFE_FEN19_P2_LANE                        : 1;	/*      2     r/w 1'b0*/
		uint8_t DFE_FEN20_P2_LANE_1_0                    : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t DFE_FEN21_P2_LANE                        : 1;	/*      5     r/w 1'b0*/
		uint8_t DFE_FEN22_P2_LANE                        : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_FEN23_P2_LANE                        : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEN24_P2_LANE                        : 1;	/*      8     r/w 1'b0*/
		uint8_t DFE_FEN25_P2_LANE                        : 1;	/*      9     r/w 1'b0*/
		uint8_t DFE_FEN26_P2_LANE                        : 1;	/*     10     r/w 1'b0*/
		uint8_t DFE_FEN27_P2_LANE                        : 1;	/*     11     r/w 1'b0*/
		uint8_t DFE_FEN28_P2_LANE                        : 1;	/*     12     r/w 1'b0*/
		uint8_t DFE_FEN29_P2_LANE                        : 1;	/*     13     r/w 1'b0*/
		uint8_t DFE_FEN30_P2_LANE                        : 1;	/*     14     r/w 1'b0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w 17'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG2_P2_t;
__xdata __at( 0x2494 ) volatile DFE_FEN_REG2_P2_t DFE_FEN_REG2_P2;
#define reg_DFE_FEN18_P2_LANE_1_0  DFE_FEN_REG2_P2.BF.DFE_FEN18_P2_LANE_1_0
#define reg_DFE_FEN19_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN19_P2_LANE
#define reg_DFE_FEN20_P2_LANE_1_0  DFE_FEN_REG2_P2.BF.DFE_FEN20_P2_LANE_1_0
#define reg_DFE_FEN21_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN21_P2_LANE
#define reg_DFE_FEN22_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN22_P2_LANE
#define reg_DFE_FEN23_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN23_P2_LANE
#define reg_DFE_FEN24_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN24_P2_LANE
#define reg_DFE_FEN25_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN25_P2_LANE
#define reg_DFE_FEN26_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN26_P2_LANE
#define reg_DFE_FEN27_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN27_P2_LANE
#define reg_DFE_FEN28_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN28_P2_LANE
#define reg_DFE_FEN29_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN29_P2_LANE
#define reg_DFE_FEN30_P2_LANE  DFE_FEN_REG2_P2.BF.DFE_FEN30_P2_LANE

// 0x0098	DFE_FEN_REG0_P3		DFE FEN REG0 Path3
typedef union {
	struct {
		uint8_t DFE_FENDC_D_P3_LANE_2_0                  : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DFE_FENDC_S_P3_LANE_2_0                  : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FENDC_E_P3_LANE                      : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_FENVREF_P3_LANE_2_0_b0               : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FENVREF_P3_LANE_2_0_b1               : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FEN0_D_P3_LANE_2_0                   : 3;	/*[12:10]     r/w 3'h0*/
		uint8_t DFE_FEN0_S_P3_LANE_2_0                   : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEN2_D_P3_LANE_2_0                   : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t DFE_FEN2_S_P3_LANE_2_0                   : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t DFE_FEN2_TUNE3_D_P3_LANE                 : 1;	/*     22     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE3_S_P3_LANE                 : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE1_D_P3_LANE                 : 1;	/*     24     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE1_S_P3_LANE                 : 1;	/*     25     r/w 1'b0*/
		uint8_t DFE_FEN3_D_P3_LANE_2_0                   : 3;	/*[28:26]     r/w 3'h0*/
		uint8_t DFE_FEN3_S_P3_LANE_2_0                   : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG0_P3_t;
__xdata __at( 0x2498 ) volatile DFE_FEN_REG0_P3_t DFE_FEN_REG0_P3;
#define reg_DFE_FENDC_D_P3_LANE_2_0  DFE_FEN_REG0_P3.BF.DFE_FENDC_D_P3_LANE_2_0
#define reg_DFE_FENDC_S_P3_LANE_2_0  DFE_FEN_REG0_P3.BF.DFE_FENDC_S_P3_LANE_2_0
#define reg_DFE_FENDC_E_P3_LANE  DFE_FEN_REG0_P3.BF.DFE_FENDC_E_P3_LANE
#define reg_DFE_FENVREF_P3_LANE_2_0_b0  DFE_FEN_REG0_P3.BF.DFE_FENVREF_P3_LANE_2_0_b0
#define reg_DFE_FENVREF_P3_LANE_2_0_b1  DFE_FEN_REG0_P3.BF.DFE_FENVREF_P3_LANE_2_0_b1
#define reg_DFE_FEN0_D_P3_LANE_2_0  DFE_FEN_REG0_P3.BF.DFE_FEN0_D_P3_LANE_2_0
#define reg_DFE_FEN0_S_P3_LANE_2_0  DFE_FEN_REG0_P3.BF.DFE_FEN0_S_P3_LANE_2_0
#define reg_DFE_FEN2_D_P3_LANE_2_0  DFE_FEN_REG0_P3.BF.DFE_FEN2_D_P3_LANE_2_0
#define reg_DFE_FEN2_S_P3_LANE_2_0  DFE_FEN_REG0_P3.BF.DFE_FEN2_S_P3_LANE_2_0
#define reg_DFE_FEN2_TUNE3_D_P3_LANE  DFE_FEN_REG0_P3.BF.DFE_FEN2_TUNE3_D_P3_LANE
#define reg_DFE_FEN2_TUNE3_S_P3_LANE  DFE_FEN_REG0_P3.BF.DFE_FEN2_TUNE3_S_P3_LANE
#define reg_DFE_FEN2_TUNE1_D_P3_LANE  DFE_FEN_REG0_P3.BF.DFE_FEN2_TUNE1_D_P3_LANE
#define reg_DFE_FEN2_TUNE1_S_P3_LANE  DFE_FEN_REG0_P3.BF.DFE_FEN2_TUNE1_S_P3_LANE
#define reg_DFE_FEN3_D_P3_LANE_2_0  DFE_FEN_REG0_P3.BF.DFE_FEN3_D_P3_LANE_2_0
#define reg_DFE_FEN3_S_P3_LANE_2_0  DFE_FEN_REG0_P3.BF.DFE_FEN3_S_P3_LANE_2_0

// 0x009c	DFE_FEN_REG1_P3		DFE FEN REG1 Path3
typedef union {
	struct {
		uint8_t DFE_FEN4_D_P3_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DFE_FEN4_S_P3_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FEN5_P3_LANE_2_0_b0                  : 2;	/*  [8:6]     r/w 3'h0*/
		uint8_t DFE_FEN5_P3_LANE_2_0_b1                  : 1;	/*  [8:6]     r/w 3'h0*/
		uint8_t DFE_FEN6_P3_LANE_2_0                     : 3;	/* [11:9]     r/w 3'h0*/
		uint8_t DFE_FEN7_P3_LANE_2_0                     : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t DFE_FEN8_P3_LANE_2_0_b0                  : 1;	/*[17:15]     r/w 3'h0*/
		uint8_t DFE_FEN8_P3_LANE_2_0_b1                  : 2;	/*[17:15]     r/w 3'h0*/
		uint8_t DFE_FEN9_P3_LANE_1_0                     : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t DFE_FEN10_P3_LANE_1_0                    : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t DFE_FEN11_P3_LANE                        : 1;	/*     22     r/w 1'b0*/
		uint8_t DFE_FEN12_P3_LANE_1_0_b0                 : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN12_P3_LANE_1_0_b1                 : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN13_P3_LANE                        : 1;	/*     25     r/w 1'b0*/
		uint8_t DFE_FEN14_P3_LANE_1_0                    : 2;	/*[27:26]     r/w 2'h0*/
		uint8_t DFE_FEN15_P3_LANE                        : 1;	/*     28     r/w 1'b0*/
		uint8_t DFE_FEN16_P3_LANE_1_0                    : 2;	/*[30:29]     r/w 2'h0*/
		uint8_t DFE_FEN17_P3_LANE                        : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG1_P3_t;
__xdata __at( 0x249c ) volatile DFE_FEN_REG1_P3_t DFE_FEN_REG1_P3;
#define reg_DFE_FEN4_D_P3_LANE_2_0  DFE_FEN_REG1_P3.BF.DFE_FEN4_D_P3_LANE_2_0
#define reg_DFE_FEN4_S_P3_LANE_2_0  DFE_FEN_REG1_P3.BF.DFE_FEN4_S_P3_LANE_2_0
#define reg_DFE_FEN5_P3_LANE_2_0_b0  DFE_FEN_REG1_P3.BF.DFE_FEN5_P3_LANE_2_0_b0
#define reg_DFE_FEN5_P3_LANE_2_0_b1  DFE_FEN_REG1_P3.BF.DFE_FEN5_P3_LANE_2_0_b1
#define reg_DFE_FEN6_P3_LANE_2_0  DFE_FEN_REG1_P3.BF.DFE_FEN6_P3_LANE_2_0
#define reg_DFE_FEN7_P3_LANE_2_0  DFE_FEN_REG1_P3.BF.DFE_FEN7_P3_LANE_2_0
#define reg_DFE_FEN8_P3_LANE_2_0_b0  DFE_FEN_REG1_P3.BF.DFE_FEN8_P3_LANE_2_0_b0
#define reg_DFE_FEN8_P3_LANE_2_0_b1  DFE_FEN_REG1_P3.BF.DFE_FEN8_P3_LANE_2_0_b1
#define reg_DFE_FEN9_P3_LANE_1_0  DFE_FEN_REG1_P3.BF.DFE_FEN9_P3_LANE_1_0
#define reg_DFE_FEN10_P3_LANE_1_0  DFE_FEN_REG1_P3.BF.DFE_FEN10_P3_LANE_1_0
#define reg_DFE_FEN11_P3_LANE  DFE_FEN_REG1_P3.BF.DFE_FEN11_P3_LANE
#define reg_DFE_FEN12_P3_LANE_1_0_b0  DFE_FEN_REG1_P3.BF.DFE_FEN12_P3_LANE_1_0_b0
#define reg_DFE_FEN12_P3_LANE_1_0_b1  DFE_FEN_REG1_P3.BF.DFE_FEN12_P3_LANE_1_0_b1
#define reg_DFE_FEN13_P3_LANE  DFE_FEN_REG1_P3.BF.DFE_FEN13_P3_LANE
#define reg_DFE_FEN14_P3_LANE_1_0  DFE_FEN_REG1_P3.BF.DFE_FEN14_P3_LANE_1_0
#define reg_DFE_FEN15_P3_LANE  DFE_FEN_REG1_P3.BF.DFE_FEN15_P3_LANE
#define reg_DFE_FEN16_P3_LANE_1_0  DFE_FEN_REG1_P3.BF.DFE_FEN16_P3_LANE_1_0
#define reg_DFE_FEN17_P3_LANE  DFE_FEN_REG1_P3.BF.DFE_FEN17_P3_LANE

// 0x00a0	DFE_FEN_REG2_P3		DFE FEN REG2 Path3
typedef union {
	struct {
		uint8_t DFE_FEN18_P3_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DFE_FEN19_P3_LANE                        : 1;	/*      2     r/w 1'b0*/
		uint8_t DFE_FEN20_P3_LANE_1_0                    : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t DFE_FEN21_P3_LANE                        : 1;	/*      5     r/w 1'b0*/
		uint8_t DFE_FEN22_P3_LANE                        : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_FEN23_P3_LANE                        : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEN24_P3_LANE                        : 1;	/*      8     r/w 1'b0*/
		uint8_t DFE_FEN25_P3_LANE                        : 1;	/*      9     r/w 1'b0*/
		uint8_t DFE_FEN26_P3_LANE                        : 1;	/*     10     r/w 1'b0*/
		uint8_t DFE_FEN27_P3_LANE                        : 1;	/*     11     r/w 1'b0*/
		uint8_t DFE_FEN28_P3_LANE                        : 1;	/*     12     r/w 1'b0*/
		uint8_t DFE_FEN29_P3_LANE                        : 1;	/*     13     r/w 1'b0*/
		uint8_t DFE_FEN30_P3_LANE                        : 1;	/*     14     r/w 1'b0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w 17'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG2_P3_t;
__xdata __at( 0x24a0 ) volatile DFE_FEN_REG2_P3_t DFE_FEN_REG2_P3;
#define reg_DFE_FEN18_P3_LANE_1_0  DFE_FEN_REG2_P3.BF.DFE_FEN18_P3_LANE_1_0
#define reg_DFE_FEN19_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN19_P3_LANE
#define reg_DFE_FEN20_P3_LANE_1_0  DFE_FEN_REG2_P3.BF.DFE_FEN20_P3_LANE_1_0
#define reg_DFE_FEN21_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN21_P3_LANE
#define reg_DFE_FEN22_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN22_P3_LANE
#define reg_DFE_FEN23_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN23_P3_LANE
#define reg_DFE_FEN24_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN24_P3_LANE
#define reg_DFE_FEN25_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN25_P3_LANE
#define reg_DFE_FEN26_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN26_P3_LANE
#define reg_DFE_FEN27_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN27_P3_LANE
#define reg_DFE_FEN28_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN28_P3_LANE
#define reg_DFE_FEN29_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN29_P3_LANE
#define reg_DFE_FEN30_P3_LANE  DFE_FEN_REG2_P3.BF.DFE_FEN30_P3_LANE

// 0x00a4	DFE_FEN_REG0_P4		DFE FEN REG0 Path4
typedef union {
	struct {
		uint8_t DFE_FENDC_D_P4_LANE_2_0                  : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DFE_FENDC_S_P4_LANE_2_0                  : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FENDC_E_P4_LANE                      : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_FENVREF_P4_LANE_2_0_b0               : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FENVREF_P4_LANE_2_0_b1               : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FEN0_D_P4_LANE_2_0                   : 3;	/*[12:10]     r/w 3'h0*/
		uint8_t DFE_FEN0_S_P4_LANE_2_0                   : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEN2_D_P4_LANE_2_0                   : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t DFE_FEN2_S_P4_LANE_2_0                   : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t DFE_FEN2_TUNE3_D_P4_LANE                 : 1;	/*     22     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE3_S_P4_LANE                 : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE1_D_P4_LANE                 : 1;	/*     24     r/w 1'b0*/
		uint8_t DFE_FEN2_TUNE1_S_P4_LANE                 : 1;	/*     25     r/w 1'b0*/
		uint8_t DFE_FEN3_D_P4_LANE_2_0                   : 3;	/*[28:26]     r/w 3'h0*/
		uint8_t DFE_FEN3_S_P4_LANE_2_0                   : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG0_P4_t;
__xdata __at( 0x24a4 ) volatile DFE_FEN_REG0_P4_t DFE_FEN_REG0_P4;
#define reg_DFE_FENDC_D_P4_LANE_2_0  DFE_FEN_REG0_P4.BF.DFE_FENDC_D_P4_LANE_2_0
#define reg_DFE_FENDC_S_P4_LANE_2_0  DFE_FEN_REG0_P4.BF.DFE_FENDC_S_P4_LANE_2_0
#define reg_DFE_FENDC_E_P4_LANE  DFE_FEN_REG0_P4.BF.DFE_FENDC_E_P4_LANE
#define reg_DFE_FENVREF_P4_LANE_2_0_b0  DFE_FEN_REG0_P4.BF.DFE_FENVREF_P4_LANE_2_0_b0
#define reg_DFE_FENVREF_P4_LANE_2_0_b1  DFE_FEN_REG0_P4.BF.DFE_FENVREF_P4_LANE_2_0_b1
#define reg_DFE_FEN0_D_P4_LANE_2_0  DFE_FEN_REG0_P4.BF.DFE_FEN0_D_P4_LANE_2_0
#define reg_DFE_FEN0_S_P4_LANE_2_0  DFE_FEN_REG0_P4.BF.DFE_FEN0_S_P4_LANE_2_0
#define reg_DFE_FEN2_D_P4_LANE_2_0  DFE_FEN_REG0_P4.BF.DFE_FEN2_D_P4_LANE_2_0
#define reg_DFE_FEN2_S_P4_LANE_2_0  DFE_FEN_REG0_P4.BF.DFE_FEN2_S_P4_LANE_2_0
#define reg_DFE_FEN2_TUNE3_D_P4_LANE  DFE_FEN_REG0_P4.BF.DFE_FEN2_TUNE3_D_P4_LANE
#define reg_DFE_FEN2_TUNE3_S_P4_LANE  DFE_FEN_REG0_P4.BF.DFE_FEN2_TUNE3_S_P4_LANE
#define reg_DFE_FEN2_TUNE1_D_P4_LANE  DFE_FEN_REG0_P4.BF.DFE_FEN2_TUNE1_D_P4_LANE
#define reg_DFE_FEN2_TUNE1_S_P4_LANE  DFE_FEN_REG0_P4.BF.DFE_FEN2_TUNE1_S_P4_LANE
#define reg_DFE_FEN3_D_P4_LANE_2_0  DFE_FEN_REG0_P4.BF.DFE_FEN3_D_P4_LANE_2_0
#define reg_DFE_FEN3_S_P4_LANE_2_0  DFE_FEN_REG0_P4.BF.DFE_FEN3_S_P4_LANE_2_0

// 0x00a8	DFE_FEN_REG1_P4		DFE FEN REG1 Path4
typedef union {
	struct {
		uint8_t DFE_FEN4_D_P4_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t DFE_FEN4_S_P4_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FEN5_P4_LANE_2_0_b0                  : 2;	/*  [8:6]     r/w 3'h0*/
		uint8_t DFE_FEN5_P4_LANE_2_0_b1                  : 1;	/*  [8:6]     r/w 3'h0*/
		uint8_t DFE_FEN6_P4_LANE_2_0                     : 3;	/* [11:9]     r/w 3'h0*/
		uint8_t DFE_FEN7_P4_LANE_2_0                     : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t DFE_FEN8_P4_LANE_2_0_b0                  : 1;	/*[17:15]     r/w 3'h0*/
		uint8_t DFE_FEN8_P4_LANE_2_0_b1                  : 2;	/*[17:15]     r/w 3'h0*/
		uint8_t DFE_FEN9_P4_LANE_1_0                     : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t DFE_FEN10_P4_LANE_1_0                    : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t DFE_FEN11_P4_LANE                        : 1;	/*     22     r/w 1'b0*/
		uint8_t DFE_FEN12_P4_LANE_1_0_b0                 : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN12_P4_LANE_1_0_b1                 : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN13_P4_LANE                        : 1;	/*     25     r/w 1'b0*/
		uint8_t DFE_FEN14_P4_LANE_1_0                    : 2;	/*[27:26]     r/w 2'h0*/
		uint8_t DFE_FEN15_P4_LANE                        : 1;	/*     28     r/w 1'b0*/
		uint8_t DFE_FEN16_P4_LANE_1_0                    : 2;	/*[30:29]     r/w 2'h0*/
		uint8_t DFE_FEN17_P4_LANE                        : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG1_P4_t;
__xdata __at( 0x24a8 ) volatile DFE_FEN_REG1_P4_t DFE_FEN_REG1_P4;
#define reg_DFE_FEN4_D_P4_LANE_2_0  DFE_FEN_REG1_P4.BF.DFE_FEN4_D_P4_LANE_2_0
#define reg_DFE_FEN4_S_P4_LANE_2_0  DFE_FEN_REG1_P4.BF.DFE_FEN4_S_P4_LANE_2_0
#define reg_DFE_FEN5_P4_LANE_2_0_b0  DFE_FEN_REG1_P4.BF.DFE_FEN5_P4_LANE_2_0_b0
#define reg_DFE_FEN5_P4_LANE_2_0_b1  DFE_FEN_REG1_P4.BF.DFE_FEN5_P4_LANE_2_0_b1
#define reg_DFE_FEN6_P4_LANE_2_0  DFE_FEN_REG1_P4.BF.DFE_FEN6_P4_LANE_2_0
#define reg_DFE_FEN7_P4_LANE_2_0  DFE_FEN_REG1_P4.BF.DFE_FEN7_P4_LANE_2_0
#define reg_DFE_FEN8_P4_LANE_2_0_b0  DFE_FEN_REG1_P4.BF.DFE_FEN8_P4_LANE_2_0_b0
#define reg_DFE_FEN8_P4_LANE_2_0_b1  DFE_FEN_REG1_P4.BF.DFE_FEN8_P4_LANE_2_0_b1
#define reg_DFE_FEN9_P4_LANE_1_0  DFE_FEN_REG1_P4.BF.DFE_FEN9_P4_LANE_1_0
#define reg_DFE_FEN10_P4_LANE_1_0  DFE_FEN_REG1_P4.BF.DFE_FEN10_P4_LANE_1_0
#define reg_DFE_FEN11_P4_LANE  DFE_FEN_REG1_P4.BF.DFE_FEN11_P4_LANE
#define reg_DFE_FEN12_P4_LANE_1_0_b0  DFE_FEN_REG1_P4.BF.DFE_FEN12_P4_LANE_1_0_b0
#define reg_DFE_FEN12_P4_LANE_1_0_b1  DFE_FEN_REG1_P4.BF.DFE_FEN12_P4_LANE_1_0_b1
#define reg_DFE_FEN13_P4_LANE  DFE_FEN_REG1_P4.BF.DFE_FEN13_P4_LANE
#define reg_DFE_FEN14_P4_LANE_1_0  DFE_FEN_REG1_P4.BF.DFE_FEN14_P4_LANE_1_0
#define reg_DFE_FEN15_P4_LANE  DFE_FEN_REG1_P4.BF.DFE_FEN15_P4_LANE
#define reg_DFE_FEN16_P4_LANE_1_0  DFE_FEN_REG1_P4.BF.DFE_FEN16_P4_LANE_1_0
#define reg_DFE_FEN17_P4_LANE  DFE_FEN_REG1_P4.BF.DFE_FEN17_P4_LANE

// 0x00ac	DFE_FEN_REG2_P4		DFE FEN REG2 Path4
typedef union {
	struct {
		uint8_t DFE_FEN18_P4_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DFE_FEN19_P4_LANE                        : 1;	/*      2     r/w 1'b0*/
		uint8_t DFE_FEN20_P4_LANE_1_0                    : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t DFE_FEN21_P4_LANE                        : 1;	/*      5     r/w 1'b0*/
		uint8_t DFE_FEN22_P4_LANE                        : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_FEN23_P4_LANE                        : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEN24_P4_LANE                        : 1;	/*      8     r/w 1'b0*/
		uint8_t DFE_FEN25_P4_LANE                        : 1;	/*      9     r/w 1'b0*/
		uint8_t DFE_FEN26_P4_LANE                        : 1;	/*     10     r/w 1'b0*/
		uint8_t DFE_FEN27_P4_LANE                        : 1;	/*     11     r/w 1'b0*/
		uint8_t DFE_FEN28_P4_LANE                        : 1;	/*     12     r/w 1'b0*/
		uint8_t DFE_FEN29_P4_LANE                        : 1;	/*     13     r/w 1'b0*/
		uint8_t DFE_FEN30_P4_LANE                        : 1;	/*     14     r/w 1'b0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w 17'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w 17'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG2_P4_t;
__xdata __at( 0x24ac ) volatile DFE_FEN_REG2_P4_t DFE_FEN_REG2_P4;
#define reg_DFE_FEN18_P4_LANE_1_0  DFE_FEN_REG2_P4.BF.DFE_FEN18_P4_LANE_1_0
#define reg_DFE_FEN19_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN19_P4_LANE
#define reg_DFE_FEN20_P4_LANE_1_0  DFE_FEN_REG2_P4.BF.DFE_FEN20_P4_LANE_1_0
#define reg_DFE_FEN21_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN21_P4_LANE
#define reg_DFE_FEN22_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN22_P4_LANE
#define reg_DFE_FEN23_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN23_P4_LANE
#define reg_DFE_FEN24_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN24_P4_LANE
#define reg_DFE_FEN25_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN25_P4_LANE
#define reg_DFE_FEN26_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN26_P4_LANE
#define reg_DFE_FEN27_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN27_P4_LANE
#define reg_DFE_FEN28_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN28_P4_LANE
#define reg_DFE_FEN29_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN29_P4_LANE
#define reg_DFE_FEN30_P4_LANE  DFE_FEN_REG2_P4.BF.DFE_FEN30_P4_LANE

// 0x00b0	DFE_FEXT_REG0_P1		DFE FEXT REG0 Path1
typedef union {
	struct {
		uint8_t DFE_FEXTDC_D_BOT_P1_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_D_MID_P1_LANE_5_0             : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_D_TOP_P1_LANE_5_0             : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_S_BOT_P1_LANE_5_0             : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG0_P1_t;
__xdata __at( 0x24b0 ) volatile DFE_FEXT_REG0_P1_t DFE_FEXT_REG0_P1;
#define reg_DFE_FEXTDC_D_BOT_P1_LANE_5_0  DFE_FEXT_REG0_P1.BF.DFE_FEXTDC_D_BOT_P1_LANE_5_0
#define reg_DFE_FEXTDC_D_MID_P1_LANE_5_0  DFE_FEXT_REG0_P1.BF.DFE_FEXTDC_D_MID_P1_LANE_5_0
#define reg_DFE_FEXTDC_D_TOP_P1_LANE_5_0  DFE_FEXT_REG0_P1.BF.DFE_FEXTDC_D_TOP_P1_LANE_5_0
#define reg_DFE_FEXTDC_S_BOT_P1_LANE_5_0  DFE_FEXT_REG0_P1.BF.DFE_FEXTDC_S_BOT_P1_LANE_5_0

// 0x00b4	DFE_FEXT_REG1_P1		DFE FEXT REG1 Path1
typedef union {
	struct {
		uint8_t DFE_FEXTDC_S_MID_P1_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_S_TOP_P1_LANE_5_0             : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_E_P1_LANE_6_0                 : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXTVREF_BOT_P1_LANE_6_0             : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG1_P1_t;
__xdata __at( 0x24b4 ) volatile DFE_FEXT_REG1_P1_t DFE_FEXT_REG1_P1;
#define reg_DFE_FEXTDC_S_MID_P1_LANE_5_0  DFE_FEXT_REG1_P1.BF.DFE_FEXTDC_S_MID_P1_LANE_5_0
#define reg_DFE_FEXTDC_S_TOP_P1_LANE_5_0  DFE_FEXT_REG1_P1.BF.DFE_FEXTDC_S_TOP_P1_LANE_5_0
#define reg_DFE_FEXTDC_E_P1_LANE_6_0  DFE_FEXT_REG1_P1.BF.DFE_FEXTDC_E_P1_LANE_6_0
#define reg_DFE_FEXTVREF_BOT_P1_LANE_6_0  DFE_FEXT_REG1_P1.BF.DFE_FEXTVREF_BOT_P1_LANE_6_0

// 0x00b8	DFE_FEXT_REG2_P1		DFE FEXT REG2 Path1
typedef union {
	struct {
		uint8_t DFE_FEXTVREF_MID_P1_LANE_6_0             : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXTVREF_TOP_P1_LANE_6_0             : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT0_D_BOT_P1_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT0_D_MID_P1_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG2_P1_t;
__xdata __at( 0x24b8 ) volatile DFE_FEXT_REG2_P1_t DFE_FEXT_REG2_P1;
#define reg_DFE_FEXTVREF_MID_P1_LANE_6_0  DFE_FEXT_REG2_P1.BF.DFE_FEXTVREF_MID_P1_LANE_6_0
#define reg_DFE_FEXTVREF_TOP_P1_LANE_6_0  DFE_FEXT_REG2_P1.BF.DFE_FEXTVREF_TOP_P1_LANE_6_0
#define reg_DFE_FEXT0_D_BOT_P1_LANE_5_0  DFE_FEXT_REG2_P1.BF.DFE_FEXT0_D_BOT_P1_LANE_5_0
#define reg_DFE_FEXT0_D_MID_P1_LANE_5_0  DFE_FEXT_REG2_P1.BF.DFE_FEXT0_D_MID_P1_LANE_5_0

// 0x00bc	DFE_FEXT_REG3_P1		DFE FEXT REG3 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT0_D_TOP_P1_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_BOT_P1_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_MID_P1_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_TOP_P1_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG3_P1_t;
__xdata __at( 0x24bc ) volatile DFE_FEXT_REG3_P1_t DFE_FEXT_REG3_P1;
#define reg_DFE_FEXT0_D_TOP_P1_LANE_5_0  DFE_FEXT_REG3_P1.BF.DFE_FEXT0_D_TOP_P1_LANE_5_0
#define reg_DFE_FEXT0_S_BOT_P1_LANE_5_0  DFE_FEXT_REG3_P1.BF.DFE_FEXT0_S_BOT_P1_LANE_5_0
#define reg_DFE_FEXT0_S_MID_P1_LANE_5_0  DFE_FEXT_REG3_P1.BF.DFE_FEXT0_S_MID_P1_LANE_5_0
#define reg_DFE_FEXT0_S_TOP_P1_LANE_5_0  DFE_FEXT_REG3_P1.BF.DFE_FEXT0_S_TOP_P1_LANE_5_0

// 0x00c0	DFE_FEXT_REG4_P1		DFE FEXT REG4 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT2_D_BOT_P1_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT2_D_MID_P1_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT2_D_TOP_P1_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT2_S_BOT_P1_LANE_6_0              : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG4_P1_t;
__xdata __at( 0x24c0 ) volatile DFE_FEXT_REG4_P1_t DFE_FEXT_REG4_P1;
#define reg_DFE_FEXT2_D_BOT_P1_LANE_6_0  DFE_FEXT_REG4_P1.BF.DFE_FEXT2_D_BOT_P1_LANE_6_0
#define reg_DFE_FEXT2_D_MID_P1_LANE_6_0  DFE_FEXT_REG4_P1.BF.DFE_FEXT2_D_MID_P1_LANE_6_0
#define reg_DFE_FEXT2_D_TOP_P1_LANE_6_0  DFE_FEXT_REG4_P1.BF.DFE_FEXT2_D_TOP_P1_LANE_6_0
#define reg_DFE_FEXT2_S_BOT_P1_LANE_6_0  DFE_FEXT_REG4_P1.BF.DFE_FEXT2_S_BOT_P1_LANE_6_0

// 0x00c4	DFE_FEXT_REG5_P1		DFE FEXT REG5 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT2_S_MID_P1_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT2_S_TOP_P1_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT2_TUNE3_D_P1_LANE_3_0            : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_FEXT2_TUNE3_S_P1_LANE_3_0            : 4;	/*[27:24]     r/w 4'h6*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG5_P1_t;
__xdata __at( 0x24c4 ) volatile DFE_FEXT_REG5_P1_t DFE_FEXT_REG5_P1;
#define reg_DFE_FEXT2_S_MID_P1_LANE_6_0  DFE_FEXT_REG5_P1.BF.DFE_FEXT2_S_MID_P1_LANE_6_0
#define reg_DFE_FEXT2_S_TOP_P1_LANE_6_0  DFE_FEXT_REG5_P1.BF.DFE_FEXT2_S_TOP_P1_LANE_6_0
#define reg_DFE_FEXT2_TUNE3_D_P1_LANE_3_0  DFE_FEXT_REG5_P1.BF.DFE_FEXT2_TUNE3_D_P1_LANE_3_0
#define reg_DFE_FEXT2_TUNE3_S_P1_LANE_3_0  DFE_FEXT_REG5_P1.BF.DFE_FEXT2_TUNE3_S_P1_LANE_3_0

// 0x00c8	DFE_FEXT_REG6_P1		DFE FEXT REG6 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT2_TUNE1_D_P1_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t DFE_FEXT2_TUNE1_S_P1_LANE_3_0            : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t DFE_FEXT3_D_BOT_P1_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT3_D_MID_P1_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG6_P1_t;
__xdata __at( 0x24c8 ) volatile DFE_FEXT_REG6_P1_t DFE_FEXT_REG6_P1;
#define reg_DFE_FEXT2_TUNE1_D_P1_LANE_3_0  DFE_FEXT_REG6_P1.BF.DFE_FEXT2_TUNE1_D_P1_LANE_3_0
#define reg_DFE_FEXT2_TUNE1_S_P1_LANE_3_0  DFE_FEXT_REG6_P1.BF.DFE_FEXT2_TUNE1_S_P1_LANE_3_0
#define reg_DFE_FEXT3_D_BOT_P1_LANE_5_0  DFE_FEXT_REG6_P1.BF.DFE_FEXT3_D_BOT_P1_LANE_5_0
#define reg_DFE_FEXT3_D_MID_P1_LANE_5_0  DFE_FEXT_REG6_P1.BF.DFE_FEXT3_D_MID_P1_LANE_5_0

// 0x00cc	DFE_FEXT_REG7_P1		DFE FEXT REG7 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT3_D_TOP_P1_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_BOT_P1_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_MID_P1_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_TOP_P1_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG7_P1_t;
__xdata __at( 0x24cc ) volatile DFE_FEXT_REG7_P1_t DFE_FEXT_REG7_P1;
#define reg_DFE_FEXT3_D_TOP_P1_LANE_5_0  DFE_FEXT_REG7_P1.BF.DFE_FEXT3_D_TOP_P1_LANE_5_0
#define reg_DFE_FEXT3_S_BOT_P1_LANE_5_0  DFE_FEXT_REG7_P1.BF.DFE_FEXT3_S_BOT_P1_LANE_5_0
#define reg_DFE_FEXT3_S_MID_P1_LANE_5_0  DFE_FEXT_REG7_P1.BF.DFE_FEXT3_S_MID_P1_LANE_5_0
#define reg_DFE_FEXT3_S_TOP_P1_LANE_5_0  DFE_FEXT_REG7_P1.BF.DFE_FEXT3_S_TOP_P1_LANE_5_0

// 0x00d0	DFE_FEXT_REG8_P1		DFE FEXT REG8 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT4_D_BOT_P1_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT4_D_MID_P1_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT4_D_TOP_P1_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT4_S_BOT_P1_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG8_P1_t;
__xdata __at( 0x24d0 ) volatile DFE_FEXT_REG8_P1_t DFE_FEXT_REG8_P1;
#define reg_DFE_FEXT4_D_BOT_P1_LANE_5_0  DFE_FEXT_REG8_P1.BF.DFE_FEXT4_D_BOT_P1_LANE_5_0
#define reg_DFE_FEXT4_D_MID_P1_LANE_5_0  DFE_FEXT_REG8_P1.BF.DFE_FEXT4_D_MID_P1_LANE_5_0
#define reg_DFE_FEXT4_D_TOP_P1_LANE_5_0  DFE_FEXT_REG8_P1.BF.DFE_FEXT4_D_TOP_P1_LANE_5_0
#define reg_DFE_FEXT4_S_BOT_P1_LANE_5_0  DFE_FEXT_REG8_P1.BF.DFE_FEXT4_S_BOT_P1_LANE_5_0

// 0x00d4	DFE_FEXT_REG9_P1		DFE FEXT REG9 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT4_S_MID_P1_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT4_S_TOP_P1_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT5_BOT_P1_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT5_MID_P1_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG9_P1_t;
__xdata __at( 0x24d4 ) volatile DFE_FEXT_REG9_P1_t DFE_FEXT_REG9_P1;
#define reg_DFE_FEXT4_S_MID_P1_LANE_5_0  DFE_FEXT_REG9_P1.BF.DFE_FEXT4_S_MID_P1_LANE_5_0
#define reg_DFE_FEXT4_S_TOP_P1_LANE_5_0  DFE_FEXT_REG9_P1.BF.DFE_FEXT4_S_TOP_P1_LANE_5_0
#define reg_DFE_FEXT5_BOT_P1_LANE_6_0  DFE_FEXT_REG9_P1.BF.DFE_FEXT5_BOT_P1_LANE_6_0
#define reg_DFE_FEXT5_MID_P1_LANE_6_0  DFE_FEXT_REG9_P1.BF.DFE_FEXT5_MID_P1_LANE_6_0

// 0x00d8	DFE_FEXT_REG10_P1		DFE FEXT REG10 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT5_TOP_P1_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT6_BOT_P1_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT6_MID_P1_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT6_TOP_P1_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG10_P1_t;
__xdata __at( 0x24d8 ) volatile DFE_FEXT_REG10_P1_t DFE_FEXT_REG10_P1;
#define reg_DFE_FEXT5_TOP_P1_LANE_6_0  DFE_FEXT_REG10_P1.BF.DFE_FEXT5_TOP_P1_LANE_6_0
#define reg_DFE_FEXT6_BOT_P1_LANE_6_0  DFE_FEXT_REG10_P1.BF.DFE_FEXT6_BOT_P1_LANE_6_0
#define reg_DFE_FEXT6_MID_P1_LANE_6_0  DFE_FEXT_REG10_P1.BF.DFE_FEXT6_MID_P1_LANE_6_0
#define reg_DFE_FEXT6_TOP_P1_LANE_6_0  DFE_FEXT_REG10_P1.BF.DFE_FEXT6_TOP_P1_LANE_6_0

// 0x00dc	DFE_FEXT_REG11_P1		DFE FEXT REG11 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT7_BOT_P1_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT7_MID_P1_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT7_TOP_P1_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT8_BOT_P1_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG11_P1_t;
__xdata __at( 0x24dc ) volatile DFE_FEXT_REG11_P1_t DFE_FEXT_REG11_P1;
#define reg_DFE_FEXT7_BOT_P1_LANE_6_0  DFE_FEXT_REG11_P1.BF.DFE_FEXT7_BOT_P1_LANE_6_0
#define reg_DFE_FEXT7_MID_P1_LANE_6_0  DFE_FEXT_REG11_P1.BF.DFE_FEXT7_MID_P1_LANE_6_0
#define reg_DFE_FEXT7_TOP_P1_LANE_6_0  DFE_FEXT_REG11_P1.BF.DFE_FEXT7_TOP_P1_LANE_6_0
#define reg_DFE_FEXT8_BOT_P1_LANE_6_0  DFE_FEXT_REG11_P1.BF.DFE_FEXT8_BOT_P1_LANE_6_0

// 0x00e0	DFE_FEXT_REG12_P1		DFE FEXT REG12 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT8_MID_P1_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT8_TOP_P1_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT9_LSB_P1_LANE_5_0                : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT9_MSB_P1_LANE_5_0                : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG12_P1_t;
__xdata __at( 0x24e0 ) volatile DFE_FEXT_REG12_P1_t DFE_FEXT_REG12_P1;
#define reg_DFE_FEXT8_MID_P1_LANE_6_0  DFE_FEXT_REG12_P1.BF.DFE_FEXT8_MID_P1_LANE_6_0
#define reg_DFE_FEXT8_TOP_P1_LANE_6_0  DFE_FEXT_REG12_P1.BF.DFE_FEXT8_TOP_P1_LANE_6_0
#define reg_DFE_FEXT9_LSB_P1_LANE_5_0  DFE_FEXT_REG12_P1.BF.DFE_FEXT9_LSB_P1_LANE_5_0
#define reg_DFE_FEXT9_MSB_P1_LANE_5_0  DFE_FEXT_REG12_P1.BF.DFE_FEXT9_MSB_P1_LANE_5_0

// 0x00e4	DFE_FEXT_REG13_P1		DFE FEXT REG13 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT10_LSB_P1_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT10_MSB_P1_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT11_P1_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT12_LSB_P1_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG13_P1_t;
__xdata __at( 0x24e4 ) volatile DFE_FEXT_REG13_P1_t DFE_FEXT_REG13_P1;
#define reg_DFE_FEXT10_LSB_P1_LANE_5_0  DFE_FEXT_REG13_P1.BF.DFE_FEXT10_LSB_P1_LANE_5_0
#define reg_DFE_FEXT10_MSB_P1_LANE_5_0  DFE_FEXT_REG13_P1.BF.DFE_FEXT10_MSB_P1_LANE_5_0
#define reg_DFE_FEXT11_P1_LANE_5_0  DFE_FEXT_REG13_P1.BF.DFE_FEXT11_P1_LANE_5_0
#define reg_DFE_FEXT12_LSB_P1_LANE_5_0  DFE_FEXT_REG13_P1.BF.DFE_FEXT12_LSB_P1_LANE_5_0

// 0x00e8	DFE_FEXT_REG14_P1		DFE FEXT REG14 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT12_MSB_P1_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT13_P1_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT14_LSB_P1_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT14_MSB_P1_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG14_P1_t;
__xdata __at( 0x24e8 ) volatile DFE_FEXT_REG14_P1_t DFE_FEXT_REG14_P1;
#define reg_DFE_FEXT12_MSB_P1_LANE_5_0  DFE_FEXT_REG14_P1.BF.DFE_FEXT12_MSB_P1_LANE_5_0
#define reg_DFE_FEXT13_P1_LANE_5_0  DFE_FEXT_REG14_P1.BF.DFE_FEXT13_P1_LANE_5_0
#define reg_DFE_FEXT14_LSB_P1_LANE_5_0  DFE_FEXT_REG14_P1.BF.DFE_FEXT14_LSB_P1_LANE_5_0
#define reg_DFE_FEXT14_MSB_P1_LANE_5_0  DFE_FEXT_REG14_P1.BF.DFE_FEXT14_MSB_P1_LANE_5_0

// 0x00ec	DFE_FEXT_REG15_P1		DFE FEXT REG15 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT15_P1_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT16_LSB_P1_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT16_MSB_P1_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT17_P1_LANE_5_0                   : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG15_P1_t;
__xdata __at( 0x24ec ) volatile DFE_FEXT_REG15_P1_t DFE_FEXT_REG15_P1;
#define reg_DFE_FEXT15_P1_LANE_5_0  DFE_FEXT_REG15_P1.BF.DFE_FEXT15_P1_LANE_5_0
#define reg_DFE_FEXT16_LSB_P1_LANE_5_0  DFE_FEXT_REG15_P1.BF.DFE_FEXT16_LSB_P1_LANE_5_0
#define reg_DFE_FEXT16_MSB_P1_LANE_5_0  DFE_FEXT_REG15_P1.BF.DFE_FEXT16_MSB_P1_LANE_5_0
#define reg_DFE_FEXT17_P1_LANE_5_0  DFE_FEXT_REG15_P1.BF.DFE_FEXT17_P1_LANE_5_0

// 0x00f0	DFE_FEXT_REG16_P1		DFE FEXT REG16 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT18_LSB_P1_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT18_MSB_P1_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT19_P1_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT20_LSB_P1_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG16_P1_t;
__xdata __at( 0x24f0 ) volatile DFE_FEXT_REG16_P1_t DFE_FEXT_REG16_P1;
#define reg_DFE_FEXT18_LSB_P1_LANE_5_0  DFE_FEXT_REG16_P1.BF.DFE_FEXT18_LSB_P1_LANE_5_0
#define reg_DFE_FEXT18_MSB_P1_LANE_5_0  DFE_FEXT_REG16_P1.BF.DFE_FEXT18_MSB_P1_LANE_5_0
#define reg_DFE_FEXT19_P1_LANE_5_0  DFE_FEXT_REG16_P1.BF.DFE_FEXT19_P1_LANE_5_0
#define reg_DFE_FEXT20_LSB_P1_LANE_5_0  DFE_FEXT_REG16_P1.BF.DFE_FEXT20_LSB_P1_LANE_5_0

// 0x00f4	DFE_FEXT_REG17_P1		DFE FEXT REG17 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT20_MSB_P1_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT21_P1_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT22_P1_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT23_P1_LANE_4_0                   : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG17_P1_t;
__xdata __at( 0x24f4 ) volatile DFE_FEXT_REG17_P1_t DFE_FEXT_REG17_P1;
#define reg_DFE_FEXT20_MSB_P1_LANE_5_0  DFE_FEXT_REG17_P1.BF.DFE_FEXT20_MSB_P1_LANE_5_0
#define reg_DFE_FEXT21_P1_LANE_5_0  DFE_FEXT_REG17_P1.BF.DFE_FEXT21_P1_LANE_5_0
#define reg_DFE_FEXT22_P1_LANE_5_0  DFE_FEXT_REG17_P1.BF.DFE_FEXT22_P1_LANE_5_0
#define reg_DFE_FEXT23_P1_LANE_4_0  DFE_FEXT_REG17_P1.BF.DFE_FEXT23_P1_LANE_4_0

// 0x00f8	DFE_FEXT_REG18_P1		DFE FEXT REG18 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT24_P1_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_FEXT25_P1_LANE_4_0                   : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEXT26_P1_LANE_4_0                   : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t DFE_FEXT27_P1_LANE_4_0                   : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG18_P1_t;
__xdata __at( 0x24f8 ) volatile DFE_FEXT_REG18_P1_t DFE_FEXT_REG18_P1;
#define reg_DFE_FEXT24_P1_LANE_4_0  DFE_FEXT_REG18_P1.BF.DFE_FEXT24_P1_LANE_4_0
#define reg_DFE_FEXT25_P1_LANE_4_0  DFE_FEXT_REG18_P1.BF.DFE_FEXT25_P1_LANE_4_0
#define reg_DFE_FEXT26_P1_LANE_4_0  DFE_FEXT_REG18_P1.BF.DFE_FEXT26_P1_LANE_4_0
#define reg_DFE_FEXT27_P1_LANE_4_0  DFE_FEXT_REG18_P1.BF.DFE_FEXT27_P1_LANE_4_0

// 0x00fc	DFE_FEXT_REG19_P1		DFE FEXT REG19 Path1
typedef union {
	struct {
		uint8_t DFE_FEXT28_P1_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_FEXT29_P1_LANE_4_0                   : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEXT30_P1_LANE_4_0                   : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG19_P1_t;
__xdata __at( 0x24fc ) volatile DFE_FEXT_REG19_P1_t DFE_FEXT_REG19_P1;
#define reg_DFE_FEXT28_P1_LANE_4_0  DFE_FEXT_REG19_P1.BF.DFE_FEXT28_P1_LANE_4_0
#define reg_DFE_FEXT29_P1_LANE_4_0  DFE_FEXT_REG19_P1.BF.DFE_FEXT29_P1_LANE_4_0
#define reg_DFE_FEXT30_P1_LANE_4_0  DFE_FEXT_REG19_P1.BF.DFE_FEXT30_P1_LANE_4_0

// 0x0100	DFE_FEXT_REG0_P2		DFE FEXT REG0 Path2
typedef union {
	struct {
		uint8_t DFE_FEXTDC_D_BOT_P2_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_D_MID_P2_LANE_5_0             : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_D_TOP_P2_LANE_5_0             : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_S_BOT_P2_LANE_5_0             : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG0_P2_t;
__xdata __at( 0x2500 ) volatile DFE_FEXT_REG0_P2_t DFE_FEXT_REG0_P2;
#define reg_DFE_FEXTDC_D_BOT_P2_LANE_5_0  DFE_FEXT_REG0_P2.BF.DFE_FEXTDC_D_BOT_P2_LANE_5_0
#define reg_DFE_FEXTDC_D_MID_P2_LANE_5_0  DFE_FEXT_REG0_P2.BF.DFE_FEXTDC_D_MID_P2_LANE_5_0
#define reg_DFE_FEXTDC_D_TOP_P2_LANE_5_0  DFE_FEXT_REG0_P2.BF.DFE_FEXTDC_D_TOP_P2_LANE_5_0
#define reg_DFE_FEXTDC_S_BOT_P2_LANE_5_0  DFE_FEXT_REG0_P2.BF.DFE_FEXTDC_S_BOT_P2_LANE_5_0

// 0x0104	DFE_FEXT_REG1_P2		DFE FEXT REG1 Path2
typedef union {
	struct {
		uint8_t DFE_FEXTDC_S_MID_P2_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_S_TOP_P2_LANE_5_0             : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_E_P2_LANE_6_0                 : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXTVREF_BOT_P2_LANE_6_0             : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG1_P2_t;
__xdata __at( 0x2504 ) volatile DFE_FEXT_REG1_P2_t DFE_FEXT_REG1_P2;
#define reg_DFE_FEXTDC_S_MID_P2_LANE_5_0  DFE_FEXT_REG1_P2.BF.DFE_FEXTDC_S_MID_P2_LANE_5_0
#define reg_DFE_FEXTDC_S_TOP_P2_LANE_5_0  DFE_FEXT_REG1_P2.BF.DFE_FEXTDC_S_TOP_P2_LANE_5_0
#define reg_DFE_FEXTDC_E_P2_LANE_6_0  DFE_FEXT_REG1_P2.BF.DFE_FEXTDC_E_P2_LANE_6_0
#define reg_DFE_FEXTVREF_BOT_P2_LANE_6_0  DFE_FEXT_REG1_P2.BF.DFE_FEXTVREF_BOT_P2_LANE_6_0

// 0x0108	DFE_FEXT_REG2_P2		DFE FEXT REG2 Path2
typedef union {
	struct {
		uint8_t DFE_FEXTVREF_MID_P2_LANE_6_0             : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXTVREF_TOP_P2_LANE_6_0             : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT0_D_BOT_P2_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT0_D_MID_P2_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG2_P2_t;
__xdata __at( 0x2508 ) volatile DFE_FEXT_REG2_P2_t DFE_FEXT_REG2_P2;
#define reg_DFE_FEXTVREF_MID_P2_LANE_6_0  DFE_FEXT_REG2_P2.BF.DFE_FEXTVREF_MID_P2_LANE_6_0
#define reg_DFE_FEXTVREF_TOP_P2_LANE_6_0  DFE_FEXT_REG2_P2.BF.DFE_FEXTVREF_TOP_P2_LANE_6_0
#define reg_DFE_FEXT0_D_BOT_P2_LANE_5_0  DFE_FEXT_REG2_P2.BF.DFE_FEXT0_D_BOT_P2_LANE_5_0
#define reg_DFE_FEXT0_D_MID_P2_LANE_5_0  DFE_FEXT_REG2_P2.BF.DFE_FEXT0_D_MID_P2_LANE_5_0

// 0x010c	DFE_FEXT_REG3_P2		DFE FEXT REG3 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT0_D_TOP_P2_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_BOT_P2_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_MID_P2_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_TOP_P2_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG3_P2_t;
__xdata __at( 0x250c ) volatile DFE_FEXT_REG3_P2_t DFE_FEXT_REG3_P2;
#define reg_DFE_FEXT0_D_TOP_P2_LANE_5_0  DFE_FEXT_REG3_P2.BF.DFE_FEXT0_D_TOP_P2_LANE_5_0
#define reg_DFE_FEXT0_S_BOT_P2_LANE_5_0  DFE_FEXT_REG3_P2.BF.DFE_FEXT0_S_BOT_P2_LANE_5_0
#define reg_DFE_FEXT0_S_MID_P2_LANE_5_0  DFE_FEXT_REG3_P2.BF.DFE_FEXT0_S_MID_P2_LANE_5_0
#define reg_DFE_FEXT0_S_TOP_P2_LANE_5_0  DFE_FEXT_REG3_P2.BF.DFE_FEXT0_S_TOP_P2_LANE_5_0

// 0x0110	DFE_FEXT_REG4_P2		DFE FEXT REG4 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT2_D_BOT_P2_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT2_D_MID_P2_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT2_D_TOP_P2_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT2_S_BOT_P2_LANE_6_0              : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG4_P2_t;
__xdata __at( 0x2510 ) volatile DFE_FEXT_REG4_P2_t DFE_FEXT_REG4_P2;
#define reg_DFE_FEXT2_D_BOT_P2_LANE_6_0  DFE_FEXT_REG4_P2.BF.DFE_FEXT2_D_BOT_P2_LANE_6_0
#define reg_DFE_FEXT2_D_MID_P2_LANE_6_0  DFE_FEXT_REG4_P2.BF.DFE_FEXT2_D_MID_P2_LANE_6_0
#define reg_DFE_FEXT2_D_TOP_P2_LANE_6_0  DFE_FEXT_REG4_P2.BF.DFE_FEXT2_D_TOP_P2_LANE_6_0
#define reg_DFE_FEXT2_S_BOT_P2_LANE_6_0  DFE_FEXT_REG4_P2.BF.DFE_FEXT2_S_BOT_P2_LANE_6_0

// 0x0114	DFE_FEXT_REG5_P2		DFE FEXT REG5 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT2_S_MID_P2_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT2_S_TOP_P2_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT2_TUNE3_D_P2_LANE_3_0            : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_FEXT2_TUNE3_S_P2_LANE_3_0            : 4;	/*[27:24]     r/w 4'h6*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG5_P2_t;
__xdata __at( 0x2514 ) volatile DFE_FEXT_REG5_P2_t DFE_FEXT_REG5_P2;
#define reg_DFE_FEXT2_S_MID_P2_LANE_6_0  DFE_FEXT_REG5_P2.BF.DFE_FEXT2_S_MID_P2_LANE_6_0
#define reg_DFE_FEXT2_S_TOP_P2_LANE_6_0  DFE_FEXT_REG5_P2.BF.DFE_FEXT2_S_TOP_P2_LANE_6_0
#define reg_DFE_FEXT2_TUNE3_D_P2_LANE_3_0  DFE_FEXT_REG5_P2.BF.DFE_FEXT2_TUNE3_D_P2_LANE_3_0
#define reg_DFE_FEXT2_TUNE3_S_P2_LANE_3_0  DFE_FEXT_REG5_P2.BF.DFE_FEXT2_TUNE3_S_P2_LANE_3_0

// 0x0118	DFE_FEXT_REG6_P2		DFE FEXT REG6 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT2_TUNE1_D_P2_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t DFE_FEXT2_TUNE1_S_P2_LANE_3_0            : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t DFE_FEXT3_D_BOT_P2_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT3_D_MID_P2_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG6_P2_t;
__xdata __at( 0x2518 ) volatile DFE_FEXT_REG6_P2_t DFE_FEXT_REG6_P2;
#define reg_DFE_FEXT2_TUNE1_D_P2_LANE_3_0  DFE_FEXT_REG6_P2.BF.DFE_FEXT2_TUNE1_D_P2_LANE_3_0
#define reg_DFE_FEXT2_TUNE1_S_P2_LANE_3_0  DFE_FEXT_REG6_P2.BF.DFE_FEXT2_TUNE1_S_P2_LANE_3_0
#define reg_DFE_FEXT3_D_BOT_P2_LANE_5_0  DFE_FEXT_REG6_P2.BF.DFE_FEXT3_D_BOT_P2_LANE_5_0
#define reg_DFE_FEXT3_D_MID_P2_LANE_5_0  DFE_FEXT_REG6_P2.BF.DFE_FEXT3_D_MID_P2_LANE_5_0

// 0x011c	DFE_FEXT_REG7_P2		DFE FEXT REG7 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT3_D_TOP_P2_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_BOT_P2_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_MID_P2_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_TOP_P2_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG7_P2_t;
__xdata __at( 0x251c ) volatile DFE_FEXT_REG7_P2_t DFE_FEXT_REG7_P2;
#define reg_DFE_FEXT3_D_TOP_P2_LANE_5_0  DFE_FEXT_REG7_P2.BF.DFE_FEXT3_D_TOP_P2_LANE_5_0
#define reg_DFE_FEXT3_S_BOT_P2_LANE_5_0  DFE_FEXT_REG7_P2.BF.DFE_FEXT3_S_BOT_P2_LANE_5_0
#define reg_DFE_FEXT3_S_MID_P2_LANE_5_0  DFE_FEXT_REG7_P2.BF.DFE_FEXT3_S_MID_P2_LANE_5_0
#define reg_DFE_FEXT3_S_TOP_P2_LANE_5_0  DFE_FEXT_REG7_P2.BF.DFE_FEXT3_S_TOP_P2_LANE_5_0

// 0x0120	DFE_FEXT_REG8_P2		DFE FEXT REG8 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT4_D_BOT_P2_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT4_D_MID_P2_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT4_D_TOP_P2_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT4_S_BOT_P2_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG8_P2_t;
__xdata __at( 0x2520 ) volatile DFE_FEXT_REG8_P2_t DFE_FEXT_REG8_P2;
#define reg_DFE_FEXT4_D_BOT_P2_LANE_5_0  DFE_FEXT_REG8_P2.BF.DFE_FEXT4_D_BOT_P2_LANE_5_0
#define reg_DFE_FEXT4_D_MID_P2_LANE_5_0  DFE_FEXT_REG8_P2.BF.DFE_FEXT4_D_MID_P2_LANE_5_0
#define reg_DFE_FEXT4_D_TOP_P2_LANE_5_0  DFE_FEXT_REG8_P2.BF.DFE_FEXT4_D_TOP_P2_LANE_5_0
#define reg_DFE_FEXT4_S_BOT_P2_LANE_5_0  DFE_FEXT_REG8_P2.BF.DFE_FEXT4_S_BOT_P2_LANE_5_0

// 0x0124	DFE_FEXT_REG9_P2		DFE FEXT REG9 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT4_S_MID_P2_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT4_S_TOP_P2_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT5_BOT_P2_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT5_MID_P2_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG9_P2_t;
__xdata __at( 0x2524 ) volatile DFE_FEXT_REG9_P2_t DFE_FEXT_REG9_P2;
#define reg_DFE_FEXT4_S_MID_P2_LANE_5_0  DFE_FEXT_REG9_P2.BF.DFE_FEXT4_S_MID_P2_LANE_5_0
#define reg_DFE_FEXT4_S_TOP_P2_LANE_5_0  DFE_FEXT_REG9_P2.BF.DFE_FEXT4_S_TOP_P2_LANE_5_0
#define reg_DFE_FEXT5_BOT_P2_LANE_6_0  DFE_FEXT_REG9_P2.BF.DFE_FEXT5_BOT_P2_LANE_6_0
#define reg_DFE_FEXT5_MID_P2_LANE_6_0  DFE_FEXT_REG9_P2.BF.DFE_FEXT5_MID_P2_LANE_6_0

// 0x0128	DFE_FEXT_REG10_P2		DFE FEXT REG10 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT5_TOP_P2_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT6_BOT_P2_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT6_MID_P2_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT6_TOP_P2_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG10_P2_t;
__xdata __at( 0x2528 ) volatile DFE_FEXT_REG10_P2_t DFE_FEXT_REG10_P2;
#define reg_DFE_FEXT5_TOP_P2_LANE_6_0  DFE_FEXT_REG10_P2.BF.DFE_FEXT5_TOP_P2_LANE_6_0
#define reg_DFE_FEXT6_BOT_P2_LANE_6_0  DFE_FEXT_REG10_P2.BF.DFE_FEXT6_BOT_P2_LANE_6_0
#define reg_DFE_FEXT6_MID_P2_LANE_6_0  DFE_FEXT_REG10_P2.BF.DFE_FEXT6_MID_P2_LANE_6_0
#define reg_DFE_FEXT6_TOP_P2_LANE_6_0  DFE_FEXT_REG10_P2.BF.DFE_FEXT6_TOP_P2_LANE_6_0

// 0x012c	DFE_FEXT_REG11_P2		DFE FEXT REG11 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT7_BOT_P2_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT7_MID_P2_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT7_TOP_P2_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT8_BOT_P2_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG11_P2_t;
__xdata __at( 0x252c ) volatile DFE_FEXT_REG11_P2_t DFE_FEXT_REG11_P2;
#define reg_DFE_FEXT7_BOT_P2_LANE_6_0  DFE_FEXT_REG11_P2.BF.DFE_FEXT7_BOT_P2_LANE_6_0
#define reg_DFE_FEXT7_MID_P2_LANE_6_0  DFE_FEXT_REG11_P2.BF.DFE_FEXT7_MID_P2_LANE_6_0
#define reg_DFE_FEXT7_TOP_P2_LANE_6_0  DFE_FEXT_REG11_P2.BF.DFE_FEXT7_TOP_P2_LANE_6_0
#define reg_DFE_FEXT8_BOT_P2_LANE_6_0  DFE_FEXT_REG11_P2.BF.DFE_FEXT8_BOT_P2_LANE_6_0

// 0x0130	DFE_FEXT_REG12_P2		DFE FEXT REG12 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT8_MID_P2_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT8_TOP_P2_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT9_LSB_P2_LANE_5_0                : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT9_MSB_P2_LANE_5_0                : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG12_P2_t;
__xdata __at( 0x2530 ) volatile DFE_FEXT_REG12_P2_t DFE_FEXT_REG12_P2;
#define reg_DFE_FEXT8_MID_P2_LANE_6_0  DFE_FEXT_REG12_P2.BF.DFE_FEXT8_MID_P2_LANE_6_0
#define reg_DFE_FEXT8_TOP_P2_LANE_6_0  DFE_FEXT_REG12_P2.BF.DFE_FEXT8_TOP_P2_LANE_6_0
#define reg_DFE_FEXT9_LSB_P2_LANE_5_0  DFE_FEXT_REG12_P2.BF.DFE_FEXT9_LSB_P2_LANE_5_0
#define reg_DFE_FEXT9_MSB_P2_LANE_5_0  DFE_FEXT_REG12_P2.BF.DFE_FEXT9_MSB_P2_LANE_5_0

// 0x0134	DFE_FEXT_REG13_P2		DFE FEXT REG13 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT10_LSB_P2_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT10_MSB_P2_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT11_P2_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT12_LSB_P2_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG13_P2_t;
__xdata __at( 0x2534 ) volatile DFE_FEXT_REG13_P2_t DFE_FEXT_REG13_P2;
#define reg_DFE_FEXT10_LSB_P2_LANE_5_0  DFE_FEXT_REG13_P2.BF.DFE_FEXT10_LSB_P2_LANE_5_0
#define reg_DFE_FEXT10_MSB_P2_LANE_5_0  DFE_FEXT_REG13_P2.BF.DFE_FEXT10_MSB_P2_LANE_5_0
#define reg_DFE_FEXT11_P2_LANE_5_0  DFE_FEXT_REG13_P2.BF.DFE_FEXT11_P2_LANE_5_0
#define reg_DFE_FEXT12_LSB_P2_LANE_5_0  DFE_FEXT_REG13_P2.BF.DFE_FEXT12_LSB_P2_LANE_5_0

// 0x0138	DFE_FEXT_REG14_P2		DFE FEXT REG14 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT12_MSB_P2_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT13_P2_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT14_LSB_P2_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT14_MSB_P2_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG14_P2_t;
__xdata __at( 0x2538 ) volatile DFE_FEXT_REG14_P2_t DFE_FEXT_REG14_P2;
#define reg_DFE_FEXT12_MSB_P2_LANE_5_0  DFE_FEXT_REG14_P2.BF.DFE_FEXT12_MSB_P2_LANE_5_0
#define reg_DFE_FEXT13_P2_LANE_5_0  DFE_FEXT_REG14_P2.BF.DFE_FEXT13_P2_LANE_5_0
#define reg_DFE_FEXT14_LSB_P2_LANE_5_0  DFE_FEXT_REG14_P2.BF.DFE_FEXT14_LSB_P2_LANE_5_0
#define reg_DFE_FEXT14_MSB_P2_LANE_5_0  DFE_FEXT_REG14_P2.BF.DFE_FEXT14_MSB_P2_LANE_5_0

// 0x013c	DFE_FEXT_REG15_P2		DFE FEXT REG15 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT15_P2_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT16_LSB_P2_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT16_MSB_P2_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT17_P2_LANE_5_0                   : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG15_P2_t;
__xdata __at( 0x253c ) volatile DFE_FEXT_REG15_P2_t DFE_FEXT_REG15_P2;
#define reg_DFE_FEXT15_P2_LANE_5_0  DFE_FEXT_REG15_P2.BF.DFE_FEXT15_P2_LANE_5_0
#define reg_DFE_FEXT16_LSB_P2_LANE_5_0  DFE_FEXT_REG15_P2.BF.DFE_FEXT16_LSB_P2_LANE_5_0
#define reg_DFE_FEXT16_MSB_P2_LANE_5_0  DFE_FEXT_REG15_P2.BF.DFE_FEXT16_MSB_P2_LANE_5_0
#define reg_DFE_FEXT17_P2_LANE_5_0  DFE_FEXT_REG15_P2.BF.DFE_FEXT17_P2_LANE_5_0

// 0x0140	DFE_FEXT_REG16_P2		DFE FEXT REG16 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT18_LSB_P2_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT18_MSB_P2_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT19_P2_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT20_LSB_P2_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG16_P2_t;
__xdata __at( 0x2540 ) volatile DFE_FEXT_REG16_P2_t DFE_FEXT_REG16_P2;
#define reg_DFE_FEXT18_LSB_P2_LANE_5_0  DFE_FEXT_REG16_P2.BF.DFE_FEXT18_LSB_P2_LANE_5_0
#define reg_DFE_FEXT18_MSB_P2_LANE_5_0  DFE_FEXT_REG16_P2.BF.DFE_FEXT18_MSB_P2_LANE_5_0
#define reg_DFE_FEXT19_P2_LANE_5_0  DFE_FEXT_REG16_P2.BF.DFE_FEXT19_P2_LANE_5_0
#define reg_DFE_FEXT20_LSB_P2_LANE_5_0  DFE_FEXT_REG16_P2.BF.DFE_FEXT20_LSB_P2_LANE_5_0

// 0x0144	DFE_FEXT_REG17_P2		DFE FEXT REG17 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT20_MSB_P2_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT21_P2_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT22_P2_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT23_P2_LANE_4_0                   : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG17_P2_t;
__xdata __at( 0x2544 ) volatile DFE_FEXT_REG17_P2_t DFE_FEXT_REG17_P2;
#define reg_DFE_FEXT20_MSB_P2_LANE_5_0  DFE_FEXT_REG17_P2.BF.DFE_FEXT20_MSB_P2_LANE_5_0
#define reg_DFE_FEXT21_P2_LANE_5_0  DFE_FEXT_REG17_P2.BF.DFE_FEXT21_P2_LANE_5_0
#define reg_DFE_FEXT22_P2_LANE_5_0  DFE_FEXT_REG17_P2.BF.DFE_FEXT22_P2_LANE_5_0
#define reg_DFE_FEXT23_P2_LANE_4_0  DFE_FEXT_REG17_P2.BF.DFE_FEXT23_P2_LANE_4_0

// 0x0148	DFE_FEXT_REG18_P2		DFE FEXT REG18 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT24_P2_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_FEXT25_P2_LANE_4_0                   : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEXT26_P2_LANE_4_0                   : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t DFE_FEXT27_P2_LANE_4_0                   : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG18_P2_t;
__xdata __at( 0x2548 ) volatile DFE_FEXT_REG18_P2_t DFE_FEXT_REG18_P2;
#define reg_DFE_FEXT24_P2_LANE_4_0  DFE_FEXT_REG18_P2.BF.DFE_FEXT24_P2_LANE_4_0
#define reg_DFE_FEXT25_P2_LANE_4_0  DFE_FEXT_REG18_P2.BF.DFE_FEXT25_P2_LANE_4_0
#define reg_DFE_FEXT26_P2_LANE_4_0  DFE_FEXT_REG18_P2.BF.DFE_FEXT26_P2_LANE_4_0
#define reg_DFE_FEXT27_P2_LANE_4_0  DFE_FEXT_REG18_P2.BF.DFE_FEXT27_P2_LANE_4_0

// 0x014c	DFE_FEXT_REG19_P2		DFE FEXT REG19 Path2
typedef union {
	struct {
		uint8_t DFE_FEXT28_P2_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_FEXT29_P2_LANE_4_0                   : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEXT30_P2_LANE_4_0                   : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG19_P2_t;
__xdata __at( 0x254c ) volatile DFE_FEXT_REG19_P2_t DFE_FEXT_REG19_P2;
#define reg_DFE_FEXT28_P2_LANE_4_0  DFE_FEXT_REG19_P2.BF.DFE_FEXT28_P2_LANE_4_0
#define reg_DFE_FEXT29_P2_LANE_4_0  DFE_FEXT_REG19_P2.BF.DFE_FEXT29_P2_LANE_4_0
#define reg_DFE_FEXT30_P2_LANE_4_0  DFE_FEXT_REG19_P2.BF.DFE_FEXT30_P2_LANE_4_0

// 0x0150	DFE_FEXT_REG0_P3		DFE FEXT REG0 Path3
typedef union {
	struct {
		uint8_t DFE_FEXTDC_D_BOT_P3_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_D_MID_P3_LANE_5_0             : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_D_TOP_P3_LANE_5_0             : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_S_BOT_P3_LANE_5_0             : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG0_P3_t;
__xdata __at( 0x2550 ) volatile DFE_FEXT_REG0_P3_t DFE_FEXT_REG0_P3;
#define reg_DFE_FEXTDC_D_BOT_P3_LANE_5_0  DFE_FEXT_REG0_P3.BF.DFE_FEXTDC_D_BOT_P3_LANE_5_0
#define reg_DFE_FEXTDC_D_MID_P3_LANE_5_0  DFE_FEXT_REG0_P3.BF.DFE_FEXTDC_D_MID_P3_LANE_5_0
#define reg_DFE_FEXTDC_D_TOP_P3_LANE_5_0  DFE_FEXT_REG0_P3.BF.DFE_FEXTDC_D_TOP_P3_LANE_5_0
#define reg_DFE_FEXTDC_S_BOT_P3_LANE_5_0  DFE_FEXT_REG0_P3.BF.DFE_FEXTDC_S_BOT_P3_LANE_5_0

// 0x0154	DFE_FEXT_REG1_P3		DFE FEXT REG1 Path3
typedef union {
	struct {
		uint8_t DFE_FEXTDC_S_MID_P3_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_S_TOP_P3_LANE_5_0             : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_E_P3_LANE_6_0                 : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXTVREF_BOT_P3_LANE_6_0             : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG1_P3_t;
__xdata __at( 0x2554 ) volatile DFE_FEXT_REG1_P3_t DFE_FEXT_REG1_P3;
#define reg_DFE_FEXTDC_S_MID_P3_LANE_5_0  DFE_FEXT_REG1_P3.BF.DFE_FEXTDC_S_MID_P3_LANE_5_0
#define reg_DFE_FEXTDC_S_TOP_P3_LANE_5_0  DFE_FEXT_REG1_P3.BF.DFE_FEXTDC_S_TOP_P3_LANE_5_0
#define reg_DFE_FEXTDC_E_P3_LANE_6_0  DFE_FEXT_REG1_P3.BF.DFE_FEXTDC_E_P3_LANE_6_0
#define reg_DFE_FEXTVREF_BOT_P3_LANE_6_0  DFE_FEXT_REG1_P3.BF.DFE_FEXTVREF_BOT_P3_LANE_6_0

// 0x0158	DFE_FEXT_REG2_P3		DFE FEXT REG2 Path3
typedef union {
	struct {
		uint8_t DFE_FEXTVREF_MID_P3_LANE_6_0             : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXTVREF_TOP_P3_LANE_6_0             : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT0_D_BOT_P3_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT0_D_MID_P3_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG2_P3_t;
__xdata __at( 0x2558 ) volatile DFE_FEXT_REG2_P3_t DFE_FEXT_REG2_P3;
#define reg_DFE_FEXTVREF_MID_P3_LANE_6_0  DFE_FEXT_REG2_P3.BF.DFE_FEXTVREF_MID_P3_LANE_6_0
#define reg_DFE_FEXTVREF_TOP_P3_LANE_6_0  DFE_FEXT_REG2_P3.BF.DFE_FEXTVREF_TOP_P3_LANE_6_0
#define reg_DFE_FEXT0_D_BOT_P3_LANE_5_0  DFE_FEXT_REG2_P3.BF.DFE_FEXT0_D_BOT_P3_LANE_5_0
#define reg_DFE_FEXT0_D_MID_P3_LANE_5_0  DFE_FEXT_REG2_P3.BF.DFE_FEXT0_D_MID_P3_LANE_5_0

// 0x015c	DFE_FEXT_REG3_P3		DFE FEXT REG3 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT0_D_TOP_P3_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_BOT_P3_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_MID_P3_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_TOP_P3_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG3_P3_t;
__xdata __at( 0x255c ) volatile DFE_FEXT_REG3_P3_t DFE_FEXT_REG3_P3;
#define reg_DFE_FEXT0_D_TOP_P3_LANE_5_0  DFE_FEXT_REG3_P3.BF.DFE_FEXT0_D_TOP_P3_LANE_5_0
#define reg_DFE_FEXT0_S_BOT_P3_LANE_5_0  DFE_FEXT_REG3_P3.BF.DFE_FEXT0_S_BOT_P3_LANE_5_0
#define reg_DFE_FEXT0_S_MID_P3_LANE_5_0  DFE_FEXT_REG3_P3.BF.DFE_FEXT0_S_MID_P3_LANE_5_0
#define reg_DFE_FEXT0_S_TOP_P3_LANE_5_0  DFE_FEXT_REG3_P3.BF.DFE_FEXT0_S_TOP_P3_LANE_5_0

// 0x0160	DFE_FEXT_REG4_P3		DFE FEXT REG4 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT2_D_BOT_P3_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT2_D_MID_P3_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT2_D_TOP_P3_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT2_S_BOT_P3_LANE_6_0              : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG4_P3_t;
__xdata __at( 0x2560 ) volatile DFE_FEXT_REG4_P3_t DFE_FEXT_REG4_P3;
#define reg_DFE_FEXT2_D_BOT_P3_LANE_6_0  DFE_FEXT_REG4_P3.BF.DFE_FEXT2_D_BOT_P3_LANE_6_0
#define reg_DFE_FEXT2_D_MID_P3_LANE_6_0  DFE_FEXT_REG4_P3.BF.DFE_FEXT2_D_MID_P3_LANE_6_0
#define reg_DFE_FEXT2_D_TOP_P3_LANE_6_0  DFE_FEXT_REG4_P3.BF.DFE_FEXT2_D_TOP_P3_LANE_6_0
#define reg_DFE_FEXT2_S_BOT_P3_LANE_6_0  DFE_FEXT_REG4_P3.BF.DFE_FEXT2_S_BOT_P3_LANE_6_0

// 0x0164	DFE_FEXT_REG5_P3		DFE FEXT REG5 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT2_S_MID_P3_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT2_S_TOP_P3_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT2_TUNE3_D_P3_LANE_3_0            : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_FEXT2_TUNE3_S_P3_LANE_3_0            : 4;	/*[27:24]     r/w 4'h6*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG5_P3_t;
__xdata __at( 0x2564 ) volatile DFE_FEXT_REG5_P3_t DFE_FEXT_REG5_P3;
#define reg_DFE_FEXT2_S_MID_P3_LANE_6_0  DFE_FEXT_REG5_P3.BF.DFE_FEXT2_S_MID_P3_LANE_6_0
#define reg_DFE_FEXT2_S_TOP_P3_LANE_6_0  DFE_FEXT_REG5_P3.BF.DFE_FEXT2_S_TOP_P3_LANE_6_0
#define reg_DFE_FEXT2_TUNE3_D_P3_LANE_3_0  DFE_FEXT_REG5_P3.BF.DFE_FEXT2_TUNE3_D_P3_LANE_3_0
#define reg_DFE_FEXT2_TUNE3_S_P3_LANE_3_0  DFE_FEXT_REG5_P3.BF.DFE_FEXT2_TUNE3_S_P3_LANE_3_0

// 0x0168	DFE_FEXT_REG6_P3		DFE FEXT REG6 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT2_TUNE1_D_P3_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t DFE_FEXT2_TUNE1_S_P3_LANE_3_0            : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t DFE_FEXT3_D_BOT_P3_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT3_D_MID_P3_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG6_P3_t;
__xdata __at( 0x2568 ) volatile DFE_FEXT_REG6_P3_t DFE_FEXT_REG6_P3;
#define reg_DFE_FEXT2_TUNE1_D_P3_LANE_3_0  DFE_FEXT_REG6_P3.BF.DFE_FEXT2_TUNE1_D_P3_LANE_3_0
#define reg_DFE_FEXT2_TUNE1_S_P3_LANE_3_0  DFE_FEXT_REG6_P3.BF.DFE_FEXT2_TUNE1_S_P3_LANE_3_0
#define reg_DFE_FEXT3_D_BOT_P3_LANE_5_0  DFE_FEXT_REG6_P3.BF.DFE_FEXT3_D_BOT_P3_LANE_5_0
#define reg_DFE_FEXT3_D_MID_P3_LANE_5_0  DFE_FEXT_REG6_P3.BF.DFE_FEXT3_D_MID_P3_LANE_5_0

// 0x016c	DFE_FEXT_REG7_P3		DFE FEXT REG7 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT3_D_TOP_P3_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_BOT_P3_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_MID_P3_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_TOP_P3_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG7_P3_t;
__xdata __at( 0x256c ) volatile DFE_FEXT_REG7_P3_t DFE_FEXT_REG7_P3;
#define reg_DFE_FEXT3_D_TOP_P3_LANE_5_0  DFE_FEXT_REG7_P3.BF.DFE_FEXT3_D_TOP_P3_LANE_5_0
#define reg_DFE_FEXT3_S_BOT_P3_LANE_5_0  DFE_FEXT_REG7_P3.BF.DFE_FEXT3_S_BOT_P3_LANE_5_0
#define reg_DFE_FEXT3_S_MID_P3_LANE_5_0  DFE_FEXT_REG7_P3.BF.DFE_FEXT3_S_MID_P3_LANE_5_0
#define reg_DFE_FEXT3_S_TOP_P3_LANE_5_0  DFE_FEXT_REG7_P3.BF.DFE_FEXT3_S_TOP_P3_LANE_5_0

// 0x0170	DFE_FEXT_REG8_P3		DFE FEXT REG8 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT4_D_BOT_P3_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT4_D_MID_P3_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT4_D_TOP_P3_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT4_S_BOT_P3_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG8_P3_t;
__xdata __at( 0x2570 ) volatile DFE_FEXT_REG8_P3_t DFE_FEXT_REG8_P3;
#define reg_DFE_FEXT4_D_BOT_P3_LANE_5_0  DFE_FEXT_REG8_P3.BF.DFE_FEXT4_D_BOT_P3_LANE_5_0
#define reg_DFE_FEXT4_D_MID_P3_LANE_5_0  DFE_FEXT_REG8_P3.BF.DFE_FEXT4_D_MID_P3_LANE_5_0
#define reg_DFE_FEXT4_D_TOP_P3_LANE_5_0  DFE_FEXT_REG8_P3.BF.DFE_FEXT4_D_TOP_P3_LANE_5_0
#define reg_DFE_FEXT4_S_BOT_P3_LANE_5_0  DFE_FEXT_REG8_P3.BF.DFE_FEXT4_S_BOT_P3_LANE_5_0

// 0x0174	DFE_FEXT_REG9_P3		DFE FEXT REG9 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT4_S_MID_P3_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT4_S_TOP_P3_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT5_BOT_P3_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT5_MID_P3_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG9_P3_t;
__xdata __at( 0x2574 ) volatile DFE_FEXT_REG9_P3_t DFE_FEXT_REG9_P3;
#define reg_DFE_FEXT4_S_MID_P3_LANE_5_0  DFE_FEXT_REG9_P3.BF.DFE_FEXT4_S_MID_P3_LANE_5_0
#define reg_DFE_FEXT4_S_TOP_P3_LANE_5_0  DFE_FEXT_REG9_P3.BF.DFE_FEXT4_S_TOP_P3_LANE_5_0
#define reg_DFE_FEXT5_BOT_P3_LANE_6_0  DFE_FEXT_REG9_P3.BF.DFE_FEXT5_BOT_P3_LANE_6_0
#define reg_DFE_FEXT5_MID_P3_LANE_6_0  DFE_FEXT_REG9_P3.BF.DFE_FEXT5_MID_P3_LANE_6_0

// 0x0178	DFE_FEXT_REG10_P3		DFE FEXT REG10 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT5_TOP_P3_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT6_BOT_P3_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT6_MID_P3_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT6_TOP_P3_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG10_P3_t;
__xdata __at( 0x2578 ) volatile DFE_FEXT_REG10_P3_t DFE_FEXT_REG10_P3;
#define reg_DFE_FEXT5_TOP_P3_LANE_6_0  DFE_FEXT_REG10_P3.BF.DFE_FEXT5_TOP_P3_LANE_6_0
#define reg_DFE_FEXT6_BOT_P3_LANE_6_0  DFE_FEXT_REG10_P3.BF.DFE_FEXT6_BOT_P3_LANE_6_0
#define reg_DFE_FEXT6_MID_P3_LANE_6_0  DFE_FEXT_REG10_P3.BF.DFE_FEXT6_MID_P3_LANE_6_0
#define reg_DFE_FEXT6_TOP_P3_LANE_6_0  DFE_FEXT_REG10_P3.BF.DFE_FEXT6_TOP_P3_LANE_6_0

// 0x017c	DFE_FEXT_REG11_P3		DFE FEXT REG11 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT7_BOT_P3_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT7_MID_P3_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT7_TOP_P3_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT8_BOT_P3_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG11_P3_t;
__xdata __at( 0x257c ) volatile DFE_FEXT_REG11_P3_t DFE_FEXT_REG11_P3;
#define reg_DFE_FEXT7_BOT_P3_LANE_6_0  DFE_FEXT_REG11_P3.BF.DFE_FEXT7_BOT_P3_LANE_6_0
#define reg_DFE_FEXT7_MID_P3_LANE_6_0  DFE_FEXT_REG11_P3.BF.DFE_FEXT7_MID_P3_LANE_6_0
#define reg_DFE_FEXT7_TOP_P3_LANE_6_0  DFE_FEXT_REG11_P3.BF.DFE_FEXT7_TOP_P3_LANE_6_0
#define reg_DFE_FEXT8_BOT_P3_LANE_6_0  DFE_FEXT_REG11_P3.BF.DFE_FEXT8_BOT_P3_LANE_6_0

// 0x0180	DFE_FEXT_REG12_P3		DFE FEXT REG12 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT8_MID_P3_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT8_TOP_P3_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT9_LSB_P3_LANE_5_0                : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT9_MSB_P3_LANE_5_0                : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG12_P3_t;
__xdata __at( 0x2580 ) volatile DFE_FEXT_REG12_P3_t DFE_FEXT_REG12_P3;
#define reg_DFE_FEXT8_MID_P3_LANE_6_0  DFE_FEXT_REG12_P3.BF.DFE_FEXT8_MID_P3_LANE_6_0
#define reg_DFE_FEXT8_TOP_P3_LANE_6_0  DFE_FEXT_REG12_P3.BF.DFE_FEXT8_TOP_P3_LANE_6_0
#define reg_DFE_FEXT9_LSB_P3_LANE_5_0  DFE_FEXT_REG12_P3.BF.DFE_FEXT9_LSB_P3_LANE_5_0
#define reg_DFE_FEXT9_MSB_P3_LANE_5_0  DFE_FEXT_REG12_P3.BF.DFE_FEXT9_MSB_P3_LANE_5_0

// 0x0184	DFE_FEXT_REG13_P3		DFE FEXT REG13 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT10_LSB_P3_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT10_MSB_P3_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT11_P3_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT12_LSB_P3_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG13_P3_t;
__xdata __at( 0x2584 ) volatile DFE_FEXT_REG13_P3_t DFE_FEXT_REG13_P3;
#define reg_DFE_FEXT10_LSB_P3_LANE_5_0  DFE_FEXT_REG13_P3.BF.DFE_FEXT10_LSB_P3_LANE_5_0
#define reg_DFE_FEXT10_MSB_P3_LANE_5_0  DFE_FEXT_REG13_P3.BF.DFE_FEXT10_MSB_P3_LANE_5_0
#define reg_DFE_FEXT11_P3_LANE_5_0  DFE_FEXT_REG13_P3.BF.DFE_FEXT11_P3_LANE_5_0
#define reg_DFE_FEXT12_LSB_P3_LANE_5_0  DFE_FEXT_REG13_P3.BF.DFE_FEXT12_LSB_P3_LANE_5_0

// 0x0188	DFE_FEXT_REG14_P3		DFE FEXT REG14 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT12_MSB_P3_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT13_P3_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT14_LSB_P3_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT14_MSB_P3_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG14_P3_t;
__xdata __at( 0x2588 ) volatile DFE_FEXT_REG14_P3_t DFE_FEXT_REG14_P3;
#define reg_DFE_FEXT12_MSB_P3_LANE_5_0  DFE_FEXT_REG14_P3.BF.DFE_FEXT12_MSB_P3_LANE_5_0
#define reg_DFE_FEXT13_P3_LANE_5_0  DFE_FEXT_REG14_P3.BF.DFE_FEXT13_P3_LANE_5_0
#define reg_DFE_FEXT14_LSB_P3_LANE_5_0  DFE_FEXT_REG14_P3.BF.DFE_FEXT14_LSB_P3_LANE_5_0
#define reg_DFE_FEXT14_MSB_P3_LANE_5_0  DFE_FEXT_REG14_P3.BF.DFE_FEXT14_MSB_P3_LANE_5_0

// 0x018c	DFE_FEXT_REG15_P3		DFE FEXT REG15 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT15_P3_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT16_LSB_P3_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT16_MSB_P3_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT17_P3_LANE_5_0                   : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG15_P3_t;
__xdata __at( 0x258c ) volatile DFE_FEXT_REG15_P3_t DFE_FEXT_REG15_P3;
#define reg_DFE_FEXT15_P3_LANE_5_0  DFE_FEXT_REG15_P3.BF.DFE_FEXT15_P3_LANE_5_0
#define reg_DFE_FEXT16_LSB_P3_LANE_5_0  DFE_FEXT_REG15_P3.BF.DFE_FEXT16_LSB_P3_LANE_5_0
#define reg_DFE_FEXT16_MSB_P3_LANE_5_0  DFE_FEXT_REG15_P3.BF.DFE_FEXT16_MSB_P3_LANE_5_0
#define reg_DFE_FEXT17_P3_LANE_5_0  DFE_FEXT_REG15_P3.BF.DFE_FEXT17_P3_LANE_5_0

// 0x0190	DFE_FEXT_REG16_P3		DFE FEXT REG16 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT18_LSB_P3_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT18_MSB_P3_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT19_P3_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT20_LSB_P3_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG16_P3_t;
__xdata __at( 0x2590 ) volatile DFE_FEXT_REG16_P3_t DFE_FEXT_REG16_P3;
#define reg_DFE_FEXT18_LSB_P3_LANE_5_0  DFE_FEXT_REG16_P3.BF.DFE_FEXT18_LSB_P3_LANE_5_0
#define reg_DFE_FEXT18_MSB_P3_LANE_5_0  DFE_FEXT_REG16_P3.BF.DFE_FEXT18_MSB_P3_LANE_5_0
#define reg_DFE_FEXT19_P3_LANE_5_0  DFE_FEXT_REG16_P3.BF.DFE_FEXT19_P3_LANE_5_0
#define reg_DFE_FEXT20_LSB_P3_LANE_5_0  DFE_FEXT_REG16_P3.BF.DFE_FEXT20_LSB_P3_LANE_5_0

// 0x0194	DFE_FEXT_REG17_P3		DFE FEXT REG17 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT20_MSB_P3_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT21_P3_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT22_P3_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT23_P3_LANE_4_0                   : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG17_P3_t;
__xdata __at( 0x2594 ) volatile DFE_FEXT_REG17_P3_t DFE_FEXT_REG17_P3;
#define reg_DFE_FEXT20_MSB_P3_LANE_5_0  DFE_FEXT_REG17_P3.BF.DFE_FEXT20_MSB_P3_LANE_5_0
#define reg_DFE_FEXT21_P3_LANE_5_0  DFE_FEXT_REG17_P3.BF.DFE_FEXT21_P3_LANE_5_0
#define reg_DFE_FEXT22_P3_LANE_5_0  DFE_FEXT_REG17_P3.BF.DFE_FEXT22_P3_LANE_5_0
#define reg_DFE_FEXT23_P3_LANE_4_0  DFE_FEXT_REG17_P3.BF.DFE_FEXT23_P3_LANE_4_0

// 0x0198	DFE_FEXT_REG18_P3		DFE FEXT REG18 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT24_P3_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_FEXT25_P3_LANE_4_0                   : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEXT26_P3_LANE_4_0                   : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t DFE_FEXT27_P3_LANE_4_0                   : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG18_P3_t;
__xdata __at( 0x2598 ) volatile DFE_FEXT_REG18_P3_t DFE_FEXT_REG18_P3;
#define reg_DFE_FEXT24_P3_LANE_4_0  DFE_FEXT_REG18_P3.BF.DFE_FEXT24_P3_LANE_4_0
#define reg_DFE_FEXT25_P3_LANE_4_0  DFE_FEXT_REG18_P3.BF.DFE_FEXT25_P3_LANE_4_0
#define reg_DFE_FEXT26_P3_LANE_4_0  DFE_FEXT_REG18_P3.BF.DFE_FEXT26_P3_LANE_4_0
#define reg_DFE_FEXT27_P3_LANE_4_0  DFE_FEXT_REG18_P3.BF.DFE_FEXT27_P3_LANE_4_0

// 0x019c	DFE_FEXT_REG19_P3		DFE FEXT REG19 Path3
typedef union {
	struct {
		uint8_t DFE_FEXT28_P3_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_FEXT29_P3_LANE_4_0                   : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEXT30_P3_LANE_4_0                   : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG19_P3_t;
__xdata __at( 0x259c ) volatile DFE_FEXT_REG19_P3_t DFE_FEXT_REG19_P3;
#define reg_DFE_FEXT28_P3_LANE_4_0  DFE_FEXT_REG19_P3.BF.DFE_FEXT28_P3_LANE_4_0
#define reg_DFE_FEXT29_P3_LANE_4_0  DFE_FEXT_REG19_P3.BF.DFE_FEXT29_P3_LANE_4_0
#define reg_DFE_FEXT30_P3_LANE_4_0  DFE_FEXT_REG19_P3.BF.DFE_FEXT30_P3_LANE_4_0

// 0x01a0	DFE_FEXT_REG0_P4		DFE FEXT REG0 Path4
typedef union {
	struct {
		uint8_t DFE_FEXTDC_D_BOT_P4_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_D_MID_P4_LANE_5_0             : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_D_TOP_P4_LANE_5_0             : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_S_BOT_P4_LANE_5_0             : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG0_P4_t;
__xdata __at( 0x25a0 ) volatile DFE_FEXT_REG0_P4_t DFE_FEXT_REG0_P4;
#define reg_DFE_FEXTDC_D_BOT_P4_LANE_5_0  DFE_FEXT_REG0_P4.BF.DFE_FEXTDC_D_BOT_P4_LANE_5_0
#define reg_DFE_FEXTDC_D_MID_P4_LANE_5_0  DFE_FEXT_REG0_P4.BF.DFE_FEXTDC_D_MID_P4_LANE_5_0
#define reg_DFE_FEXTDC_D_TOP_P4_LANE_5_0  DFE_FEXT_REG0_P4.BF.DFE_FEXTDC_D_TOP_P4_LANE_5_0
#define reg_DFE_FEXTDC_S_BOT_P4_LANE_5_0  DFE_FEXT_REG0_P4.BF.DFE_FEXTDC_S_BOT_P4_LANE_5_0

// 0x01a4	DFE_FEXT_REG1_P4		DFE FEXT REG1 Path4
typedef union {
	struct {
		uint8_t DFE_FEXTDC_S_MID_P4_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_S_TOP_P4_LANE_5_0             : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXTDC_E_P4_LANE_6_0                 : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXTVREF_BOT_P4_LANE_6_0             : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG1_P4_t;
__xdata __at( 0x25a4 ) volatile DFE_FEXT_REG1_P4_t DFE_FEXT_REG1_P4;
#define reg_DFE_FEXTDC_S_MID_P4_LANE_5_0  DFE_FEXT_REG1_P4.BF.DFE_FEXTDC_S_MID_P4_LANE_5_0
#define reg_DFE_FEXTDC_S_TOP_P4_LANE_5_0  DFE_FEXT_REG1_P4.BF.DFE_FEXTDC_S_TOP_P4_LANE_5_0
#define reg_DFE_FEXTDC_E_P4_LANE_6_0  DFE_FEXT_REG1_P4.BF.DFE_FEXTDC_E_P4_LANE_6_0
#define reg_DFE_FEXTVREF_BOT_P4_LANE_6_0  DFE_FEXT_REG1_P4.BF.DFE_FEXTVREF_BOT_P4_LANE_6_0

// 0x01a8	DFE_FEXT_REG2_P4		DFE FEXT REG2 Path4
typedef union {
	struct {
		uint8_t DFE_FEXTVREF_MID_P4_LANE_6_0             : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXTVREF_TOP_P4_LANE_6_0             : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT0_D_BOT_P4_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT0_D_MID_P4_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG2_P4_t;
__xdata __at( 0x25a8 ) volatile DFE_FEXT_REG2_P4_t DFE_FEXT_REG2_P4;
#define reg_DFE_FEXTVREF_MID_P4_LANE_6_0  DFE_FEXT_REG2_P4.BF.DFE_FEXTVREF_MID_P4_LANE_6_0
#define reg_DFE_FEXTVREF_TOP_P4_LANE_6_0  DFE_FEXT_REG2_P4.BF.DFE_FEXTVREF_TOP_P4_LANE_6_0
#define reg_DFE_FEXT0_D_BOT_P4_LANE_5_0  DFE_FEXT_REG2_P4.BF.DFE_FEXT0_D_BOT_P4_LANE_5_0
#define reg_DFE_FEXT0_D_MID_P4_LANE_5_0  DFE_FEXT_REG2_P4.BF.DFE_FEXT0_D_MID_P4_LANE_5_0

// 0x01ac	DFE_FEXT_REG3_P4		DFE FEXT REG3 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT0_D_TOP_P4_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_BOT_P4_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_MID_P4_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT0_S_TOP_P4_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG3_P4_t;
__xdata __at( 0x25ac ) volatile DFE_FEXT_REG3_P4_t DFE_FEXT_REG3_P4;
#define reg_DFE_FEXT0_D_TOP_P4_LANE_5_0  DFE_FEXT_REG3_P4.BF.DFE_FEXT0_D_TOP_P4_LANE_5_0
#define reg_DFE_FEXT0_S_BOT_P4_LANE_5_0  DFE_FEXT_REG3_P4.BF.DFE_FEXT0_S_BOT_P4_LANE_5_0
#define reg_DFE_FEXT0_S_MID_P4_LANE_5_0  DFE_FEXT_REG3_P4.BF.DFE_FEXT0_S_MID_P4_LANE_5_0
#define reg_DFE_FEXT0_S_TOP_P4_LANE_5_0  DFE_FEXT_REG3_P4.BF.DFE_FEXT0_S_TOP_P4_LANE_5_0

// 0x01b0	DFE_FEXT_REG4_P4		DFE FEXT REG4 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT2_D_BOT_P4_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT2_D_MID_P4_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT2_D_TOP_P4_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT2_S_BOT_P4_LANE_6_0              : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG4_P4_t;
__xdata __at( 0x25b0 ) volatile DFE_FEXT_REG4_P4_t DFE_FEXT_REG4_P4;
#define reg_DFE_FEXT2_D_BOT_P4_LANE_6_0  DFE_FEXT_REG4_P4.BF.DFE_FEXT2_D_BOT_P4_LANE_6_0
#define reg_DFE_FEXT2_D_MID_P4_LANE_6_0  DFE_FEXT_REG4_P4.BF.DFE_FEXT2_D_MID_P4_LANE_6_0
#define reg_DFE_FEXT2_D_TOP_P4_LANE_6_0  DFE_FEXT_REG4_P4.BF.DFE_FEXT2_D_TOP_P4_LANE_6_0
#define reg_DFE_FEXT2_S_BOT_P4_LANE_6_0  DFE_FEXT_REG4_P4.BF.DFE_FEXT2_S_BOT_P4_LANE_6_0

// 0x01b4	DFE_FEXT_REG5_P4		DFE FEXT REG5 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT2_S_MID_P4_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT2_S_TOP_P4_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT2_TUNE3_D_P4_LANE_3_0            : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_FEXT2_TUNE3_S_P4_LANE_3_0            : 4;	/*[27:24]     r/w 4'h6*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG5_P4_t;
__xdata __at( 0x25b4 ) volatile DFE_FEXT_REG5_P4_t DFE_FEXT_REG5_P4;
#define reg_DFE_FEXT2_S_MID_P4_LANE_6_0  DFE_FEXT_REG5_P4.BF.DFE_FEXT2_S_MID_P4_LANE_6_0
#define reg_DFE_FEXT2_S_TOP_P4_LANE_6_0  DFE_FEXT_REG5_P4.BF.DFE_FEXT2_S_TOP_P4_LANE_6_0
#define reg_DFE_FEXT2_TUNE3_D_P4_LANE_3_0  DFE_FEXT_REG5_P4.BF.DFE_FEXT2_TUNE3_D_P4_LANE_3_0
#define reg_DFE_FEXT2_TUNE3_S_P4_LANE_3_0  DFE_FEXT_REG5_P4.BF.DFE_FEXT2_TUNE3_S_P4_LANE_3_0

// 0x01b8	DFE_FEXT_REG6_P4		DFE FEXT REG6 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT2_TUNE1_D_P4_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t DFE_FEXT2_TUNE1_S_P4_LANE_3_0            : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t DFE_FEXT3_D_BOT_P4_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT3_D_MID_P4_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG6_P4_t;
__xdata __at( 0x25b8 ) volatile DFE_FEXT_REG6_P4_t DFE_FEXT_REG6_P4;
#define reg_DFE_FEXT2_TUNE1_D_P4_LANE_3_0  DFE_FEXT_REG6_P4.BF.DFE_FEXT2_TUNE1_D_P4_LANE_3_0
#define reg_DFE_FEXT2_TUNE1_S_P4_LANE_3_0  DFE_FEXT_REG6_P4.BF.DFE_FEXT2_TUNE1_S_P4_LANE_3_0
#define reg_DFE_FEXT3_D_BOT_P4_LANE_5_0  DFE_FEXT_REG6_P4.BF.DFE_FEXT3_D_BOT_P4_LANE_5_0
#define reg_DFE_FEXT3_D_MID_P4_LANE_5_0  DFE_FEXT_REG6_P4.BF.DFE_FEXT3_D_MID_P4_LANE_5_0

// 0x01bc	DFE_FEXT_REG7_P4		DFE FEXT REG7 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT3_D_TOP_P4_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_BOT_P4_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_MID_P4_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT3_S_TOP_P4_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG7_P4_t;
__xdata __at( 0x25bc ) volatile DFE_FEXT_REG7_P4_t DFE_FEXT_REG7_P4;
#define reg_DFE_FEXT3_D_TOP_P4_LANE_5_0  DFE_FEXT_REG7_P4.BF.DFE_FEXT3_D_TOP_P4_LANE_5_0
#define reg_DFE_FEXT3_S_BOT_P4_LANE_5_0  DFE_FEXT_REG7_P4.BF.DFE_FEXT3_S_BOT_P4_LANE_5_0
#define reg_DFE_FEXT3_S_MID_P4_LANE_5_0  DFE_FEXT_REG7_P4.BF.DFE_FEXT3_S_MID_P4_LANE_5_0
#define reg_DFE_FEXT3_S_TOP_P4_LANE_5_0  DFE_FEXT_REG7_P4.BF.DFE_FEXT3_S_TOP_P4_LANE_5_0

// 0x01c0	DFE_FEXT_REG8_P4		DFE FEXT REG8 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT4_D_BOT_P4_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT4_D_MID_P4_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT4_D_TOP_P4_LANE_5_0              : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT4_S_BOT_P4_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG8_P4_t;
__xdata __at( 0x25c0 ) volatile DFE_FEXT_REG8_P4_t DFE_FEXT_REG8_P4;
#define reg_DFE_FEXT4_D_BOT_P4_LANE_5_0  DFE_FEXT_REG8_P4.BF.DFE_FEXT4_D_BOT_P4_LANE_5_0
#define reg_DFE_FEXT4_D_MID_P4_LANE_5_0  DFE_FEXT_REG8_P4.BF.DFE_FEXT4_D_MID_P4_LANE_5_0
#define reg_DFE_FEXT4_D_TOP_P4_LANE_5_0  DFE_FEXT_REG8_P4.BF.DFE_FEXT4_D_TOP_P4_LANE_5_0
#define reg_DFE_FEXT4_S_BOT_P4_LANE_5_0  DFE_FEXT_REG8_P4.BF.DFE_FEXT4_S_BOT_P4_LANE_5_0

// 0x01c4	DFE_FEXT_REG9_P4		DFE FEXT REG9 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT4_S_MID_P4_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT4_S_TOP_P4_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT5_BOT_P4_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT5_MID_P4_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG9_P4_t;
__xdata __at( 0x25c4 ) volatile DFE_FEXT_REG9_P4_t DFE_FEXT_REG9_P4;
#define reg_DFE_FEXT4_S_MID_P4_LANE_5_0  DFE_FEXT_REG9_P4.BF.DFE_FEXT4_S_MID_P4_LANE_5_0
#define reg_DFE_FEXT4_S_TOP_P4_LANE_5_0  DFE_FEXT_REG9_P4.BF.DFE_FEXT4_S_TOP_P4_LANE_5_0
#define reg_DFE_FEXT5_BOT_P4_LANE_6_0  DFE_FEXT_REG9_P4.BF.DFE_FEXT5_BOT_P4_LANE_6_0
#define reg_DFE_FEXT5_MID_P4_LANE_6_0  DFE_FEXT_REG9_P4.BF.DFE_FEXT5_MID_P4_LANE_6_0

// 0x01c8	DFE_FEXT_REG10_P4		DFE FEXT REG10 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT5_TOP_P4_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT6_BOT_P4_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT6_MID_P4_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT6_TOP_P4_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG10_P4_t;
__xdata __at( 0x25c8 ) volatile DFE_FEXT_REG10_P4_t DFE_FEXT_REG10_P4;
#define reg_DFE_FEXT5_TOP_P4_LANE_6_0  DFE_FEXT_REG10_P4.BF.DFE_FEXT5_TOP_P4_LANE_6_0
#define reg_DFE_FEXT6_BOT_P4_LANE_6_0  DFE_FEXT_REG10_P4.BF.DFE_FEXT6_BOT_P4_LANE_6_0
#define reg_DFE_FEXT6_MID_P4_LANE_6_0  DFE_FEXT_REG10_P4.BF.DFE_FEXT6_MID_P4_LANE_6_0
#define reg_DFE_FEXT6_TOP_P4_LANE_6_0  DFE_FEXT_REG10_P4.BF.DFE_FEXT6_TOP_P4_LANE_6_0

// 0x01cc	DFE_FEXT_REG11_P4		DFE FEXT REG11 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT7_BOT_P4_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT7_MID_P4_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT7_TOP_P4_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_FEXT8_BOT_P4_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG11_P4_t;
__xdata __at( 0x25cc ) volatile DFE_FEXT_REG11_P4_t DFE_FEXT_REG11_P4;
#define reg_DFE_FEXT7_BOT_P4_LANE_6_0  DFE_FEXT_REG11_P4.BF.DFE_FEXT7_BOT_P4_LANE_6_0
#define reg_DFE_FEXT7_MID_P4_LANE_6_0  DFE_FEXT_REG11_P4.BF.DFE_FEXT7_MID_P4_LANE_6_0
#define reg_DFE_FEXT7_TOP_P4_LANE_6_0  DFE_FEXT_REG11_P4.BF.DFE_FEXT7_TOP_P4_LANE_6_0
#define reg_DFE_FEXT8_BOT_P4_LANE_6_0  DFE_FEXT_REG11_P4.BF.DFE_FEXT8_BOT_P4_LANE_6_0

// 0x01d0	DFE_FEXT_REG12_P4		DFE FEXT REG12 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT8_MID_P4_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_FEXT8_TOP_P4_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_FEXT9_LSB_P4_LANE_5_0                : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT9_MSB_P4_LANE_5_0                : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG12_P4_t;
__xdata __at( 0x25d0 ) volatile DFE_FEXT_REG12_P4_t DFE_FEXT_REG12_P4;
#define reg_DFE_FEXT8_MID_P4_LANE_6_0  DFE_FEXT_REG12_P4.BF.DFE_FEXT8_MID_P4_LANE_6_0
#define reg_DFE_FEXT8_TOP_P4_LANE_6_0  DFE_FEXT_REG12_P4.BF.DFE_FEXT8_TOP_P4_LANE_6_0
#define reg_DFE_FEXT9_LSB_P4_LANE_5_0  DFE_FEXT_REG12_P4.BF.DFE_FEXT9_LSB_P4_LANE_5_0
#define reg_DFE_FEXT9_MSB_P4_LANE_5_0  DFE_FEXT_REG12_P4.BF.DFE_FEXT9_MSB_P4_LANE_5_0

// 0x01d4	DFE_FEXT_REG13_P4		DFE FEXT REG13 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT10_LSB_P4_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT10_MSB_P4_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT11_P4_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT12_LSB_P4_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG13_P4_t;
__xdata __at( 0x25d4 ) volatile DFE_FEXT_REG13_P4_t DFE_FEXT_REG13_P4;
#define reg_DFE_FEXT10_LSB_P4_LANE_5_0  DFE_FEXT_REG13_P4.BF.DFE_FEXT10_LSB_P4_LANE_5_0
#define reg_DFE_FEXT10_MSB_P4_LANE_5_0  DFE_FEXT_REG13_P4.BF.DFE_FEXT10_MSB_P4_LANE_5_0
#define reg_DFE_FEXT11_P4_LANE_5_0  DFE_FEXT_REG13_P4.BF.DFE_FEXT11_P4_LANE_5_0
#define reg_DFE_FEXT12_LSB_P4_LANE_5_0  DFE_FEXT_REG13_P4.BF.DFE_FEXT12_LSB_P4_LANE_5_0

// 0x01d8	DFE_FEXT_REG14_P4		DFE FEXT REG14 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT12_MSB_P4_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT13_P4_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT14_LSB_P4_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT14_MSB_P4_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG14_P4_t;
__xdata __at( 0x25d8 ) volatile DFE_FEXT_REG14_P4_t DFE_FEXT_REG14_P4;
#define reg_DFE_FEXT12_MSB_P4_LANE_5_0  DFE_FEXT_REG14_P4.BF.DFE_FEXT12_MSB_P4_LANE_5_0
#define reg_DFE_FEXT13_P4_LANE_5_0  DFE_FEXT_REG14_P4.BF.DFE_FEXT13_P4_LANE_5_0
#define reg_DFE_FEXT14_LSB_P4_LANE_5_0  DFE_FEXT_REG14_P4.BF.DFE_FEXT14_LSB_P4_LANE_5_0
#define reg_DFE_FEXT14_MSB_P4_LANE_5_0  DFE_FEXT_REG14_P4.BF.DFE_FEXT14_MSB_P4_LANE_5_0

// 0x01dc	DFE_FEXT_REG15_P4		DFE FEXT REG15 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT15_P4_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT16_LSB_P4_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT16_MSB_P4_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT17_P4_LANE_5_0                   : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG15_P4_t;
__xdata __at( 0x25dc ) volatile DFE_FEXT_REG15_P4_t DFE_FEXT_REG15_P4;
#define reg_DFE_FEXT15_P4_LANE_5_0  DFE_FEXT_REG15_P4.BF.DFE_FEXT15_P4_LANE_5_0
#define reg_DFE_FEXT16_LSB_P4_LANE_5_0  DFE_FEXT_REG15_P4.BF.DFE_FEXT16_LSB_P4_LANE_5_0
#define reg_DFE_FEXT16_MSB_P4_LANE_5_0  DFE_FEXT_REG15_P4.BF.DFE_FEXT16_MSB_P4_LANE_5_0
#define reg_DFE_FEXT17_P4_LANE_5_0  DFE_FEXT_REG15_P4.BF.DFE_FEXT17_P4_LANE_5_0

// 0x01e0	DFE_FEXT_REG16_P4		DFE FEXT REG16 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT18_LSB_P4_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT18_MSB_P4_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT19_P4_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT20_LSB_P4_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG16_P4_t;
__xdata __at( 0x25e0 ) volatile DFE_FEXT_REG16_P4_t DFE_FEXT_REG16_P4;
#define reg_DFE_FEXT18_LSB_P4_LANE_5_0  DFE_FEXT_REG16_P4.BF.DFE_FEXT18_LSB_P4_LANE_5_0
#define reg_DFE_FEXT18_MSB_P4_LANE_5_0  DFE_FEXT_REG16_P4.BF.DFE_FEXT18_MSB_P4_LANE_5_0
#define reg_DFE_FEXT19_P4_LANE_5_0  DFE_FEXT_REG16_P4.BF.DFE_FEXT19_P4_LANE_5_0
#define reg_DFE_FEXT20_LSB_P4_LANE_5_0  DFE_FEXT_REG16_P4.BF.DFE_FEXT20_LSB_P4_LANE_5_0

// 0x01e4	DFE_FEXT_REG17_P4		DFE FEXT REG17 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT20_MSB_P4_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_FEXT21_P4_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_FEXT22_P4_LANE_5_0                   : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_FEXT23_P4_LANE_4_0                   : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG17_P4_t;
__xdata __at( 0x25e4 ) volatile DFE_FEXT_REG17_P4_t DFE_FEXT_REG17_P4;
#define reg_DFE_FEXT20_MSB_P4_LANE_5_0  DFE_FEXT_REG17_P4.BF.DFE_FEXT20_MSB_P4_LANE_5_0
#define reg_DFE_FEXT21_P4_LANE_5_0  DFE_FEXT_REG17_P4.BF.DFE_FEXT21_P4_LANE_5_0
#define reg_DFE_FEXT22_P4_LANE_5_0  DFE_FEXT_REG17_P4.BF.DFE_FEXT22_P4_LANE_5_0
#define reg_DFE_FEXT23_P4_LANE_4_0  DFE_FEXT_REG17_P4.BF.DFE_FEXT23_P4_LANE_4_0

// 0x01e8	DFE_FEXT_REG18_P4		DFE FEXT REG18 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT24_P4_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_FEXT25_P4_LANE_4_0                   : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEXT26_P4_LANE_4_0                   : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t DFE_FEXT27_P4_LANE_4_0                   : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG18_P4_t;
__xdata __at( 0x25e8 ) volatile DFE_FEXT_REG18_P4_t DFE_FEXT_REG18_P4;
#define reg_DFE_FEXT24_P4_LANE_4_0  DFE_FEXT_REG18_P4.BF.DFE_FEXT24_P4_LANE_4_0
#define reg_DFE_FEXT25_P4_LANE_4_0  DFE_FEXT_REG18_P4.BF.DFE_FEXT25_P4_LANE_4_0
#define reg_DFE_FEXT26_P4_LANE_4_0  DFE_FEXT_REG18_P4.BF.DFE_FEXT26_P4_LANE_4_0
#define reg_DFE_FEXT27_P4_LANE_4_0  DFE_FEXT_REG18_P4.BF.DFE_FEXT27_P4_LANE_4_0

// 0x01ec	DFE_FEXT_REG19_P4		DFE FEXT REG19 Path4
typedef union {
	struct {
		uint8_t DFE_FEXT28_P4_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_FEXT29_P4_LANE_4_0                   : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_FEXT30_P4_LANE_4_0                   : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG19_P4_t;
__xdata __at( 0x25ec ) volatile DFE_FEXT_REG19_P4_t DFE_FEXT_REG19_P4;
#define reg_DFE_FEXT28_P4_LANE_4_0  DFE_FEXT_REG19_P4.BF.DFE_FEXT28_P4_LANE_4_0
#define reg_DFE_FEXT29_P4_LANE_4_0  DFE_FEXT_REG19_P4.BF.DFE_FEXT29_P4_LANE_4_0
#define reg_DFE_FEXT30_P4_LANE_4_0  DFE_FEXT_REG19_P4.BF.DFE_FEXT30_P4_LANE_4_0

// 0x01f0	DFE_READ_SM_REG0_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG0 Path1
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_P1_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_DC_D_MID_P1_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_DC_D_TOP_P1_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_DC_S_BOT_P1_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG0_P1_t;
__xdata __at( 0x25f0 ) volatile DFE_READ_SM_REG0_P1_t DFE_READ_SM_REG0_P1;
#define reg_DFE_DC_D_BOT_P1_SM_LANE_5_0  DFE_READ_SM_REG0_P1.BF.DFE_DC_D_BOT_P1_SM_LANE_5_0
#define reg_DFE_DC_D_MID_P1_SM_LANE_5_0  DFE_READ_SM_REG0_P1.BF.DFE_DC_D_MID_P1_SM_LANE_5_0
#define reg_DFE_DC_D_TOP_P1_SM_LANE_5_0  DFE_READ_SM_REG0_P1.BF.DFE_DC_D_TOP_P1_SM_LANE_5_0
#define reg_DFE_DC_S_BOT_P1_SM_LANE_5_0  DFE_READ_SM_REG0_P1.BF.DFE_DC_S_BOT_P1_SM_LANE_5_0

// 0x01f4	DFE_READ_SM_REG1_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG1 Path1
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_P1_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_DC_S_TOP_P1_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_DC_E_P1_SM_LANE_6_0                  : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_VREF_BOT_P1_SM_LANE_6_0              : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG1_P1_t;
__xdata __at( 0x25f4 ) volatile DFE_READ_SM_REG1_P1_t DFE_READ_SM_REG1_P1;
#define reg_DFE_DC_S_MID_P1_SM_LANE_5_0  DFE_READ_SM_REG1_P1.BF.DFE_DC_S_MID_P1_SM_LANE_5_0
#define reg_DFE_DC_S_TOP_P1_SM_LANE_5_0  DFE_READ_SM_REG1_P1.BF.DFE_DC_S_TOP_P1_SM_LANE_5_0
#define reg_DFE_DC_E_P1_SM_LANE_6_0  DFE_READ_SM_REG1_P1.BF.DFE_DC_E_P1_SM_LANE_6_0
#define reg_DFE_VREF_BOT_P1_SM_LANE_6_0  DFE_READ_SM_REG1_P1.BF.DFE_VREF_BOT_P1_SM_LANE_6_0

// 0x01f8	DFE_READ_SM_REG2_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG2 Path1
typedef union {
	struct {
		uint8_t DFE_VREF_MID_P1_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_VREF_TOP_P1_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F0_D_BOT_P1_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F0_D_MID_P1_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG2_P1_t;
__xdata __at( 0x25f8 ) volatile DFE_READ_SM_REG2_P1_t DFE_READ_SM_REG2_P1;
#define reg_DFE_VREF_MID_P1_SM_LANE_6_0  DFE_READ_SM_REG2_P1.BF.DFE_VREF_MID_P1_SM_LANE_6_0
#define reg_DFE_VREF_TOP_P1_SM_LANE_6_0  DFE_READ_SM_REG2_P1.BF.DFE_VREF_TOP_P1_SM_LANE_6_0
#define reg_DFE_F0_D_BOT_P1_SM_LANE_5_0  DFE_READ_SM_REG2_P1.BF.DFE_F0_D_BOT_P1_SM_LANE_5_0
#define reg_DFE_F0_D_MID_P1_SM_LANE_5_0  DFE_READ_SM_REG2_P1.BF.DFE_F0_D_MID_P1_SM_LANE_5_0

// 0x01fc	DFE_READ_SM_REG3_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG3 Path1
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P1_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F0_S_BOT_P1_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F0_S_MID_P1_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F0_S_TOP_P1_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG3_P1_t;
__xdata __at( 0x25fc ) volatile DFE_READ_SM_REG3_P1_t DFE_READ_SM_REG3_P1;
#define reg_DFE_F0_D_TOP_P1_SM_LANE_5_0  DFE_READ_SM_REG3_P1.BF.DFE_F0_D_TOP_P1_SM_LANE_5_0
#define reg_DFE_F0_S_BOT_P1_SM_LANE_5_0  DFE_READ_SM_REG3_P1.BF.DFE_F0_S_BOT_P1_SM_LANE_5_0
#define reg_DFE_F0_S_MID_P1_SM_LANE_5_0  DFE_READ_SM_REG3_P1.BF.DFE_F0_S_MID_P1_SM_LANE_5_0
#define reg_DFE_F0_S_TOP_P1_SM_LANE_5_0  DFE_READ_SM_REG3_P1.BF.DFE_F0_S_TOP_P1_SM_LANE_5_0

// 0x0200	DFE_READ_SM_REG4_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG4 Path1
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P1_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F2_D_MID_P1_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F2_D_TOP_P1_SM_LANE_6_0              : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F2_S_BOT_P1_SM_LANE_6_0              : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG4_P1_t;
__xdata __at( 0x2600 ) volatile DFE_READ_SM_REG4_P1_t DFE_READ_SM_REG4_P1;
#define reg_DFE_F2_D_BOT_P1_SM_LANE_6_0  DFE_READ_SM_REG4_P1.BF.DFE_F2_D_BOT_P1_SM_LANE_6_0
#define reg_DFE_F2_D_MID_P1_SM_LANE_6_0  DFE_READ_SM_REG4_P1.BF.DFE_F2_D_MID_P1_SM_LANE_6_0
#define reg_DFE_F2_D_TOP_P1_SM_LANE_6_0  DFE_READ_SM_REG4_P1.BF.DFE_F2_D_TOP_P1_SM_LANE_6_0
#define reg_DFE_F2_S_BOT_P1_SM_LANE_6_0  DFE_READ_SM_REG4_P1.BF.DFE_F2_S_BOT_P1_SM_LANE_6_0

// 0x0204	DFE_READ_SM_REG5_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG5 Path1
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P1_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F2_S_TOP_P1_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F2_TUNE3_D_P1_SM_LANE_3_0            : 4;	/*[19:16]       r 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_F2_TUNE3_S_P1_SM_LANE_3_0            : 4;	/*[27:24]       r 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG5_P1_t;
__xdata __at( 0x2604 ) volatile DFE_READ_SM_REG5_P1_t DFE_READ_SM_REG5_P1;
#define reg_DFE_F2_S_MID_P1_SM_LANE_6_0  DFE_READ_SM_REG5_P1.BF.DFE_F2_S_MID_P1_SM_LANE_6_0
#define reg_DFE_F2_S_TOP_P1_SM_LANE_6_0  DFE_READ_SM_REG5_P1.BF.DFE_F2_S_TOP_P1_SM_LANE_6_0
#define reg_DFE_F2_TUNE3_D_P1_SM_LANE_3_0  DFE_READ_SM_REG5_P1.BF.DFE_F2_TUNE3_D_P1_SM_LANE_3_0
#define reg_DFE_F2_TUNE3_S_P1_SM_LANE_3_0  DFE_READ_SM_REG5_P1.BF.DFE_F2_TUNE3_S_P1_SM_LANE_3_0

// 0x0208	DFE_READ_SM_REG6_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG6 Path1
typedef union {
	struct {
		uint8_t DFE_F2_TUNE1_D_P1_SM_LANE_3_0            : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t DFE_F2_TUNE1_S_P1_SM_LANE_3_0            : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t DFE_F3_D_BOT_P1_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F3_D_MID_P1_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG6_P1_t;
__xdata __at( 0x2608 ) volatile DFE_READ_SM_REG6_P1_t DFE_READ_SM_REG6_P1;
#define reg_DFE_F2_TUNE1_D_P1_SM_LANE_3_0  DFE_READ_SM_REG6_P1.BF.DFE_F2_TUNE1_D_P1_SM_LANE_3_0
#define reg_DFE_F2_TUNE1_S_P1_SM_LANE_3_0  DFE_READ_SM_REG6_P1.BF.DFE_F2_TUNE1_S_P1_SM_LANE_3_0
#define reg_DFE_F3_D_BOT_P1_SM_LANE_5_0  DFE_READ_SM_REG6_P1.BF.DFE_F3_D_BOT_P1_SM_LANE_5_0
#define reg_DFE_F3_D_MID_P1_SM_LANE_5_0  DFE_READ_SM_REG6_P1.BF.DFE_F3_D_MID_P1_SM_LANE_5_0

// 0x020c	DFE_READ_SM_REG7_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG7 Path1
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P1_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F3_S_BOT_P1_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F3_S_MID_P1_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F3_S_TOP_P1_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG7_P1_t;
__xdata __at( 0x260c ) volatile DFE_READ_SM_REG7_P1_t DFE_READ_SM_REG7_P1;
#define reg_DFE_F3_D_TOP_P1_SM_LANE_5_0  DFE_READ_SM_REG7_P1.BF.DFE_F3_D_TOP_P1_SM_LANE_5_0
#define reg_DFE_F3_S_BOT_P1_SM_LANE_5_0  DFE_READ_SM_REG7_P1.BF.DFE_F3_S_BOT_P1_SM_LANE_5_0
#define reg_DFE_F3_S_MID_P1_SM_LANE_5_0  DFE_READ_SM_REG7_P1.BF.DFE_F3_S_MID_P1_SM_LANE_5_0
#define reg_DFE_F3_S_TOP_P1_SM_LANE_5_0  DFE_READ_SM_REG7_P1.BF.DFE_F3_S_TOP_P1_SM_LANE_5_0

// 0x0210	DFE_READ_SM_REG8_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG8 Path1
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P1_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F4_D_MID_P1_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F4_D_TOP_P1_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F4_S_BOT_P1_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG8_P1_t;
__xdata __at( 0x2610 ) volatile DFE_READ_SM_REG8_P1_t DFE_READ_SM_REG8_P1;
#define reg_DFE_F4_D_BOT_P1_SM_LANE_5_0  DFE_READ_SM_REG8_P1.BF.DFE_F4_D_BOT_P1_SM_LANE_5_0
#define reg_DFE_F4_D_MID_P1_SM_LANE_5_0  DFE_READ_SM_REG8_P1.BF.DFE_F4_D_MID_P1_SM_LANE_5_0
#define reg_DFE_F4_D_TOP_P1_SM_LANE_5_0  DFE_READ_SM_REG8_P1.BF.DFE_F4_D_TOP_P1_SM_LANE_5_0
#define reg_DFE_F4_S_BOT_P1_SM_LANE_5_0  DFE_READ_SM_REG8_P1.BF.DFE_F4_S_BOT_P1_SM_LANE_5_0

// 0x0214	DFE_READ_SM_REG9_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG9 Path1
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P1_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F4_S_TOP_P1_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F5_BOT_P1_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F5_MID_P1_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG9_P1_t;
__xdata __at( 0x2614 ) volatile DFE_READ_SM_REG9_P1_t DFE_READ_SM_REG9_P1;
#define reg_DFE_F4_S_MID_P1_SM_LANE_5_0  DFE_READ_SM_REG9_P1.BF.DFE_F4_S_MID_P1_SM_LANE_5_0
#define reg_DFE_F4_S_TOP_P1_SM_LANE_5_0  DFE_READ_SM_REG9_P1.BF.DFE_F4_S_TOP_P1_SM_LANE_5_0
#define reg_DFE_F5_BOT_P1_SM_LANE_6_0  DFE_READ_SM_REG9_P1.BF.DFE_F5_BOT_P1_SM_LANE_6_0
#define reg_DFE_F5_MID_P1_SM_LANE_6_0  DFE_READ_SM_REG9_P1.BF.DFE_F5_MID_P1_SM_LANE_6_0

// 0x0218	DFE_READ_SM_REG10_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG10 Path1
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P1_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F6_BOT_P1_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F6_MID_P1_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F6_TOP_P1_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG10_P1_t;
__xdata __at( 0x2618 ) volatile DFE_READ_SM_REG10_P1_t DFE_READ_SM_REG10_P1;
#define reg_DFE_F5_TOP_P1_SM_LANE_6_0  DFE_READ_SM_REG10_P1.BF.DFE_F5_TOP_P1_SM_LANE_6_0
#define reg_DFE_F6_BOT_P1_SM_LANE_6_0  DFE_READ_SM_REG10_P1.BF.DFE_F6_BOT_P1_SM_LANE_6_0
#define reg_DFE_F6_MID_P1_SM_LANE_6_0  DFE_READ_SM_REG10_P1.BF.DFE_F6_MID_P1_SM_LANE_6_0
#define reg_DFE_F6_TOP_P1_SM_LANE_6_0  DFE_READ_SM_REG10_P1.BF.DFE_F6_TOP_P1_SM_LANE_6_0

// 0x021c	DFE_READ_SM_REG11_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG11 Path1
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P1_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F7_MID_P1_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F7_TOP_P1_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F8_BOT_P1_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG11_P1_t;
__xdata __at( 0x261c ) volatile DFE_READ_SM_REG11_P1_t DFE_READ_SM_REG11_P1;
#define reg_DFE_F7_BOT_P1_SM_LANE_6_0  DFE_READ_SM_REG11_P1.BF.DFE_F7_BOT_P1_SM_LANE_6_0
#define reg_DFE_F7_MID_P1_SM_LANE_6_0  DFE_READ_SM_REG11_P1.BF.DFE_F7_MID_P1_SM_LANE_6_0
#define reg_DFE_F7_TOP_P1_SM_LANE_6_0  DFE_READ_SM_REG11_P1.BF.DFE_F7_TOP_P1_SM_LANE_6_0
#define reg_DFE_F8_BOT_P1_SM_LANE_6_0  DFE_READ_SM_REG11_P1.BF.DFE_F8_BOT_P1_SM_LANE_6_0

// 0x0220	DFE_READ_SM_REG12_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG12 Path1
typedef union {
	struct {
		uint8_t DFE_F8_MID_P1_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F8_TOP_P1_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F9_LSB_P1_SM_LANE_5_0                : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F9_MSB_P1_SM_LANE_5_0                : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG12_P1_t;
__xdata __at( 0x2620 ) volatile DFE_READ_SM_REG12_P1_t DFE_READ_SM_REG12_P1;
#define reg_DFE_F8_MID_P1_SM_LANE_6_0  DFE_READ_SM_REG12_P1.BF.DFE_F8_MID_P1_SM_LANE_6_0
#define reg_DFE_F8_TOP_P1_SM_LANE_6_0  DFE_READ_SM_REG12_P1.BF.DFE_F8_TOP_P1_SM_LANE_6_0
#define reg_DFE_F9_LSB_P1_SM_LANE_5_0  DFE_READ_SM_REG12_P1.BF.DFE_F9_LSB_P1_SM_LANE_5_0
#define reg_DFE_F9_MSB_P1_SM_LANE_5_0  DFE_READ_SM_REG12_P1.BF.DFE_F9_MSB_P1_SM_LANE_5_0

// 0x0224	DFE_READ_SM_REG13_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG13 Path1
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P1_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F10_MSB_P1_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F11_P1_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F12_LSB_P1_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG13_P1_t;
__xdata __at( 0x2624 ) volatile DFE_READ_SM_REG13_P1_t DFE_READ_SM_REG13_P1;
#define reg_DFE_F10_LSB_P1_SM_LANE_5_0  DFE_READ_SM_REG13_P1.BF.DFE_F10_LSB_P1_SM_LANE_5_0
#define reg_DFE_F10_MSB_P1_SM_LANE_5_0  DFE_READ_SM_REG13_P1.BF.DFE_F10_MSB_P1_SM_LANE_5_0
#define reg_DFE_F11_P1_SM_LANE_5_0  DFE_READ_SM_REG13_P1.BF.DFE_F11_P1_SM_LANE_5_0
#define reg_DFE_F12_LSB_P1_SM_LANE_5_0  DFE_READ_SM_REG13_P1.BF.DFE_F12_LSB_P1_SM_LANE_5_0

// 0x0228	DFE_READ_SM_REG14_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG14 Path1
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P1_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F13_P1_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F14_LSB_P1_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F14_MSB_P1_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG14_P1_t;
__xdata __at( 0x2628 ) volatile DFE_READ_SM_REG14_P1_t DFE_READ_SM_REG14_P1;
#define reg_DFE_F12_MSB_P1_SM_LANE_5_0  DFE_READ_SM_REG14_P1.BF.DFE_F12_MSB_P1_SM_LANE_5_0
#define reg_DFE_F13_P1_SM_LANE_5_0  DFE_READ_SM_REG14_P1.BF.DFE_F13_P1_SM_LANE_5_0
#define reg_DFE_F14_LSB_P1_SM_LANE_5_0  DFE_READ_SM_REG14_P1.BF.DFE_F14_LSB_P1_SM_LANE_5_0
#define reg_DFE_F14_MSB_P1_SM_LANE_5_0  DFE_READ_SM_REG14_P1.BF.DFE_F14_MSB_P1_SM_LANE_5_0

// 0x022c	DFE_READ_SM_REG15_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG15 Path1
typedef union {
	struct {
		uint8_t DFE_F15_P1_SM_LANE_5_0                   : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F16_LSB_P1_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F16_MSB_P1_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F17_P1_SM_LANE_5_0                   : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG15_P1_t;
__xdata __at( 0x262c ) volatile DFE_READ_SM_REG15_P1_t DFE_READ_SM_REG15_P1;
#define reg_DFE_F15_P1_SM_LANE_5_0  DFE_READ_SM_REG15_P1.BF.DFE_F15_P1_SM_LANE_5_0
#define reg_DFE_F16_LSB_P1_SM_LANE_5_0  DFE_READ_SM_REG15_P1.BF.DFE_F16_LSB_P1_SM_LANE_5_0
#define reg_DFE_F16_MSB_P1_SM_LANE_5_0  DFE_READ_SM_REG15_P1.BF.DFE_F16_MSB_P1_SM_LANE_5_0
#define reg_DFE_F17_P1_SM_LANE_5_0  DFE_READ_SM_REG15_P1.BF.DFE_F17_P1_SM_LANE_5_0

// 0x0230	DFE_READ_SM_REG16_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG16 Path1
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P1_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F18_MSB_P1_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F19_P1_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F20_LSB_P1_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG16_P1_t;
__xdata __at( 0x2630 ) volatile DFE_READ_SM_REG16_P1_t DFE_READ_SM_REG16_P1;
#define reg_DFE_F18_LSB_P1_SM_LANE_5_0  DFE_READ_SM_REG16_P1.BF.DFE_F18_LSB_P1_SM_LANE_5_0
#define reg_DFE_F18_MSB_P1_SM_LANE_5_0  DFE_READ_SM_REG16_P1.BF.DFE_F18_MSB_P1_SM_LANE_5_0
#define reg_DFE_F19_P1_SM_LANE_5_0  DFE_READ_SM_REG16_P1.BF.DFE_F19_P1_SM_LANE_5_0
#define reg_DFE_F20_LSB_P1_SM_LANE_5_0  DFE_READ_SM_REG16_P1.BF.DFE_F20_LSB_P1_SM_LANE_5_0

// 0x0234	DFE_READ_SM_REG17_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG17 Path1
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P1_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F21_P1_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F22_P1_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F23_P1_SM_LANE_4_0                   : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG17_P1_t;
__xdata __at( 0x2634 ) volatile DFE_READ_SM_REG17_P1_t DFE_READ_SM_REG17_P1;
#define reg_DFE_F20_MSB_P1_SM_LANE_5_0  DFE_READ_SM_REG17_P1.BF.DFE_F20_MSB_P1_SM_LANE_5_0
#define reg_DFE_F21_P1_SM_LANE_5_0  DFE_READ_SM_REG17_P1.BF.DFE_F21_P1_SM_LANE_5_0
#define reg_DFE_F22_P1_SM_LANE_5_0  DFE_READ_SM_REG17_P1.BF.DFE_F22_P1_SM_LANE_5_0
#define reg_DFE_F23_P1_SM_LANE_4_0  DFE_READ_SM_REG17_P1.BF.DFE_F23_P1_SM_LANE_4_0

// 0x0238	DFE_READ_SM_REG18_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG18 Path1
typedef union {
	struct {
		uint8_t DFE_F24_P1_SM_LANE_4_0                   : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_F25_P1_SM_LANE_4_0                   : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_F26_P1_SM_LANE_4_0                   : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t DFE_F27_P1_SM_LANE_4_0                   : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG18_P1_t;
__xdata __at( 0x2638 ) volatile DFE_READ_SM_REG18_P1_t DFE_READ_SM_REG18_P1;
#define reg_DFE_F24_P1_SM_LANE_4_0  DFE_READ_SM_REG18_P1.BF.DFE_F24_P1_SM_LANE_4_0
#define reg_DFE_F25_P1_SM_LANE_4_0  DFE_READ_SM_REG18_P1.BF.DFE_F25_P1_SM_LANE_4_0
#define reg_DFE_F26_P1_SM_LANE_4_0  DFE_READ_SM_REG18_P1.BF.DFE_F26_P1_SM_LANE_4_0
#define reg_DFE_F27_P1_SM_LANE_4_0  DFE_READ_SM_REG18_P1.BF.DFE_F27_P1_SM_LANE_4_0

// 0x023c	DFE_READ_SM_REG19_P1		DFE TAP SIGN_MAGNITUDE READ BACK REG19 Path1
typedef union {
	struct {
		uint8_t DFE_F28_P1_SM_LANE_4_0                   : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_F29_P1_SM_LANE_4_0                   : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_F30_P1_SM_LANE_4_0                   : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG19_P1_t;
__xdata __at( 0x263c ) volatile DFE_READ_SM_REG19_P1_t DFE_READ_SM_REG19_P1;
#define reg_DFE_F28_P1_SM_LANE_4_0  DFE_READ_SM_REG19_P1.BF.DFE_F28_P1_SM_LANE_4_0
#define reg_DFE_F29_P1_SM_LANE_4_0  DFE_READ_SM_REG19_P1.BF.DFE_F29_P1_SM_LANE_4_0
#define reg_DFE_F30_P1_SM_LANE_4_0  DFE_READ_SM_REG19_P1.BF.DFE_F30_P1_SM_LANE_4_0

// 0x0240	DFE_READ_SM_REG0_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG0 Path2
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_P2_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_DC_D_MID_P2_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_DC_D_TOP_P2_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_DC_S_BOT_P2_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG0_P2_t;
__xdata __at( 0x2640 ) volatile DFE_READ_SM_REG0_P2_t DFE_READ_SM_REG0_P2;
#define reg_DFE_DC_D_BOT_P2_SM_LANE_5_0  DFE_READ_SM_REG0_P2.BF.DFE_DC_D_BOT_P2_SM_LANE_5_0
#define reg_DFE_DC_D_MID_P2_SM_LANE_5_0  DFE_READ_SM_REG0_P2.BF.DFE_DC_D_MID_P2_SM_LANE_5_0
#define reg_DFE_DC_D_TOP_P2_SM_LANE_5_0  DFE_READ_SM_REG0_P2.BF.DFE_DC_D_TOP_P2_SM_LANE_5_0
#define reg_DFE_DC_S_BOT_P2_SM_LANE_5_0  DFE_READ_SM_REG0_P2.BF.DFE_DC_S_BOT_P2_SM_LANE_5_0

// 0x0244	DFE_READ_SM_REG1_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG1 Path2
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_P2_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_DC_S_TOP_P2_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_DC_E_P2_SM_LANE_6_0                  : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_VREF_BOT_P2_SM_LANE_6_0              : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG1_P2_t;
__xdata __at( 0x2644 ) volatile DFE_READ_SM_REG1_P2_t DFE_READ_SM_REG1_P2;
#define reg_DFE_DC_S_MID_P2_SM_LANE_5_0  DFE_READ_SM_REG1_P2.BF.DFE_DC_S_MID_P2_SM_LANE_5_0
#define reg_DFE_DC_S_TOP_P2_SM_LANE_5_0  DFE_READ_SM_REG1_P2.BF.DFE_DC_S_TOP_P2_SM_LANE_5_0
#define reg_DFE_DC_E_P2_SM_LANE_6_0  DFE_READ_SM_REG1_P2.BF.DFE_DC_E_P2_SM_LANE_6_0
#define reg_DFE_VREF_BOT_P2_SM_LANE_6_0  DFE_READ_SM_REG1_P2.BF.DFE_VREF_BOT_P2_SM_LANE_6_0

// 0x0248	DFE_READ_SM_REG2_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG2 Path2
typedef union {
	struct {
		uint8_t DFE_VREF_MID_P2_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_VREF_TOP_P2_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F0_D_BOT_P2_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F0_D_MID_P2_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG2_P2_t;
__xdata __at( 0x2648 ) volatile DFE_READ_SM_REG2_P2_t DFE_READ_SM_REG2_P2;
#define reg_DFE_VREF_MID_P2_SM_LANE_6_0  DFE_READ_SM_REG2_P2.BF.DFE_VREF_MID_P2_SM_LANE_6_0
#define reg_DFE_VREF_TOP_P2_SM_LANE_6_0  DFE_READ_SM_REG2_P2.BF.DFE_VREF_TOP_P2_SM_LANE_6_0
#define reg_DFE_F0_D_BOT_P2_SM_LANE_5_0  DFE_READ_SM_REG2_P2.BF.DFE_F0_D_BOT_P2_SM_LANE_5_0
#define reg_DFE_F0_D_MID_P2_SM_LANE_5_0  DFE_READ_SM_REG2_P2.BF.DFE_F0_D_MID_P2_SM_LANE_5_0

// 0x024c	DFE_READ_SM_REG3_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG3 Path2
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P2_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F0_S_BOT_P2_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F0_S_MID_P2_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F0_S_TOP_P2_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG3_P2_t;
__xdata __at( 0x264c ) volatile DFE_READ_SM_REG3_P2_t DFE_READ_SM_REG3_P2;
#define reg_DFE_F0_D_TOP_P2_SM_LANE_5_0  DFE_READ_SM_REG3_P2.BF.DFE_F0_D_TOP_P2_SM_LANE_5_0
#define reg_DFE_F0_S_BOT_P2_SM_LANE_5_0  DFE_READ_SM_REG3_P2.BF.DFE_F0_S_BOT_P2_SM_LANE_5_0
#define reg_DFE_F0_S_MID_P2_SM_LANE_5_0  DFE_READ_SM_REG3_P2.BF.DFE_F0_S_MID_P2_SM_LANE_5_0
#define reg_DFE_F0_S_TOP_P2_SM_LANE_5_0  DFE_READ_SM_REG3_P2.BF.DFE_F0_S_TOP_P2_SM_LANE_5_0

// 0x0250	DFE_READ_SM_REG4_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG4 Path2
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P2_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F2_D_MID_P2_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F2_D_TOP_P2_SM_LANE_6_0              : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F2_S_BOT_P2_SM_LANE_6_0              : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG4_P2_t;
__xdata __at( 0x2650 ) volatile DFE_READ_SM_REG4_P2_t DFE_READ_SM_REG4_P2;
#define reg_DFE_F2_D_BOT_P2_SM_LANE_6_0  DFE_READ_SM_REG4_P2.BF.DFE_F2_D_BOT_P2_SM_LANE_6_0
#define reg_DFE_F2_D_MID_P2_SM_LANE_6_0  DFE_READ_SM_REG4_P2.BF.DFE_F2_D_MID_P2_SM_LANE_6_0
#define reg_DFE_F2_D_TOP_P2_SM_LANE_6_0  DFE_READ_SM_REG4_P2.BF.DFE_F2_D_TOP_P2_SM_LANE_6_0
#define reg_DFE_F2_S_BOT_P2_SM_LANE_6_0  DFE_READ_SM_REG4_P2.BF.DFE_F2_S_BOT_P2_SM_LANE_6_0

// 0x0254	DFE_READ_SM_REG5_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG5 Path2
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P2_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F2_S_TOP_P2_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F2_TUNE3_D_P2_SM_LANE_3_0            : 4;	/*[19:16]       r 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_F2_TUNE3_S_P2_SM_LANE_3_0            : 4;	/*[27:24]       r 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG5_P2_t;
__xdata __at( 0x2654 ) volatile DFE_READ_SM_REG5_P2_t DFE_READ_SM_REG5_P2;
#define reg_DFE_F2_S_MID_P2_SM_LANE_6_0  DFE_READ_SM_REG5_P2.BF.DFE_F2_S_MID_P2_SM_LANE_6_0
#define reg_DFE_F2_S_TOP_P2_SM_LANE_6_0  DFE_READ_SM_REG5_P2.BF.DFE_F2_S_TOP_P2_SM_LANE_6_0
#define reg_DFE_F2_TUNE3_D_P2_SM_LANE_3_0  DFE_READ_SM_REG5_P2.BF.DFE_F2_TUNE3_D_P2_SM_LANE_3_0
#define reg_DFE_F2_TUNE3_S_P2_SM_LANE_3_0  DFE_READ_SM_REG5_P2.BF.DFE_F2_TUNE3_S_P2_SM_LANE_3_0

// 0x0258	DFE_READ_SM_REG6_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG6 Path2
typedef union {
	struct {
		uint8_t DFE_F2_TUNE1_D_P2_SM_LANE_3_0            : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t DFE_F2_TUNE1_S_P2_SM_LANE_3_0            : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t DFE_F3_D_BOT_P2_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F3_D_MID_P2_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG6_P2_t;
__xdata __at( 0x2658 ) volatile DFE_READ_SM_REG6_P2_t DFE_READ_SM_REG6_P2;
#define reg_DFE_F2_TUNE1_D_P2_SM_LANE_3_0  DFE_READ_SM_REG6_P2.BF.DFE_F2_TUNE1_D_P2_SM_LANE_3_0
#define reg_DFE_F2_TUNE1_S_P2_SM_LANE_3_0  DFE_READ_SM_REG6_P2.BF.DFE_F2_TUNE1_S_P2_SM_LANE_3_0
#define reg_DFE_F3_D_BOT_P2_SM_LANE_5_0  DFE_READ_SM_REG6_P2.BF.DFE_F3_D_BOT_P2_SM_LANE_5_0
#define reg_DFE_F3_D_MID_P2_SM_LANE_5_0  DFE_READ_SM_REG6_P2.BF.DFE_F3_D_MID_P2_SM_LANE_5_0

// 0x025c	DFE_READ_SM_REG7_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG7 Path2
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P2_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F3_S_BOT_P2_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F3_S_MID_P2_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F3_S_TOP_P2_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG7_P2_t;
__xdata __at( 0x265c ) volatile DFE_READ_SM_REG7_P2_t DFE_READ_SM_REG7_P2;
#define reg_DFE_F3_D_TOP_P2_SM_LANE_5_0  DFE_READ_SM_REG7_P2.BF.DFE_F3_D_TOP_P2_SM_LANE_5_0
#define reg_DFE_F3_S_BOT_P2_SM_LANE_5_0  DFE_READ_SM_REG7_P2.BF.DFE_F3_S_BOT_P2_SM_LANE_5_0
#define reg_DFE_F3_S_MID_P2_SM_LANE_5_0  DFE_READ_SM_REG7_P2.BF.DFE_F3_S_MID_P2_SM_LANE_5_0
#define reg_DFE_F3_S_TOP_P2_SM_LANE_5_0  DFE_READ_SM_REG7_P2.BF.DFE_F3_S_TOP_P2_SM_LANE_5_0

// 0x0260	DFE_READ_SM_REG8_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG8 Path2
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P2_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F4_D_MID_P2_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F4_D_TOP_P2_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F4_S_BOT_P2_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG8_P2_t;
__xdata __at( 0x2660 ) volatile DFE_READ_SM_REG8_P2_t DFE_READ_SM_REG8_P2;
#define reg_DFE_F4_D_BOT_P2_SM_LANE_5_0  DFE_READ_SM_REG8_P2.BF.DFE_F4_D_BOT_P2_SM_LANE_5_0
#define reg_DFE_F4_D_MID_P2_SM_LANE_5_0  DFE_READ_SM_REG8_P2.BF.DFE_F4_D_MID_P2_SM_LANE_5_0
#define reg_DFE_F4_D_TOP_P2_SM_LANE_5_0  DFE_READ_SM_REG8_P2.BF.DFE_F4_D_TOP_P2_SM_LANE_5_0
#define reg_DFE_F4_S_BOT_P2_SM_LANE_5_0  DFE_READ_SM_REG8_P2.BF.DFE_F4_S_BOT_P2_SM_LANE_5_0

// 0x0264	DFE_READ_SM_REG9_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG9 Path2
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P2_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F4_S_TOP_P2_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F5_BOT_P2_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F5_MID_P2_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG9_P2_t;
__xdata __at( 0x2664 ) volatile DFE_READ_SM_REG9_P2_t DFE_READ_SM_REG9_P2;
#define reg_DFE_F4_S_MID_P2_SM_LANE_5_0  DFE_READ_SM_REG9_P2.BF.DFE_F4_S_MID_P2_SM_LANE_5_0
#define reg_DFE_F4_S_TOP_P2_SM_LANE_5_0  DFE_READ_SM_REG9_P2.BF.DFE_F4_S_TOP_P2_SM_LANE_5_0
#define reg_DFE_F5_BOT_P2_SM_LANE_6_0  DFE_READ_SM_REG9_P2.BF.DFE_F5_BOT_P2_SM_LANE_6_0
#define reg_DFE_F5_MID_P2_SM_LANE_6_0  DFE_READ_SM_REG9_P2.BF.DFE_F5_MID_P2_SM_LANE_6_0

// 0x0268	DFE_READ_SM_REG10_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG10 Path2
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P2_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F6_BOT_P2_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F6_MID_P2_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F6_TOP_P2_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG10_P2_t;
__xdata __at( 0x2668 ) volatile DFE_READ_SM_REG10_P2_t DFE_READ_SM_REG10_P2;
#define reg_DFE_F5_TOP_P2_SM_LANE_6_0  DFE_READ_SM_REG10_P2.BF.DFE_F5_TOP_P2_SM_LANE_6_0
#define reg_DFE_F6_BOT_P2_SM_LANE_6_0  DFE_READ_SM_REG10_P2.BF.DFE_F6_BOT_P2_SM_LANE_6_0
#define reg_DFE_F6_MID_P2_SM_LANE_6_0  DFE_READ_SM_REG10_P2.BF.DFE_F6_MID_P2_SM_LANE_6_0
#define reg_DFE_F6_TOP_P2_SM_LANE_6_0  DFE_READ_SM_REG10_P2.BF.DFE_F6_TOP_P2_SM_LANE_6_0

// 0x026c	DFE_READ_SM_REG11_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG11 Path2
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P2_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F7_MID_P2_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F7_TOP_P2_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F8_BOT_P2_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG11_P2_t;
__xdata __at( 0x266c ) volatile DFE_READ_SM_REG11_P2_t DFE_READ_SM_REG11_P2;
#define reg_DFE_F7_BOT_P2_SM_LANE_6_0  DFE_READ_SM_REG11_P2.BF.DFE_F7_BOT_P2_SM_LANE_6_0
#define reg_DFE_F7_MID_P2_SM_LANE_6_0  DFE_READ_SM_REG11_P2.BF.DFE_F7_MID_P2_SM_LANE_6_0
#define reg_DFE_F7_TOP_P2_SM_LANE_6_0  DFE_READ_SM_REG11_P2.BF.DFE_F7_TOP_P2_SM_LANE_6_0
#define reg_DFE_F8_BOT_P2_SM_LANE_6_0  DFE_READ_SM_REG11_P2.BF.DFE_F8_BOT_P2_SM_LANE_6_0

// 0x0270	DFE_READ_SM_REG12_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG12 Path2
typedef union {
	struct {
		uint8_t DFE_F8_MID_P2_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F8_TOP_P2_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F9_LSB_P2_SM_LANE_5_0                : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F9_MSB_P2_SM_LANE_5_0                : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG12_P2_t;
__xdata __at( 0x2670 ) volatile DFE_READ_SM_REG12_P2_t DFE_READ_SM_REG12_P2;
#define reg_DFE_F8_MID_P2_SM_LANE_6_0  DFE_READ_SM_REG12_P2.BF.DFE_F8_MID_P2_SM_LANE_6_0
#define reg_DFE_F8_TOP_P2_SM_LANE_6_0  DFE_READ_SM_REG12_P2.BF.DFE_F8_TOP_P2_SM_LANE_6_0
#define reg_DFE_F9_LSB_P2_SM_LANE_5_0  DFE_READ_SM_REG12_P2.BF.DFE_F9_LSB_P2_SM_LANE_5_0
#define reg_DFE_F9_MSB_P2_SM_LANE_5_0  DFE_READ_SM_REG12_P2.BF.DFE_F9_MSB_P2_SM_LANE_5_0

// 0x0274	DFE_READ_SM_REG13_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG13 Path2
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P2_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F10_MSB_P2_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F11_P2_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F12_LSB_P2_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG13_P2_t;
__xdata __at( 0x2674 ) volatile DFE_READ_SM_REG13_P2_t DFE_READ_SM_REG13_P2;
#define reg_DFE_F10_LSB_P2_SM_LANE_5_0  DFE_READ_SM_REG13_P2.BF.DFE_F10_LSB_P2_SM_LANE_5_0
#define reg_DFE_F10_MSB_P2_SM_LANE_5_0  DFE_READ_SM_REG13_P2.BF.DFE_F10_MSB_P2_SM_LANE_5_0
#define reg_DFE_F11_P2_SM_LANE_5_0  DFE_READ_SM_REG13_P2.BF.DFE_F11_P2_SM_LANE_5_0
#define reg_DFE_F12_LSB_P2_SM_LANE_5_0  DFE_READ_SM_REG13_P2.BF.DFE_F12_LSB_P2_SM_LANE_5_0

// 0x0278	DFE_READ_SM_REG14_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG14 Path2
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P2_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F13_P2_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F14_LSB_P2_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F14_MSB_P2_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG14_P2_t;
__xdata __at( 0x2678 ) volatile DFE_READ_SM_REG14_P2_t DFE_READ_SM_REG14_P2;
#define reg_DFE_F12_MSB_P2_SM_LANE_5_0  DFE_READ_SM_REG14_P2.BF.DFE_F12_MSB_P2_SM_LANE_5_0
#define reg_DFE_F13_P2_SM_LANE_5_0  DFE_READ_SM_REG14_P2.BF.DFE_F13_P2_SM_LANE_5_0
#define reg_DFE_F14_LSB_P2_SM_LANE_5_0  DFE_READ_SM_REG14_P2.BF.DFE_F14_LSB_P2_SM_LANE_5_0
#define reg_DFE_F14_MSB_P2_SM_LANE_5_0  DFE_READ_SM_REG14_P2.BF.DFE_F14_MSB_P2_SM_LANE_5_0

// 0x027c	DFE_READ_SM_REG15_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG15 Path2
typedef union {
	struct {
		uint8_t DFE_F15_P2_SM_LANE_5_0                   : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F16_LSB_P2_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F16_MSB_P2_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F17_P2_SM_LANE_5_0                   : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG15_P2_t;
__xdata __at( 0x267c ) volatile DFE_READ_SM_REG15_P2_t DFE_READ_SM_REG15_P2;
#define reg_DFE_F15_P2_SM_LANE_5_0  DFE_READ_SM_REG15_P2.BF.DFE_F15_P2_SM_LANE_5_0
#define reg_DFE_F16_LSB_P2_SM_LANE_5_0  DFE_READ_SM_REG15_P2.BF.DFE_F16_LSB_P2_SM_LANE_5_0
#define reg_DFE_F16_MSB_P2_SM_LANE_5_0  DFE_READ_SM_REG15_P2.BF.DFE_F16_MSB_P2_SM_LANE_5_0
#define reg_DFE_F17_P2_SM_LANE_5_0  DFE_READ_SM_REG15_P2.BF.DFE_F17_P2_SM_LANE_5_0

// 0x0280	DFE_READ_SM_REG16_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG16 Path2
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P2_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F18_MSB_P2_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F19_P2_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F20_LSB_P2_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG16_P2_t;
__xdata __at( 0x2680 ) volatile DFE_READ_SM_REG16_P2_t DFE_READ_SM_REG16_P2;
#define reg_DFE_F18_LSB_P2_SM_LANE_5_0  DFE_READ_SM_REG16_P2.BF.DFE_F18_LSB_P2_SM_LANE_5_0
#define reg_DFE_F18_MSB_P2_SM_LANE_5_0  DFE_READ_SM_REG16_P2.BF.DFE_F18_MSB_P2_SM_LANE_5_0
#define reg_DFE_F19_P2_SM_LANE_5_0  DFE_READ_SM_REG16_P2.BF.DFE_F19_P2_SM_LANE_5_0
#define reg_DFE_F20_LSB_P2_SM_LANE_5_0  DFE_READ_SM_REG16_P2.BF.DFE_F20_LSB_P2_SM_LANE_5_0

// 0x0284	DFE_READ_SM_REG17_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG17 Path2
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P2_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F21_P2_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F22_P2_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F23_P2_SM_LANE_4_0                   : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG17_P2_t;
__xdata __at( 0x2684 ) volatile DFE_READ_SM_REG17_P2_t DFE_READ_SM_REG17_P2;
#define reg_DFE_F20_MSB_P2_SM_LANE_5_0  DFE_READ_SM_REG17_P2.BF.DFE_F20_MSB_P2_SM_LANE_5_0
#define reg_DFE_F21_P2_SM_LANE_5_0  DFE_READ_SM_REG17_P2.BF.DFE_F21_P2_SM_LANE_5_0
#define reg_DFE_F22_P2_SM_LANE_5_0  DFE_READ_SM_REG17_P2.BF.DFE_F22_P2_SM_LANE_5_0
#define reg_DFE_F23_P2_SM_LANE_4_0  DFE_READ_SM_REG17_P2.BF.DFE_F23_P2_SM_LANE_4_0

// 0x0288	DFE_READ_SM_REG18_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG18 Path2
typedef union {
	struct {
		uint8_t DFE_F24_P2_SM_LANE_4_0                   : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_F25_P2_SM_LANE_4_0                   : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_F26_P2_SM_LANE_4_0                   : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t DFE_F27_P2_SM_LANE_4_0                   : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG18_P2_t;
__xdata __at( 0x2688 ) volatile DFE_READ_SM_REG18_P2_t DFE_READ_SM_REG18_P2;
#define reg_DFE_F24_P2_SM_LANE_4_0  DFE_READ_SM_REG18_P2.BF.DFE_F24_P2_SM_LANE_4_0
#define reg_DFE_F25_P2_SM_LANE_4_0  DFE_READ_SM_REG18_P2.BF.DFE_F25_P2_SM_LANE_4_0
#define reg_DFE_F26_P2_SM_LANE_4_0  DFE_READ_SM_REG18_P2.BF.DFE_F26_P2_SM_LANE_4_0
#define reg_DFE_F27_P2_SM_LANE_4_0  DFE_READ_SM_REG18_P2.BF.DFE_F27_P2_SM_LANE_4_0

// 0x028c	DFE_READ_SM_REG19_P2		DFE TAP SIGN_MAGNITUDE READ BACK REG19 Path2
typedef union {
	struct {
		uint8_t DFE_F28_P2_SM_LANE_4_0                   : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_F29_P2_SM_LANE_4_0                   : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_F30_P2_SM_LANE_4_0                   : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG19_P2_t;
__xdata __at( 0x268c ) volatile DFE_READ_SM_REG19_P2_t DFE_READ_SM_REG19_P2;
#define reg_DFE_F28_P2_SM_LANE_4_0  DFE_READ_SM_REG19_P2.BF.DFE_F28_P2_SM_LANE_4_0
#define reg_DFE_F29_P2_SM_LANE_4_0  DFE_READ_SM_REG19_P2.BF.DFE_F29_P2_SM_LANE_4_0
#define reg_DFE_F30_P2_SM_LANE_4_0  DFE_READ_SM_REG19_P2.BF.DFE_F30_P2_SM_LANE_4_0

// 0x0290	DFE_READ_SM_REG0_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG0 Path3
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_P3_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_DC_D_MID_P3_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_DC_D_TOP_P3_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_DC_S_BOT_P3_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG0_P3_t;
__xdata __at( 0x2690 ) volatile DFE_READ_SM_REG0_P3_t DFE_READ_SM_REG0_P3;
#define reg_DFE_DC_D_BOT_P3_SM_LANE_5_0  DFE_READ_SM_REG0_P3.BF.DFE_DC_D_BOT_P3_SM_LANE_5_0
#define reg_DFE_DC_D_MID_P3_SM_LANE_5_0  DFE_READ_SM_REG0_P3.BF.DFE_DC_D_MID_P3_SM_LANE_5_0
#define reg_DFE_DC_D_TOP_P3_SM_LANE_5_0  DFE_READ_SM_REG0_P3.BF.DFE_DC_D_TOP_P3_SM_LANE_5_0
#define reg_DFE_DC_S_BOT_P3_SM_LANE_5_0  DFE_READ_SM_REG0_P3.BF.DFE_DC_S_BOT_P3_SM_LANE_5_0

// 0x0294	DFE_READ_SM_REG1_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG1 Path3
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_P3_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_DC_S_TOP_P3_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_DC_E_P3_SM_LANE_6_0                  : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_VREF_BOT_P3_SM_LANE_6_0              : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG1_P3_t;
__xdata __at( 0x2694 ) volatile DFE_READ_SM_REG1_P3_t DFE_READ_SM_REG1_P3;
#define reg_DFE_DC_S_MID_P3_SM_LANE_5_0  DFE_READ_SM_REG1_P3.BF.DFE_DC_S_MID_P3_SM_LANE_5_0
#define reg_DFE_DC_S_TOP_P3_SM_LANE_5_0  DFE_READ_SM_REG1_P3.BF.DFE_DC_S_TOP_P3_SM_LANE_5_0
#define reg_DFE_DC_E_P3_SM_LANE_6_0  DFE_READ_SM_REG1_P3.BF.DFE_DC_E_P3_SM_LANE_6_0
#define reg_DFE_VREF_BOT_P3_SM_LANE_6_0  DFE_READ_SM_REG1_P3.BF.DFE_VREF_BOT_P3_SM_LANE_6_0

// 0x0298	DFE_READ_SM_REG2_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG2 Path3
typedef union {
	struct {
		uint8_t DFE_VREF_MID_P3_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_VREF_TOP_P3_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F0_D_BOT_P3_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F0_D_MID_P3_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG2_P3_t;
__xdata __at( 0x2698 ) volatile DFE_READ_SM_REG2_P3_t DFE_READ_SM_REG2_P3;
#define reg_DFE_VREF_MID_P3_SM_LANE_6_0  DFE_READ_SM_REG2_P3.BF.DFE_VREF_MID_P3_SM_LANE_6_0
#define reg_DFE_VREF_TOP_P3_SM_LANE_6_0  DFE_READ_SM_REG2_P3.BF.DFE_VREF_TOP_P3_SM_LANE_6_0
#define reg_DFE_F0_D_BOT_P3_SM_LANE_5_0  DFE_READ_SM_REG2_P3.BF.DFE_F0_D_BOT_P3_SM_LANE_5_0
#define reg_DFE_F0_D_MID_P3_SM_LANE_5_0  DFE_READ_SM_REG2_P3.BF.DFE_F0_D_MID_P3_SM_LANE_5_0

// 0x029c	DFE_READ_SM_REG3_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG3 Path3
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P3_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F0_S_BOT_P3_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F0_S_MID_P3_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F0_S_TOP_P3_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG3_P3_t;
__xdata __at( 0x269c ) volatile DFE_READ_SM_REG3_P3_t DFE_READ_SM_REG3_P3;
#define reg_DFE_F0_D_TOP_P3_SM_LANE_5_0  DFE_READ_SM_REG3_P3.BF.DFE_F0_D_TOP_P3_SM_LANE_5_0
#define reg_DFE_F0_S_BOT_P3_SM_LANE_5_0  DFE_READ_SM_REG3_P3.BF.DFE_F0_S_BOT_P3_SM_LANE_5_0
#define reg_DFE_F0_S_MID_P3_SM_LANE_5_0  DFE_READ_SM_REG3_P3.BF.DFE_F0_S_MID_P3_SM_LANE_5_0
#define reg_DFE_F0_S_TOP_P3_SM_LANE_5_0  DFE_READ_SM_REG3_P3.BF.DFE_F0_S_TOP_P3_SM_LANE_5_0

// 0x02a0	DFE_READ_SM_REG4_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG4 Path3
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P3_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F2_D_MID_P3_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F2_D_TOP_P3_SM_LANE_6_0              : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F2_S_BOT_P3_SM_LANE_6_0              : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG4_P3_t;
__xdata __at( 0x26a0 ) volatile DFE_READ_SM_REG4_P3_t DFE_READ_SM_REG4_P3;
#define reg_DFE_F2_D_BOT_P3_SM_LANE_6_0  DFE_READ_SM_REG4_P3.BF.DFE_F2_D_BOT_P3_SM_LANE_6_0
#define reg_DFE_F2_D_MID_P3_SM_LANE_6_0  DFE_READ_SM_REG4_P3.BF.DFE_F2_D_MID_P3_SM_LANE_6_0
#define reg_DFE_F2_D_TOP_P3_SM_LANE_6_0  DFE_READ_SM_REG4_P3.BF.DFE_F2_D_TOP_P3_SM_LANE_6_0
#define reg_DFE_F2_S_BOT_P3_SM_LANE_6_0  DFE_READ_SM_REG4_P3.BF.DFE_F2_S_BOT_P3_SM_LANE_6_0

// 0x02a4	DFE_READ_SM_REG5_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG5 Path3
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P3_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F2_S_TOP_P3_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F2_TUNE3_D_P3_SM_LANE_3_0            : 4;	/*[19:16]       r 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_F2_TUNE3_S_P3_SM_LANE_3_0            : 4;	/*[27:24]       r 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG5_P3_t;
__xdata __at( 0x26a4 ) volatile DFE_READ_SM_REG5_P3_t DFE_READ_SM_REG5_P3;
#define reg_DFE_F2_S_MID_P3_SM_LANE_6_0  DFE_READ_SM_REG5_P3.BF.DFE_F2_S_MID_P3_SM_LANE_6_0
#define reg_DFE_F2_S_TOP_P3_SM_LANE_6_0  DFE_READ_SM_REG5_P3.BF.DFE_F2_S_TOP_P3_SM_LANE_6_0
#define reg_DFE_F2_TUNE3_D_P3_SM_LANE_3_0  DFE_READ_SM_REG5_P3.BF.DFE_F2_TUNE3_D_P3_SM_LANE_3_0
#define reg_DFE_F2_TUNE3_S_P3_SM_LANE_3_0  DFE_READ_SM_REG5_P3.BF.DFE_F2_TUNE3_S_P3_SM_LANE_3_0

// 0x02a8	DFE_READ_SM_REG6_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG6 Path3
typedef union {
	struct {
		uint8_t DFE_F2_TUNE1_D_P3_SM_LANE_3_0            : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t DFE_F2_TUNE1_S_P3_SM_LANE_3_0            : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t DFE_F3_D_BOT_P3_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F3_D_MID_P3_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG6_P3_t;
__xdata __at( 0x26a8 ) volatile DFE_READ_SM_REG6_P3_t DFE_READ_SM_REG6_P3;
#define reg_DFE_F2_TUNE1_D_P3_SM_LANE_3_0  DFE_READ_SM_REG6_P3.BF.DFE_F2_TUNE1_D_P3_SM_LANE_3_0
#define reg_DFE_F2_TUNE1_S_P3_SM_LANE_3_0  DFE_READ_SM_REG6_P3.BF.DFE_F2_TUNE1_S_P3_SM_LANE_3_0
#define reg_DFE_F3_D_BOT_P3_SM_LANE_5_0  DFE_READ_SM_REG6_P3.BF.DFE_F3_D_BOT_P3_SM_LANE_5_0
#define reg_DFE_F3_D_MID_P3_SM_LANE_5_0  DFE_READ_SM_REG6_P3.BF.DFE_F3_D_MID_P3_SM_LANE_5_0

// 0x02ac	DFE_READ_SM_REG7_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG7 Path3
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P3_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F3_S_BOT_P3_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F3_S_MID_P3_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F3_S_TOP_P3_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG7_P3_t;
__xdata __at( 0x26ac ) volatile DFE_READ_SM_REG7_P3_t DFE_READ_SM_REG7_P3;
#define reg_DFE_F3_D_TOP_P3_SM_LANE_5_0  DFE_READ_SM_REG7_P3.BF.DFE_F3_D_TOP_P3_SM_LANE_5_0
#define reg_DFE_F3_S_BOT_P3_SM_LANE_5_0  DFE_READ_SM_REG7_P3.BF.DFE_F3_S_BOT_P3_SM_LANE_5_0
#define reg_DFE_F3_S_MID_P3_SM_LANE_5_0  DFE_READ_SM_REG7_P3.BF.DFE_F3_S_MID_P3_SM_LANE_5_0
#define reg_DFE_F3_S_TOP_P3_SM_LANE_5_0  DFE_READ_SM_REG7_P3.BF.DFE_F3_S_TOP_P3_SM_LANE_5_0

// 0x02b0	DFE_READ_SM_REG8_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG8 Path3
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P3_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F4_D_MID_P3_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F4_D_TOP_P3_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F4_S_BOT_P3_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG8_P3_t;
__xdata __at( 0x26b0 ) volatile DFE_READ_SM_REG8_P3_t DFE_READ_SM_REG8_P3;
#define reg_DFE_F4_D_BOT_P3_SM_LANE_5_0  DFE_READ_SM_REG8_P3.BF.DFE_F4_D_BOT_P3_SM_LANE_5_0
#define reg_DFE_F4_D_MID_P3_SM_LANE_5_0  DFE_READ_SM_REG8_P3.BF.DFE_F4_D_MID_P3_SM_LANE_5_0
#define reg_DFE_F4_D_TOP_P3_SM_LANE_5_0  DFE_READ_SM_REG8_P3.BF.DFE_F4_D_TOP_P3_SM_LANE_5_0
#define reg_DFE_F4_S_BOT_P3_SM_LANE_5_0  DFE_READ_SM_REG8_P3.BF.DFE_F4_S_BOT_P3_SM_LANE_5_0

// 0x02b4	DFE_READ_SM_REG9_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG9 Path3
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P3_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F4_S_TOP_P3_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F5_BOT_P3_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F5_MID_P3_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG9_P3_t;
__xdata __at( 0x26b4 ) volatile DFE_READ_SM_REG9_P3_t DFE_READ_SM_REG9_P3;
#define reg_DFE_F4_S_MID_P3_SM_LANE_5_0  DFE_READ_SM_REG9_P3.BF.DFE_F4_S_MID_P3_SM_LANE_5_0
#define reg_DFE_F4_S_TOP_P3_SM_LANE_5_0  DFE_READ_SM_REG9_P3.BF.DFE_F4_S_TOP_P3_SM_LANE_5_0
#define reg_DFE_F5_BOT_P3_SM_LANE_6_0  DFE_READ_SM_REG9_P3.BF.DFE_F5_BOT_P3_SM_LANE_6_0
#define reg_DFE_F5_MID_P3_SM_LANE_6_0  DFE_READ_SM_REG9_P3.BF.DFE_F5_MID_P3_SM_LANE_6_0

// 0x02b8	DFE_READ_SM_REG10_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG10 Path3
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P3_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F6_BOT_P3_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F6_MID_P3_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F6_TOP_P3_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG10_P3_t;
__xdata __at( 0x26b8 ) volatile DFE_READ_SM_REG10_P3_t DFE_READ_SM_REG10_P3;
#define reg_DFE_F5_TOP_P3_SM_LANE_6_0  DFE_READ_SM_REG10_P3.BF.DFE_F5_TOP_P3_SM_LANE_6_0
#define reg_DFE_F6_BOT_P3_SM_LANE_6_0  DFE_READ_SM_REG10_P3.BF.DFE_F6_BOT_P3_SM_LANE_6_0
#define reg_DFE_F6_MID_P3_SM_LANE_6_0  DFE_READ_SM_REG10_P3.BF.DFE_F6_MID_P3_SM_LANE_6_0
#define reg_DFE_F6_TOP_P3_SM_LANE_6_0  DFE_READ_SM_REG10_P3.BF.DFE_F6_TOP_P3_SM_LANE_6_0

// 0x02bc	DFE_READ_SM_REG11_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG11 Path3
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P3_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F7_MID_P3_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F7_TOP_P3_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F8_BOT_P3_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG11_P3_t;
__xdata __at( 0x26bc ) volatile DFE_READ_SM_REG11_P3_t DFE_READ_SM_REG11_P3;
#define reg_DFE_F7_BOT_P3_SM_LANE_6_0  DFE_READ_SM_REG11_P3.BF.DFE_F7_BOT_P3_SM_LANE_6_0
#define reg_DFE_F7_MID_P3_SM_LANE_6_0  DFE_READ_SM_REG11_P3.BF.DFE_F7_MID_P3_SM_LANE_6_0
#define reg_DFE_F7_TOP_P3_SM_LANE_6_0  DFE_READ_SM_REG11_P3.BF.DFE_F7_TOP_P3_SM_LANE_6_0
#define reg_DFE_F8_BOT_P3_SM_LANE_6_0  DFE_READ_SM_REG11_P3.BF.DFE_F8_BOT_P3_SM_LANE_6_0

// 0x02c0	DFE_READ_SM_REG12_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG12 Path3
typedef union {
	struct {
		uint8_t DFE_F8_MID_P3_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F8_TOP_P3_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F9_LSB_P3_SM_LANE_5_0                : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F9_MSB_P3_SM_LANE_5_0                : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG12_P3_t;
__xdata __at( 0x26c0 ) volatile DFE_READ_SM_REG12_P3_t DFE_READ_SM_REG12_P3;
#define reg_DFE_F8_MID_P3_SM_LANE_6_0  DFE_READ_SM_REG12_P3.BF.DFE_F8_MID_P3_SM_LANE_6_0
#define reg_DFE_F8_TOP_P3_SM_LANE_6_0  DFE_READ_SM_REG12_P3.BF.DFE_F8_TOP_P3_SM_LANE_6_0
#define reg_DFE_F9_LSB_P3_SM_LANE_5_0  DFE_READ_SM_REG12_P3.BF.DFE_F9_LSB_P3_SM_LANE_5_0
#define reg_DFE_F9_MSB_P3_SM_LANE_5_0  DFE_READ_SM_REG12_P3.BF.DFE_F9_MSB_P3_SM_LANE_5_0

// 0x02c4	DFE_READ_SM_REG13_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG13 Path3
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P3_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F10_MSB_P3_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F11_P3_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F12_LSB_P3_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG13_P3_t;
__xdata __at( 0x26c4 ) volatile DFE_READ_SM_REG13_P3_t DFE_READ_SM_REG13_P3;
#define reg_DFE_F10_LSB_P3_SM_LANE_5_0  DFE_READ_SM_REG13_P3.BF.DFE_F10_LSB_P3_SM_LANE_5_0
#define reg_DFE_F10_MSB_P3_SM_LANE_5_0  DFE_READ_SM_REG13_P3.BF.DFE_F10_MSB_P3_SM_LANE_5_0
#define reg_DFE_F11_P3_SM_LANE_5_0  DFE_READ_SM_REG13_P3.BF.DFE_F11_P3_SM_LANE_5_0
#define reg_DFE_F12_LSB_P3_SM_LANE_5_0  DFE_READ_SM_REG13_P3.BF.DFE_F12_LSB_P3_SM_LANE_5_0

// 0x02c8	DFE_READ_SM_REG14_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG14 Path3
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P3_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F13_P3_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F14_LSB_P3_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F14_MSB_P3_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG14_P3_t;
__xdata __at( 0x26c8 ) volatile DFE_READ_SM_REG14_P3_t DFE_READ_SM_REG14_P3;
#define reg_DFE_F12_MSB_P3_SM_LANE_5_0  DFE_READ_SM_REG14_P3.BF.DFE_F12_MSB_P3_SM_LANE_5_0
#define reg_DFE_F13_P3_SM_LANE_5_0  DFE_READ_SM_REG14_P3.BF.DFE_F13_P3_SM_LANE_5_0
#define reg_DFE_F14_LSB_P3_SM_LANE_5_0  DFE_READ_SM_REG14_P3.BF.DFE_F14_LSB_P3_SM_LANE_5_0
#define reg_DFE_F14_MSB_P3_SM_LANE_5_0  DFE_READ_SM_REG14_P3.BF.DFE_F14_MSB_P3_SM_LANE_5_0

// 0x02cc	DFE_READ_SM_REG15_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG15 Path3
typedef union {
	struct {
		uint8_t DFE_F15_P3_SM_LANE_5_0                   : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F16_LSB_P3_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F16_MSB_P3_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F17_P3_SM_LANE_5_0                   : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG15_P3_t;
__xdata __at( 0x26cc ) volatile DFE_READ_SM_REG15_P3_t DFE_READ_SM_REG15_P3;
#define reg_DFE_F15_P3_SM_LANE_5_0  DFE_READ_SM_REG15_P3.BF.DFE_F15_P3_SM_LANE_5_0
#define reg_DFE_F16_LSB_P3_SM_LANE_5_0  DFE_READ_SM_REG15_P3.BF.DFE_F16_LSB_P3_SM_LANE_5_0
#define reg_DFE_F16_MSB_P3_SM_LANE_5_0  DFE_READ_SM_REG15_P3.BF.DFE_F16_MSB_P3_SM_LANE_5_0
#define reg_DFE_F17_P3_SM_LANE_5_0  DFE_READ_SM_REG15_P3.BF.DFE_F17_P3_SM_LANE_5_0

// 0x02d0	DFE_READ_SM_REG16_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG16 Path3
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P3_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F18_MSB_P3_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F19_P3_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F20_LSB_P3_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG16_P3_t;
__xdata __at( 0x26d0 ) volatile DFE_READ_SM_REG16_P3_t DFE_READ_SM_REG16_P3;
#define reg_DFE_F18_LSB_P3_SM_LANE_5_0  DFE_READ_SM_REG16_P3.BF.DFE_F18_LSB_P3_SM_LANE_5_0
#define reg_DFE_F18_MSB_P3_SM_LANE_5_0  DFE_READ_SM_REG16_P3.BF.DFE_F18_MSB_P3_SM_LANE_5_0
#define reg_DFE_F19_P3_SM_LANE_5_0  DFE_READ_SM_REG16_P3.BF.DFE_F19_P3_SM_LANE_5_0
#define reg_DFE_F20_LSB_P3_SM_LANE_5_0  DFE_READ_SM_REG16_P3.BF.DFE_F20_LSB_P3_SM_LANE_5_0

// 0x02d4	DFE_READ_SM_REG17_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG17 Path3
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P3_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F21_P3_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F22_P3_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F23_P3_SM_LANE_4_0                   : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG17_P3_t;
__xdata __at( 0x26d4 ) volatile DFE_READ_SM_REG17_P3_t DFE_READ_SM_REG17_P3;
#define reg_DFE_F20_MSB_P3_SM_LANE_5_0  DFE_READ_SM_REG17_P3.BF.DFE_F20_MSB_P3_SM_LANE_5_0
#define reg_DFE_F21_P3_SM_LANE_5_0  DFE_READ_SM_REG17_P3.BF.DFE_F21_P3_SM_LANE_5_0
#define reg_DFE_F22_P3_SM_LANE_5_0  DFE_READ_SM_REG17_P3.BF.DFE_F22_P3_SM_LANE_5_0
#define reg_DFE_F23_P3_SM_LANE_4_0  DFE_READ_SM_REG17_P3.BF.DFE_F23_P3_SM_LANE_4_0

// 0x02d8	DFE_READ_SM_REG18_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG18 Path3
typedef union {
	struct {
		uint8_t DFE_F24_P3_SM_LANE_4_0                   : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_F25_P3_SM_LANE_4_0                   : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_F26_P3_SM_LANE_4_0                   : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t DFE_F27_P3_SM_LANE_4_0                   : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG18_P3_t;
__xdata __at( 0x26d8 ) volatile DFE_READ_SM_REG18_P3_t DFE_READ_SM_REG18_P3;
#define reg_DFE_F24_P3_SM_LANE_4_0  DFE_READ_SM_REG18_P3.BF.DFE_F24_P3_SM_LANE_4_0
#define reg_DFE_F25_P3_SM_LANE_4_0  DFE_READ_SM_REG18_P3.BF.DFE_F25_P3_SM_LANE_4_0
#define reg_DFE_F26_P3_SM_LANE_4_0  DFE_READ_SM_REG18_P3.BF.DFE_F26_P3_SM_LANE_4_0
#define reg_DFE_F27_P3_SM_LANE_4_0  DFE_READ_SM_REG18_P3.BF.DFE_F27_P3_SM_LANE_4_0

// 0x02dc	DFE_READ_SM_REG19_P3		DFE TAP SIGN_MAGNITUDE READ BACK REG19 Path3
typedef union {
	struct {
		uint8_t DFE_F28_P3_SM_LANE_4_0                   : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_F29_P3_SM_LANE_4_0                   : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_F30_P3_SM_LANE_4_0                   : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG19_P3_t;
__xdata __at( 0x26dc ) volatile DFE_READ_SM_REG19_P3_t DFE_READ_SM_REG19_P3;
#define reg_DFE_F28_P3_SM_LANE_4_0  DFE_READ_SM_REG19_P3.BF.DFE_F28_P3_SM_LANE_4_0
#define reg_DFE_F29_P3_SM_LANE_4_0  DFE_READ_SM_REG19_P3.BF.DFE_F29_P3_SM_LANE_4_0
#define reg_DFE_F30_P3_SM_LANE_4_0  DFE_READ_SM_REG19_P3.BF.DFE_F30_P3_SM_LANE_4_0

// 0x02e0	DFE_READ_SM_REG0_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG0 Path4
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_P4_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_DC_D_MID_P4_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_DC_D_TOP_P4_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_DC_S_BOT_P4_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG0_P4_t;
__xdata __at( 0x26e0 ) volatile DFE_READ_SM_REG0_P4_t DFE_READ_SM_REG0_P4;
#define reg_DFE_DC_D_BOT_P4_SM_LANE_5_0  DFE_READ_SM_REG0_P4.BF.DFE_DC_D_BOT_P4_SM_LANE_5_0
#define reg_DFE_DC_D_MID_P4_SM_LANE_5_0  DFE_READ_SM_REG0_P4.BF.DFE_DC_D_MID_P4_SM_LANE_5_0
#define reg_DFE_DC_D_TOP_P4_SM_LANE_5_0  DFE_READ_SM_REG0_P4.BF.DFE_DC_D_TOP_P4_SM_LANE_5_0
#define reg_DFE_DC_S_BOT_P4_SM_LANE_5_0  DFE_READ_SM_REG0_P4.BF.DFE_DC_S_BOT_P4_SM_LANE_5_0

// 0x02e4	DFE_READ_SM_REG1_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG1 Path4
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_P4_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_DC_S_TOP_P4_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_DC_E_P4_SM_LANE_6_0                  : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_VREF_BOT_P4_SM_LANE_6_0              : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG1_P4_t;
__xdata __at( 0x26e4 ) volatile DFE_READ_SM_REG1_P4_t DFE_READ_SM_REG1_P4;
#define reg_DFE_DC_S_MID_P4_SM_LANE_5_0  DFE_READ_SM_REG1_P4.BF.DFE_DC_S_MID_P4_SM_LANE_5_0
#define reg_DFE_DC_S_TOP_P4_SM_LANE_5_0  DFE_READ_SM_REG1_P4.BF.DFE_DC_S_TOP_P4_SM_LANE_5_0
#define reg_DFE_DC_E_P4_SM_LANE_6_0  DFE_READ_SM_REG1_P4.BF.DFE_DC_E_P4_SM_LANE_6_0
#define reg_DFE_VREF_BOT_P4_SM_LANE_6_0  DFE_READ_SM_REG1_P4.BF.DFE_VREF_BOT_P4_SM_LANE_6_0

// 0x02e8	DFE_READ_SM_REG2_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG2 Path4
typedef union {
	struct {
		uint8_t DFE_VREF_MID_P4_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_VREF_TOP_P4_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F0_D_BOT_P4_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F0_D_MID_P4_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG2_P4_t;
__xdata __at( 0x26e8 ) volatile DFE_READ_SM_REG2_P4_t DFE_READ_SM_REG2_P4;
#define reg_DFE_VREF_MID_P4_SM_LANE_6_0  DFE_READ_SM_REG2_P4.BF.DFE_VREF_MID_P4_SM_LANE_6_0
#define reg_DFE_VREF_TOP_P4_SM_LANE_6_0  DFE_READ_SM_REG2_P4.BF.DFE_VREF_TOP_P4_SM_LANE_6_0
#define reg_DFE_F0_D_BOT_P4_SM_LANE_5_0  DFE_READ_SM_REG2_P4.BF.DFE_F0_D_BOT_P4_SM_LANE_5_0
#define reg_DFE_F0_D_MID_P4_SM_LANE_5_0  DFE_READ_SM_REG2_P4.BF.DFE_F0_D_MID_P4_SM_LANE_5_0

// 0x02ec	DFE_READ_SM_REG3_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG3 Path4
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P4_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F0_S_BOT_P4_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F0_S_MID_P4_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F0_S_TOP_P4_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG3_P4_t;
__xdata __at( 0x26ec ) volatile DFE_READ_SM_REG3_P4_t DFE_READ_SM_REG3_P4;
#define reg_DFE_F0_D_TOP_P4_SM_LANE_5_0  DFE_READ_SM_REG3_P4.BF.DFE_F0_D_TOP_P4_SM_LANE_5_0
#define reg_DFE_F0_S_BOT_P4_SM_LANE_5_0  DFE_READ_SM_REG3_P4.BF.DFE_F0_S_BOT_P4_SM_LANE_5_0
#define reg_DFE_F0_S_MID_P4_SM_LANE_5_0  DFE_READ_SM_REG3_P4.BF.DFE_F0_S_MID_P4_SM_LANE_5_0
#define reg_DFE_F0_S_TOP_P4_SM_LANE_5_0  DFE_READ_SM_REG3_P4.BF.DFE_F0_S_TOP_P4_SM_LANE_5_0

// 0x02f0	DFE_READ_SM_REG4_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG4 Path4
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P4_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F2_D_MID_P4_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F2_D_TOP_P4_SM_LANE_6_0              : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F2_S_BOT_P4_SM_LANE_6_0              : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG4_P4_t;
__xdata __at( 0x26f0 ) volatile DFE_READ_SM_REG4_P4_t DFE_READ_SM_REG4_P4;
#define reg_DFE_F2_D_BOT_P4_SM_LANE_6_0  DFE_READ_SM_REG4_P4.BF.DFE_F2_D_BOT_P4_SM_LANE_6_0
#define reg_DFE_F2_D_MID_P4_SM_LANE_6_0  DFE_READ_SM_REG4_P4.BF.DFE_F2_D_MID_P4_SM_LANE_6_0
#define reg_DFE_F2_D_TOP_P4_SM_LANE_6_0  DFE_READ_SM_REG4_P4.BF.DFE_F2_D_TOP_P4_SM_LANE_6_0
#define reg_DFE_F2_S_BOT_P4_SM_LANE_6_0  DFE_READ_SM_REG4_P4.BF.DFE_F2_S_BOT_P4_SM_LANE_6_0

// 0x02f4	DFE_READ_SM_REG5_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG5 Path4
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P4_SM_LANE_6_0              : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F2_S_TOP_P4_SM_LANE_6_0              : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F2_TUNE3_D_P4_SM_LANE_3_0            : 4;	/*[19:16]       r 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_F2_TUNE3_S_P4_SM_LANE_3_0            : 4;	/*[27:24]       r 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG5_P4_t;
__xdata __at( 0x26f4 ) volatile DFE_READ_SM_REG5_P4_t DFE_READ_SM_REG5_P4;
#define reg_DFE_F2_S_MID_P4_SM_LANE_6_0  DFE_READ_SM_REG5_P4.BF.DFE_F2_S_MID_P4_SM_LANE_6_0
#define reg_DFE_F2_S_TOP_P4_SM_LANE_6_0  DFE_READ_SM_REG5_P4.BF.DFE_F2_S_TOP_P4_SM_LANE_6_0
#define reg_DFE_F2_TUNE3_D_P4_SM_LANE_3_0  DFE_READ_SM_REG5_P4.BF.DFE_F2_TUNE3_D_P4_SM_LANE_3_0
#define reg_DFE_F2_TUNE3_S_P4_SM_LANE_3_0  DFE_READ_SM_REG5_P4.BF.DFE_F2_TUNE3_S_P4_SM_LANE_3_0

// 0x02f8	DFE_READ_SM_REG6_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG6 Path4
typedef union {
	struct {
		uint8_t DFE_F2_TUNE1_D_P4_SM_LANE_3_0            : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t DFE_F2_TUNE1_S_P4_SM_LANE_3_0            : 4;	/* [11:8]       r 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t DFE_F3_D_BOT_P4_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F3_D_MID_P4_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG6_P4_t;
__xdata __at( 0x26f8 ) volatile DFE_READ_SM_REG6_P4_t DFE_READ_SM_REG6_P4;
#define reg_DFE_F2_TUNE1_D_P4_SM_LANE_3_0  DFE_READ_SM_REG6_P4.BF.DFE_F2_TUNE1_D_P4_SM_LANE_3_0
#define reg_DFE_F2_TUNE1_S_P4_SM_LANE_3_0  DFE_READ_SM_REG6_P4.BF.DFE_F2_TUNE1_S_P4_SM_LANE_3_0
#define reg_DFE_F3_D_BOT_P4_SM_LANE_5_0  DFE_READ_SM_REG6_P4.BF.DFE_F3_D_BOT_P4_SM_LANE_5_0
#define reg_DFE_F3_D_MID_P4_SM_LANE_5_0  DFE_READ_SM_REG6_P4.BF.DFE_F3_D_MID_P4_SM_LANE_5_0

// 0x02fc	DFE_READ_SM_REG7_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG7 Path4
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P4_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F3_S_BOT_P4_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F3_S_MID_P4_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F3_S_TOP_P4_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG7_P4_t;
__xdata __at( 0x26fc ) volatile DFE_READ_SM_REG7_P4_t DFE_READ_SM_REG7_P4;
#define reg_DFE_F3_D_TOP_P4_SM_LANE_5_0  DFE_READ_SM_REG7_P4.BF.DFE_F3_D_TOP_P4_SM_LANE_5_0
#define reg_DFE_F3_S_BOT_P4_SM_LANE_5_0  DFE_READ_SM_REG7_P4.BF.DFE_F3_S_BOT_P4_SM_LANE_5_0
#define reg_DFE_F3_S_MID_P4_SM_LANE_5_0  DFE_READ_SM_REG7_P4.BF.DFE_F3_S_MID_P4_SM_LANE_5_0
#define reg_DFE_F3_S_TOP_P4_SM_LANE_5_0  DFE_READ_SM_REG7_P4.BF.DFE_F3_S_TOP_P4_SM_LANE_5_0

// 0x0300	DFE_READ_SM_REG8_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG8 Path4
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P4_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F4_D_MID_P4_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F4_D_TOP_P4_SM_LANE_5_0              : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F4_S_BOT_P4_SM_LANE_5_0              : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG8_P4_t;
__xdata __at( 0x2700 ) volatile DFE_READ_SM_REG8_P4_t DFE_READ_SM_REG8_P4;
#define reg_DFE_F4_D_BOT_P4_SM_LANE_5_0  DFE_READ_SM_REG8_P4.BF.DFE_F4_D_BOT_P4_SM_LANE_5_0
#define reg_DFE_F4_D_MID_P4_SM_LANE_5_0  DFE_READ_SM_REG8_P4.BF.DFE_F4_D_MID_P4_SM_LANE_5_0
#define reg_DFE_F4_D_TOP_P4_SM_LANE_5_0  DFE_READ_SM_REG8_P4.BF.DFE_F4_D_TOP_P4_SM_LANE_5_0
#define reg_DFE_F4_S_BOT_P4_SM_LANE_5_0  DFE_READ_SM_REG8_P4.BF.DFE_F4_S_BOT_P4_SM_LANE_5_0

// 0x0304	DFE_READ_SM_REG9_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG9 Path4
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P4_SM_LANE_5_0              : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F4_S_TOP_P4_SM_LANE_5_0              : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F5_BOT_P4_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F5_MID_P4_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG9_P4_t;
__xdata __at( 0x2704 ) volatile DFE_READ_SM_REG9_P4_t DFE_READ_SM_REG9_P4;
#define reg_DFE_F4_S_MID_P4_SM_LANE_5_0  DFE_READ_SM_REG9_P4.BF.DFE_F4_S_MID_P4_SM_LANE_5_0
#define reg_DFE_F4_S_TOP_P4_SM_LANE_5_0  DFE_READ_SM_REG9_P4.BF.DFE_F4_S_TOP_P4_SM_LANE_5_0
#define reg_DFE_F5_BOT_P4_SM_LANE_6_0  DFE_READ_SM_REG9_P4.BF.DFE_F5_BOT_P4_SM_LANE_6_0
#define reg_DFE_F5_MID_P4_SM_LANE_6_0  DFE_READ_SM_REG9_P4.BF.DFE_F5_MID_P4_SM_LANE_6_0

// 0x0308	DFE_READ_SM_REG10_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG10 Path4
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P4_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F6_BOT_P4_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F6_MID_P4_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F6_TOP_P4_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG10_P4_t;
__xdata __at( 0x2708 ) volatile DFE_READ_SM_REG10_P4_t DFE_READ_SM_REG10_P4;
#define reg_DFE_F5_TOP_P4_SM_LANE_6_0  DFE_READ_SM_REG10_P4.BF.DFE_F5_TOP_P4_SM_LANE_6_0
#define reg_DFE_F6_BOT_P4_SM_LANE_6_0  DFE_READ_SM_REG10_P4.BF.DFE_F6_BOT_P4_SM_LANE_6_0
#define reg_DFE_F6_MID_P4_SM_LANE_6_0  DFE_READ_SM_REG10_P4.BF.DFE_F6_MID_P4_SM_LANE_6_0
#define reg_DFE_F6_TOP_P4_SM_LANE_6_0  DFE_READ_SM_REG10_P4.BF.DFE_F6_TOP_P4_SM_LANE_6_0

// 0x030c	DFE_READ_SM_REG11_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG11 Path4
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P4_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F7_MID_P4_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F7_TOP_P4_SM_LANE_6_0                : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w 1'b0*/
		uint8_t DFE_F8_BOT_P4_SM_LANE_6_0                : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG11_P4_t;
__xdata __at( 0x270c ) volatile DFE_READ_SM_REG11_P4_t DFE_READ_SM_REG11_P4;
#define reg_DFE_F7_BOT_P4_SM_LANE_6_0  DFE_READ_SM_REG11_P4.BF.DFE_F7_BOT_P4_SM_LANE_6_0
#define reg_DFE_F7_MID_P4_SM_LANE_6_0  DFE_READ_SM_REG11_P4.BF.DFE_F7_MID_P4_SM_LANE_6_0
#define reg_DFE_F7_TOP_P4_SM_LANE_6_0  DFE_READ_SM_REG11_P4.BF.DFE_F7_TOP_P4_SM_LANE_6_0
#define reg_DFE_F8_BOT_P4_SM_LANE_6_0  DFE_READ_SM_REG11_P4.BF.DFE_F8_BOT_P4_SM_LANE_6_0

// 0x0310	DFE_READ_SM_REG12_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG12 Path4
typedef union {
	struct {
		uint8_t DFE_F8_MID_P4_SM_LANE_6_0                : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'b0*/
		uint8_t DFE_F8_TOP_P4_SM_LANE_6_0                : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'b0*/
		uint8_t DFE_F9_LSB_P4_SM_LANE_5_0                : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F9_MSB_P4_SM_LANE_5_0                : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG12_P4_t;
__xdata __at( 0x2710 ) volatile DFE_READ_SM_REG12_P4_t DFE_READ_SM_REG12_P4;
#define reg_DFE_F8_MID_P4_SM_LANE_6_0  DFE_READ_SM_REG12_P4.BF.DFE_F8_MID_P4_SM_LANE_6_0
#define reg_DFE_F8_TOP_P4_SM_LANE_6_0  DFE_READ_SM_REG12_P4.BF.DFE_F8_TOP_P4_SM_LANE_6_0
#define reg_DFE_F9_LSB_P4_SM_LANE_5_0  DFE_READ_SM_REG12_P4.BF.DFE_F9_LSB_P4_SM_LANE_5_0
#define reg_DFE_F9_MSB_P4_SM_LANE_5_0  DFE_READ_SM_REG12_P4.BF.DFE_F9_MSB_P4_SM_LANE_5_0

// 0x0314	DFE_READ_SM_REG13_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG13 Path4
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P4_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F10_MSB_P4_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F11_P4_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F12_LSB_P4_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG13_P4_t;
__xdata __at( 0x2714 ) volatile DFE_READ_SM_REG13_P4_t DFE_READ_SM_REG13_P4;
#define reg_DFE_F10_LSB_P4_SM_LANE_5_0  DFE_READ_SM_REG13_P4.BF.DFE_F10_LSB_P4_SM_LANE_5_0
#define reg_DFE_F10_MSB_P4_SM_LANE_5_0  DFE_READ_SM_REG13_P4.BF.DFE_F10_MSB_P4_SM_LANE_5_0
#define reg_DFE_F11_P4_SM_LANE_5_0  DFE_READ_SM_REG13_P4.BF.DFE_F11_P4_SM_LANE_5_0
#define reg_DFE_F12_LSB_P4_SM_LANE_5_0  DFE_READ_SM_REG13_P4.BF.DFE_F12_LSB_P4_SM_LANE_5_0

// 0x0318	DFE_READ_SM_REG14_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG14 Path4
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P4_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F13_P4_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F14_LSB_P4_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F14_MSB_P4_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG14_P4_t;
__xdata __at( 0x2718 ) volatile DFE_READ_SM_REG14_P4_t DFE_READ_SM_REG14_P4;
#define reg_DFE_F12_MSB_P4_SM_LANE_5_0  DFE_READ_SM_REG14_P4.BF.DFE_F12_MSB_P4_SM_LANE_5_0
#define reg_DFE_F13_P4_SM_LANE_5_0  DFE_READ_SM_REG14_P4.BF.DFE_F13_P4_SM_LANE_5_0
#define reg_DFE_F14_LSB_P4_SM_LANE_5_0  DFE_READ_SM_REG14_P4.BF.DFE_F14_LSB_P4_SM_LANE_5_0
#define reg_DFE_F14_MSB_P4_SM_LANE_5_0  DFE_READ_SM_REG14_P4.BF.DFE_F14_MSB_P4_SM_LANE_5_0

// 0x031c	DFE_READ_SM_REG15_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG15 Path4
typedef union {
	struct {
		uint8_t DFE_F15_P4_SM_LANE_5_0                   : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F16_LSB_P4_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F16_MSB_P4_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F17_P4_SM_LANE_5_0                   : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG15_P4_t;
__xdata __at( 0x271c ) volatile DFE_READ_SM_REG15_P4_t DFE_READ_SM_REG15_P4;
#define reg_DFE_F15_P4_SM_LANE_5_0  DFE_READ_SM_REG15_P4.BF.DFE_F15_P4_SM_LANE_5_0
#define reg_DFE_F16_LSB_P4_SM_LANE_5_0  DFE_READ_SM_REG15_P4.BF.DFE_F16_LSB_P4_SM_LANE_5_0
#define reg_DFE_F16_MSB_P4_SM_LANE_5_0  DFE_READ_SM_REG15_P4.BF.DFE_F16_MSB_P4_SM_LANE_5_0
#define reg_DFE_F17_P4_SM_LANE_5_0  DFE_READ_SM_REG15_P4.BF.DFE_F17_P4_SM_LANE_5_0

// 0x0320	DFE_READ_SM_REG16_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG16 Path4
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P4_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F18_MSB_P4_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F19_P4_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F20_LSB_P4_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG16_P4_t;
__xdata __at( 0x2720 ) volatile DFE_READ_SM_REG16_P4_t DFE_READ_SM_REG16_P4;
#define reg_DFE_F18_LSB_P4_SM_LANE_5_0  DFE_READ_SM_REG16_P4.BF.DFE_F18_LSB_P4_SM_LANE_5_0
#define reg_DFE_F18_MSB_P4_SM_LANE_5_0  DFE_READ_SM_REG16_P4.BF.DFE_F18_MSB_P4_SM_LANE_5_0
#define reg_DFE_F19_P4_SM_LANE_5_0  DFE_READ_SM_REG16_P4.BF.DFE_F19_P4_SM_LANE_5_0
#define reg_DFE_F20_LSB_P4_SM_LANE_5_0  DFE_READ_SM_REG16_P4.BF.DFE_F20_LSB_P4_SM_LANE_5_0

// 0x0324	DFE_READ_SM_REG17_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG17 Path4
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P4_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t DFE_F21_P4_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
		uint8_t DFE_F22_P4_SM_LANE_5_0                   : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t DFE_F23_P4_SM_LANE_4_0                   : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG17_P4_t;
__xdata __at( 0x2724 ) volatile DFE_READ_SM_REG17_P4_t DFE_READ_SM_REG17_P4;
#define reg_DFE_F20_MSB_P4_SM_LANE_5_0  DFE_READ_SM_REG17_P4.BF.DFE_F20_MSB_P4_SM_LANE_5_0
#define reg_DFE_F21_P4_SM_LANE_5_0  DFE_READ_SM_REG17_P4.BF.DFE_F21_P4_SM_LANE_5_0
#define reg_DFE_F22_P4_SM_LANE_5_0  DFE_READ_SM_REG17_P4.BF.DFE_F22_P4_SM_LANE_5_0
#define reg_DFE_F23_P4_SM_LANE_4_0  DFE_READ_SM_REG17_P4.BF.DFE_F23_P4_SM_LANE_4_0

// 0x0328	DFE_READ_SM_REG18_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG18 Path4
typedef union {
	struct {
		uint8_t DFE_F24_P4_SM_LANE_4_0                   : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_F25_P4_SM_LANE_4_0                   : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_F26_P4_SM_LANE_4_0                   : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t DFE_F27_P4_SM_LANE_4_0                   : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG18_P4_t;
__xdata __at( 0x2728 ) volatile DFE_READ_SM_REG18_P4_t DFE_READ_SM_REG18_P4;
#define reg_DFE_F24_P4_SM_LANE_4_0  DFE_READ_SM_REG18_P4.BF.DFE_F24_P4_SM_LANE_4_0
#define reg_DFE_F25_P4_SM_LANE_4_0  DFE_READ_SM_REG18_P4.BF.DFE_F25_P4_SM_LANE_4_0
#define reg_DFE_F26_P4_SM_LANE_4_0  DFE_READ_SM_REG18_P4.BF.DFE_F26_P4_SM_LANE_4_0
#define reg_DFE_F27_P4_SM_LANE_4_0  DFE_READ_SM_REG18_P4.BF.DFE_F27_P4_SM_LANE_4_0

// 0x032c	DFE_READ_SM_REG19_P4		DFE TAP SIGN_MAGNITUDE READ BACK REG19 Path4
typedef union {
	struct {
		uint8_t DFE_F28_P4_SM_LANE_4_0                   : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t DFE_F29_P4_SM_LANE_4_0                   : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_F30_P4_SM_LANE_4_0                   : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG19_P4_t;
__xdata __at( 0x272c ) volatile DFE_READ_SM_REG19_P4_t DFE_READ_SM_REG19_P4;
#define reg_DFE_F28_P4_SM_LANE_4_0  DFE_READ_SM_REG19_P4.BF.DFE_F28_P4_SM_LANE_4_0
#define reg_DFE_F29_P4_SM_LANE_4_0  DFE_READ_SM_REG19_P4.BF.DFE_F29_P4_SM_LANE_4_0
#define reg_DFE_F30_P4_SM_LANE_4_0  DFE_READ_SM_REG19_P4.BF.DFE_F30_P4_SM_LANE_4_0

// 0x0330	DFE_READ_2C_REG0_P1		DFE TAP 2'S COMPLIMENT READ BACK REG0 Path1
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_P1_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_D_MID_P1_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_D_TOP_P1_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_DC_S_BOT_P1_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG0_P1_t;
__xdata __at( 0x2730 ) volatile DFE_READ_2C_REG0_P1_t DFE_READ_2C_REG0_P1;
#define reg_DFE_DC_D_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG0_P1.BF.DFE_DC_D_BOT_P1_2C_LANE_7_0
#define reg_DFE_DC_D_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG0_P1.BF.DFE_DC_D_MID_P1_2C_LANE_7_0
#define reg_DFE_DC_D_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG0_P1.BF.DFE_DC_D_TOP_P1_2C_LANE_7_0
#define reg_DFE_DC_S_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG0_P1.BF.DFE_DC_S_BOT_P1_2C_LANE_7_0

// 0x0334	DFE_READ_2C_REG1_P1		DFE TAP 2'S COMPLIMENT READ BACK REG1 Path1
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_P1_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_S_TOP_P1_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_E_P1_2C_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_VREF_BOT_P1_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG1_P1_t;
__xdata __at( 0x2734 ) volatile DFE_READ_2C_REG1_P1_t DFE_READ_2C_REG1_P1;
#define reg_DFE_DC_S_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG1_P1.BF.DFE_DC_S_MID_P1_2C_LANE_7_0
#define reg_DFE_DC_S_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG1_P1.BF.DFE_DC_S_TOP_P1_2C_LANE_7_0
#define reg_DFE_DC_E_P1_2C_LANE_7_0  DFE_READ_2C_REG1_P1.BF.DFE_DC_E_P1_2C_LANE_7_0
#define reg_DFE_VREF_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG1_P1.BF.DFE_VREF_BOT_P1_2C_LANE_7_0

// 0x0338	DFE_READ_2C_REG2_P1		DFE TAP 2'S COMPLIMENT READ BACK REG2 Path1
typedef union {
	struct {
		uint8_t DFE_VREF_MID_P1_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_VREF_TOP_P1_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_D_BOT_P1_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_D_MID_P1_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG2_P1_t;
__xdata __at( 0x2738 ) volatile DFE_READ_2C_REG2_P1_t DFE_READ_2C_REG2_P1;
#define reg_DFE_VREF_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG2_P1.BF.DFE_VREF_MID_P1_2C_LANE_7_0
#define reg_DFE_VREF_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG2_P1.BF.DFE_VREF_TOP_P1_2C_LANE_7_0
#define reg_DFE_F0_D_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG2_P1.BF.DFE_F0_D_BOT_P1_2C_LANE_7_0
#define reg_DFE_F0_D_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG2_P1.BF.DFE_F0_D_MID_P1_2C_LANE_7_0

// 0x033c	DFE_READ_2C_REG3_P1		DFE TAP 2'S COMPLIMENT READ BACK REG3 Path1
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P1_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F0_S_BOT_P1_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_S_MID_P1_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_S_TOP_P1_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG3_P1_t;
__xdata __at( 0x273c ) volatile DFE_READ_2C_REG3_P1_t DFE_READ_2C_REG3_P1;
#define reg_DFE_F0_D_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG3_P1.BF.DFE_F0_D_TOP_P1_2C_LANE_7_0
#define reg_DFE_F0_S_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG3_P1.BF.DFE_F0_S_BOT_P1_2C_LANE_7_0
#define reg_DFE_F0_S_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG3_P1.BF.DFE_F0_S_MID_P1_2C_LANE_7_0
#define reg_DFE_F0_S_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG3_P1.BF.DFE_F0_S_TOP_P1_2C_LANE_7_0

// 0x0340	DFE_READ_2C_REG4_P1		DFE TAP 2'S COMPLIMENT READ BACK REG4 Path1
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P1_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_D_MID_P1_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_D_TOP_P1_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_S_BOT_P1_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG4_P1_t;
__xdata __at( 0x2740 ) volatile DFE_READ_2C_REG4_P1_t DFE_READ_2C_REG4_P1;
#define reg_DFE_F2_D_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG4_P1.BF.DFE_F2_D_BOT_P1_2C_LANE_7_0
#define reg_DFE_F2_D_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG4_P1.BF.DFE_F2_D_MID_P1_2C_LANE_7_0
#define reg_DFE_F2_D_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG4_P1.BF.DFE_F2_D_TOP_P1_2C_LANE_7_0
#define reg_DFE_F2_S_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG4_P1.BF.DFE_F2_S_BOT_P1_2C_LANE_7_0

// 0x0344	DFE_READ_2C_REG5_P1		DFE TAP 2'S COMPLIMENT READ BACK REG5 Path1
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P1_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_S_TOP_P1_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_D_BOT_P1_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_D_MID_P1_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG5_P1_t;
__xdata __at( 0x2744 ) volatile DFE_READ_2C_REG5_P1_t DFE_READ_2C_REG5_P1;
#define reg_DFE_F2_S_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG5_P1.BF.DFE_F2_S_MID_P1_2C_LANE_7_0
#define reg_DFE_F2_S_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG5_P1.BF.DFE_F2_S_TOP_P1_2C_LANE_7_0
#define reg_DFE_F3_D_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG5_P1.BF.DFE_F3_D_BOT_P1_2C_LANE_7_0
#define reg_DFE_F3_D_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG5_P1.BF.DFE_F3_D_MID_P1_2C_LANE_7_0

// 0x0348	DFE_READ_2C_REG6_P1		DFE TAP 2'S COMPLIMENT READ BACK REG6 Path1
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P1_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F3_S_BOT_P1_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_S_MID_P1_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_S_TOP_P1_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG6_P1_t;
__xdata __at( 0x2748 ) volatile DFE_READ_2C_REG6_P1_t DFE_READ_2C_REG6_P1;
#define reg_DFE_F3_D_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG6_P1.BF.DFE_F3_D_TOP_P1_2C_LANE_7_0
#define reg_DFE_F3_S_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG6_P1.BF.DFE_F3_S_BOT_P1_2C_LANE_7_0
#define reg_DFE_F3_S_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG6_P1.BF.DFE_F3_S_MID_P1_2C_LANE_7_0
#define reg_DFE_F3_S_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG6_P1.BF.DFE_F3_S_TOP_P1_2C_LANE_7_0

// 0x034c	DFE_READ_2C_REG7_P1		DFE TAP 2'S COMPLIMENT READ BACK REG7 Path1
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P1_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_D_MID_P1_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F4_D_TOP_P1_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F4_S_BOT_P1_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG7_P1_t;
__xdata __at( 0x274c ) volatile DFE_READ_2C_REG7_P1_t DFE_READ_2C_REG7_P1;
#define reg_DFE_F4_D_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG7_P1.BF.DFE_F4_D_BOT_P1_2C_LANE_7_0
#define reg_DFE_F4_D_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG7_P1.BF.DFE_F4_D_MID_P1_2C_LANE_7_0
#define reg_DFE_F4_D_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG7_P1.BF.DFE_F4_D_TOP_P1_2C_LANE_7_0
#define reg_DFE_F4_S_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG7_P1.BF.DFE_F4_S_BOT_P1_2C_LANE_7_0

// 0x0350	DFE_READ_2C_REG8_P1		DFE TAP 2'S COMPLIMENT READ BACK REG8 Path1
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P1_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_S_TOP_P1_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F5_BOT_P1_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F5_MID_P1_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG8_P1_t;
__xdata __at( 0x2750 ) volatile DFE_READ_2C_REG8_P1_t DFE_READ_2C_REG8_P1;
#define reg_DFE_F4_S_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG8_P1.BF.DFE_F4_S_MID_P1_2C_LANE_7_0
#define reg_DFE_F4_S_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG8_P1.BF.DFE_F4_S_TOP_P1_2C_LANE_7_0
#define reg_DFE_F5_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG8_P1.BF.DFE_F5_BOT_P1_2C_LANE_7_0
#define reg_DFE_F5_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG8_P1.BF.DFE_F5_MID_P1_2C_LANE_7_0

// 0x0354	DFE_READ_2C_REG9_P1		DFE TAP 2'S COMPLIMENT READ BACK REG9 Path1
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P1_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F6_BOT_P1_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F6_MID_P1_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F6_TOP_P1_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG9_P1_t;
__xdata __at( 0x2754 ) volatile DFE_READ_2C_REG9_P1_t DFE_READ_2C_REG9_P1;
#define reg_DFE_F5_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG9_P1.BF.DFE_F5_TOP_P1_2C_LANE_7_0
#define reg_DFE_F6_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG9_P1.BF.DFE_F6_BOT_P1_2C_LANE_7_0
#define reg_DFE_F6_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG9_P1.BF.DFE_F6_MID_P1_2C_LANE_7_0
#define reg_DFE_F6_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG9_P1.BF.DFE_F6_TOP_P1_2C_LANE_7_0

// 0x0358	DFE_READ_2C_REG10_P1		DFE TAP 2'S COMPLIMENT READ BACK REG10 Path1
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P1_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F7_MID_P1_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F7_TOP_P1_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F8_BOT_P1_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG10_P1_t;
__xdata __at( 0x2758 ) volatile DFE_READ_2C_REG10_P1_t DFE_READ_2C_REG10_P1;
#define reg_DFE_F7_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG10_P1.BF.DFE_F7_BOT_P1_2C_LANE_7_0
#define reg_DFE_F7_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG10_P1.BF.DFE_F7_MID_P1_2C_LANE_7_0
#define reg_DFE_F7_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG10_P1.BF.DFE_F7_TOP_P1_2C_LANE_7_0
#define reg_DFE_F8_BOT_P1_2C_LANE_7_0  DFE_READ_2C_REG10_P1.BF.DFE_F8_BOT_P1_2C_LANE_7_0

// 0x035c	DFE_READ_2C_REG11_P1		DFE TAP 2'S COMPLIMENT READ BACK REG11 Path1
typedef union {
	struct {
		uint8_t DFE_F8_MID_P1_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F8_TOP_P1_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F9_LSB_P1_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F9_MSB_P1_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG11_P1_t;
__xdata __at( 0x275c ) volatile DFE_READ_2C_REG11_P1_t DFE_READ_2C_REG11_P1;
#define reg_DFE_F8_MID_P1_2C_LANE_7_0  DFE_READ_2C_REG11_P1.BF.DFE_F8_MID_P1_2C_LANE_7_0
#define reg_DFE_F8_TOP_P1_2C_LANE_7_0  DFE_READ_2C_REG11_P1.BF.DFE_F8_TOP_P1_2C_LANE_7_0
#define reg_DFE_F9_LSB_P1_2C_LANE_7_0  DFE_READ_2C_REG11_P1.BF.DFE_F9_LSB_P1_2C_LANE_7_0
#define reg_DFE_F9_MSB_P1_2C_LANE_7_0  DFE_READ_2C_REG11_P1.BF.DFE_F9_MSB_P1_2C_LANE_7_0

// 0x0360	DFE_READ_2C_REG12_P1		DFE TAP 2'S COMPLIMENT READ BACK REG12 Path1
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P1_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F10_MSB_P1_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F11_P1_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F12_LSB_P1_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG12_P1_t;
__xdata __at( 0x2760 ) volatile DFE_READ_2C_REG12_P1_t DFE_READ_2C_REG12_P1;
#define reg_DFE_F10_LSB_P1_2C_LANE_7_0  DFE_READ_2C_REG12_P1.BF.DFE_F10_LSB_P1_2C_LANE_7_0
#define reg_DFE_F10_MSB_P1_2C_LANE_7_0  DFE_READ_2C_REG12_P1.BF.DFE_F10_MSB_P1_2C_LANE_7_0
#define reg_DFE_F11_P1_2C_LANE_7_0  DFE_READ_2C_REG12_P1.BF.DFE_F11_P1_2C_LANE_7_0
#define reg_DFE_F12_LSB_P1_2C_LANE_7_0  DFE_READ_2C_REG12_P1.BF.DFE_F12_LSB_P1_2C_LANE_7_0

// 0x0364	DFE_READ_2C_REG13_P1		DFE TAP 2'S COMPLIMENT READ BACK REG13 Path1
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P1_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F13_P1_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F14_LSB_P1_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F14_MSB_P1_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG13_P1_t;
__xdata __at( 0x2764 ) volatile DFE_READ_2C_REG13_P1_t DFE_READ_2C_REG13_P1;
#define reg_DFE_F12_MSB_P1_2C_LANE_7_0  DFE_READ_2C_REG13_P1.BF.DFE_F12_MSB_P1_2C_LANE_7_0
#define reg_DFE_F13_P1_2C_LANE_7_0  DFE_READ_2C_REG13_P1.BF.DFE_F13_P1_2C_LANE_7_0
#define reg_DFE_F14_LSB_P1_2C_LANE_7_0  DFE_READ_2C_REG13_P1.BF.DFE_F14_LSB_P1_2C_LANE_7_0
#define reg_DFE_F14_MSB_P1_2C_LANE_7_0  DFE_READ_2C_REG13_P1.BF.DFE_F14_MSB_P1_2C_LANE_7_0

// 0x0368	DFE_READ_2C_REG14_P1		DFE TAP 2'S COMPLIMENT READ BACK REG14 Path1
typedef union {
	struct {
		uint8_t DFE_F15_P1_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F16_LSB_P1_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F16_MSB_P1_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F17_P1_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG14_P1_t;
__xdata __at( 0x2768 ) volatile DFE_READ_2C_REG14_P1_t DFE_READ_2C_REG14_P1;
#define reg_DFE_F15_P1_2C_LANE_7_0  DFE_READ_2C_REG14_P1.BF.DFE_F15_P1_2C_LANE_7_0
#define reg_DFE_F16_LSB_P1_2C_LANE_7_0  DFE_READ_2C_REG14_P1.BF.DFE_F16_LSB_P1_2C_LANE_7_0
#define reg_DFE_F16_MSB_P1_2C_LANE_7_0  DFE_READ_2C_REG14_P1.BF.DFE_F16_MSB_P1_2C_LANE_7_0
#define reg_DFE_F17_P1_2C_LANE_7_0  DFE_READ_2C_REG14_P1.BF.DFE_F17_P1_2C_LANE_7_0

// 0x036c	DFE_READ_2C_REG15_P1		DFE TAP 2'S COMPLIMENT READ BACK REG15 Path1
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P1_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F18_MSB_P1_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F19_P1_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F20_LSB_P1_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG15_P1_t;
__xdata __at( 0x276c ) volatile DFE_READ_2C_REG15_P1_t DFE_READ_2C_REG15_P1;
#define reg_DFE_F18_LSB_P1_2C_LANE_7_0  DFE_READ_2C_REG15_P1.BF.DFE_F18_LSB_P1_2C_LANE_7_0
#define reg_DFE_F18_MSB_P1_2C_LANE_7_0  DFE_READ_2C_REG15_P1.BF.DFE_F18_MSB_P1_2C_LANE_7_0
#define reg_DFE_F19_P1_2C_LANE_7_0  DFE_READ_2C_REG15_P1.BF.DFE_F19_P1_2C_LANE_7_0
#define reg_DFE_F20_LSB_P1_2C_LANE_7_0  DFE_READ_2C_REG15_P1.BF.DFE_F20_LSB_P1_2C_LANE_7_0

// 0x0370	DFE_READ_2C_REG16_P1		DFE TAP 2'S COMPLIMENT READ BACK REG16 Path1
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P1_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F21_P1_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F22_P1_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F23_P1_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG16_P1_t;
__xdata __at( 0x2770 ) volatile DFE_READ_2C_REG16_P1_t DFE_READ_2C_REG16_P1;
#define reg_DFE_F20_MSB_P1_2C_LANE_7_0  DFE_READ_2C_REG16_P1.BF.DFE_F20_MSB_P1_2C_LANE_7_0
#define reg_DFE_F21_P1_2C_LANE_7_0  DFE_READ_2C_REG16_P1.BF.DFE_F21_P1_2C_LANE_7_0
#define reg_DFE_F22_P1_2C_LANE_7_0  DFE_READ_2C_REG16_P1.BF.DFE_F22_P1_2C_LANE_7_0
#define reg_DFE_F23_P1_2C_LANE_7_0  DFE_READ_2C_REG16_P1.BF.DFE_F23_P1_2C_LANE_7_0

// 0x0374	DFE_READ_2C_REG17_P1		DFE TAP 2'S COMPLIMENT READ BACK REG17 Path1
typedef union {
	struct {
		uint8_t DFE_F24_P1_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F25_P1_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F26_P1_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F27_P1_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG17_P1_t;
__xdata __at( 0x2774 ) volatile DFE_READ_2C_REG17_P1_t DFE_READ_2C_REG17_P1;
#define reg_DFE_F24_P1_2C_LANE_7_0  DFE_READ_2C_REG17_P1.BF.DFE_F24_P1_2C_LANE_7_0
#define reg_DFE_F25_P1_2C_LANE_7_0  DFE_READ_2C_REG17_P1.BF.DFE_F25_P1_2C_LANE_7_0
#define reg_DFE_F26_P1_2C_LANE_7_0  DFE_READ_2C_REG17_P1.BF.DFE_F26_P1_2C_LANE_7_0
#define reg_DFE_F27_P1_2C_LANE_7_0  DFE_READ_2C_REG17_P1.BF.DFE_F27_P1_2C_LANE_7_0

// 0x0378	DFE_READ_2C_REG18_P1		DFE TAP 2'S COMPLIMENT READ BACK REG18 Path1
typedef union {
	struct {
		uint8_t DFE_F28_P1_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F29_P1_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F30_P1_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG18_P1_t;
__xdata __at( 0x2778 ) volatile DFE_READ_2C_REG18_P1_t DFE_READ_2C_REG18_P1;
#define reg_DFE_F28_P1_2C_LANE_7_0  DFE_READ_2C_REG18_P1.BF.DFE_F28_P1_2C_LANE_7_0
#define reg_DFE_F29_P1_2C_LANE_7_0  DFE_READ_2C_REG18_P1.BF.DFE_F29_P1_2C_LANE_7_0
#define reg_DFE_F30_P1_2C_LANE_7_0  DFE_READ_2C_REG18_P1.BF.DFE_F30_P1_2C_LANE_7_0

// 0x037c	DFE_READ_2C_REG0_P2		DFE TAP 2'S COMPLIMENT READ BACK REG0 Path2
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_P2_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_D_MID_P2_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_D_TOP_P2_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_DC_S_BOT_P2_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG0_P2_t;
__xdata __at( 0x277c ) volatile DFE_READ_2C_REG0_P2_t DFE_READ_2C_REG0_P2;
#define reg_DFE_DC_D_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG0_P2.BF.DFE_DC_D_BOT_P2_2C_LANE_7_0
#define reg_DFE_DC_D_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG0_P2.BF.DFE_DC_D_MID_P2_2C_LANE_7_0
#define reg_DFE_DC_D_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG0_P2.BF.DFE_DC_D_TOP_P2_2C_LANE_7_0
#define reg_DFE_DC_S_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG0_P2.BF.DFE_DC_S_BOT_P2_2C_LANE_7_0

// 0x0380	DFE_READ_2C_REG1_P2		DFE TAP 2'S COMPLIMENT READ BACK REG1 Path2
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_P2_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_S_TOP_P2_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_E_P2_2C_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_VREF_BOT_P2_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG1_P2_t;
__xdata __at( 0x2780 ) volatile DFE_READ_2C_REG1_P2_t DFE_READ_2C_REG1_P2;
#define reg_DFE_DC_S_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG1_P2.BF.DFE_DC_S_MID_P2_2C_LANE_7_0
#define reg_DFE_DC_S_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG1_P2.BF.DFE_DC_S_TOP_P2_2C_LANE_7_0
#define reg_DFE_DC_E_P2_2C_LANE_7_0  DFE_READ_2C_REG1_P2.BF.DFE_DC_E_P2_2C_LANE_7_0
#define reg_DFE_VREF_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG1_P2.BF.DFE_VREF_BOT_P2_2C_LANE_7_0

// 0x0384	DFE_READ_2C_REG2_P2		DFE TAP 2'S COMPLIMENT READ BACK REG2 Path2
typedef union {
	struct {
		uint8_t DFE_VREF_MID_P2_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_VREF_TOP_P2_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_D_BOT_P2_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_D_MID_P2_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG2_P2_t;
__xdata __at( 0x2784 ) volatile DFE_READ_2C_REG2_P2_t DFE_READ_2C_REG2_P2;
#define reg_DFE_VREF_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG2_P2.BF.DFE_VREF_MID_P2_2C_LANE_7_0
#define reg_DFE_VREF_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG2_P2.BF.DFE_VREF_TOP_P2_2C_LANE_7_0
#define reg_DFE_F0_D_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG2_P2.BF.DFE_F0_D_BOT_P2_2C_LANE_7_0
#define reg_DFE_F0_D_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG2_P2.BF.DFE_F0_D_MID_P2_2C_LANE_7_0

// 0x0388	DFE_READ_2C_REG3_P2		DFE TAP 2'S COMPLIMENT READ BACK REG3 Path2
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P2_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F0_S_BOT_P2_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_S_MID_P2_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_S_TOP_P2_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG3_P2_t;
__xdata __at( 0x2788 ) volatile DFE_READ_2C_REG3_P2_t DFE_READ_2C_REG3_P2;
#define reg_DFE_F0_D_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG3_P2.BF.DFE_F0_D_TOP_P2_2C_LANE_7_0
#define reg_DFE_F0_S_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG3_P2.BF.DFE_F0_S_BOT_P2_2C_LANE_7_0
#define reg_DFE_F0_S_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG3_P2.BF.DFE_F0_S_MID_P2_2C_LANE_7_0
#define reg_DFE_F0_S_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG3_P2.BF.DFE_F0_S_TOP_P2_2C_LANE_7_0

// 0x038c	DFE_READ_2C_REG4_P2		DFE TAP 2'S COMPLIMENT READ BACK REG4 Path2
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P2_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_D_MID_P2_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_D_TOP_P2_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_S_BOT_P2_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG4_P2_t;
__xdata __at( 0x278c ) volatile DFE_READ_2C_REG4_P2_t DFE_READ_2C_REG4_P2;
#define reg_DFE_F2_D_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG4_P2.BF.DFE_F2_D_BOT_P2_2C_LANE_7_0
#define reg_DFE_F2_D_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG4_P2.BF.DFE_F2_D_MID_P2_2C_LANE_7_0
#define reg_DFE_F2_D_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG4_P2.BF.DFE_F2_D_TOP_P2_2C_LANE_7_0
#define reg_DFE_F2_S_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG4_P2.BF.DFE_F2_S_BOT_P2_2C_LANE_7_0

// 0x0390	DFE_READ_2C_REG5_P2		DFE TAP 2'S COMPLIMENT READ BACK REG5 Path2
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P2_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_S_TOP_P2_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_D_BOT_P2_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_D_MID_P2_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG5_P2_t;
__xdata __at( 0x2790 ) volatile DFE_READ_2C_REG5_P2_t DFE_READ_2C_REG5_P2;
#define reg_DFE_F2_S_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG5_P2.BF.DFE_F2_S_MID_P2_2C_LANE_7_0
#define reg_DFE_F2_S_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG5_P2.BF.DFE_F2_S_TOP_P2_2C_LANE_7_0
#define reg_DFE_F3_D_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG5_P2.BF.DFE_F3_D_BOT_P2_2C_LANE_7_0
#define reg_DFE_F3_D_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG5_P2.BF.DFE_F3_D_MID_P2_2C_LANE_7_0

// 0x0394	DFE_READ_2C_REG6_P2		DFE TAP 2'S COMPLIMENT READ BACK REG6 Path2
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P2_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F3_S_BOT_P2_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_S_MID_P2_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_S_TOP_P2_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG6_P2_t;
__xdata __at( 0x2794 ) volatile DFE_READ_2C_REG6_P2_t DFE_READ_2C_REG6_P2;
#define reg_DFE_F3_D_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG6_P2.BF.DFE_F3_D_TOP_P2_2C_LANE_7_0
#define reg_DFE_F3_S_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG6_P2.BF.DFE_F3_S_BOT_P2_2C_LANE_7_0
#define reg_DFE_F3_S_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG6_P2.BF.DFE_F3_S_MID_P2_2C_LANE_7_0
#define reg_DFE_F3_S_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG6_P2.BF.DFE_F3_S_TOP_P2_2C_LANE_7_0

// 0x0398	DFE_READ_2C_REG7_P2		DFE TAP 2'S COMPLIMENT READ BACK REG7 Path2
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P2_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_D_MID_P2_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F4_D_TOP_P2_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F4_S_BOT_P2_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG7_P2_t;
__xdata __at( 0x2798 ) volatile DFE_READ_2C_REG7_P2_t DFE_READ_2C_REG7_P2;
#define reg_DFE_F4_D_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG7_P2.BF.DFE_F4_D_BOT_P2_2C_LANE_7_0
#define reg_DFE_F4_D_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG7_P2.BF.DFE_F4_D_MID_P2_2C_LANE_7_0
#define reg_DFE_F4_D_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG7_P2.BF.DFE_F4_D_TOP_P2_2C_LANE_7_0
#define reg_DFE_F4_S_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG7_P2.BF.DFE_F4_S_BOT_P2_2C_LANE_7_0

// 0x039c	DFE_READ_2C_REG8_P2		DFE TAP 2'S COMPLIMENT READ BACK REG8 Path2
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P2_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_S_TOP_P2_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F5_BOT_P2_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F5_MID_P2_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG8_P2_t;
__xdata __at( 0x279c ) volatile DFE_READ_2C_REG8_P2_t DFE_READ_2C_REG8_P2;
#define reg_DFE_F4_S_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG8_P2.BF.DFE_F4_S_MID_P2_2C_LANE_7_0
#define reg_DFE_F4_S_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG8_P2.BF.DFE_F4_S_TOP_P2_2C_LANE_7_0
#define reg_DFE_F5_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG8_P2.BF.DFE_F5_BOT_P2_2C_LANE_7_0
#define reg_DFE_F5_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG8_P2.BF.DFE_F5_MID_P2_2C_LANE_7_0

// 0x03a0	DFE_READ_2C_REG9_P2		DFE TAP 2'S COMPLIMENT READ BACK REG9 Path2
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P2_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F6_BOT_P2_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F6_MID_P2_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F6_TOP_P2_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG9_P2_t;
__xdata __at( 0x27a0 ) volatile DFE_READ_2C_REG9_P2_t DFE_READ_2C_REG9_P2;
#define reg_DFE_F5_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG9_P2.BF.DFE_F5_TOP_P2_2C_LANE_7_0
#define reg_DFE_F6_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG9_P2.BF.DFE_F6_BOT_P2_2C_LANE_7_0
#define reg_DFE_F6_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG9_P2.BF.DFE_F6_MID_P2_2C_LANE_7_0
#define reg_DFE_F6_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG9_P2.BF.DFE_F6_TOP_P2_2C_LANE_7_0

// 0x03a4	DFE_READ_2C_REG10_P2		DFE TAP 2'S COMPLIMENT READ BACK REG10 Path2
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P2_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F7_MID_P2_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F7_TOP_P2_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F8_BOT_P2_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG10_P2_t;
__xdata __at( 0x27a4 ) volatile DFE_READ_2C_REG10_P2_t DFE_READ_2C_REG10_P2;
#define reg_DFE_F7_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG10_P2.BF.DFE_F7_BOT_P2_2C_LANE_7_0
#define reg_DFE_F7_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG10_P2.BF.DFE_F7_MID_P2_2C_LANE_7_0
#define reg_DFE_F7_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG10_P2.BF.DFE_F7_TOP_P2_2C_LANE_7_0
#define reg_DFE_F8_BOT_P2_2C_LANE_7_0  DFE_READ_2C_REG10_P2.BF.DFE_F8_BOT_P2_2C_LANE_7_0

// 0x03a8	DFE_READ_2C_REG11_P2		DFE TAP 2'S COMPLIMENT READ BACK REG11 Path2
typedef union {
	struct {
		uint8_t DFE_F8_MID_P2_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F8_TOP_P2_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F9_LSB_P2_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F9_MSB_P2_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG11_P2_t;
__xdata __at( 0x27a8 ) volatile DFE_READ_2C_REG11_P2_t DFE_READ_2C_REG11_P2;
#define reg_DFE_F8_MID_P2_2C_LANE_7_0  DFE_READ_2C_REG11_P2.BF.DFE_F8_MID_P2_2C_LANE_7_0
#define reg_DFE_F8_TOP_P2_2C_LANE_7_0  DFE_READ_2C_REG11_P2.BF.DFE_F8_TOP_P2_2C_LANE_7_0
#define reg_DFE_F9_LSB_P2_2C_LANE_7_0  DFE_READ_2C_REG11_P2.BF.DFE_F9_LSB_P2_2C_LANE_7_0
#define reg_DFE_F9_MSB_P2_2C_LANE_7_0  DFE_READ_2C_REG11_P2.BF.DFE_F9_MSB_P2_2C_LANE_7_0

// 0x03ac	DFE_READ_2C_REG12_P2		DFE TAP 2'S COMPLIMENT READ BACK REG12 Path2
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P2_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F10_MSB_P2_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F11_P2_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F12_LSB_P2_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG12_P2_t;
__xdata __at( 0x27ac ) volatile DFE_READ_2C_REG12_P2_t DFE_READ_2C_REG12_P2;
#define reg_DFE_F10_LSB_P2_2C_LANE_7_0  DFE_READ_2C_REG12_P2.BF.DFE_F10_LSB_P2_2C_LANE_7_0
#define reg_DFE_F10_MSB_P2_2C_LANE_7_0  DFE_READ_2C_REG12_P2.BF.DFE_F10_MSB_P2_2C_LANE_7_0
#define reg_DFE_F11_P2_2C_LANE_7_0  DFE_READ_2C_REG12_P2.BF.DFE_F11_P2_2C_LANE_7_0
#define reg_DFE_F12_LSB_P2_2C_LANE_7_0  DFE_READ_2C_REG12_P2.BF.DFE_F12_LSB_P2_2C_LANE_7_0

// 0x03b0	DFE_READ_2C_REG13_P2		DFE TAP 2'S COMPLIMENT READ BACK REG13 Path2
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P2_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F13_P2_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F14_LSB_P2_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F14_MSB_P2_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG13_P2_t;
__xdata __at( 0x27b0 ) volatile DFE_READ_2C_REG13_P2_t DFE_READ_2C_REG13_P2;
#define reg_DFE_F12_MSB_P2_2C_LANE_7_0  DFE_READ_2C_REG13_P2.BF.DFE_F12_MSB_P2_2C_LANE_7_0
#define reg_DFE_F13_P2_2C_LANE_7_0  DFE_READ_2C_REG13_P2.BF.DFE_F13_P2_2C_LANE_7_0
#define reg_DFE_F14_LSB_P2_2C_LANE_7_0  DFE_READ_2C_REG13_P2.BF.DFE_F14_LSB_P2_2C_LANE_7_0
#define reg_DFE_F14_MSB_P2_2C_LANE_7_0  DFE_READ_2C_REG13_P2.BF.DFE_F14_MSB_P2_2C_LANE_7_0

// 0x03b4	DFE_READ_2C_REG14_P2		DFE TAP 2'S COMPLIMENT READ BACK REG14 Path2
typedef union {
	struct {
		uint8_t DFE_F15_P2_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F16_LSB_P2_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F16_MSB_P2_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F17_P2_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG14_P2_t;
__xdata __at( 0x27b4 ) volatile DFE_READ_2C_REG14_P2_t DFE_READ_2C_REG14_P2;
#define reg_DFE_F15_P2_2C_LANE_7_0  DFE_READ_2C_REG14_P2.BF.DFE_F15_P2_2C_LANE_7_0
#define reg_DFE_F16_LSB_P2_2C_LANE_7_0  DFE_READ_2C_REG14_P2.BF.DFE_F16_LSB_P2_2C_LANE_7_0
#define reg_DFE_F16_MSB_P2_2C_LANE_7_0  DFE_READ_2C_REG14_P2.BF.DFE_F16_MSB_P2_2C_LANE_7_0
#define reg_DFE_F17_P2_2C_LANE_7_0  DFE_READ_2C_REG14_P2.BF.DFE_F17_P2_2C_LANE_7_0

// 0x03b8	DFE_READ_2C_REG15_P2		DFE TAP 2'S COMPLIMENT READ BACK REG15 Path2
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P2_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F18_MSB_P2_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F19_P2_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F20_LSB_P2_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG15_P2_t;
__xdata __at( 0x27b8 ) volatile DFE_READ_2C_REG15_P2_t DFE_READ_2C_REG15_P2;
#define reg_DFE_F18_LSB_P2_2C_LANE_7_0  DFE_READ_2C_REG15_P2.BF.DFE_F18_LSB_P2_2C_LANE_7_0
#define reg_DFE_F18_MSB_P2_2C_LANE_7_0  DFE_READ_2C_REG15_P2.BF.DFE_F18_MSB_P2_2C_LANE_7_0
#define reg_DFE_F19_P2_2C_LANE_7_0  DFE_READ_2C_REG15_P2.BF.DFE_F19_P2_2C_LANE_7_0
#define reg_DFE_F20_LSB_P2_2C_LANE_7_0  DFE_READ_2C_REG15_P2.BF.DFE_F20_LSB_P2_2C_LANE_7_0

// 0x03bc	DFE_READ_2C_REG16_P2		DFE TAP 2'S COMPLIMENT READ BACK REG16 Path2
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P2_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F21_P2_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F22_P2_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F23_P2_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG16_P2_t;
__xdata __at( 0x27bc ) volatile DFE_READ_2C_REG16_P2_t DFE_READ_2C_REG16_P2;
#define reg_DFE_F20_MSB_P2_2C_LANE_7_0  DFE_READ_2C_REG16_P2.BF.DFE_F20_MSB_P2_2C_LANE_7_0
#define reg_DFE_F21_P2_2C_LANE_7_0  DFE_READ_2C_REG16_P2.BF.DFE_F21_P2_2C_LANE_7_0
#define reg_DFE_F22_P2_2C_LANE_7_0  DFE_READ_2C_REG16_P2.BF.DFE_F22_P2_2C_LANE_7_0
#define reg_DFE_F23_P2_2C_LANE_7_0  DFE_READ_2C_REG16_P2.BF.DFE_F23_P2_2C_LANE_7_0

// 0x03c0	DFE_READ_2C_REG17_P2		DFE TAP 2'S COMPLIMENT READ BACK REG17 Path2
typedef union {
	struct {
		uint8_t DFE_F24_P2_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F25_P2_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F26_P2_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F27_P2_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG17_P2_t;
__xdata __at( 0x27c0 ) volatile DFE_READ_2C_REG17_P2_t DFE_READ_2C_REG17_P2;
#define reg_DFE_F24_P2_2C_LANE_7_0  DFE_READ_2C_REG17_P2.BF.DFE_F24_P2_2C_LANE_7_0
#define reg_DFE_F25_P2_2C_LANE_7_0  DFE_READ_2C_REG17_P2.BF.DFE_F25_P2_2C_LANE_7_0
#define reg_DFE_F26_P2_2C_LANE_7_0  DFE_READ_2C_REG17_P2.BF.DFE_F26_P2_2C_LANE_7_0
#define reg_DFE_F27_P2_2C_LANE_7_0  DFE_READ_2C_REG17_P2.BF.DFE_F27_P2_2C_LANE_7_0

// 0x03c4	DFE_READ_2C_REG18_P2		DFE TAP 2'S COMPLIMENT READ BACK REG18 Path2
typedef union {
	struct {
		uint8_t DFE_F28_P2_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F29_P2_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F30_P2_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG18_P2_t;
__xdata __at( 0x27c4 ) volatile DFE_READ_2C_REG18_P2_t DFE_READ_2C_REG18_P2;
#define reg_DFE_F28_P2_2C_LANE_7_0  DFE_READ_2C_REG18_P2.BF.DFE_F28_P2_2C_LANE_7_0
#define reg_DFE_F29_P2_2C_LANE_7_0  DFE_READ_2C_REG18_P2.BF.DFE_F29_P2_2C_LANE_7_0
#define reg_DFE_F30_P2_2C_LANE_7_0  DFE_READ_2C_REG18_P2.BF.DFE_F30_P2_2C_LANE_7_0

// 0x03c8	DFE_READ_2C_REG0_P3		DFE TAP 2'S COMPLIMENT READ BACK REG0 Path3
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_P3_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_D_MID_P3_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_D_TOP_P3_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_DC_S_BOT_P3_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG0_P3_t;
__xdata __at( 0x27c8 ) volatile DFE_READ_2C_REG0_P3_t DFE_READ_2C_REG0_P3;
#define reg_DFE_DC_D_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG0_P3.BF.DFE_DC_D_BOT_P3_2C_LANE_7_0
#define reg_DFE_DC_D_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG0_P3.BF.DFE_DC_D_MID_P3_2C_LANE_7_0
#define reg_DFE_DC_D_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG0_P3.BF.DFE_DC_D_TOP_P3_2C_LANE_7_0
#define reg_DFE_DC_S_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG0_P3.BF.DFE_DC_S_BOT_P3_2C_LANE_7_0

// 0x03cc	DFE_READ_2C_REG1_P3		DFE TAP 2'S COMPLIMENT READ BACK REG1 Path3
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_P3_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_S_TOP_P3_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_E_P3_2C_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_VREF_BOT_P3_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG1_P3_t;
__xdata __at( 0x27cc ) volatile DFE_READ_2C_REG1_P3_t DFE_READ_2C_REG1_P3;
#define reg_DFE_DC_S_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG1_P3.BF.DFE_DC_S_MID_P3_2C_LANE_7_0
#define reg_DFE_DC_S_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG1_P3.BF.DFE_DC_S_TOP_P3_2C_LANE_7_0
#define reg_DFE_DC_E_P3_2C_LANE_7_0  DFE_READ_2C_REG1_P3.BF.DFE_DC_E_P3_2C_LANE_7_0
#define reg_DFE_VREF_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG1_P3.BF.DFE_VREF_BOT_P3_2C_LANE_7_0

// 0x03d0	DFE_READ_2C_REG2_P3		DFE TAP 2'S COMPLIMENT READ BACK REG2 Path3
typedef union {
	struct {
		uint8_t DFE_VREF_MID_P3_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_VREF_TOP_P3_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_D_BOT_P3_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_D_MID_P3_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG2_P3_t;
__xdata __at( 0x27d0 ) volatile DFE_READ_2C_REG2_P3_t DFE_READ_2C_REG2_P3;
#define reg_DFE_VREF_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG2_P3.BF.DFE_VREF_MID_P3_2C_LANE_7_0
#define reg_DFE_VREF_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG2_P3.BF.DFE_VREF_TOP_P3_2C_LANE_7_0
#define reg_DFE_F0_D_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG2_P3.BF.DFE_F0_D_BOT_P3_2C_LANE_7_0
#define reg_DFE_F0_D_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG2_P3.BF.DFE_F0_D_MID_P3_2C_LANE_7_0

// 0x03d4	DFE_READ_2C_REG3_P3		DFE TAP 2'S COMPLIMENT READ BACK REG3 Path3
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P3_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F0_S_BOT_P3_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_S_MID_P3_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_S_TOP_P3_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG3_P3_t;
__xdata __at( 0x27d4 ) volatile DFE_READ_2C_REG3_P3_t DFE_READ_2C_REG3_P3;
#define reg_DFE_F0_D_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG3_P3.BF.DFE_F0_D_TOP_P3_2C_LANE_7_0
#define reg_DFE_F0_S_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG3_P3.BF.DFE_F0_S_BOT_P3_2C_LANE_7_0
#define reg_DFE_F0_S_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG3_P3.BF.DFE_F0_S_MID_P3_2C_LANE_7_0
#define reg_DFE_F0_S_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG3_P3.BF.DFE_F0_S_TOP_P3_2C_LANE_7_0

// 0x03d8	DFE_READ_2C_REG4_P3		DFE TAP 2'S COMPLIMENT READ BACK REG4 Path3
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P3_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_D_MID_P3_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_D_TOP_P3_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_S_BOT_P3_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG4_P3_t;
__xdata __at( 0x27d8 ) volatile DFE_READ_2C_REG4_P3_t DFE_READ_2C_REG4_P3;
#define reg_DFE_F2_D_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG4_P3.BF.DFE_F2_D_BOT_P3_2C_LANE_7_0
#define reg_DFE_F2_D_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG4_P3.BF.DFE_F2_D_MID_P3_2C_LANE_7_0
#define reg_DFE_F2_D_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG4_P3.BF.DFE_F2_D_TOP_P3_2C_LANE_7_0
#define reg_DFE_F2_S_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG4_P3.BF.DFE_F2_S_BOT_P3_2C_LANE_7_0

// 0x03dc	DFE_READ_2C_REG5_P3		DFE TAP 2'S COMPLIMENT READ BACK REG5 Path3
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P3_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_S_TOP_P3_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_D_BOT_P3_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_D_MID_P3_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG5_P3_t;
__xdata __at( 0x27dc ) volatile DFE_READ_2C_REG5_P3_t DFE_READ_2C_REG5_P3;
#define reg_DFE_F2_S_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG5_P3.BF.DFE_F2_S_MID_P3_2C_LANE_7_0
#define reg_DFE_F2_S_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG5_P3.BF.DFE_F2_S_TOP_P3_2C_LANE_7_0
#define reg_DFE_F3_D_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG5_P3.BF.DFE_F3_D_BOT_P3_2C_LANE_7_0
#define reg_DFE_F3_D_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG5_P3.BF.DFE_F3_D_MID_P3_2C_LANE_7_0

// 0x03e0	DFE_READ_2C_REG6_P3		DFE TAP 2'S COMPLIMENT READ BACK REG6 Path3
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P3_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F3_S_BOT_P3_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_S_MID_P3_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_S_TOP_P3_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG6_P3_t;
__xdata __at( 0x27e0 ) volatile DFE_READ_2C_REG6_P3_t DFE_READ_2C_REG6_P3;
#define reg_DFE_F3_D_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG6_P3.BF.DFE_F3_D_TOP_P3_2C_LANE_7_0
#define reg_DFE_F3_S_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG6_P3.BF.DFE_F3_S_BOT_P3_2C_LANE_7_0
#define reg_DFE_F3_S_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG6_P3.BF.DFE_F3_S_MID_P3_2C_LANE_7_0
#define reg_DFE_F3_S_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG6_P3.BF.DFE_F3_S_TOP_P3_2C_LANE_7_0

// 0x03e4	DFE_READ_2C_REG7_P3		DFE TAP 2'S COMPLIMENT READ BACK REG7 Path3
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P3_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_D_MID_P3_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F4_D_TOP_P3_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F4_S_BOT_P3_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG7_P3_t;
__xdata __at( 0x27e4 ) volatile DFE_READ_2C_REG7_P3_t DFE_READ_2C_REG7_P3;
#define reg_DFE_F4_D_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG7_P3.BF.DFE_F4_D_BOT_P3_2C_LANE_7_0
#define reg_DFE_F4_D_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG7_P3.BF.DFE_F4_D_MID_P3_2C_LANE_7_0
#define reg_DFE_F4_D_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG7_P3.BF.DFE_F4_D_TOP_P3_2C_LANE_7_0
#define reg_DFE_F4_S_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG7_P3.BF.DFE_F4_S_BOT_P3_2C_LANE_7_0

// 0x03e8	DFE_READ_2C_REG8_P3		DFE TAP 2'S COMPLIMENT READ BACK REG8 Path3
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P3_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_S_TOP_P3_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F5_BOT_P3_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F5_MID_P3_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG8_P3_t;
__xdata __at( 0x27e8 ) volatile DFE_READ_2C_REG8_P3_t DFE_READ_2C_REG8_P3;
#define reg_DFE_F4_S_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG8_P3.BF.DFE_F4_S_MID_P3_2C_LANE_7_0
#define reg_DFE_F4_S_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG8_P3.BF.DFE_F4_S_TOP_P3_2C_LANE_7_0
#define reg_DFE_F5_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG8_P3.BF.DFE_F5_BOT_P3_2C_LANE_7_0
#define reg_DFE_F5_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG8_P3.BF.DFE_F5_MID_P3_2C_LANE_7_0

// 0x03ec	DFE_READ_2C_REG9_P3		DFE TAP 2'S COMPLIMENT READ BACK REG9 Path3
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P3_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F6_BOT_P3_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F6_MID_P3_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F6_TOP_P3_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG9_P3_t;
__xdata __at( 0x27ec ) volatile DFE_READ_2C_REG9_P3_t DFE_READ_2C_REG9_P3;
#define reg_DFE_F5_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG9_P3.BF.DFE_F5_TOP_P3_2C_LANE_7_0
#define reg_DFE_F6_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG9_P3.BF.DFE_F6_BOT_P3_2C_LANE_7_0
#define reg_DFE_F6_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG9_P3.BF.DFE_F6_MID_P3_2C_LANE_7_0
#define reg_DFE_F6_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG9_P3.BF.DFE_F6_TOP_P3_2C_LANE_7_0

// 0x03f0	DFE_READ_2C_REG10_P3		DFE TAP 2'S COMPLIMENT READ BACK REG10 Path3
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P3_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F7_MID_P3_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F7_TOP_P3_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F8_BOT_P3_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG10_P3_t;
__xdata __at( 0x27f0 ) volatile DFE_READ_2C_REG10_P3_t DFE_READ_2C_REG10_P3;
#define reg_DFE_F7_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG10_P3.BF.DFE_F7_BOT_P3_2C_LANE_7_0
#define reg_DFE_F7_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG10_P3.BF.DFE_F7_MID_P3_2C_LANE_7_0
#define reg_DFE_F7_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG10_P3.BF.DFE_F7_TOP_P3_2C_LANE_7_0
#define reg_DFE_F8_BOT_P3_2C_LANE_7_0  DFE_READ_2C_REG10_P3.BF.DFE_F8_BOT_P3_2C_LANE_7_0

// 0x03f4	DFE_READ_2C_REG11_P3		DFE TAP 2'S COMPLIMENT READ BACK REG11 Path3
typedef union {
	struct {
		uint8_t DFE_F8_MID_P3_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F8_TOP_P3_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F9_LSB_P3_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F9_MSB_P3_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG11_P3_t;
__xdata __at( 0x27f4 ) volatile DFE_READ_2C_REG11_P3_t DFE_READ_2C_REG11_P3;
#define reg_DFE_F8_MID_P3_2C_LANE_7_0  DFE_READ_2C_REG11_P3.BF.DFE_F8_MID_P3_2C_LANE_7_0
#define reg_DFE_F8_TOP_P3_2C_LANE_7_0  DFE_READ_2C_REG11_P3.BF.DFE_F8_TOP_P3_2C_LANE_7_0
#define reg_DFE_F9_LSB_P3_2C_LANE_7_0  DFE_READ_2C_REG11_P3.BF.DFE_F9_LSB_P3_2C_LANE_7_0
#define reg_DFE_F9_MSB_P3_2C_LANE_7_0  DFE_READ_2C_REG11_P3.BF.DFE_F9_MSB_P3_2C_LANE_7_0

// 0x03f8	DFE_READ_2C_REG12_P3		DFE TAP 2'S COMPLIMENT READ BACK REG12 Path3
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P3_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F10_MSB_P3_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F11_P3_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F12_LSB_P3_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG12_P3_t;
__xdata __at( 0x27f8 ) volatile DFE_READ_2C_REG12_P3_t DFE_READ_2C_REG12_P3;
#define reg_DFE_F10_LSB_P3_2C_LANE_7_0  DFE_READ_2C_REG12_P3.BF.DFE_F10_LSB_P3_2C_LANE_7_0
#define reg_DFE_F10_MSB_P3_2C_LANE_7_0  DFE_READ_2C_REG12_P3.BF.DFE_F10_MSB_P3_2C_LANE_7_0
#define reg_DFE_F11_P3_2C_LANE_7_0  DFE_READ_2C_REG12_P3.BF.DFE_F11_P3_2C_LANE_7_0
#define reg_DFE_F12_LSB_P3_2C_LANE_7_0  DFE_READ_2C_REG12_P3.BF.DFE_F12_LSB_P3_2C_LANE_7_0

// 0x03fc	DFE_READ_2C_REG13_P3		DFE TAP 2'S COMPLIMENT READ BACK REG13 Path3
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P3_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F13_P3_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F14_LSB_P3_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F14_MSB_P3_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG13_P3_t;
__xdata __at( 0x27fc ) volatile DFE_READ_2C_REG13_P3_t DFE_READ_2C_REG13_P3;
#define reg_DFE_F12_MSB_P3_2C_LANE_7_0  DFE_READ_2C_REG13_P3.BF.DFE_F12_MSB_P3_2C_LANE_7_0
#define reg_DFE_F13_P3_2C_LANE_7_0  DFE_READ_2C_REG13_P3.BF.DFE_F13_P3_2C_LANE_7_0
#define reg_DFE_F14_LSB_P3_2C_LANE_7_0  DFE_READ_2C_REG13_P3.BF.DFE_F14_LSB_P3_2C_LANE_7_0
#define reg_DFE_F14_MSB_P3_2C_LANE_7_0  DFE_READ_2C_REG13_P3.BF.DFE_F14_MSB_P3_2C_LANE_7_0

// 0x0400	DFE_READ_2C_REG14_P3		DFE TAP 2'S COMPLIMENT READ BACK REG14 Path3
typedef union {
	struct {
		uint8_t DFE_F15_P3_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F16_LSB_P3_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F16_MSB_P3_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F17_P3_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG14_P3_t;
__xdata __at( 0x2800 ) volatile DFE_READ_2C_REG14_P3_t DFE_READ_2C_REG14_P3;
#define reg_DFE_F15_P3_2C_LANE_7_0  DFE_READ_2C_REG14_P3.BF.DFE_F15_P3_2C_LANE_7_0
#define reg_DFE_F16_LSB_P3_2C_LANE_7_0  DFE_READ_2C_REG14_P3.BF.DFE_F16_LSB_P3_2C_LANE_7_0
#define reg_DFE_F16_MSB_P3_2C_LANE_7_0  DFE_READ_2C_REG14_P3.BF.DFE_F16_MSB_P3_2C_LANE_7_0
#define reg_DFE_F17_P3_2C_LANE_7_0  DFE_READ_2C_REG14_P3.BF.DFE_F17_P3_2C_LANE_7_0

// 0x0404	DFE_READ_2C_REG15_P3		DFE TAP 2'S COMPLIMENT READ BACK REG15 Path3
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P3_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F18_MSB_P3_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F19_P3_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F20_LSB_P3_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG15_P3_t;
__xdata __at( 0x2804 ) volatile DFE_READ_2C_REG15_P3_t DFE_READ_2C_REG15_P3;
#define reg_DFE_F18_LSB_P3_2C_LANE_7_0  DFE_READ_2C_REG15_P3.BF.DFE_F18_LSB_P3_2C_LANE_7_0
#define reg_DFE_F18_MSB_P3_2C_LANE_7_0  DFE_READ_2C_REG15_P3.BF.DFE_F18_MSB_P3_2C_LANE_7_0
#define reg_DFE_F19_P3_2C_LANE_7_0  DFE_READ_2C_REG15_P3.BF.DFE_F19_P3_2C_LANE_7_0
#define reg_DFE_F20_LSB_P3_2C_LANE_7_0  DFE_READ_2C_REG15_P3.BF.DFE_F20_LSB_P3_2C_LANE_7_0

// 0x0408	DFE_READ_2C_REG16_P3		DFE TAP 2'S COMPLIMENT READ BACK REG16 Path3
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P3_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F21_P3_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F22_P3_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F23_P3_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG16_P3_t;
__xdata __at( 0x2808 ) volatile DFE_READ_2C_REG16_P3_t DFE_READ_2C_REG16_P3;
#define reg_DFE_F20_MSB_P3_2C_LANE_7_0  DFE_READ_2C_REG16_P3.BF.DFE_F20_MSB_P3_2C_LANE_7_0
#define reg_DFE_F21_P3_2C_LANE_7_0  DFE_READ_2C_REG16_P3.BF.DFE_F21_P3_2C_LANE_7_0
#define reg_DFE_F22_P3_2C_LANE_7_0  DFE_READ_2C_REG16_P3.BF.DFE_F22_P3_2C_LANE_7_0
#define reg_DFE_F23_P3_2C_LANE_7_0  DFE_READ_2C_REG16_P3.BF.DFE_F23_P3_2C_LANE_7_0

// 0x040c	DFE_READ_2C_REG17_P3		DFE TAP 2'S COMPLIMENT READ BACK REG17 Path3
typedef union {
	struct {
		uint8_t DFE_F24_P3_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F25_P3_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F26_P3_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F27_P3_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG17_P3_t;
__xdata __at( 0x280c ) volatile DFE_READ_2C_REG17_P3_t DFE_READ_2C_REG17_P3;
#define reg_DFE_F24_P3_2C_LANE_7_0  DFE_READ_2C_REG17_P3.BF.DFE_F24_P3_2C_LANE_7_0
#define reg_DFE_F25_P3_2C_LANE_7_0  DFE_READ_2C_REG17_P3.BF.DFE_F25_P3_2C_LANE_7_0
#define reg_DFE_F26_P3_2C_LANE_7_0  DFE_READ_2C_REG17_P3.BF.DFE_F26_P3_2C_LANE_7_0
#define reg_DFE_F27_P3_2C_LANE_7_0  DFE_READ_2C_REG17_P3.BF.DFE_F27_P3_2C_LANE_7_0

// 0x0410	DFE_READ_2C_REG18_P3		DFE TAP 2'S COMPLIMENT READ BACK REG18 Path3
typedef union {
	struct {
		uint8_t DFE_F28_P3_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F29_P3_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F30_P3_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG18_P3_t;
__xdata __at( 0x2810 ) volatile DFE_READ_2C_REG18_P3_t DFE_READ_2C_REG18_P3;
#define reg_DFE_F28_P3_2C_LANE_7_0  DFE_READ_2C_REG18_P3.BF.DFE_F28_P3_2C_LANE_7_0
#define reg_DFE_F29_P3_2C_LANE_7_0  DFE_READ_2C_REG18_P3.BF.DFE_F29_P3_2C_LANE_7_0
#define reg_DFE_F30_P3_2C_LANE_7_0  DFE_READ_2C_REG18_P3.BF.DFE_F30_P3_2C_LANE_7_0

// 0x0414	DFE_READ_2C_REG0_P4		DFE TAP 2'S COMPLIMENT READ BACK REG0 Path4
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_P4_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_D_MID_P4_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_D_TOP_P4_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_DC_S_BOT_P4_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG0_P4_t;
__xdata __at( 0x2814 ) volatile DFE_READ_2C_REG0_P4_t DFE_READ_2C_REG0_P4;
#define reg_DFE_DC_D_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG0_P4.BF.DFE_DC_D_BOT_P4_2C_LANE_7_0
#define reg_DFE_DC_D_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG0_P4.BF.DFE_DC_D_MID_P4_2C_LANE_7_0
#define reg_DFE_DC_D_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG0_P4.BF.DFE_DC_D_TOP_P4_2C_LANE_7_0
#define reg_DFE_DC_S_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG0_P4.BF.DFE_DC_S_BOT_P4_2C_LANE_7_0

// 0x0418	DFE_READ_2C_REG1_P4		DFE TAP 2'S COMPLIMENT READ BACK REG1 Path4
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_P4_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_S_TOP_P4_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_E_P4_2C_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_VREF_BOT_P4_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG1_P4_t;
__xdata __at( 0x2818 ) volatile DFE_READ_2C_REG1_P4_t DFE_READ_2C_REG1_P4;
#define reg_DFE_DC_S_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG1_P4.BF.DFE_DC_S_MID_P4_2C_LANE_7_0
#define reg_DFE_DC_S_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG1_P4.BF.DFE_DC_S_TOP_P4_2C_LANE_7_0
#define reg_DFE_DC_E_P4_2C_LANE_7_0  DFE_READ_2C_REG1_P4.BF.DFE_DC_E_P4_2C_LANE_7_0
#define reg_DFE_VREF_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG1_P4.BF.DFE_VREF_BOT_P4_2C_LANE_7_0

// 0x041c	DFE_READ_2C_REG2_P4		DFE TAP 2'S COMPLIMENT READ BACK REG2 Path4
typedef union {
	struct {
		uint8_t DFE_VREF_MID_P4_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_VREF_TOP_P4_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_D_BOT_P4_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_D_MID_P4_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG2_P4_t;
__xdata __at( 0x281c ) volatile DFE_READ_2C_REG2_P4_t DFE_READ_2C_REG2_P4;
#define reg_DFE_VREF_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG2_P4.BF.DFE_VREF_MID_P4_2C_LANE_7_0
#define reg_DFE_VREF_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG2_P4.BF.DFE_VREF_TOP_P4_2C_LANE_7_0
#define reg_DFE_F0_D_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG2_P4.BF.DFE_F0_D_BOT_P4_2C_LANE_7_0
#define reg_DFE_F0_D_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG2_P4.BF.DFE_F0_D_MID_P4_2C_LANE_7_0

// 0x0420	DFE_READ_2C_REG3_P4		DFE TAP 2'S COMPLIMENT READ BACK REG3 Path4
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_P4_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F0_S_BOT_P4_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_S_MID_P4_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_S_TOP_P4_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG3_P4_t;
__xdata __at( 0x2820 ) volatile DFE_READ_2C_REG3_P4_t DFE_READ_2C_REG3_P4;
#define reg_DFE_F0_D_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG3_P4.BF.DFE_F0_D_TOP_P4_2C_LANE_7_0
#define reg_DFE_F0_S_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG3_P4.BF.DFE_F0_S_BOT_P4_2C_LANE_7_0
#define reg_DFE_F0_S_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG3_P4.BF.DFE_F0_S_MID_P4_2C_LANE_7_0
#define reg_DFE_F0_S_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG3_P4.BF.DFE_F0_S_TOP_P4_2C_LANE_7_0

// 0x0424	DFE_READ_2C_REG4_P4		DFE TAP 2'S COMPLIMENT READ BACK REG4 Path4
typedef union {
	struct {
		uint8_t DFE_F2_D_BOT_P4_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_D_MID_P4_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_D_TOP_P4_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_S_BOT_P4_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG4_P4_t;
__xdata __at( 0x2824 ) volatile DFE_READ_2C_REG4_P4_t DFE_READ_2C_REG4_P4;
#define reg_DFE_F2_D_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG4_P4.BF.DFE_F2_D_BOT_P4_2C_LANE_7_0
#define reg_DFE_F2_D_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG4_P4.BF.DFE_F2_D_MID_P4_2C_LANE_7_0
#define reg_DFE_F2_D_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG4_P4.BF.DFE_F2_D_TOP_P4_2C_LANE_7_0
#define reg_DFE_F2_S_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG4_P4.BF.DFE_F2_S_BOT_P4_2C_LANE_7_0

// 0x0428	DFE_READ_2C_REG5_P4		DFE TAP 2'S COMPLIMENT READ BACK REG5 Path4
typedef union {
	struct {
		uint8_t DFE_F2_S_MID_P4_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_S_TOP_P4_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_D_BOT_P4_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_D_MID_P4_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG5_P4_t;
__xdata __at( 0x2828 ) volatile DFE_READ_2C_REG5_P4_t DFE_READ_2C_REG5_P4;
#define reg_DFE_F2_S_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG5_P4.BF.DFE_F2_S_MID_P4_2C_LANE_7_0
#define reg_DFE_F2_S_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG5_P4.BF.DFE_F2_S_TOP_P4_2C_LANE_7_0
#define reg_DFE_F3_D_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG5_P4.BF.DFE_F3_D_BOT_P4_2C_LANE_7_0
#define reg_DFE_F3_D_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG5_P4.BF.DFE_F3_D_MID_P4_2C_LANE_7_0

// 0x042c	DFE_READ_2C_REG6_P4		DFE TAP 2'S COMPLIMENT READ BACK REG6 Path4
typedef union {
	struct {
		uint8_t DFE_F3_D_TOP_P4_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F3_S_BOT_P4_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_S_MID_P4_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_S_TOP_P4_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG6_P4_t;
__xdata __at( 0x282c ) volatile DFE_READ_2C_REG6_P4_t DFE_READ_2C_REG6_P4;
#define reg_DFE_F3_D_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG6_P4.BF.DFE_F3_D_TOP_P4_2C_LANE_7_0
#define reg_DFE_F3_S_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG6_P4.BF.DFE_F3_S_BOT_P4_2C_LANE_7_0
#define reg_DFE_F3_S_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG6_P4.BF.DFE_F3_S_MID_P4_2C_LANE_7_0
#define reg_DFE_F3_S_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG6_P4.BF.DFE_F3_S_TOP_P4_2C_LANE_7_0

// 0x0430	DFE_READ_2C_REG7_P4		DFE TAP 2'S COMPLIMENT READ BACK REG7 Path4
typedef union {
	struct {
		uint8_t DFE_F4_D_BOT_P4_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_D_MID_P4_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F4_D_TOP_P4_2C_LANE_7_0              : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F4_S_BOT_P4_2C_LANE_7_0              : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG7_P4_t;
__xdata __at( 0x2830 ) volatile DFE_READ_2C_REG7_P4_t DFE_READ_2C_REG7_P4;
#define reg_DFE_F4_D_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG7_P4.BF.DFE_F4_D_BOT_P4_2C_LANE_7_0
#define reg_DFE_F4_D_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG7_P4.BF.DFE_F4_D_MID_P4_2C_LANE_7_0
#define reg_DFE_F4_D_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG7_P4.BF.DFE_F4_D_TOP_P4_2C_LANE_7_0
#define reg_DFE_F4_S_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG7_P4.BF.DFE_F4_S_BOT_P4_2C_LANE_7_0

// 0x0434	DFE_READ_2C_REG8_P4		DFE TAP 2'S COMPLIMENT READ BACK REG8 Path4
typedef union {
	struct {
		uint8_t DFE_F4_S_MID_P4_2C_LANE_7_0              : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_S_TOP_P4_2C_LANE_7_0              : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F5_BOT_P4_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F5_MID_P4_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG8_P4_t;
__xdata __at( 0x2834 ) volatile DFE_READ_2C_REG8_P4_t DFE_READ_2C_REG8_P4;
#define reg_DFE_F4_S_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG8_P4.BF.DFE_F4_S_MID_P4_2C_LANE_7_0
#define reg_DFE_F4_S_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG8_P4.BF.DFE_F4_S_TOP_P4_2C_LANE_7_0
#define reg_DFE_F5_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG8_P4.BF.DFE_F5_BOT_P4_2C_LANE_7_0
#define reg_DFE_F5_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG8_P4.BF.DFE_F5_MID_P4_2C_LANE_7_0

// 0x0438	DFE_READ_2C_REG9_P4		DFE TAP 2'S COMPLIMENT READ BACK REG9 Path4
typedef union {
	struct {
		uint8_t DFE_F5_TOP_P4_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F6_BOT_P4_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F6_MID_P4_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F6_TOP_P4_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG9_P4_t;
__xdata __at( 0x2838 ) volatile DFE_READ_2C_REG9_P4_t DFE_READ_2C_REG9_P4;
#define reg_DFE_F5_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG9_P4.BF.DFE_F5_TOP_P4_2C_LANE_7_0
#define reg_DFE_F6_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG9_P4.BF.DFE_F6_BOT_P4_2C_LANE_7_0
#define reg_DFE_F6_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG9_P4.BF.DFE_F6_MID_P4_2C_LANE_7_0
#define reg_DFE_F6_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG9_P4.BF.DFE_F6_TOP_P4_2C_LANE_7_0

// 0x043c	DFE_READ_2C_REG10_P4		DFE TAP 2'S COMPLIMENT READ BACK REG10 Path4
typedef union {
	struct {
		uint8_t DFE_F7_BOT_P4_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F7_MID_P4_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F7_TOP_P4_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F8_BOT_P4_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG10_P4_t;
__xdata __at( 0x283c ) volatile DFE_READ_2C_REG10_P4_t DFE_READ_2C_REG10_P4;
#define reg_DFE_F7_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG10_P4.BF.DFE_F7_BOT_P4_2C_LANE_7_0
#define reg_DFE_F7_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG10_P4.BF.DFE_F7_MID_P4_2C_LANE_7_0
#define reg_DFE_F7_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG10_P4.BF.DFE_F7_TOP_P4_2C_LANE_7_0
#define reg_DFE_F8_BOT_P4_2C_LANE_7_0  DFE_READ_2C_REG10_P4.BF.DFE_F8_BOT_P4_2C_LANE_7_0

// 0x0440	DFE_READ_2C_REG11_P4		DFE TAP 2'S COMPLIMENT READ BACK REG11 Path4
typedef union {
	struct {
		uint8_t DFE_F8_MID_P4_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F8_TOP_P4_2C_LANE_7_0                : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F9_LSB_P4_2C_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F9_MSB_P4_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG11_P4_t;
__xdata __at( 0x2840 ) volatile DFE_READ_2C_REG11_P4_t DFE_READ_2C_REG11_P4;
#define reg_DFE_F8_MID_P4_2C_LANE_7_0  DFE_READ_2C_REG11_P4.BF.DFE_F8_MID_P4_2C_LANE_7_0
#define reg_DFE_F8_TOP_P4_2C_LANE_7_0  DFE_READ_2C_REG11_P4.BF.DFE_F8_TOP_P4_2C_LANE_7_0
#define reg_DFE_F9_LSB_P4_2C_LANE_7_0  DFE_READ_2C_REG11_P4.BF.DFE_F9_LSB_P4_2C_LANE_7_0
#define reg_DFE_F9_MSB_P4_2C_LANE_7_0  DFE_READ_2C_REG11_P4.BF.DFE_F9_MSB_P4_2C_LANE_7_0

// 0x0444	DFE_READ_2C_REG12_P4		DFE TAP 2'S COMPLIMENT READ BACK REG12 Path4
typedef union {
	struct {
		uint8_t DFE_F10_LSB_P4_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F10_MSB_P4_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F11_P4_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F12_LSB_P4_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG12_P4_t;
__xdata __at( 0x2844 ) volatile DFE_READ_2C_REG12_P4_t DFE_READ_2C_REG12_P4;
#define reg_DFE_F10_LSB_P4_2C_LANE_7_0  DFE_READ_2C_REG12_P4.BF.DFE_F10_LSB_P4_2C_LANE_7_0
#define reg_DFE_F10_MSB_P4_2C_LANE_7_0  DFE_READ_2C_REG12_P4.BF.DFE_F10_MSB_P4_2C_LANE_7_0
#define reg_DFE_F11_P4_2C_LANE_7_0  DFE_READ_2C_REG12_P4.BF.DFE_F11_P4_2C_LANE_7_0
#define reg_DFE_F12_LSB_P4_2C_LANE_7_0  DFE_READ_2C_REG12_P4.BF.DFE_F12_LSB_P4_2C_LANE_7_0

// 0x0448	DFE_READ_2C_REG13_P4		DFE TAP 2'S COMPLIMENT READ BACK REG13 Path4
typedef union {
	struct {
		uint8_t DFE_F12_MSB_P4_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F13_P4_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F14_LSB_P4_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F14_MSB_P4_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG13_P4_t;
__xdata __at( 0x2848 ) volatile DFE_READ_2C_REG13_P4_t DFE_READ_2C_REG13_P4;
#define reg_DFE_F12_MSB_P4_2C_LANE_7_0  DFE_READ_2C_REG13_P4.BF.DFE_F12_MSB_P4_2C_LANE_7_0
#define reg_DFE_F13_P4_2C_LANE_7_0  DFE_READ_2C_REG13_P4.BF.DFE_F13_P4_2C_LANE_7_0
#define reg_DFE_F14_LSB_P4_2C_LANE_7_0  DFE_READ_2C_REG13_P4.BF.DFE_F14_LSB_P4_2C_LANE_7_0
#define reg_DFE_F14_MSB_P4_2C_LANE_7_0  DFE_READ_2C_REG13_P4.BF.DFE_F14_MSB_P4_2C_LANE_7_0

// 0x044c	DFE_READ_2C_REG14_P4		DFE TAP 2'S COMPLIMENT READ BACK REG14 Path4
typedef union {
	struct {
		uint8_t DFE_F15_P4_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F16_LSB_P4_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F16_MSB_P4_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F17_P4_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG14_P4_t;
__xdata __at( 0x284c ) volatile DFE_READ_2C_REG14_P4_t DFE_READ_2C_REG14_P4;
#define reg_DFE_F15_P4_2C_LANE_7_0  DFE_READ_2C_REG14_P4.BF.DFE_F15_P4_2C_LANE_7_0
#define reg_DFE_F16_LSB_P4_2C_LANE_7_0  DFE_READ_2C_REG14_P4.BF.DFE_F16_LSB_P4_2C_LANE_7_0
#define reg_DFE_F16_MSB_P4_2C_LANE_7_0  DFE_READ_2C_REG14_P4.BF.DFE_F16_MSB_P4_2C_LANE_7_0
#define reg_DFE_F17_P4_2C_LANE_7_0  DFE_READ_2C_REG14_P4.BF.DFE_F17_P4_2C_LANE_7_0

// 0x0450	DFE_READ_2C_REG15_P4		DFE TAP 2'S COMPLIMENT READ BACK REG15 Path4
typedef union {
	struct {
		uint8_t DFE_F18_LSB_P4_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F18_MSB_P4_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F19_P4_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F20_LSB_P4_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG15_P4_t;
__xdata __at( 0x2850 ) volatile DFE_READ_2C_REG15_P4_t DFE_READ_2C_REG15_P4;
#define reg_DFE_F18_LSB_P4_2C_LANE_7_0  DFE_READ_2C_REG15_P4.BF.DFE_F18_LSB_P4_2C_LANE_7_0
#define reg_DFE_F18_MSB_P4_2C_LANE_7_0  DFE_READ_2C_REG15_P4.BF.DFE_F18_MSB_P4_2C_LANE_7_0
#define reg_DFE_F19_P4_2C_LANE_7_0  DFE_READ_2C_REG15_P4.BF.DFE_F19_P4_2C_LANE_7_0
#define reg_DFE_F20_LSB_P4_2C_LANE_7_0  DFE_READ_2C_REG15_P4.BF.DFE_F20_LSB_P4_2C_LANE_7_0

// 0x0454	DFE_READ_2C_REG16_P4		DFE TAP 2'S COMPLIMENT READ BACK REG16 Path4
typedef union {
	struct {
		uint8_t DFE_F20_MSB_P4_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F21_P4_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F22_P4_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F23_P4_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG16_P4_t;
__xdata __at( 0x2854 ) volatile DFE_READ_2C_REG16_P4_t DFE_READ_2C_REG16_P4;
#define reg_DFE_F20_MSB_P4_2C_LANE_7_0  DFE_READ_2C_REG16_P4.BF.DFE_F20_MSB_P4_2C_LANE_7_0
#define reg_DFE_F21_P4_2C_LANE_7_0  DFE_READ_2C_REG16_P4.BF.DFE_F21_P4_2C_LANE_7_0
#define reg_DFE_F22_P4_2C_LANE_7_0  DFE_READ_2C_REG16_P4.BF.DFE_F22_P4_2C_LANE_7_0
#define reg_DFE_F23_P4_2C_LANE_7_0  DFE_READ_2C_REG16_P4.BF.DFE_F23_P4_2C_LANE_7_0

// 0x0458	DFE_READ_2C_REG17_P4		DFE TAP 2'S COMPLIMENT READ BACK REG17 Path4
typedef union {
	struct {
		uint8_t DFE_F24_P4_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F25_P4_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F26_P4_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F27_P4_2C_LANE_7_0                   : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG17_P4_t;
__xdata __at( 0x2858 ) volatile DFE_READ_2C_REG17_P4_t DFE_READ_2C_REG17_P4;
#define reg_DFE_F24_P4_2C_LANE_7_0  DFE_READ_2C_REG17_P4.BF.DFE_F24_P4_2C_LANE_7_0
#define reg_DFE_F25_P4_2C_LANE_7_0  DFE_READ_2C_REG17_P4.BF.DFE_F25_P4_2C_LANE_7_0
#define reg_DFE_F26_P4_2C_LANE_7_0  DFE_READ_2C_REG17_P4.BF.DFE_F26_P4_2C_LANE_7_0
#define reg_DFE_F27_P4_2C_LANE_7_0  DFE_READ_2C_REG17_P4.BF.DFE_F27_P4_2C_LANE_7_0

// 0x045c	DFE_READ_2C_REG18_P4		DFE TAP 2'S COMPLIMENT READ BACK REG18 Path4
typedef union {
	struct {
		uint8_t DFE_F28_P4_2C_LANE_7_0                   : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F29_P4_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F30_P4_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG18_P4_t;
__xdata __at( 0x285c ) volatile DFE_READ_2C_REG18_P4_t DFE_READ_2C_REG18_P4;
#define reg_DFE_F28_P4_2C_LANE_7_0  DFE_READ_2C_REG18_P4.BF.DFE_F28_P4_2C_LANE_7_0
#define reg_DFE_F29_P4_2C_LANE_7_0  DFE_READ_2C_REG18_P4.BF.DFE_F29_P4_2C_LANE_7_0
#define reg_DFE_F30_P4_2C_LANE_7_0  DFE_READ_2C_REG18_P4.BF.DFE_F30_P4_2C_LANE_7_0

// 0x0500	EOM_ERR_REG00		EOM ERROR COUNT
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_TOP_P_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_TOP_P_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_TOP_P_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_TOP_P_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG00_t;
__xdata __at( 0x2900 ) volatile EOM_ERR_REG00_t EOM_ERR_REG00;
#define reg_EOM_ERR_CNT_TOP_P_LANE_31_0_b0  EOM_ERR_REG00.BF.EOM_ERR_CNT_TOP_P_LANE_31_0_b0
#define reg_EOM_ERR_CNT_TOP_P_LANE_31_0_b1  EOM_ERR_REG00.BF.EOM_ERR_CNT_TOP_P_LANE_31_0_b1
#define reg_EOM_ERR_CNT_TOP_P_LANE_31_0_b2  EOM_ERR_REG00.BF.EOM_ERR_CNT_TOP_P_LANE_31_0_b2
#define reg_EOM_ERR_CNT_TOP_P_LANE_31_0_b3  EOM_ERR_REG00.BF.EOM_ERR_CNT_TOP_P_LANE_31_0_b3

// 0x0504	EOM_ERR_REG01		EOM ERROR COUNT
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_MID_P_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_MID_P_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_MID_P_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_MID_P_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG01_t;
__xdata __at( 0x2904 ) volatile EOM_ERR_REG01_t EOM_ERR_REG01;
#define reg_EOM_ERR_CNT_MID_P_LANE_31_0_b0  EOM_ERR_REG01.BF.EOM_ERR_CNT_MID_P_LANE_31_0_b0
#define reg_EOM_ERR_CNT_MID_P_LANE_31_0_b1  EOM_ERR_REG01.BF.EOM_ERR_CNT_MID_P_LANE_31_0_b1
#define reg_EOM_ERR_CNT_MID_P_LANE_31_0_b2  EOM_ERR_REG01.BF.EOM_ERR_CNT_MID_P_LANE_31_0_b2
#define reg_EOM_ERR_CNT_MID_P_LANE_31_0_b3  EOM_ERR_REG01.BF.EOM_ERR_CNT_MID_P_LANE_31_0_b3

// 0x0508	EOM_ERR_REG02		EOM ERROR COUNT
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_BOT_P_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_BOT_P_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_BOT_P_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_BOT_P_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG02_t;
__xdata __at( 0x2908 ) volatile EOM_ERR_REG02_t EOM_ERR_REG02;
#define reg_EOM_ERR_CNT_BOT_P_LANE_31_0_b0  EOM_ERR_REG02.BF.EOM_ERR_CNT_BOT_P_LANE_31_0_b0
#define reg_EOM_ERR_CNT_BOT_P_LANE_31_0_b1  EOM_ERR_REG02.BF.EOM_ERR_CNT_BOT_P_LANE_31_0_b1
#define reg_EOM_ERR_CNT_BOT_P_LANE_31_0_b2  EOM_ERR_REG02.BF.EOM_ERR_CNT_BOT_P_LANE_31_0_b2
#define reg_EOM_ERR_CNT_BOT_P_LANE_31_0_b3  EOM_ERR_REG02.BF.EOM_ERR_CNT_BOT_P_LANE_31_0_b3

// 0x050c	EOM_ERR_REG10		EOM ERROR COUNT
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_TOP_N_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_TOP_N_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_TOP_N_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_TOP_N_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG10_t;
__xdata __at( 0x290c ) volatile EOM_ERR_REG10_t EOM_ERR_REG10;
#define reg_EOM_ERR_CNT_TOP_N_LANE_31_0_b0  EOM_ERR_REG10.BF.EOM_ERR_CNT_TOP_N_LANE_31_0_b0
#define reg_EOM_ERR_CNT_TOP_N_LANE_31_0_b1  EOM_ERR_REG10.BF.EOM_ERR_CNT_TOP_N_LANE_31_0_b1
#define reg_EOM_ERR_CNT_TOP_N_LANE_31_0_b2  EOM_ERR_REG10.BF.EOM_ERR_CNT_TOP_N_LANE_31_0_b2
#define reg_EOM_ERR_CNT_TOP_N_LANE_31_0_b3  EOM_ERR_REG10.BF.EOM_ERR_CNT_TOP_N_LANE_31_0_b3

// 0x0510	EOM_ERR_REG11		EOM ERROR COUNT
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_MID_N_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_MID_N_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_MID_N_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_MID_N_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG11_t;
__xdata __at( 0x2910 ) volatile EOM_ERR_REG11_t EOM_ERR_REG11;
#define reg_EOM_ERR_CNT_MID_N_LANE_31_0_b0  EOM_ERR_REG11.BF.EOM_ERR_CNT_MID_N_LANE_31_0_b0
#define reg_EOM_ERR_CNT_MID_N_LANE_31_0_b1  EOM_ERR_REG11.BF.EOM_ERR_CNT_MID_N_LANE_31_0_b1
#define reg_EOM_ERR_CNT_MID_N_LANE_31_0_b2  EOM_ERR_REG11.BF.EOM_ERR_CNT_MID_N_LANE_31_0_b2
#define reg_EOM_ERR_CNT_MID_N_LANE_31_0_b3  EOM_ERR_REG11.BF.EOM_ERR_CNT_MID_N_LANE_31_0_b3

// 0x0514	EOM_ERR_REG12		EOM ERROR COUNT
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_BOT_N_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_BOT_N_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_BOT_N_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_BOT_N_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG12_t;
__xdata __at( 0x2914 ) volatile EOM_ERR_REG12_t EOM_ERR_REG12;
#define reg_EOM_ERR_CNT_BOT_N_LANE_31_0_b0  EOM_ERR_REG12.BF.EOM_ERR_CNT_BOT_N_LANE_31_0_b0
#define reg_EOM_ERR_CNT_BOT_N_LANE_31_0_b1  EOM_ERR_REG12.BF.EOM_ERR_CNT_BOT_N_LANE_31_0_b1
#define reg_EOM_ERR_CNT_BOT_N_LANE_31_0_b2  EOM_ERR_REG12.BF.EOM_ERR_CNT_BOT_N_LANE_31_0_b2
#define reg_EOM_ERR_CNT_BOT_N_LANE_31_0_b3  EOM_ERR_REG12.BF.EOM_ERR_CNT_BOT_N_LANE_31_0_b3

// 0x0520	EOM_VLD_REG00		EOM VALID COUNT
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_TOP_P_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_TOP_P_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_TOP_P_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_TOP_P_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG00_t;
__xdata __at( 0x2920 ) volatile EOM_VLD_REG00_t EOM_VLD_REG00;
#define reg_EOM_VLD_CNT_TOP_P_LANE_31_0_b0  EOM_VLD_REG00.BF.EOM_VLD_CNT_TOP_P_LANE_31_0_b0
#define reg_EOM_VLD_CNT_TOP_P_LANE_31_0_b1  EOM_VLD_REG00.BF.EOM_VLD_CNT_TOP_P_LANE_31_0_b1
#define reg_EOM_VLD_CNT_TOP_P_LANE_31_0_b2  EOM_VLD_REG00.BF.EOM_VLD_CNT_TOP_P_LANE_31_0_b2
#define reg_EOM_VLD_CNT_TOP_P_LANE_31_0_b3  EOM_VLD_REG00.BF.EOM_VLD_CNT_TOP_P_LANE_31_0_b3

// 0x0524	EOM_VLD_REG01		EOM VALID COUNT
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_MID_P_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_MID_P_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_MID_P_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_MID_P_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG01_t;
__xdata __at( 0x2924 ) volatile EOM_VLD_REG01_t EOM_VLD_REG01;
#define reg_EOM_VLD_CNT_MID_P_LANE_31_0_b0  EOM_VLD_REG01.BF.EOM_VLD_CNT_MID_P_LANE_31_0_b0
#define reg_EOM_VLD_CNT_MID_P_LANE_31_0_b1  EOM_VLD_REG01.BF.EOM_VLD_CNT_MID_P_LANE_31_0_b1
#define reg_EOM_VLD_CNT_MID_P_LANE_31_0_b2  EOM_VLD_REG01.BF.EOM_VLD_CNT_MID_P_LANE_31_0_b2
#define reg_EOM_VLD_CNT_MID_P_LANE_31_0_b3  EOM_VLD_REG01.BF.EOM_VLD_CNT_MID_P_LANE_31_0_b3

// 0x0528	EOM_VLD_REG02		EOM VALID COUNT
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_BOT_P_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_BOT_P_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_BOT_P_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_BOT_P_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG02_t;
__xdata __at( 0x2928 ) volatile EOM_VLD_REG02_t EOM_VLD_REG02;
#define reg_EOM_VLD_CNT_BOT_P_LANE_31_0_b0  EOM_VLD_REG02.BF.EOM_VLD_CNT_BOT_P_LANE_31_0_b0
#define reg_EOM_VLD_CNT_BOT_P_LANE_31_0_b1  EOM_VLD_REG02.BF.EOM_VLD_CNT_BOT_P_LANE_31_0_b1
#define reg_EOM_VLD_CNT_BOT_P_LANE_31_0_b2  EOM_VLD_REG02.BF.EOM_VLD_CNT_BOT_P_LANE_31_0_b2
#define reg_EOM_VLD_CNT_BOT_P_LANE_31_0_b3  EOM_VLD_REG02.BF.EOM_VLD_CNT_BOT_P_LANE_31_0_b3

// 0x052c	EOM_VLD_REG10		EOM VALID COUNT
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_TOP_N_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_TOP_N_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_TOP_N_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_TOP_N_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG10_t;
__xdata __at( 0x292c ) volatile EOM_VLD_REG10_t EOM_VLD_REG10;
#define reg_EOM_VLD_CNT_TOP_N_LANE_31_0_b0  EOM_VLD_REG10.BF.EOM_VLD_CNT_TOP_N_LANE_31_0_b0
#define reg_EOM_VLD_CNT_TOP_N_LANE_31_0_b1  EOM_VLD_REG10.BF.EOM_VLD_CNT_TOP_N_LANE_31_0_b1
#define reg_EOM_VLD_CNT_TOP_N_LANE_31_0_b2  EOM_VLD_REG10.BF.EOM_VLD_CNT_TOP_N_LANE_31_0_b2
#define reg_EOM_VLD_CNT_TOP_N_LANE_31_0_b3  EOM_VLD_REG10.BF.EOM_VLD_CNT_TOP_N_LANE_31_0_b3

// 0x0530	EOM_VLD_REG11		EOM VALID COUNT
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_MID_N_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_MID_N_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_MID_N_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_MID_N_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG11_t;
__xdata __at( 0x2930 ) volatile EOM_VLD_REG11_t EOM_VLD_REG11;
#define reg_EOM_VLD_CNT_MID_N_LANE_31_0_b0  EOM_VLD_REG11.BF.EOM_VLD_CNT_MID_N_LANE_31_0_b0
#define reg_EOM_VLD_CNT_MID_N_LANE_31_0_b1  EOM_VLD_REG11.BF.EOM_VLD_CNT_MID_N_LANE_31_0_b1
#define reg_EOM_VLD_CNT_MID_N_LANE_31_0_b2  EOM_VLD_REG11.BF.EOM_VLD_CNT_MID_N_LANE_31_0_b2
#define reg_EOM_VLD_CNT_MID_N_LANE_31_0_b3  EOM_VLD_REG11.BF.EOM_VLD_CNT_MID_N_LANE_31_0_b3

// 0x0534	EOM_VLD_REG12		EOM VALID COUNT
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_BOT_N_LANE_31_0_b0           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_BOT_N_LANE_31_0_b1           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_BOT_N_LANE_31_0_b2           : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_BOT_N_LANE_31_0_b3           : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG12_t;
__xdata __at( 0x2934 ) volatile EOM_VLD_REG12_t EOM_VLD_REG12;
#define reg_EOM_VLD_CNT_BOT_N_LANE_31_0_b0  EOM_VLD_REG12.BF.EOM_VLD_CNT_BOT_N_LANE_31_0_b0
#define reg_EOM_VLD_CNT_BOT_N_LANE_31_0_b1  EOM_VLD_REG12.BF.EOM_VLD_CNT_BOT_N_LANE_31_0_b1
#define reg_EOM_VLD_CNT_BOT_N_LANE_31_0_b2  EOM_VLD_REG12.BF.EOM_VLD_CNT_BOT_N_LANE_31_0_b2
#define reg_EOM_VLD_CNT_BOT_N_LANE_31_0_b3  EOM_VLD_REG12.BF.EOM_VLD_CNT_BOT_N_LANE_31_0_b3

// 0x0538	EOM_VLD_MSB_REG0		EOM VALID COUNT MSB
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_BOT_P_LANE_39_32             : 8;	/*  [7:0]       r   0*/
		uint8_t EOM_VLD_CNT_MID_P_LANE_39_32             : 8;	/* [15:8]       r   0*/
		uint8_t EOM_VLD_CNT_TOP_P_LANE_39_32             : 8;	/*[23:16]       r   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_MSB_REG0_t;
__xdata __at( 0x2938 ) volatile EOM_VLD_MSB_REG0_t EOM_VLD_MSB_REG0;
#define reg_EOM_VLD_CNT_BOT_P_LANE_39_32  EOM_VLD_MSB_REG0.BF.EOM_VLD_CNT_BOT_P_LANE_39_32
#define reg_EOM_VLD_CNT_MID_P_LANE_39_32  EOM_VLD_MSB_REG0.BF.EOM_VLD_CNT_MID_P_LANE_39_32
#define reg_EOM_VLD_CNT_TOP_P_LANE_39_32  EOM_VLD_MSB_REG0.BF.EOM_VLD_CNT_TOP_P_LANE_39_32

// 0x053c	EOM_VLD_MSB_REG1		EOM VALID COUNT MSB
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_BOT_N_LANE_39_32             : 8;	/*  [7:0]       r   0*/
		uint8_t EOM_VLD_CNT_MID_N_LANE_39_32             : 8;	/* [15:8]       r   0*/
		uint8_t EOM_VLD_CNT_TOP_N_LANE_39_32             : 8;	/*[23:16]       r   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_MSB_REG1_t;
__xdata __at( 0x293c ) volatile EOM_VLD_MSB_REG1_t EOM_VLD_MSB_REG1;
#define reg_EOM_VLD_CNT_BOT_N_LANE_39_32  EOM_VLD_MSB_REG1.BF.EOM_VLD_CNT_BOT_N_LANE_39_32
#define reg_EOM_VLD_CNT_MID_N_LANE_39_32  EOM_VLD_MSB_REG1.BF.EOM_VLD_CNT_MID_N_LANE_39_32
#define reg_EOM_VLD_CNT_TOP_N_LANE_39_32  EOM_VLD_MSB_REG1.BF.EOM_VLD_CNT_TOP_N_LANE_39_32

// 0x0540	EOM_CTRL_REG0		EOM CONTROL REG
typedef union {
	struct {
		uint8_t DFE_EOM_SEL_LANE_7_0                     : 8;	/*  [7:0]     r/w 8'hff*/
		uint8_t EOM_CNT_CLR_LANE                         : 1;	/*      8     r/w   0*/
		uint8_t EOM_POL_FORCE_LANE                       : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:10]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_CTRL_REG0_t;
__xdata __at( 0x2940 ) volatile EOM_CTRL_REG0_t EOM_CTRL_REG0;
#define reg_DFE_EOM_SEL_LANE_7_0  EOM_CTRL_REG0.BF.DFE_EOM_SEL_LANE_7_0
#define reg_EOM_CNT_CLR_LANE  EOM_CTRL_REG0.BF.EOM_CNT_CLR_LANE
#define reg_EOM_POL_FORCE_LANE  EOM_CTRL_REG0.BF.EOM_POL_FORCE_LANE

#endif
