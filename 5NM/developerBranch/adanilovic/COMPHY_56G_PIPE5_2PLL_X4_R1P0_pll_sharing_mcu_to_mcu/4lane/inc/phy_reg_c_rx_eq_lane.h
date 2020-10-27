#ifndef PHY_REG_C_RX_EQ_LANE_H
#define PHY_REG_C_RX_EQ_LANE_H



// 0x0000	DFE_CTRL_REG0		DFE Control
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t DFE_ADAPT_SPLR_EN_LANE_3_0               : 4;	/*  [7:4]     r/w 4'hf*/
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
		uint8_t DFE_FAST_ABORT_DIS_LANE                  : 1;	/*     18     r/w   0*/
		uint8_t DFE_ADAPT_ADJ_VREF_DC_MID_EN_LANE        : 1;	/*     19     r/w   0*/
		uint8_t DFE_ADAPT_ADJ_VREF_DC_EN_LANE            : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_TAP_RESTORE_LANE                     : 1;	/*     24     r/w   0*/
		uint8_t DFE_TAP_REFRESH_LANE                     : 1;	/*     25     r/w   0*/
		uint8_t DFE_VREF_MODE_LANE_1_0                   : 2;	/*[27:26]     r/w 2'h1*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t DFE_EE_MODE_LANE                         : 1;	/*     30     r/w   0*/
		uint8_t DFE_EC_MODE_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG0_t;
__xdata __at( 0x4000 ) volatile DFE_CTRL_REG0_t DFE_CTRL_REG0;
#define reg_DFE_ADAPT_SPLR_EN_LANE_3_0  DFE_CTRL_REG0.BF.DFE_ADAPT_SPLR_EN_LANE_3_0
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
#define reg_DFE_FAST_ABORT_DIS_LANE  DFE_CTRL_REG0.BF.DFE_FAST_ABORT_DIS_LANE
#define reg_DFE_ADAPT_ADJ_VREF_DC_MID_EN_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_ADJ_VREF_DC_MID_EN_LANE
#define reg_DFE_ADAPT_ADJ_VREF_DC_EN_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_ADJ_VREF_DC_EN_LANE
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
		uint8_t DFE_FBMD_F0K_LANE                        : 1;	/*      2     r/w   1*/
		uint8_t DFE_FBMD_F0D_LANE                        : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t DFE_FBMD_EO_LANE                         : 1;	/*      6     r/w   0*/
		uint8_t DFE_FBMD_DS_LANE                         : 1;	/*      7     r/w   0*/
		uint8_t DFE_FBMD_F0_LANE                         : 1;	/*      8     r/w   0*/
		uint8_t DFE_FBMD_VREF_LANE                       : 1;	/*      9     r/w   0*/
		uint8_t DFE_LOWER_EO_EN_LANE                     : 1;	/*     10     r/w   1*/
		uint8_t DFE_UPPER_EO_EN_LANE                     : 1;	/*     11     r/w   1*/
		uint8_t DFE_TMB_VLD_MODE_F0_LANE                 : 1;	/*     12     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_F1_LANE                 : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_F2_LANE                 : 1;	/*     15     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_F0D_LANE                : 1;	/*     16     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_VREF_LANE               : 1;	/*     17     r/w   0*/
		uint8_t DFE_TMB_VLD_MODE_DC_LANE                 : 1;	/*     18     r/w   0*/
		uint8_t DFE_CMN_MODE_MLSB_LANE                   : 1;	/*     19     r/w   0*/
		uint8_t DFE_CMN_MODE_TMB_LANE                    : 1;	/*     20     r/w   0*/
		uint8_t DFE_F0D_DN1_NO_TRAN_ADAPT_EN_LANE        : 1;	/*     21     r/w   1*/
		uint8_t DFE_F0D_DN1_MSB_TRAN_ADAPT_EN_LANE       : 1;	/*     22     r/w   0*/
		uint8_t DFE_F0B_DN1_NO_TRAN_ADAPT_EN_LANE        : 1;	/*     23     r/w   1*/
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
__xdata __at( 0x4004 ) volatile DFE_CTRL_REG1_t DFE_CTRL_REG1;
#define reg_DFE_FBMD_DCE_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_DCE_LANE
#define reg_DFE_FBMD_DC_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_DC_LANE
#define reg_DFE_FBMD_F0K_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_F0K_LANE
#define reg_DFE_FBMD_F0D_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_F0D_LANE
#define reg_DFE_FBMD_EO_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_EO_LANE
#define reg_DFE_FBMD_DS_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_DS_LANE
#define reg_DFE_FBMD_F0_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_F0_LANE
#define reg_DFE_FBMD_VREF_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_VREF_LANE
#define reg_DFE_LOWER_EO_EN_LANE  DFE_CTRL_REG1.BF.DFE_LOWER_EO_EN_LANE
#define reg_DFE_UPPER_EO_EN_LANE  DFE_CTRL_REG1.BF.DFE_UPPER_EO_EN_LANE
#define reg_DFE_TMB_VLD_MODE_F0_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_F0_LANE
#define reg_DFE_TMB_VLD_MODE_F1_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_F1_LANE
#define reg_DFE_TMB_VLD_MODE_F2_LANE  DFE_CTRL_REG1.BF.DFE_TMB_VLD_MODE_F2_LANE
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
		uint8_t DFE_UPDATE_EN_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t DFE_UPDATE_EN_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t DFE_UPDATE_F_EN_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h00*/
		uint8_t RESERVED_22                              : 2;	/*[30:22]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:22]     r/w   0*/
		uint8_t DFE_UPDATED_LANE                         : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_CTRL_REG2_t;
__xdata __at( 0x4008 ) volatile DFE_CTRL_REG2_t DFE_CTRL_REG2;
#define reg_DFE_UPDATE_EN_LANE_15_0_b0  DFE_CTRL_REG2.BF.DFE_UPDATE_EN_LANE_15_0_b0
#define reg_DFE_UPDATE_EN_LANE_15_0_b1  DFE_CTRL_REG2.BF.DFE_UPDATE_EN_LANE_15_0_b1
#define reg_DFE_UPDATE_F_EN_LANE_5_0  DFE_CTRL_REG2.BF.DFE_UPDATE_F_EN_LANE_5_0
#define reg_DFE_UPDATED_LANE  DFE_CTRL_REG2.BF.DFE_UPDATED_LANE
#define reg_DFE_UPDATE_EN_LANE_15_0  DFE_CTRL_REG2.WT.W0

// 0x000c	DFE_CTRL_REG3		DFE Control
typedef union {
	struct {
		uint8_t DFE_FLOAT_SEL_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t DFE_CLR_FRAC_EN_LANE_1_0                 : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t DFE_VOTE_TOP_BOT_OUTER_LANE              : 1;	/*      7     r/w   1*/
		uint8_t DFE_DCE_DS_SEL_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_TMB_ERR_EN_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t DFE_TMB_ERR_EN_FIR_LANE_2_0              : 3;	/*[21:19]     r/w 3'h7*/
		uint8_t DFE_UPDATE_DC_EN_LANE                    : 1;	/*     22     r/w 1'h0*/
		uint8_t DFE_UPDATE_DCE_EN_LANE                   : 1;	/*     23     r/w 1'h0*/
		uint8_t DFE_UPDATE_EE_EN_LANE                    : 1;	/*     24     r/w 1'h0*/
		uint8_t DFE_UPDATE_VREF_EN_LANE                  : 1;	/*     25     r/w 1'h0*/
		uint8_t DFE_UPDATE_HN1_EN_LANE                   : 1;	/*     26     r/w 1'h0*/
		uint8_t DFE_UPDATE_HP1_EN_LANE                   : 1;	/*     27     r/w 1'h0*/
		uint8_t DFE_UPDATE_VREF_MID_EN_LANE              : 1;	/*     28     r/w 1'h0*/
		uint8_t DFE_DATA_F0_SEL_LANE_2_0                 : 3;	/*[31:29]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG3_t;
__xdata __at( 0x400c ) volatile DFE_CTRL_REG3_t DFE_CTRL_REG3;
#define reg_DFE_FLOAT_SEL_LANE_3_0  DFE_CTRL_REG3.BF.DFE_FLOAT_SEL_LANE_3_0
#define reg_DFE_CLR_FRAC_EN_LANE_1_0  DFE_CTRL_REG3.BF.DFE_CLR_FRAC_EN_LANE_1_0
#define reg_DFE_VOTE_TOP_BOT_OUTER_LANE  DFE_CTRL_REG3.BF.DFE_VOTE_TOP_BOT_OUTER_LANE
#define reg_DFE_DCE_DS_SEL_LANE  DFE_CTRL_REG3.BF.DFE_DCE_DS_SEL_LANE
#define reg_DFE_TMB_ERR_EN_LANE_2_0  DFE_CTRL_REG3.BF.DFE_TMB_ERR_EN_LANE_2_0
#define reg_DFE_TMB_ERR_EN_FIR_LANE_2_0  DFE_CTRL_REG3.BF.DFE_TMB_ERR_EN_FIR_LANE_2_0
#define reg_DFE_UPDATE_DC_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_DC_EN_LANE
#define reg_DFE_UPDATE_DCE_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_DCE_EN_LANE
#define reg_DFE_UPDATE_EE_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_EE_EN_LANE
#define reg_DFE_UPDATE_VREF_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_VREF_EN_LANE
#define reg_DFE_UPDATE_HN1_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_HN1_EN_LANE
#define reg_DFE_UPDATE_HP1_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_HP1_EN_LANE
#define reg_DFE_UPDATE_VREF_MID_EN_LANE  DFE_CTRL_REG3.BF.DFE_UPDATE_VREF_MID_EN_LANE
#define reg_DFE_DATA_F0_SEL_LANE_2_0  DFE_CTRL_REG3.BF.DFE_DATA_F0_SEL_LANE_2_0

// 0x0010	DFE_CTRL_REG4		DFE Control
typedef union {
	struct {
		uint8_t EYE_OPEN_LANE_5_0                        : 6;	/*  [5:0]     r/w   0*/
		uint8_t ANA_RX_SEL_MU_F_LANE                     : 1;	/*      6     r/w   1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
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
		uint8_t DFE_RT_SAT_VREF_LANE                     : 1;	/*     23       r   0*/
		uint8_t DFE_TAP_SETTLE_SCALE_LANE_1_0            : 2;	/*[25:24]     r/w   0*/
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
__xdata __at( 0x4010 ) volatile DFE_CTRL_REG4_t DFE_CTRL_REG4;
#define reg_EYE_OPEN_LANE_5_0  DFE_CTRL_REG4.BF.EYE_OPEN_LANE_5_0
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
#define reg_DFE_RT_SAT_VREF_LANE  DFE_CTRL_REG4.BF.DFE_RT_SAT_VREF_LANE
#define reg_DFE_TAP_SETTLE_SCALE_LANE_1_0  DFE_CTRL_REG4.BF.DFE_TAP_SETTLE_SCALE_LANE_1_0
#define reg_DFE_RT_SAT_F0_LANE  DFE_CTRL_REG4.BF.DFE_RT_SAT_F0_LANE
#define reg_DFE_LOCK_CLR_LANE  DFE_CTRL_REG4.BF.DFE_LOCK_CLR_LANE
#define reg_DFE_LOCK_LANE  DFE_CTRL_REG4.BF.DFE_LOCK_LANE
#define reg_DFE_DLY_SAT_VREF_LANE  DFE_CTRL_REG4.BF.DFE_DLY_SAT_VREF_LANE
#define reg_DFE_DLY_SAT_F0_LANE  DFE_CTRL_REG4.BF.DFE_DLY_SAT_F0_LANE
#define reg_DFE_TRACK_MODE_LANE  DFE_CTRL_REG4.BF.DFE_TRACK_MODE_LANE

// 0x0014	DFE_CTRL_REG5		Dfe_ctrl Output Override
typedef union {
	struct {
		uint8_t DFE_DIS_LANE                             : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_CTRL_BYPASS_LANE                     : 1;	/*      8     r/w   0*/
		uint8_t DFE_CTRL_ADAPT_LANE                      : 1;	/*      9     r/w   0*/
		uint8_t DFE_CTRL_POL2_LANE_2_0                   : 3;	/*[12:10]     r/w 3'h0*/
		uint8_t DFE_CTRL_SPLR_LANE_2_0                   : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t DFE_CTRL_FB_SEL_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t DFE_CTRL_POL0_LANE                       : 1;	/*     24     r/w   0*/
		uint8_t DFE_CTRL_POL1_LANE_2_0                   : 3;	/*[27:25]     r/w 3'h0*/
		uint8_t DFE_FSM_DEBUG_MODE_LANE                  : 1;	/*     28     r/w   0*/
		uint8_t DFE_FSM_DEBUG_NEXT_LANE                  : 1;	/*     29     r/w   0*/
		uint8_t DFE_FSM_DEBUG_PAUSE_LANE                 : 1;	/*     30       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG5_t;
__xdata __at( 0x4014 ) volatile DFE_CTRL_REG5_t DFE_CTRL_REG5;
#define reg_DFE_DIS_LANE  DFE_CTRL_REG5.BF.DFE_DIS_LANE
#define reg_DFE_CTRL_BYPASS_LANE  DFE_CTRL_REG5.BF.DFE_CTRL_BYPASS_LANE
#define reg_DFE_CTRL_ADAPT_LANE  DFE_CTRL_REG5.BF.DFE_CTRL_ADAPT_LANE
#define reg_DFE_CTRL_POL2_LANE_2_0  DFE_CTRL_REG5.BF.DFE_CTRL_POL2_LANE_2_0
#define reg_DFE_CTRL_SPLR_LANE_2_0  DFE_CTRL_REG5.BF.DFE_CTRL_SPLR_LANE_2_0
#define reg_DFE_CTRL_FB_SEL_LANE_7_0  DFE_CTRL_REG5.BF.DFE_CTRL_FB_SEL_LANE_7_0
#define reg_DFE_CTRL_POL0_LANE  DFE_CTRL_REG5.BF.DFE_CTRL_POL0_LANE
#define reg_DFE_CTRL_POL1_LANE_2_0  DFE_CTRL_REG5.BF.DFE_CTRL_POL1_LANE_2_0
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
__xdata __at( 0x4018 ) volatile DFE_CTRL_REG6_t DFE_CTRL_REG6;
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
		uint8_t DFE_CTRL_CLK_OFF_LANE                    : 1;	/*      3     r/w   0*/
		uint8_t DFE_CRO0_FIX_LANE                        : 1;	/*      4     r/w   1*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_CLK_ON_LANE                          : 1;	/*      8     r/w   0*/
		uint8_t INT_DFE_EN_LANE                          : 1;	/*      9       r   0*/
		uint8_t DFE_F0X_SEL_LANE_4_0                     : 5;	/*[14:10]     r/w 5'h1*/
		uint8_t DFE_F0X_PART_ATRAN_ADAPT_EN_LANE         : 1;	/*     15     r/w   0*/
		uint8_t DFE_F0X_FULL_ATRAN_ADAPT_EN_LANE         : 1;	/*     16     r/w   0*/
		uint8_t DFE_F0X_PART_TRAN_ADAPT_EN_LANE          : 1;	/*     17     r/w   0*/
		uint8_t DFE_F0X_FULL_TRAN_ADAPT_EN_LANE          : 1;	/*     18     r/w   1*/
		uint8_t RESERVED_19                              : 5;	/*[28:19]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/*[28:19]     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EQ_CLK_CTRL_t;
__xdata __at( 0x401c ) volatile RX_EQ_CLK_CTRL_t RX_EQ_CLK_CTRL;
#define reg_DFE_CLK_OFF_LANE  RX_EQ_CLK_CTRL.BF.DFE_CLK_OFF_LANE
#define reg_DFE_MCU_CLK_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_MCU_CLK_EN_LANE
#define reg_RESET_DFE_LANE  RX_EQ_CLK_CTRL.BF.RESET_DFE_LANE
#define reg_DFE_CTRL_CLK_OFF_LANE  RX_EQ_CLK_CTRL.BF.DFE_CTRL_CLK_OFF_LANE
#define reg_DFE_CRO0_FIX_LANE  RX_EQ_CLK_CTRL.BF.DFE_CRO0_FIX_LANE
#define reg_DFE_CLK_ON_LANE  RX_EQ_CLK_CTRL.BF.DFE_CLK_ON_LANE
#define reg_INT_DFE_EN_LANE  RX_EQ_CLK_CTRL.BF.INT_DFE_EN_LANE
#define reg_DFE_F0X_SEL_LANE_4_0  RX_EQ_CLK_CTRL.BF.DFE_F0X_SEL_LANE_4_0
#define reg_DFE_F0X_PART_ATRAN_ADAPT_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_F0X_PART_ATRAN_ADAPT_EN_LANE
#define reg_DFE_F0X_FULL_ATRAN_ADAPT_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_F0X_FULL_ATRAN_ADAPT_EN_LANE
#define reg_DFE_F0X_PART_TRAN_ADAPT_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_F0X_PART_TRAN_ADAPT_EN_LANE
#define reg_DFE_F0X_FULL_TRAN_ADAPT_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_F0X_FULL_TRAN_ADAPT_EN_LANE

// 0x0020	DFE_ANA_REG0		DFE To Analog Force
typedef union {
	struct {
		uint8_t DFE_CTRL_ANA_BYPASS_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t ANA_RX_DFE_FLOATING_SEL_FORCE_LANE       : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_E_FORCE_LANE : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_O_FORCE_LANE : 1;	/*      5     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_D_FORCE_LANE        : 1;	/*      6     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_S_FORCE_LANE        : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_D_E_FORCE_LANE      : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_D_O_FORCE_LANE      : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_S_E_FORCE_LANE      : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_S_O_FORCE_LANE      : 1;	/*     15     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_FORCE_LANE        : 1;	/*     16     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_FORCE_LANE        : 1;	/*     17     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_D_FORCE_LANE           : 1;	/*     18     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_S_FORCE_LANE           : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_D_FORCE_LANE           : 1;	/*     22     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_S_FORCE_LANE           : 1;	/*     23     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_FORCE_LANE           : 1;	/*     24     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_S_FORCE_LANE           : 1;	/*     25     r/w   0*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_ANA_REG0_t;
__xdata __at( 0x4020 ) volatile DFE_ANA_REG0_t DFE_ANA_REG0;
#define reg_DFE_CTRL_ANA_BYPASS_LANE  DFE_ANA_REG0.BF.DFE_CTRL_ANA_BYPASS_LANE
#define reg_ANA_RX_DFE_FLOATING_SEL_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_FLOATING_SEL_FORCE_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_E_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_E_FORCE_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_O_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_O_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_D_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_EN_D_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_S_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_EN_S_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_EN_D_E_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_EN_D_E_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_EN_D_O_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_EN_D_O_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_EN_S_E_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_EN_S_E_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_EN_S_O_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_EN_S_O_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_D_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_D_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_S_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_EN_S_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_D_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_D_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_S_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_S_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_D_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_S_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_D_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_D_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_S_FORCE_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_S_FORCE_LANE

// 0x0024	DFE_ANA_REG1		DFE To Analog Override 0
typedef union {
	struct {
		uint8_t ANA_RX_DFE_FLOATING_SEL_LANE_3_0         : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_E_LANE    : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_O_LANE    : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:8]     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_D_LANE_2_0             : 3;	/*[13:11]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[16:14]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*[16:14]     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_S_LANE_2_0             : 3;	/*[19:17]     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_LANE_2_0             : 3;	/*[22:20]     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_S_LANE_2_0             : 3;	/*[26:24]     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_D_LANE              : 1;	/*     27     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_S_LANE              : 1;	/*     28     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_D_LANE              : 1;	/*     29     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_EN_S_LANE              : 1;	/*     30     r/w   0*/
		uint8_t ANA_PU_DFE_LANE                          : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_ANA_REG1_t;
__xdata __at( 0x4024 ) volatile DFE_ANA_REG1_t DFE_ANA_REG1;
#define reg_ANA_RX_DFE_FLOATING_SEL_LANE_3_0  DFE_ANA_REG1.BF.ANA_RX_DFE_FLOATING_SEL_LANE_3_0
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_E_LANE  DFE_ANA_REG1.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_E_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_O_LANE  DFE_ANA_REG1.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_O_LANE
#define reg_ANA_RX_DFE_F1_POL_D_LANE_2_0  DFE_ANA_REG1.BF.ANA_RX_DFE_F1_POL_D_LANE_2_0
#define reg_ANA_RX_DFE_F1_POL_S_LANE_2_0  DFE_ANA_REG1.BF.ANA_RX_DFE_F1_POL_S_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_D_LANE_2_0  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_D_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_S_LANE_2_0  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_S_LANE_2_0
#define reg_ANA_RX_DFE_F0_POL_EN_D_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F0_POL_EN_D_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_S_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F0_POL_EN_S_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_D_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_EN_D_LANE
#define reg_ANA_RX_DFE_F2_POL_EN_S_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_EN_S_LANE
#define reg_ANA_PU_DFE_LANE  DFE_ANA_REG1.BF.ANA_PU_DFE_LANE

// 0x0028	DFE_ANA_REG2		DFE To Analog Override 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_D_E_LANE_2_0        : 3;	/*  [5:3]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [8:6]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*  [8:6]     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_D_O_LANE_2_0        : 3;	/* [11:9]     r/w   0*/
		uint8_t RESERVED_12                              : 3;	/*[14:12]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*[17:15]     r/w   0*/
		uint8_t RESERVED_16                              : 2;	/*[17:15]     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_S_E_LANE_2_0        : 3;	/*[20:18]     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_S_O_LANE_2_0        : 3;	/*[23:21]     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_D_LANE_2_0             : 3;	/*[26:24]     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_S_LANE_2_0             : 3;	/*[29:27]     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_ANA_REG2_t;
__xdata __at( 0x4028 ) volatile DFE_ANA_REG2_t DFE_ANA_REG2;
#define reg_ANA_RX_DFE_F1_POL_EN_D_E_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F1_POL_EN_D_E_LANE_2_0
#define reg_ANA_RX_DFE_F1_POL_EN_D_O_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F1_POL_EN_D_O_LANE_2_0
#define reg_ANA_RX_DFE_F1_POL_EN_S_E_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F1_POL_EN_S_E_LANE_2_0
#define reg_ANA_RX_DFE_F1_POL_EN_S_O_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F1_POL_EN_S_O_LANE_2_0
#define reg_ANA_RX_DFE_F0_POL_D_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F0_POL_D_LANE_2_0
#define reg_ANA_RX_DFE_F0_POL_S_LANE_2_0  DFE_ANA_REG2.BF.ANA_RX_DFE_F0_POL_S_LANE_2_0

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
__xdata __at( 0x402c ) volatile DFE_STEP_REG0_t DFE_STEP_REG0;
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
__xdata __at( 0x4030 ) volatile DFE_STEP_REG1_t DFE_STEP_REG1;
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
__xdata __at( 0x4034 ) volatile DFE_STEP_REG2_t DFE_STEP_REG2;
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
		uint8_t DFE_STEP_ACCU_F1_TUNE_LANE_3_0           : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_F1_TUNE_LANE_3_0           : 4;	/*[15:12]     r/w 4'h4*/
		uint8_t DFE_STEP_COARSE_F1_TUNE_LANE_3_0         : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t DFE_STEP_ACCU_EE_LANE_3_0                : 4;	/*[23:20]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_EE_LANE_3_0                : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t DFE_STEP_COARSE_EE_LANE_3_0              : 4;	/*[31:28]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG3_t;
__xdata __at( 0x4038 ) volatile DFE_STEP_REG3_t DFE_STEP_REG3;
#define reg_DFE_STEP_ACCU_FX3_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_ACCU_FX3_LANE_3_0
#define reg_DFE_STEP_FINE_FX3_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_FINE_FX3_LANE_3_0
#define reg_DFE_STEP_ACCU_F1_TUNE_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_ACCU_F1_TUNE_LANE_3_0
#define reg_DFE_STEP_FINE_F1_TUNE_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_FINE_F1_TUNE_LANE_3_0
#define reg_DFE_STEP_COARSE_F1_TUNE_LANE_3_0  DFE_STEP_REG3.BF.DFE_STEP_COARSE_F1_TUNE_LANE_3_0
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
		uint8_t DFE_F1_THRESH_TUNE_LANE_5_0              : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG4_t;
__xdata __at( 0x403c ) volatile DFE_STEP_REG4_t DFE_STEP_REG4;
#define reg_DFE_STEP_ACCU_VREF_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_ACCU_VREF_LANE_3_0
#define reg_DFE_STEP_FINE_VREF_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_FINE_VREF_LANE_3_0
#define reg_DFE_STEP_COARSE_VREF_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_COARSE_VREF_LANE_3_0
#define reg_DFE_STEP_ACCU_FIR_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_ACCU_FIR_LANE_3_0
#define reg_DFE_STEP_FINE_FIR_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_FINE_FIR_LANE_3_0
#define reg_DFE_STEP_COARSE_FIR_LANE_3_0  DFE_STEP_REG4.BF.DFE_STEP_COARSE_FIR_LANE_3_0
#define reg_DFE_F1_THRESH_TUNE_LANE_5_0  DFE_STEP_REG4.BF.DFE_F1_THRESH_TUNE_LANE_5_0

// 0x0040	DFE_STATIC_REG0		
typedef union {
	struct {
		uint8_t DFE_EO_UP_THRE_COARSE_LANE_4_0           : 5;	/*  [4:0]     r/w 5'h3*/
		uint8_t DFE_FR_EVEN_SEL_LANE                     : 1;	/*      5     r/w   1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_EO_UP_THRE_FINE_LANE_4_0             : 5;	/* [12:8]     r/w 5'h4*/
		uint8_t DFE_F1_THRESH_TUNE_EN_LANE               : 1;	/*     13     r/w   1*/
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
__xdata __at( 0x4040 ) volatile DFE_STATIC_REG0_t DFE_STATIC_REG0;
#define reg_DFE_EO_UP_THRE_COARSE_LANE_4_0  DFE_STATIC_REG0.BF.DFE_EO_UP_THRE_COARSE_LANE_4_0
#define reg_DFE_FR_EVEN_SEL_LANE  DFE_STATIC_REG0.BF.DFE_FR_EVEN_SEL_LANE
#define reg_DFE_EO_UP_THRE_FINE_LANE_4_0  DFE_STATIC_REG0.BF.DFE_EO_UP_THRE_FINE_LANE_4_0
#define reg_DFE_F1_THRESH_TUNE_EN_LANE  DFE_STATIC_REG0.BF.DFE_F1_THRESH_TUNE_EN_LANE
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
		uint8_t DFE_ANA_SETTLE_F1_TUNE_LANE_1_0          : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t DFE_ANA_SETTLE_F3TO15_LANE_1_0           : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t DFE_ANA_SETTLE_FIR_LANE_1_0              : 2;	/*  [7:6]     r/w 2'h2*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t DFE_ANA_SETTLE_F0TO2_LANE_1_0            : 2;	/*[13:12]     r/w 2'h2*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_ANA_SETTLE_PATHSWITCH_LANE_3_0       : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t DFE_ANA_SETTLE_PATHOFF_LANE_3_0          : 4;	/*[23:20]     r/w 4'h8*/
		uint8_t DFE_ANA_SETTLE_PATHON_LANE_6_0           : 7;	/*[30:24]     r/w 7'h8*/
		uint8_t DFE_FAST_SETTLE_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG1_t;
__xdata __at( 0x4044 ) volatile DFE_STATIC_REG1_t DFE_STATIC_REG1;
#define reg_DFE_ANA_SETTLE_DC_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_DC_LANE_1_0
#define reg_DFE_ANA_SETTLE_F1_TUNE_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_F1_TUNE_LANE_1_0
#define reg_DFE_ANA_SETTLE_F3TO15_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_F3TO15_LANE_1_0
#define reg_DFE_ANA_SETTLE_FIR_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_FIR_LANE_1_0
#define reg_DFE_ANA_SETTLE_F0TO2_LANE_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_F0TO2_LANE_1_0
#define reg_DFE_ANA_SETTLE_PATHSWITCH_LANE_3_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHSWITCH_LANE_3_0
#define reg_DFE_ANA_SETTLE_PATHOFF_LANE_3_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHOFF_LANE_3_0
#define reg_DFE_ANA_SETTLE_PATHON_LANE_6_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHON_LANE_6_0
#define reg_DFE_FAST_SETTLE_LANE  DFE_STATIC_REG1.BF.DFE_FAST_SETTLE_LANE

// 0x0048	DFE_STATIC_REG3		Polarity Flip Registers
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_E_XOR_LANE : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_O_XOR_LANE : 1;	/*      3     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_D_XOR_LANE_2_0         : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t RESERVED_7                               : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F2_POL_S_XOR_LANE_2_0         : 3;	/*[12:10]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F2_POL_D_XOR_LANE_2_0         : 3;	/*[15:13]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F0_POL_S_XOR_LANE_2_0         : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F1_POL_S_XOR_LANE_2_0         : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t RESERVED_22                              : 2;	/*[24:22]     r/w 3'h0*/
		uint8_t RESERVED_24                              : 1;	/*[24:22]     r/w 3'h0*/
		uint8_t ANA_RX_DFE_F1_POL_D_XOR_LANE_2_0         : 3;	/*[27:25]     r/w 3'h0*/
		uint8_t DFE_DC_SIGN_XOR_LANE                     : 1;	/*     28     r/w   1*/
		uint8_t DFE_DC_E_SIGN_XOR_LANE                   : 1;	/*     29     r/w   1*/
		uint8_t DFE_VREF_SIGN_XOR_LANE                   : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG3_t;
__xdata __at( 0x4048 ) volatile DFE_STATIC_REG3_t DFE_STATIC_REG3;
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_E_XOR_LANE  DFE_STATIC_REG3.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_E_XOR_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_O_XOR_LANE  DFE_STATIC_REG3.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_O_XOR_LANE
#define reg_ANA_RX_DFE_F0_POL_D_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F0_POL_D_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_S_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F2_POL_S_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F2_POL_D_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F2_POL_D_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F0_POL_S_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F0_POL_S_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F1_POL_S_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F1_POL_S_XOR_LANE_2_0
#define reg_ANA_RX_DFE_F1_POL_D_XOR_LANE_2_0  DFE_STATIC_REG3.BF.ANA_RX_DFE_F1_POL_D_XOR_LANE_2_0
#define reg_DFE_DC_SIGN_XOR_LANE  DFE_STATIC_REG3.BF.DFE_DC_SIGN_XOR_LANE
#define reg_DFE_DC_E_SIGN_XOR_LANE  DFE_STATIC_REG3.BF.DFE_DC_E_SIGN_XOR_LANE
#define reg_DFE_VREF_SIGN_XOR_LANE  DFE_STATIC_REG3.BF.DFE_VREF_SIGN_XOR_LANE

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
__xdata __at( 0x404c ) volatile DFE_STATIC_REG4_t DFE_STATIC_REG4;
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
__xdata __at( 0x4050 ) volatile DFE_STATIC_REG5_t DFE_STATIC_REG5;
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
__xdata __at( 0x4054 ) volatile DFE_STATIC_REG6_t DFE_STATIC_REG6;
#define reg_DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b0  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b0
#define reg_DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b1  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_VREF_TRAIN_LANE_11_0_b1
#define reg_DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b0  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b0
#define reg_DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b1  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_VREF_TRACK_LANE_11_0_b1

// 0x0058	DFE_STATIC_REG7		DFE Peak Threshold
typedef union {
	struct {
		uint8_t DFE_PEAK_DN_THRE_COARSE_LANE_4_0         : 5;	/*  [4:0]     r/w 5'h3*/
		uint8_t RESERVED_5                               : 3;	/* [18:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [18:5]     r/w   0*/
		uint8_t RESERVED_16                              : 3;	/* [18:5]     r/w   0*/
		uint8_t DFE_PEAK_DN_THRE_FINE_LANE_4_0           : 5;	/*[23:19]     r/w 5'h4*/
		uint8_t DFE_ANA_SETTLE_1NS_LANE_7_0              : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG7_t;
__xdata __at( 0x4058 ) volatile DFE_STATIC_REG7_t DFE_STATIC_REG7;
#define reg_DFE_PEAK_DN_THRE_COARSE_LANE_4_0  DFE_STATIC_REG7.BF.DFE_PEAK_DN_THRE_COARSE_LANE_4_0
#define reg_DFE_PEAK_DN_THRE_FINE_LANE_4_0  DFE_STATIC_REG7.BF.DFE_PEAK_DN_THRE_FINE_LANE_4_0
#define reg_DFE_ANA_SETTLE_1NS_LANE_7_0  DFE_STATIC_REG7.BF.DFE_ANA_SETTLE_1NS_LANE_7_0

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
__xdata __at( 0x405c ) volatile DFE_STATIC_REG8_t DFE_STATIC_REG8;
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
		uint8_t RESERVED_2                               : 2;	/*  [3:2]     r/w   0*/
		uint8_t UD_5_FLIP_LANE_1_0                       : 2;	/*  [5:4]     r/w   0*/
		uint8_t UD_6_FLIP_LANE_1_0                       : 2;	/*  [7:6]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t UD_7_FLIP_LANE_1_0                       : 2;	/*[11:10]     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t UD_8_FLIP_LANE_1_0                       : 2;	/*[14:13]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t UD_9_FLIP_LANE_1_0                       : 2;	/*[17:16]     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t UD_10_FLIP_LANE_1_0                      : 2;	/*[20:19]     r/w   0*/
		uint8_t UD_11_FLIP_LANE                          : 1;	/*     21     r/w   0*/
		uint8_t UD_12_FLIP_LANE                          : 1;	/*     22     r/w   0*/
		uint8_t UD_13_FLIP_LANE                          : 1;	/*     23     r/w   0*/
		uint8_t UD_14_FLIP_LANE                          : 1;	/*     24     r/w   0*/
		uint8_t UD_15_FLIP_LANE                          : 1;	/*     25     r/w   0*/
		uint8_t UD_F5_FLIP_LANE                          : 1;	/*     26     r/w   0*/
		uint8_t UD_F4_FLIP_LANE                          : 1;	/*     27     r/w   0*/
		uint8_t UD_F3_FLIP_LANE                          : 1;	/*     28     r/w   0*/
		uint8_t UD_F2_FLIP_LANE                          : 1;	/*     29     r/w   0*/
		uint8_t UD_F1_FLIP_LANE                          : 1;	/*     30     r/w   0*/
		uint8_t UD_F0_FLIP_LANE                          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG9_t;
__xdata __at( 0x4060 ) volatile DFE_STATIC_REG9_t DFE_STATIC_REG9;
#define reg_UD_5_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_5_FLIP_LANE_1_0
#define reg_UD_6_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_6_FLIP_LANE_1_0
#define reg_UD_7_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_7_FLIP_LANE_1_0
#define reg_UD_8_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_8_FLIP_LANE_1_0
#define reg_UD_9_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_9_FLIP_LANE_1_0
#define reg_UD_10_FLIP_LANE_1_0  DFE_STATIC_REG9.BF.UD_10_FLIP_LANE_1_0
#define reg_UD_11_FLIP_LANE  DFE_STATIC_REG9.BF.UD_11_FLIP_LANE
#define reg_UD_12_FLIP_LANE  DFE_STATIC_REG9.BF.UD_12_FLIP_LANE
#define reg_UD_13_FLIP_LANE  DFE_STATIC_REG9.BF.UD_13_FLIP_LANE
#define reg_UD_14_FLIP_LANE  DFE_STATIC_REG9.BF.UD_14_FLIP_LANE
#define reg_UD_15_FLIP_LANE  DFE_STATIC_REG9.BF.UD_15_FLIP_LANE
#define reg_UD_F5_FLIP_LANE  DFE_STATIC_REG9.BF.UD_F5_FLIP_LANE
#define reg_UD_F4_FLIP_LANE  DFE_STATIC_REG9.BF.UD_F4_FLIP_LANE
#define reg_UD_F3_FLIP_LANE  DFE_STATIC_REG9.BF.UD_F3_FLIP_LANE
#define reg_UD_F2_FLIP_LANE  DFE_STATIC_REG9.BF.UD_F2_FLIP_LANE
#define reg_UD_F1_FLIP_LANE  DFE_STATIC_REG9.BF.UD_F1_FLIP_LANE
#define reg_UD_F0_FLIP_LANE  DFE_STATIC_REG9.BF.UD_F0_FLIP_LANE

// 0x0064	DFE_STATIC_REG10		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t UD_0_FLIP_LANE_2_0                       : 3;	/*  [2:0]     r/w   0*/
		uint8_t UD_1_FLIP_LANE_2_0                       : 3;	/*  [5:3]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [8:6]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*  [8:6]     r/w   0*/
		uint8_t RESERVED_9                               : 3;	/* [11:9]     r/w   0*/
		uint8_t UD_2_FLIP_LANE_2_0                       : 3;	/*[14:12]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*[17:15]     r/w   0*/
		uint8_t RESERVED_16                              : 2;	/*[17:15]     r/w   0*/
		uint8_t UD_3_FLIP_LANE_2_0                       : 3;	/*[20:18]     r/w   0*/
		uint8_t RESERVED_21                              : 2;	/*[22:21]     r/w   0*/
		uint8_t UD_1P5_FLIP_LANE                         : 1;	/*     23     r/w   0*/
		uint8_t UD_4_FLIP_LANE_2_0                       : 3;	/*[26:24]     r/w   0*/
		uint8_t UD_DCE_FLIP_LANE                         : 1;	/*     27     r/w   0*/
		uint8_t UD_HP1_FLIP_LANE                         : 1;	/*     28     r/w   0*/
		uint8_t UD_HN1_FLIP_LANE                         : 1;	/*     29     r/w   0*/
		uint8_t UD_1UT_FLIP_LANE                         : 1;	/*     30     r/w   0*/
		uint8_t UD_1UB_FLIP_LANE                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG10_t;
__xdata __at( 0x4064 ) volatile DFE_STATIC_REG10_t DFE_STATIC_REG10;
#define reg_UD_0_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_0_FLIP_LANE_2_0
#define reg_UD_1_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_1_FLIP_LANE_2_0
#define reg_UD_2_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_2_FLIP_LANE_2_0
#define reg_UD_3_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_3_FLIP_LANE_2_0
#define reg_UD_1P5_FLIP_LANE  DFE_STATIC_REG10.BF.UD_1P5_FLIP_LANE
#define reg_UD_4_FLIP_LANE_2_0  DFE_STATIC_REG10.BF.UD_4_FLIP_LANE_2_0
#define reg_UD_DCE_FLIP_LANE  DFE_STATIC_REG10.BF.UD_DCE_FLIP_LANE
#define reg_UD_HP1_FLIP_LANE  DFE_STATIC_REG10.BF.UD_HP1_FLIP_LANE
#define reg_UD_HN1_FLIP_LANE  DFE_STATIC_REG10.BF.UD_HN1_FLIP_LANE
#define reg_UD_1UT_FLIP_LANE  DFE_STATIC_REG10.BF.UD_1UT_FLIP_LANE
#define reg_UD_1UB_FLIP_LANE  DFE_STATIC_REG10.BF.UD_1UB_FLIP_LANE

// 0x0068	DFE_STATIC_REG11		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t DFE_HOLD_TIME_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h4*/
		uint8_t DFE_SAT_F0_TRIG_OFF_LANE_1_0             : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RESERVED_7                               : 1;	/*  [8:7]     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*  [8:7]     r/w   0*/
		uint8_t DFE_SAT_F0_TRIG_ON_LANE_1_0              : 2;	/* [10:9]     r/w 2'h0*/
		uint8_t DFE_SAT_VREF_TRIG_OFF_LANE_1_0           : 2;	/*[12:11]     r/w 2'h0*/
		uint8_t DFE_SAT_VREF_TRIG_ON_LANE_1_0            : 2;	/*[14:13]     r/w 2'h0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG11_t;
__xdata __at( 0x4068 ) volatile DFE_STATIC_REG11_t DFE_STATIC_REG11;
#define reg_DFE_HOLD_TIME_LANE_4_0  DFE_STATIC_REG11.BF.DFE_HOLD_TIME_LANE_4_0
#define reg_DFE_SAT_F0_TRIG_OFF_LANE_1_0  DFE_STATIC_REG11.BF.DFE_SAT_F0_TRIG_OFF_LANE_1_0
#define reg_DFE_SAT_F0_TRIG_ON_LANE_1_0  DFE_STATIC_REG11.BF.DFE_SAT_F0_TRIG_ON_LANE_1_0
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
__xdata __at( 0x4070 ) volatile DFE_FIR_REG0_t DFE_FIR_REG0;
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
__xdata __at( 0x4074 ) volatile DFE_FIR_REG1_t DFE_FIR_REG1;
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
__xdata __at( 0x4078 ) volatile DFE_STEP_REG5_t DFE_STEP_REG5;
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
__xdata __at( 0x407c ) volatile DFE_MON_REG0_t DFE_MON_REG0;
#define reg_DFE_MON_READ_CTRL_LANE_15_0_b0  DFE_MON_REG0.BF.DFE_MON_READ_CTRL_LANE_15_0_b0
#define reg_DFE_MON_READ_CTRL_LANE_15_0_b1  DFE_MON_REG0.BF.DFE_MON_READ_CTRL_LANE_15_0_b1
#define reg_DFE_MON_READ_HSL_LANE_15_0_b0  DFE_MON_REG0.BF.DFE_MON_READ_HSL_LANE_15_0_b0
#define reg_DFE_MON_READ_HSL_LANE_15_0_b1  DFE_MON_REG0.BF.DFE_MON_READ_HSL_LANE_15_0_b1
#define reg_DFE_MON_READ_CTRL_LANE_15_0  DFE_MON_REG0.WT.W0
#define reg_DFE_MON_READ_HSL_LANE_15_0  DFE_MON_REG0.WT.W1

// 0x0080	DFE_FEN_REG_ODD0		DFE FEN REG ODD0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DFE_FEN3_O_LANE_2_0                      : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t DFE_FEN2_S_O_LANE_2_0                    : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t DFE_FEN2_D_O_LANE_2_0_b0                 : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FEN2_D_O_LANE_2_0_b1                 : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FENF1_TUNE_S_O_LANE_1_0              : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t DFE_FENF1_TUNE_D_O_LANE_1_0              : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t DFE_FEN1_S_O_LANE_2_0_b0                 : 2;	/*[16:14]     r/w 3'h0*/
		uint8_t DFE_FEN1_S_O_LANE_2_0_b1                 : 1;	/*[16:14]     r/w 3'h0*/
		uint8_t DFE_FEN1_D_O_LANE_2_0                    : 3;	/*[19:17]     r/w 3'h0*/
		uint8_t DFE_FEN0_S_O_LANE_2_0                    : 3;	/*[22:20]     r/w 3'h0*/
		uint8_t DFE_FEN0_D_O_LANE_2_0_b0                 : 1;	/*[25:23]     r/w 3'h0*/
		uint8_t DFE_FEN0_D_O_LANE_2_0_b1                 : 2;	/*[25:23]     r/w 3'h0*/
		uint8_t DFE_FENDC_S_O_LANE_2_0                   : 3;	/*[28:26]     r/w 3'h0*/
		uint8_t DFE_FENDC_D_O_LANE_2_0                   : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG_ODD0_t;
__xdata __at( 0x4080 ) volatile DFE_FEN_REG_ODD0_t DFE_FEN_REG_ODD0;
#define reg_DFE_FEN3_O_LANE_2_0  DFE_FEN_REG_ODD0.BF.DFE_FEN3_O_LANE_2_0
#define reg_DFE_FEN2_S_O_LANE_2_0  DFE_FEN_REG_ODD0.BF.DFE_FEN2_S_O_LANE_2_0
#define reg_DFE_FEN2_D_O_LANE_2_0_b0  DFE_FEN_REG_ODD0.BF.DFE_FEN2_D_O_LANE_2_0_b0
#define reg_DFE_FEN2_D_O_LANE_2_0_b1  DFE_FEN_REG_ODD0.BF.DFE_FEN2_D_O_LANE_2_0_b1
#define reg_DFE_FENF1_TUNE_S_O_LANE_1_0  DFE_FEN_REG_ODD0.BF.DFE_FENF1_TUNE_S_O_LANE_1_0
#define reg_DFE_FENF1_TUNE_D_O_LANE_1_0  DFE_FEN_REG_ODD0.BF.DFE_FENF1_TUNE_D_O_LANE_1_0
#define reg_DFE_FEN1_S_O_LANE_2_0_b0  DFE_FEN_REG_ODD0.BF.DFE_FEN1_S_O_LANE_2_0_b0
#define reg_DFE_FEN1_S_O_LANE_2_0_b1  DFE_FEN_REG_ODD0.BF.DFE_FEN1_S_O_LANE_2_0_b1
#define reg_DFE_FEN1_D_O_LANE_2_0  DFE_FEN_REG_ODD0.BF.DFE_FEN1_D_O_LANE_2_0
#define reg_DFE_FEN0_S_O_LANE_2_0  DFE_FEN_REG_ODD0.BF.DFE_FEN0_S_O_LANE_2_0
#define reg_DFE_FEN0_D_O_LANE_2_0_b0  DFE_FEN_REG_ODD0.BF.DFE_FEN0_D_O_LANE_2_0_b0
#define reg_DFE_FEN0_D_O_LANE_2_0_b1  DFE_FEN_REG_ODD0.BF.DFE_FEN0_D_O_LANE_2_0_b1
#define reg_DFE_FENDC_S_O_LANE_2_0  DFE_FEN_REG_ODD0.BF.DFE_FENDC_S_O_LANE_2_0
#define reg_DFE_FENDC_D_O_LANE_2_0  DFE_FEN_REG_ODD0.BF.DFE_FENDC_D_O_LANE_2_0

// 0x0084	DFE_FEN_REG_ODD1		DFE FEN REG ODD1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DFE_FENDC_E_O_LANE                       : 1;	/*      1     r/w   0*/
		uint8_t DFE_FEN1P5_O_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t DFE_FENVREF_O_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FENF5_O_LANE                         : 1;	/*      6     r/w   0*/
		uint8_t DFE_FENF4_O_LANE                         : 1;	/*      7     r/w   0*/
		uint8_t DFE_FENF3_O_LANE                         : 1;	/*      8     r/w   0*/
		uint8_t DFE_FENF2_O_LANE                         : 1;	/*      9     r/w   0*/
		uint8_t DFE_FENF1_O_LANE                         : 1;	/*     10     r/w   0*/
		uint8_t DFE_FENF0_O_LANE                         : 1;	/*     11     r/w   0*/
		uint8_t DFE_FEN15_O_LANE                         : 1;	/*     12     r/w   0*/
		uint8_t DFE_FEN14_O_LANE                         : 1;	/*     13     r/w   0*/
		uint8_t DFE_FEN13_O_LANE                         : 1;	/*     14     r/w   0*/
		uint8_t DFE_FEN12_O_LANE                         : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEN11_O_LANE                         : 1;	/*     16     r/w   0*/
		uint8_t DFE_FEN10_O_LANE_1_0                     : 2;	/*[18:17]     r/w 2'h0*/
		uint8_t DFE_FEN9_O_LANE_1_0                      : 2;	/*[20:19]     r/w 2'h0*/
		uint8_t DFE_FEN8_O_LANE_1_0                      : 2;	/*[22:21]     r/w 2'h0*/
		uint8_t DFE_FEN7_O_LANE_1_0_b0                   : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN7_O_LANE_1_0_b1                   : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN6_O_LANE_1_0                      : 2;	/*[26:25]     r/w 2'h0*/
		uint8_t DFE_FEN5_O_LANE_1_0                      : 2;	/*[28:27]     r/w 2'h0*/
		uint8_t DFE_FEN4_O_LANE_2_0                      : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG_ODD1_t;
__xdata __at( 0x4084 ) volatile DFE_FEN_REG_ODD1_t DFE_FEN_REG_ODD1;
#define reg_DFE_FENDC_E_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FENDC_E_O_LANE
#define reg_DFE_FEN1P5_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FEN1P5_O_LANE
#define reg_DFE_FENVREF_O_LANE_2_0  DFE_FEN_REG_ODD1.BF.DFE_FENVREF_O_LANE_2_0
#define reg_DFE_FENF5_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FENF5_O_LANE
#define reg_DFE_FENF4_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FENF4_O_LANE
#define reg_DFE_FENF3_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FENF3_O_LANE
#define reg_DFE_FENF2_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FENF2_O_LANE
#define reg_DFE_FENF1_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FENF1_O_LANE
#define reg_DFE_FENF0_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FENF0_O_LANE
#define reg_DFE_FEN15_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FEN15_O_LANE
#define reg_DFE_FEN14_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FEN14_O_LANE
#define reg_DFE_FEN13_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FEN13_O_LANE
#define reg_DFE_FEN12_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FEN12_O_LANE
#define reg_DFE_FEN11_O_LANE  DFE_FEN_REG_ODD1.BF.DFE_FEN11_O_LANE
#define reg_DFE_FEN10_O_LANE_1_0  DFE_FEN_REG_ODD1.BF.DFE_FEN10_O_LANE_1_0
#define reg_DFE_FEN9_O_LANE_1_0  DFE_FEN_REG_ODD1.BF.DFE_FEN9_O_LANE_1_0
#define reg_DFE_FEN8_O_LANE_1_0  DFE_FEN_REG_ODD1.BF.DFE_FEN8_O_LANE_1_0
#define reg_DFE_FEN7_O_LANE_1_0_b0  DFE_FEN_REG_ODD1.BF.DFE_FEN7_O_LANE_1_0_b0
#define reg_DFE_FEN7_O_LANE_1_0_b1  DFE_FEN_REG_ODD1.BF.DFE_FEN7_O_LANE_1_0_b1
#define reg_DFE_FEN6_O_LANE_1_0  DFE_FEN_REG_ODD1.BF.DFE_FEN6_O_LANE_1_0
#define reg_DFE_FEN5_O_LANE_1_0  DFE_FEN_REG_ODD1.BF.DFE_FEN5_O_LANE_1_0
#define reg_DFE_FEN4_O_LANE_2_0  DFE_FEN_REG_ODD1.BF.DFE_FEN4_O_LANE_2_0

// 0x0088	DFE_FEN_REG_EVEN0		DFE FEN REG EVEN0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DFE_FEN3_E_LANE_2_0                      : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t DFE_FEN2_S_E_LANE_2_0                    : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t DFE_FEN2_D_E_LANE_2_0_b0                 : 1;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FEN2_D_E_LANE_2_0_b1                 : 2;	/*  [9:7]     r/w 3'h0*/
		uint8_t DFE_FENF1_TUNE_S_E_LANE_1_0              : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t DFE_FENF1_TUNE_D_E_LANE_1_0              : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t DFE_FEN1_S_E_LANE_2_0_b0                 : 2;	/*[16:14]     r/w 3'h0*/
		uint8_t DFE_FEN1_S_E_LANE_2_0_b1                 : 1;	/*[16:14]     r/w 3'h0*/
		uint8_t DFE_FEN1_D_E_LANE_2_0                    : 3;	/*[19:17]     r/w 3'h0*/
		uint8_t DFE_FEN0_S_E_LANE_2_0                    : 3;	/*[22:20]     r/w 3'h0*/
		uint8_t DFE_FEN0_D_E_LANE_2_0_b0                 : 1;	/*[25:23]     r/w 3'h0*/
		uint8_t DFE_FEN0_D_E_LANE_2_0_b1                 : 2;	/*[25:23]     r/w 3'h0*/
		uint8_t DFE_FENDC_S_E_LANE_2_0                   : 3;	/*[28:26]     r/w 3'h0*/
		uint8_t DFE_FENDC_D_E_LANE_2_0                   : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG_EVEN0_t;
__xdata __at( 0x4088 ) volatile DFE_FEN_REG_EVEN0_t DFE_FEN_REG_EVEN0;
#define reg_DFE_FEN3_E_LANE_2_0  DFE_FEN_REG_EVEN0.BF.DFE_FEN3_E_LANE_2_0
#define reg_DFE_FEN2_S_E_LANE_2_0  DFE_FEN_REG_EVEN0.BF.DFE_FEN2_S_E_LANE_2_0
#define reg_DFE_FEN2_D_E_LANE_2_0_b0  DFE_FEN_REG_EVEN0.BF.DFE_FEN2_D_E_LANE_2_0_b0
#define reg_DFE_FEN2_D_E_LANE_2_0_b1  DFE_FEN_REG_EVEN0.BF.DFE_FEN2_D_E_LANE_2_0_b1
#define reg_DFE_FENF1_TUNE_S_E_LANE_1_0  DFE_FEN_REG_EVEN0.BF.DFE_FENF1_TUNE_S_E_LANE_1_0
#define reg_DFE_FENF1_TUNE_D_E_LANE_1_0  DFE_FEN_REG_EVEN0.BF.DFE_FENF1_TUNE_D_E_LANE_1_0
#define reg_DFE_FEN1_S_E_LANE_2_0_b0  DFE_FEN_REG_EVEN0.BF.DFE_FEN1_S_E_LANE_2_0_b0
#define reg_DFE_FEN1_S_E_LANE_2_0_b1  DFE_FEN_REG_EVEN0.BF.DFE_FEN1_S_E_LANE_2_0_b1
#define reg_DFE_FEN1_D_E_LANE_2_0  DFE_FEN_REG_EVEN0.BF.DFE_FEN1_D_E_LANE_2_0
#define reg_DFE_FEN0_S_E_LANE_2_0  DFE_FEN_REG_EVEN0.BF.DFE_FEN0_S_E_LANE_2_0
#define reg_DFE_FEN0_D_E_LANE_2_0_b0  DFE_FEN_REG_EVEN0.BF.DFE_FEN0_D_E_LANE_2_0_b0
#define reg_DFE_FEN0_D_E_LANE_2_0_b1  DFE_FEN_REG_EVEN0.BF.DFE_FEN0_D_E_LANE_2_0_b1
#define reg_DFE_FENDC_S_E_LANE_2_0  DFE_FEN_REG_EVEN0.BF.DFE_FENDC_S_E_LANE_2_0
#define reg_DFE_FENDC_D_E_LANE_2_0  DFE_FEN_REG_EVEN0.BF.DFE_FENDC_D_E_LANE_2_0

// 0x008c	DFE_FEN_REG_EVEN1		DFE FEN REG EVEN1
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DFE_FENDC_E_E_LANE                       : 1;	/*      1     r/w   0*/
		uint8_t DFE_FEN1P5_E_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t DFE_FENVREF_E_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t DFE_FENF5_E_LANE                         : 1;	/*      6     r/w   0*/
		uint8_t DFE_FENF4_E_LANE                         : 1;	/*      7     r/w   0*/
		uint8_t DFE_FENF3_E_LANE                         : 1;	/*      8     r/w   0*/
		uint8_t DFE_FENF2_E_LANE                         : 1;	/*      9     r/w   0*/
		uint8_t DFE_FENF1_E_LANE                         : 1;	/*     10     r/w   0*/
		uint8_t DFE_FENF0_E_LANE                         : 1;	/*     11     r/w   0*/
		uint8_t DFE_FEN15_E_LANE                         : 1;	/*     12     r/w   0*/
		uint8_t DFE_FEN14_E_LANE                         : 1;	/*     13     r/w   0*/
		uint8_t DFE_FEN13_E_LANE                         : 1;	/*     14     r/w   0*/
		uint8_t DFE_FEN12_E_LANE                         : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEN11_E_LANE                         : 1;	/*     16     r/w   0*/
		uint8_t DFE_FEN10_E_LANE_1_0                     : 2;	/*[18:17]     r/w 2'h0*/
		uint8_t DFE_FEN9_E_LANE_1_0                      : 2;	/*[20:19]     r/w 2'h0*/
		uint8_t DFE_FEN8_E_LANE_1_0                      : 2;	/*[22:21]     r/w 2'h0*/
		uint8_t DFE_FEN7_E_LANE_1_0_b0                   : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN7_E_LANE_1_0_b1                   : 1;	/*[24:23]     r/w 2'h0*/
		uint8_t DFE_FEN6_E_LANE_1_0                      : 2;	/*[26:25]     r/w 2'h0*/
		uint8_t DFE_FEN5_E_LANE_1_0                      : 2;	/*[28:27]     r/w 2'h0*/
		uint8_t DFE_FEN4_E_LANE_2_0                      : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_REG_EVEN1_t;
__xdata __at( 0x408c ) volatile DFE_FEN_REG_EVEN1_t DFE_FEN_REG_EVEN1;
#define reg_DFE_FENDC_E_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FENDC_E_E_LANE
#define reg_DFE_FEN1P5_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FEN1P5_E_LANE
#define reg_DFE_FENVREF_E_LANE_2_0  DFE_FEN_REG_EVEN1.BF.DFE_FENVREF_E_LANE_2_0
#define reg_DFE_FENF5_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FENF5_E_LANE
#define reg_DFE_FENF4_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FENF4_E_LANE
#define reg_DFE_FENF3_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FENF3_E_LANE
#define reg_DFE_FENF2_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FENF2_E_LANE
#define reg_DFE_FENF1_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FENF1_E_LANE
#define reg_DFE_FENF0_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FENF0_E_LANE
#define reg_DFE_FEN15_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FEN15_E_LANE
#define reg_DFE_FEN14_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FEN14_E_LANE
#define reg_DFE_FEN13_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FEN13_E_LANE
#define reg_DFE_FEN12_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FEN12_E_LANE
#define reg_DFE_FEN11_E_LANE  DFE_FEN_REG_EVEN1.BF.DFE_FEN11_E_LANE
#define reg_DFE_FEN10_E_LANE_1_0  DFE_FEN_REG_EVEN1.BF.DFE_FEN10_E_LANE_1_0
#define reg_DFE_FEN9_E_LANE_1_0  DFE_FEN_REG_EVEN1.BF.DFE_FEN9_E_LANE_1_0
#define reg_DFE_FEN8_E_LANE_1_0  DFE_FEN_REG_EVEN1.BF.DFE_FEN8_E_LANE_1_0
#define reg_DFE_FEN7_E_LANE_1_0_b0  DFE_FEN_REG_EVEN1.BF.DFE_FEN7_E_LANE_1_0_b0
#define reg_DFE_FEN7_E_LANE_1_0_b1  DFE_FEN_REG_EVEN1.BF.DFE_FEN7_E_LANE_1_0_b1
#define reg_DFE_FEN6_E_LANE_1_0  DFE_FEN_REG_EVEN1.BF.DFE_FEN6_E_LANE_1_0
#define reg_DFE_FEN5_E_LANE_1_0  DFE_FEN_REG_EVEN1.BF.DFE_FEN5_E_LANE_1_0
#define reg_DFE_FEN4_E_LANE_2_0  DFE_FEN_REG_EVEN1.BF.DFE_FEN4_E_LANE_2_0

// 0x0090	DFE_FEXT_REG_EVEN0		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN0
typedef union {
	struct {
		uint8_t DFE_FEXTDC_D_BOT_E_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXTDC_D_MID_E_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXTDC_D_TOP_E_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEXTDC_S_BOT_E_LANE_6_0              : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN0_t;
__xdata __at( 0x4090 ) volatile DFE_FEXT_REG_EVEN0_t DFE_FEXT_REG_EVEN0;
#define reg_DFE_FEXTDC_D_BOT_E_LANE_6_0  DFE_FEXT_REG_EVEN0.BF.DFE_FEXTDC_D_BOT_E_LANE_6_0
#define reg_DFE_FEXTDC_D_MID_E_LANE_6_0  DFE_FEXT_REG_EVEN0.BF.DFE_FEXTDC_D_MID_E_LANE_6_0
#define reg_DFE_FEXTDC_D_TOP_E_LANE_6_0  DFE_FEXT_REG_EVEN0.BF.DFE_FEXTDC_D_TOP_E_LANE_6_0
#define reg_DFE_FEXTDC_S_BOT_E_LANE_6_0  DFE_FEXT_REG_EVEN0.BF.DFE_FEXTDC_S_BOT_E_LANE_6_0

// 0x0094	DFE_FEXT_REG_EVEN1		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN1
typedef union {
	struct {
		uint8_t DFE_FEXTDC_S_MID_E_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXTDC_S_TOP_E_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXTDC_E_E_LANE_6_0                  : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEXTVREF_BOT_E_LANE_6_0              : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN1_t;
__xdata __at( 0x4094 ) volatile DFE_FEXT_REG_EVEN1_t DFE_FEXT_REG_EVEN1;
#define reg_DFE_FEXTDC_S_MID_E_LANE_6_0  DFE_FEXT_REG_EVEN1.BF.DFE_FEXTDC_S_MID_E_LANE_6_0
#define reg_DFE_FEXTDC_S_TOP_E_LANE_6_0  DFE_FEXT_REG_EVEN1.BF.DFE_FEXTDC_S_TOP_E_LANE_6_0
#define reg_DFE_FEXTDC_E_E_LANE_6_0  DFE_FEXT_REG_EVEN1.BF.DFE_FEXTDC_E_E_LANE_6_0
#define reg_DFE_FEXTVREF_BOT_E_LANE_6_0  DFE_FEXT_REG_EVEN1.BF.DFE_FEXTVREF_BOT_E_LANE_6_0

// 0x0098	DFE_FEXT_REG_EVEN2		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN2
typedef union {
	struct {
		uint8_t DFE_FEXTVREF_MID_E_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXTVREF_TOP_E_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXT0_D_BOT_E_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT0_D_MID_E_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN2_t;
__xdata __at( 0x4098 ) volatile DFE_FEXT_REG_EVEN2_t DFE_FEXT_REG_EVEN2;
#define reg_DFE_FEXTVREF_MID_E_LANE_6_0  DFE_FEXT_REG_EVEN2.BF.DFE_FEXTVREF_MID_E_LANE_6_0
#define reg_DFE_FEXTVREF_TOP_E_LANE_6_0  DFE_FEXT_REG_EVEN2.BF.DFE_FEXTVREF_TOP_E_LANE_6_0
#define reg_DFE_FEXT0_D_BOT_E_LANE_5_0  DFE_FEXT_REG_EVEN2.BF.DFE_FEXT0_D_BOT_E_LANE_5_0
#define reg_DFE_FEXT0_D_MID_E_LANE_5_0  DFE_FEXT_REG_EVEN2.BF.DFE_FEXT0_D_MID_E_LANE_5_0

// 0x009c	DFE_FEXT_REG_EVEN3		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN3
typedef union {
	struct {
		uint8_t DFE_FEXT0_D_TOP_E_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT0_S_BOT_E_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT0_S_MID_E_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT0_S_TOP_E_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN3_t;
__xdata __at( 0x409c ) volatile DFE_FEXT_REG_EVEN3_t DFE_FEXT_REG_EVEN3;
#define reg_DFE_FEXT0_D_TOP_E_LANE_5_0  DFE_FEXT_REG_EVEN3.BF.DFE_FEXT0_D_TOP_E_LANE_5_0
#define reg_DFE_FEXT0_S_BOT_E_LANE_5_0  DFE_FEXT_REG_EVEN3.BF.DFE_FEXT0_S_BOT_E_LANE_5_0
#define reg_DFE_FEXT0_S_MID_E_LANE_5_0  DFE_FEXT_REG_EVEN3.BF.DFE_FEXT0_S_MID_E_LANE_5_0
#define reg_DFE_FEXT0_S_TOP_E_LANE_5_0  DFE_FEXT_REG_EVEN3.BF.DFE_FEXT0_S_TOP_E_LANE_5_0

// 0x00a0	DFE_FEXT_REG_EVEN4		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN4
typedef union {
	struct {
		uint8_t DFE_FEXT1_D_BOT_E_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT1_D_MID_E_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT1_D_TOP_E_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT1_S_BOT_E_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN4_t;
__xdata __at( 0x40a0 ) volatile DFE_FEXT_REG_EVEN4_t DFE_FEXT_REG_EVEN4;
#define reg_DFE_FEXT1_D_BOT_E_LANE_5_0  DFE_FEXT_REG_EVEN4.BF.DFE_FEXT1_D_BOT_E_LANE_5_0
#define reg_DFE_FEXT1_D_MID_E_LANE_5_0  DFE_FEXT_REG_EVEN4.BF.DFE_FEXT1_D_MID_E_LANE_5_0
#define reg_DFE_FEXT1_D_TOP_E_LANE_5_0  DFE_FEXT_REG_EVEN4.BF.DFE_FEXT1_D_TOP_E_LANE_5_0
#define reg_DFE_FEXT1_S_BOT_E_LANE_5_0  DFE_FEXT_REG_EVEN4.BF.DFE_FEXT1_S_BOT_E_LANE_5_0

// 0x00a4	DFE_FEXT_REG_EVEN5		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN5
typedef union {
	struct {
		uint8_t DFE_FEXT1_S_MID_E_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT1_S_TOP_E_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT2_D_BOT_E_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT2_D_MID_E_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN5_t;
__xdata __at( 0x40a4 ) volatile DFE_FEXT_REG_EVEN5_t DFE_FEXT_REG_EVEN5;
#define reg_DFE_FEXT1_S_MID_E_LANE_5_0  DFE_FEXT_REG_EVEN5.BF.DFE_FEXT1_S_MID_E_LANE_5_0
#define reg_DFE_FEXT1_S_TOP_E_LANE_5_0  DFE_FEXT_REG_EVEN5.BF.DFE_FEXT1_S_TOP_E_LANE_5_0
#define reg_DFE_FEXT2_D_BOT_E_LANE_5_0  DFE_FEXT_REG_EVEN5.BF.DFE_FEXT2_D_BOT_E_LANE_5_0
#define reg_DFE_FEXT2_D_MID_E_LANE_5_0  DFE_FEXT_REG_EVEN5.BF.DFE_FEXT2_D_MID_E_LANE_5_0

// 0x00a8	DFE_FEXT_REG_EVEN6		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN6
typedef union {
	struct {
		uint8_t DFE_FEXT2_D_TOP_E_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT2_S_BOT_E_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT2_S_MID_E_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT2_S_TOP_E_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN6_t;
__xdata __at( 0x40a8 ) volatile DFE_FEXT_REG_EVEN6_t DFE_FEXT_REG_EVEN6;
#define reg_DFE_FEXT2_D_TOP_E_LANE_5_0  DFE_FEXT_REG_EVEN6.BF.DFE_FEXT2_D_TOP_E_LANE_5_0
#define reg_DFE_FEXT2_S_BOT_E_LANE_5_0  DFE_FEXT_REG_EVEN6.BF.DFE_FEXT2_S_BOT_E_LANE_5_0
#define reg_DFE_FEXT2_S_MID_E_LANE_5_0  DFE_FEXT_REG_EVEN6.BF.DFE_FEXT2_S_MID_E_LANE_5_0
#define reg_DFE_FEXT2_S_TOP_E_LANE_5_0  DFE_FEXT_REG_EVEN6.BF.DFE_FEXT2_S_TOP_E_LANE_5_0

// 0x00ac	DFE_FEXT_REG_EVEN7		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN7
typedef union {
	struct {
		uint8_t DFE_FEXT3_BOT_E_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXT3_MID_E_LANE_6_0                 : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXT3_TOP_E_LANE_6_0                 : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEXT4_BOT_E_LANE_6_0                 : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN7_t;
__xdata __at( 0x40ac ) volatile DFE_FEXT_REG_EVEN7_t DFE_FEXT_REG_EVEN7;
#define reg_DFE_FEXT3_BOT_E_LANE_6_0  DFE_FEXT_REG_EVEN7.BF.DFE_FEXT3_BOT_E_LANE_6_0
#define reg_DFE_FEXT3_MID_E_LANE_6_0  DFE_FEXT_REG_EVEN7.BF.DFE_FEXT3_MID_E_LANE_6_0
#define reg_DFE_FEXT3_TOP_E_LANE_6_0  DFE_FEXT_REG_EVEN7.BF.DFE_FEXT3_TOP_E_LANE_6_0
#define reg_DFE_FEXT4_BOT_E_LANE_6_0  DFE_FEXT_REG_EVEN7.BF.DFE_FEXT4_BOT_E_LANE_6_0

// 0x00b0	DFE_FEXT_REG_EVEN8		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN8
typedef union {
	struct {
		uint8_t DFE_FEXT4_MID_E_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXT4_TOP_E_LANE_6_0                 : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXT5_LSB_E_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT5_MSB_E_LANE_5_0                 : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN8_t;
__xdata __at( 0x40b0 ) volatile DFE_FEXT_REG_EVEN8_t DFE_FEXT_REG_EVEN8;
#define reg_DFE_FEXT4_MID_E_LANE_6_0  DFE_FEXT_REG_EVEN8.BF.DFE_FEXT4_MID_E_LANE_6_0
#define reg_DFE_FEXT4_TOP_E_LANE_6_0  DFE_FEXT_REG_EVEN8.BF.DFE_FEXT4_TOP_E_LANE_6_0
#define reg_DFE_FEXT5_LSB_E_LANE_5_0  DFE_FEXT_REG_EVEN8.BF.DFE_FEXT5_LSB_E_LANE_5_0
#define reg_DFE_FEXT5_MSB_E_LANE_5_0  DFE_FEXT_REG_EVEN8.BF.DFE_FEXT5_MSB_E_LANE_5_0

// 0x00b4	DFE_FEXT_REG_EVEN9		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN9
typedef union {
	struct {
		uint8_t DFE_FEXT6_LSB_E_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT6_MSB_E_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT7_LSB_E_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT7_MSB_E_LANE_5_0                 : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN9_t;
__xdata __at( 0x40b4 ) volatile DFE_FEXT_REG_EVEN9_t DFE_FEXT_REG_EVEN9;
#define reg_DFE_FEXT6_LSB_E_LANE_5_0  DFE_FEXT_REG_EVEN9.BF.DFE_FEXT6_LSB_E_LANE_5_0
#define reg_DFE_FEXT6_MSB_E_LANE_5_0  DFE_FEXT_REG_EVEN9.BF.DFE_FEXT6_MSB_E_LANE_5_0
#define reg_DFE_FEXT7_LSB_E_LANE_5_0  DFE_FEXT_REG_EVEN9.BF.DFE_FEXT7_LSB_E_LANE_5_0
#define reg_DFE_FEXT7_MSB_E_LANE_5_0  DFE_FEXT_REG_EVEN9.BF.DFE_FEXT7_MSB_E_LANE_5_0

// 0x00b8	DFE_FEXT_REG_EVEN10		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN10
typedef union {
	struct {
		uint8_t DFE_FEXTF0_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT8_LSB_E_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT8_MSB_E_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXTF1_E_LANE_5_0                    : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN10_t;
__xdata __at( 0x40b8 ) volatile DFE_FEXT_REG_EVEN10_t DFE_FEXT_REG_EVEN10;
#define reg_DFE_FEXTF0_E_LANE_5_0  DFE_FEXT_REG_EVEN10.BF.DFE_FEXTF0_E_LANE_5_0
#define reg_DFE_FEXT8_LSB_E_LANE_5_0  DFE_FEXT_REG_EVEN10.BF.DFE_FEXT8_LSB_E_LANE_5_0
#define reg_DFE_FEXT8_MSB_E_LANE_5_0  DFE_FEXT_REG_EVEN10.BF.DFE_FEXT8_MSB_E_LANE_5_0
#define reg_DFE_FEXTF1_E_LANE_5_0  DFE_FEXT_REG_EVEN10.BF.DFE_FEXTF1_E_LANE_5_0

// 0x00bc	DFE_FEXT_REG_EVEN11		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN11
typedef union {
	struct {
		uint8_t DFE_FEXT9_LSB_E_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT9_MSB_E_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXTF2_E_LANE_5_0                    : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT10_LSB_E_LANE_5_0                : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN11_t;
__xdata __at( 0x40bc ) volatile DFE_FEXT_REG_EVEN11_t DFE_FEXT_REG_EVEN11;
#define reg_DFE_FEXT9_LSB_E_LANE_5_0  DFE_FEXT_REG_EVEN11.BF.DFE_FEXT9_LSB_E_LANE_5_0
#define reg_DFE_FEXT9_MSB_E_LANE_5_0  DFE_FEXT_REG_EVEN11.BF.DFE_FEXT9_MSB_E_LANE_5_0
#define reg_DFE_FEXTF2_E_LANE_5_0  DFE_FEXT_REG_EVEN11.BF.DFE_FEXTF2_E_LANE_5_0
#define reg_DFE_FEXT10_LSB_E_LANE_5_0  DFE_FEXT_REG_EVEN11.BF.DFE_FEXT10_LSB_E_LANE_5_0

// 0x00c0	DFE_FEXT_REG_EVEN12		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN12
typedef union {
	struct {
		uint8_t DFE_FEXT10_MSB_E_LANE_5_0                : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXTF3_E_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT11_E_LANE_4_0                    : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXTF4_E_LANE_5_0                    : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN12_t;
__xdata __at( 0x40c0 ) volatile DFE_FEXT_REG_EVEN12_t DFE_FEXT_REG_EVEN12;
#define reg_DFE_FEXT10_MSB_E_LANE_5_0  DFE_FEXT_REG_EVEN12.BF.DFE_FEXT10_MSB_E_LANE_5_0
#define reg_DFE_FEXTF3_E_LANE_5_0  DFE_FEXT_REG_EVEN12.BF.DFE_FEXTF3_E_LANE_5_0
#define reg_DFE_FEXT11_E_LANE_4_0  DFE_FEXT_REG_EVEN12.BF.DFE_FEXT11_E_LANE_4_0
#define reg_DFE_FEXTF4_E_LANE_5_0  DFE_FEXT_REG_EVEN12.BF.DFE_FEXTF4_E_LANE_5_0

// 0x00c4	DFE_FEXT_REG_EVEN13		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN13
typedef union {
	struct {
		uint8_t DFE_FEXT12_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXTF5_E_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT13_E_LANE_4_0                    : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXT14_E_LANE_4_0                    : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN13_t;
__xdata __at( 0x40c4 ) volatile DFE_FEXT_REG_EVEN13_t DFE_FEXT_REG_EVEN13;
#define reg_DFE_FEXT12_E_LANE_4_0  DFE_FEXT_REG_EVEN13.BF.DFE_FEXT12_E_LANE_4_0
#define reg_DFE_FEXTF5_E_LANE_5_0  DFE_FEXT_REG_EVEN13.BF.DFE_FEXTF5_E_LANE_5_0
#define reg_DFE_FEXT13_E_LANE_4_0  DFE_FEXT_REG_EVEN13.BF.DFE_FEXT13_E_LANE_4_0
#define reg_DFE_FEXT14_E_LANE_4_0  DFE_FEXT_REG_EVEN13.BF.DFE_FEXT14_E_LANE_4_0

// 0x00c8	DFE_FEXT_REG_EVEN14		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN14
typedef union {
	struct {
		uint8_t DFE_FEXT15_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXT1P5_E_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXTF1_TUNE_BOT_D_E_LANE_3_0         : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t DFE_FEXTF1_TUNE_BOT_S_E_LANE_3_0         : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_FEXTF1_TUNE_TOP_D_E_LANE_3_0         : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t DFE_FEXTF1_TUNE_TOP_S_E_LANE_3_0         : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_EVEN14_t;
__xdata __at( 0x40c8 ) volatile DFE_FEXT_REG_EVEN14_t DFE_FEXT_REG_EVEN14;
#define reg_DFE_FEXT15_E_LANE_4_0  DFE_FEXT_REG_EVEN14.BF.DFE_FEXT15_E_LANE_4_0
#define reg_DFE_FEXT1P5_E_LANE_5_0  DFE_FEXT_REG_EVEN14.BF.DFE_FEXT1P5_E_LANE_5_0
#define reg_DFE_FEXTF1_TUNE_BOT_D_E_LANE_3_0  DFE_FEXT_REG_EVEN14.BF.DFE_FEXTF1_TUNE_BOT_D_E_LANE_3_0
#define reg_DFE_FEXTF1_TUNE_BOT_S_E_LANE_3_0  DFE_FEXT_REG_EVEN14.BF.DFE_FEXTF1_TUNE_BOT_S_E_LANE_3_0
#define reg_DFE_FEXTF1_TUNE_TOP_D_E_LANE_3_0  DFE_FEXT_REG_EVEN14.BF.DFE_FEXTF1_TUNE_TOP_D_E_LANE_3_0
#define reg_DFE_FEXTF1_TUNE_TOP_S_E_LANE_3_0  DFE_FEXT_REG_EVEN14.BF.DFE_FEXTF1_TUNE_TOP_S_E_LANE_3_0

// 0x00cc	DFE_FEXT_REG_ODD0		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD0
typedef union {
	struct {
		uint8_t DFE_FEXTDC_D_BOT_O_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXTDC_D_MID_O_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXTDC_D_TOP_O_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEXTDC_S_BOT_O_LANE_6_0              : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD0_t;
__xdata __at( 0x40cc ) volatile DFE_FEXT_REG_ODD0_t DFE_FEXT_REG_ODD0;
#define reg_DFE_FEXTDC_D_BOT_O_LANE_6_0  DFE_FEXT_REG_ODD0.BF.DFE_FEXTDC_D_BOT_O_LANE_6_0
#define reg_DFE_FEXTDC_D_MID_O_LANE_6_0  DFE_FEXT_REG_ODD0.BF.DFE_FEXTDC_D_MID_O_LANE_6_0
#define reg_DFE_FEXTDC_D_TOP_O_LANE_6_0  DFE_FEXT_REG_ODD0.BF.DFE_FEXTDC_D_TOP_O_LANE_6_0
#define reg_DFE_FEXTDC_S_BOT_O_LANE_6_0  DFE_FEXT_REG_ODD0.BF.DFE_FEXTDC_S_BOT_O_LANE_6_0

// 0x00d0	DFE_FEXT_REG_ODD1		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD1
typedef union {
	struct {
		uint8_t DFE_FEXTDC_S_MID_O_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXTDC_S_TOP_O_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXTDC_E_O_LANE_6_0                  : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEXTVREF_BOT_O_LANE_6_0              : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD1_t;
__xdata __at( 0x40d0 ) volatile DFE_FEXT_REG_ODD1_t DFE_FEXT_REG_ODD1;
#define reg_DFE_FEXTDC_S_MID_O_LANE_6_0  DFE_FEXT_REG_ODD1.BF.DFE_FEXTDC_S_MID_O_LANE_6_0
#define reg_DFE_FEXTDC_S_TOP_O_LANE_6_0  DFE_FEXT_REG_ODD1.BF.DFE_FEXTDC_S_TOP_O_LANE_6_0
#define reg_DFE_FEXTDC_E_O_LANE_6_0  DFE_FEXT_REG_ODD1.BF.DFE_FEXTDC_E_O_LANE_6_0
#define reg_DFE_FEXTVREF_BOT_O_LANE_6_0  DFE_FEXT_REG_ODD1.BF.DFE_FEXTVREF_BOT_O_LANE_6_0

// 0x00d4	DFE_FEXT_REG_ODD2		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD2
typedef union {
	struct {
		uint8_t DFE_FEXTVREF_MID_O_LANE_6_0              : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXTVREF_TOP_O_LANE_6_0              : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXT0_D_BOT_O_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT0_D_MID_O_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD2_t;
__xdata __at( 0x40d4 ) volatile DFE_FEXT_REG_ODD2_t DFE_FEXT_REG_ODD2;
#define reg_DFE_FEXTVREF_MID_O_LANE_6_0  DFE_FEXT_REG_ODD2.BF.DFE_FEXTVREF_MID_O_LANE_6_0
#define reg_DFE_FEXTVREF_TOP_O_LANE_6_0  DFE_FEXT_REG_ODD2.BF.DFE_FEXTVREF_TOP_O_LANE_6_0
#define reg_DFE_FEXT0_D_BOT_O_LANE_5_0  DFE_FEXT_REG_ODD2.BF.DFE_FEXT0_D_BOT_O_LANE_5_0
#define reg_DFE_FEXT0_D_MID_O_LANE_5_0  DFE_FEXT_REG_ODD2.BF.DFE_FEXT0_D_MID_O_LANE_5_0

// 0x00d8	DFE_FEXT_REG_ODD3		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD3
typedef union {
	struct {
		uint8_t DFE_FEXT0_D_TOP_O_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT0_S_BOT_O_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT0_S_MID_O_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT0_S_TOP_O_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD3_t;
__xdata __at( 0x40d8 ) volatile DFE_FEXT_REG_ODD3_t DFE_FEXT_REG_ODD3;
#define reg_DFE_FEXT0_D_TOP_O_LANE_5_0  DFE_FEXT_REG_ODD3.BF.DFE_FEXT0_D_TOP_O_LANE_5_0
#define reg_DFE_FEXT0_S_BOT_O_LANE_5_0  DFE_FEXT_REG_ODD3.BF.DFE_FEXT0_S_BOT_O_LANE_5_0
#define reg_DFE_FEXT0_S_MID_O_LANE_5_0  DFE_FEXT_REG_ODD3.BF.DFE_FEXT0_S_MID_O_LANE_5_0
#define reg_DFE_FEXT0_S_TOP_O_LANE_5_0  DFE_FEXT_REG_ODD3.BF.DFE_FEXT0_S_TOP_O_LANE_5_0

// 0x00dc	DFE_FEXT_REG_ODD4		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD4
typedef union {
	struct {
		uint8_t DFE_FEXT1_D_BOT_O_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT1_D_MID_O_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT1_D_TOP_O_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT1_S_BOT_O_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD4_t;
__xdata __at( 0x40dc ) volatile DFE_FEXT_REG_ODD4_t DFE_FEXT_REG_ODD4;
#define reg_DFE_FEXT1_D_BOT_O_LANE_5_0  DFE_FEXT_REG_ODD4.BF.DFE_FEXT1_D_BOT_O_LANE_5_0
#define reg_DFE_FEXT1_D_MID_O_LANE_5_0  DFE_FEXT_REG_ODD4.BF.DFE_FEXT1_D_MID_O_LANE_5_0
#define reg_DFE_FEXT1_D_TOP_O_LANE_5_0  DFE_FEXT_REG_ODD4.BF.DFE_FEXT1_D_TOP_O_LANE_5_0
#define reg_DFE_FEXT1_S_BOT_O_LANE_5_0  DFE_FEXT_REG_ODD4.BF.DFE_FEXT1_S_BOT_O_LANE_5_0

// 0x00e0	DFE_FEXT_REG_ODD5		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD5
typedef union {
	struct {
		uint8_t DFE_FEXT1_S_MID_O_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT1_S_TOP_O_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT2_D_BOT_O_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT2_D_MID_O_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD5_t;
__xdata __at( 0x40e0 ) volatile DFE_FEXT_REG_ODD5_t DFE_FEXT_REG_ODD5;
#define reg_DFE_FEXT1_S_MID_O_LANE_5_0  DFE_FEXT_REG_ODD5.BF.DFE_FEXT1_S_MID_O_LANE_5_0
#define reg_DFE_FEXT1_S_TOP_O_LANE_5_0  DFE_FEXT_REG_ODD5.BF.DFE_FEXT1_S_TOP_O_LANE_5_0
#define reg_DFE_FEXT2_D_BOT_O_LANE_5_0  DFE_FEXT_REG_ODD5.BF.DFE_FEXT2_D_BOT_O_LANE_5_0
#define reg_DFE_FEXT2_D_MID_O_LANE_5_0  DFE_FEXT_REG_ODD5.BF.DFE_FEXT2_D_MID_O_LANE_5_0

// 0x00e4	DFE_FEXT_REG_ODD6		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD6
typedef union {
	struct {
		uint8_t DFE_FEXT2_D_TOP_O_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT2_S_BOT_O_LANE_5_0               : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT2_S_MID_O_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT2_S_TOP_O_LANE_5_0               : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD6_t;
__xdata __at( 0x40e4 ) volatile DFE_FEXT_REG_ODD6_t DFE_FEXT_REG_ODD6;
#define reg_DFE_FEXT2_D_TOP_O_LANE_5_0  DFE_FEXT_REG_ODD6.BF.DFE_FEXT2_D_TOP_O_LANE_5_0
#define reg_DFE_FEXT2_S_BOT_O_LANE_5_0  DFE_FEXT_REG_ODD6.BF.DFE_FEXT2_S_BOT_O_LANE_5_0
#define reg_DFE_FEXT2_S_MID_O_LANE_5_0  DFE_FEXT_REG_ODD6.BF.DFE_FEXT2_S_MID_O_LANE_5_0
#define reg_DFE_FEXT2_S_TOP_O_LANE_5_0  DFE_FEXT_REG_ODD6.BF.DFE_FEXT2_S_TOP_O_LANE_5_0

// 0x00e8	DFE_FEXT_REG_ODD7		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD7
typedef union {
	struct {
		uint8_t DFE_FEXT3_BOT_O_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXT3_MID_O_LANE_6_0                 : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXT3_TOP_O_LANE_6_0                 : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEXT4_BOT_O_LANE_6_0                 : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD7_t;
__xdata __at( 0x40e8 ) volatile DFE_FEXT_REG_ODD7_t DFE_FEXT_REG_ODD7;
#define reg_DFE_FEXT3_BOT_O_LANE_6_0  DFE_FEXT_REG_ODD7.BF.DFE_FEXT3_BOT_O_LANE_6_0
#define reg_DFE_FEXT3_MID_O_LANE_6_0  DFE_FEXT_REG_ODD7.BF.DFE_FEXT3_MID_O_LANE_6_0
#define reg_DFE_FEXT3_TOP_O_LANE_6_0  DFE_FEXT_REG_ODD7.BF.DFE_FEXT3_TOP_O_LANE_6_0
#define reg_DFE_FEXT4_BOT_O_LANE_6_0  DFE_FEXT_REG_ODD7.BF.DFE_FEXT4_BOT_O_LANE_6_0

// 0x00ec	DFE_FEXT_REG_ODD8		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD8
typedef union {
	struct {
		uint8_t DFE_FEXT4_MID_O_LANE_6_0                 : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXT4_TOP_O_LANE_6_0                 : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXT5_LSB_O_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT5_MSB_O_LANE_5_0                 : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD8_t;
__xdata __at( 0x40ec ) volatile DFE_FEXT_REG_ODD8_t DFE_FEXT_REG_ODD8;
#define reg_DFE_FEXT4_MID_O_LANE_6_0  DFE_FEXT_REG_ODD8.BF.DFE_FEXT4_MID_O_LANE_6_0
#define reg_DFE_FEXT4_TOP_O_LANE_6_0  DFE_FEXT_REG_ODD8.BF.DFE_FEXT4_TOP_O_LANE_6_0
#define reg_DFE_FEXT5_LSB_O_LANE_5_0  DFE_FEXT_REG_ODD8.BF.DFE_FEXT5_LSB_O_LANE_5_0
#define reg_DFE_FEXT5_MSB_O_LANE_5_0  DFE_FEXT_REG_ODD8.BF.DFE_FEXT5_MSB_O_LANE_5_0

// 0x00f0	DFE_FEXT_REG_ODD9		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD9
typedef union {
	struct {
		uint8_t DFE_FEXT6_LSB_O_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT6_MSB_O_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT7_LSB_O_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT7_MSB_O_LANE_5_0                 : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD9_t;
__xdata __at( 0x40f0 ) volatile DFE_FEXT_REG_ODD9_t DFE_FEXT_REG_ODD9;
#define reg_DFE_FEXT6_LSB_O_LANE_5_0  DFE_FEXT_REG_ODD9.BF.DFE_FEXT6_LSB_O_LANE_5_0
#define reg_DFE_FEXT6_MSB_O_LANE_5_0  DFE_FEXT_REG_ODD9.BF.DFE_FEXT6_MSB_O_LANE_5_0
#define reg_DFE_FEXT7_LSB_O_LANE_5_0  DFE_FEXT_REG_ODD9.BF.DFE_FEXT7_LSB_O_LANE_5_0
#define reg_DFE_FEXT7_MSB_O_LANE_5_0  DFE_FEXT_REG_ODD9.BF.DFE_FEXT7_MSB_O_LANE_5_0

// 0x00f4	DFE_FEXT_REG_ODD10		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD10
typedef union {
	struct {
		uint8_t DFE_FEXTF0_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT8_LSB_O_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT8_MSB_O_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXTF1_O_LANE_5_0                    : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD10_t;
__xdata __at( 0x40f4 ) volatile DFE_FEXT_REG_ODD10_t DFE_FEXT_REG_ODD10;
#define reg_DFE_FEXTF0_O_LANE_5_0  DFE_FEXT_REG_ODD10.BF.DFE_FEXTF0_O_LANE_5_0
#define reg_DFE_FEXT8_LSB_O_LANE_5_0  DFE_FEXT_REG_ODD10.BF.DFE_FEXT8_LSB_O_LANE_5_0
#define reg_DFE_FEXT8_MSB_O_LANE_5_0  DFE_FEXT_REG_ODD10.BF.DFE_FEXT8_MSB_O_LANE_5_0
#define reg_DFE_FEXTF1_O_LANE_5_0  DFE_FEXT_REG_ODD10.BF.DFE_FEXTF1_O_LANE_5_0

// 0x00f8	DFE_FEXT_REG_ODD11		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD11
typedef union {
	struct {
		uint8_t DFE_FEXT9_LSB_O_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT9_MSB_O_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXTF2_O_LANE_5_0                    : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT10_LSB_O_LANE_5_0                : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD11_t;
__xdata __at( 0x40f8 ) volatile DFE_FEXT_REG_ODD11_t DFE_FEXT_REG_ODD11;
#define reg_DFE_FEXT9_LSB_O_LANE_5_0  DFE_FEXT_REG_ODD11.BF.DFE_FEXT9_LSB_O_LANE_5_0
#define reg_DFE_FEXT9_MSB_O_LANE_5_0  DFE_FEXT_REG_ODD11.BF.DFE_FEXT9_MSB_O_LANE_5_0
#define reg_DFE_FEXTF2_O_LANE_5_0  DFE_FEXT_REG_ODD11.BF.DFE_FEXTF2_O_LANE_5_0
#define reg_DFE_FEXT10_LSB_O_LANE_5_0  DFE_FEXT_REG_ODD11.BF.DFE_FEXT10_LSB_O_LANE_5_0

// 0x00fc	DFE_FEXT_REG_ODD12		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD12
typedef union {
	struct {
		uint8_t DFE_FEXT10_MSB_O_LANE_5_0                : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXTF3_O_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT11_O_LANE_4_0                    : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXTF4_O_LANE_5_0                    : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD12_t;
__xdata __at( 0x40fc ) volatile DFE_FEXT_REG_ODD12_t DFE_FEXT_REG_ODD12;
#define reg_DFE_FEXT10_MSB_O_LANE_5_0  DFE_FEXT_REG_ODD12.BF.DFE_FEXT10_MSB_O_LANE_5_0
#define reg_DFE_FEXTF3_O_LANE_5_0  DFE_FEXT_REG_ODD12.BF.DFE_FEXTF3_O_LANE_5_0
#define reg_DFE_FEXT11_O_LANE_4_0  DFE_FEXT_REG_ODD12.BF.DFE_FEXT11_O_LANE_4_0
#define reg_DFE_FEXTF4_O_LANE_5_0  DFE_FEXT_REG_ODD12.BF.DFE_FEXTF4_O_LANE_5_0

// 0x0100	DFE_FEXT_REG_ODD13		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD13
typedef union {
	struct {
		uint8_t DFE_FEXT12_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXTF5_O_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT13_O_LANE_4_0                    : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXT14_O_LANE_4_0                    : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD13_t;
__xdata __at( 0x4100 ) volatile DFE_FEXT_REG_ODD13_t DFE_FEXT_REG_ODD13;
#define reg_DFE_FEXT12_O_LANE_4_0  DFE_FEXT_REG_ODD13.BF.DFE_FEXT12_O_LANE_4_0
#define reg_DFE_FEXTF5_O_LANE_5_0  DFE_FEXT_REG_ODD13.BF.DFE_FEXTF5_O_LANE_5_0
#define reg_DFE_FEXT13_O_LANE_4_0  DFE_FEXT_REG_ODD13.BF.DFE_FEXT13_O_LANE_4_0
#define reg_DFE_FEXT14_O_LANE_4_0  DFE_FEXT_REG_ODD13.BF.DFE_FEXT14_O_LANE_4_0

// 0x0104	DFE_FEXT_REG_ODD14		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD14
typedef union {
	struct {
		uint8_t DFE_FEXT15_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXT1P5_O_LANE_5_0                   : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXTF1_TUNE_BOT_D_O_LANE_3_0         : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t DFE_FEXTF1_TUNE_BOT_S_O_LANE_3_0         : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t DFE_FEXTF1_TUNE_TOP_D_O_LANE_3_0         : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t DFE_FEXTF1_TUNE_TOP_S_O_LANE_3_0         : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_REG_ODD14_t;
__xdata __at( 0x4104 ) volatile DFE_FEXT_REG_ODD14_t DFE_FEXT_REG_ODD14;
#define reg_DFE_FEXT15_O_LANE_4_0  DFE_FEXT_REG_ODD14.BF.DFE_FEXT15_O_LANE_4_0
#define reg_DFE_FEXT1P5_O_LANE_5_0  DFE_FEXT_REG_ODD14.BF.DFE_FEXT1P5_O_LANE_5_0
#define reg_DFE_FEXTF1_TUNE_BOT_D_O_LANE_3_0  DFE_FEXT_REG_ODD14.BF.DFE_FEXTF1_TUNE_BOT_D_O_LANE_3_0
#define reg_DFE_FEXTF1_TUNE_BOT_S_O_LANE_3_0  DFE_FEXT_REG_ODD14.BF.DFE_FEXTF1_TUNE_BOT_S_O_LANE_3_0
#define reg_DFE_FEXTF1_TUNE_TOP_D_O_LANE_3_0  DFE_FEXT_REG_ODD14.BF.DFE_FEXTF1_TUNE_TOP_D_O_LANE_3_0
#define reg_DFE_FEXTF1_TUNE_TOP_S_O_LANE_3_0  DFE_FEXT_REG_ODD14.BF.DFE_FEXTF1_TUNE_TOP_S_O_LANE_3_0

// 0x0108	DFE_READ_SM_REG_EVEN0		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN0
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_E_SM_LANE_6_0               : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_DC_D_MID_E_SM_LANE_6_0               : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_DC_D_TOP_E_SM_LANE_6_0               : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_DC_S_BOT_E_SM_LANE_6_0               : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN0_t;
__xdata __at( 0x4108 ) volatile DFE_READ_SM_REG_EVEN0_t DFE_READ_SM_REG_EVEN0;
#define reg_DFE_DC_D_BOT_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN0.BF.DFE_DC_D_BOT_E_SM_LANE_6_0
#define reg_DFE_DC_D_MID_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN0.BF.DFE_DC_D_MID_E_SM_LANE_6_0
#define reg_DFE_DC_D_TOP_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN0.BF.DFE_DC_D_TOP_E_SM_LANE_6_0
#define reg_DFE_DC_S_BOT_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN0.BF.DFE_DC_S_BOT_E_SM_LANE_6_0

// 0x010c	DFE_READ_SM_REG_EVEN1		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN1
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_E_SM_LANE_6_0               : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_DC_S_TOP_E_SM_LANE_6_0               : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_DC_E_E_SM_LANE_6_0                   : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_VREF_BOT_E_SM_LANE_6_0               : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN1_t;
__xdata __at( 0x410c ) volatile DFE_READ_SM_REG_EVEN1_t DFE_READ_SM_REG_EVEN1;
#define reg_DFE_DC_S_MID_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN1.BF.DFE_DC_S_MID_E_SM_LANE_6_0
#define reg_DFE_DC_S_TOP_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN1.BF.DFE_DC_S_TOP_E_SM_LANE_6_0
#define reg_DFE_DC_E_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN1.BF.DFE_DC_E_E_SM_LANE_6_0
#define reg_DFE_VREF_BOT_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN1.BF.DFE_VREF_BOT_E_SM_LANE_6_0

// 0x0110	DFE_READ_SM_REG_EVEN2		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN2
typedef union {
	struct {
		uint8_t DFE_VREF_MID_E_SM_LANE_6_0               : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_VREF_TOP_E_SM_LANE_6_0               : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_F0_D_BOT_E_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F0_D_MID_E_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN2_t;
__xdata __at( 0x4110 ) volatile DFE_READ_SM_REG_EVEN2_t DFE_READ_SM_REG_EVEN2;
#define reg_DFE_VREF_MID_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN2.BF.DFE_VREF_MID_E_SM_LANE_6_0
#define reg_DFE_VREF_TOP_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN2.BF.DFE_VREF_TOP_E_SM_LANE_6_0
#define reg_DFE_F0_D_BOT_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN2.BF.DFE_F0_D_BOT_E_SM_LANE_5_0
#define reg_DFE_F0_D_MID_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN2.BF.DFE_F0_D_MID_E_SM_LANE_5_0

// 0x0114	DFE_READ_SM_REG_EVEN3		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN3
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_E_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F0_S_BOT_E_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F0_S_MID_E_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F0_S_TOP_E_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN3_t;
__xdata __at( 0x4114 ) volatile DFE_READ_SM_REG_EVEN3_t DFE_READ_SM_REG_EVEN3;
#define reg_DFE_F0_D_TOP_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN3.BF.DFE_F0_D_TOP_E_SM_LANE_5_0
#define reg_DFE_F0_S_BOT_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN3.BF.DFE_F0_S_BOT_E_SM_LANE_5_0
#define reg_DFE_F0_S_MID_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN3.BF.DFE_F0_S_MID_E_SM_LANE_5_0
#define reg_DFE_F0_S_TOP_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN3.BF.DFE_F0_S_TOP_E_SM_LANE_5_0

// 0x0118	DFE_READ_SM_REG_EVEN4		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN4
typedef union {
	struct {
		uint8_t DFE_F1_D_BOT_E_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F1_D_MID_E_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F1_D_TOP_E_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F1_S_BOT_E_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN4_t;
__xdata __at( 0x4118 ) volatile DFE_READ_SM_REG_EVEN4_t DFE_READ_SM_REG_EVEN4;
#define reg_DFE_F1_D_BOT_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN4.BF.DFE_F1_D_BOT_E_SM_LANE_5_0
#define reg_DFE_F1_D_MID_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN4.BF.DFE_F1_D_MID_E_SM_LANE_5_0
#define reg_DFE_F1_D_TOP_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN4.BF.DFE_F1_D_TOP_E_SM_LANE_5_0
#define reg_DFE_F1_S_BOT_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN4.BF.DFE_F1_S_BOT_E_SM_LANE_5_0

// 0x011c	DFE_READ_SM_REG_EVEN5		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN5
typedef union {
	struct {
		uint8_t DFE_F1_S_MID_E_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F1_S_TOP_E_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F2_D_BOT_E_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F2_D_MID_E_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN5_t;
__xdata __at( 0x411c ) volatile DFE_READ_SM_REG_EVEN5_t DFE_READ_SM_REG_EVEN5;
#define reg_DFE_F1_S_MID_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN5.BF.DFE_F1_S_MID_E_SM_LANE_5_0
#define reg_DFE_F1_S_TOP_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN5.BF.DFE_F1_S_TOP_E_SM_LANE_5_0
#define reg_DFE_F2_D_BOT_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN5.BF.DFE_F2_D_BOT_E_SM_LANE_5_0
#define reg_DFE_F2_D_MID_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN5.BF.DFE_F2_D_MID_E_SM_LANE_5_0

// 0x0120	DFE_READ_SM_REG_EVEN6		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN6
typedef union {
	struct {
		uint8_t DFE_F2_D_TOP_E_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F2_S_BOT_E_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F2_S_MID_E_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F2_S_TOP_E_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN6_t;
__xdata __at( 0x4120 ) volatile DFE_READ_SM_REG_EVEN6_t DFE_READ_SM_REG_EVEN6;
#define reg_DFE_F2_D_TOP_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN6.BF.DFE_F2_D_TOP_E_SM_LANE_5_0
#define reg_DFE_F2_S_BOT_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN6.BF.DFE_F2_S_BOT_E_SM_LANE_5_0
#define reg_DFE_F2_S_MID_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN6.BF.DFE_F2_S_MID_E_SM_LANE_5_0
#define reg_DFE_F2_S_TOP_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN6.BF.DFE_F2_S_TOP_E_SM_LANE_5_0

// 0x0124	DFE_READ_SM_REG_EVEN7		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN7
typedef union {
	struct {
		uint8_t DFE_F3_BOT_E_SM_LANE_6_0                 : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_F3_MID_E_SM_LANE_6_0                 : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_F3_TOP_E_SM_LANE_6_0                 : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_F4_BOT_E_SM_LANE_6_0                 : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN7_t;
__xdata __at( 0x4124 ) volatile DFE_READ_SM_REG_EVEN7_t DFE_READ_SM_REG_EVEN7;
#define reg_DFE_F3_BOT_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN7.BF.DFE_F3_BOT_E_SM_LANE_6_0
#define reg_DFE_F3_MID_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN7.BF.DFE_F3_MID_E_SM_LANE_6_0
#define reg_DFE_F3_TOP_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN7.BF.DFE_F3_TOP_E_SM_LANE_6_0
#define reg_DFE_F4_BOT_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN7.BF.DFE_F4_BOT_E_SM_LANE_6_0

// 0x0128	DFE_READ_SM_REG_EVEN8		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN8
typedef union {
	struct {
		uint8_t DFE_F4_MID_E_SM_LANE_6_0                 : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_F4_TOP_E_SM_LANE_6_0                 : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_F5_LSB_E_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F5_MSB_E_SM_LANE_5_0                 : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN8_t;
__xdata __at( 0x4128 ) volatile DFE_READ_SM_REG_EVEN8_t DFE_READ_SM_REG_EVEN8;
#define reg_DFE_F4_MID_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN8.BF.DFE_F4_MID_E_SM_LANE_6_0
#define reg_DFE_F4_TOP_E_SM_LANE_6_0  DFE_READ_SM_REG_EVEN8.BF.DFE_F4_TOP_E_SM_LANE_6_0
#define reg_DFE_F5_LSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN8.BF.DFE_F5_LSB_E_SM_LANE_5_0
#define reg_DFE_F5_MSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN8.BF.DFE_F5_MSB_E_SM_LANE_5_0

// 0x012c	DFE_READ_SM_REG_EVEN9		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN9
typedef union {
	struct {
		uint8_t DFE_F6_LSB_E_SM_LANE_5_0                 : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F6_MSB_E_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F7_LSB_E_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F7_MSB_E_SM_LANE_5_0                 : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN9_t;
__xdata __at( 0x412c ) volatile DFE_READ_SM_REG_EVEN9_t DFE_READ_SM_REG_EVEN9;
#define reg_DFE_F6_LSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN9.BF.DFE_F6_LSB_E_SM_LANE_5_0
#define reg_DFE_F6_MSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN9.BF.DFE_F6_MSB_E_SM_LANE_5_0
#define reg_DFE_F7_LSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN9.BF.DFE_F7_LSB_E_SM_LANE_5_0
#define reg_DFE_F7_MSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN9.BF.DFE_F7_MSB_E_SM_LANE_5_0

// 0x0130	DFE_READ_SM_REG_EVEN10		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN10
typedef union {
	struct {
		uint8_t DFE_FF0_E_SM_LANE_5_0                    : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F8_LSB_E_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F8_MSB_E_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FF1_E_SM_LANE_5_0                    : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN10_t;
__xdata __at( 0x4130 ) volatile DFE_READ_SM_REG_EVEN10_t DFE_READ_SM_REG_EVEN10;
#define reg_DFE_FF0_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN10.BF.DFE_FF0_E_SM_LANE_5_0
#define reg_DFE_F8_LSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN10.BF.DFE_F8_LSB_E_SM_LANE_5_0
#define reg_DFE_F8_MSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN10.BF.DFE_F8_MSB_E_SM_LANE_5_0
#define reg_DFE_FF1_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN10.BF.DFE_FF1_E_SM_LANE_5_0

// 0x0134	DFE_READ_SM_REG_EVEN11		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN11
typedef union {
	struct {
		uint8_t DFE_F9_LSB_E_SM_LANE_5_0                 : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F9_MSB_E_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FF2_E_SM_LANE_5_0                    : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F10_LSB_E_SM_LANE_5_0                : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN11_t;
__xdata __at( 0x4134 ) volatile DFE_READ_SM_REG_EVEN11_t DFE_READ_SM_REG_EVEN11;
#define reg_DFE_F9_LSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN11.BF.DFE_F9_LSB_E_SM_LANE_5_0
#define reg_DFE_F9_MSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN11.BF.DFE_F9_MSB_E_SM_LANE_5_0
#define reg_DFE_FF2_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN11.BF.DFE_FF2_E_SM_LANE_5_0
#define reg_DFE_F10_LSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN11.BF.DFE_F10_LSB_E_SM_LANE_5_0

// 0x0138	DFE_READ_SM_REG_EVEN12		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN12
typedef union {
	struct {
		uint8_t DFE_F10_MSB_E_SM_LANE_5_0                : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FF3_E_SM_LANE_5_0                    : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F11_E_SM_LANE_4_0                    : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FF4_E_SM_LANE_5_0                    : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN12_t;
__xdata __at( 0x4138 ) volatile DFE_READ_SM_REG_EVEN12_t DFE_READ_SM_REG_EVEN12;
#define reg_DFE_F10_MSB_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN12.BF.DFE_F10_MSB_E_SM_LANE_5_0
#define reg_DFE_FF3_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN12.BF.DFE_FF3_E_SM_LANE_5_0
#define reg_DFE_F11_E_SM_LANE_4_0  DFE_READ_SM_REG_EVEN12.BF.DFE_F11_E_SM_LANE_4_0
#define reg_DFE_FF4_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN12.BF.DFE_FF4_E_SM_LANE_5_0

// 0x013c	DFE_READ_SM_REG_EVEN13		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN13
typedef union {
	struct {
		uint8_t DFE_F12_E_SM_LANE_4_0                    : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FF5_E_SM_LANE_5_0                    : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F13_E_SM_LANE_4_0                    : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_F14_E_SM_LANE_4_0                    : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN13_t;
__xdata __at( 0x413c ) volatile DFE_READ_SM_REG_EVEN13_t DFE_READ_SM_REG_EVEN13;
#define reg_DFE_F12_E_SM_LANE_4_0  DFE_READ_SM_REG_EVEN13.BF.DFE_F12_E_SM_LANE_4_0
#define reg_DFE_FF5_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN13.BF.DFE_FF5_E_SM_LANE_5_0
#define reg_DFE_F13_E_SM_LANE_4_0  DFE_READ_SM_REG_EVEN13.BF.DFE_F13_E_SM_LANE_4_0
#define reg_DFE_F14_E_SM_LANE_4_0  DFE_READ_SM_REG_EVEN13.BF.DFE_F14_E_SM_LANE_4_0

// 0x0140	DFE_READ_SM_REG_EVEN14		DFE TAP SIGN_MAGNITUDE READ BACK REG EVEN14
typedef union {
	struct {
		uint8_t DFE_F15_E_SM_LANE_4_0                    : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_F1P5_E_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F1_TUNE_BOT_S_E_LANE_3_0             : 4;	/*[19:16]       r 4'h0*/
		uint8_t DFE_F1_TUNE_BOT_D_E_LANE_3_0             : 4;	/*[23:20]       r 4'h0*/
		uint8_t DFE_F1_TUNE_TOP_S_E_LANE_3_0             : 4;	/*[27:24]       r 4'h0*/
		uint8_t DFE_F1_TUNE_TOP_D_E_LANE_3_0             : 4;	/*[31:28]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_EVEN14_t;
__xdata __at( 0x4140 ) volatile DFE_READ_SM_REG_EVEN14_t DFE_READ_SM_REG_EVEN14;
#define reg_DFE_F15_E_SM_LANE_4_0  DFE_READ_SM_REG_EVEN14.BF.DFE_F15_E_SM_LANE_4_0
#define reg_DFE_F1P5_E_SM_LANE_5_0  DFE_READ_SM_REG_EVEN14.BF.DFE_F1P5_E_SM_LANE_5_0
#define reg_DFE_F1_TUNE_BOT_S_E_LANE_3_0  DFE_READ_SM_REG_EVEN14.BF.DFE_F1_TUNE_BOT_S_E_LANE_3_0
#define reg_DFE_F1_TUNE_BOT_D_E_LANE_3_0  DFE_READ_SM_REG_EVEN14.BF.DFE_F1_TUNE_BOT_D_E_LANE_3_0
#define reg_DFE_F1_TUNE_TOP_S_E_LANE_3_0  DFE_READ_SM_REG_EVEN14.BF.DFE_F1_TUNE_TOP_S_E_LANE_3_0
#define reg_DFE_F1_TUNE_TOP_D_E_LANE_3_0  DFE_READ_SM_REG_EVEN14.BF.DFE_F1_TUNE_TOP_D_E_LANE_3_0

// 0x0144	DFE_READ_SM_REG_ODD0		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD0
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_O_SM_LANE_6_0               : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_DC_D_MID_O_SM_LANE_6_0               : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_DC_D_TOP_O_SM_LANE_6_0               : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_DC_S_BOT_O_SM_LANE_6_0               : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD0_t;
__xdata __at( 0x4144 ) volatile DFE_READ_SM_REG_ODD0_t DFE_READ_SM_REG_ODD0;
#define reg_DFE_DC_D_BOT_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD0.BF.DFE_DC_D_BOT_O_SM_LANE_6_0
#define reg_DFE_DC_D_MID_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD0.BF.DFE_DC_D_MID_O_SM_LANE_6_0
#define reg_DFE_DC_D_TOP_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD0.BF.DFE_DC_D_TOP_O_SM_LANE_6_0
#define reg_DFE_DC_S_BOT_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD0.BF.DFE_DC_S_BOT_O_SM_LANE_6_0

// 0x0148	DFE_READ_SM_REG_ODD1		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD1
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_O_SM_LANE_6_0               : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_DC_S_TOP_O_SM_LANE_6_0               : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_DC_E_O_SM_LANE_6_0                   : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_VREF_BOT_O_SM_LANE_6_0               : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD1_t;
__xdata __at( 0x4148 ) volatile DFE_READ_SM_REG_ODD1_t DFE_READ_SM_REG_ODD1;
#define reg_DFE_DC_S_MID_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD1.BF.DFE_DC_S_MID_O_SM_LANE_6_0
#define reg_DFE_DC_S_TOP_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD1.BF.DFE_DC_S_TOP_O_SM_LANE_6_0
#define reg_DFE_DC_E_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD1.BF.DFE_DC_E_O_SM_LANE_6_0
#define reg_DFE_VREF_BOT_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD1.BF.DFE_VREF_BOT_O_SM_LANE_6_0

// 0x014c	DFE_READ_SM_REG_ODD2		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD2
typedef union {
	struct {
		uint8_t DFE_VREF_MID_O_SM_LANE_6_0               : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_VREF_TOP_O_SM_LANE_6_0               : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_F0_D_BOT_O_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F0_D_MID_O_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD2_t;
__xdata __at( 0x414c ) volatile DFE_READ_SM_REG_ODD2_t DFE_READ_SM_REG_ODD2;
#define reg_DFE_VREF_MID_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD2.BF.DFE_VREF_MID_O_SM_LANE_6_0
#define reg_DFE_VREF_TOP_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD2.BF.DFE_VREF_TOP_O_SM_LANE_6_0
#define reg_DFE_F0_D_BOT_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD2.BF.DFE_F0_D_BOT_O_SM_LANE_5_0
#define reg_DFE_F0_D_MID_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD2.BF.DFE_F0_D_MID_O_SM_LANE_5_0

// 0x0150	DFE_READ_SM_REG_ODD3		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD3
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_O_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F0_S_BOT_O_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F0_S_MID_O_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F0_S_TOP_O_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD3_t;
__xdata __at( 0x4150 ) volatile DFE_READ_SM_REG_ODD3_t DFE_READ_SM_REG_ODD3;
#define reg_DFE_F0_D_TOP_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD3.BF.DFE_F0_D_TOP_O_SM_LANE_5_0
#define reg_DFE_F0_S_BOT_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD3.BF.DFE_F0_S_BOT_O_SM_LANE_5_0
#define reg_DFE_F0_S_MID_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD3.BF.DFE_F0_S_MID_O_SM_LANE_5_0
#define reg_DFE_F0_S_TOP_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD3.BF.DFE_F0_S_TOP_O_SM_LANE_5_0

// 0x0154	DFE_READ_SM_REG_ODD4		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD4
typedef union {
	struct {
		uint8_t DFE_F1_D_BOT_O_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F1_D_MID_O_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F1_D_TOP_O_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F1_S_BOT_O_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD4_t;
__xdata __at( 0x4154 ) volatile DFE_READ_SM_REG_ODD4_t DFE_READ_SM_REG_ODD4;
#define reg_DFE_F1_D_BOT_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD4.BF.DFE_F1_D_BOT_O_SM_LANE_5_0
#define reg_DFE_F1_D_MID_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD4.BF.DFE_F1_D_MID_O_SM_LANE_5_0
#define reg_DFE_F1_D_TOP_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD4.BF.DFE_F1_D_TOP_O_SM_LANE_5_0
#define reg_DFE_F1_S_BOT_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD4.BF.DFE_F1_S_BOT_O_SM_LANE_5_0

// 0x0158	DFE_READ_SM_REG_ODD5		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD5
typedef union {
	struct {
		uint8_t DFE_F1_S_MID_O_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F1_S_TOP_O_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F2_D_BOT_O_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F2_D_MID_O_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD5_t;
__xdata __at( 0x4158 ) volatile DFE_READ_SM_REG_ODD5_t DFE_READ_SM_REG_ODD5;
#define reg_DFE_F1_S_MID_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD5.BF.DFE_F1_S_MID_O_SM_LANE_5_0
#define reg_DFE_F1_S_TOP_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD5.BF.DFE_F1_S_TOP_O_SM_LANE_5_0
#define reg_DFE_F2_D_BOT_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD5.BF.DFE_F2_D_BOT_O_SM_LANE_5_0
#define reg_DFE_F2_D_MID_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD5.BF.DFE_F2_D_MID_O_SM_LANE_5_0

// 0x015c	DFE_READ_SM_REG_ODD6		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD6
typedef union {
	struct {
		uint8_t DFE_F2_D_TOP_O_SM_LANE_5_0               : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F2_S_BOT_O_SM_LANE_5_0               : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F2_S_MID_O_SM_LANE_5_0               : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F2_S_TOP_O_SM_LANE_5_0               : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD6_t;
__xdata __at( 0x415c ) volatile DFE_READ_SM_REG_ODD6_t DFE_READ_SM_REG_ODD6;
#define reg_DFE_F2_D_TOP_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD6.BF.DFE_F2_D_TOP_O_SM_LANE_5_0
#define reg_DFE_F2_S_BOT_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD6.BF.DFE_F2_S_BOT_O_SM_LANE_5_0
#define reg_DFE_F2_S_MID_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD6.BF.DFE_F2_S_MID_O_SM_LANE_5_0
#define reg_DFE_F2_S_TOP_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD6.BF.DFE_F2_S_TOP_O_SM_LANE_5_0

// 0x0160	DFE_READ_SM_REG_ODD7		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD7
typedef union {
	struct {
		uint8_t DFE_F3_BOT_O_SM_LANE_6_0                 : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_F3_MID_O_SM_LANE_6_0                 : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_F3_TOP_O_SM_LANE_6_0                 : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_F4_BOT_O_SM_LANE_6_0                 : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD7_t;
__xdata __at( 0x4160 ) volatile DFE_READ_SM_REG_ODD7_t DFE_READ_SM_REG_ODD7;
#define reg_DFE_F3_BOT_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD7.BF.DFE_F3_BOT_O_SM_LANE_6_0
#define reg_DFE_F3_MID_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD7.BF.DFE_F3_MID_O_SM_LANE_6_0
#define reg_DFE_F3_TOP_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD7.BF.DFE_F3_TOP_O_SM_LANE_6_0
#define reg_DFE_F4_BOT_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD7.BF.DFE_F4_BOT_O_SM_LANE_6_0

// 0x0164	DFE_READ_SM_REG_ODD8		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD8
typedef union {
	struct {
		uint8_t DFE_F4_MID_O_SM_LANE_6_0                 : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_F4_TOP_O_SM_LANE_6_0                 : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_F5_LSB_O_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F5_MSB_O_SM_LANE_5_0                 : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD8_t;
__xdata __at( 0x4164 ) volatile DFE_READ_SM_REG_ODD8_t DFE_READ_SM_REG_ODD8;
#define reg_DFE_F4_MID_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD8.BF.DFE_F4_MID_O_SM_LANE_6_0
#define reg_DFE_F4_TOP_O_SM_LANE_6_0  DFE_READ_SM_REG_ODD8.BF.DFE_F4_TOP_O_SM_LANE_6_0
#define reg_DFE_F5_LSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD8.BF.DFE_F5_LSB_O_SM_LANE_5_0
#define reg_DFE_F5_MSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD8.BF.DFE_F5_MSB_O_SM_LANE_5_0

// 0x0168	DFE_READ_SM_REG_ODD9		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD9
typedef union {
	struct {
		uint8_t DFE_F6_LSB_O_SM_LANE_5_0                 : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F6_MSB_O_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F7_LSB_O_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F7_MSB_O_SM_LANE_5_0                 : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD9_t;
__xdata __at( 0x4168 ) volatile DFE_READ_SM_REG_ODD9_t DFE_READ_SM_REG_ODD9;
#define reg_DFE_F6_LSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD9.BF.DFE_F6_LSB_O_SM_LANE_5_0
#define reg_DFE_F6_MSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD9.BF.DFE_F6_MSB_O_SM_LANE_5_0
#define reg_DFE_F7_LSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD9.BF.DFE_F7_LSB_O_SM_LANE_5_0
#define reg_DFE_F7_MSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD9.BF.DFE_F7_MSB_O_SM_LANE_5_0

// 0x016c	DFE_READ_SM_REG_ODD10		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD10
typedef union {
	struct {
		uint8_t DFE_FF0_O_SM_LANE_5_0                    : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F8_LSB_O_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F8_MSB_O_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FF1_O_SM_LANE_5_0                    : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD10_t;
__xdata __at( 0x416c ) volatile DFE_READ_SM_REG_ODD10_t DFE_READ_SM_REG_ODD10;
#define reg_DFE_FF0_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD10.BF.DFE_FF0_O_SM_LANE_5_0
#define reg_DFE_F8_LSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD10.BF.DFE_F8_LSB_O_SM_LANE_5_0
#define reg_DFE_F8_MSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD10.BF.DFE_F8_MSB_O_SM_LANE_5_0
#define reg_DFE_FF1_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD10.BF.DFE_FF1_O_SM_LANE_5_0

// 0x0170	DFE_READ_SM_REG_ODD11		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD11
typedef union {
	struct {
		uint8_t DFE_F9_LSB_O_SM_LANE_5_0                 : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F9_MSB_O_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FF2_O_SM_LANE_5_0                    : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F10_LSB_O_SM_LANE_5_0                : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD11_t;
__xdata __at( 0x4170 ) volatile DFE_READ_SM_REG_ODD11_t DFE_READ_SM_REG_ODD11;
#define reg_DFE_F9_LSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD11.BF.DFE_F9_LSB_O_SM_LANE_5_0
#define reg_DFE_F9_MSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD11.BF.DFE_F9_MSB_O_SM_LANE_5_0
#define reg_DFE_FF2_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD11.BF.DFE_FF2_O_SM_LANE_5_0
#define reg_DFE_F10_LSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD11.BF.DFE_F10_LSB_O_SM_LANE_5_0

// 0x0174	DFE_READ_SM_REG_ODD12		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD12
typedef union {
	struct {
		uint8_t DFE_F10_MSB_O_SM_LANE_5_0                : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FF3_O_SM_LANE_5_0                    : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F11_O_SM_LANE_4_0                    : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FF4_O_SM_LANE_5_0                    : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD12_t;
__xdata __at( 0x4174 ) volatile DFE_READ_SM_REG_ODD12_t DFE_READ_SM_REG_ODD12;
#define reg_DFE_F10_MSB_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD12.BF.DFE_F10_MSB_O_SM_LANE_5_0
#define reg_DFE_FF3_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD12.BF.DFE_FF3_O_SM_LANE_5_0
#define reg_DFE_F11_O_SM_LANE_4_0  DFE_READ_SM_REG_ODD12.BF.DFE_F11_O_SM_LANE_4_0
#define reg_DFE_FF4_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD12.BF.DFE_FF4_O_SM_LANE_5_0

// 0x0178	DFE_READ_SM_REG_ODD13		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD13
typedef union {
	struct {
		uint8_t DFE_F12_O_SM_LANE_4_0                    : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FF5_O_SM_LANE_5_0                    : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F13_O_SM_LANE_4_0                    : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_F14_O_SM_LANE_4_0                    : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD13_t;
__xdata __at( 0x4178 ) volatile DFE_READ_SM_REG_ODD13_t DFE_READ_SM_REG_ODD13;
#define reg_DFE_F12_O_SM_LANE_4_0  DFE_READ_SM_REG_ODD13.BF.DFE_F12_O_SM_LANE_4_0
#define reg_DFE_FF5_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD13.BF.DFE_FF5_O_SM_LANE_5_0
#define reg_DFE_F13_O_SM_LANE_4_0  DFE_READ_SM_REG_ODD13.BF.DFE_F13_O_SM_LANE_4_0
#define reg_DFE_F14_O_SM_LANE_4_0  DFE_READ_SM_REG_ODD13.BF.DFE_F14_O_SM_LANE_4_0

// 0x017c	DFE_READ_SM_REG_ODD14		DFE TAP SIGN_MAGNITUDE READ BACK REG ODD14
typedef union {
	struct {
		uint8_t DFE_F15_O_SM_LANE_4_0                    : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_F1P5_O_SM_LANE_5_0                   : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F1_TUNE_BOT_S_O_LANE_3_0             : 4;	/*[19:16]       r 4'h0*/
		uint8_t DFE_F1_TUNE_BOT_D_O_LANE_3_0             : 4;	/*[23:20]       r 4'h0*/
		uint8_t DFE_F1_TUNE_TOP_S_O_LANE_3_0             : 4;	/*[27:24]       r 4'h0*/
		uint8_t DFE_F1_TUNE_TOP_D_O_LANE_3_0             : 4;	/*[31:28]       r 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_SM_REG_ODD14_t;
__xdata __at( 0x417c ) volatile DFE_READ_SM_REG_ODD14_t DFE_READ_SM_REG_ODD14;
#define reg_DFE_F15_O_SM_LANE_4_0  DFE_READ_SM_REG_ODD14.BF.DFE_F15_O_SM_LANE_4_0
#define reg_DFE_F1P5_O_SM_LANE_5_0  DFE_READ_SM_REG_ODD14.BF.DFE_F1P5_O_SM_LANE_5_0
#define reg_DFE_F1_TUNE_BOT_S_O_LANE_3_0  DFE_READ_SM_REG_ODD14.BF.DFE_F1_TUNE_BOT_S_O_LANE_3_0
#define reg_DFE_F1_TUNE_BOT_D_O_LANE_3_0  DFE_READ_SM_REG_ODD14.BF.DFE_F1_TUNE_BOT_D_O_LANE_3_0
#define reg_DFE_F1_TUNE_TOP_S_O_LANE_3_0  DFE_READ_SM_REG_ODD14.BF.DFE_F1_TUNE_TOP_S_O_LANE_3_0
#define reg_DFE_F1_TUNE_TOP_D_O_LANE_3_0  DFE_READ_SM_REG_ODD14.BF.DFE_F1_TUNE_TOP_D_O_LANE_3_0

// 0x0180	DFE_READ_2C_REG_ODD0		DFE TAP 2'S COMPLIMENT READ BACK REG ODD0
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_O_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_D_MID_O_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_D_TOP_O_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_DC_S_BOT_O_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD0_t;
__xdata __at( 0x4180 ) volatile DFE_READ_2C_REG_ODD0_t DFE_READ_2C_REG_ODD0;
#define reg_DFE_DC_D_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD0.BF.DFE_DC_D_BOT_O_2C_LANE_7_0
#define reg_DFE_DC_D_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD0.BF.DFE_DC_D_MID_O_2C_LANE_7_0
#define reg_DFE_DC_D_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD0.BF.DFE_DC_D_TOP_O_2C_LANE_7_0
#define reg_DFE_DC_S_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD0.BF.DFE_DC_S_BOT_O_2C_LANE_7_0

// 0x0184	DFE_READ_2C_REG_ODD1		DFE TAP 2'S COMPLIMENT READ BACK REG ODD1
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_O_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_S_TOP_O_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_E_O_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_VREF_BOT_O_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD1_t;
__xdata __at( 0x4184 ) volatile DFE_READ_2C_REG_ODD1_t DFE_READ_2C_REG_ODD1;
#define reg_DFE_DC_S_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD1.BF.DFE_DC_S_MID_O_2C_LANE_7_0
#define reg_DFE_DC_S_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD1.BF.DFE_DC_S_TOP_O_2C_LANE_7_0
#define reg_DFE_DC_E_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD1.BF.DFE_DC_E_O_2C_LANE_7_0
#define reg_DFE_VREF_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD1.BF.DFE_VREF_BOT_O_2C_LANE_7_0

// 0x0188	DFE_READ_2C_REG_ODD2		DFE TAP 2'S COMPLIMENT READ BACK REG ODD2
typedef union {
	struct {
		uint8_t DFE_VREF_MID_O_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_VREF_TOP_O_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_D_BOT_O_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_D_MID_O_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD2_t;
__xdata __at( 0x4188 ) volatile DFE_READ_2C_REG_ODD2_t DFE_READ_2C_REG_ODD2;
#define reg_DFE_VREF_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD2.BF.DFE_VREF_MID_O_2C_LANE_7_0
#define reg_DFE_VREF_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD2.BF.DFE_VREF_TOP_O_2C_LANE_7_0
#define reg_DFE_F0_D_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD2.BF.DFE_F0_D_BOT_O_2C_LANE_7_0
#define reg_DFE_F0_D_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD2.BF.DFE_F0_D_MID_O_2C_LANE_7_0

// 0x018c	DFE_READ_2C_REG_ODD3		DFE TAP 2'S COMPLIMENT READ BACK REG ODD3
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_O_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F0_S_BOT_O_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_S_MID_O_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_S_TOP_O_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD3_t;
__xdata __at( 0x418c ) volatile DFE_READ_2C_REG_ODD3_t DFE_READ_2C_REG_ODD3;
#define reg_DFE_F0_D_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD3.BF.DFE_F0_D_TOP_O_2C_LANE_7_0
#define reg_DFE_F0_S_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD3.BF.DFE_F0_S_BOT_O_2C_LANE_7_0
#define reg_DFE_F0_S_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD3.BF.DFE_F0_S_MID_O_2C_LANE_7_0
#define reg_DFE_F0_S_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD3.BF.DFE_F0_S_TOP_O_2C_LANE_7_0

// 0x0190	DFE_READ_2C_REG_ODD4		DFE TAP 2'S COMPLIMENT READ BACK REG ODD4
typedef union {
	struct {
		uint8_t DFE_F1_D_BOT_O_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F1_D_MID_O_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F1_D_TOP_O_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F1_S_BOT_O_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD4_t;
__xdata __at( 0x4190 ) volatile DFE_READ_2C_REG_ODD4_t DFE_READ_2C_REG_ODD4;
#define reg_DFE_F1_D_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD4.BF.DFE_F1_D_BOT_O_2C_LANE_7_0
#define reg_DFE_F1_D_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD4.BF.DFE_F1_D_MID_O_2C_LANE_7_0
#define reg_DFE_F1_D_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD4.BF.DFE_F1_D_TOP_O_2C_LANE_7_0
#define reg_DFE_F1_S_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD4.BF.DFE_F1_S_BOT_O_2C_LANE_7_0

// 0x0194	DFE_READ_2C_REG_ODD5		DFE TAP 2'S COMPLIMENT READ BACK REG ODD5
typedef union {
	struct {
		uint8_t DFE_F1_S_MID_O_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F1_S_TOP_O_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_D_BOT_O_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_D_MID_O_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD5_t;
__xdata __at( 0x4194 ) volatile DFE_READ_2C_REG_ODD5_t DFE_READ_2C_REG_ODD5;
#define reg_DFE_F1_S_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD5.BF.DFE_F1_S_MID_O_2C_LANE_7_0
#define reg_DFE_F1_S_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD5.BF.DFE_F1_S_TOP_O_2C_LANE_7_0
#define reg_DFE_F2_D_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD5.BF.DFE_F2_D_BOT_O_2C_LANE_7_0
#define reg_DFE_F2_D_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD5.BF.DFE_F2_D_MID_O_2C_LANE_7_0

// 0x0198	DFE_READ_2C_REG_ODD6		DFE TAP 2'S COMPLIMENT READ BACK REG ODD6
typedef union {
	struct {
		uint8_t DFE_F2_D_TOP_O_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_S_BOT_O_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_S_MID_O_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_S_TOP_O_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD6_t;
__xdata __at( 0x4198 ) volatile DFE_READ_2C_REG_ODD6_t DFE_READ_2C_REG_ODD6;
#define reg_DFE_F2_D_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD6.BF.DFE_F2_D_TOP_O_2C_LANE_7_0
#define reg_DFE_F2_S_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD6.BF.DFE_F2_S_BOT_O_2C_LANE_7_0
#define reg_DFE_F2_S_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD6.BF.DFE_F2_S_MID_O_2C_LANE_7_0
#define reg_DFE_F2_S_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD6.BF.DFE_F2_S_TOP_O_2C_LANE_7_0

// 0x019c	DFE_READ_2C_REG_ODD7		DFE TAP 2'S COMPLIMENT READ BACK REG ODD7
typedef union {
	struct {
		uint8_t DFE_F3_BOT_O_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F3_MID_O_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_TOP_O_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F4_BOT_O_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD7_t;
__xdata __at( 0x419c ) volatile DFE_READ_2C_REG_ODD7_t DFE_READ_2C_REG_ODD7;
#define reg_DFE_F3_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD7.BF.DFE_F3_BOT_O_2C_LANE_7_0
#define reg_DFE_F3_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD7.BF.DFE_F3_MID_O_2C_LANE_7_0
#define reg_DFE_F3_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD7.BF.DFE_F3_TOP_O_2C_LANE_7_0
#define reg_DFE_F4_BOT_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD7.BF.DFE_F4_BOT_O_2C_LANE_7_0

// 0x01a0	DFE_READ_2C_REG_ODD8		DFE TAP 2'S COMPLIMENT READ BACK REG ODD8
typedef union {
	struct {
		uint8_t DFE_F4_MID_O_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_TOP_O_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F5_LSB_O_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F5_MSB_O_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD8_t;
__xdata __at( 0x41a0 ) volatile DFE_READ_2C_REG_ODD8_t DFE_READ_2C_REG_ODD8;
#define reg_DFE_F4_MID_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD8.BF.DFE_F4_MID_O_2C_LANE_7_0
#define reg_DFE_F4_TOP_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD8.BF.DFE_F4_TOP_O_2C_LANE_7_0
#define reg_DFE_F5_LSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD8.BF.DFE_F5_LSB_O_2C_LANE_7_0
#define reg_DFE_F5_MSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD8.BF.DFE_F5_MSB_O_2C_LANE_7_0

// 0x01a4	DFE_READ_2C_REG_ODD9		DFE TAP 2'S COMPLIMENT READ BACK REG ODD9
typedef union {
	struct {
		uint8_t DFE_F6_LSB_O_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F6_MSB_O_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F7_LSB_O_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F7_MSB_O_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD9_t;
__xdata __at( 0x41a4 ) volatile DFE_READ_2C_REG_ODD9_t DFE_READ_2C_REG_ODD9;
#define reg_DFE_F6_LSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD9.BF.DFE_F6_LSB_O_2C_LANE_7_0
#define reg_DFE_F6_MSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD9.BF.DFE_F6_MSB_O_2C_LANE_7_0
#define reg_DFE_F7_LSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD9.BF.DFE_F7_LSB_O_2C_LANE_7_0
#define reg_DFE_F7_MSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD9.BF.DFE_F7_MSB_O_2C_LANE_7_0

// 0x01a8	DFE_READ_2C_REG_ODD10		DFE TAP 2'S COMPLIMENT READ BACK REG ODD10
typedef union {
	struct {
		uint8_t DFE_FF0_O_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F8_LSB_O_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F8_MSB_O_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_FF1_O_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD10_t;
__xdata __at( 0x41a8 ) volatile DFE_READ_2C_REG_ODD10_t DFE_READ_2C_REG_ODD10;
#define reg_DFE_FF0_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD10.BF.DFE_FF0_O_2C_LANE_7_0
#define reg_DFE_F8_LSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD10.BF.DFE_F8_LSB_O_2C_LANE_7_0
#define reg_DFE_F8_MSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD10.BF.DFE_F8_MSB_O_2C_LANE_7_0
#define reg_DFE_FF1_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD10.BF.DFE_FF1_O_2C_LANE_7_0

// 0x01ac	DFE_READ_2C_REG_ODD11		DFE TAP 2'S COMPLIMENT READ BACK REG ODD11
typedef union {
	struct {
		uint8_t DFE_F9_LSB_O_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F9_MSB_O_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_FF2_O_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F10_LSB_O_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD11_t;
__xdata __at( 0x41ac ) volatile DFE_READ_2C_REG_ODD11_t DFE_READ_2C_REG_ODD11;
#define reg_DFE_F9_LSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD11.BF.DFE_F9_LSB_O_2C_LANE_7_0
#define reg_DFE_F9_MSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD11.BF.DFE_F9_MSB_O_2C_LANE_7_0
#define reg_DFE_FF2_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD11.BF.DFE_FF2_O_2C_LANE_7_0
#define reg_DFE_F10_LSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD11.BF.DFE_F10_LSB_O_2C_LANE_7_0

// 0x01b0	DFE_READ_2C_REG_ODD12		DFE TAP 2'S COMPLIMENT READ BACK REG ODD12
typedef union {
	struct {
		uint8_t DFE_F10_MSB_O_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_FF3_O_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F11_O_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_FF4_O_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD12_t;
__xdata __at( 0x41b0 ) volatile DFE_READ_2C_REG_ODD12_t DFE_READ_2C_REG_ODD12;
#define reg_DFE_F10_MSB_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD12.BF.DFE_F10_MSB_O_2C_LANE_7_0
#define reg_DFE_FF3_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD12.BF.DFE_FF3_O_2C_LANE_7_0
#define reg_DFE_F11_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD12.BF.DFE_F11_O_2C_LANE_7_0
#define reg_DFE_FF4_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD12.BF.DFE_FF4_O_2C_LANE_7_0

// 0x01b4	DFE_READ_2C_REG_ODD13		DFE TAP 2'S COMPLIMENT READ BACK REG ODD13
typedef union {
	struct {
		uint8_t DFE_F12_O_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_FF5_O_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F13_O_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F14_O_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD13_t;
__xdata __at( 0x41b4 ) volatile DFE_READ_2C_REG_ODD13_t DFE_READ_2C_REG_ODD13;
#define reg_DFE_F12_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD13.BF.DFE_F12_O_2C_LANE_7_0
#define reg_DFE_FF5_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD13.BF.DFE_FF5_O_2C_LANE_7_0
#define reg_DFE_F13_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD13.BF.DFE_F13_O_2C_LANE_7_0
#define reg_DFE_F14_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD13.BF.DFE_F14_O_2C_LANE_7_0

// 0x01b8	DFE_READ_2C_REG_ODD14		DFE TAP 2'S COMPLIMENT READ BACK REG ODD14
typedef union {
	struct {
		uint8_t DFE_F15_O_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F1P5_O_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_ODD14_t;
__xdata __at( 0x41b8 ) volatile DFE_READ_2C_REG_ODD14_t DFE_READ_2C_REG_ODD14;
#define reg_DFE_F15_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD14.BF.DFE_F15_O_2C_LANE_7_0
#define reg_DFE_F1P5_O_2C_LANE_7_0  DFE_READ_2C_REG_ODD14.BF.DFE_F1P5_O_2C_LANE_7_0

// 0x01bc	DFE_READ_2C_REG_EVEN0		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN0
typedef union {
	struct {
		uint8_t DFE_DC_D_BOT_E_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_D_MID_E_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_D_TOP_E_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_DC_S_BOT_E_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN0_t;
__xdata __at( 0x41bc ) volatile DFE_READ_2C_REG_EVEN0_t DFE_READ_2C_REG_EVEN0;
#define reg_DFE_DC_D_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN0.BF.DFE_DC_D_BOT_E_2C_LANE_7_0
#define reg_DFE_DC_D_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN0.BF.DFE_DC_D_MID_E_2C_LANE_7_0
#define reg_DFE_DC_D_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN0.BF.DFE_DC_D_TOP_E_2C_LANE_7_0
#define reg_DFE_DC_S_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN0.BF.DFE_DC_S_BOT_E_2C_LANE_7_0

// 0x01c0	DFE_READ_2C_REG_EVEN1		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN1
typedef union {
	struct {
		uint8_t DFE_DC_S_MID_E_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_S_TOP_E_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_E_E_2C_LANE_7_0                   : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_VREF_BOT_E_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN1_t;
__xdata __at( 0x41c0 ) volatile DFE_READ_2C_REG_EVEN1_t DFE_READ_2C_REG_EVEN1;
#define reg_DFE_DC_S_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN1.BF.DFE_DC_S_MID_E_2C_LANE_7_0
#define reg_DFE_DC_S_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN1.BF.DFE_DC_S_TOP_E_2C_LANE_7_0
#define reg_DFE_DC_E_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN1.BF.DFE_DC_E_E_2C_LANE_7_0
#define reg_DFE_VREF_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN1.BF.DFE_VREF_BOT_E_2C_LANE_7_0

// 0x01c4	DFE_READ_2C_REG_EVEN2		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN2
typedef union {
	struct {
		uint8_t DFE_VREF_MID_E_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_VREF_TOP_E_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_D_BOT_E_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_D_MID_E_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN2_t;
__xdata __at( 0x41c4 ) volatile DFE_READ_2C_REG_EVEN2_t DFE_READ_2C_REG_EVEN2;
#define reg_DFE_VREF_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN2.BF.DFE_VREF_MID_E_2C_LANE_7_0
#define reg_DFE_VREF_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN2.BF.DFE_VREF_TOP_E_2C_LANE_7_0
#define reg_DFE_F0_D_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN2.BF.DFE_F0_D_BOT_E_2C_LANE_7_0
#define reg_DFE_F0_D_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN2.BF.DFE_F0_D_MID_E_2C_LANE_7_0

// 0x01c8	DFE_READ_2C_REG_EVEN3		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN3
typedef union {
	struct {
		uint8_t DFE_F0_D_TOP_E_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F0_S_BOT_E_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_S_MID_E_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_S_TOP_E_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN3_t;
__xdata __at( 0x41c8 ) volatile DFE_READ_2C_REG_EVEN3_t DFE_READ_2C_REG_EVEN3;
#define reg_DFE_F0_D_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN3.BF.DFE_F0_D_TOP_E_2C_LANE_7_0
#define reg_DFE_F0_S_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN3.BF.DFE_F0_S_BOT_E_2C_LANE_7_0
#define reg_DFE_F0_S_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN3.BF.DFE_F0_S_MID_E_2C_LANE_7_0
#define reg_DFE_F0_S_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN3.BF.DFE_F0_S_TOP_E_2C_LANE_7_0

// 0x01cc	DFE_READ_2C_REG_EVEN4		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN4
typedef union {
	struct {
		uint8_t DFE_F1_D_BOT_E_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F1_D_MID_E_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F1_D_TOP_E_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F1_S_BOT_E_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN4_t;
__xdata __at( 0x41cc ) volatile DFE_READ_2C_REG_EVEN4_t DFE_READ_2C_REG_EVEN4;
#define reg_DFE_F1_D_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN4.BF.DFE_F1_D_BOT_E_2C_LANE_7_0
#define reg_DFE_F1_D_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN4.BF.DFE_F1_D_MID_E_2C_LANE_7_0
#define reg_DFE_F1_D_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN4.BF.DFE_F1_D_TOP_E_2C_LANE_7_0
#define reg_DFE_F1_S_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN4.BF.DFE_F1_S_BOT_E_2C_LANE_7_0

// 0x01d0	DFE_READ_2C_REG_EVEN5		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN5
typedef union {
	struct {
		uint8_t DFE_F1_S_MID_E_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F1_S_TOP_E_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_D_BOT_E_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_D_MID_E_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN5_t;
__xdata __at( 0x41d0 ) volatile DFE_READ_2C_REG_EVEN5_t DFE_READ_2C_REG_EVEN5;
#define reg_DFE_F1_S_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN5.BF.DFE_F1_S_MID_E_2C_LANE_7_0
#define reg_DFE_F1_S_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN5.BF.DFE_F1_S_TOP_E_2C_LANE_7_0
#define reg_DFE_F2_D_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN5.BF.DFE_F2_D_BOT_E_2C_LANE_7_0
#define reg_DFE_F2_D_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN5.BF.DFE_F2_D_MID_E_2C_LANE_7_0

// 0x01d4	DFE_READ_2C_REG_EVEN6		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN6
typedef union {
	struct {
		uint8_t DFE_F2_D_TOP_E_2C_LANE_7_0               : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_S_BOT_E_2C_LANE_7_0               : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_S_MID_E_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_S_TOP_E_2C_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN6_t;
__xdata __at( 0x41d4 ) volatile DFE_READ_2C_REG_EVEN6_t DFE_READ_2C_REG_EVEN6;
#define reg_DFE_F2_D_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN6.BF.DFE_F2_D_TOP_E_2C_LANE_7_0
#define reg_DFE_F2_S_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN6.BF.DFE_F2_S_BOT_E_2C_LANE_7_0
#define reg_DFE_F2_S_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN6.BF.DFE_F2_S_MID_E_2C_LANE_7_0
#define reg_DFE_F2_S_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN6.BF.DFE_F2_S_TOP_E_2C_LANE_7_0

// 0x01d8	DFE_READ_2C_REG_EVEN7		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN7
typedef union {
	struct {
		uint8_t DFE_F3_BOT_E_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F3_MID_E_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_TOP_E_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F4_BOT_E_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN7_t;
__xdata __at( 0x41d8 ) volatile DFE_READ_2C_REG_EVEN7_t DFE_READ_2C_REG_EVEN7;
#define reg_DFE_F3_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN7.BF.DFE_F3_BOT_E_2C_LANE_7_0
#define reg_DFE_F3_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN7.BF.DFE_F3_MID_E_2C_LANE_7_0
#define reg_DFE_F3_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN7.BF.DFE_F3_TOP_E_2C_LANE_7_0
#define reg_DFE_F4_BOT_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN7.BF.DFE_F4_BOT_E_2C_LANE_7_0

// 0x01dc	DFE_READ_2C_REG_EVEN8		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN8
typedef union {
	struct {
		uint8_t DFE_F4_MID_E_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_TOP_E_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F5_LSB_E_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F5_MSB_E_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN8_t;
__xdata __at( 0x41dc ) volatile DFE_READ_2C_REG_EVEN8_t DFE_READ_2C_REG_EVEN8;
#define reg_DFE_F4_MID_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN8.BF.DFE_F4_MID_E_2C_LANE_7_0
#define reg_DFE_F4_TOP_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN8.BF.DFE_F4_TOP_E_2C_LANE_7_0
#define reg_DFE_F5_LSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN8.BF.DFE_F5_LSB_E_2C_LANE_7_0
#define reg_DFE_F5_MSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN8.BF.DFE_F5_MSB_E_2C_LANE_7_0

// 0x01e0	DFE_READ_2C_REG_EVEN9		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN9
typedef union {
	struct {
		uint8_t DFE_F6_LSB_E_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F6_MSB_E_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F7_LSB_E_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F7_MSB_E_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN9_t;
__xdata __at( 0x41e0 ) volatile DFE_READ_2C_REG_EVEN9_t DFE_READ_2C_REG_EVEN9;
#define reg_DFE_F6_LSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN9.BF.DFE_F6_LSB_E_2C_LANE_7_0
#define reg_DFE_F6_MSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN9.BF.DFE_F6_MSB_E_2C_LANE_7_0
#define reg_DFE_F7_LSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN9.BF.DFE_F7_LSB_E_2C_LANE_7_0
#define reg_DFE_F7_MSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN9.BF.DFE_F7_MSB_E_2C_LANE_7_0

// 0x01e4	DFE_READ_2C_REG_EVEN10		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN10
typedef union {
	struct {
		uint8_t DFE_FF0_E_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F8_LSB_E_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F8_MSB_E_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_FF1_E_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN10_t;
__xdata __at( 0x41e4 ) volatile DFE_READ_2C_REG_EVEN10_t DFE_READ_2C_REG_EVEN10;
#define reg_DFE_FF0_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN10.BF.DFE_FF0_E_2C_LANE_7_0
#define reg_DFE_F8_LSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN10.BF.DFE_F8_LSB_E_2C_LANE_7_0
#define reg_DFE_F8_MSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN10.BF.DFE_F8_MSB_E_2C_LANE_7_0
#define reg_DFE_FF1_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN10.BF.DFE_FF1_E_2C_LANE_7_0

// 0x01e8	DFE_READ_2C_REG_EVEN11		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN11
typedef union {
	struct {
		uint8_t DFE_F9_LSB_E_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F9_MSB_E_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_FF2_E_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F10_LSB_E_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN11_t;
__xdata __at( 0x41e8 ) volatile DFE_READ_2C_REG_EVEN11_t DFE_READ_2C_REG_EVEN11;
#define reg_DFE_F9_LSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN11.BF.DFE_F9_LSB_E_2C_LANE_7_0
#define reg_DFE_F9_MSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN11.BF.DFE_F9_MSB_E_2C_LANE_7_0
#define reg_DFE_FF2_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN11.BF.DFE_FF2_E_2C_LANE_7_0
#define reg_DFE_F10_LSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN11.BF.DFE_F10_LSB_E_2C_LANE_7_0

// 0x01ec	DFE_READ_2C_REG_EVEN12		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN12
typedef union {
	struct {
		uint8_t DFE_F10_MSB_E_2C_LANE_7_0                : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_FF3_E_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F11_E_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_FF4_E_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN12_t;
__xdata __at( 0x41ec ) volatile DFE_READ_2C_REG_EVEN12_t DFE_READ_2C_REG_EVEN12;
#define reg_DFE_F10_MSB_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN12.BF.DFE_F10_MSB_E_2C_LANE_7_0
#define reg_DFE_FF3_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN12.BF.DFE_FF3_E_2C_LANE_7_0
#define reg_DFE_F11_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN12.BF.DFE_F11_E_2C_LANE_7_0
#define reg_DFE_FF4_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN12.BF.DFE_FF4_E_2C_LANE_7_0

// 0x01f0	DFE_READ_2C_REG_EVEN13		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN13
typedef union {
	struct {
		uint8_t DFE_F12_E_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_FF5_E_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F13_E_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F14_E_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN13_t;
__xdata __at( 0x41f0 ) volatile DFE_READ_2C_REG_EVEN13_t DFE_READ_2C_REG_EVEN13;
#define reg_DFE_F12_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN13.BF.DFE_F12_E_2C_LANE_7_0
#define reg_DFE_FF5_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN13.BF.DFE_FF5_E_2C_LANE_7_0
#define reg_DFE_F13_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN13.BF.DFE_F13_E_2C_LANE_7_0
#define reg_DFE_F14_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN13.BF.DFE_F14_E_2C_LANE_7_0

// 0x01f4	DFE_READ_2C_REG_EVEN14		DFE TAP 2'S COMPLIMENT READ BACK REG EVEN14
typedef union {
	struct {
		uint8_t DFE_F15_E_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F1P5_E_2C_LANE_7_0                   : 8;	/* [15:8]       r 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_2C_REG_EVEN14_t;
__xdata __at( 0x41f4 ) volatile DFE_READ_2C_REG_EVEN14_t DFE_READ_2C_REG_EVEN14;
#define reg_DFE_F15_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN14.BF.DFE_F15_E_2C_LANE_7_0
#define reg_DFE_F1P5_E_2C_LANE_7_0  DFE_READ_2C_REG_EVEN14.BF.DFE_F1P5_E_2C_LANE_7_0

// 0x0200	EOM_ERR_REG00		EOM ERROR COUNT
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
__xdata __at( 0x4200 ) volatile EOM_ERR_REG00_t EOM_ERR_REG00;
#define reg_EOM_ERR_CNT_TOP_P_LANE_31_0_b0  EOM_ERR_REG00.BF.EOM_ERR_CNT_TOP_P_LANE_31_0_b0
#define reg_EOM_ERR_CNT_TOP_P_LANE_31_0_b1  EOM_ERR_REG00.BF.EOM_ERR_CNT_TOP_P_LANE_31_0_b1
#define reg_EOM_ERR_CNT_TOP_P_LANE_31_0_b2  EOM_ERR_REG00.BF.EOM_ERR_CNT_TOP_P_LANE_31_0_b2
#define reg_EOM_ERR_CNT_TOP_P_LANE_31_0_b3  EOM_ERR_REG00.BF.EOM_ERR_CNT_TOP_P_LANE_31_0_b3

// 0x0204	EOM_ERR_REG01		EOM ERROR COUNT
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
__xdata __at( 0x4204 ) volatile EOM_ERR_REG01_t EOM_ERR_REG01;
#define reg_EOM_ERR_CNT_MID_P_LANE_31_0_b0  EOM_ERR_REG01.BF.EOM_ERR_CNT_MID_P_LANE_31_0_b0
#define reg_EOM_ERR_CNT_MID_P_LANE_31_0_b1  EOM_ERR_REG01.BF.EOM_ERR_CNT_MID_P_LANE_31_0_b1
#define reg_EOM_ERR_CNT_MID_P_LANE_31_0_b2  EOM_ERR_REG01.BF.EOM_ERR_CNT_MID_P_LANE_31_0_b2
#define reg_EOM_ERR_CNT_MID_P_LANE_31_0_b3  EOM_ERR_REG01.BF.EOM_ERR_CNT_MID_P_LANE_31_0_b3

// 0x0208	EOM_ERR_REG02		EOM ERROR COUNT
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
__xdata __at( 0x4208 ) volatile EOM_ERR_REG02_t EOM_ERR_REG02;
#define reg_EOM_ERR_CNT_BOT_P_LANE_31_0_b0  EOM_ERR_REG02.BF.EOM_ERR_CNT_BOT_P_LANE_31_0_b0
#define reg_EOM_ERR_CNT_BOT_P_LANE_31_0_b1  EOM_ERR_REG02.BF.EOM_ERR_CNT_BOT_P_LANE_31_0_b1
#define reg_EOM_ERR_CNT_BOT_P_LANE_31_0_b2  EOM_ERR_REG02.BF.EOM_ERR_CNT_BOT_P_LANE_31_0_b2
#define reg_EOM_ERR_CNT_BOT_P_LANE_31_0_b3  EOM_ERR_REG02.BF.EOM_ERR_CNT_BOT_P_LANE_31_0_b3

// 0x020c	EOM_ERR_REG10		EOM ERROR COUNT
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
__xdata __at( 0x420c ) volatile EOM_ERR_REG10_t EOM_ERR_REG10;
#define reg_EOM_ERR_CNT_TOP_N_LANE_31_0_b0  EOM_ERR_REG10.BF.EOM_ERR_CNT_TOP_N_LANE_31_0_b0
#define reg_EOM_ERR_CNT_TOP_N_LANE_31_0_b1  EOM_ERR_REG10.BF.EOM_ERR_CNT_TOP_N_LANE_31_0_b1
#define reg_EOM_ERR_CNT_TOP_N_LANE_31_0_b2  EOM_ERR_REG10.BF.EOM_ERR_CNT_TOP_N_LANE_31_0_b2
#define reg_EOM_ERR_CNT_TOP_N_LANE_31_0_b3  EOM_ERR_REG10.BF.EOM_ERR_CNT_TOP_N_LANE_31_0_b3

// 0x0210	EOM_ERR_REG11		EOM ERROR COUNT
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
__xdata __at( 0x4210 ) volatile EOM_ERR_REG11_t EOM_ERR_REG11;
#define reg_EOM_ERR_CNT_MID_N_LANE_31_0_b0  EOM_ERR_REG11.BF.EOM_ERR_CNT_MID_N_LANE_31_0_b0
#define reg_EOM_ERR_CNT_MID_N_LANE_31_0_b1  EOM_ERR_REG11.BF.EOM_ERR_CNT_MID_N_LANE_31_0_b1
#define reg_EOM_ERR_CNT_MID_N_LANE_31_0_b2  EOM_ERR_REG11.BF.EOM_ERR_CNT_MID_N_LANE_31_0_b2
#define reg_EOM_ERR_CNT_MID_N_LANE_31_0_b3  EOM_ERR_REG11.BF.EOM_ERR_CNT_MID_N_LANE_31_0_b3

// 0x0214	EOM_ERR_REG12		EOM ERROR COUNT
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
__xdata __at( 0x4214 ) volatile EOM_ERR_REG12_t EOM_ERR_REG12;
#define reg_EOM_ERR_CNT_BOT_N_LANE_31_0_b0  EOM_ERR_REG12.BF.EOM_ERR_CNT_BOT_N_LANE_31_0_b0
#define reg_EOM_ERR_CNT_BOT_N_LANE_31_0_b1  EOM_ERR_REG12.BF.EOM_ERR_CNT_BOT_N_LANE_31_0_b1
#define reg_EOM_ERR_CNT_BOT_N_LANE_31_0_b2  EOM_ERR_REG12.BF.EOM_ERR_CNT_BOT_N_LANE_31_0_b2
#define reg_EOM_ERR_CNT_BOT_N_LANE_31_0_b3  EOM_ERR_REG12.BF.EOM_ERR_CNT_BOT_N_LANE_31_0_b3

// 0x0220	EOM_VLD_REG00		EOM VALID COUNT
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
__xdata __at( 0x4220 ) volatile EOM_VLD_REG00_t EOM_VLD_REG00;
#define reg_EOM_VLD_CNT_TOP_P_LANE_31_0_b0  EOM_VLD_REG00.BF.EOM_VLD_CNT_TOP_P_LANE_31_0_b0
#define reg_EOM_VLD_CNT_TOP_P_LANE_31_0_b1  EOM_VLD_REG00.BF.EOM_VLD_CNT_TOP_P_LANE_31_0_b1
#define reg_EOM_VLD_CNT_TOP_P_LANE_31_0_b2  EOM_VLD_REG00.BF.EOM_VLD_CNT_TOP_P_LANE_31_0_b2
#define reg_EOM_VLD_CNT_TOP_P_LANE_31_0_b3  EOM_VLD_REG00.BF.EOM_VLD_CNT_TOP_P_LANE_31_0_b3

// 0x0224	EOM_VLD_REG01		EOM VALID COUNT
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
__xdata __at( 0x4224 ) volatile EOM_VLD_REG01_t EOM_VLD_REG01;
#define reg_EOM_VLD_CNT_MID_P_LANE_31_0_b0  EOM_VLD_REG01.BF.EOM_VLD_CNT_MID_P_LANE_31_0_b0
#define reg_EOM_VLD_CNT_MID_P_LANE_31_0_b1  EOM_VLD_REG01.BF.EOM_VLD_CNT_MID_P_LANE_31_0_b1
#define reg_EOM_VLD_CNT_MID_P_LANE_31_0_b2  EOM_VLD_REG01.BF.EOM_VLD_CNT_MID_P_LANE_31_0_b2
#define reg_EOM_VLD_CNT_MID_P_LANE_31_0_b3  EOM_VLD_REG01.BF.EOM_VLD_CNT_MID_P_LANE_31_0_b3

// 0x0228	EOM_VLD_REG02		EOM VALID COUNT
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
__xdata __at( 0x4228 ) volatile EOM_VLD_REG02_t EOM_VLD_REG02;
#define reg_EOM_VLD_CNT_BOT_P_LANE_31_0_b0  EOM_VLD_REG02.BF.EOM_VLD_CNT_BOT_P_LANE_31_0_b0
#define reg_EOM_VLD_CNT_BOT_P_LANE_31_0_b1  EOM_VLD_REG02.BF.EOM_VLD_CNT_BOT_P_LANE_31_0_b1
#define reg_EOM_VLD_CNT_BOT_P_LANE_31_0_b2  EOM_VLD_REG02.BF.EOM_VLD_CNT_BOT_P_LANE_31_0_b2
#define reg_EOM_VLD_CNT_BOT_P_LANE_31_0_b3  EOM_VLD_REG02.BF.EOM_VLD_CNT_BOT_P_LANE_31_0_b3

// 0x022c	EOM_VLD_REG10		EOM VALID COUNT
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
__xdata __at( 0x422c ) volatile EOM_VLD_REG10_t EOM_VLD_REG10;
#define reg_EOM_VLD_CNT_TOP_N_LANE_31_0_b0  EOM_VLD_REG10.BF.EOM_VLD_CNT_TOP_N_LANE_31_0_b0
#define reg_EOM_VLD_CNT_TOP_N_LANE_31_0_b1  EOM_VLD_REG10.BF.EOM_VLD_CNT_TOP_N_LANE_31_0_b1
#define reg_EOM_VLD_CNT_TOP_N_LANE_31_0_b2  EOM_VLD_REG10.BF.EOM_VLD_CNT_TOP_N_LANE_31_0_b2
#define reg_EOM_VLD_CNT_TOP_N_LANE_31_0_b3  EOM_VLD_REG10.BF.EOM_VLD_CNT_TOP_N_LANE_31_0_b3

// 0x0230	EOM_VLD_REG11		EOM VALID COUNT
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
__xdata __at( 0x4230 ) volatile EOM_VLD_REG11_t EOM_VLD_REG11;
#define reg_EOM_VLD_CNT_MID_N_LANE_31_0_b0  EOM_VLD_REG11.BF.EOM_VLD_CNT_MID_N_LANE_31_0_b0
#define reg_EOM_VLD_CNT_MID_N_LANE_31_0_b1  EOM_VLD_REG11.BF.EOM_VLD_CNT_MID_N_LANE_31_0_b1
#define reg_EOM_VLD_CNT_MID_N_LANE_31_0_b2  EOM_VLD_REG11.BF.EOM_VLD_CNT_MID_N_LANE_31_0_b2
#define reg_EOM_VLD_CNT_MID_N_LANE_31_0_b3  EOM_VLD_REG11.BF.EOM_VLD_CNT_MID_N_LANE_31_0_b3

// 0x0234	EOM_VLD_REG12		EOM VALID COUNT
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
__xdata __at( 0x4234 ) volatile EOM_VLD_REG12_t EOM_VLD_REG12;
#define reg_EOM_VLD_CNT_BOT_N_LANE_31_0_b0  EOM_VLD_REG12.BF.EOM_VLD_CNT_BOT_N_LANE_31_0_b0
#define reg_EOM_VLD_CNT_BOT_N_LANE_31_0_b1  EOM_VLD_REG12.BF.EOM_VLD_CNT_BOT_N_LANE_31_0_b1
#define reg_EOM_VLD_CNT_BOT_N_LANE_31_0_b2  EOM_VLD_REG12.BF.EOM_VLD_CNT_BOT_N_LANE_31_0_b2
#define reg_EOM_VLD_CNT_BOT_N_LANE_31_0_b3  EOM_VLD_REG12.BF.EOM_VLD_CNT_BOT_N_LANE_31_0_b3

// 0x0238	EOM_VLD_MSB_REG0		EOM VALID COUNT MSB
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
__xdata __at( 0x4238 ) volatile EOM_VLD_MSB_REG0_t EOM_VLD_MSB_REG0;
#define reg_EOM_VLD_CNT_BOT_P_LANE_39_32  EOM_VLD_MSB_REG0.BF.EOM_VLD_CNT_BOT_P_LANE_39_32
#define reg_EOM_VLD_CNT_MID_P_LANE_39_32  EOM_VLD_MSB_REG0.BF.EOM_VLD_CNT_MID_P_LANE_39_32
#define reg_EOM_VLD_CNT_TOP_P_LANE_39_32  EOM_VLD_MSB_REG0.BF.EOM_VLD_CNT_TOP_P_LANE_39_32

// 0x023c	EOM_VLD_MSB_REG1		EOM VALID COUNT MSB
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
__xdata __at( 0x423c ) volatile EOM_VLD_MSB_REG1_t EOM_VLD_MSB_REG1;
#define reg_EOM_VLD_CNT_BOT_N_LANE_39_32  EOM_VLD_MSB_REG1.BF.EOM_VLD_CNT_BOT_N_LANE_39_32
#define reg_EOM_VLD_CNT_MID_N_LANE_39_32  EOM_VLD_MSB_REG1.BF.EOM_VLD_CNT_MID_N_LANE_39_32
#define reg_EOM_VLD_CNT_TOP_N_LANE_39_32  EOM_VLD_MSB_REG1.BF.EOM_VLD_CNT_TOP_N_LANE_39_32

// 0x0240	EOM_CTRL_REG0		EOM CONTROL REG
typedef union {
	struct {
		uint8_t DFE_EOM_SEL_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t EOM_CNT_CLR_LANE                         : 1;	/*      8     r/w   0*/
		uint8_t EOM_POL_FORCE_LANE                       : 1;	/*      9     r/w   0*/
		uint8_t EOM_CNT_AUTO_CLR_LANE                    : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:11]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_CTRL_REG0_t;
__xdata __at( 0x4240 ) volatile EOM_CTRL_REG0_t EOM_CTRL_REG0;
#define reg_DFE_EOM_SEL_LANE_3_0  EOM_CTRL_REG0.BF.DFE_EOM_SEL_LANE_3_0
#define reg_EOM_CNT_CLR_LANE  EOM_CTRL_REG0.BF.EOM_CNT_CLR_LANE
#define reg_EOM_POL_FORCE_LANE  EOM_CTRL_REG0.BF.EOM_POL_FORCE_LANE
#define reg_EOM_CNT_AUTO_CLR_LANE  EOM_CTRL_REG0.BF.EOM_CNT_AUTO_CLR_LANE

// 0x0244	LANE_MARGIN_REG0		Lane Margin Reigster
typedef union {
	struct {
		uint8_t DFE_MARGIN_OFFSET_LANE_6_0               : 7;	/*  [6:0]       r   0*/
		uint8_t DFE_MARGIN_TYPE_LANE                     : 1;	/*      7       r   0*/
		uint8_t DFE_MARGIN_EN_LANE                       : 1;	/*      8       r   0*/
		uint8_t DFE_MARGIN_DIR_LANE                      : 1;	/*      9       r   0*/
		uint8_t DFE_MARGIN_ACK_LANE                      : 1;	/*     10       r   0*/
		uint8_t DFE_MARGIN_READY_LANE                    : 1;	/*     11     r/w   0*/
		uint8_t DFE_MARGIN_CHG_LANE                      : 1;	/*     12       r   0*/
		uint8_t RESERVED_13                              : 3;	/*[31:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:13]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:13]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LANE_MARGIN_REG0_t;
__xdata __at( 0x4244 ) volatile LANE_MARGIN_REG0_t LANE_MARGIN_REG0;
#define reg_DFE_MARGIN_OFFSET_LANE_6_0  LANE_MARGIN_REG0.BF.DFE_MARGIN_OFFSET_LANE_6_0
#define reg_DFE_MARGIN_TYPE_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_TYPE_LANE
#define reg_DFE_MARGIN_EN_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_EN_LANE
#define reg_DFE_MARGIN_DIR_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_DIR_LANE
#define reg_DFE_MARGIN_ACK_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_ACK_LANE
#define reg_DFE_MARGIN_READY_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_READY_LANE
#define reg_DFE_MARGIN_CHG_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_CHG_LANE

#endif
