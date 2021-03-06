#ifndef PHY_REG_C_ANA_PLL_RS_LANE_H
#define PHY_REG_C_ANA_PLL_RS_LANE_H



// 0x0	PLL_RS_UPHY14_CMN_ANAREG_TOP_000		Analog Register 000
typedef union {
	struct {
		uint8_t PLL_RS_TX_INTPR_LANE_1_0                 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PLL_RS_PLL_LPFR_LANE_2_0                 : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t PLL_RS_FBDIV_LANE_9_8                    : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t PLL_RS_VIND_BAND_SEL_LANE                : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_000_t;
__xdata __at( 0x2800 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_000_t PLL_RS_UPHY14_CMN_ANAREG_TOP_000;
#define reg_PLL_RS_TX_INTPR_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_000.BF.PLL_RS_TX_INTPR_LANE_1_0
#define reg_PLL_RS_PLL_LPFR_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_000.BF.PLL_RS_PLL_LPFR_LANE_2_0
#define reg_PLL_RS_FBDIV_LANE_9_8  PLL_RS_UPHY14_CMN_ANAREG_TOP_000.BF.PLL_RS_FBDIV_LANE_9_8
#define reg_PLL_RS_VIND_BAND_SEL_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_000.BF.PLL_RS_VIND_BAND_SEL_LANE

// 0x1	PLL_RS_UPHY14_CMN_ANAREG_TOP_001		Analog Register 001
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t PLL_RS_VIND_BIAS_SEL_LANE_1_0            : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t PLL_RS_FORCE_NO_DLL_RST_LANE             : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_PLLAMPCAL_EN_LANE                 : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_RS_PLLCAL_EN_LANE                    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_001_t;
__xdata __at( 0x2804 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_001_t PLL_RS_UPHY14_CMN_ANAREG_TOP_001;
#define reg_PLL_RS_VIND_BIAS_SEL_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_001.BF.PLL_RS_VIND_BIAS_SEL_LANE_1_0
#define reg_PLL_RS_FORCE_NO_DLL_RST_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_001.BF.PLL_RS_FORCE_NO_DLL_RST_LANE
#define reg_PLL_RS_PLLAMPCAL_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_001.BF.PLL_RS_PLLAMPCAL_EN_LANE
#define reg_PLL_RS_PLLCAL_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_001.BF.PLL_RS_PLLCAL_EN_LANE

// 0x2	PLL_RS_UPHY14_CMN_ANAREG_TOP_002		Analog Register 002
typedef union {
	struct {
		uint8_t PLL_RS_FBDIV_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h18*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_002_t;
__xdata __at( 0x2808 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_002_t PLL_RS_UPHY14_CMN_ANAREG_TOP_002;
#define reg_PLL_RS_FBDIV_LANE_7_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_002.BF.PLL_RS_FBDIV_LANE_7_0

// 0x3	PLL_RS_UPHY14_CMN_ANAREG_TOP_003		Analog Register 003
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t PLL_RS_PLL_LPFC_LANE_1_0                 : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t PLL_RS_REFDIV_LANE_3_0                   : 4;	/*  [7:4]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_003_t;
__xdata __at( 0x280c ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_003_t PLL_RS_UPHY14_CMN_ANAREG_TOP_003;
#define reg_PLL_RS_PLL_LPFC_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_003.BF.PLL_RS_PLL_LPFC_LANE_1_0
#define reg_PLL_RS_REFDIV_LANE_3_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_003.BF.PLL_RS_REFDIV_LANE_3_0

// 0x4	PLL_RS_UPHY14_CMN_ANAREG_TOP_004		Analog Register 004
typedef union {
	struct {
		uint8_t PLL_RS_PLL_REG_SEL_LANE_2_0              : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t PLL_RS_ICP_LANE_4_0                      : 5;	/*  [7:3]     r/w 5'hF*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_004_t;
__xdata __at( 0x2810 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_004_t PLL_RS_UPHY14_CMN_ANAREG_TOP_004;
#define reg_PLL_RS_PLL_REG_SEL_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_004.BF.PLL_RS_PLL_REG_SEL_LANE_2_0
#define reg_PLL_RS_ICP_LANE_4_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_004.BF.PLL_RS_ICP_LANE_4_0

// 0x5	PLL_RS_UPHY14_CMN_ANAREG_TOP_005		Analog Register 005
typedef union {
	struct {
		uint8_t PLL_RS_PWEXP_DIS_DIV1G_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_PWEXP_DIS_LANE                    : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_RS_VCAP_OFF_SEL_LANE_1_0             : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t PLL_RS_VCON_REF_SEL_LANE_3_0             : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_005_t;
__xdata __at( 0x2814 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_005_t PLL_RS_UPHY14_CMN_ANAREG_TOP_005;
#define reg_PLL_RS_PWEXP_DIS_DIV1G_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_005.BF.PLL_RS_PWEXP_DIS_DIV1G_LANE
#define reg_PLL_RS_PWEXP_DIS_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_005.BF.PLL_RS_PWEXP_DIS_LANE
#define reg_PLL_RS_VCAP_OFF_SEL_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_005.BF.PLL_RS_VCAP_OFF_SEL_LANE_1_0
#define reg_PLL_RS_VCON_REF_SEL_LANE_3_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_005.BF.PLL_RS_VCON_REF_SEL_LANE_3_0

// 0x6	PLL_RS_UPHY14_CMN_ANAREG_TOP_006		Analog Register 006
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_RS_LCCAP_ULSB_LANE_3_0               : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_RS_TEMPC_RSHRT_SEL_LANE              : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_TEMPC_RSHRT_EN_LANE               : 1;	/*      6     r/w 1'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_006_t;
__xdata __at( 0x2818 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_006_t PLL_RS_UPHY14_CMN_ANAREG_TOP_006;
#define reg_PLL_RS_LCCAP_ULSB_LANE_3_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_006.BF.PLL_RS_LCCAP_ULSB_LANE_3_0
#define reg_PLL_RS_TEMPC_RSHRT_SEL_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_006.BF.PLL_RS_TEMPC_RSHRT_SEL_LANE
#define reg_PLL_RS_TEMPC_RSHRT_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_006.BF.PLL_RS_TEMPC_RSHRT_EN_LANE

// 0x7	PLL_RS_UPHY14_CMN_ANAREG_TOP_007		Analog Register 007
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t PLL_RS_LCCAP_LSB_LANE_5_0                : 6;	/*  [7:2]     r/w 6'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_007_t;
__xdata __at( 0x281c ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_007_t PLL_RS_UPHY14_CMN_ANAREG_TOP_007;
#define reg_PLL_RS_LCCAP_LSB_LANE_5_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_007.BF.PLL_RS_LCCAP_LSB_LANE_5_0

// 0x8	PLL_RS_UPHY14_CMN_ANAREG_TOP_008		Analog Register 008
typedef union {
	struct {
		uint8_t PLL_RS_VCOAMP_VTH_SEL_LANE_3_0           : 4;	/*  [3:0]     r/w 4'hC*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_008_t;
__xdata __at( 0x2820 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_008_t PLL_RS_UPHY14_CMN_ANAREG_TOP_008;
#define reg_PLL_RS_VCOAMP_VTH_SEL_LANE_3_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_008.BF.PLL_RS_VCOAMP_VTH_SEL_LANE_3_0

// 0x9	PLL_RS_UPHY14_CMN_ANAREG_TOP_009		Analog Register 009
typedef union {
	struct {
		uint8_t PLL_RS_IND_SW_DAC_SEL_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t PLL_RS_VCON_MIN_SEL_LANE_2_0             : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t PLL_RS_VCON_MAX_SEL_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_009_t;
__xdata __at( 0x2824 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_009_t PLL_RS_UPHY14_CMN_ANAREG_TOP_009;
#define reg_PLL_RS_IND_SW_DAC_SEL_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_009.BF.PLL_RS_IND_SW_DAC_SEL_LANE_1_0
#define reg_PLL_RS_VCON_MIN_SEL_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_009.BF.PLL_RS_VCON_MIN_SEL_LANE_2_0
#define reg_PLL_RS_VCON_MAX_SEL_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_009.BF.PLL_RS_VCON_MAX_SEL_LANE_2_0

// 0xa	PLL_RS_UPHY14_CMN_ANAREG_TOP_010		Analog Register 010
typedef union {
	struct {
		uint8_t PLL_RS_LCVCO_NSF_IPTAT_EN_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t PLL_RS_LCVCOCAL_BUF_EN_LANE              : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_RS_IND_GATE_MODE_LANE                : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_RS_VIND_BIAS_EN_LANE                 : 1;	/*      3     r/w 1'h1*/
		uint8_t PLL_RS_IND_SW_MODE_LANE                  : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_RS_VARAC_BIAS_SEL_LANE_2_0           : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_010_t;
__xdata __at( 0x2828 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_010_t PLL_RS_UPHY14_CMN_ANAREG_TOP_010;
#define reg_PLL_RS_LCVCO_NSF_IPTAT_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_RS_LCVCO_NSF_IPTAT_EN_LANE
#define reg_PLL_RS_LCVCOCAL_BUF_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_RS_LCVCOCAL_BUF_EN_LANE
#define reg_PLL_RS_IND_GATE_MODE_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_RS_IND_GATE_MODE_LANE
#define reg_PLL_RS_VIND_BIAS_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_RS_VIND_BIAS_EN_LANE
#define reg_PLL_RS_IND_SW_MODE_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_RS_IND_SW_MODE_LANE
#define reg_PLL_RS_VARAC_BIAS_SEL_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_010.BF.PLL_RS_VARAC_BIAS_SEL_LANE_2_0

// 0xb	PLL_RS_UPHY14_CMN_ANAREG_TOP_011		Analog Register 011
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t PLL_RS_LCPLL_DCC_HG_LANE                 : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_RS_LCPLL_DCC_EN_LANE                 : 1;	/*      5     r/w 1'h1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_011_t;
__xdata __at( 0x282c ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_011_t PLL_RS_UPHY14_CMN_ANAREG_TOP_011;
#define reg_PLL_RS_LCPLL_DCC_HG_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_011.BF.PLL_RS_LCPLL_DCC_HG_LANE
#define reg_PLL_RS_LCPLL_DCC_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_011.BF.PLL_RS_LCPLL_DCC_EN_LANE

// 0xc	PLL_RS_UPHY14_CMN_ANAREG_TOP_012		Analog Register 012
typedef union {
	struct {
		uint8_t PLL_RS_TXCLK_PI_ICCLOW_CTRL_LANE_3_0     : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t PLL_RS_TXCLK_PI_ICC_CTRL_LANE_3_0        : 4;	/*  [7:4]     r/w 4'hc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_012_t;
__xdata __at( 0x2830 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_012_t PLL_RS_UPHY14_CMN_ANAREG_TOP_012;
#define reg_PLL_RS_TXCLK_PI_ICCLOW_CTRL_LANE_3_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_012.BF.PLL_RS_TXCLK_PI_ICCLOW_CTRL_LANE_3_0
#define reg_PLL_RS_TXCLK_PI_ICC_CTRL_LANE_3_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_012.BF.PLL_RS_TXCLK_PI_ICC_CTRL_LANE_3_0

// 0xd	PLL_RS_UPHY14_CMN_ANAREG_TOP_013		Analog Register 013
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_RS_VCO_SLAVE_ADJ_LANE_2_0            : 3;	/*  [3:1]     r/w 3'h3*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_013_t;
__xdata __at( 0x2834 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_013_t PLL_RS_UPHY14_CMN_ANAREG_TOP_013;
#define reg_PLL_RS_VCO_SLAVE_ADJ_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_013.BF.PLL_RS_VCO_SLAVE_ADJ_LANE_2_0

// 0xe	PLL_RS_UPHY14_CMN_ANAREG_TOP_014		Analog Register 014
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t PLL_RS_VCO_REG_MID_SEL_LANE_2_0          : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t PLL_RS_VDDR_DAC_ADJ_LANE_2_0             : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_014_t;
__xdata __at( 0x2838 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_014_t PLL_RS_UPHY14_CMN_ANAREG_TOP_014;
#define reg_PLL_RS_VCO_REG_MID_SEL_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_014.BF.PLL_RS_VCO_REG_MID_SEL_LANE_2_0
#define reg_PLL_RS_VDDR_DAC_ADJ_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_014.BF.PLL_RS_VDDR_DAC_ADJ_LANE_2_0

// 0xf	PLL_RS_UPHY14_CMN_ANAREG_TOP_015		Analog Register 015
typedef union {
	struct {
		uint8_t PLL_RS_PLL_OL_EN_LANE                    : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_SSC_CLK_EN_LANE                   : 1;	/*      1     r/w 1'h1*/
		uint8_t PLL_RS_CLK_DET_EN_LANE                   : 1;	/*      2     r/w 1'h1*/
		uint8_t PLL_RS_DPHERCK_DLY_SEL_LANE_1_0          : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t PLL_RS_TX_INTPRESET_EXT_LANE             : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_015_t;
__xdata __at( 0x283c ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_015_t PLL_RS_UPHY14_CMN_ANAREG_TOP_015;
#define reg_PLL_RS_PLL_OL_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_RS_PLL_OL_EN_LANE
#define reg_PLL_RS_SSC_CLK_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_RS_SSC_CLK_EN_LANE
#define reg_PLL_RS_CLK_DET_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_RS_CLK_DET_EN_LANE
#define reg_PLL_RS_DPHERCK_DLY_SEL_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_RS_DPHERCK_DLY_SEL_LANE_1_0
#define reg_PLL_RS_TX_INTPRESET_EXT_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_015.BF.PLL_RS_TX_INTPRESET_EXT_LANE

// 0x10	PLL_RS_UPHY14_CMN_ANAREG_TOP_016		Analog Register 016
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_RS_INTP_SHORT_NBIAS_EN_LANE          : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t PLL_RS_LCCAP_MSB_LANE_11_8               : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_016_t;
__xdata __at( 0x2840 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_016_t PLL_RS_UPHY14_CMN_ANAREG_TOP_016;
#define reg_PLL_RS_INTP_SHORT_NBIAS_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_016.BF.PLL_RS_INTP_SHORT_NBIAS_EN_LANE
#define reg_PLL_RS_LCCAP_MSB_LANE_11_8  PLL_RS_UPHY14_CMN_ANAREG_TOP_016.BF.PLL_RS_LCCAP_MSB_LANE_11_8

// 0x11	PLL_RS_UPHY14_CMN_ANAREG_TOP_017		Analog Register 017
typedef union {
	struct {
		uint8_t PLL_RS_LCCAP_MSB_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_017_t;
__xdata __at( 0x2844 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_017_t PLL_RS_UPHY14_CMN_ANAREG_TOP_017;
#define reg_PLL_RS_LCCAP_MSB_LANE_7_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_017.BF.PLL_RS_LCCAP_MSB_LANE_7_0

// 0x12	PLL_RS_UPHY14_CMN_ANAREG_TOP_018		Analog Register 018
typedef union {
	struct {
		uint8_t PLL_RS_LCPLL_POSTDIV_1P5OR2_EN_LANE      : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_LCPLL_POSTDIV_EN_LANE             : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 4;	/*  [5:2]     r/w 4'h0*/
		uint8_t PLL_RS_CK500M_DIV_LANE_1_0               : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_018_t;
__xdata __at( 0x2848 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_018_t PLL_RS_UPHY14_CMN_ANAREG_TOP_018;
#define reg_PLL_RS_LCPLL_POSTDIV_1P5OR2_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_018.BF.PLL_RS_LCPLL_POSTDIV_1P5OR2_EN_LANE
#define reg_PLL_RS_LCPLL_POSTDIV_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_018.BF.PLL_RS_LCPLL_POSTDIV_EN_LANE
#define reg_PLL_RS_CK500M_DIV_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_018.BF.PLL_RS_CK500M_DIV_LANE_1_0

// 0x13	PLL_RS_UPHY14_CMN_ANAREG_TOP_019		Analog Register 019
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t PLL_RS_PCIE_HIGHK_EN_LANE                : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_RS_ENLARGE_OP_GM_LANE                : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_RS_LCPLL_DEADZONE_TUNE_LANE_1_0      : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t PLL_RS_ICP_BIAS_ENLARGE_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_019_t;
__xdata __at( 0x284c ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_019_t PLL_RS_UPHY14_CMN_ANAREG_TOP_019;
#define reg_PLL_RS_PCIE_HIGHK_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_019.BF.PLL_RS_PCIE_HIGHK_EN_LANE
#define reg_PLL_RS_ENLARGE_OP_GM_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_019.BF.PLL_RS_ENLARGE_OP_GM_LANE
#define reg_PLL_RS_LCPLL_DEADZONE_TUNE_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_019.BF.PLL_RS_LCPLL_DEADZONE_TUNE_LANE_1_0
#define reg_PLL_RS_ICP_BIAS_ENLARGE_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_019.BF.PLL_RS_ICP_BIAS_ENLARGE_LANE_1_0

// 0x14	PLL_RS_UPHY14_CMN_ANAREG_TOP_020		Analog Register 020
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_RS_LOCK_RANGE_SEL_LANE_1_0           : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t PLL_RS_LCPLLREG_SEL_7K_TO_8K_RATIO_LANE  : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_RS_LCPLLREG_SEL_3K_TO_4K_RATIO_LANE  : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_RS_VARACLV_BIAS_SEL_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_020_t;
__xdata __at( 0x2850 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_020_t PLL_RS_UPHY14_CMN_ANAREG_TOP_020;
#define reg_PLL_RS_LOCK_RANGE_SEL_LANE_1_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_020.BF.PLL_RS_LOCK_RANGE_SEL_LANE_1_0
#define reg_PLL_RS_LCPLLREG_SEL_7K_TO_8K_RATIO_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_020.BF.PLL_RS_LCPLLREG_SEL_7K_TO_8K_RATIO_LANE
#define reg_PLL_RS_LCPLLREG_SEL_3K_TO_4K_RATIO_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_020.BF.PLL_RS_LCPLLREG_SEL_3K_TO_4K_RATIO_LANE
#define reg_PLL_RS_VARACLV_BIAS_SEL_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_020.BF.PLL_RS_VARACLV_BIAS_SEL_LANE_2_0

// 0x15	PLL_RS_UPHY14_CMN_ANAREG_TOP_021		Analog Register 021
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_RS_VDDR_SEL_LANE_3_0                 : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t PLL_RS_TSEN_SEL_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t PLL_RS_DCCCOMP_TEST_EN_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_RS_LCDIV1P5_DCC_EN_LANE              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_021_t;
__xdata __at( 0x2854 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_021_t PLL_RS_UPHY14_CMN_ANAREG_TOP_021;
#define reg_PLL_RS_VDDR_SEL_LANE_3_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_021.BF.PLL_RS_VDDR_SEL_LANE_3_0
#define reg_PLL_RS_TSEN_SEL_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_021.BF.PLL_RS_TSEN_SEL_LANE
#define reg_PLL_RS_DCCCOMP_TEST_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_021.BF.PLL_RS_DCCCOMP_TEST_EN_LANE
#define reg_PLL_RS_LCDIV1P5_DCC_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_021.BF.PLL_RS_LCDIV1P5_DCC_EN_LANE

// 0x16	PLL_RS_UPHY14_CMN_ANAREG_TOP_022		Analog Register 022
typedef union {
	struct {
		uint8_t PLL_RS_ANA_RSVDA_LANE_7_0                : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_022_t;
__xdata __at( 0x2858 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_022_t PLL_RS_UPHY14_CMN_ANAREG_TOP_022;
#define reg_PLL_RS_ANA_RSVDA_LANE_7_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_022.BF.PLL_RS_ANA_RSVDA_LANE_7_0

// 0x17	PLL_RS_UPHY14_CMN_ANAREG_TOP_023		Analog Register 023
typedef union {
	struct {
		uint8_t PLL_RS_ANA_RSVDB_LANE_7_0                : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_023_t;
__xdata __at( 0x285c ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_023_t PLL_RS_UPHY14_CMN_ANAREG_TOP_023;
#define reg_PLL_RS_ANA_RSVDB_LANE_7_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_023.BF.PLL_RS_ANA_RSVDB_LANE_7_0

// 0x18	PLL_RS_UPHY14_CMN_ANAREG_TOP_024		Analog Register 024
typedef union {
	struct {
		uint8_t PLL_RS_ANA_RSVDC_LANE_7_0                : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_024_t;
__xdata __at( 0x2860 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_024_t PLL_RS_UPHY14_CMN_ANAREG_TOP_024;
#define reg_PLL_RS_ANA_RSVDC_LANE_7_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_024.BF.PLL_RS_ANA_RSVDC_LANE_7_0

// 0x19	PLL_RS_UPHY14_CMN_ANAREG_TOP_025		Analog Register 025
typedef union {
	struct {
		uint8_t PLL_RS_ANA_RSVDD_LANE_7_0                : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_025_t;
__xdata __at( 0x2864 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_025_t PLL_RS_UPHY14_CMN_ANAREG_TOP_025;
#define reg_PLL_RS_ANA_RSVDD_LANE_7_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_025.BF.PLL_RS_ANA_RSVDD_LANE_7_0

// 0x1a	PLL_RS_UPHY14_CMN_ANAREG_TOP_026		Analog Register 026
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t PLL_RS_REG0P9_SPEED_TRACK_CLK_LANE_2_0   : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_026_t;
__xdata __at( 0x2868 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_026_t PLL_RS_UPHY14_CMN_ANAREG_TOP_026;
#define reg_PLL_RS_REG0P9_SPEED_TRACK_CLK_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_026.BF.PLL_RS_REG0P9_SPEED_TRACK_CLK_LANE_2_0

// 0x1b	PLL_RS_UPHY14_CMN_ANAREG_TOP_027		Analog Register 027
typedef union {
	struct {
		uint8_t PLL_RS_TXVCO_SF_ICPTAT_SEL_LANE_2_0      : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t PLL_RS_DTXCLK_DIV_EN_LANE                : 1;	/*      3     r/w 1'h0*/
		uint8_t PLL_RS_SELHV_LCPLL_CP_LANE_3_0           : 4;	/*  [7:4]     r/w 4'hd*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_027_t;
__xdata __at( 0x286c ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_027_t PLL_RS_UPHY14_CMN_ANAREG_TOP_027;
#define reg_PLL_RS_TXVCO_SF_ICPTAT_SEL_LANE_2_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_027.BF.PLL_RS_TXVCO_SF_ICPTAT_SEL_LANE_2_0
#define reg_PLL_RS_DTXCLK_DIV_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_027.BF.PLL_RS_DTXCLK_DIV_EN_LANE
#define reg_PLL_RS_SELHV_LCPLL_CP_LANE_3_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_027.BF.PLL_RS_SELHV_LCPLL_CP_LANE_3_0

// 0x1c	PLL_RS_UPHY14_CMN_ANAREG_TOP_028		Analog Register 028
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t PLL_RS_SHRTR_PLL_LANE                    : 1;	/*      6     r/w   0*/
		uint8_t PLL_RS_VDDA_CAL_EN_LANE                  : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_028_t;
__xdata __at( 0x2870 ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_028_t PLL_RS_UPHY14_CMN_ANAREG_TOP_028;
#define reg_PLL_RS_SHRTR_PLL_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_028.BF.PLL_RS_SHRTR_PLL_LANE
#define reg_PLL_RS_VDDA_CAL_EN_LANE  PLL_RS_UPHY14_CMN_ANAREG_TOP_028.BF.PLL_RS_VDDA_CAL_EN_LANE

// 0x1d	PLL_RS_PLL_CAL_REG0		Digital PLL Calibration Register 0
typedef union {
	struct {
		uint8_t PLL_RS_DIG_TESTBUS_SEL_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t PLL_RS_DIG_CAL_CLK_RST_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_RS_DIG_CAL_CLK_EN_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_PLL_CAL_REG0_t;
__xdata __at( 0x2874 ) volatile PLL_RS_PLL_CAL_REG0_t PLL_RS_PLL_CAL_REG0;
#define reg_PLL_RS_DIG_TESTBUS_SEL_LANE_3_0  PLL_RS_PLL_CAL_REG0.BF.PLL_RS_DIG_TESTBUS_SEL_LANE_3_0
#define reg_PLL_RS_DIG_CAL_CLK_RST_LANE  PLL_RS_PLL_CAL_REG0.BF.PLL_RS_DIG_CAL_CLK_RST_LANE
#define reg_PLL_RS_DIG_CAL_CLK_EN_LANE  PLL_RS_PLL_CAL_REG0.BF.PLL_RS_DIG_CAL_CLK_EN_LANE

// 0x1e	PLL_RS_PLL_CAL_REG1		Digital PLL Calibration Register 1
typedef union {
	struct {
		uint8_t PLL_RS_DIG_CAL2M_DIV_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_PLL_CAL_REG1_t;
__xdata __at( 0x2878 ) volatile PLL_RS_PLL_CAL_REG1_t PLL_RS_PLL_CAL_REG1;
#define reg_PLL_RS_DIG_CAL2M_DIV_LANE_7_0  PLL_RS_PLL_CAL_REG1.BF.PLL_RS_DIG_CAL2M_DIV_LANE_7_0

// 0x1f	PLL_RS_UPHY14_CMN_ANAREG_TOP_029		Digital PLL Calibration Register 2
typedef union {
	struct {
		uint8_t PLL_RS_ANA_TEST_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_RS_UPHY14_CMN_ANAREG_TOP_029_t;
__xdata __at( 0x287c ) volatile PLL_RS_UPHY14_CMN_ANAREG_TOP_029_t PLL_RS_UPHY14_CMN_ANAREG_TOP_029;
#define reg_PLL_RS_ANA_TEST_LANE_7_0  PLL_RS_UPHY14_CMN_ANAREG_TOP_029.BF.PLL_RS_ANA_TEST_LANE_7_0

#endif
