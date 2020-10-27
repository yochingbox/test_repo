#ifndef PHY_REG_C_TX_CMN_H
#define PHY_REG_C_TX_CMN_H



// 0x0000	TX_CMN_REG		_field description_
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
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_CMN_REG_t;
__xdata __at( 0xa000 ) volatile TX_CMN_REG_t TX_CMN_REG;

// 0x0008	DTX_REG0		DTX Register 0
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_9_0_b0                      : 8;	/*  [9:0]     r/w 10'h0*/
		uint8_t INIT_TXFOFFS_9_0_b1                      : 2;	/*  [9:0]     r/w 10'h0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t LCPLL_SSC_DIS                            : 1;	/*     19     r/w   0*/
		uint8_t DPHER_CAL_MODE                           : 1;	/*     20     r/w   1*/
		uint8_t DPHER_CAL_MODE_RING                      : 1;	/*     21     r/w   1*/
		uint8_t RINGPLL_SSC_DIS                          : 1;	/*     22     r/w   0*/
		uint8_t RESET_DTX                                : 1;	/*     23     r/w   1*/
		uint8_t RX2TX_FOFFSET_LANE_SEL_1_0               : 2;	/*[25:24]     r/w   0*/
		uint8_t SSC_ACC_FACTOR                           : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t TX_FOFF_INV_FORCE                        : 1;	/*     28     r/w   0*/
		uint8_t TX_FOFF_INV                              : 1;	/*     29     r/w   0*/
		uint8_t SSC_DSPREAD_TX                           : 1;	/*     30     r/w   1*/
		uint8_t AUTO_TX_FOFFSET                          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG0_t;
__xdata __at( 0xa008 ) volatile DTX_REG0_t DTX_REG0;
#define reg_INIT_TXFOFFS_9_0_b0  DTX_REG0.BF.INIT_TXFOFFS_9_0_b0
#define reg_INIT_TXFOFFS_9_0_b1  DTX_REG0.BF.INIT_TXFOFFS_9_0_b1
#define reg_LCPLL_SSC_DIS  DTX_REG0.BF.LCPLL_SSC_DIS
#define reg_DPHER_CAL_MODE  DTX_REG0.BF.DPHER_CAL_MODE
#define reg_DPHER_CAL_MODE_RING  DTX_REG0.BF.DPHER_CAL_MODE_RING
#define reg_RINGPLL_SSC_DIS  DTX_REG0.BF.RINGPLL_SSC_DIS
#define reg_RESET_DTX  DTX_REG0.BF.RESET_DTX
#define reg_RX2TX_FOFFSET_LANE_SEL_1_0  DTX_REG0.BF.RX2TX_FOFFSET_LANE_SEL_1_0
#define reg_SSC_ACC_FACTOR  DTX_REG0.BF.SSC_ACC_FACTOR
#define reg_TX_FOFF_INV_FORCE  DTX_REG0.BF.TX_FOFF_INV_FORCE
#define reg_TX_FOFF_INV  DTX_REG0.BF.TX_FOFF_INV
#define reg_SSC_DSPREAD_TX  DTX_REG0.BF.SSC_DSPREAD_TX
#define reg_AUTO_TX_FOFFSET  DTX_REG0.BF.AUTO_TX_FOFFSET

// 0x000c	DTX_REG1		DTX Register 1
typedef union {
	struct {
		uint8_t SSC_STEP_10_0_b0                         : 8;	/* [10:0]     r/w 11'h00f*/
		uint8_t SSC_STEP_10_0_b1                         : 3;	/* [10:0]     r/w 11'h00f*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SSC_M_12_0_b0                            : 8;	/*[28:16]     r/w 13'h05cf*/
		uint8_t SSC_M_12_0_b1                            : 5;	/*[28:16]     r/w 13'h05cf*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG1_t;
__xdata __at( 0xa00c ) volatile DTX_REG1_t DTX_REG1;
#define reg_SSC_STEP_10_0_b0  DTX_REG1.BF.SSC_STEP_10_0_b0
#define reg_SSC_STEP_10_0_b1  DTX_REG1.BF.SSC_STEP_10_0_b1
#define reg_SSC_M_12_0_b0  DTX_REG1.BF.SSC_M_12_0_b0
#define reg_SSC_M_12_0_b1  DTX_REG1.BF.SSC_M_12_0_b1

// 0x0010	DTX_REG2		DTX Register 2
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_9_0_b0                 : 8;	/*  [9:0]     r/w 10'h0*/
		uint8_t INIT_TXFOFFS_RING_9_0_b1                 : 2;	/*  [9:0]     r/w 10'h0*/
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
		uint8_t RESET_DTX_RING                           : 1;	/*     23     r/w   1*/
		uint8_t RX2TX_FOFFSET_RING_LANE_SEL_1_0          : 2;	/*[25:24]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING                      : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t TX_FOFF_RING_INV_FORCE                   : 1;	/*     28     r/w   0*/
		uint8_t TX_FOFF_RING_INV                         : 1;	/*     29     r/w   0*/
		uint8_t SSC_DSPREAD_TX_RING                      : 1;	/*     30     r/w   1*/
		uint8_t AUTO_TX_FOFFSET_RING                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG2_t;
__xdata __at( 0xa010 ) volatile DTX_REG2_t DTX_REG2;
#define reg_INIT_TXFOFFS_RING_9_0_b0  DTX_REG2.BF.INIT_TXFOFFS_RING_9_0_b0
#define reg_INIT_TXFOFFS_RING_9_0_b1  DTX_REG2.BF.INIT_TXFOFFS_RING_9_0_b1
#define reg_RESET_DTX_RING  DTX_REG2.BF.RESET_DTX_RING
#define reg_RX2TX_FOFFSET_RING_LANE_SEL_1_0  DTX_REG2.BF.RX2TX_FOFFSET_RING_LANE_SEL_1_0
#define reg_SSC_ACC_FACTOR_RING  DTX_REG2.BF.SSC_ACC_FACTOR_RING
#define reg_TX_FOFF_RING_INV_FORCE  DTX_REG2.BF.TX_FOFF_RING_INV_FORCE
#define reg_TX_FOFF_RING_INV  DTX_REG2.BF.TX_FOFF_RING_INV
#define reg_SSC_DSPREAD_TX_RING  DTX_REG2.BF.SSC_DSPREAD_TX_RING
#define reg_AUTO_TX_FOFFSET_RING  DTX_REG2.BF.AUTO_TX_FOFFSET_RING

// 0x0014	DTX_REG3		DTX Register 3
typedef union {
	struct {
		uint8_t SSC_STEP_RING_10_0_b0                    : 8;	/* [10:0]     r/w 11'h00f*/
		uint8_t SSC_STEP_RING_10_0_b1                    : 3;	/* [10:0]     r/w 11'h00f*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t SSC_M_RING_12_0_b0                       : 8;	/*[28:16]     r/w 13'h05cf*/
		uint8_t SSC_M_RING_12_0_b1                       : 5;	/*[28:16]     r/w 13'h05cf*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG3_t;
__xdata __at( 0xa014 ) volatile DTX_REG3_t DTX_REG3;
#define reg_SSC_STEP_RING_10_0_b0  DTX_REG3.BF.SSC_STEP_RING_10_0_b0
#define reg_SSC_STEP_RING_10_0_b1  DTX_REG3.BF.SSC_STEP_RING_10_0_b1
#define reg_SSC_M_RING_12_0_b0  DTX_REG3.BF.SSC_M_RING_12_0_b0
#define reg_SSC_M_RING_12_0_b1  DTX_REG3.BF.SSC_M_RING_12_0_b1

// 0x0018	DTX_REG4		DTX Register 4
typedef union {
	struct {
		uint8_t LANE_ALIGN_POFFSET_6_0                   : 7;	/*  [6:0]     r/w   0*/
		uint8_t LANE_ALIGN_POFFSET_FORCE                 : 1;	/*      7     r/w   0*/
		uint8_t LANE_ALIGN_POFFSET_RING_6_0              : 7;	/* [14:8]     r/w   0*/
		uint8_t LANE_ALIGN_POFFSET_RING_FORCE            : 1;	/*     15     r/w   0*/
		uint8_t DTX_FLOOP_EN                             : 1;	/*     16     r/w   0*/
		uint8_t DTX_FLOOP_EN_RING                        : 1;	/*     17     r/w   0*/
		uint8_t DTX_FOFFSET_SEL                          : 1;	/*     18     r/w   0*/
		uint8_t DTX_FOFFSET_SEL_RING                     : 1;	/*     19     r/w   0*/
		uint8_t DTX_FLOOP_STEP_SIZE_1_0                  : 2;	/*[21:20]     r/w   0*/
		uint8_t DTX_FLOOP_STEP_SIZE_RING_1_0             : 2;	/*[23:22]     r/w   0*/
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
	uint32_t VAL;
} DTX_REG4_t;
__xdata __at( 0xa018 ) volatile DTX_REG4_t DTX_REG4;
#define reg_LANE_ALIGN_POFFSET_6_0  DTX_REG4.BF.LANE_ALIGN_POFFSET_6_0
#define reg_LANE_ALIGN_POFFSET_FORCE  DTX_REG4.BF.LANE_ALIGN_POFFSET_FORCE
#define reg_LANE_ALIGN_POFFSET_RING_6_0  DTX_REG4.BF.LANE_ALIGN_POFFSET_RING_6_0
#define reg_LANE_ALIGN_POFFSET_RING_FORCE  DTX_REG4.BF.LANE_ALIGN_POFFSET_RING_FORCE
#define reg_DTX_FLOOP_EN  DTX_REG4.BF.DTX_FLOOP_EN
#define reg_DTX_FLOOP_EN_RING  DTX_REG4.BF.DTX_FLOOP_EN_RING
#define reg_DTX_FOFFSET_SEL  DTX_REG4.BF.DTX_FOFFSET_SEL
#define reg_DTX_FOFFSET_SEL_RING  DTX_REG4.BF.DTX_FOFFSET_SEL_RING
#define reg_DTX_FLOOP_STEP_SIZE_1_0  DTX_REG4.BF.DTX_FLOOP_STEP_SIZE_1_0
#define reg_DTX_FLOOP_STEP_SIZE_RING_1_0  DTX_REG4.BF.DTX_FLOOP_STEP_SIZE_RING_1_0

// 0x001c	DTX_REG5		DTX Register 5
typedef union {
	struct {
		uint8_t DTX_FLOOP_FOFFSET_RING_10_0_b0           : 8;	/* [10:0]       r   0*/
		uint8_t DTX_FLOOP_FOFFSET_RING_10_0_b1           : 3;	/* [10:0]       r   0*/
		uint8_t DTX_FLOOP_FOFFSET_RD_REQ_RING            : 1;	/*     11     r/w   1*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t DTX_FLOOP_FOFFSET_10_0_b0                : 8;	/*[26:16]       r   0*/
		uint8_t DTX_FLOOP_FOFFSET_10_0_b1                : 3;	/*[26:16]       r   0*/
		uint8_t DTX_FLOOP_FOFFSET_RD_REQ                 : 1;	/*     27     r/w   1*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTX_REG5_t;
__xdata __at( 0xa01c ) volatile DTX_REG5_t DTX_REG5;
#define reg_DTX_FLOOP_FOFFSET_RING_10_0_b0  DTX_REG5.BF.DTX_FLOOP_FOFFSET_RING_10_0_b0
#define reg_DTX_FLOOP_FOFFSET_RING_10_0_b1  DTX_REG5.BF.DTX_FLOOP_FOFFSET_RING_10_0_b1
#define reg_DTX_FLOOP_FOFFSET_RD_REQ_RING  DTX_REG5.BF.DTX_FLOOP_FOFFSET_RD_REQ_RING
#define reg_DTX_FLOOP_FOFFSET_10_0_b0  DTX_REG5.BF.DTX_FLOOP_FOFFSET_10_0_b0
#define reg_DTX_FLOOP_FOFFSET_10_0_b1  DTX_REG5.BF.DTX_FLOOP_FOFFSET_10_0_b1
#define reg_DTX_FLOOP_FOFFSET_RD_REQ  DTX_REG5.BF.DTX_FLOOP_FOFFSET_RD_REQ

#endif
