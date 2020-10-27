#ifndef PHY_REG_C_ANA_PLL_TS_LANE_H
#define PHY_REG_C_ANA_PLL_TS_LANE_H



// 0x0	PLL_TS_UPHY14_CMN_ANAREG_TOP_000		Analog Register 000
typedef union {
	struct {
		uint8_t PLL_TS_TX_INTPR_LANE_1_0                 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PLL_TS_PLL_LPFR_LANE_2_0                 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t PLL_TS_FBDIV_LANE_9_8                    : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t PLL_TS_VIND_BAND_SEL_LANE                : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_000_t;
__xdata __at( 0x2000 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_000_t PLL_TS_UPHY14_CMN_ANAREG_TOP_000;
#define reg_PLL_TS_TX_INTPR_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BF.PLL_TS_TX_INTPR_LANE_1_0
#define reg_PLL_TS_PLL_LPFR_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BF.PLL_TS_PLL_LPFR_LANE_2_0
#define reg_PLL_TS_FBDIV_LANE_9_8  PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BF.PLL_TS_FBDIV_LANE_9_8
#define reg_PLL_TS_VIND_BAND_SEL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_000.BF.PLL_TS_VIND_BAND_SEL_LANE

// 0x1	PLL_TS_UPHY14_CMN_ANAREG_TOP_001		Analog Register 001
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t PLL_TS_VIND_BIAS_SEL_LANE_1_0            : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t PLL_TS_FORCE_NO_DLL_RST_LANE             : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_TS_PLLAMPCAL_EN_LANE                 : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_TS_PLLCAL_EN_LANE                    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_001_t;
__xdata __at( 0x2004 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_001_t PLL_TS_UPHY14_CMN_ANAREG_TOP_001;
#define reg_PLL_TS_VIND_BIAS_SEL_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_001.BF.PLL_TS_VIND_BIAS_SEL_LANE_1_0
#define reg_PLL_TS_FORCE_NO_DLL_RST_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_001.BF.PLL_TS_FORCE_NO_DLL_RST_LANE
#define reg_PLL_TS_PLLAMPCAL_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_001.BF.PLL_TS_PLLAMPCAL_EN_LANE
#define reg_PLL_TS_PLLCAL_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_001.BF.PLL_TS_PLLCAL_EN_LANE

// 0x2	PLL_TS_UPHY14_CMN_ANAREG_TOP_002		Analog Register 002
typedef union {
	struct {
		uint8_t PLL_TS_FBDIV_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h18*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_002_t;
__xdata __at( 0x2008 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_002_t PLL_TS_UPHY14_CMN_ANAREG_TOP_002;
#define reg_PLL_TS_FBDIV_LANE_7_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_002.BF.PLL_TS_FBDIV_LANE_7_0

// 0x3	PLL_TS_UPHY14_CMN_ANAREG_TOP_003		Analog Register 003
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_TS_PLL_LPFC_LANE_1_0                 : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t PLL_TS_REFDIV_LANE_4_0                   : 5;	/*  [7:3]     r/w 5'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_003_t;
__xdata __at( 0x200c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_003_t PLL_TS_UPHY14_CMN_ANAREG_TOP_003;
#define reg_PLL_TS_PLL_LPFC_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BF.PLL_TS_PLL_LPFC_LANE_1_0
#define reg_PLL_TS_REFDIV_LANE_4_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_003.BF.PLL_TS_REFDIV_LANE_4_0

// 0x4	PLL_TS_UPHY14_CMN_ANAREG_TOP_004		Analog Register 004
typedef union {
	struct {
		uint8_t PLL_TS_PLL_REG_SEL_LANE_2_0              : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t PLL_TS_ICP_LANE_4_0                      : 5;	/*  [7:3]     r/w 5'hF*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_004_t;
__xdata __at( 0x2010 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_004_t PLL_TS_UPHY14_CMN_ANAREG_TOP_004;
#define reg_PLL_TS_PLL_REG_SEL_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BF.PLL_TS_PLL_REG_SEL_LANE_2_0
#define reg_PLL_TS_ICP_LANE_4_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_004.BF.PLL_TS_ICP_LANE_4_0

// 0x5	PLL_TS_UPHY14_CMN_ANAREG_TOP_005		Analog Register 005
typedef union {
	struct {
		uint8_t PLL_TS_PWEXP_DIS_DIV1G_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_TS_PWEXP_DIS_LANE                    : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t PLL_TS_VCON_REF_SEL_LANE_3_0             : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_005_t;
__xdata __at( 0x2014 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_005_t PLL_TS_UPHY14_CMN_ANAREG_TOP_005;
#define reg_PLL_TS_PWEXP_DIS_DIV1G_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_005.BF.PLL_TS_PWEXP_DIS_DIV1G_LANE
#define reg_PLL_TS_PWEXP_DIS_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_005.BF.PLL_TS_PWEXP_DIS_LANE
#define reg_PLL_TS_VCON_REF_SEL_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_005.BF.PLL_TS_VCON_REF_SEL_LANE_3_0

// 0x6	PLL_TS_UPHY14_CMN_ANAREG_TOP_006		Analog Register 006
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_TS_LCCAP_ULSB_LANE_3_0               : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_TS_TEMPC_RSHRT_SEL_LANE              : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_TS_TEMPC_RSHRT_EN_LANE               : 1;	/*      6     r/w 1'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_006_t;
__xdata __at( 0x2018 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_006_t PLL_TS_UPHY14_CMN_ANAREG_TOP_006;
#define reg_PLL_TS_LCCAP_ULSB_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_006.BF.PLL_TS_LCCAP_ULSB_LANE_3_0
#define reg_PLL_TS_TEMPC_RSHRT_SEL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_006.BF.PLL_TS_TEMPC_RSHRT_SEL_LANE
#define reg_PLL_TS_TEMPC_RSHRT_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_006.BF.PLL_TS_TEMPC_RSHRT_EN_LANE

// 0x7	PLL_TS_UPHY14_CMN_ANAREG_TOP_007		Analog Register 007
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t PLL_TS_LCCAP_LSB_LANE_5_0                : 6;	/*  [7:2]     r/w 6'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_007_t;
__xdata __at( 0x201c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_007_t PLL_TS_UPHY14_CMN_ANAREG_TOP_007;
#define reg_PLL_TS_LCCAP_LSB_LANE_5_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_007.BF.PLL_TS_LCCAP_LSB_LANE_5_0

// 0x8	PLL_TS_UPHY14_CMN_ANAREG_TOP_008		Analog Register 008
typedef union {
	struct {
		uint8_t PLL_TS_VCOAMP_VTH_SEL_LANE_3_0           : 4;	/*  [3:0]     r/w 4'hC*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_008_t;
__xdata __at( 0x2020 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_008_t PLL_TS_UPHY14_CMN_ANAREG_TOP_008;
#define reg_PLL_TS_VCOAMP_VTH_SEL_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_008.BF.PLL_TS_VCOAMP_VTH_SEL_LANE_3_0

// 0x9	PLL_TS_UPHY14_CMN_ANAREG_TOP_009		Analog Register 009
typedef union {
	struct {
		uint8_t PLL_TS_IND_SW_DAC_SEL_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t PLL_TS_VCON_MIN_SEL_LANE_2_0             : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t PLL_TS_VCON_MAX_SEL_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_009_t;
__xdata __at( 0x2024 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_009_t PLL_TS_UPHY14_CMN_ANAREG_TOP_009;
#define reg_PLL_TS_IND_SW_DAC_SEL_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_009.BF.PLL_TS_IND_SW_DAC_SEL_LANE_1_0
#define reg_PLL_TS_VCON_MIN_SEL_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_009.BF.PLL_TS_VCON_MIN_SEL_LANE_2_0
#define reg_PLL_TS_VCON_MAX_SEL_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_009.BF.PLL_TS_VCON_MAX_SEL_LANE_2_0

// 0xa	PLL_TS_UPHY14_CMN_ANAREG_TOP_010		Analog Register 010
typedef union {
	struct {
		uint8_t PLL_TS_LCVCO_NSF_IPTAT_EN_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t PLL_TS_LCVCOCAL_BUF_EN_LANE              : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_TS_IND_GATE_MODE_LANE                : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_TS_VIND_BIAS_EN_LANE                 : 1;	/*      3     r/w 1'h1*/
		uint8_t PLL_TS_IND_SW_MODE_LANE                  : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_TS_VARAC_BIAS_SEL_LANE_2_0           : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_010_t;
__xdata __at( 0x2028 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_010_t PLL_TS_UPHY14_CMN_ANAREG_TOP_010;
#define reg_PLL_TS_LCVCO_NSF_IPTAT_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_TS_LCVCO_NSF_IPTAT_EN_LANE
#define reg_PLL_TS_LCVCOCAL_BUF_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_TS_LCVCOCAL_BUF_EN_LANE
#define reg_PLL_TS_IND_GATE_MODE_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_TS_IND_GATE_MODE_LANE
#define reg_PLL_TS_VIND_BIAS_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_TS_VIND_BIAS_EN_LANE
#define reg_PLL_TS_IND_SW_MODE_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_TS_IND_SW_MODE_LANE
#define reg_PLL_TS_VARAC_BIAS_SEL_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_TS_VARAC_BIAS_SEL_LANE_2_0

// 0xb	PLL_TS_UPHY14_CMN_ANAREG_TOP_011		Analog Register 011
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t PLL_TS_LCPLL_DCC_HG_LANE                 : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_TS_LCPLL_DCC_EN_LANE                 : 1;	/*      5     r/w 1'h1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_011_t;
__xdata __at( 0x202c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_011_t PLL_TS_UPHY14_CMN_ANAREG_TOP_011;
#define reg_PLL_TS_LCPLL_DCC_HG_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_011.BF.PLL_TS_LCPLL_DCC_HG_LANE
#define reg_PLL_TS_LCPLL_DCC_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_011.BF.PLL_TS_LCPLL_DCC_EN_LANE

// 0xc	PLL_TS_UPHY14_CMN_ANAREG_TOP_012		Analog Register 012
typedef union {
	struct {
		uint8_t PLL_TS_TXCLK_PI_ICCLOW_CTRL_LANE_3_0     : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t PLL_TS_TXCLK_PI_ICC_CTRL_LANE_3_0        : 4;	/*  [7:4]     r/w 4'hc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_012_t;
__xdata __at( 0x2030 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_012_t PLL_TS_UPHY14_CMN_ANAREG_TOP_012;
#define reg_PLL_TS_TXCLK_PI_ICCLOW_CTRL_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BF.PLL_TS_TXCLK_PI_ICCLOW_CTRL_LANE_3_0
#define reg_PLL_TS_TXCLK_PI_ICC_CTRL_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_012.BF.PLL_TS_TXCLK_PI_ICC_CTRL_LANE_3_0

// 0xd	PLL_TS_UPHY14_CMN_ANAREG_TOP_013		Analog Register 013
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_TS_VCO_SLAVE_ADJ_LANE_2_0            : 3;	/*  [3:1]     r/w 3'h3*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_013_t;
__xdata __at( 0x2034 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_013_t PLL_TS_UPHY14_CMN_ANAREG_TOP_013;
#define reg_PLL_TS_VCO_SLAVE_ADJ_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_013.BF.PLL_TS_VCO_SLAVE_ADJ_LANE_2_0

// 0xe	PLL_TS_UPHY14_CMN_ANAREG_TOP_014		Analog Register 014
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t PLL_TS_VCO_REG_MID_SEL_LANE_2_0          : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t PLL_TS_VDDR_DAC_ADJ_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_014_t;
__xdata __at( 0x2038 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_014_t PLL_TS_UPHY14_CMN_ANAREG_TOP_014;
#define reg_PLL_TS_VCO_REG_MID_SEL_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_014.BF.PLL_TS_VCO_REG_MID_SEL_LANE_2_0
#define reg_PLL_TS_VDDR_DAC_ADJ_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_014.BF.PLL_TS_VDDR_DAC_ADJ_LANE_2_0

// 0xf	PLL_TS_UPHY14_CMN_ANAREG_TOP_015		Analog Register 015
typedef union {
	struct {
		uint8_t PLL_TS_PLL_OL_EN_LANE                    : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_TS_SSC_CLK_EN_LANE                   : 1;	/*      1     r/w 1'h1*/
		uint8_t PLL_TS_CLK_DET_EN_LANE                   : 1;	/*      2     r/w 1'h1*/
		uint8_t PLL_TS_DPHERCK_DLY_SEL_LANE_1_0          : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t PLL_TS_TX_INTPRESET_EXT_LANE             : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_015_t;
__xdata __at( 0x203c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_015_t PLL_TS_UPHY14_CMN_ANAREG_TOP_015;
#define reg_PLL_TS_PLL_OL_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_TS_PLL_OL_EN_LANE
#define reg_PLL_TS_SSC_CLK_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_TS_SSC_CLK_EN_LANE
#define reg_PLL_TS_CLK_DET_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_TS_CLK_DET_EN_LANE
#define reg_PLL_TS_DPHERCK_DLY_SEL_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_TS_DPHERCK_DLY_SEL_LANE_1_0
#define reg_PLL_TS_TX_INTPRESET_EXT_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_TS_TX_INTPRESET_EXT_LANE

// 0x10	PLL_TS_UPHY14_CMN_ANAREG_TOP_016		Analog Register 016
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_TS_INTP_SHORT_NBIAS_EN_LANE          : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w 1'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_016_t;
__xdata __at( 0x2040 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_016_t PLL_TS_UPHY14_CMN_ANAREG_TOP_016;
#define reg_PLL_TS_INTP_SHORT_NBIAS_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_016.BF.PLL_TS_INTP_SHORT_NBIAS_EN_LANE

// 0x11	PLL_TS_UPHY14_CMN_ANAREG_TOP_017		Analog Register 017
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_TS_LCCAP_MSB_LANE_6_0                : 7;	/*  [7:1]     r/w 7'h7f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_017_t;
__xdata __at( 0x2044 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_017_t PLL_TS_UPHY14_CMN_ANAREG_TOP_017;
#define reg_PLL_TS_LCCAP_MSB_LANE_6_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_017.BF.PLL_TS_LCCAP_MSB_LANE_6_0

// 0x12	PLL_TS_UPHY14_CMN_ANAREG_TOP_018		Analog Register 018
typedef union {
	struct {
		uint8_t PLL_TS_LCPLL_POSTDIV_1P5OR2_EN_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_TS_LCPLL_POSTDIV_EN_LANE             : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 4;	/*  [5:2]     r/w 4'h0*/
		uint8_t PLL_TS_CK500M_DIV_LANE_1_0               : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_018_t;
__xdata __at( 0x2048 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_018_t PLL_TS_UPHY14_CMN_ANAREG_TOP_018;
#define reg_PLL_TS_LCPLL_POSTDIV_1P5OR2_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BF.PLL_TS_LCPLL_POSTDIV_1P5OR2_EN_LANE
#define reg_PLL_TS_LCPLL_POSTDIV_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BF.PLL_TS_LCPLL_POSTDIV_EN_LANE
#define reg_PLL_TS_CK500M_DIV_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_018.BF.PLL_TS_CK500M_DIV_LANE_1_0

// 0x13	PLL_TS_UPHY14_CMN_ANAREG_TOP_019		Analog Register 019
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t PLL_TS_ENLARGE_OP_GM_LANE                : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_TS_LCPLL_DEADZONE_TUNE_LANE_1_0      : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t PLL_TS_ICP_BIAS_ENLARGE_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_019_t;
__xdata __at( 0x204c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_019_t PLL_TS_UPHY14_CMN_ANAREG_TOP_019;
#define reg_PLL_TS_ENLARGE_OP_GM_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_019.BF.PLL_TS_ENLARGE_OP_GM_LANE
#define reg_PLL_TS_LCPLL_DEADZONE_TUNE_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_019.BF.PLL_TS_LCPLL_DEADZONE_TUNE_LANE_1_0
#define reg_PLL_TS_ICP_BIAS_ENLARGE_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_019.BF.PLL_TS_ICP_BIAS_ENLARGE_LANE_1_0

// 0x14	PLL_TS_UPHY14_CMN_ANAREG_TOP_020		Analog Register 020
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_TS_LOCK_RANGE_SEL_LANE_1_0           : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t PLL_TS_LCPLLREG_SEL_3P5K_TO_3K_RATIO_LANE : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_TS_VARACLV_BIAS_SEL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_020_t;
__xdata __at( 0x2050 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_020_t PLL_TS_UPHY14_CMN_ANAREG_TOP_020;
#define reg_PLL_TS_LOCK_RANGE_SEL_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_020.BF.PLL_TS_LOCK_RANGE_SEL_LANE_1_0
#define reg_PLL_TS_LCPLLREG_SEL_3P5K_TO_3K_RATIO_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_020.BF.PLL_TS_LCPLLREG_SEL_3P5K_TO_3K_RATIO_LANE
#define reg_PLL_TS_VARACLV_BIAS_SEL_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_020.BF.PLL_TS_VARACLV_BIAS_SEL_LANE_2_0

// 0x15	PLL_TS_UPHY14_CMN_ANAREG_TOP_021		Analog Register 021
typedef union {
	struct {
		uint8_t PLL_TS_LCPLL_DIV2_1P5_CLKIN_DCC_SEL_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_TS_VDDR_SEL_LANE_3_0                 : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_TS_TSEN_SEL_LANE                     : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_TS_DCCCOMP_TEST_EN_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_TS_LCDIV1P5_DCC_EN_LANE              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_021_t;
__xdata __at( 0x2054 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_021_t PLL_TS_UPHY14_CMN_ANAREG_TOP_021;
#define reg_PLL_TS_LCPLL_DIV2_1P5_CLKIN_DCC_SEL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_021.BF.PLL_TS_LCPLL_DIV2_1P5_CLKIN_DCC_SEL_LANE
#define reg_PLL_TS_VDDR_SEL_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_021.BF.PLL_TS_VDDR_SEL_LANE_3_0
#define reg_PLL_TS_TSEN_SEL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_021.BF.PLL_TS_TSEN_SEL_LANE
#define reg_PLL_TS_DCCCOMP_TEST_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_021.BF.PLL_TS_DCCCOMP_TEST_EN_LANE
#define reg_PLL_TS_LCDIV1P5_DCC_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_021.BF.PLL_TS_LCDIV1P5_DCC_EN_LANE

// 0x16	PLL_TS_UPHY14_CMN_ANAREG_TOP_022		Analog Register 022
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t PLL_TS_REG0P9_SPEED_TRACK_CLK_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_022_t;
__xdata __at( 0x2058 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_022_t PLL_TS_UPHY14_CMN_ANAREG_TOP_022;
#define reg_PLL_TS_REG0P9_SPEED_TRACK_CLK_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_022.BF.PLL_TS_REG0P9_SPEED_TRACK_CLK_LANE_2_0

// 0x17	PLL_TS_UPHY14_CMN_ANAREG_TOP_023		Analog Register 023
typedef union {
	struct {
		uint8_t PLL_TS_TXVCO_SF_ICPTAT_SEL_LANE_2_0      : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t PLL_TS_DTXCLK_DIV_EN_LANE                : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_TS_SELHV_LCPLL_CP_LANE_3_0           : 4;	/*  [7:4]     r/w 4'hb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_023_t;
__xdata __at( 0x205c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_023_t PLL_TS_UPHY14_CMN_ANAREG_TOP_023;
#define reg_PLL_TS_TXVCO_SF_ICPTAT_SEL_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_023.BF.PLL_TS_TXVCO_SF_ICPTAT_SEL_LANE_2_0
#define reg_PLL_TS_DTXCLK_DIV_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_023.BF.PLL_TS_DTXCLK_DIV_EN_LANE
#define reg_PLL_TS_SELHV_LCPLL_CP_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_023.BF.PLL_TS_SELHV_LCPLL_CP_LANE_3_0

// 0x18	PLL_TS_UPHY14_CMN_ANAREG_TOP_024		Analog Register 024
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t PLL_TS_PCIE_HIGHK_EN_LANE_3_0            : 4;	/*  [5:2]     r/w 4'h0*/
		uint8_t PLL_TS_SHRTR_PLL_LANE                    : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_TS_VDDA_CAL_EN_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_024_t;
__xdata __at( 0x2060 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_024_t PLL_TS_UPHY14_CMN_ANAREG_TOP_024;
#define reg_PLL_TS_PCIE_HIGHK_EN_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_024.BF.PLL_TS_PCIE_HIGHK_EN_LANE_3_0
#define reg_PLL_TS_SHRTR_PLL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_024.BF.PLL_TS_SHRTR_PLL_LANE
#define reg_PLL_TS_VDDA_CAL_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_024.BF.PLL_TS_VDDA_CAL_EN_LANE

// 0x19	PLL_TS_UPHY14_CMN_ANAREG_TOP_025		Analog Register 025
typedef union {
	struct {
		uint8_t PLL_TS_LCPLL_POSTDIV_DCC_E2C_HG_LANE     : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_TS_LCPLL_POSTDIV_E2C_DCC_DAC_EN_LANE : 1;	/*      1     r/w 1'h1*/
		uint8_t PLL_TS_LCPLL_POSTDIV_DCC_SW_EN_LANE_4_0  : 5;	/*  [6:2]     r/w 5'h10*/
		uint8_t PLL_TS_TX_SYNC_BYPASS_LANE               : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_025_t;
__xdata __at( 0x2064 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_025_t PLL_TS_UPHY14_CMN_ANAREG_TOP_025;
#define reg_PLL_TS_LCPLL_POSTDIV_DCC_E2C_HG_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_025.BF.PLL_TS_LCPLL_POSTDIV_DCC_E2C_HG_LANE
#define reg_PLL_TS_LCPLL_POSTDIV_E2C_DCC_DAC_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_025.BF.PLL_TS_LCPLL_POSTDIV_E2C_DCC_DAC_EN_LANE
#define reg_PLL_TS_LCPLL_POSTDIV_DCC_SW_EN_LANE_4_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_025.BF.PLL_TS_LCPLL_POSTDIV_DCC_SW_EN_LANE_4_0
#define reg_PLL_TS_TX_SYNC_BYPASS_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_025.BF.PLL_TS_TX_SYNC_BYPASS_LANE

// 0x1a	PLL_TS_UPHY14_CMN_ANAREG_TOP_026		Analog Register 026
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_TS_LCPLL_DCC_SEN_POINT_SEL_LANE      : 1;	/*      1     r/w 1'h1*/
		uint8_t PLL_TS_TXCLK_SYNC_BUF_DN_EN_LANE         : 1;	/*      2     r/w 1'h1*/
		uint8_t PLL_TS_TXCLK_SYNC_BUF_UP_EN_LANE         : 1;	/*      3     r/w 1'h1*/
		uint8_t PLL_TS_LCCAP_USB_LANE                    : 1;	/*      4     r/w 1'h1*/
		uint8_t PLL_TS_LCVCO_DAC_RSHRT_EN_LANE           : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_TS_LCVCO_DAC_RSHRT_SEL_LANE          : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_TS_LCPLL_MASTREG_RC_PARTIAL_SHORT_LANE : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_026_t;
__xdata __at( 0x2068 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_026_t PLL_TS_UPHY14_CMN_ANAREG_TOP_026;
#define reg_PLL_TS_LCPLL_DCC_SEN_POINT_SEL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BF.PLL_TS_LCPLL_DCC_SEN_POINT_SEL_LANE
#define reg_PLL_TS_TXCLK_SYNC_BUF_DN_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BF.PLL_TS_TXCLK_SYNC_BUF_DN_EN_LANE
#define reg_PLL_TS_TXCLK_SYNC_BUF_UP_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BF.PLL_TS_TXCLK_SYNC_BUF_UP_EN_LANE
#define reg_PLL_TS_LCCAP_USB_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BF.PLL_TS_LCCAP_USB_LANE
#define reg_PLL_TS_LCVCO_DAC_RSHRT_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BF.PLL_TS_LCVCO_DAC_RSHRT_EN_LANE
#define reg_PLL_TS_LCVCO_DAC_RSHRT_SEL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BF.PLL_TS_LCVCO_DAC_RSHRT_SEL_LANE
#define reg_PLL_TS_LCPLL_MASTREG_RC_PARTIAL_SHORT_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_026.BF.PLL_TS_LCPLL_MASTREG_RC_PARTIAL_SHORT_LANE

// 0x1b	PLL_TS_UPHY14_CMN_ANAREG_TOP_027		Analog Register 027
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t PLL_TS_LCPLL_POSTDIV_DCC_CAP_EN_LANE_4_0 : 5;	/*  [7:3]     r/w 5'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_027_t;
__xdata __at( 0x206c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_027_t PLL_TS_UPHY14_CMN_ANAREG_TOP_027;
#define reg_PLL_TS_LCPLL_POSTDIV_DCC_CAP_EN_LANE_4_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_027.BF.PLL_TS_LCPLL_POSTDIV_DCC_CAP_EN_LANE_4_0

// 0x1c	PLL_TS_UPHY14_CMN_ANAREG_TOP_028		Analog Register 028
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t PLL_TS_LCPLLREG_IVREF_EN_LANE_3_0        : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_028_t;
__xdata __at( 0x2070 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_028_t PLL_TS_UPHY14_CMN_ANAREG_TOP_028;
#define reg_PLL_TS_LCPLLREG_IVREF_EN_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_028.BF.PLL_TS_LCPLLREG_IVREF_EN_LANE_3_0

// 0x1d	PLL_TS_UPHY14_CMN_ANAREG_TOP_029		Analog Register 029
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t PLL_TS_DPLL_DCO_CAL_EN_LANE              : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_TS_DPLL_DCO_DLF_FREEZE_LANE          : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_TS_DPLL_DIGITAL_MODE_LANE            : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_029_t;
__xdata __at( 0x2074 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_029_t PLL_TS_UPHY14_CMN_ANAREG_TOP_029;
#define reg_PLL_TS_DPLL_DCO_CAL_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_029.BF.PLL_TS_DPLL_DCO_CAL_EN_LANE
#define reg_PLL_TS_DPLL_DCO_DLF_FREEZE_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_029.BF.PLL_TS_DPLL_DCO_DLF_FREEZE_LANE
#define reg_PLL_TS_DPLL_DIGITAL_MODE_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_029.BF.PLL_TS_DPLL_DIGITAL_MODE_LANE

// 0x1e	PLL_TS_UPHY14_CMN_ANAREG_TOP_030		Analog Register 030
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_TS_DPLL_DCO_KICTRL_LANE_8            : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_TS_DPLL_DCO_DAC_PU_LANE              : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_TS_DPLL_DCO_PDSIGNPFD_LANE           : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_TS_DPLL_DACMODE_LANE_1_0             : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t PLL_TS_DPLL_DCO_KPMODE_LANE_1_0          : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_030_t;
__xdata __at( 0x2078 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_030_t PLL_TS_UPHY14_CMN_ANAREG_TOP_030;
#define reg_PLL_TS_DPLL_DCO_KICTRL_LANE_8  PLL_TS_UPHY14_CMN_ANAREG_TOP_030.BF.PLL_TS_DPLL_DCO_KICTRL_LANE_8
#define reg_PLL_TS_DPLL_DCO_DAC_PU_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_030.BF.PLL_TS_DPLL_DCO_DAC_PU_LANE
#define reg_PLL_TS_DPLL_DCO_PDSIGNPFD_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_030.BF.PLL_TS_DPLL_DCO_PDSIGNPFD_LANE
#define reg_PLL_TS_DPLL_DACMODE_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_030.BF.PLL_TS_DPLL_DACMODE_LANE_1_0
#define reg_PLL_TS_DPLL_DCO_KPMODE_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_030.BF.PLL_TS_DPLL_DCO_KPMODE_LANE_1_0

// 0x1f	PLL_TS_UPHY14_CMN_ANAREG_TOP_031		Analog Register 031
typedef union {
	struct {
		uint8_t PLL_TS_DPLL_DCO_KICTRL_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_031_t;
__xdata __at( 0x207c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_031_t PLL_TS_UPHY14_CMN_ANAREG_TOP_031;
#define reg_PLL_TS_DPLL_DCO_KICTRL_LANE_7_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_031.BF.PLL_TS_DPLL_DCO_KICTRL_LANE_7_0

// 0x20	PLL_TS_UPHY14_CMN_ANAREG_TOP_032		Analog Register 032
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t PLL_TS_DPLL_DCO_KPCTRL_LANE_8            : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_032_t;
__xdata __at( 0x2080 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_032_t PLL_TS_UPHY14_CMN_ANAREG_TOP_032;
#define reg_PLL_TS_DPLL_DCO_KPCTRL_LANE_8  PLL_TS_UPHY14_CMN_ANAREG_TOP_032.BF.PLL_TS_DPLL_DCO_KPCTRL_LANE_8

// 0x21	PLL_TS_UPHY14_CMN_ANAREG_TOP_033		Analog Register 033
typedef union {
	struct {
		uint8_t PLL_TS_DPLL_DCO_KPCTRL_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_033_t;
__xdata __at( 0x2084 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_033_t PLL_TS_UPHY14_CMN_ANAREG_TOP_033;
#define reg_PLL_TS_DPLL_DCO_KPCTRL_LANE_7_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_033.BF.PLL_TS_DPLL_DCO_KPCTRL_LANE_7_0

// 0x22	PLL_TS_UPHY14_CMN_ANAREG_TOP_034		Analog Register 034
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t PLL_TS_DPLL_DCO_DACDRANGE_LANE_3_0       : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_034_t;
__xdata __at( 0x2088 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_034_t PLL_TS_UPHY14_CMN_ANAREG_TOP_034;
#define reg_PLL_TS_DPLL_DCO_DACDRANGE_LANE_3_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_034.BF.PLL_TS_DPLL_DCO_DACDRANGE_LANE_3_0

// 0x23	PLL_TS_UPHY14_CMN_ANAREG_TOP_035		Analog Register 035
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t PLL_TS_DPLL_DCO_RSV_LANE_4_0             : 5;	/*  [7:3]     r/w 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_035_t;
__xdata __at( 0x208c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_035_t PLL_TS_UPHY14_CMN_ANAREG_TOP_035;
#define reg_PLL_TS_DPLL_DCO_RSV_LANE_4_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_035.BF.PLL_TS_DPLL_DCO_RSV_LANE_4_0

// 0x24	PLL_TS_UPHY14_CMN_ANAREG_TOP_036		Analog Register 036
typedef union {
	struct {
		uint8_t PLL_TS_DPLL_FDETECT_REG_LANE             : 1;	/*      0       r   0*/
		uint8_t PLL_TS_DPLL_DCO_DAC_REG_LANE_6_0         : 7;	/*  [7:1]       r 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_036_t;
__xdata __at( 0x2090 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_036_t PLL_TS_UPHY14_CMN_ANAREG_TOP_036;
#define reg_PLL_TS_DPLL_FDETECT_REG_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_036.BF.PLL_TS_DPLL_FDETECT_REG_LANE
#define reg_PLL_TS_DPLL_DCO_DAC_REG_LANE_6_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_036.BF.PLL_TS_DPLL_DCO_DAC_REG_LANE_6_0

// 0x25	PLL_TS_UPHY14_CMN_ANAREG_TOP_037		Analog Register 037
typedef union {
	struct {
		uint8_t PLL_TS_PU_TEMPC_REG_LANE                 : 1;	/*      0     r/w 1'h1*/
		uint8_t PLL_TS_TEMPC_SYNC_CLK_DISABLE_LANE       : 1;	/*      1     r/w 1'h1*/
		uint8_t PLL_TS_TEMPC_SYNC_CLK_EDGE_SEL_LANE      : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_TS_TEMPC_SYNC_CLK_SEL_LANE           : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_TS_TEMPC_SYNC_RESET_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_TS_VCO_TEMPC_ADJ_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_037_t;
__xdata __at( 0x2094 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_037_t PLL_TS_UPHY14_CMN_ANAREG_TOP_037;
#define reg_PLL_TS_PU_TEMPC_REG_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_037.BF.PLL_TS_PU_TEMPC_REG_LANE
#define reg_PLL_TS_TEMPC_SYNC_CLK_DISABLE_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_037.BF.PLL_TS_TEMPC_SYNC_CLK_DISABLE_LANE
#define reg_PLL_TS_TEMPC_SYNC_CLK_EDGE_SEL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_037.BF.PLL_TS_TEMPC_SYNC_CLK_EDGE_SEL_LANE
#define reg_PLL_TS_TEMPC_SYNC_CLK_SEL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_037.BF.PLL_TS_TEMPC_SYNC_CLK_SEL_LANE
#define reg_PLL_TS_TEMPC_SYNC_RESET_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_037.BF.PLL_TS_TEMPC_SYNC_RESET_LANE
#define reg_PLL_TS_VCO_TEMPC_ADJ_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_037.BF.PLL_TS_VCO_TEMPC_ADJ_LANE_2_0

// 0x26	PLL_TS_UPHY14_CMN_ANAREG_TOP_038		Analog Register 038
typedef union {
	struct {
		uint8_t PLL_TS_TEMPC_SYNC_BYPASS_LANE            : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_TS_TEMPC_REG_REF_CODE_LANE_2_0       : 3;	/*  [3:1]     r/w 3'h7*/
		uint8_t PLL_TS_TEMPC_REG_FB_CODE_LANE_1_0        : 2;	/*  [5:4]     r/w 2'h3*/
		uint8_t PLL_TS_TEMPC_BLEEDCURRENT_CODE_LANE_1_0  : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_038_t;
__xdata __at( 0x2098 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_038_t PLL_TS_UPHY14_CMN_ANAREG_TOP_038;
#define reg_PLL_TS_TEMPC_SYNC_BYPASS_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_038.BF.PLL_TS_TEMPC_SYNC_BYPASS_LANE
#define reg_PLL_TS_TEMPC_REG_REF_CODE_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_038.BF.PLL_TS_TEMPC_REG_REF_CODE_LANE_2_0
#define reg_PLL_TS_TEMPC_REG_FB_CODE_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_038.BF.PLL_TS_TEMPC_REG_FB_CODE_LANE_1_0
#define reg_PLL_TS_TEMPC_BLEEDCURRENT_CODE_LANE_1_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_038.BF.PLL_TS_TEMPC_BLEEDCURRENT_CODE_LANE_1_0

// 0x27	PLL_TS_UPHY14_CMN_ANAREG_TOP_039		Analog Register 039
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_TS_TEMPC_SLAVE_GATE_SEL_LANE         : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_TS_TEMPC_SYNC_CLK_REG_LANE           : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_TS_GMBIAS_EN_LANE_2_0                : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t PLL_TS_RSHRT2_EN_LANE                    : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_TS_RSHRT1_EN_LANE                    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_039_t;
__xdata __at( 0x209c ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_039_t PLL_TS_UPHY14_CMN_ANAREG_TOP_039;
#define reg_PLL_TS_TEMPC_SLAVE_GATE_SEL_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_039.BF.PLL_TS_TEMPC_SLAVE_GATE_SEL_LANE
#define reg_PLL_TS_TEMPC_SYNC_CLK_REG_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_039.BF.PLL_TS_TEMPC_SYNC_CLK_REG_LANE
#define reg_PLL_TS_GMBIAS_EN_LANE_2_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_039.BF.PLL_TS_GMBIAS_EN_LANE_2_0
#define reg_PLL_TS_RSHRT2_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_039.BF.PLL_TS_RSHRT2_EN_LANE
#define reg_PLL_TS_RSHRT1_EN_LANE  PLL_TS_UPHY14_CMN_ANAREG_TOP_039.BF.PLL_TS_RSHRT1_EN_LANE

// 0x28	PLL_TS_UPHY14_CMN_ANAREG_TOP_040		Analog Register 040
typedef union {
	struct {
		uint8_t PLL_TS_ANA_RSVDA_LANE_7_0                : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_040_t;
__xdata __at( 0x20a0 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_040_t PLL_TS_UPHY14_CMN_ANAREG_TOP_040;
#define reg_PLL_TS_ANA_RSVDA_LANE_7_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_040.BF.PLL_TS_ANA_RSVDA_LANE_7_0

// 0x29	PLL_TS_UPHY14_CMN_ANAREG_TOP_041		Analog Register 041
typedef union {
	struct {
		uint8_t PLL_TS_ANA_RSVDB_LANE_7_0                : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_041_t;
__xdata __at( 0x20a4 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_041_t PLL_TS_UPHY14_CMN_ANAREG_TOP_041;
#define reg_PLL_TS_ANA_RSVDB_LANE_7_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_041.BF.PLL_TS_ANA_RSVDB_LANE_7_0

// 0x2a	PLL_TS_UPHY14_CMN_ANAREG_TOP_042		Analog Register 042
typedef union {
	struct {
		uint8_t PLL_TS_ANA_RSVDC_LANE_7_0                : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_042_t;
__xdata __at( 0x20a8 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_042_t PLL_TS_UPHY14_CMN_ANAREG_TOP_042;
#define reg_PLL_TS_ANA_RSVDC_LANE_7_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_042.BF.PLL_TS_ANA_RSVDC_LANE_7_0

// 0x2b	PLL_TS_UPHY14_CMN_ANAREG_TOP_043		Analog Register 043
typedef union {
	struct {
		uint8_t PLL_TS_ANA_RSVDD_LANE_7_0                : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_043_t;
__xdata __at( 0x20ac ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_043_t PLL_TS_UPHY14_CMN_ANAREG_TOP_043;
#define reg_PLL_TS_ANA_RSVDD_LANE_7_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_043.BF.PLL_TS_ANA_RSVDD_LANE_7_0

// 0x2c	PLL_TS_PLL_CAL_REG0		Digital PLL Calibration Register 0
typedef union {
	struct {
		uint8_t PLL_TS_DIG_TESTBUS_SEL_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_TS_DIG_CAL_CLK_RST_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_TS_DIG_CAL_CLK_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_PLL_CAL_REG0_t;
__xdata __at( 0x20b0 ) volatile PLL_TS_PLL_CAL_REG0_t PLL_TS_PLL_CAL_REG0;
#define reg_PLL_TS_DIG_TESTBUS_SEL_LANE_3_0  PLL_TS_PLL_CAL_REG0.BF.PLL_TS_DIG_TESTBUS_SEL_LANE_3_0
#define reg_PLL_TS_DIG_CAL_CLK_RST_LANE  PLL_TS_PLL_CAL_REG0.BF.PLL_TS_DIG_CAL_CLK_RST_LANE
#define reg_PLL_TS_DIG_CAL_CLK_EN_LANE  PLL_TS_PLL_CAL_REG0.BF.PLL_TS_DIG_CAL_CLK_EN_LANE

// 0x2d	PLL_TS_PLL_CAL_REG1		Digital PLL Calibration Register1
typedef union {
	struct {
		uint8_t PLL_TS_DIG_CAL2M_DIV_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_PLL_CAL_REG1_t;
__xdata __at( 0x20b4 ) volatile PLL_TS_PLL_CAL_REG1_t PLL_TS_PLL_CAL_REG1;
#define reg_PLL_TS_DIG_CAL2M_DIV_LANE_7_0  PLL_TS_PLL_CAL_REG1.BF.PLL_TS_DIG_CAL2M_DIV_LANE_7_0

// 0x2e	PLL_TS_UPHY14_CMN_ANAREG_TOP_044		Digital PLL Calibration Register2
typedef union {
	struct {
		uint8_t PLL_TS_ANA_TEST_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_TS_UPHY14_CMN_ANAREG_TOP_044_t;
__xdata __at( 0x20b8 ) volatile PLL_TS_UPHY14_CMN_ANAREG_TOP_044_t PLL_TS_UPHY14_CMN_ANAREG_TOP_044;
#define reg_PLL_TS_ANA_TEST_LANE_7_0  PLL_TS_UPHY14_CMN_ANAREG_TOP_044.BF.PLL_TS_ANA_TEST_LANE_7_0

// 0x2f	PLL_DIG_SCN_REG		Digital PLL Calibration Register 3
typedef union {
	struct {
		uint8_t PLL_DIG_SCAN_FF_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_DIG_SCN_REG_t;
__xdata __at( 0x20bc ) volatile PLL_DIG_SCN_REG_t PLL_DIG_SCN_REG;
#define reg_PLL_DIG_SCAN_FF_LANE_7_0  PLL_DIG_SCN_REG.BF.PLL_DIG_SCAN_FF_LANE_7_0

#endif
