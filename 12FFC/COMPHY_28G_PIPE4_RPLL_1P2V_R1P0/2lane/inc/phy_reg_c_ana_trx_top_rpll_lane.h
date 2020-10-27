#ifndef PHY_REG_C_ANA_TRX_TOP_RPLL_LANE_H
#define PHY_REG_C_ANA_TRX_TOP_RPLL_LANE_H



// 0x0	UPHY14_TRX_LANEPLL_ANAREG_TOP_128		Analog Register 128
typedef union {
	struct {
		uint8_t VDDVCO_VTH_12NM_SEL_LANE                 : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_FBDIV_RING_LANE_9_8                  : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t PLL_REFDIV_RING_LANE_3_0                 : 4;	/*  [6:3]     r/w 4'h1*/
		uint8_t PLL_PFD_PW_DLY_RING_LANE                 : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_128_t;
__xdata __at( 0x1000 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_128_t UPHY14_TRX_LANEPLL_ANAREG_TOP_128;
#define reg_VDDVCO_VTH_12NM_SEL_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_128.BF.VDDVCO_VTH_12NM_SEL_LANE
#define reg_PLL_FBDIV_RING_LANE_9_8  UPHY14_TRX_LANEPLL_ANAREG_TOP_128.BF.PLL_FBDIV_RING_LANE_9_8
#define reg_PLL_REFDIV_RING_LANE_3_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_128.BF.PLL_REFDIV_RING_LANE_3_0
#define reg_PLL_PFD_PW_DLY_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_128.BF.PLL_PFD_PW_DLY_RING_LANE

// 0x1	UPHY14_TRX_LANEPLL_ANAREG_TOP_129		Analog Register 129
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h28*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_129_t;
__xdata __at( 0x1004 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_129_t UPHY14_TRX_LANEPLL_ANAREG_TOP_129;
#define reg_PLL_FBDIV_RING_LANE_7_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_129.BF.PLL_FBDIV_RING_LANE_7_0

// 0x2	UPHY14_TRX_LANEPLL_ANAREG_TOP_130		Analog Register 130
typedef union {
	struct {
		uint8_t PLL_SLLP_DAC1P2X_EN_RING_LANE            : 1;	/*      0     r/w 1'h1*/
		uint8_t PLL_LPF_R1_SEL_RING_LANE_2_0             : 3;	/*  [3:1]     r/w 3'h1*/
		uint8_t ICP_RING_LANE_3_0                        : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_130_t;
__xdata __at( 0x1008 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_130_t UPHY14_TRX_LANEPLL_ANAREG_TOP_130;
#define reg_PLL_SLLP_DAC1P2X_EN_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_130.BF.PLL_SLLP_DAC1P2X_EN_RING_LANE
#define reg_PLL_LPF_R1_SEL_RING_LANE_2_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_130.BF.PLL_LPF_R1_SEL_RING_LANE_2_0
#define reg_ICP_RING_LANE_3_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_130.BF.ICP_RING_LANE_3_0

// 0x3	UPHY14_TRX_LANEPLL_ANAREG_TOP_131		Analog Register 131
typedef union {
	struct {
		uint8_t SEL_VTHVCO_RING_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t TX_INTPRESET_EXT_RING_LANE               : 1;	/*      1     r/w 1'h0*/
		uint8_t TP_LANEPLL_EN_LANE                       : 1;	/*      2     r/w   0*/
		uint8_t UNUSED1_RPLL_LANE                        : 1;	/*      3     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_LANE_1_0             : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t PLL_LPF_C1_SEL_RING_LANE_1_0             : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_131_t;
__xdata __at( 0x100c ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_131_t UPHY14_TRX_LANEPLL_ANAREG_TOP_131;
#define reg_SEL_VTHVCO_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_131.BF.SEL_VTHVCO_RING_LANE
#define reg_TX_INTPRESET_EXT_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_131.BF.TX_INTPRESET_EXT_RING_LANE
#define reg_TP_LANEPLL_EN_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_131.BF.TP_LANEPLL_EN_LANE
#define reg_UNUSED1_RPLL_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_131.BF.UNUSED1_RPLL_LANE
#define reg_PLL_LPF_C2_SEL_RING_LANE_1_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_131.BF.PLL_LPF_C2_SEL_RING_LANE_1_0
#define reg_PLL_LPF_C1_SEL_RING_LANE_1_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_131.BF.PLL_LPF_C1_SEL_RING_LANE_1_0

// 0x4	UPHY14_TRX_LANEPLL_ANAREG_TOP_132		Analog Register 132
typedef union {
	struct {
		uint8_t PLL_SLLP_DIS_RING_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_SLLP_DAC_BYPASS_EN_RING_LANE         : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_BAND_SEL_RING_LANE                   : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_SPEED_RING_LANE_4_0                  : 5;	/*  [7:3]     r/w 5'he*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_132_t;
__xdata __at( 0x1010 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_132_t UPHY14_TRX_LANEPLL_ANAREG_TOP_132;
#define reg_PLL_SLLP_DIS_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_132.BF.PLL_SLLP_DIS_RING_LANE
#define reg_PLL_SLLP_DAC_BYPASS_EN_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_132.BF.PLL_SLLP_DAC_BYPASS_EN_RING_LANE
#define reg_PLL_BAND_SEL_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_132.BF.PLL_BAND_SEL_RING_LANE
#define reg_PLL_SPEED_RING_LANE_4_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_132.BF.PLL_SPEED_RING_LANE_4_0

// 0x5	UPHY14_TRX_LANEPLL_ANAREG_TOP_133		Analog Register 133
typedef union {
	struct {
		uint8_t PLL_SLLP_DAC_COARSE_RING_LANE_3_0        : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t PLL_SLLP_DAC_RANGE_SHIFT_RING_LANE_1_0   : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t PLL_SLLP_DAC_VALID_RING_LANE             : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_PWEXP_DIS_RING_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_133_t;
__xdata __at( 0x1014 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_133_t UPHY14_TRX_LANEPLL_ANAREG_TOP_133;
#define reg_PLL_SLLP_DAC_COARSE_RING_LANE_3_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_133.BF.PLL_SLLP_DAC_COARSE_RING_LANE_3_0
#define reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_LANE_1_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_133.BF.PLL_SLLP_DAC_RANGE_SHIFT_RING_LANE_1_0
#define reg_PLL_SLLP_DAC_VALID_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_133.BF.PLL_SLLP_DAC_VALID_RING_LANE
#define reg_PLL_PWEXP_DIS_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_133.BF.PLL_PWEXP_DIS_RING_LANE

// 0x6	UPHY14_TRX_LANEPLL_ANAREG_TOP_134		Analog Register 134
typedef union {
	struct {
		uint8_t TEST_LANEPLL_LANE_4_0                    : 5;	/*  [4:0]     r/w   0*/
		uint8_t PLL_SLLP_DAC_FINE_RING_LANE_10_8         : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_134_t;
__xdata __at( 0x1018 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_134_t UPHY14_TRX_LANEPLL_ANAREG_TOP_134;
#define reg_TEST_LANEPLL_LANE_4_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_134.BF.TEST_LANEPLL_LANE_4_0
#define reg_PLL_SLLP_DAC_FINE_RING_LANE_10_8  UPHY14_TRX_LANEPLL_ANAREG_TOP_134.BF.PLL_SLLP_DAC_FINE_RING_LANE_10_8

// 0x7	UPHY14_TRX_LANEPLL_ANAREG_TOP_135		Analog Register 135
typedef union {
	struct {
		uint8_t PLL_SLLP_DAC_FINE_RING_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_135_t;
__xdata __at( 0x101c ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_135_t UPHY14_TRX_LANEPLL_ANAREG_TOP_135;
#define reg_PLL_SLLP_DAC_FINE_RING_LANE_7_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_135.BF.PLL_SLLP_DAC_FINE_RING_LANE_7_0

// 0x8	UPHY14_TRX_LANEPLL_ANAREG_TOP_136		Analog Register 136
typedef union {
	struct {
		uint8_t CLK_DET_EN_RING_LANE                     : 1;	/*      0     r/w 1'h1*/
		uint8_t SSC_CLK_EN_RING_LANE                     : 1;	/*      1     r/w 1'h1*/
		uint8_t DPHERCK_DLY_SEL_RING_LANE_1_0            : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t INTPR_RPLL_LANE_1_0                      : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t PLL_SHRTR_RING_LANE                      : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_CAL_EN_RING_LANE                     : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_136_t;
__xdata __at( 0x1020 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_136_t UPHY14_TRX_LANEPLL_ANAREG_TOP_136;
#define reg_CLK_DET_EN_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_136.BF.CLK_DET_EN_RING_LANE
#define reg_SSC_CLK_EN_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_136.BF.SSC_CLK_EN_RING_LANE
#define reg_DPHERCK_DLY_SEL_RING_LANE_1_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_136.BF.DPHERCK_DLY_SEL_RING_LANE_1_0
#define reg_INTPR_RPLL_LANE_1_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_136.BF.INTPR_RPLL_LANE_1_0
#define reg_PLL_SHRTR_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_136.BF.PLL_SHRTR_RING_LANE
#define reg_PLL_CAL_EN_RING_LANE  UPHY14_TRX_LANEPLL_ANAREG_TOP_136.BF.PLL_CAL_EN_RING_LANE

// 0x9	UPHY14_TRX_LANEPLL_ANAREG_TOP_137		Analog Register 137
typedef union {
	struct {
		uint8_t ANA_RSVDA_RPLL_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_137_t;
__xdata __at( 0x1024 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_137_t UPHY14_TRX_LANEPLL_ANAREG_TOP_137;
#define reg_ANA_RSVDA_RPLL_LANE_7_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_137.BF.ANA_RSVDA_RPLL_LANE_7_0

// 0xa	UPHY14_TRX_LANEPLL_ANAREG_TOP_138		Analog Register 138
typedef union {
	struct {
		uint8_t ANA_RSVDB_RPLL_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_138_t;
__xdata __at( 0x1028 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_138_t UPHY14_TRX_LANEPLL_ANAREG_TOP_138;
#define reg_ANA_RSVDB_RPLL_LANE_7_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_138.BF.ANA_RSVDB_RPLL_LANE_7_0

// 0xb	UPHY14_TRX_LANEPLL_ANAREG_TOP_139		Analog Register 139
typedef union {
	struct {
		uint8_t ANA_RSVDC_RPLL_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_139_t;
__xdata __at( 0x102c ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_139_t UPHY14_TRX_LANEPLL_ANAREG_TOP_139;
#define reg_ANA_RSVDC_RPLL_LANE_7_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_139.BF.ANA_RSVDC_RPLL_LANE_7_0

// 0xc	UPHY14_TRX_LANEPLL_ANAREG_TOP_140		Analog Register 140
typedef union {
	struct {
		uint8_t ANA_RSVDD_RPLL_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_140_t;
__xdata __at( 0x1030 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_140_t UPHY14_TRX_LANEPLL_ANAREG_TOP_140;
#define reg_ANA_RSVDD_RPLL_LANE_7_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_140.BF.ANA_RSVDD_RPLL_LANE_7_0

// 0xd	UPHY14_TRX_LANEPLL_ANAREG_TOP_141		Analog Register 141
typedef union {
	struct {
		uint8_t ANA_RSVDE_RPLL_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_141_t;
__xdata __at( 0x1034 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_141_t UPHY14_TRX_LANEPLL_ANAREG_TOP_141;
#define reg_ANA_RSVDE_RPLL_LANE_7_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_141.BF.ANA_RSVDE_RPLL_LANE_7_0

// 0xe	UPHY14_TRX_LANEPLL_ANAREG_TOP_142		Analog Register 142
typedef union {
	struct {
		uint8_t ANA_RSVDF_RPLL_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_142_t;
__xdata __at( 0x1038 ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_142_t UPHY14_TRX_LANEPLL_ANAREG_TOP_142;
#define reg_ANA_RSVDF_RPLL_LANE_7_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_142.BF.ANA_RSVDF_RPLL_LANE_7_0

// 0xf	UPHY14_TRX_LANEPLL_ANAREG_TOP_143		Analog Register 143
typedef union {
	struct {
		uint8_t ANA_RSVDG_RPLL_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_LANEPLL_ANAREG_TOP_143_t;
__xdata __at( 0x103c ) volatile UPHY14_TRX_LANEPLL_ANAREG_TOP_143_t UPHY14_TRX_LANEPLL_ANAREG_TOP_143;
#define reg_ANA_RSVDG_RPLL_LANE_7_0  UPHY14_TRX_LANEPLL_ANAREG_TOP_143.BF.ANA_RSVDG_RPLL_LANE_7_0

#endif
