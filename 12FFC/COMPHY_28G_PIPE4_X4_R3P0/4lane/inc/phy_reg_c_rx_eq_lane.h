#ifndef PHY_REG_C_RX_EQ_LANE_H
#define PHY_REG_C_RX_EQ_LANE_H



// 0x0000	DFE_CTRL_REG0		DFE Control
typedef union {
	struct {
		uint8_t DFE_FLOAT_SEL_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t DFE_ADAPT_SPLR_EN_LANE_3_0               : 4;	/*  [7:4]     r/w 4'hf*/
		uint8_t DFE_F0D_MODE_LANE                        : 1;	/*      8     r/w   0*/
		uint8_t DFE_F0B_MODE_LANE                        : 1;	/*      9     r/w   0*/
		uint8_t DFE_MMSE_MODE_LANE                       : 1;	/*     10     r/w   1*/
		uint8_t DFE_F0B_CENTER_MODE_LANE                 : 1;	/*     11     r/w   0*/
		uint8_t DFE_MAXEO_LOW_MODE_LANE                  : 1;	/*     12     r/w   1*/
		uint8_t DFE_ADAPT_CONT_LANE                      : 1;	/*     13     r/w   0*/
		uint8_t DFE_ADAPT_ABORT_LANE                     : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_START_LANE                           : 1;	/*     16     r/w   0*/
		uint8_t DFE_DONE_LANE                            : 1;	/*     17       r   0*/
		uint8_t DFE_FINE_STEP_EN_LANE                    : 1;	/*     18     r/w   0*/
		uint8_t DFE_COARSE_STEP_EN_LANE                  : 1;	/*     19     r/w   0*/
		uint8_t DFE_ADAPT_ADJ_F1_DC_EN_LANE              : 1;	/*     20     r/w   1*/
		uint8_t DFE_EVEN_ODD_SIM_ADAPT_LANE              : 1;	/*     21     r/w   1*/
		uint8_t DFE_ADAPT_ODD_EN_LANE                    : 1;	/*     22     r/w   1*/
		uint8_t DFE_ADAPT_EVEN_EN_LANE                   : 1;	/*     23     r/w   1*/
		uint8_t DFE_TAP_REFRESH_O_LANE                   : 1;	/*     24     r/w   0*/
		uint8_t DFE_TAP_REFRESH_E_LANE                   : 1;	/*     25     r/w   0*/
		uint8_t DFE_TAP_SIGN_SET_LANE                    : 1;	/*     26     r/w   0*/
		uint8_t DFE_TAP_SIGN_MODE_LANE                   : 1;	/*     27     r/w   0*/
		uint8_t DFE_F1_FB_STOP_LANE                      : 1;	/*     28     r/w   0*/
		uint8_t DFE_DC_LOAD_LANE                         : 1;	/*     29     r/w   0*/
		uint8_t DFE_INIT_SEL_LANE                        : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG0_t;
__xdata __at( 0x2400 ) volatile DFE_CTRL_REG0_t DFE_CTRL_REG0;
#define reg_DFE_FLOAT_SEL_LANE_3_0  DFE_CTRL_REG0.BF.DFE_FLOAT_SEL_LANE_3_0
#define reg_DFE_ADAPT_SPLR_EN_LANE_3_0  DFE_CTRL_REG0.BF.DFE_ADAPT_SPLR_EN_LANE_3_0
#define reg_DFE_F0D_MODE_LANE  DFE_CTRL_REG0.BF.DFE_F0D_MODE_LANE
#define reg_DFE_F0B_MODE_LANE  DFE_CTRL_REG0.BF.DFE_F0B_MODE_LANE
#define reg_DFE_MMSE_MODE_LANE  DFE_CTRL_REG0.BF.DFE_MMSE_MODE_LANE
#define reg_DFE_F0B_CENTER_MODE_LANE  DFE_CTRL_REG0.BF.DFE_F0B_CENTER_MODE_LANE
#define reg_DFE_MAXEO_LOW_MODE_LANE  DFE_CTRL_REG0.BF.DFE_MAXEO_LOW_MODE_LANE
#define reg_DFE_ADAPT_CONT_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_CONT_LANE
#define reg_DFE_ADAPT_ABORT_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_ABORT_LANE
#define reg_DFE_START_LANE  DFE_CTRL_REG0.BF.DFE_START_LANE
#define reg_DFE_DONE_LANE  DFE_CTRL_REG0.BF.DFE_DONE_LANE
#define reg_DFE_FINE_STEP_EN_LANE  DFE_CTRL_REG0.BF.DFE_FINE_STEP_EN_LANE
#define reg_DFE_COARSE_STEP_EN_LANE  DFE_CTRL_REG0.BF.DFE_COARSE_STEP_EN_LANE
#define reg_DFE_ADAPT_ADJ_F1_DC_EN_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_ADJ_F1_DC_EN_LANE
#define reg_DFE_EVEN_ODD_SIM_ADAPT_LANE  DFE_CTRL_REG0.BF.DFE_EVEN_ODD_SIM_ADAPT_LANE
#define reg_DFE_ADAPT_ODD_EN_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_ODD_EN_LANE
#define reg_DFE_ADAPT_EVEN_EN_LANE  DFE_CTRL_REG0.BF.DFE_ADAPT_EVEN_EN_LANE
#define reg_DFE_TAP_REFRESH_O_LANE  DFE_CTRL_REG0.BF.DFE_TAP_REFRESH_O_LANE
#define reg_DFE_TAP_REFRESH_E_LANE  DFE_CTRL_REG0.BF.DFE_TAP_REFRESH_E_LANE
#define reg_DFE_TAP_SIGN_SET_LANE  DFE_CTRL_REG0.BF.DFE_TAP_SIGN_SET_LANE
#define reg_DFE_TAP_SIGN_MODE_LANE  DFE_CTRL_REG0.BF.DFE_TAP_SIGN_MODE_LANE
#define reg_DFE_F1_FB_STOP_LANE  DFE_CTRL_REG0.BF.DFE_F1_FB_STOP_LANE
#define reg_DFE_DC_LOAD_LANE  DFE_CTRL_REG0.BF.DFE_DC_LOAD_LANE
#define reg_DFE_INIT_SEL_LANE  DFE_CTRL_REG0.BF.DFE_INIT_SEL_LANE

// 0x0004	DFE_CTRL_REG1		DFE Control
typedef union {
	struct {
		uint8_t DFE_SAT_F0_TRIG_OFF_LANE_1_0             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DFE_SAT_F0_TRIG_ON_LANE_1_0              : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t DFE_FSM_DEBUG_MODE_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t DFE_FSM_DEBUG_NEXT_LANE                  : 1;	/*      5     r/w   0*/
		uint8_t DFE_CLR_FRAC_EN_LANE                     : 1;	/*      6     r/w   1*/
		uint8_t DFE_TRACK_MODE_LANE                      : 1;	/*      7     r/w   0*/
		uint8_t DFE_FBMD_F1PN_LANE                       : 1;	/*      8     r/w   0*/
		uint8_t DFE_FBMD_DATASLICER_LANE                 : 1;	/*      9     r/w   0*/
		uint8_t DFE_FSM_DEBUG_PAUSE_LANE                 : 1;	/*     10       r   0*/
		uint8_t DFE_FBMD_F0_LANE                         : 1;	/*     11     r/w   0*/
		uint8_t DFE_ADAPT_LPNUM_LANE_9_0_b0              : 4;	/*[21:12]     r/w 10'h1*/
		uint8_t DFE_ADAPT_LPNUM_LANE_9_0_b1              : 6;	/*[21:12]     r/w 10'h1*/
		uint8_t DFE_POL_LPNUM_LANE_9_0_b0                : 2;	/*[31:22]     r/w 10'h1*/
		uint8_t DFE_POL_LPNUM_LANE_9_0_b1                : 8;	/*[31:22]     r/w 10'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG1_t;
__xdata __at( 0x2404 ) volatile DFE_CTRL_REG1_t DFE_CTRL_REG1;
#define reg_DFE_SAT_F0_TRIG_OFF_LANE_1_0  DFE_CTRL_REG1.BF.DFE_SAT_F0_TRIG_OFF_LANE_1_0
#define reg_DFE_SAT_F0_TRIG_ON_LANE_1_0  DFE_CTRL_REG1.BF.DFE_SAT_F0_TRIG_ON_LANE_1_0
#define reg_DFE_FSM_DEBUG_MODE_LANE  DFE_CTRL_REG1.BF.DFE_FSM_DEBUG_MODE_LANE
#define reg_DFE_FSM_DEBUG_NEXT_LANE  DFE_CTRL_REG1.BF.DFE_FSM_DEBUG_NEXT_LANE
#define reg_DFE_CLR_FRAC_EN_LANE  DFE_CTRL_REG1.BF.DFE_CLR_FRAC_EN_LANE
#define reg_DFE_TRACK_MODE_LANE  DFE_CTRL_REG1.BF.DFE_TRACK_MODE_LANE
#define reg_DFE_FBMD_F1PN_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_F1PN_LANE
#define reg_DFE_FBMD_DATASLICER_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_DATASLICER_LANE
#define reg_DFE_FSM_DEBUG_PAUSE_LANE  DFE_CTRL_REG1.BF.DFE_FSM_DEBUG_PAUSE_LANE
#define reg_DFE_FBMD_F0_LANE  DFE_CTRL_REG1.BF.DFE_FBMD_F0_LANE
#define reg_DFE_ADAPT_LPNUM_LANE_9_0_b0  DFE_CTRL_REG1.BF.DFE_ADAPT_LPNUM_LANE_9_0_b0
#define reg_DFE_ADAPT_LPNUM_LANE_9_0_b1  DFE_CTRL_REG1.BF.DFE_ADAPT_LPNUM_LANE_9_0_b1
#define reg_DFE_POL_LPNUM_LANE_9_0_b0  DFE_CTRL_REG1.BF.DFE_POL_LPNUM_LANE_9_0_b0
#define reg_DFE_POL_LPNUM_LANE_9_0_b1  DFE_CTRL_REG1.BF.DFE_POL_LPNUM_LANE_9_0_b1

// 0x0008	DFE_CTRL_REG2		DFE Control
typedef union {
	struct {
		uint8_t DFE_UPDATE_EN_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t DFE_UPDATE_EN_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t DFE_UPDATE_F_EN_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h00*/
		uint8_t DFE_UPDATE_DC_EN_LANE                    : 1;	/*     22     r/w 1'h0*/
		uint8_t DFE_DATA_F0_SEL_LANE                     : 1;	/*     23     r/w   1*/
		uint8_t DFE_TAP_SETTLE_SCALE_LANE_1_0            : 2;	/*[25:24]     r/w   0*/
		uint8_t DFE_SATUR_STATUS_LANE                    : 1;	/*     26       r   0*/
		uint8_t DFE_F0_SAT_E_LANE                        : 1;	/*     27       r   0*/
		uint8_t DFE_F0_SAT_O_LANE                        : 1;	/*     28       r   0*/
		uint8_t DFE_UPDATED_LANE                         : 1;	/*     29       r   0*/
		uint8_t DFE_F0_FINE_STEP_EN_LANE                 : 1;	/*     30     r/w   0*/
		uint8_t DFE_F0_COARSE_STEP_EN_LANE               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_CTRL_REG2_t;
__xdata __at( 0x2408 ) volatile DFE_CTRL_REG2_t DFE_CTRL_REG2;
#define reg_DFE_UPDATE_EN_LANE_15_0_b0  DFE_CTRL_REG2.BF.DFE_UPDATE_EN_LANE_15_0_b0
#define reg_DFE_UPDATE_EN_LANE_15_0_b1  DFE_CTRL_REG2.BF.DFE_UPDATE_EN_LANE_15_0_b1
#define reg_DFE_UPDATE_F_EN_LANE_5_0  DFE_CTRL_REG2.BF.DFE_UPDATE_F_EN_LANE_5_0
#define reg_DFE_UPDATE_DC_EN_LANE  DFE_CTRL_REG2.BF.DFE_UPDATE_DC_EN_LANE
#define reg_DFE_DATA_F0_SEL_LANE  DFE_CTRL_REG2.BF.DFE_DATA_F0_SEL_LANE
#define reg_DFE_TAP_SETTLE_SCALE_LANE_1_0  DFE_CTRL_REG2.BF.DFE_TAP_SETTLE_SCALE_LANE_1_0
#define reg_DFE_SATUR_STATUS_LANE  DFE_CTRL_REG2.BF.DFE_SATUR_STATUS_LANE
#define reg_DFE_F0_SAT_E_LANE  DFE_CTRL_REG2.BF.DFE_F0_SAT_E_LANE
#define reg_DFE_F0_SAT_O_LANE  DFE_CTRL_REG2.BF.DFE_F0_SAT_O_LANE
#define reg_DFE_UPDATED_LANE  DFE_CTRL_REG2.BF.DFE_UPDATED_LANE
#define reg_DFE_F0_FINE_STEP_EN_LANE  DFE_CTRL_REG2.BF.DFE_F0_FINE_STEP_EN_LANE
#define reg_DFE_F0_COARSE_STEP_EN_LANE  DFE_CTRL_REG2.BF.DFE_F0_COARSE_STEP_EN_LANE
#define reg_DFE_UPDATE_EN_LANE_15_0  DFE_CTRL_REG2.WT.W0

// 0x000c	DFE_CTRL_REG3		DFE Control
typedef union {
	struct {
		uint8_t EYE_OPEN_LANE_5_0                        : 6;	/*  [5:0]     r/w   0*/
		uint8_t DFE_DIS_LANE                             : 1;	/*      6     r/w   0*/
		uint8_t ANA_RX_SEL_MU_F_LANE                     : 1;	/*      7     r/w   1*/
		uint8_t DFE_FULL_RATE_MODE_LANE                  : 1;	/*      8     r/w   0*/
		uint8_t CDR_EDGE_PATH_SEL_LANE                   : 1;	/*      9     r/w   0*/
		uint8_t DFE_HOLD_TIME_LANE_4_0                   : 5;	/*[14:10]     r/w 5'h4*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_SWITCH_TIME_LANE_9_0_b0              : 8;	/*[25:16]     r/w 10'h3f*/
		uint8_t DFE_SWITCH_TIME_LANE_9_0_b1              : 2;	/*[25:16]     r/w 10'h3f*/
		uint8_t RESERVED_26                              : 1;	/*     26     r/w   0*/
		uint8_t DFE_LOCK_CLR_LANE                        : 1;	/*     27     r/w   0*/
		uint8_t DFE_LOCKB_E_LANE                         : 1;	/*     28       r   0*/
		uint8_t DFE_LOCKB_O_LANE                         : 1;	/*     29       r   0*/
		uint8_t DFE_LOCKA_E_LANE                         : 1;	/*     30       r   0*/
		uint8_t DFE_LOCKA_O_LANE                         : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG3_t;
__xdata __at( 0x240c ) volatile DFE_CTRL_REG3_t DFE_CTRL_REG3;
#define reg_EYE_OPEN_LANE_5_0  DFE_CTRL_REG3.BF.EYE_OPEN_LANE_5_0
#define reg_DFE_DIS_LANE  DFE_CTRL_REG3.BF.DFE_DIS_LANE
#define reg_ANA_RX_SEL_MU_F_LANE  DFE_CTRL_REG3.BF.ANA_RX_SEL_MU_F_LANE
#define reg_DFE_FULL_RATE_MODE_LANE  DFE_CTRL_REG3.BF.DFE_FULL_RATE_MODE_LANE
#define reg_CDR_EDGE_PATH_SEL_LANE  DFE_CTRL_REG3.BF.CDR_EDGE_PATH_SEL_LANE
#define reg_DFE_HOLD_TIME_LANE_4_0  DFE_CTRL_REG3.BF.DFE_HOLD_TIME_LANE_4_0
#define reg_DFE_SWITCH_TIME_LANE_9_0_b0  DFE_CTRL_REG3.BF.DFE_SWITCH_TIME_LANE_9_0_b0
#define reg_DFE_SWITCH_TIME_LANE_9_0_b1  DFE_CTRL_REG3.BF.DFE_SWITCH_TIME_LANE_9_0_b1
#define reg_DFE_LOCK_CLR_LANE  DFE_CTRL_REG3.BF.DFE_LOCK_CLR_LANE
#define reg_DFE_LOCKB_E_LANE  DFE_CTRL_REG3.BF.DFE_LOCKB_E_LANE
#define reg_DFE_LOCKB_O_LANE  DFE_CTRL_REG3.BF.DFE_LOCKB_O_LANE
#define reg_DFE_LOCKA_E_LANE  DFE_CTRL_REG3.BF.DFE_LOCKA_E_LANE
#define reg_DFE_LOCKA_O_LANE  DFE_CTRL_REG3.BF.DFE_LOCKA_O_LANE

// 0x0010	RX_EQ_CLK_CTRL		Dfe And Eom Clock Reset Control
typedef union {
	struct {
		uint8_t DFE_CLK_OFF_LANE                         : 1;	/*      0     r/w   1*/
		uint8_t DFE_MCU_CLK_EN_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t RESET_DFE_LANE                           : 1;	/*      2     r/w   1*/
		uint8_t DFE_UPDATE_DIS_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t DFE_EN_LANE                              : 1;	/*      4     r/w   1*/
		uint8_t DFE_PAT_DIS_LANE                         : 1;	/*      5     r/w   1*/
		uint8_t DFE_CTRL_CLK_OFF_LANE                    : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_CLK_ON_LANE                          : 1;	/*      8     r/w   0*/
		uint8_t INT_DFE_EN_LANE                          : 1;	/*      9       r   0*/
		uint8_t RESERVED_10                              : 6;	/*[28:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[28:10]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/*[28:10]     r/w   0*/
		uint8_t DFE_UPDATE_DIS_FM_REG_LANE               : 1;	/*     29     r/w   0*/
		uint8_t DFE_PAT_DIS_FM_REG_LANE                  : 1;	/*     30     r/w   0*/
		uint8_t DFE_EN_FM_REG_LANE                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_EQ_CLK_CTRL_t;
__xdata __at( 0x2410 ) volatile RX_EQ_CLK_CTRL_t RX_EQ_CLK_CTRL;
#define reg_DFE_CLK_OFF_LANE  RX_EQ_CLK_CTRL.BF.DFE_CLK_OFF_LANE
#define reg_DFE_MCU_CLK_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_MCU_CLK_EN_LANE
#define reg_RESET_DFE_LANE  RX_EQ_CLK_CTRL.BF.RESET_DFE_LANE
#define reg_DFE_UPDATE_DIS_LANE  RX_EQ_CLK_CTRL.BF.DFE_UPDATE_DIS_LANE
#define reg_DFE_EN_LANE  RX_EQ_CLK_CTRL.BF.DFE_EN_LANE
#define reg_DFE_PAT_DIS_LANE  RX_EQ_CLK_CTRL.BF.DFE_PAT_DIS_LANE
#define reg_DFE_CTRL_CLK_OFF_LANE  RX_EQ_CLK_CTRL.BF.DFE_CTRL_CLK_OFF_LANE
#define reg_DFE_CLK_ON_LANE  RX_EQ_CLK_CTRL.BF.DFE_CLK_ON_LANE
#define reg_INT_DFE_EN_LANE  RX_EQ_CLK_CTRL.BF.INT_DFE_EN_LANE
#define reg_DFE_UPDATE_DIS_FM_REG_LANE  RX_EQ_CLK_CTRL.BF.DFE_UPDATE_DIS_FM_REG_LANE
#define reg_DFE_PAT_DIS_FM_REG_LANE  RX_EQ_CLK_CTRL.BF.DFE_PAT_DIS_FM_REG_LANE
#define reg_DFE_EN_FM_REG_LANE  RX_EQ_CLK_CTRL.BF.DFE_EN_FM_REG_LANE

// 0x0014	DFE_CTRL_REG4		Dfe_ctrl Output Override
typedef union {
	struct {
		uint8_t DFE_CTRL_BYPASS_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t DFE_CTRL_POL_LANE_3_0                    : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t DFE_CTRL_SWITCH_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_CTRL_FB_SEL_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t DFE_CTRL_SPLR_LANE_2_0                   : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CTRL_REG4_t;
__xdata __at( 0x2414 ) volatile DFE_CTRL_REG4_t DFE_CTRL_REG4;
#define reg_DFE_CTRL_BYPASS_LANE  DFE_CTRL_REG4.BF.DFE_CTRL_BYPASS_LANE
#define reg_DFE_CTRL_POL_LANE_3_0  DFE_CTRL_REG4.BF.DFE_CTRL_POL_LANE_3_0
#define reg_DFE_CTRL_SWITCH_LANE  DFE_CTRL_REG4.BF.DFE_CTRL_SWITCH_LANE
#define reg_DFE_CTRL_FB_SEL_LANE_3_0  DFE_CTRL_REG4.BF.DFE_CTRL_FB_SEL_LANE_3_0
#define reg_DFE_CTRL_SPLR_LANE_2_0  DFE_CTRL_REG4.BF.DFE_CTRL_SPLR_LANE_2_0

// 0x0018	DFE_ANA_REG0		To Analog Override
typedef union {
	struct {
		uint8_t ANA_RX_DFE_FLOATING_SEL_LANE_3_0         : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_E_LANE    : 1;	/*      4     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_O_LANE    : 1;	/*      5     r/w   0*/
		uint8_t ANA_RX_PATH_SEL_D_LANE                   : 1;	/*      6     r/w   0*/
		uint8_t ANA_RX_PATH_SEL_S_LANE                   : 1;	/*      7     r/w   0*/
		uint8_t ANA_RX_DFE_F23_POL_EN_D_LANE             : 1;	/*      8     r/w   0*/
		uint8_t ANA_RX_DFE_F23_POL_EN_S_LANE             : 1;	/*      9     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_D_LANE              : 1;	/*     10     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_S_LANE              : 1;	/*     11     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_D_LANE              : 1;	/*     12     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_S_LANE              : 1;	/*     13     r/w   0*/
		uint8_t ANA_RX_DFE_F3_POL_D_LANE                 : 1;	/*     14     r/w   0*/
		uint8_t ANA_RX_DFE_F3_POL_S_LANE                 : 1;	/*     15     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_LANE                 : 1;	/*     16     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_S_LANE                 : 1;	/*     17     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_D_LANE                 : 1;	/*     18     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_S_LANE                 : 1;	/*     19     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_D_LANE                 : 1;	/*     20     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_S_LANE                 : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[30:22]     r/w   0*/
		uint8_t RESERVED_24                              : 7;	/*[30:22]     r/w   0*/
		uint8_t DFE_CTRL_ANA_BYPASS_LANE                 : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_ANA_REG0_t;
__xdata __at( 0x2418 ) volatile DFE_ANA_REG0_t DFE_ANA_REG0;
#define reg_ANA_RX_DFE_FLOATING_SEL_LANE_3_0  DFE_ANA_REG0.BF.ANA_RX_DFE_FLOATING_SEL_LANE_3_0
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_E_LANE  DFE_ANA_REG0.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_E_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_O_LANE  DFE_ANA_REG0.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_O_LANE
#define reg_ANA_RX_PATH_SEL_D_LANE  DFE_ANA_REG0.BF.ANA_RX_PATH_SEL_D_LANE
#define reg_ANA_RX_PATH_SEL_S_LANE  DFE_ANA_REG0.BF.ANA_RX_PATH_SEL_S_LANE
#define reg_ANA_RX_DFE_F23_POL_EN_D_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F23_POL_EN_D_LANE
#define reg_ANA_RX_DFE_F23_POL_EN_S_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F23_POL_EN_S_LANE
#define reg_ANA_RX_DFE_F1_POL_EN_D_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_EN_D_LANE
#define reg_ANA_RX_DFE_F1_POL_EN_S_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_EN_S_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_D_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_EN_D_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_S_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_EN_S_LANE
#define reg_ANA_RX_DFE_F3_POL_D_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F3_POL_D_LANE
#define reg_ANA_RX_DFE_F3_POL_S_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F3_POL_S_LANE
#define reg_ANA_RX_DFE_F2_POL_D_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_D_LANE
#define reg_ANA_RX_DFE_F2_POL_S_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F2_POL_S_LANE
#define reg_ANA_RX_DFE_F1_POL_D_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_D_LANE
#define reg_ANA_RX_DFE_F1_POL_S_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F1_POL_S_LANE
#define reg_ANA_RX_DFE_F0_POL_D_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_D_LANE
#define reg_ANA_RX_DFE_F0_POL_S_LANE  DFE_ANA_REG0.BF.ANA_RX_DFE_F0_POL_S_LANE
#define reg_DFE_CTRL_ANA_BYPASS_LANE  DFE_ANA_REG0.BF.DFE_CTRL_ANA_BYPASS_LANE

// 0x001c	DFE_ANA_REG1		To Analog Force
typedef union {
	struct {
		uint8_t DFE_STEP_ACCU_F0B_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_E_FORCE_LANE : 1;	/*      4     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_O_FORCE_LANE : 1;	/*      5     r/w   0*/
		uint8_t ANA_RX_PATH_SEL_D_FORCE_LANE             : 1;	/*      6     r/w   0*/
		uint8_t ANA_RX_PATH_SEL_S_FORCE_LANE             : 1;	/*      7     r/w   0*/
		uint8_t ANA_RX_DFE_F23_POL_EN_D_FORCE_LANE       : 1;	/*      8     r/w   0*/
		uint8_t ANA_RX_DFE_F23_POL_EN_S_FORCE_LANE       : 1;	/*      9     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE        : 1;	/*     10     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE        : 1;	/*     11     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_D_FORCE_LANE        : 1;	/*     12     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_EN_S_FORCE_LANE        : 1;	/*     13     r/w   0*/
		uint8_t ANA_RX_DFE_F3_POL_D_FORCE_LANE           : 1;	/*     14     r/w   0*/
		uint8_t ANA_RX_DFE_F3_POL_S_FORCE_LANE           : 1;	/*     15     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_FORCE_LANE           : 1;	/*     16     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_S_FORCE_LANE           : 1;	/*     17     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_D_FORCE_LANE           : 1;	/*     18     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_S_FORCE_LANE           : 1;	/*     19     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_D_FORCE_LANE           : 1;	/*     20     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_S_FORCE_LANE           : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_STEP_FINE_F0B_LANE_3_0               : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t DFE_STEP_COARSE_F0B_LANE_3_0             : 4;	/*[31:28]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_ANA_REG1_t;
__xdata __at( 0x241c ) volatile DFE_ANA_REG1_t DFE_ANA_REG1;
#define reg_DFE_STEP_ACCU_F0B_LANE_3_0  DFE_ANA_REG1.BF.DFE_STEP_ACCU_F0B_LANE_3_0
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_E_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_E_FORCE_LANE
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_O_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_O_FORCE_LANE
#define reg_ANA_RX_PATH_SEL_D_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_PATH_SEL_D_FORCE_LANE
#define reg_ANA_RX_PATH_SEL_S_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_PATH_SEL_S_FORCE_LANE
#define reg_ANA_RX_DFE_F23_POL_EN_D_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F23_POL_EN_D_FORCE_LANE
#define reg_ANA_RX_DFE_F23_POL_EN_S_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F23_POL_EN_S_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F1_POL_EN_D_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F1_POL_EN_S_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_D_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F0_POL_EN_D_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_EN_S_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F0_POL_EN_S_FORCE_LANE
#define reg_ANA_RX_DFE_F3_POL_D_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F3_POL_D_FORCE_LANE
#define reg_ANA_RX_DFE_F3_POL_S_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F3_POL_S_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_D_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_D_FORCE_LANE
#define reg_ANA_RX_DFE_F2_POL_S_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F2_POL_S_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_D_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F1_POL_D_FORCE_LANE
#define reg_ANA_RX_DFE_F1_POL_S_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F1_POL_S_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_D_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F0_POL_D_FORCE_LANE
#define reg_ANA_RX_DFE_F0_POL_S_FORCE_LANE  DFE_ANA_REG1.BF.ANA_RX_DFE_F0_POL_S_FORCE_LANE
#define reg_DFE_STEP_FINE_F0B_LANE_3_0  DFE_ANA_REG1.BF.DFE_STEP_FINE_F0B_LANE_3_0
#define reg_DFE_STEP_COARSE_F0B_LANE_3_0  DFE_ANA_REG1.BF.DFE_STEP_COARSE_F0B_LANE_3_0

// 0x0020	DFE_STEP_REG0		DFE Step Size
typedef union {
	struct {
		uint8_t DFE_STEP_COARSE_EO_DN_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t DFE_STEP_COARSE_EO_UP_LANE_3_0           : 4;	/*  [7:4]     r/w 4'h9*/
		uint8_t DFE_STEP_COARSE_FFX_LANE_3_0             : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t DFE_STEP_COARSE_FX_LANE_3_0              : 4;	/*[15:12]     r/w 4'h2*/
		uint8_t DFE_STEP_COARSE_F0_LANE_3_0              : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t DFE_STEP_COARSE_DC_LANE_3_0              : 4;	/*[23:20]     r/w 4'h2*/
		uint8_t DFE_STEP_ACCU_DC_LANE_3_0                : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t DFE_STEP_FINE_DC_LANE_3_0                : 4;	/*[31:28]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG0_t;
__xdata __at( 0x2420 ) volatile DFE_STEP_REG0_t DFE_STEP_REG0;
#define reg_DFE_STEP_COARSE_EO_DN_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_EO_DN_LANE_3_0
#define reg_DFE_STEP_COARSE_EO_UP_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_EO_UP_LANE_3_0
#define reg_DFE_STEP_COARSE_FFX_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_FFX_LANE_3_0
#define reg_DFE_STEP_COARSE_FX_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_FX_LANE_3_0
#define reg_DFE_STEP_COARSE_F0_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_F0_LANE_3_0
#define reg_DFE_STEP_COARSE_DC_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_COARSE_DC_LANE_3_0
#define reg_DFE_STEP_ACCU_DC_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_ACCU_DC_LANE_3_0
#define reg_DFE_STEP_FINE_DC_LANE_3_0  DFE_STEP_REG0.BF.DFE_STEP_FINE_DC_LANE_3_0

// 0x0024	DFE_STEP_REG1		DFE Step Size
typedef union {
	struct {
		uint8_t DFE_STEP_ACCU_FFX_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t DFE_STEP_ACCU_FX_LANE_3_0                : 4;	/*  [7:4]     r/w 4'h8*/
		uint8_t DFE_STEP_ACCU_F0_LANE_3_0                : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t DFE_STEP_FINE_EO_DN_LANE_3_0             : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_EO_UP_LANE_3_0             : 4;	/*[19:16]     r/w 4'ha*/
		uint8_t DFE_STEP_FINE_FFX_LANE_3_0               : 4;	/*[23:20]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_FX_LANE_3_0                : 4;	/*[27:24]     r/w 4'h6*/
		uint8_t DFE_STEP_FINE_F0_LANE_3_0                : 4;	/*[31:28]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STEP_REG1_t;
__xdata __at( 0x2424 ) volatile DFE_STEP_REG1_t DFE_STEP_REG1;
#define reg_DFE_STEP_ACCU_FFX_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_ACCU_FFX_LANE_3_0
#define reg_DFE_STEP_ACCU_FX_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_ACCU_FX_LANE_3_0
#define reg_DFE_STEP_ACCU_F0_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_ACCU_F0_LANE_3_0
#define reg_DFE_STEP_FINE_EO_DN_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_EO_DN_LANE_3_0
#define reg_DFE_STEP_FINE_EO_UP_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_EO_UP_LANE_3_0
#define reg_DFE_STEP_FINE_FFX_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_FFX_LANE_3_0
#define reg_DFE_STEP_FINE_FX_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_FX_LANE_3_0
#define reg_DFE_STEP_FINE_F0_LANE_3_0  DFE_STEP_REG1.BF.DFE_STEP_FINE_F0_LANE_3_0

// 0x0030	DFE_FEN_EVEN_REG		DFE FEN EVEN
typedef union {
	struct {
		uint8_t DFE_FEN0_D_P_E_LANE                      : 1;	/*      0     r/w   0*/
		uint8_t DFE_FEN0_D_N_E_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t DFE_FEN0_S_P_E_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t DFE_FEN0_S_N_E_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t DFE_FEN1_E_LANE                          : 1;	/*      4     r/w   0*/
		uint8_t DFE_FEN2_D_P_E_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t DFE_FEN2_D_N_E_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t DFE_FEN2_S_P_E_LANE                      : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEN2_S_N_E_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t DFE_FEN3_D_P_E_LANE                      : 1;	/*      9     r/w   0*/
		uint8_t DFE_FEN3_D_N_E_LANE                      : 1;	/*     10     r/w   0*/
		uint8_t DFE_FEN3_S_P_E_LANE                      : 1;	/*     11     r/w   0*/
		uint8_t DFE_FEN3_S_N_E_LANE                      : 1;	/*     12     r/w   0*/
		uint8_t DFE_FEN4_E_LANE                          : 1;	/*     13     r/w   0*/
		uint8_t DFE_FEN5_E_LANE                          : 1;	/*     14     r/w   0*/
		uint8_t DFE_FEN6_E_LANE                          : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEN7_E_LANE                          : 1;	/*     16     r/w   0*/
		uint8_t DFE_FEN8_E_LANE                          : 1;	/*     17     r/w   0*/
		uint8_t DFE_FEN9_E_LANE                          : 1;	/*     18     r/w   0*/
		uint8_t DFE_FEN10_E_LANE                         : 1;	/*     19     r/w   0*/
		uint8_t DFE_FEN11_E_LANE                         : 1;	/*     20     r/w   0*/
		uint8_t DFE_FEN12_E_LANE                         : 1;	/*     21     r/w   0*/
		uint8_t DFE_FEN13_E_LANE                         : 1;	/*     22     r/w   0*/
		uint8_t DFE_FEN14_E_LANE                         : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEN15_E_LANE                         : 1;	/*     24     r/w   0*/
		uint8_t DFE_FENF0_E_LANE                         : 1;	/*     25     r/w   0*/
		uint8_t DFE_FENF1_E_LANE                         : 1;	/*     26     r/w   0*/
		uint8_t DFE_FENF2_E_LANE                         : 1;	/*     27     r/w   0*/
		uint8_t DFE_FENF3_E_LANE                         : 1;	/*     28     r/w   0*/
		uint8_t DFE_FENF4_E_LANE                         : 1;	/*     29     r/w   0*/
		uint8_t DFE_FENF5_E_LANE                         : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_EVEN_REG_t;
__xdata __at( 0x2430 ) volatile DFE_FEN_EVEN_REG_t DFE_FEN_EVEN_REG;
#define reg_DFE_FEN0_D_P_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN0_D_P_E_LANE
#define reg_DFE_FEN0_D_N_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN0_D_N_E_LANE
#define reg_DFE_FEN0_S_P_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN0_S_P_E_LANE
#define reg_DFE_FEN0_S_N_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN0_S_N_E_LANE
#define reg_DFE_FEN1_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN1_E_LANE
#define reg_DFE_FEN2_D_P_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN2_D_P_E_LANE
#define reg_DFE_FEN2_D_N_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN2_D_N_E_LANE
#define reg_DFE_FEN2_S_P_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN2_S_P_E_LANE
#define reg_DFE_FEN2_S_N_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN2_S_N_E_LANE
#define reg_DFE_FEN3_D_P_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN3_D_P_E_LANE
#define reg_DFE_FEN3_D_N_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN3_D_N_E_LANE
#define reg_DFE_FEN3_S_P_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN3_S_P_E_LANE
#define reg_DFE_FEN3_S_N_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN3_S_N_E_LANE
#define reg_DFE_FEN4_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN4_E_LANE
#define reg_DFE_FEN5_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN5_E_LANE
#define reg_DFE_FEN6_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN6_E_LANE
#define reg_DFE_FEN7_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN7_E_LANE
#define reg_DFE_FEN8_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN8_E_LANE
#define reg_DFE_FEN9_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN9_E_LANE
#define reg_DFE_FEN10_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN10_E_LANE
#define reg_DFE_FEN11_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN11_E_LANE
#define reg_DFE_FEN12_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN12_E_LANE
#define reg_DFE_FEN13_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN13_E_LANE
#define reg_DFE_FEN14_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN14_E_LANE
#define reg_DFE_FEN15_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FEN15_E_LANE
#define reg_DFE_FENF0_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FENF0_E_LANE
#define reg_DFE_FENF1_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FENF1_E_LANE
#define reg_DFE_FENF2_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FENF2_E_LANE
#define reg_DFE_FENF3_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FENF3_E_LANE
#define reg_DFE_FENF4_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FENF4_E_LANE
#define reg_DFE_FENF5_E_LANE  DFE_FEN_EVEN_REG.BF.DFE_FENF5_E_LANE

// 0x0034	DFE_FEN_ODD_REG		DFE FEN ODD
typedef union {
	struct {
		uint8_t DFE_FEN0_D_P_O_LANE                      : 1;	/*      0     r/w   0*/
		uint8_t DFE_FEN0_D_N_O_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t DFE_FEN0_S_P_O_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t DFE_FEN0_S_N_O_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t DFE_FEN1_O_LANE                          : 1;	/*      4     r/w   0*/
		uint8_t DFE_FEN2_D_P_O_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t DFE_FEN2_D_N_O_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t DFE_FEN2_S_P_O_LANE                      : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEN2_S_N_O_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t DFE_FEN3_D_P_O_LANE                      : 1;	/*      9     r/w   0*/
		uint8_t DFE_FEN3_D_N_O_LANE                      : 1;	/*     10     r/w   0*/
		uint8_t DFE_FEN3_S_P_O_LANE                      : 1;	/*     11     r/w   0*/
		uint8_t DFE_FEN3_S_N_O_LANE                      : 1;	/*     12     r/w   0*/
		uint8_t DFE_FEN4_O_LANE                          : 1;	/*     13     r/w   0*/
		uint8_t DFE_FEN5_O_LANE                          : 1;	/*     14     r/w   0*/
		uint8_t DFE_FEN6_O_LANE                          : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEN7_O_LANE                          : 1;	/*     16     r/w   0*/
		uint8_t DFE_FEN8_O_LANE                          : 1;	/*     17     r/w   0*/
		uint8_t DFE_FEN9_O_LANE                          : 1;	/*     18     r/w   0*/
		uint8_t DFE_FEN10_O_LANE                         : 1;	/*     19     r/w   0*/
		uint8_t DFE_FEN11_O_LANE                         : 1;	/*     20     r/w   0*/
		uint8_t DFE_FEN12_O_LANE                         : 1;	/*     21     r/w   0*/
		uint8_t DFE_FEN13_O_LANE                         : 1;	/*     22     r/w   0*/
		uint8_t DFE_FEN14_O_LANE                         : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEN15_O_LANE                         : 1;	/*     24     r/w   0*/
		uint8_t DFE_FENF0_O_LANE                         : 1;	/*     25     r/w   0*/
		uint8_t DFE_FENF1_O_LANE                         : 1;	/*     26     r/w   0*/
		uint8_t DFE_FENF2_O_LANE                         : 1;	/*     27     r/w   0*/
		uint8_t DFE_FENF3_O_LANE                         : 1;	/*     28     r/w   0*/
		uint8_t DFE_FENF4_O_LANE                         : 1;	/*     29     r/w   0*/
		uint8_t DFE_FENF5_O_LANE                         : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEN_ODD_REG_t;
__xdata __at( 0x2434 ) volatile DFE_FEN_ODD_REG_t DFE_FEN_ODD_REG;
#define reg_DFE_FEN0_D_P_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN0_D_P_O_LANE
#define reg_DFE_FEN0_D_N_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN0_D_N_O_LANE
#define reg_DFE_FEN0_S_P_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN0_S_P_O_LANE
#define reg_DFE_FEN0_S_N_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN0_S_N_O_LANE
#define reg_DFE_FEN1_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN1_O_LANE
#define reg_DFE_FEN2_D_P_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN2_D_P_O_LANE
#define reg_DFE_FEN2_D_N_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN2_D_N_O_LANE
#define reg_DFE_FEN2_S_P_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN2_S_P_O_LANE
#define reg_DFE_FEN2_S_N_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN2_S_N_O_LANE
#define reg_DFE_FEN3_D_P_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN3_D_P_O_LANE
#define reg_DFE_FEN3_D_N_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN3_D_N_O_LANE
#define reg_DFE_FEN3_S_P_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN3_S_P_O_LANE
#define reg_DFE_FEN3_S_N_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN3_S_N_O_LANE
#define reg_DFE_FEN4_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN4_O_LANE
#define reg_DFE_FEN5_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN5_O_LANE
#define reg_DFE_FEN6_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN6_O_LANE
#define reg_DFE_FEN7_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN7_O_LANE
#define reg_DFE_FEN8_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN8_O_LANE
#define reg_DFE_FEN9_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN9_O_LANE
#define reg_DFE_FEN10_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN10_O_LANE
#define reg_DFE_FEN11_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN11_O_LANE
#define reg_DFE_FEN12_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN12_O_LANE
#define reg_DFE_FEN13_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN13_O_LANE
#define reg_DFE_FEN14_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN14_O_LANE
#define reg_DFE_FEN15_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FEN15_O_LANE
#define reg_DFE_FENF0_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FENF0_O_LANE
#define reg_DFE_FENF1_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FENF1_O_LANE
#define reg_DFE_FENF2_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FENF2_O_LANE
#define reg_DFE_FENF3_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FENF3_O_LANE
#define reg_DFE_FENF4_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FENF4_O_LANE
#define reg_DFE_FENF5_O_LANE  DFE_FEN_ODD_REG.BF.DFE_FENF5_O_LANE

// 0x0038	DFE_DC_EVEN_REG8		DFE FEN/FEXT DC EVEN
typedef union {
	struct {
		uint8_t DFE_FEXTDC_D_P_E_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t DFE_FENDC_D_P_E_LANE                     : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXTDC_D_N_E_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t DFE_FENDC_D_N_E_LANE                     : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXTDC_S_P_E_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t DFE_FENDC_S_P_E_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEXTDC_S_N_E_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t DFE_FENDC_S_N_E_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_DC_EVEN_REG8_t;
__xdata __at( 0x2438 ) volatile DFE_DC_EVEN_REG8_t DFE_DC_EVEN_REG8;
#define reg_DFE_FEXTDC_D_P_E_LANE_6_0  DFE_DC_EVEN_REG8.BF.DFE_FEXTDC_D_P_E_LANE_6_0
#define reg_DFE_FENDC_D_P_E_LANE  DFE_DC_EVEN_REG8.BF.DFE_FENDC_D_P_E_LANE
#define reg_DFE_FEXTDC_D_N_E_LANE_6_0  DFE_DC_EVEN_REG8.BF.DFE_FEXTDC_D_N_E_LANE_6_0
#define reg_DFE_FENDC_D_N_E_LANE  DFE_DC_EVEN_REG8.BF.DFE_FENDC_D_N_E_LANE
#define reg_DFE_FEXTDC_S_P_E_LANE_6_0  DFE_DC_EVEN_REG8.BF.DFE_FEXTDC_S_P_E_LANE_6_0
#define reg_DFE_FENDC_S_P_E_LANE  DFE_DC_EVEN_REG8.BF.DFE_FENDC_S_P_E_LANE
#define reg_DFE_FEXTDC_S_N_E_LANE_6_0  DFE_DC_EVEN_REG8.BF.DFE_FEXTDC_S_N_E_LANE_6_0
#define reg_DFE_FENDC_S_N_E_LANE  DFE_DC_EVEN_REG8.BF.DFE_FENDC_S_N_E_LANE

// 0x003c	DFE_DC_ODD_REG8		DFE FEN/FEXT DC ODD
typedef union {
	struct {
		uint8_t DFE_FEXTDC_D_P_O_LANE_6_0                : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t DFE_FENDC_D_P_O_LANE                     : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXTDC_D_N_O_LANE_6_0                : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t DFE_FENDC_D_N_O_LANE                     : 1;	/*     15     r/w   0*/
		uint8_t DFE_FEXTDC_S_P_O_LANE_6_0                : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t DFE_FENDC_S_P_O_LANE                     : 1;	/*     23     r/w   0*/
		uint8_t DFE_FEXTDC_S_N_O_LANE_6_0                : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t DFE_FENDC_S_N_O_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_DC_ODD_REG8_t;
__xdata __at( 0x243c ) volatile DFE_DC_ODD_REG8_t DFE_DC_ODD_REG8;
#define reg_DFE_FEXTDC_D_P_O_LANE_6_0  DFE_DC_ODD_REG8.BF.DFE_FEXTDC_D_P_O_LANE_6_0
#define reg_DFE_FENDC_D_P_O_LANE  DFE_DC_ODD_REG8.BF.DFE_FENDC_D_P_O_LANE
#define reg_DFE_FEXTDC_D_N_O_LANE_6_0  DFE_DC_ODD_REG8.BF.DFE_FEXTDC_D_N_O_LANE_6_0
#define reg_DFE_FENDC_D_N_O_LANE  DFE_DC_ODD_REG8.BF.DFE_FENDC_D_N_O_LANE
#define reg_DFE_FEXTDC_S_P_O_LANE_6_0  DFE_DC_ODD_REG8.BF.DFE_FEXTDC_S_P_O_LANE_6_0
#define reg_DFE_FENDC_S_P_O_LANE  DFE_DC_ODD_REG8.BF.DFE_FENDC_S_P_O_LANE
#define reg_DFE_FEXTDC_S_N_O_LANE_6_0  DFE_DC_ODD_REG8.BF.DFE_FEXTDC_S_N_O_LANE_6_0
#define reg_DFE_FENDC_S_N_O_LANE  DFE_DC_ODD_REG8.BF.DFE_FENDC_S_N_O_LANE

// 0x0040	DFE_FEXT_EVEN_REG0		DFE FEXT0 EVEN
typedef union {
	struct {
		uint8_t DFE_FEXT0_D_P_E_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT0_D_N_E_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT0_S_P_E_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT0_S_N_E_LANE_5_0                 : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_EVEN_REG0_t;
__xdata __at( 0x2440 ) volatile DFE_FEXT_EVEN_REG0_t DFE_FEXT_EVEN_REG0;
#define reg_DFE_FEXT0_D_P_E_LANE_5_0  DFE_FEXT_EVEN_REG0.BF.DFE_FEXT0_D_P_E_LANE_5_0
#define reg_DFE_FEXT0_D_N_E_LANE_5_0  DFE_FEXT_EVEN_REG0.BF.DFE_FEXT0_D_N_E_LANE_5_0
#define reg_DFE_FEXT0_S_P_E_LANE_5_0  DFE_FEXT_EVEN_REG0.BF.DFE_FEXT0_S_P_E_LANE_5_0
#define reg_DFE_FEXT0_S_N_E_LANE_5_0  DFE_FEXT_EVEN_REG0.BF.DFE_FEXT0_S_N_E_LANE_5_0

// 0x0044	DFE_FEXT_EVEN_REG1		DFE FEXT2 EVEN
typedef union {
	struct {
		uint8_t DFE_FEXT2_D_P_E_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT2_D_N_E_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT2_S_P_E_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT2_S_N_E_LANE_5_0                 : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_EVEN_REG1_t;
__xdata __at( 0x2444 ) volatile DFE_FEXT_EVEN_REG1_t DFE_FEXT_EVEN_REG1;
#define reg_DFE_FEXT2_D_P_E_LANE_5_0  DFE_FEXT_EVEN_REG1.BF.DFE_FEXT2_D_P_E_LANE_5_0
#define reg_DFE_FEXT2_D_N_E_LANE_5_0  DFE_FEXT_EVEN_REG1.BF.DFE_FEXT2_D_N_E_LANE_5_0
#define reg_DFE_FEXT2_S_P_E_LANE_5_0  DFE_FEXT_EVEN_REG1.BF.DFE_FEXT2_S_P_E_LANE_5_0
#define reg_DFE_FEXT2_S_N_E_LANE_5_0  DFE_FEXT_EVEN_REG1.BF.DFE_FEXT2_S_N_E_LANE_5_0

// 0x0048	DFE_FEXT_EVEN_REG2		DFE FEXT3 EVEN
typedef union {
	struct {
		uint8_t DFE_FEXT3_D_P_E_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXT3_D_N_E_LANE_4_0                 : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_FEXT3_S_P_E_LANE_4_0                 : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXT3_S_N_E_LANE_4_0                 : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_EVEN_REG2_t;
__xdata __at( 0x2448 ) volatile DFE_FEXT_EVEN_REG2_t DFE_FEXT_EVEN_REG2;
#define reg_DFE_FEXT3_D_P_E_LANE_4_0  DFE_FEXT_EVEN_REG2.BF.DFE_FEXT3_D_P_E_LANE_4_0
#define reg_DFE_FEXT3_D_N_E_LANE_4_0  DFE_FEXT_EVEN_REG2.BF.DFE_FEXT3_D_N_E_LANE_4_0
#define reg_DFE_FEXT3_S_P_E_LANE_4_0  DFE_FEXT_EVEN_REG2.BF.DFE_FEXT3_S_P_E_LANE_4_0
#define reg_DFE_FEXT3_S_N_E_LANE_4_0  DFE_FEXT_EVEN_REG2.BF.DFE_FEXT3_S_N_E_LANE_4_0

// 0x004c	DFE_FEXT_EVEN_REG3		DFE FEXT EVEN
typedef union {
	struct {
		uint8_t DFE_FEXT1_E_LANE_5_0                     : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT4_E_LANE_5_0                     : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT5_E_LANE_5_0                     : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT6_E_LANE_5_0                     : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_EVEN_REG3_t;
__xdata __at( 0x244c ) volatile DFE_FEXT_EVEN_REG3_t DFE_FEXT_EVEN_REG3;
#define reg_DFE_FEXT1_E_LANE_5_0  DFE_FEXT_EVEN_REG3.BF.DFE_FEXT1_E_LANE_5_0
#define reg_DFE_FEXT4_E_LANE_5_0  DFE_FEXT_EVEN_REG3.BF.DFE_FEXT4_E_LANE_5_0
#define reg_DFE_FEXT5_E_LANE_5_0  DFE_FEXT_EVEN_REG3.BF.DFE_FEXT5_E_LANE_5_0
#define reg_DFE_FEXT6_E_LANE_5_0  DFE_FEXT_EVEN_REG3.BF.DFE_FEXT6_E_LANE_5_0

// 0x0050	DFE_FEXT_EVEN_REG4		DFE FEXT EVEN
typedef union {
	struct {
		uint8_t DFE_FEXT7_E_LANE_4_0                     : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXT8_E_LANE_4_0                     : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_FEXT9_E_LANE_4_0                     : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXT10_E_LANE_4_0                    : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_EVEN_REG4_t;
__xdata __at( 0x2450 ) volatile DFE_FEXT_EVEN_REG4_t DFE_FEXT_EVEN_REG4;
#define reg_DFE_FEXT7_E_LANE_4_0  DFE_FEXT_EVEN_REG4.BF.DFE_FEXT7_E_LANE_4_0
#define reg_DFE_FEXT8_E_LANE_4_0  DFE_FEXT_EVEN_REG4.BF.DFE_FEXT8_E_LANE_4_0
#define reg_DFE_FEXT9_E_LANE_4_0  DFE_FEXT_EVEN_REG4.BF.DFE_FEXT9_E_LANE_4_0
#define reg_DFE_FEXT10_E_LANE_4_0  DFE_FEXT_EVEN_REG4.BF.DFE_FEXT10_E_LANE_4_0

// 0x0054	DFE_FEXT_EVEN_REG5		DFE FEXT EVEN
typedef union {
	struct {
		uint8_t DFE_FEXT11_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXT12_E_LANE_4_0                    : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_FEXT13_E_LANE_4_0                    : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXT14_E_LANE_4_0                    : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_EVEN_REG5_t;
__xdata __at( 0x2454 ) volatile DFE_FEXT_EVEN_REG5_t DFE_FEXT_EVEN_REG5;
#define reg_DFE_FEXT11_E_LANE_4_0  DFE_FEXT_EVEN_REG5.BF.DFE_FEXT11_E_LANE_4_0
#define reg_DFE_FEXT12_E_LANE_4_0  DFE_FEXT_EVEN_REG5.BF.DFE_FEXT12_E_LANE_4_0
#define reg_DFE_FEXT13_E_LANE_4_0  DFE_FEXT_EVEN_REG5.BF.DFE_FEXT13_E_LANE_4_0
#define reg_DFE_FEXT14_E_LANE_4_0  DFE_FEXT_EVEN_REG5.BF.DFE_FEXT14_E_LANE_4_0

// 0x0058	DFE_FEXT_EVEN_REG6		DFE FEXT EVEN
typedef union {
	struct {
		uint8_t DFE_FEXT15_E_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXTF0_E_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXTF1_E_LANE_5_0                    : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXTF2_E_LANE_5_0                    : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_EVEN_REG6_t;
__xdata __at( 0x2458 ) volatile DFE_FEXT_EVEN_REG6_t DFE_FEXT_EVEN_REG6;
#define reg_DFE_FEXT15_E_LANE_4_0  DFE_FEXT_EVEN_REG6.BF.DFE_FEXT15_E_LANE_4_0
#define reg_DFE_FEXTF0_E_LANE_5_0  DFE_FEXT_EVEN_REG6.BF.DFE_FEXTF0_E_LANE_5_0
#define reg_DFE_FEXTF1_E_LANE_5_0  DFE_FEXT_EVEN_REG6.BF.DFE_FEXTF1_E_LANE_5_0
#define reg_DFE_FEXTF2_E_LANE_5_0  DFE_FEXT_EVEN_REG6.BF.DFE_FEXTF2_E_LANE_5_0

// 0x005c	DFE_FEXT_EVEN_REG7		DFE FEXT EVEN
typedef union {
	struct {
		uint8_t DFE_FEXTF3_E_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXTF4_E_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXTF5_E_LANE_5_0                    : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_EVEN_REG7_t;
__xdata __at( 0x245c ) volatile DFE_FEXT_EVEN_REG7_t DFE_FEXT_EVEN_REG7;
#define reg_DFE_FEXTF3_E_LANE_5_0  DFE_FEXT_EVEN_REG7.BF.DFE_FEXTF3_E_LANE_5_0
#define reg_DFE_FEXTF4_E_LANE_5_0  DFE_FEXT_EVEN_REG7.BF.DFE_FEXTF4_E_LANE_5_0
#define reg_DFE_FEXTF5_E_LANE_5_0  DFE_FEXT_EVEN_REG7.BF.DFE_FEXTF5_E_LANE_5_0

// 0x0060	DFE_FEXT_ODD_REG0		DFE FEXT0 ODD
typedef union {
	struct {
		uint8_t DFE_FEXT0_D_P_O_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT0_D_N_O_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT0_S_P_O_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT0_S_N_O_LANE_5_0                 : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_ODD_REG0_t;
__xdata __at( 0x2460 ) volatile DFE_FEXT_ODD_REG0_t DFE_FEXT_ODD_REG0;
#define reg_DFE_FEXT0_D_P_O_LANE_5_0  DFE_FEXT_ODD_REG0.BF.DFE_FEXT0_D_P_O_LANE_5_0
#define reg_DFE_FEXT0_D_N_O_LANE_5_0  DFE_FEXT_ODD_REG0.BF.DFE_FEXT0_D_N_O_LANE_5_0
#define reg_DFE_FEXT0_S_P_O_LANE_5_0  DFE_FEXT_ODD_REG0.BF.DFE_FEXT0_S_P_O_LANE_5_0
#define reg_DFE_FEXT0_S_N_O_LANE_5_0  DFE_FEXT_ODD_REG0.BF.DFE_FEXT0_S_N_O_LANE_5_0

// 0x0064	DFE_FEXT_ODD_REG1		DFE FEXT2 ODD
typedef union {
	struct {
		uint8_t DFE_FEXT2_D_P_O_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT2_D_N_O_LANE_5_0                 : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT2_S_P_O_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT2_S_N_O_LANE_5_0                 : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_ODD_REG1_t;
__xdata __at( 0x2464 ) volatile DFE_FEXT_ODD_REG1_t DFE_FEXT_ODD_REG1;
#define reg_DFE_FEXT2_D_P_O_LANE_5_0  DFE_FEXT_ODD_REG1.BF.DFE_FEXT2_D_P_O_LANE_5_0
#define reg_DFE_FEXT2_D_N_O_LANE_5_0  DFE_FEXT_ODD_REG1.BF.DFE_FEXT2_D_N_O_LANE_5_0
#define reg_DFE_FEXT2_S_P_O_LANE_5_0  DFE_FEXT_ODD_REG1.BF.DFE_FEXT2_S_P_O_LANE_5_0
#define reg_DFE_FEXT2_S_N_O_LANE_5_0  DFE_FEXT_ODD_REG1.BF.DFE_FEXT2_S_N_O_LANE_5_0

// 0x0068	DFE_FEXT_ODD_REG2		DFE FEXT3 ODD
typedef union {
	struct {
		uint8_t DFE_FEXT3_D_P_O_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXT3_D_N_O_LANE_4_0                 : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_FEXT3_S_P_O_LANE_4_0                 : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXT3_S_N_O_LANE_4_0                 : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_ODD_REG2_t;
__xdata __at( 0x2468 ) volatile DFE_FEXT_ODD_REG2_t DFE_FEXT_ODD_REG2;
#define reg_DFE_FEXT3_D_P_O_LANE_4_0  DFE_FEXT_ODD_REG2.BF.DFE_FEXT3_D_P_O_LANE_4_0
#define reg_DFE_FEXT3_D_N_O_LANE_4_0  DFE_FEXT_ODD_REG2.BF.DFE_FEXT3_D_N_O_LANE_4_0
#define reg_DFE_FEXT3_S_P_O_LANE_4_0  DFE_FEXT_ODD_REG2.BF.DFE_FEXT3_S_P_O_LANE_4_0
#define reg_DFE_FEXT3_S_N_O_LANE_4_0  DFE_FEXT_ODD_REG2.BF.DFE_FEXT3_S_N_O_LANE_4_0

// 0x006c	DFE_FEXT_ODD_REG3		DFE FEXT ODD
typedef union {
	struct {
		uint8_t DFE_FEXT1_O_LANE_5_0                     : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXT4_O_LANE_5_0                     : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXT5_O_LANE_5_0                     : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXT6_O_LANE_5_0                     : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_ODD_REG3_t;
__xdata __at( 0x246c ) volatile DFE_FEXT_ODD_REG3_t DFE_FEXT_ODD_REG3;
#define reg_DFE_FEXT1_O_LANE_5_0  DFE_FEXT_ODD_REG3.BF.DFE_FEXT1_O_LANE_5_0
#define reg_DFE_FEXT4_O_LANE_5_0  DFE_FEXT_ODD_REG3.BF.DFE_FEXT4_O_LANE_5_0
#define reg_DFE_FEXT5_O_LANE_5_0  DFE_FEXT_ODD_REG3.BF.DFE_FEXT5_O_LANE_5_0
#define reg_DFE_FEXT6_O_LANE_5_0  DFE_FEXT_ODD_REG3.BF.DFE_FEXT6_O_LANE_5_0

// 0x0070	DFE_FEXT_ODD_REG4		DFE FEXT ODD
typedef union {
	struct {
		uint8_t DFE_FEXT7_O_LANE_4_0                     : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXT8_O_LANE_4_0                     : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_FEXT9_O_LANE_4_0                     : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXT10_O_LANE_4_0                    : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_ODD_REG4_t;
__xdata __at( 0x2470 ) volatile DFE_FEXT_ODD_REG4_t DFE_FEXT_ODD_REG4;
#define reg_DFE_FEXT7_O_LANE_4_0  DFE_FEXT_ODD_REG4.BF.DFE_FEXT7_O_LANE_4_0
#define reg_DFE_FEXT8_O_LANE_4_0  DFE_FEXT_ODD_REG4.BF.DFE_FEXT8_O_LANE_4_0
#define reg_DFE_FEXT9_O_LANE_4_0  DFE_FEXT_ODD_REG4.BF.DFE_FEXT9_O_LANE_4_0
#define reg_DFE_FEXT10_O_LANE_4_0  DFE_FEXT_ODD_REG4.BF.DFE_FEXT10_O_LANE_4_0

// 0x0074	DFE_FEXT_ODD_REG5		DFE FEXT ODD
typedef union {
	struct {
		uint8_t DFE_FEXT11_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXT12_O_LANE_4_0                    : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_FEXT13_O_LANE_4_0                    : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_FEXT14_O_LANE_4_0                    : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_ODD_REG5_t;
__xdata __at( 0x2474 ) volatile DFE_FEXT_ODD_REG5_t DFE_FEXT_ODD_REG5;
#define reg_DFE_FEXT11_O_LANE_4_0  DFE_FEXT_ODD_REG5.BF.DFE_FEXT11_O_LANE_4_0
#define reg_DFE_FEXT12_O_LANE_4_0  DFE_FEXT_ODD_REG5.BF.DFE_FEXT12_O_LANE_4_0
#define reg_DFE_FEXT13_O_LANE_4_0  DFE_FEXT_ODD_REG5.BF.DFE_FEXT13_O_LANE_4_0
#define reg_DFE_FEXT14_O_LANE_4_0  DFE_FEXT_ODD_REG5.BF.DFE_FEXT14_O_LANE_4_0

// 0x0078	DFE_FEXT_ODD_REG6		DFE FEXT ODD
typedef union {
	struct {
		uint8_t DFE_FEXT15_O_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FEXTF0_O_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXTF1_O_LANE_5_0                    : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FEXTF2_O_LANE_5_0                    : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_ODD_REG6_t;
__xdata __at( 0x2478 ) volatile DFE_FEXT_ODD_REG6_t DFE_FEXT_ODD_REG6;
#define reg_DFE_FEXT15_O_LANE_4_0  DFE_FEXT_ODD_REG6.BF.DFE_FEXT15_O_LANE_4_0
#define reg_DFE_FEXTF0_O_LANE_5_0  DFE_FEXT_ODD_REG6.BF.DFE_FEXTF0_O_LANE_5_0
#define reg_DFE_FEXTF1_O_LANE_5_0  DFE_FEXT_ODD_REG6.BF.DFE_FEXTF1_O_LANE_5_0
#define reg_DFE_FEXTF2_O_LANE_5_0  DFE_FEXT_ODD_REG6.BF.DFE_FEXTF2_O_LANE_5_0

// 0x007c	DFE_FEXT_ODD_REG7		DFE FEXT ODD
typedef union {
	struct {
		uint8_t DFE_FEXTF3_O_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FEXTF4_O_LANE_5_0                    : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FEXTF5_O_LANE_5_0                    : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_FEXT_ODD_REG7_t;
__xdata __at( 0x247c ) volatile DFE_FEXT_ODD_REG7_t DFE_FEXT_ODD_REG7;
#define reg_DFE_FEXTF3_O_LANE_5_0  DFE_FEXT_ODD_REG7.BF.DFE_FEXTF3_O_LANE_5_0
#define reg_DFE_FEXTF4_O_LANE_5_0  DFE_FEXT_ODD_REG7.BF.DFE_FEXTF4_O_LANE_5_0
#define reg_DFE_FEXTF5_O_LANE_5_0  DFE_FEXT_ODD_REG7.BF.DFE_FEXTF5_O_LANE_5_0

// 0x0080	DFE_READ_EVEN_SM_REG0		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F0_D_P_E_SM_LANE_5_0                 : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F0_D_N_E_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F0_S_P_E_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F0_S_N_E_SM_LANE_5_0                 : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_SM_REG0_t;
__xdata __at( 0x2480 ) volatile DFE_READ_EVEN_SM_REG0_t DFE_READ_EVEN_SM_REG0;
#define reg_DFE_F0_D_P_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG0.BF.DFE_F0_D_P_E_SM_LANE_5_0
#define reg_DFE_F0_D_N_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG0.BF.DFE_F0_D_N_E_SM_LANE_5_0
#define reg_DFE_F0_S_P_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG0.BF.DFE_F0_S_P_E_SM_LANE_5_0
#define reg_DFE_F0_S_N_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG0.BF.DFE_F0_S_N_E_SM_LANE_5_0

// 0x0084	DFE_READ_EVEN_SM_REG1		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F2_D_P_E_SM_LANE_5_0                 : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F2_D_N_E_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F2_S_P_E_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F2_S_N_E_SM_LANE_5_0                 : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_SM_REG1_t;
__xdata __at( 0x2484 ) volatile DFE_READ_EVEN_SM_REG1_t DFE_READ_EVEN_SM_REG1;
#define reg_DFE_F2_D_P_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG1.BF.DFE_F2_D_P_E_SM_LANE_5_0
#define reg_DFE_F2_D_N_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG1.BF.DFE_F2_D_N_E_SM_LANE_5_0
#define reg_DFE_F2_S_P_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG1.BF.DFE_F2_S_P_E_SM_LANE_5_0
#define reg_DFE_F2_S_N_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG1.BF.DFE_F2_S_N_E_SM_LANE_5_0

// 0x0088	DFE_READ_EVEN_SM_REG2		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F3_D_P_E_SM_LANE_4_0                 : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_F3_D_N_E_SM_LANE_4_0                 : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_F3_S_P_E_SM_LANE_4_0                 : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_F3_S_N_E_SM_LANE_4_0                 : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_SM_REG2_t;
__xdata __at( 0x2488 ) volatile DFE_READ_EVEN_SM_REG2_t DFE_READ_EVEN_SM_REG2;
#define reg_DFE_F3_D_P_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG2.BF.DFE_F3_D_P_E_SM_LANE_4_0
#define reg_DFE_F3_D_N_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG2.BF.DFE_F3_D_N_E_SM_LANE_4_0
#define reg_DFE_F3_S_P_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG2.BF.DFE_F3_S_P_E_SM_LANE_4_0
#define reg_DFE_F3_S_N_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG2.BF.DFE_F3_S_N_E_SM_LANE_4_0

// 0x008c	DFE_READ_EVEN_SM_REG3		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F1_E_SM_LANE_5_0                     : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F4_E_SM_LANE_5_0                     : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F5_E_SM_LANE_5_0                     : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F6_E_SM_LANE_5_0                     : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_SM_REG3_t;
__xdata __at( 0x248c ) volatile DFE_READ_EVEN_SM_REG3_t DFE_READ_EVEN_SM_REG3;
#define reg_DFE_F1_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG3.BF.DFE_F1_E_SM_LANE_5_0
#define reg_DFE_F4_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG3.BF.DFE_F4_E_SM_LANE_5_0
#define reg_DFE_F5_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG3.BF.DFE_F5_E_SM_LANE_5_0
#define reg_DFE_F6_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG3.BF.DFE_F6_E_SM_LANE_5_0

// 0x0090	DFE_READ_EVEN_SM_REG4		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F7_E_SM_LANE_4_0                     : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_F8_E_SM_LANE_4_0                     : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_F9_E_SM_LANE_4_0                     : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_F10_E_SM_LANE_4_0                    : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_SM_REG4_t;
__xdata __at( 0x2490 ) volatile DFE_READ_EVEN_SM_REG4_t DFE_READ_EVEN_SM_REG4;
#define reg_DFE_F7_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG4.BF.DFE_F7_E_SM_LANE_4_0
#define reg_DFE_F8_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG4.BF.DFE_F8_E_SM_LANE_4_0
#define reg_DFE_F9_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG4.BF.DFE_F9_E_SM_LANE_4_0
#define reg_DFE_F10_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG4.BF.DFE_F10_E_SM_LANE_4_0

// 0x0094	DFE_READ_EVEN_SM_REG5		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F11_E_SM_LANE_4_0                    : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_F12_E_SM_LANE_4_0                    : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_F13_E_SM_LANE_4_0                    : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_F14_E_SM_LANE_4_0                    : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_SM_REG5_t;
__xdata __at( 0x2494 ) volatile DFE_READ_EVEN_SM_REG5_t DFE_READ_EVEN_SM_REG5;
#define reg_DFE_F11_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG5.BF.DFE_F11_E_SM_LANE_4_0
#define reg_DFE_F12_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG5.BF.DFE_F12_E_SM_LANE_4_0
#define reg_DFE_F13_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG5.BF.DFE_F13_E_SM_LANE_4_0
#define reg_DFE_F14_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG5.BF.DFE_F14_E_SM_LANE_4_0

// 0x0098	DFE_READ_EVEN_SM_REG6		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F15_E_SM_LANE_4_0                    : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FF0_E_SM_LANE_5_0                    : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FF1_E_SM_LANE_5_0                    : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FF2_E_SM_LANE_5_0                    : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_SM_REG6_t;
__xdata __at( 0x2498 ) volatile DFE_READ_EVEN_SM_REG6_t DFE_READ_EVEN_SM_REG6;
#define reg_DFE_F15_E_SM_LANE_4_0  DFE_READ_EVEN_SM_REG6.BF.DFE_F15_E_SM_LANE_4_0
#define reg_DFE_FF0_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG6.BF.DFE_FF0_E_SM_LANE_5_0
#define reg_DFE_FF1_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG6.BF.DFE_FF1_E_SM_LANE_5_0
#define reg_DFE_FF2_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG6.BF.DFE_FF2_E_SM_LANE_5_0

// 0x009c	DFE_READ_EVEN_SM_REG7		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_FF3_E_SM_LANE_5_0                    : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FF4_E_SM_LANE_5_0                    : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FF5_E_SM_LANE_5_0                    : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_SM_REG7_t;
__xdata __at( 0x249c ) volatile DFE_READ_EVEN_SM_REG7_t DFE_READ_EVEN_SM_REG7;
#define reg_DFE_FF3_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG7.BF.DFE_FF3_E_SM_LANE_5_0
#define reg_DFE_FF4_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG7.BF.DFE_FF4_E_SM_LANE_5_0
#define reg_DFE_FF5_E_SM_LANE_5_0  DFE_READ_EVEN_SM_REG7.BF.DFE_FF5_E_SM_LANE_5_0

// 0x00a0	DFE_READ_ODD_SM_REG0		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F0_D_P_O_SM_LANE_5_0                 : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F0_D_N_O_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F0_S_P_O_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F0_S_N_O_SM_LANE_5_0                 : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_SM_REG0_t;
__xdata __at( 0x24a0 ) volatile DFE_READ_ODD_SM_REG0_t DFE_READ_ODD_SM_REG0;
#define reg_DFE_F0_D_P_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG0.BF.DFE_F0_D_P_O_SM_LANE_5_0
#define reg_DFE_F0_D_N_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG0.BF.DFE_F0_D_N_O_SM_LANE_5_0
#define reg_DFE_F0_S_P_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG0.BF.DFE_F0_S_P_O_SM_LANE_5_0
#define reg_DFE_F0_S_N_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG0.BF.DFE_F0_S_N_O_SM_LANE_5_0

// 0x00a4	DFE_READ_ODD_SM_REG1		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F2_D_P_O_SM_LANE_5_0                 : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F2_D_N_O_SM_LANE_5_0                 : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F2_S_P_O_SM_LANE_5_0                 : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F2_S_N_O_SM_LANE_5_0                 : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_SM_REG1_t;
__xdata __at( 0x24a4 ) volatile DFE_READ_ODD_SM_REG1_t DFE_READ_ODD_SM_REG1;
#define reg_DFE_F2_D_P_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG1.BF.DFE_F2_D_P_O_SM_LANE_5_0
#define reg_DFE_F2_D_N_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG1.BF.DFE_F2_D_N_O_SM_LANE_5_0
#define reg_DFE_F2_S_P_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG1.BF.DFE_F2_S_P_O_SM_LANE_5_0
#define reg_DFE_F2_S_N_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG1.BF.DFE_F2_S_N_O_SM_LANE_5_0

// 0x00a8	DFE_READ_ODD_SM_REG2		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F3_D_P_O_SM_LANE_4_0                 : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_F3_D_N_O_SM_LANE_4_0                 : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_F3_S_P_O_SM_LANE_4_0                 : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_F3_S_N_O_SM_LANE_4_0                 : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_SM_REG2_t;
__xdata __at( 0x24a8 ) volatile DFE_READ_ODD_SM_REG2_t DFE_READ_ODD_SM_REG2;
#define reg_DFE_F3_D_P_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG2.BF.DFE_F3_D_P_O_SM_LANE_4_0
#define reg_DFE_F3_D_N_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG2.BF.DFE_F3_D_N_O_SM_LANE_4_0
#define reg_DFE_F3_S_P_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG2.BF.DFE_F3_S_P_O_SM_LANE_4_0
#define reg_DFE_F3_S_N_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG2.BF.DFE_F3_S_N_O_SM_LANE_4_0

// 0x00ac	DFE_READ_ODD_SM_REG3		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F1_O_SM_LANE_5_0                     : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_F4_O_SM_LANE_5_0                     : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_F5_O_SM_LANE_5_0                     : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_F6_O_SM_LANE_5_0                     : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_SM_REG3_t;
__xdata __at( 0x24ac ) volatile DFE_READ_ODD_SM_REG3_t DFE_READ_ODD_SM_REG3;
#define reg_DFE_F1_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG3.BF.DFE_F1_O_SM_LANE_5_0
#define reg_DFE_F4_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG3.BF.DFE_F4_O_SM_LANE_5_0
#define reg_DFE_F5_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG3.BF.DFE_F5_O_SM_LANE_5_0
#define reg_DFE_F6_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG3.BF.DFE_F6_O_SM_LANE_5_0

// 0x00b0	DFE_READ_ODD_SM_REG4		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F7_O_SM_LANE_4_0                     : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_F8_O_SM_LANE_4_0                     : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_F9_O_SM_LANE_4_0                     : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_F10_O_SM_LANE_4_0                    : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_SM_REG4_t;
__xdata __at( 0x24b0 ) volatile DFE_READ_ODD_SM_REG4_t DFE_READ_ODD_SM_REG4;
#define reg_DFE_F7_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG4.BF.DFE_F7_O_SM_LANE_4_0
#define reg_DFE_F8_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG4.BF.DFE_F8_O_SM_LANE_4_0
#define reg_DFE_F9_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG4.BF.DFE_F9_O_SM_LANE_4_0
#define reg_DFE_F10_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG4.BF.DFE_F10_O_SM_LANE_4_0

// 0x00b4	DFE_READ_ODD_SM_REG5		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F11_O_SM_LANE_4_0                    : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_F12_O_SM_LANE_4_0                    : 5;	/* [12:8]       r 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_F13_O_SM_LANE_4_0                    : 5;	/*[20:16]       r 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t DFE_F14_O_SM_LANE_4_0                    : 5;	/*[28:24]       r 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_SM_REG5_t;
__xdata __at( 0x24b4 ) volatile DFE_READ_ODD_SM_REG5_t DFE_READ_ODD_SM_REG5;
#define reg_DFE_F11_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG5.BF.DFE_F11_O_SM_LANE_4_0
#define reg_DFE_F12_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG5.BF.DFE_F12_O_SM_LANE_4_0
#define reg_DFE_F13_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG5.BF.DFE_F13_O_SM_LANE_4_0
#define reg_DFE_F14_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG5.BF.DFE_F14_O_SM_LANE_4_0

// 0x00b8	DFE_READ_ODD_SM_REG6		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_F15_O_SM_LANE_4_0                    : 5;	/*  [4:0]       r 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t DFE_FF0_O_SM_LANE_5_0                    : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FF1_O_SM_LANE_5_0                    : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_FF2_O_SM_LANE_5_0                    : 6;	/*[29:24]       r 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_SM_REG6_t;
__xdata __at( 0x24b8 ) volatile DFE_READ_ODD_SM_REG6_t DFE_READ_ODD_SM_REG6;
#define reg_DFE_F15_O_SM_LANE_4_0  DFE_READ_ODD_SM_REG6.BF.DFE_F15_O_SM_LANE_4_0
#define reg_DFE_FF0_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG6.BF.DFE_FF0_O_SM_LANE_5_0
#define reg_DFE_FF1_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG6.BF.DFE_FF1_O_SM_LANE_5_0
#define reg_DFE_FF2_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG6.BF.DFE_FF2_O_SM_LANE_5_0

// 0x00bc	DFE_READ_ODD_SM_REG7		DFE TAP SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_FF3_O_SM_LANE_5_0                    : 6;	/*  [5:0]       r 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DFE_FF4_O_SM_LANE_5_0                    : 6;	/* [13:8]       r 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DFE_FF5_O_SM_LANE_5_0                    : 6;	/*[21:16]       r 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_SM_REG7_t;
__xdata __at( 0x24bc ) volatile DFE_READ_ODD_SM_REG7_t DFE_READ_ODD_SM_REG7;
#define reg_DFE_FF3_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG7.BF.DFE_FF3_O_SM_LANE_5_0
#define reg_DFE_FF4_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG7.BF.DFE_FF4_O_SM_LANE_5_0
#define reg_DFE_FF5_O_SM_LANE_5_0  DFE_READ_ODD_SM_REG7.BF.DFE_FF5_O_SM_LANE_5_0

// 0x00c0	DFE_READ_EVEN_SM_REG8		DFE DC SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_DC_D_P_E_SM_LANE_6_0                 : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_DC_D_N_E_SM_LANE_6_0                 : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_DC_S_P_E_SM_LANE_6_0                 : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_DC_S_N_E_SM_LANE_6_0                 : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_SM_REG8_t;
__xdata __at( 0x24c0 ) volatile DFE_READ_EVEN_SM_REG8_t DFE_READ_EVEN_SM_REG8;
#define reg_DFE_DC_D_P_E_SM_LANE_6_0  DFE_READ_EVEN_SM_REG8.BF.DFE_DC_D_P_E_SM_LANE_6_0
#define reg_DFE_DC_D_N_E_SM_LANE_6_0  DFE_READ_EVEN_SM_REG8.BF.DFE_DC_D_N_E_SM_LANE_6_0
#define reg_DFE_DC_S_P_E_SM_LANE_6_0  DFE_READ_EVEN_SM_REG8.BF.DFE_DC_S_P_E_SM_LANE_6_0
#define reg_DFE_DC_S_N_E_SM_LANE_6_0  DFE_READ_EVEN_SM_REG8.BF.DFE_DC_S_N_E_SM_LANE_6_0

// 0x00c4	DFE_READ_ODD_SM_REG8		DFE DC SIGN-MAGNITUDE READBACK
typedef union {
	struct {
		uint8_t DFE_DC_D_P_O_SM_LANE_6_0                 : 7;	/*  [6:0]       r 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_DC_D_N_O_SM_LANE_6_0                 : 7;	/* [14:8]       r 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_DC_S_P_O_SM_LANE_6_0                 : 7;	/*[22:16]       r 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_DC_S_N_O_SM_LANE_6_0                 : 7;	/*[30:24]       r 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_SM_REG8_t;
__xdata __at( 0x24c4 ) volatile DFE_READ_ODD_SM_REG8_t DFE_READ_ODD_SM_REG8;
#define reg_DFE_DC_D_P_O_SM_LANE_6_0  DFE_READ_ODD_SM_REG8.BF.DFE_DC_D_P_O_SM_LANE_6_0
#define reg_DFE_DC_D_N_O_SM_LANE_6_0  DFE_READ_ODD_SM_REG8.BF.DFE_DC_D_N_O_SM_LANE_6_0
#define reg_DFE_DC_S_P_O_SM_LANE_6_0  DFE_READ_ODD_SM_REG8.BF.DFE_DC_S_P_O_SM_LANE_6_0
#define reg_DFE_DC_S_N_O_SM_LANE_6_0  DFE_READ_ODD_SM_REG8.BF.DFE_DC_S_N_O_SM_LANE_6_0

// 0x00d0	DFE_READ_EVEN_2C_REG0		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F0_D_P_E_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F0_D_N_E_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_S_P_E_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_S_N_E_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_2C_REG0_t;
__xdata __at( 0x24d0 ) volatile DFE_READ_EVEN_2C_REG0_t DFE_READ_EVEN_2C_REG0;
#define reg_DFE_F0_D_P_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG0.BF.DFE_F0_D_P_E_2C_LANE_7_0
#define reg_DFE_F0_D_N_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG0.BF.DFE_F0_D_N_E_2C_LANE_7_0
#define reg_DFE_F0_S_P_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG0.BF.DFE_F0_S_P_E_2C_LANE_7_0
#define reg_DFE_F0_S_N_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG0.BF.DFE_F0_S_N_E_2C_LANE_7_0

// 0x00d4	DFE_READ_EVEN_2C_REG1		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F2_D_P_E_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_D_N_E_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_S_P_E_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_S_N_E_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_2C_REG1_t;
__xdata __at( 0x24d4 ) volatile DFE_READ_EVEN_2C_REG1_t DFE_READ_EVEN_2C_REG1;
#define reg_DFE_F2_D_P_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG1.BF.DFE_F2_D_P_E_2C_LANE_7_0
#define reg_DFE_F2_D_N_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG1.BF.DFE_F2_D_N_E_2C_LANE_7_0
#define reg_DFE_F2_S_P_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG1.BF.DFE_F2_S_P_E_2C_LANE_7_0
#define reg_DFE_F2_S_N_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG1.BF.DFE_F2_S_N_E_2C_LANE_7_0

// 0x00d8	DFE_READ_EVEN_2C_REG2		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F3_D_P_E_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F3_D_N_E_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_S_P_E_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_S_N_E_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_2C_REG2_t;
__xdata __at( 0x24d8 ) volatile DFE_READ_EVEN_2C_REG2_t DFE_READ_EVEN_2C_REG2;
#define reg_DFE_F3_D_P_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG2.BF.DFE_F3_D_P_E_2C_LANE_7_0
#define reg_DFE_F3_D_N_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG2.BF.DFE_F3_D_N_E_2C_LANE_7_0
#define reg_DFE_F3_S_P_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG2.BF.DFE_F3_S_P_E_2C_LANE_7_0
#define reg_DFE_F3_S_N_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG2.BF.DFE_F3_S_N_E_2C_LANE_7_0

// 0x00dc	DFE_READ_EVEN_2C_REG3		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F1_E_2C_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_E_2C_LANE_7_0                     : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F5_E_2C_LANE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F6_E_2C_LANE_7_0                     : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_2C_REG3_t;
__xdata __at( 0x24dc ) volatile DFE_READ_EVEN_2C_REG3_t DFE_READ_EVEN_2C_REG3;
#define reg_DFE_F1_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG3.BF.DFE_F1_E_2C_LANE_7_0
#define reg_DFE_F4_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG3.BF.DFE_F4_E_2C_LANE_7_0
#define reg_DFE_F5_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG3.BF.DFE_F5_E_2C_LANE_7_0
#define reg_DFE_F6_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG3.BF.DFE_F6_E_2C_LANE_7_0

// 0x00e0	DFE_READ_EVEN_2C_REG4		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F7_E_2C_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F8_E_2C_LANE_7_0                     : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F9_E_2C_LANE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F10_E_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_2C_REG4_t;
__xdata __at( 0x24e0 ) volatile DFE_READ_EVEN_2C_REG4_t DFE_READ_EVEN_2C_REG4;
#define reg_DFE_F7_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG4.BF.DFE_F7_E_2C_LANE_7_0
#define reg_DFE_F8_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG4.BF.DFE_F8_E_2C_LANE_7_0
#define reg_DFE_F9_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG4.BF.DFE_F9_E_2C_LANE_7_0
#define reg_DFE_F10_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG4.BF.DFE_F10_E_2C_LANE_7_0

// 0x00e4	DFE_READ_EVEN_2C_REG5		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F11_E_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F12_E_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F13_E_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F14_E_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_2C_REG5_t;
__xdata __at( 0x24e4 ) volatile DFE_READ_EVEN_2C_REG5_t DFE_READ_EVEN_2C_REG5;
#define reg_DFE_F11_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG5.BF.DFE_F11_E_2C_LANE_7_0
#define reg_DFE_F12_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG5.BF.DFE_F12_E_2C_LANE_7_0
#define reg_DFE_F13_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG5.BF.DFE_F13_E_2C_LANE_7_0
#define reg_DFE_F14_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG5.BF.DFE_F14_E_2C_LANE_7_0

// 0x00e8	DFE_READ_EVEN_2C_REG6		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F15_E_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_FF0_E_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_FF1_E_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_FF2_E_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_2C_REG6_t;
__xdata __at( 0x24e8 ) volatile DFE_READ_EVEN_2C_REG6_t DFE_READ_EVEN_2C_REG6;
#define reg_DFE_F15_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG6.BF.DFE_F15_E_2C_LANE_7_0
#define reg_DFE_FF0_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG6.BF.DFE_FF0_E_2C_LANE_7_0
#define reg_DFE_FF1_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG6.BF.DFE_FF1_E_2C_LANE_7_0
#define reg_DFE_FF2_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG6.BF.DFE_FF2_E_2C_LANE_7_0

// 0x00ec	DFE_READ_EVEN_2C_REG7		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_FF3_E_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_FF4_E_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_FF5_E_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_2C_REG7_t;
__xdata __at( 0x24ec ) volatile DFE_READ_EVEN_2C_REG7_t DFE_READ_EVEN_2C_REG7;
#define reg_DFE_FF3_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG7.BF.DFE_FF3_E_2C_LANE_7_0
#define reg_DFE_FF4_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG7.BF.DFE_FF4_E_2C_LANE_7_0
#define reg_DFE_FF5_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG7.BF.DFE_FF5_E_2C_LANE_7_0

// 0x00f0	DFE_READ_ODD_2C_REG0		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F0_D_P_O_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F0_D_N_O_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F0_S_P_O_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F0_S_N_O_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_2C_REG0_t;
__xdata __at( 0x24f0 ) volatile DFE_READ_ODD_2C_REG0_t DFE_READ_ODD_2C_REG0;
#define reg_DFE_F0_D_P_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG0.BF.DFE_F0_D_P_O_2C_LANE_7_0
#define reg_DFE_F0_D_N_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG0.BF.DFE_F0_D_N_O_2C_LANE_7_0
#define reg_DFE_F0_S_P_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG0.BF.DFE_F0_S_P_O_2C_LANE_7_0
#define reg_DFE_F0_S_N_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG0.BF.DFE_F0_S_N_O_2C_LANE_7_0

// 0x00f4	DFE_READ_ODD_2C_REG1		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F2_D_P_O_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F2_D_N_O_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F2_S_P_O_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F2_S_N_O_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_2C_REG1_t;
__xdata __at( 0x24f4 ) volatile DFE_READ_ODD_2C_REG1_t DFE_READ_ODD_2C_REG1;
#define reg_DFE_F2_D_P_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG1.BF.DFE_F2_D_P_O_2C_LANE_7_0
#define reg_DFE_F2_D_N_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG1.BF.DFE_F2_D_N_O_2C_LANE_7_0
#define reg_DFE_F2_S_P_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG1.BF.DFE_F2_S_P_O_2C_LANE_7_0
#define reg_DFE_F2_S_N_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG1.BF.DFE_F2_S_N_O_2C_LANE_7_0

// 0x00f8	DFE_READ_ODD_2C_REG2		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F3_D_P_O_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F3_D_N_O_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F3_S_P_O_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F3_S_N_O_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_2C_REG2_t;
__xdata __at( 0x24f8 ) volatile DFE_READ_ODD_2C_REG2_t DFE_READ_ODD_2C_REG2;
#define reg_DFE_F3_D_P_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG2.BF.DFE_F3_D_P_O_2C_LANE_7_0
#define reg_DFE_F3_D_N_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG2.BF.DFE_F3_D_N_O_2C_LANE_7_0
#define reg_DFE_F3_S_P_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG2.BF.DFE_F3_S_P_O_2C_LANE_7_0
#define reg_DFE_F3_S_N_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG2.BF.DFE_F3_S_N_O_2C_LANE_7_0

// 0x00fc	DFE_READ_ODD_2C_REG3		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F1_O_2C_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F4_O_2C_LANE_7_0                     : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F5_O_2C_LANE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F6_O_2C_LANE_7_0                     : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_2C_REG3_t;
__xdata __at( 0x24fc ) volatile DFE_READ_ODD_2C_REG3_t DFE_READ_ODD_2C_REG3;
#define reg_DFE_F1_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG3.BF.DFE_F1_O_2C_LANE_7_0
#define reg_DFE_F4_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG3.BF.DFE_F4_O_2C_LANE_7_0
#define reg_DFE_F5_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG3.BF.DFE_F5_O_2C_LANE_7_0
#define reg_DFE_F6_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG3.BF.DFE_F6_O_2C_LANE_7_0

// 0x0100	DFE_READ_ODD_2C_REG4		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F7_O_2C_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F8_O_2C_LANE_7_0                     : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F9_O_2C_LANE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F10_O_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_2C_REG4_t;
__xdata __at( 0x2500 ) volatile DFE_READ_ODD_2C_REG4_t DFE_READ_ODD_2C_REG4;
#define reg_DFE_F7_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG4.BF.DFE_F7_O_2C_LANE_7_0
#define reg_DFE_F8_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG4.BF.DFE_F8_O_2C_LANE_7_0
#define reg_DFE_F9_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG4.BF.DFE_F9_O_2C_LANE_7_0
#define reg_DFE_F10_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG4.BF.DFE_F10_O_2C_LANE_7_0

// 0x0104	DFE_READ_ODD_2C_REG5		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F11_O_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_F12_O_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_F13_O_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_F14_O_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_2C_REG5_t;
__xdata __at( 0x2504 ) volatile DFE_READ_ODD_2C_REG5_t DFE_READ_ODD_2C_REG5;
#define reg_DFE_F11_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG5.BF.DFE_F11_O_2C_LANE_7_0
#define reg_DFE_F12_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG5.BF.DFE_F12_O_2C_LANE_7_0
#define reg_DFE_F13_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG5.BF.DFE_F13_O_2C_LANE_7_0
#define reg_DFE_F14_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG5.BF.DFE_F14_O_2C_LANE_7_0

// 0x0108	DFE_READ_ODD_2C_REG6		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_F15_O_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_FF0_O_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_FF1_O_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_FF2_O_2C_LANE_7_0                    : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_2C_REG6_t;
__xdata __at( 0x2508 ) volatile DFE_READ_ODD_2C_REG6_t DFE_READ_ODD_2C_REG6;
#define reg_DFE_F15_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG6.BF.DFE_F15_O_2C_LANE_7_0
#define reg_DFE_FF0_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG6.BF.DFE_FF0_O_2C_LANE_7_0
#define reg_DFE_FF1_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG6.BF.DFE_FF1_O_2C_LANE_7_0
#define reg_DFE_FF2_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG6.BF.DFE_FF2_O_2C_LANE_7_0

// 0x010c	DFE_READ_ODD_2C_REG7		DFE 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_FF3_O_2C_LANE_7_0                    : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_FF4_O_2C_LANE_7_0                    : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_FF5_O_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_2C_REG7_t;
__xdata __at( 0x250c ) volatile DFE_READ_ODD_2C_REG7_t DFE_READ_ODD_2C_REG7;
#define reg_DFE_FF3_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG7.BF.DFE_FF3_O_2C_LANE_7_0
#define reg_DFE_FF4_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG7.BF.DFE_FF4_O_2C_LANE_7_0
#define reg_DFE_FF5_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG7.BF.DFE_FF5_O_2C_LANE_7_0

// 0x0110	DFE_READ_EVEN_2C_REG8		DFE DC 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_DC_D_P_E_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_D_N_E_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_S_P_E_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_DC_S_N_E_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_EVEN_2C_REG8_t;
__xdata __at( 0x2510 ) volatile DFE_READ_EVEN_2C_REG8_t DFE_READ_EVEN_2C_REG8;
#define reg_DFE_DC_D_P_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG8.BF.DFE_DC_D_P_E_2C_LANE_7_0
#define reg_DFE_DC_D_N_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG8.BF.DFE_DC_D_N_E_2C_LANE_7_0
#define reg_DFE_DC_S_P_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG8.BF.DFE_DC_S_P_E_2C_LANE_7_0
#define reg_DFE_DC_S_N_E_2C_LANE_7_0  DFE_READ_EVEN_2C_REG8.BF.DFE_DC_S_N_E_2C_LANE_7_0

// 0x0114	DFE_READ_ODD_2C_REG8		DFE DC 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t DFE_DC_D_P_O_2C_LANE_7_0                 : 8;	/*  [7:0]       r 8'h0*/
		uint8_t DFE_DC_D_N_O_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t DFE_DC_S_P_O_2C_LANE_7_0                 : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_DC_S_N_O_2C_LANE_7_0                 : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_READ_ODD_2C_REG8_t;
__xdata __at( 0x2514 ) volatile DFE_READ_ODD_2C_REG8_t DFE_READ_ODD_2C_REG8;
#define reg_DFE_DC_D_P_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG8.BF.DFE_DC_D_P_O_2C_LANE_7_0
#define reg_DFE_DC_D_N_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG8.BF.DFE_DC_D_N_O_2C_LANE_7_0
#define reg_DFE_DC_S_P_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG8.BF.DFE_DC_S_P_O_2C_LANE_7_0
#define reg_DFE_DC_S_N_O_2C_LANE_7_0  DFE_READ_ODD_2C_REG8.BF.DFE_DC_S_N_O_2C_LANE_7_0

// 0x0118	CAL_OFST_REG0		DFE DC EVEN 2'S COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t CAL_OFST_D_P_E_LANE_6_0                  : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CAL_OFST_D_N_E_LANE_6_0                  : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CAL_OFST_S_P_E_LANE_6_0                  : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CAL_OFST_S_N_E_LANE_6_0                  : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_OFST_REG0_t;
__xdata __at( 0x2518 ) volatile CAL_OFST_REG0_t CAL_OFST_REG0;
#define reg_CAL_OFST_D_P_E_LANE_6_0  CAL_OFST_REG0.BF.CAL_OFST_D_P_E_LANE_6_0
#define reg_CAL_OFST_D_N_E_LANE_6_0  CAL_OFST_REG0.BF.CAL_OFST_D_N_E_LANE_6_0
#define reg_CAL_OFST_S_P_E_LANE_6_0  CAL_OFST_REG0.BF.CAL_OFST_S_P_E_LANE_6_0
#define reg_CAL_OFST_S_N_E_LANE_6_0  CAL_OFST_REG0.BF.CAL_OFST_S_N_E_LANE_6_0

// 0x011c	CAL_OFST_REG1		DFE DC 2'S ODD COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t CAL_OFST_D_P_O_LANE_6_0                  : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CAL_OFST_D_N_O_LANE_6_0                  : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CAL_OFST_S_P_O_LANE_6_0                  : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CAL_OFST_S_N_O_LANE_6_0                  : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_OFST_REG1_t;
__xdata __at( 0x251c ) volatile CAL_OFST_REG1_t CAL_OFST_REG1;
#define reg_CAL_OFST_D_P_O_LANE_6_0  CAL_OFST_REG1.BF.CAL_OFST_D_P_O_LANE_6_0
#define reg_CAL_OFST_D_N_O_LANE_6_0  CAL_OFST_REG1.BF.CAL_OFST_D_N_O_LANE_6_0
#define reg_CAL_OFST_S_P_O_LANE_6_0  CAL_OFST_REG1.BF.CAL_OFST_S_P_O_LANE_6_0
#define reg_CAL_OFST_S_N_O_LANE_6_0  CAL_OFST_REG1.BF.CAL_OFST_S_N_O_LANE_6_0

// 0x0120	CAL_OFST_REG2		DFE DC 2'S EDGE COMPLIMENT READBACK
typedef union {
	struct {
		uint8_t CAL_OFST_E_E_LANE_6_0                    : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CAL_OFST_E_O_LANE_6_0                    : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t RESERVED_15                              : 1;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:15]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:15]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_OFST_REG2_t;
__xdata __at( 0x2520 ) volatile CAL_OFST_REG2_t CAL_OFST_REG2;
#define reg_CAL_OFST_E_E_LANE_6_0  CAL_OFST_REG2.BF.CAL_OFST_E_E_LANE_6_0
#define reg_CAL_OFST_E_O_LANE_6_0  CAL_OFST_REG2.BF.CAL_OFST_E_O_LANE_6_0

// 0x0130	DFE_DCE_REG0		DFE FEN/FEXT DC EDGE
typedef union {
	struct {
		uint8_t DFE_FEXTDC_E_E_LANE_6_0                  : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t DFE_FENDC_E_E_LANE                       : 1;	/*      7     r/w   0*/
		uint8_t DFE_FEXTDC_E_O_LANE_6_0                  : 7;	/* [14:8]     r/w 7'h0*/
		uint8_t DFE_FENDC_E_O_LANE                       : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_DCE_REG0_t;
__xdata __at( 0x2530 ) volatile DFE_DCE_REG0_t DFE_DCE_REG0;
#define reg_DFE_FEXTDC_E_E_LANE_6_0  DFE_DCE_REG0.BF.DFE_FEXTDC_E_E_LANE_6_0
#define reg_DFE_FENDC_E_E_LANE  DFE_DCE_REG0.BF.DFE_FENDC_E_E_LANE
#define reg_DFE_FEXTDC_E_O_LANE_6_0  DFE_DCE_REG0.BF.DFE_FEXTDC_E_O_LANE_6_0
#define reg_DFE_FENDC_E_O_LANE  DFE_DCE_REG0.BF.DFE_FENDC_E_O_LANE

// 0x0160	EOM_VLD_REG0		EOM VALID COUNT LSB
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_P_E_LANE_31_0_b0             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_P_E_LANE_31_0_b1             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_P_E_LANE_31_0_b2             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_P_E_LANE_31_0_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG0_t;
__xdata __at( 0x2560 ) volatile EOM_VLD_REG0_t EOM_VLD_REG0;
#define reg_EOM_VLD_CNT_P_E_LANE_31_0_b0  EOM_VLD_REG0.BF.EOM_VLD_CNT_P_E_LANE_31_0_b0
#define reg_EOM_VLD_CNT_P_E_LANE_31_0_b1  EOM_VLD_REG0.BF.EOM_VLD_CNT_P_E_LANE_31_0_b1
#define reg_EOM_VLD_CNT_P_E_LANE_31_0_b2  EOM_VLD_REG0.BF.EOM_VLD_CNT_P_E_LANE_31_0_b2
#define reg_EOM_VLD_CNT_P_E_LANE_31_0_b3  EOM_VLD_REG0.BF.EOM_VLD_CNT_P_E_LANE_31_0_b3

// 0x0164	EOM_VLD_REG1		EOM VALID COUNT LSB
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_N_E_LANE_31_0_b0             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_N_E_LANE_31_0_b1             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_N_E_LANE_31_0_b2             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_N_E_LANE_31_0_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG1_t;
__xdata __at( 0x2564 ) volatile EOM_VLD_REG1_t EOM_VLD_REG1;
#define reg_EOM_VLD_CNT_N_E_LANE_31_0_b0  EOM_VLD_REG1.BF.EOM_VLD_CNT_N_E_LANE_31_0_b0
#define reg_EOM_VLD_CNT_N_E_LANE_31_0_b1  EOM_VLD_REG1.BF.EOM_VLD_CNT_N_E_LANE_31_0_b1
#define reg_EOM_VLD_CNT_N_E_LANE_31_0_b2  EOM_VLD_REG1.BF.EOM_VLD_CNT_N_E_LANE_31_0_b2
#define reg_EOM_VLD_CNT_N_E_LANE_31_0_b3  EOM_VLD_REG1.BF.EOM_VLD_CNT_N_E_LANE_31_0_b3

// 0x0168	EOM_VLD_REG2		EOM VALID COUNT LSB
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_P_O_LANE_31_0_b0             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_P_O_LANE_31_0_b1             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_P_O_LANE_31_0_b2             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_P_O_LANE_31_0_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG2_t;
__xdata __at( 0x2568 ) volatile EOM_VLD_REG2_t EOM_VLD_REG2;
#define reg_EOM_VLD_CNT_P_O_LANE_31_0_b0  EOM_VLD_REG2.BF.EOM_VLD_CNT_P_O_LANE_31_0_b0
#define reg_EOM_VLD_CNT_P_O_LANE_31_0_b1  EOM_VLD_REG2.BF.EOM_VLD_CNT_P_O_LANE_31_0_b1
#define reg_EOM_VLD_CNT_P_O_LANE_31_0_b2  EOM_VLD_REG2.BF.EOM_VLD_CNT_P_O_LANE_31_0_b2
#define reg_EOM_VLD_CNT_P_O_LANE_31_0_b3  EOM_VLD_REG2.BF.EOM_VLD_CNT_P_O_LANE_31_0_b3

// 0x016c	EOM_VLD_REG3		EOM VALID COUNT LSB
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_N_O_LANE_31_0_b0             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_N_O_LANE_31_0_b1             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_N_O_LANE_31_0_b2             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_VLD_CNT_N_O_LANE_31_0_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG3_t;
__xdata __at( 0x256c ) volatile EOM_VLD_REG3_t EOM_VLD_REG3;
#define reg_EOM_VLD_CNT_N_O_LANE_31_0_b0  EOM_VLD_REG3.BF.EOM_VLD_CNT_N_O_LANE_31_0_b0
#define reg_EOM_VLD_CNT_N_O_LANE_31_0_b1  EOM_VLD_REG3.BF.EOM_VLD_CNT_N_O_LANE_31_0_b1
#define reg_EOM_VLD_CNT_N_O_LANE_31_0_b2  EOM_VLD_REG3.BF.EOM_VLD_CNT_N_O_LANE_31_0_b2
#define reg_EOM_VLD_CNT_N_O_LANE_31_0_b3  EOM_VLD_REG3.BF.EOM_VLD_CNT_N_O_LANE_31_0_b3

// 0x0170	EOM_ERR_REG0		EOM ERROR COUNT REG
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_P_E_LANE_31_0_b0             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_P_E_LANE_31_0_b1             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_P_E_LANE_31_0_b2             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_P_E_LANE_31_0_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG0_t;
__xdata __at( 0x2570 ) volatile EOM_ERR_REG0_t EOM_ERR_REG0;
#define reg_EOM_ERR_CNT_P_E_LANE_31_0_b0  EOM_ERR_REG0.BF.EOM_ERR_CNT_P_E_LANE_31_0_b0
#define reg_EOM_ERR_CNT_P_E_LANE_31_0_b1  EOM_ERR_REG0.BF.EOM_ERR_CNT_P_E_LANE_31_0_b1
#define reg_EOM_ERR_CNT_P_E_LANE_31_0_b2  EOM_ERR_REG0.BF.EOM_ERR_CNT_P_E_LANE_31_0_b2
#define reg_EOM_ERR_CNT_P_E_LANE_31_0_b3  EOM_ERR_REG0.BF.EOM_ERR_CNT_P_E_LANE_31_0_b3

// 0x0174	EOM_ERR_REG1		EOM ERROR COUNT REG
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_N_E_LANE_31_0_b0             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_N_E_LANE_31_0_b1             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_N_E_LANE_31_0_b2             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_N_E_LANE_31_0_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG1_t;
__xdata __at( 0x2574 ) volatile EOM_ERR_REG1_t EOM_ERR_REG1;
#define reg_EOM_ERR_CNT_N_E_LANE_31_0_b0  EOM_ERR_REG1.BF.EOM_ERR_CNT_N_E_LANE_31_0_b0
#define reg_EOM_ERR_CNT_N_E_LANE_31_0_b1  EOM_ERR_REG1.BF.EOM_ERR_CNT_N_E_LANE_31_0_b1
#define reg_EOM_ERR_CNT_N_E_LANE_31_0_b2  EOM_ERR_REG1.BF.EOM_ERR_CNT_N_E_LANE_31_0_b2
#define reg_EOM_ERR_CNT_N_E_LANE_31_0_b3  EOM_ERR_REG1.BF.EOM_ERR_CNT_N_E_LANE_31_0_b3

// 0x0178	EOM_ERR_REG2		EOM ERROR COUNT REG
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_P_O_LANE_31_0_b0             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_P_O_LANE_31_0_b1             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_P_O_LANE_31_0_b2             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_P_O_LANE_31_0_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG2_t;
__xdata __at( 0x2578 ) volatile EOM_ERR_REG2_t EOM_ERR_REG2;
#define reg_EOM_ERR_CNT_P_O_LANE_31_0_b0  EOM_ERR_REG2.BF.EOM_ERR_CNT_P_O_LANE_31_0_b0
#define reg_EOM_ERR_CNT_P_O_LANE_31_0_b1  EOM_ERR_REG2.BF.EOM_ERR_CNT_P_O_LANE_31_0_b1
#define reg_EOM_ERR_CNT_P_O_LANE_31_0_b2  EOM_ERR_REG2.BF.EOM_ERR_CNT_P_O_LANE_31_0_b2
#define reg_EOM_ERR_CNT_P_O_LANE_31_0_b3  EOM_ERR_REG2.BF.EOM_ERR_CNT_P_O_LANE_31_0_b3

// 0x017c	EOM_ERR_REG3		EOM ERROR COUNT REG
typedef union {
	struct {
		uint8_t EOM_ERR_CNT_N_O_LANE_31_0_b0             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_N_O_LANE_31_0_b1             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_N_O_LANE_31_0_b2             : 8;	/* [31:0]       r   0*/
		uint8_t EOM_ERR_CNT_N_O_LANE_31_0_b3             : 8;	/* [31:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_ERR_REG3_t;
__xdata __at( 0x257c ) volatile EOM_ERR_REG3_t EOM_ERR_REG3;
#define reg_EOM_ERR_CNT_N_O_LANE_31_0_b0  EOM_ERR_REG3.BF.EOM_ERR_CNT_N_O_LANE_31_0_b0
#define reg_EOM_ERR_CNT_N_O_LANE_31_0_b1  EOM_ERR_REG3.BF.EOM_ERR_CNT_N_O_LANE_31_0_b1
#define reg_EOM_ERR_CNT_N_O_LANE_31_0_b2  EOM_ERR_REG3.BF.EOM_ERR_CNT_N_O_LANE_31_0_b2
#define reg_EOM_ERR_CNT_N_O_LANE_31_0_b3  EOM_ERR_REG3.BF.EOM_ERR_CNT_N_O_LANE_31_0_b3

// 0x0180	EOM_REG0		EOM CONTROL REG
typedef union {
	struct {
		uint8_t EOM_EN_LANE                              : 1;	/*      0     r/w   0*/
		uint8_t EOM_POL_FORCE_LANE                       : 1;	/*      1     r/w   0*/
		uint8_t EOM_CNT_CLR_LANE                         : 1;	/*      2     r/w   0*/
		uint8_t EOM_CNT_AUTO_CLR_LANE                    : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:4]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_REG0_t;
__xdata __at( 0x2580 ) volatile EOM_REG0_t EOM_REG0;
#define reg_EOM_EN_LANE  EOM_REG0.BF.EOM_EN_LANE
#define reg_EOM_POL_FORCE_LANE  EOM_REG0.BF.EOM_POL_FORCE_LANE
#define reg_EOM_CNT_CLR_LANE  EOM_REG0.BF.EOM_CNT_CLR_LANE
#define reg_EOM_CNT_AUTO_CLR_LANE  EOM_REG0.BF.EOM_CNT_AUTO_CLR_LANE

// 0x01f0	EOM_VLD_REG4		EOM VALID COUNT MSB
typedef union {
	struct {
		uint8_t EOM_VLD_CNT_MSB_N_O_LANE_7_0             : 8;	/*  [7:0]       r   0*/
		uint8_t EOM_VLD_CNT_MSB_P_O_LANE_7_0             : 8;	/* [15:8]       r   0*/
		uint8_t EOM_VLD_CNT_MSB_N_E_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t EOM_VLD_CNT_MSB_P_E_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_VLD_REG4_t;
__xdata __at( 0x25f0 ) volatile EOM_VLD_REG4_t EOM_VLD_REG4;
#define reg_EOM_VLD_CNT_MSB_N_O_LANE_7_0  EOM_VLD_REG4.BF.EOM_VLD_CNT_MSB_N_O_LANE_7_0
#define reg_EOM_VLD_CNT_MSB_P_O_LANE_7_0  EOM_VLD_REG4.BF.EOM_VLD_CNT_MSB_P_O_LANE_7_0
#define reg_EOM_VLD_CNT_MSB_N_E_LANE_7_0  EOM_VLD_REG4.BF.EOM_VLD_CNT_MSB_N_E_LANE_7_0
#define reg_EOM_VLD_CNT_MSB_P_E_LANE_7_0  EOM_VLD_REG4.BF.EOM_VLD_CNT_MSB_P_E_LANE_7_0

// 0x01f4	LANE_MARGIN_REG0		Lane Margin Reigster
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
__xdata __at( 0x25f4 ) volatile LANE_MARGIN_REG0_t LANE_MARGIN_REG0;
#define reg_DFE_MARGIN_OFFSET_LANE_6_0  LANE_MARGIN_REG0.BF.DFE_MARGIN_OFFSET_LANE_6_0
#define reg_DFE_MARGIN_TYPE_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_TYPE_LANE
#define reg_DFE_MARGIN_EN_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_EN_LANE
#define reg_DFE_MARGIN_DIR_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_DIR_LANE
#define reg_DFE_MARGIN_ACK_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_ACK_LANE
#define reg_DFE_MARGIN_READY_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_READY_LANE
#define reg_DFE_MARGIN_CHG_LANE  LANE_MARGIN_REG0.BF.DFE_MARGIN_CHG_LANE

#endif
