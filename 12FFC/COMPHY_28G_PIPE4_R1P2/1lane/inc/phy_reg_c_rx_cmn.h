#ifndef PHY_REG_C_RX_CMN_H
#define PHY_REG_C_RX_CMN_H



// 0x0000	RX_CMN_0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:0]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_CMN_0_t;
__xdata __at( 0xa100 ) volatile RX_CMN_0_t RX_CMN_0;

// 0x0010	DFE_STATIC_REG0		
typedef union {
	struct {
		uint8_t DFE_EO_UP_THRE_COARSE_4_0                : 5;	/*  [4:0]     r/w 5'h3*/
		uint8_t DFE_EO_UP_THRE_FINE_4_0_b0               : 3;	/*  [9:5]     r/w 5'h4*/
		uint8_t DFE_EO_UP_THRE_FINE_4_0_b1               : 2;	/*  [9:5]     r/w 5'h4*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_ADAPT_ADJ_F1_DC_THRESH_2_5_0         : 6;	/*[21:16]     r/w 6'h12*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_ADAPT_ADJ_F1_DC_THRESH_1_4_0         : 5;	/*[28:24]     r/w 5'h6*/
		uint8_t DFE_SQ_EN                                : 1;	/*     29     r/w   1*/
		uint8_t DFE_SAT_EN                               : 1;	/*     30     r/w   1*/
		uint8_t DFE_SAT_HOLD                             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG0_t;
__xdata __at( 0xa110 ) volatile DFE_STATIC_REG0_t DFE_STATIC_REG0;
#define reg_DFE_EO_UP_THRE_COARSE_4_0  DFE_STATIC_REG0.BF.DFE_EO_UP_THRE_COARSE_4_0
#define reg_DFE_EO_UP_THRE_FINE_4_0_b0  DFE_STATIC_REG0.BF.DFE_EO_UP_THRE_FINE_4_0_b0
#define reg_DFE_EO_UP_THRE_FINE_4_0_b1  DFE_STATIC_REG0.BF.DFE_EO_UP_THRE_FINE_4_0_b1
#define reg_DFE_ADAPT_ADJ_F1_DC_THRESH_2_5_0  DFE_STATIC_REG0.BF.DFE_ADAPT_ADJ_F1_DC_THRESH_2_5_0
#define reg_DFE_ADAPT_ADJ_F1_DC_THRESH_1_4_0  DFE_STATIC_REG0.BF.DFE_ADAPT_ADJ_F1_DC_THRESH_1_4_0
#define reg_DFE_SQ_EN  DFE_STATIC_REG0.BF.DFE_SQ_EN
#define reg_DFE_SAT_EN  DFE_STATIC_REG0.BF.DFE_SAT_EN
#define reg_DFE_SAT_HOLD  DFE_STATIC_REG0.BF.DFE_SAT_HOLD

// 0x0014	DFE_STATIC_REG1		
typedef union {
	struct {
		uint8_t DFE_ANA_SETTLE_DC_1_0                    : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t DFE_ANA_SETTLE_FF_1_0                    : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t DFE_ANA_SETTLE_F4TO15_1_0                : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t DFE_ANA_SETTLE_F23_1_0                   : 2;	/*  [7:6]     r/w 2'h1*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t DFE_ANA_SETTLE_F0_1_0                    : 2;	/*[13:12]     r/w 2'h1*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DFE_ANA_SETTLE_PATHSWITCH_3_0            : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t DFE_ANA_SETTLE_PATHON_6_0_b0             : 4;	/*[26:20]     r/w 7'h8*/
		uint8_t DFE_ANA_SETTLE_PATHON_6_0_b1             : 3;	/*[26:20]     r/w 7'h8*/
		uint8_t DFE_ANA_SETTLE_PATHOFF_3_0               : 4;	/*[30:27]     r/w 4'h8*/
		uint8_t DFE_FAST_SETTLE                          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG1_t;
__xdata __at( 0xa114 ) volatile DFE_STATIC_REG1_t DFE_STATIC_REG1;
#define reg_DFE_ANA_SETTLE_DC_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_DC_1_0
#define reg_DFE_ANA_SETTLE_FF_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_FF_1_0
#define reg_DFE_ANA_SETTLE_F4TO15_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_F4TO15_1_0
#define reg_DFE_ANA_SETTLE_F23_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_F23_1_0
#define reg_DFE_ANA_SETTLE_F0_1_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_F0_1_0
#define reg_DFE_ANA_SETTLE_PATHSWITCH_3_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHSWITCH_3_0
#define reg_DFE_ANA_SETTLE_PATHON_6_0_b0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHON_6_0_b0
#define reg_DFE_ANA_SETTLE_PATHON_6_0_b1  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHON_6_0_b1
#define reg_DFE_ANA_SETTLE_PATHOFF_3_0  DFE_STATIC_REG1.BF.DFE_ANA_SETTLE_PATHOFF_3_0
#define reg_DFE_FAST_SETTLE  DFE_STATIC_REG1.BF.DFE_FAST_SETTLE

// 0x0018	DFE_STATIC_REG3		
typedef union {
	struct {
		uint8_t ANA_RX_PATH_SEL_S_XOR                    : 1;	/*      0     r/w   0*/
		uint8_t ANA_RX_PATH_SEL_D_XOR                    : 1;	/*      1     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_O_XOR     : 1;	/*      2     r/w   0*/
		uint8_t ANA_RX_DATA_SLICER_PATH_SWITCH_E_XOR     : 1;	/*      3     r/w   0*/
		uint8_t ANA_RX_DFE_F3_POL_S_XOR                  : 1;	/*      4     r/w   0*/
		uint8_t ANA_RX_DFE_F3_POL_D_XOR                  : 1;	/*      5     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_S_XOR                  : 1;	/*      6     r/w   0*/
		uint8_t ANA_RX_DFE_F2_POL_D_XOR                  : 1;	/*      7     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_S_XOR                  : 1;	/*      8     r/w   0*/
		uint8_t ANA_RX_DFE_F1_POL_D_XOR                  : 1;	/*      9     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_S_XOR                  : 1;	/*     10     r/w   0*/
		uint8_t ANA_RX_DFE_F0_POL_D_XOR                  : 1;	/*     11     r/w   0*/
		uint8_t DFE_DC_SIGN_XOR                          : 1;	/*     12     r/w   0*/
		uint8_t DFE_F1_SIGN_XOR                          : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:14]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG3_t;
__xdata __at( 0xa118 ) volatile DFE_STATIC_REG3_t DFE_STATIC_REG3;
#define reg_ANA_RX_PATH_SEL_S_XOR  DFE_STATIC_REG3.BF.ANA_RX_PATH_SEL_S_XOR
#define reg_ANA_RX_PATH_SEL_D_XOR  DFE_STATIC_REG3.BF.ANA_RX_PATH_SEL_D_XOR
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_O_XOR  DFE_STATIC_REG3.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_O_XOR
#define reg_ANA_RX_DATA_SLICER_PATH_SWITCH_E_XOR  DFE_STATIC_REG3.BF.ANA_RX_DATA_SLICER_PATH_SWITCH_E_XOR
#define reg_ANA_RX_DFE_F3_POL_S_XOR  DFE_STATIC_REG3.BF.ANA_RX_DFE_F3_POL_S_XOR
#define reg_ANA_RX_DFE_F3_POL_D_XOR  DFE_STATIC_REG3.BF.ANA_RX_DFE_F3_POL_D_XOR
#define reg_ANA_RX_DFE_F2_POL_S_XOR  DFE_STATIC_REG3.BF.ANA_RX_DFE_F2_POL_S_XOR
#define reg_ANA_RX_DFE_F2_POL_D_XOR  DFE_STATIC_REG3.BF.ANA_RX_DFE_F2_POL_D_XOR
#define reg_ANA_RX_DFE_F1_POL_S_XOR  DFE_STATIC_REG3.BF.ANA_RX_DFE_F1_POL_S_XOR
#define reg_ANA_RX_DFE_F1_POL_D_XOR  DFE_STATIC_REG3.BF.ANA_RX_DFE_F1_POL_D_XOR
#define reg_ANA_RX_DFE_F0_POL_S_XOR  DFE_STATIC_REG3.BF.ANA_RX_DFE_F0_POL_S_XOR
#define reg_ANA_RX_DFE_F0_POL_D_XOR  DFE_STATIC_REG3.BF.ANA_RX_DFE_F0_POL_D_XOR
#define reg_DFE_DC_SIGN_XOR  DFE_STATIC_REG3.BF.DFE_DC_SIGN_XOR
#define reg_DFE_F1_SIGN_XOR  DFE_STATIC_REG3.BF.DFE_F1_SIGN_XOR

// 0x001c	DFE_STATIC_REG4		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t DFE_ANA_SETTLE_5NS_7_0                   : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t DFE_ANA_SETTLE_10NS_7_0                  : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t DFE_ANA_SETTLE_15NS_7_0                  : 8;	/*[23:16]     r/w 8'hb*/
		uint8_t DFE_ANA_SETTLE_20NS_7_0                  : 8;	/*[31:24]     r/w 8'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG4_t;
__xdata __at( 0xa11c ) volatile DFE_STATIC_REG4_t DFE_STATIC_REG4;
#define reg_DFE_ANA_SETTLE_5NS_7_0  DFE_STATIC_REG4.BF.DFE_ANA_SETTLE_5NS_7_0
#define reg_DFE_ANA_SETTLE_10NS_7_0  DFE_STATIC_REG4.BF.DFE_ANA_SETTLE_10NS_7_0
#define reg_DFE_ANA_SETTLE_15NS_7_0  DFE_STATIC_REG4.BF.DFE_ANA_SETTLE_15NS_7_0
#define reg_DFE_ANA_SETTLE_20NS_7_0  DFE_STATIC_REG4.BF.DFE_ANA_SETTLE_20NS_7_0

// 0x0020	DFE_STATIC_REG5		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t DFE_ANA_SETTLE_100NS_7_0                 : 8;	/*  [7:0]     r/w 8'h47*/
		uint8_t DFE_ANA_SETTLE_200NS_7_0                 : 8;	/* [15:8]     r/w 8'h8d*/
		uint8_t DFE_ANA_SETTLE_300NS_7_0                 : 8;	/*[23:16]     r/w 8'hd3*/
		uint8_t DFE_ANA_SETTLE_400NS_7_0                 : 8;	/*[31:24]     r/w 8'hff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG5_t;
__xdata __at( 0xa120 ) volatile DFE_STATIC_REG5_t DFE_STATIC_REG5;
#define reg_DFE_ANA_SETTLE_100NS_7_0  DFE_STATIC_REG5.BF.DFE_ANA_SETTLE_100NS_7_0
#define reg_DFE_ANA_SETTLE_200NS_7_0  DFE_STATIC_REG5.BF.DFE_ANA_SETTLE_200NS_7_0
#define reg_DFE_ANA_SETTLE_300NS_7_0  DFE_STATIC_REG5.BF.DFE_ANA_SETTLE_300NS_7_0
#define reg_DFE_ANA_SETTLE_400NS_7_0  DFE_STATIC_REG5.BF.DFE_ANA_SETTLE_400NS_7_0

// 0x0024	DFE_STATIC_REG6		DFE tap dac settlement counter
typedef union {
	struct {
		uint8_t DFE_ANA_SETTLE_F1_TRAIN_11_0_b0          : 8;	/* [11:0]     r/w 12'h47*/
		uint8_t DFE_ANA_SETTLE_F1_TRAIN_11_0_b1          : 4;	/* [11:0]     r/w 12'h47*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DFE_ANA_SETTLE_F1_TRACK_11_0_b0          : 8;	/*[27:16]     r/w 12'hfff*/
		uint8_t DFE_ANA_SETTLE_F1_TRACK_11_0_b1          : 4;	/*[27:16]     r/w 12'hfff*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_STATIC_REG6_t;
__xdata __at( 0xa124 ) volatile DFE_STATIC_REG6_t DFE_STATIC_REG6;
#define reg_DFE_ANA_SETTLE_F1_TRAIN_11_0_b0  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_F1_TRAIN_11_0_b0
#define reg_DFE_ANA_SETTLE_F1_TRAIN_11_0_b1  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_F1_TRAIN_11_0_b1
#define reg_DFE_ANA_SETTLE_F1_TRACK_11_0_b0  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_F1_TRACK_11_0_b0
#define reg_DFE_ANA_SETTLE_F1_TRACK_11_0_b1  DFE_STATIC_REG6.BF.DFE_ANA_SETTLE_F1_TRACK_11_0_b1

#endif
