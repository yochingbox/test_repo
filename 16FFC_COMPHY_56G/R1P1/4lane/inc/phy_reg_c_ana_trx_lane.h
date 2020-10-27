#ifndef PHY_REG_C_ANA_TRX_LANE_H
#define PHY_REG_C_ANA_TRX_LANE_H



// 0x0	ANA_TRX_MISC0		
typedef union {
	struct {
		uint8_t ACCAP_CLK_SEL_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t CLKFW_LANE                               : 1;	/*      2     r/w   0*/
		uint8_t ACCAP_RFTIME_SEL_LANE_2_0                : 3;	/*  [5:3]     r/w 3'h4*/
		uint8_t ACCAP_DISABLE_RIGHT_LANE                 : 1;	/*      6     r/w   0*/
		uint8_t ACCAP_DISABLE_LEFT_LANE                  : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TRX_MISC0_t;
__xdata __at( 0x0 ) volatile ANA_TRX_MISC0_t ANA_TRX_MISC0;
#define reg_ACCAP_CLK_SEL_LANE_1_0  ANA_TRX_MISC0.BF.ACCAP_CLK_SEL_LANE_1_0
#define reg_CLKFW_LANE  ANA_TRX_MISC0.BF.CLKFW_LANE
#define reg_ACCAP_RFTIME_SEL_LANE_2_0  ANA_TRX_MISC0.BF.ACCAP_RFTIME_SEL_LANE_2_0
#define reg_ACCAP_DISABLE_RIGHT_LANE  ANA_TRX_MISC0.BF.ACCAP_DISABLE_RIGHT_LANE
#define reg_ACCAP_DISABLE_LEFT_LANE  ANA_TRX_MISC0.BF.ACCAP_DISABLE_LEFT_LANE

// 0x1	ANA_ALIGN90_REG0		
typedef union {
	struct {
		uint8_t PU_ALIGN90_LANE                          : 1;	/*      0     r/w   1*/
		uint8_t ALIGN90_SYN_CLK_LANE                     : 1;	/*      1     r/w   0*/
		uint8_t ALIGN90_REF_FILT_BW_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t ALIGN90_DUMMY_CLK_LANE                   : 1;	/*      3     r/w   1*/
		uint8_t ALIGN90_CMP_CAL_EN_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_ALIGN90_REG0_t;
__xdata __at( 0x4 ) volatile ANA_ALIGN90_REG0_t ANA_ALIGN90_REG0;
#define reg_PU_ALIGN90_LANE  ANA_ALIGN90_REG0.BF.PU_ALIGN90_LANE
#define reg_ALIGN90_SYN_CLK_LANE  ANA_ALIGN90_REG0.BF.ALIGN90_SYN_CLK_LANE
#define reg_ALIGN90_REF_FILT_BW_LANE  ANA_ALIGN90_REG0.BF.ALIGN90_REF_FILT_BW_LANE
#define reg_ALIGN90_DUMMY_CLK_LANE  ANA_ALIGN90_REG0.BF.ALIGN90_DUMMY_CLK_LANE
#define reg_ALIGN90_CMP_CAL_EN_LANE  ANA_ALIGN90_REG0.BF.ALIGN90_CMP_CAL_EN_LANE

// 0x2	ANA_ALIGN90_REG1		
typedef union {
	struct {
		uint8_t ALIGN90_CMP_OFFSET_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_ALIGN90_REG1_t;
__xdata __at( 0x8 ) volatile ANA_ALIGN90_REG1_t ANA_ALIGN90_REG1;
#define reg_ALIGN90_CMP_OFFSET_LANE_3_0  ANA_ALIGN90_REG1.BF.ALIGN90_CMP_OFFSET_LANE_3_0

// 0x3	ANA_ALIGN90_REG2		
typedef union {
	struct {
		uint8_t ALIGN90_DAC_LANE_6_0                     : 7;	/*  [6:0]     r/w 7'h4c*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_ALIGN90_REG2_t;
__xdata __at( 0xc ) volatile ANA_ALIGN90_REG2_t ANA_ALIGN90_REG2;
#define reg_ALIGN90_DAC_LANE_6_0  ANA_ALIGN90_REG2.BF.ALIGN90_DAC_LANE_6_0

// 0x4	ANA_ALIGN90_REG3		
typedef union {
	struct {
		uint8_t ALIGN90_GM_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_ALIGN90_REG3_t;
__xdata __at( 0x10 ) volatile ANA_ALIGN90_REG3_t ANA_ALIGN90_REG3;
#define reg_ALIGN90_GM_LANE_2_0  ANA_ALIGN90_REG3.BF.ALIGN90_GM_LANE_2_0

// 0x5	ANA_ALIGN90_REG4		
typedef union {
	struct {
		uint8_t ALIGN90_REF_LANE_5_0                     : 6;	/*  [5:0]     r/w 6'h1e*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_ALIGN90_REG4_t;
__xdata __at( 0x14 ) volatile ANA_ALIGN90_REG4_t ANA_ALIGN90_REG4;
#define reg_ALIGN90_REF_LANE_5_0  ANA_ALIGN90_REG4.BF.ALIGN90_REF_LANE_5_0

// 0x6	ANA_RSVD_REG0		
typedef union {
	struct {
		uint8_t ANA_RSVD0_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG0_t;
__xdata __at( 0x18 ) volatile ANA_RSVD_REG0_t ANA_RSVD_REG0;
#define reg_ANA_RSVD0_LANE_7_0  ANA_RSVD_REG0.BF.ANA_RSVD0_LANE_7_0

// 0x7	ANA_RSVD_REG1		
typedef union {
	struct {
		uint8_t ANA_RSVD1_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG1_t;
__xdata __at( 0x1c ) volatile ANA_RSVD_REG1_t ANA_RSVD_REG1;
#define reg_ANA_RSVD1_LANE_7_0  ANA_RSVD_REG1.BF.ANA_RSVD1_LANE_7_0

// 0x8	ANA_RSVD_REG2		
typedef union {
	struct {
		uint8_t ANA_RSVD2_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG2_t;
__xdata __at( 0x20 ) volatile ANA_RSVD_REG2_t ANA_RSVD_REG2;
#define reg_ANA_RSVD2_LANE_7_0  ANA_RSVD_REG2.BF.ANA_RSVD2_LANE_7_0

// 0x9	ANA_RSVD_REG3		
typedef union {
	struct {
		uint8_t ANA_RSVD3_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG3_t;
__xdata __at( 0x24 ) volatile ANA_RSVD_REG3_t ANA_RSVD_REG3;
#define reg_ANA_RSVD3_LANE_7_0  ANA_RSVD_REG3.BF.ANA_RSVD3_LANE_7_0

// 0xa	ANA_RSVD_REG4		
typedef union {
	struct {
		uint8_t ANA_RSVD4_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG4_t;
__xdata __at( 0x28 ) volatile ANA_RSVD_REG4_t ANA_RSVD_REG4;
#define reg_ANA_RSVD4_LANE_7_0  ANA_RSVD_REG4.BF.ANA_RSVD4_LANE_7_0

// 0xb	ANA_RSVD_REG5		
typedef union {
	struct {
		uint8_t ANA_RSVD5_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG5_t;
__xdata __at( 0x2c ) volatile ANA_RSVD_REG5_t ANA_RSVD_REG5;
#define reg_ANA_RSVD5_LANE_7_0  ANA_RSVD_REG5.BF.ANA_RSVD5_LANE_7_0

// 0xc	ANA_RSVD_REG6		
typedef union {
	struct {
		uint8_t ANA_RSVD6_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG6_t;
__xdata __at( 0x30 ) volatile ANA_RSVD_REG6_t ANA_RSVD_REG6;
#define reg_ANA_RSVD6_LANE_7_0  ANA_RSVD_REG6.BF.ANA_RSVD6_LANE_7_0

// 0xd	ANA_RSVD_REG7		
typedef union {
	struct {
		uint8_t ANA_RSVD7_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG7_t;
__xdata __at( 0x34 ) volatile ANA_RSVD_REG7_t ANA_RSVD_REG7;
#define reg_ANA_RSVD7_LANE_7_0  ANA_RSVD_REG7.BF.ANA_RSVD7_LANE_7_0

// 0xe	ANA_CDR_PATTERN_REG0		
typedef union {
	struct {
		uint8_t CDR_PATTERN_INDEX_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t CDR_PATTERN_LANE_3_0                     : 4;	/*  [5:2]     r/w 4'h3*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CDR_PATTERN_REG0_t;
__xdata __at( 0x38 ) volatile ANA_CDR_PATTERN_REG0_t ANA_CDR_PATTERN_REG0;
#define reg_CDR_PATTERN_INDEX_LANE_1_0  ANA_CDR_PATTERN_REG0.BF.CDR_PATTERN_INDEX_LANE_1_0
#define reg_CDR_PATTERN_LANE_3_0  ANA_CDR_PATTERN_REG0.BF.CDR_PATTERN_LANE_3_0

// 0xf	ANA_VDD_CALEN_REG0		
typedef union {
	struct {
		uint8_t CALEN_VDDA_TXPRE_LANE                    : 1;	/*      0     r/w   0*/
		uint8_t CALEN_VDDA_TXDATA_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t CALEN_VDDA_TXCLK_LANE                    : 1;	/*      2     r/w   0*/
		uint8_t CALEN_VDDA_RXSAMPLER_LANE                : 1;	/*      3     r/w   0*/
		uint8_t CALEN_VDDA_RXEOMCLK_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t CALEN_VDDA_RXDATACLK_LANE                : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_VDD_CALEN_REG0_t;
__xdata __at( 0x3c ) volatile ANA_VDD_CALEN_REG0_t ANA_VDD_CALEN_REG0;
#define reg_CALEN_VDDA_TXPRE_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_TXPRE_LANE
#define reg_CALEN_VDDA_TXDATA_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_TXDATA_LANE
#define reg_CALEN_VDDA_TXCLK_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_TXCLK_LANE
#define reg_CALEN_VDDA_RXSAMPLER_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_RXSAMPLER_LANE
#define reg_CALEN_VDDA_RXEOMCLK_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_RXEOMCLK_LANE
#define reg_CALEN_VDDA_RXDATACLK_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_RXDATACLK_LANE

// 0x10	ANA_CLK_CTRL_REG0		
typedef union {
	struct {
		uint8_t CLK_DIRECTION_RINGPLL_LANE               : 1;	/*      0     r/w   0*/
		uint8_t CLK_DIRECTION_REFCLK_LANE                : 1;	/*      1     r/w   1*/
		uint8_t CLK_DIRECTION_LCPLL_LANE                 : 1;	/*      2     r/w   1*/
		uint8_t CLK_DET_EN_LANE                          : 1;	/*      3     r/w   1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CLK_CTRL_REG0_t;
__xdata __at( 0x40 ) volatile ANA_CLK_CTRL_REG0_t ANA_CLK_CTRL_REG0;
#define reg_CLK_DIRECTION_RINGPLL_LANE  ANA_CLK_CTRL_REG0.BF.CLK_DIRECTION_RINGPLL_LANE
#define reg_CLK_DIRECTION_REFCLK_LANE  ANA_CLK_CTRL_REG0.BF.CLK_DIRECTION_REFCLK_LANE
#define reg_CLK_DIRECTION_LCPLL_LANE  ANA_CLK_CTRL_REG0.BF.CLK_DIRECTION_LCPLL_LANE
#define reg_CLK_DET_EN_LANE  ANA_CLK_CTRL_REG0.BF.CLK_DET_EN_LANE

// 0x11	ANA_CTLE_REG0		
typedef union {
	struct {
		uint8_t CTLE_VICM2_LANE_1_0                      : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t CTLE_VICM1_LANE_1_0                      : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t CTLE_BYPASS2_EN_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG0_t;
__xdata __at( 0x44 ) volatile ANA_CTLE_REG0_t ANA_CTLE_REG0;
#define reg_CTLE_VICM2_LANE_1_0  ANA_CTLE_REG0.BF.CTLE_VICM2_LANE_1_0
#define reg_CTLE_VICM1_LANE_1_0  ANA_CTLE_REG0.BF.CTLE_VICM1_LANE_1_0
#define reg_CTLE_BYPASS2_EN_LANE  ANA_CTLE_REG0.BF.CTLE_BYPASS2_EN_LANE
#define reg_CTLE_BYPASS1_EN_LANE  ANA_CTLE_REG0.BF.CTLE_BYPASS1_EN_LANE

// 0x12	ANA_CTLE_REG1		
typedef union {
	struct {
		uint8_t CTLE_CAP1_SEL_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG1_t;
__xdata __at( 0x48 ) volatile ANA_CTLE_REG1_t ANA_CTLE_REG1;
#define reg_CTLE_CAP1_SEL_LANE_3_0  ANA_CTLE_REG1.BF.CTLE_CAP1_SEL_LANE_3_0

// 0x13	ANA_CTLE_REG2		
typedef union {
	struct {
		uint8_t CTLE_CAP2_SEL_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG2_t;
__xdata __at( 0x4c ) volatile ANA_CTLE_REG2_t ANA_CTLE_REG2;
#define reg_CTLE_CAP2_SEL_LANE_3_0  ANA_CTLE_REG2.BF.CTLE_CAP2_SEL_LANE_3_0

// 0x14	ANA_CTLE_REG3		
typedef union {
	struct {
		uint8_t CTLE_CURRENT1_SEL_LANE_3_0               : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG3_t;
__xdata __at( 0x50 ) volatile ANA_CTLE_REG3_t ANA_CTLE_REG3;
#define reg_CTLE_CURRENT1_SEL_LANE_3_0  ANA_CTLE_REG3.BF.CTLE_CURRENT1_SEL_LANE_3_0

// 0x15	ANA_CTLE_REG4		
typedef union {
	struct {
		uint8_t CTLE_CURRENT2_SEL_LANE_3_0               : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG4_t;
__xdata __at( 0x54 ) volatile ANA_CTLE_REG4_t ANA_CTLE_REG4;
#define reg_CTLE_CURRENT2_SEL_LANE_3_0  ANA_CTLE_REG4.BF.CTLE_CURRENT2_SEL_LANE_3_0

// 0x16	ANA_CTLE_REG5		
typedef union {
	struct {
		uint8_t CTLE_RES1_SEL_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG5_t;
__xdata __at( 0x58 ) volatile ANA_CTLE_REG5_t ANA_CTLE_REG5;
#define reg_CTLE_RES1_SEL_LANE_3_0  ANA_CTLE_REG5.BF.CTLE_RES1_SEL_LANE_3_0

// 0x17	ANA_CTLE_REG6		
typedef union {
	struct {
		uint8_t CTLE_RES2_SEL_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG6_t;
__xdata __at( 0x5c ) volatile ANA_CTLE_REG6_t ANA_CTLE_REG6;
#define reg_CTLE_RES2_SEL_LANE_3_0  ANA_CTLE_REG6.BF.CTLE_RES2_SEL_LANE_3_0

// 0x18	ANA_CTLE_REG7		
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG7_t;
__xdata __at( 0x60 ) volatile ANA_CTLE_REG7_t ANA_CTLE_REG7;
#define reg_CTLE_RL1_SEL_LANE_3_0  ANA_CTLE_REG7.BF.CTLE_RL1_SEL_LANE_3_0

// 0x19	ANA_CTLE_REG8		
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG8_t;
__xdata __at( 0x64 ) volatile ANA_CTLE_REG8_t ANA_CTLE_REG8;
#define reg_CTLE_RL2_SEL_LANE_3_0  ANA_CTLE_REG8.BF.CTLE_RL2_SEL_LANE_3_0

// 0x1a	ANA_DFE_REG0		
typedef union {
	struct {
		uint8_t DFE_CLK_DLY_LANE_1_0                     : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DEMUX2_SYNC_EN_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t EN_DFE_F3TO7_LANE                        : 1;	/*      3     r/w   1*/
		uint8_t DFE_F0_RES_DOUBLE_LANE                   : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG0_t;
__xdata __at( 0x68 ) volatile ANA_DFE_REG0_t ANA_DFE_REG0;
#define reg_DFE_CLK_DLY_LANE_1_0  ANA_DFE_REG0.BF.DFE_CLK_DLY_LANE_1_0
#define reg_DEMUX2_SYNC_EN_LANE  ANA_DFE_REG0.BF.DEMUX2_SYNC_EN_LANE
#define reg_EN_DFE_F3TO7_LANE  ANA_DFE_REG0.BF.EN_DFE_F3TO7_LANE
#define reg_DFE_F0_RES_DOUBLE_LANE  ANA_DFE_REG0.BF.DFE_F0_RES_DOUBLE_LANE

// 0x1b	ANA_DFE_REG1		
typedef union {
	struct {
		uint8_t DFE_RES_F1P5_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DFE_RES_F1_LANE_1_0                      : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t DFE_RES_F0_LANE_1_0                      : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t DFE_RES_DOUBLE_LANE_1_0                  : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG1_t;
__xdata __at( 0x6c ) volatile ANA_DFE_REG1_t ANA_DFE_REG1;
#define reg_DFE_RES_F1P5_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_F1P5_LANE_1_0
#define reg_DFE_RES_F1_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_F1_LANE_1_0
#define reg_DFE_RES_F0_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_F0_LANE_1_0
#define reg_DFE_RES_DOUBLE_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_DOUBLE_LANE_1_0

// 0x1c	ANA_DFE_REG2		
typedef union {
	struct {
		uint8_t OFST_RES_LANE                            : 1;	/*      0     r/w   0*/
		uint8_t DFE_RES_FLOATING_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t DFE_RES_F11TO15_LANE                     : 1;	/*      2     r/w   0*/
		uint8_t DFE_RES_F8TO10_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t DFE_RES_F567_LANE                        : 1;	/*      4     r/w   0*/
		uint8_t DFE_RES_F34_LANE                         : 1;	/*      5     r/w   0*/
		uint8_t DFE_RES_F2_LANE_1_0                      : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG2_t;
__xdata __at( 0x70 ) volatile ANA_DFE_REG2_t ANA_DFE_REG2;
#define reg_OFST_RES_LANE  ANA_DFE_REG2.BF.OFST_RES_LANE
#define reg_DFE_RES_FLOATING_LANE  ANA_DFE_REG2.BF.DFE_RES_FLOATING_LANE
#define reg_DFE_RES_F11TO15_LANE  ANA_DFE_REG2.BF.DFE_RES_F11TO15_LANE
#define reg_DFE_RES_F8TO10_LANE  ANA_DFE_REG2.BF.DFE_RES_F8TO10_LANE
#define reg_DFE_RES_F567_LANE  ANA_DFE_REG2.BF.DFE_RES_F567_LANE
#define reg_DFE_RES_F34_LANE  ANA_DFE_REG2.BF.DFE_RES_F34_LANE
#define reg_DFE_RES_F2_LANE_1_0  ANA_DFE_REG2.BF.DFE_RES_F2_LANE_1_0

// 0x1d	ANA_DFE_REG3		
typedef union {
	struct {
		uint8_t EN_DFE_F1TO2_LANE                        : 1;	/*      0     r/w   1*/
		uint8_t EN_DFE_F1P5_LANE                         : 1;	/*      1     r/w   1*/
		uint8_t EN_DFE_F11TO15_LANE                      : 1;	/*      2     r/w   1*/
		uint8_t EN_DFE_F0_LANE                           : 1;	/*      3     r/w   1*/
		uint8_t DFE_XLAT_SEL_LANE_1_0                    : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t DFE_RES_VREF_LANE_1_0                    : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG3_t;
__xdata __at( 0x74 ) volatile ANA_DFE_REG3_t ANA_DFE_REG3;
#define reg_EN_DFE_F1TO2_LANE  ANA_DFE_REG3.BF.EN_DFE_F1TO2_LANE
#define reg_EN_DFE_F1P5_LANE  ANA_DFE_REG3.BF.EN_DFE_F1P5_LANE
#define reg_EN_DFE_F11TO15_LANE  ANA_DFE_REG3.BF.EN_DFE_F11TO15_LANE
#define reg_EN_DFE_F0_LANE  ANA_DFE_REG3.BF.EN_DFE_F0_LANE
#define reg_DFE_XLAT_SEL_LANE_1_0  ANA_DFE_REG3.BF.DFE_XLAT_SEL_LANE_1_0
#define reg_DFE_RES_VREF_LANE_1_0  ANA_DFE_REG3.BF.DFE_RES_VREF_LANE_1_0

// 0x1e	ANA_DLL_REG0		
typedef union {
	struct {
		uint8_t DLL_PD_SEL_LANE_1_0                      : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DLL_CMP_CAL_EN_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DLL_REG0_t;
__xdata __at( 0x78 ) volatile ANA_DLL_REG0_t ANA_DLL_REG0;
#define reg_DLL_PD_SEL_LANE_1_0  ANA_DLL_REG0.BF.DLL_PD_SEL_LANE_1_0
#define reg_DLL_CMP_CAL_EN_LANE  ANA_DLL_REG0.BF.DLL_CMP_CAL_EN_LANE

// 0x1f	ANA_DLL_REG1		
typedef union {
	struct {
		uint8_t DLL_CMP_OFFSET_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DLL_REG1_t;
__xdata __at( 0x7c ) volatile ANA_DLL_REG1_t ANA_DLL_REG1;
#define reg_DLL_CMP_OFFSET_LANE_3_0  ANA_DLL_REG1.BF.DLL_CMP_OFFSET_LANE_3_0

// 0x20	ANA_DLL_REG2		
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DLL_REG2_t;
__xdata __at( 0x80 ) volatile ANA_DLL_REG2_t ANA_DLL_REG2;
#define reg_DLL_FREQ_SEL_LANE_1_0  ANA_DLL_REG2.BF.DLL_FREQ_SEL_LANE_1_0

// 0x21	ANA_DLL_REG3		
typedef union {
	struct {
		uint8_t DLL_GMSEL_LANE_2_0                       : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DLL_REG3_t;
__xdata __at( 0x84 ) volatile ANA_DLL_REG3_t ANA_DLL_REG3;
#define reg_DLL_GMSEL_LANE_2_0  ANA_DLL_REG3.BF.DLL_GMSEL_LANE_2_0

// 0x22	ANA_DTL_REG0		
typedef union {
	struct {
		uint8_t DTL_CLK_SPEEDUP_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t DTL_DLY_CTRL_LANE_1_0                    : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t DPHERCK_DLY_SEL_LANE_1_0                 : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DTL_REG0_t;
__xdata __at( 0x88 ) volatile ANA_DTL_REG0_t ANA_DTL_REG0;
#define reg_DTL_CLK_SPEEDUP_LANE_2_0  ANA_DTL_REG0.BF.DTL_CLK_SPEEDUP_LANE_2_0
#define reg_DTL_DLY_CTRL_LANE_1_0  ANA_DTL_REG0.BF.DTL_DLY_CTRL_LANE_1_0
#define reg_DPHERCK_DLY_SEL_LANE_1_0  ANA_DTL_REG0.BF.DPHERCK_DLY_SEL_LANE_1_0

// 0x23	ANA_DFE_REG4		
typedef union {
	struct {
		uint8_t EN_F0_S_LANE                             : 1;	/*      0     r/w   1*/
		uint8_t EN_F0_D_LANE                             : 1;	/*      1     r/w   1*/
		uint8_t EN_DFE_VREF_LANE                         : 1;	/*      2     r/w   1*/
		uint8_t EN_DFE_FLOATING_LANE                     : 1;	/*      3     r/w   1*/
		uint8_t EN_DFE_F8TO10_LANE                       : 1;	/*      4     r/w   1*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG4_t;
__xdata __at( 0x8c ) volatile ANA_DFE_REG4_t ANA_DFE_REG4;
#define reg_EN_F0_S_LANE  ANA_DFE_REG4.BF.EN_F0_S_LANE
#define reg_EN_F0_D_LANE  ANA_DFE_REG4.BF.EN_F0_D_LANE
#define reg_EN_DFE_VREF_LANE  ANA_DFE_REG4.BF.EN_DFE_VREF_LANE
#define reg_EN_DFE_FLOATING_LANE  ANA_DFE_REG4.BF.EN_DFE_FLOATING_LANE
#define reg_EN_DFE_F8TO10_LANE  ANA_DFE_REG4.BF.EN_DFE_F8TO10_LANE

// 0x24	ANA_EOM_REG0		
typedef union {
	struct {
		uint8_t EOM_SSC_CLK_EN_LANE                      : 1;	/*      0     r/w   0*/
		uint8_t EOM_RESET_INTP_EXT_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t EOM_DPHERCK_DLY_SEL_LANE_1_0             : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t EOM_CLK_EN_LANE                          : 1;	/*      4     r/w   0*/
		uint8_t EOM_ALIGN_PD_SEL_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t EOM_ALIGN_EN_LANE                        : 1;	/*      6     r/w   0*/
		uint8_t EOM_ALIGN_CMP_CAL_EN_LANE                : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG0_t;
__xdata __at( 0x90 ) volatile ANA_EOM_REG0_t ANA_EOM_REG0;
#define reg_EOM_SSC_CLK_EN_LANE  ANA_EOM_REG0.BF.EOM_SSC_CLK_EN_LANE
#define reg_EOM_RESET_INTP_EXT_LANE  ANA_EOM_REG0.BF.EOM_RESET_INTP_EXT_LANE
#define reg_EOM_DPHERCK_DLY_SEL_LANE_1_0  ANA_EOM_REG0.BF.EOM_DPHERCK_DLY_SEL_LANE_1_0
#define reg_EOM_CLK_EN_LANE  ANA_EOM_REG0.BF.EOM_CLK_EN_LANE
#define reg_EOM_ALIGN_PD_SEL_LANE  ANA_EOM_REG0.BF.EOM_ALIGN_PD_SEL_LANE
#define reg_EOM_ALIGN_EN_LANE  ANA_EOM_REG0.BF.EOM_ALIGN_EN_LANE
#define reg_EOM_ALIGN_CMP_CAL_EN_LANE  ANA_EOM_REG0.BF.EOM_ALIGN_CMP_CAL_EN_LANE

// 0x25	ANA_EOM_REG1		
typedef union {
	struct {
		uint8_t EOM_ALIGN_CMP_OFSTDAC_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG1_t;
__xdata __at( 0x94 ) volatile ANA_EOM_REG1_t ANA_EOM_REG1;
#define reg_EOM_ALIGN_CMP_OFSTDAC_LANE_3_0  ANA_EOM_REG1.BF.EOM_ALIGN_CMP_OFSTDAC_LANE_3_0

// 0x26	ANA_EOM_REG2		
typedef union {
	struct {
		uint8_t EOM_DLL_FREQ_SEL_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG2_t;
__xdata __at( 0x98 ) volatile ANA_EOM_REG2_t ANA_EOM_REG2;
#define reg_EOM_DLL_FREQ_SEL_LANE_1_0  ANA_EOM_REG2.BF.EOM_DLL_FREQ_SEL_LANE_1_0

// 0x27	ANA_EOM_REG3		
typedef union {
	struct {
		uint8_t EOM_DLL_GMSEL_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG3_t;
__xdata __at( 0x9c ) volatile ANA_EOM_REG3_t ANA_EOM_REG3;
#define reg_EOM_DLL_GMSEL_LANE_2_0  ANA_EOM_REG3.BF.EOM_DLL_GMSEL_LANE_2_0

// 0x28	ANA_EOM_REG4		
typedef union {
	struct {
		uint8_t EOM_DPHER_LANE_6_0                       : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG4_t;
__xdata __at( 0xa0 ) volatile ANA_EOM_REG4_t ANA_EOM_REG4;
#define reg_EOM_DPHER_LANE_6_0  ANA_EOM_REG4.BF.EOM_DPHER_LANE_6_0

// 0x29	ANA_EOM_REG5		
typedef union {
	struct {
		uint8_t HPF_BW_LANE_1_0                          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t FORCEUD_EN_LANE                          : 1;	/*      2     r/w   0*/
		uint8_t FORCEUD_LANE                             : 1;	/*      3     r/w   0*/
		uint8_t EOM_EN_S_LANE                            : 1;	/*      4     r/w   0*/
		uint8_t EOM_EN_E_LANE                            : 1;	/*      5     r/w   0*/
		uint8_t EOM_EN_D_LANE                            : 1;	/*      6     r/w   0*/
		uint8_t EOM_DPHERCK_LANE                         : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG5_t;
__xdata __at( 0xa4 ) volatile ANA_EOM_REG5_t ANA_EOM_REG5;
#define reg_HPF_BW_LANE_1_0  ANA_EOM_REG5.BF.HPF_BW_LANE_1_0
#define reg_FORCEUD_EN_LANE  ANA_EOM_REG5.BF.FORCEUD_EN_LANE
#define reg_FORCEUD_LANE  ANA_EOM_REG5.BF.FORCEUD_LANE
#define reg_EOM_EN_S_LANE  ANA_EOM_REG5.BF.EOM_EN_S_LANE
#define reg_EOM_EN_E_LANE  ANA_EOM_REG5.BF.EOM_EN_E_LANE
#define reg_EOM_EN_D_LANE  ANA_EOM_REG5.BF.EOM_EN_D_LANE
#define reg_EOM_DPHERCK_LANE  ANA_EOM_REG5.BF.EOM_DPHERCK_LANE

// 0x2a	ANA_IMPCAL_REG0		
typedef union {
	struct {
		uint8_t IDCON_CUR_LANE_1_0                       : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RXIMP_CAL_EN_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t LOCAL_ANA_TX2RX_LPBK_EN_LANE             : 1;	/*      3     r/w   0*/
		uint8_t IDCON_VDDADATA_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IMPCAL_REG0_t;
__xdata __at( 0xa8 ) volatile ANA_IMPCAL_REG0_t ANA_IMPCAL_REG0;
#define reg_IDCON_CUR_LANE_1_0  ANA_IMPCAL_REG0.BF.IDCON_CUR_LANE_1_0
#define reg_RXIMP_CAL_EN_LANE  ANA_IMPCAL_REG0.BF.RXIMP_CAL_EN_LANE
#define reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  ANA_IMPCAL_REG0.BF.LOCAL_ANA_TX2RX_LPBK_EN_LANE
#define reg_IDCON_VDDADATA_LANE  ANA_IMPCAL_REG0.BF.IDCON_VDDADATA_LANE

// 0x2b	ANA_IMPCAL_REG1		
typedef union {
	struct {
		uint8_t IMPCAL_RX_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IMPCAL_REG1_t;
__xdata __at( 0xac ) volatile ANA_IMPCAL_REG1_t ANA_IMPCAL_REG1;
#define reg_IMPCAL_RX_LANE_4_0  ANA_IMPCAL_REG1.BF.IMPCAL_RX_LANE_4_0

// 0x2c	ANA_INTPI_REG0		
typedef union {
	struct {
		uint8_t INTPI_LANE_3_0                           : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_INTPI_REG0_t;
__xdata __at( 0xb0 ) volatile ANA_INTPI_REG0_t ANA_INTPI_REG0;
#define reg_INTPI_LANE_3_0  ANA_INTPI_REG0.BF.INTPI_LANE_3_0

// 0x2d	ANA_INTPR_REG0		
typedef union {
	struct {
		uint8_t INTPR_LANE_1_0                           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_INTPR_REG0_t;
__xdata __at( 0xb4 ) volatile ANA_INTPR_REG0_t ANA_INTPR_REG0;
#define reg_INTPR_LANE_1_0  ANA_INTPR_REG0.BF.INTPR_LANE_1_0

// 0x2e	ANA_MISC_REG1		
typedef union {
	struct {
		uint8_t PU_VCM_LANE                              : 1;	/*      0     r/w   1*/
		uint8_t PU_OS_LANE                               : 1;	/*      1     r/w   1*/
		uint8_t PU_LB_DLY_LANE                           : 1;	/*      2     r/w   0*/
		uint8_t PU_LB_LANE                               : 1;	/*      3     r/w   0*/
		uint8_t PATH_DISABLE_S_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_LANE                   : 1;	/*      5     r/w   0*/
		uint8_t PATH_DISABLE_D_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG1_t;
__xdata __at( 0xb8 ) volatile ANA_MISC_REG1_t ANA_MISC_REG1;
#define reg_PU_VCM_LANE  ANA_MISC_REG1.BF.PU_VCM_LANE
#define reg_PU_OS_LANE  ANA_MISC_REG1.BF.PU_OS_LANE
#define reg_PU_LB_DLY_LANE  ANA_MISC_REG1.BF.PU_LB_DLY_LANE
#define reg_PU_LB_LANE  ANA_MISC_REG1.BF.PU_LB_LANE
#define reg_PATH_DISABLE_S_LANE  ANA_MISC_REG1.BF.PATH_DISABLE_S_LANE
#define reg_PATH_DISABLE_EDGE_LANE  ANA_MISC_REG1.BF.PATH_DISABLE_EDGE_LANE
#define reg_PATH_DISABLE_D_LANE  ANA_MISC_REG1.BF.PATH_DISABLE_D_LANE

// 0x2f	ANA_MISC_REG2		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESET_INTP_EXT_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t REG_SQUELCH_PLOOP_ON_LANE                : 1;	/*      3     r/w   1*/
		uint8_t REG_SQ_DET_LANE                          : 1;	/*      4     r/w   1*/
		uint8_t REG_FLOOP_EN_LANE                        : 1;	/*      5     r/w   1*/
		uint8_t RCAL_2ND_EN_LANE                         : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG2_t;
__xdata __at( 0xbc ) volatile ANA_MISC_REG2_t ANA_MISC_REG2;
#define reg_RESET_INTP_EXT_LANE  ANA_MISC_REG2.BF.RESET_INTP_EXT_LANE
#define reg_REG_SQUELCH_PLOOP_ON_LANE  ANA_MISC_REG2.BF.REG_SQUELCH_PLOOP_ON_LANE
#define reg_REG_SQ_DET_LANE  ANA_MISC_REG2.BF.REG_SQ_DET_LANE
#define reg_REG_FLOOP_EN_LANE  ANA_MISC_REG2.BF.REG_FLOOP_EN_LANE
#define reg_RCAL_2ND_EN_LANE  ANA_MISC_REG2.BF.RCAL_2ND_EN_LANE

// 0x30	ANA_SMPLR_REG0		
typedef union {
	struct {
		uint8_t PU_SMPLR_D_O_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t PU_SMPLR_D_E_LANE_2_0                    : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG0_t;
__xdata __at( 0xc0 ) volatile ANA_SMPLR_REG0_t ANA_SMPLR_REG0;
#define reg_PU_SMPLR_D_O_LANE_2_0  ANA_SMPLR_REG0.BF.PU_SMPLR_D_O_LANE_2_0
#define reg_PU_SMPLR_D_E_LANE_2_0  ANA_SMPLR_REG0.BF.PU_SMPLR_D_E_LANE_2_0

// 0x31	ANA_SMPLR_REG1		
typedef union {
	struct {
		uint8_t REG_SELMUPF_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG1_t;
__xdata __at( 0xc4 ) volatile ANA_SMPLR_REG1_t ANA_SMPLR_REG1;
#define reg_REG_SELMUPF_LANE_3_0  ANA_SMPLR_REG1.BF.REG_SELMUPF_LANE_3_0

// 0x32	ANA_SMPLR_REG2		
typedef union {
	struct {
		uint8_t PU_SMPLR_S_O_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t PU_SMPLR_S_E_LANE_2_0                    : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RXCLK_2X_EN_LANE                         : 1;	/*      6     r/w   1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG2_t;
__xdata __at( 0xc8 ) volatile ANA_SMPLR_REG2_t ANA_SMPLR_REG2;
#define reg_PU_SMPLR_S_O_LANE_2_0  ANA_SMPLR_REG2.BF.PU_SMPLR_S_O_LANE_2_0
#define reg_PU_SMPLR_S_E_LANE_2_0  ANA_SMPLR_REG2.BF.PU_SMPLR_S_E_LANE_2_0
#define reg_RXCLK_2X_EN_LANE  ANA_SMPLR_REG2.BF.RXCLK_2X_EN_LANE

// 0x33	ANA_SMPLR_REG3		
typedef union {
	struct {
		uint8_t REG_SELMUPI_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG3_t;
__xdata __at( 0xcc ) volatile ANA_SMPLR_REG3_t ANA_SMPLR_REG3;
#define reg_REG_SELMUPI_LANE_3_0  ANA_SMPLR_REG3.BF.REG_SELMUPI_LANE_3_0

// 0x34	ANA_RXDCC_REG0		
typedef union {
	struct {
		uint8_t RXDCC_HG_EOMCLK_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t RXDCC_HG_DLLCLK_LANE                     : 1;	/*      1     r/w   0*/
		uint8_t RXDCC_HG_DATACLK_LANE                    : 1;	/*      2     r/w   0*/
		uint8_t RXDCC_EN_EOMCLK_LANE                     : 1;	/*      3     r/w   1*/
		uint8_t RXDCC_EN_DLLCLK_LANE                     : 1;	/*      4     r/w   1*/
		uint8_t RXDCC_EN_DATACLK_LANE                    : 1;	/*      5     r/w   1*/
		uint8_t RXDCC_DAC_SYNC_CLK_LANE                  : 1;	/*      6     r/w   0*/
		uint8_t RXDCC_CAL_EN_LANE                        : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXDCC_REG0_t;
__xdata __at( 0xd0 ) volatile ANA_RXDCC_REG0_t ANA_RXDCC_REG0;
#define reg_RXDCC_HG_EOMCLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_HG_EOMCLK_LANE
#define reg_RXDCC_HG_DLLCLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_HG_DLLCLK_LANE
#define reg_RXDCC_HG_DATACLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_HG_DATACLK_LANE
#define reg_RXDCC_EN_EOMCLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_EN_EOMCLK_LANE
#define reg_RXDCC_EN_DLLCLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_EN_DLLCLK_LANE
#define reg_RXDCC_EN_DATACLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_EN_DATACLK_LANE
#define reg_RXDCC_DAC_SYNC_CLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_DAC_SYNC_CLK_LANE
#define reg_RXDCC_CAL_EN_LANE  ANA_RXDCC_REG0.BF.RXDCC_CAL_EN_LANE

// 0x35	ANA_RXDCC_REG1		
typedef union {
	struct {
		uint8_t RXDCC_DATACLK_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h20*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXDCC_REG1_t;
__xdata __at( 0xd4 ) volatile ANA_RXDCC_REG1_t ANA_RXDCC_REG1;
#define reg_RXDCC_DATACLK_LANE_5_0  ANA_RXDCC_REG1.BF.RXDCC_DATACLK_LANE_5_0

// 0x36	ANA_RXDCC_REG2		
typedef union {
	struct {
		uint8_t RXDCC_DLLCLK_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h20*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXDCC_REG2_t;
__xdata __at( 0xd8 ) volatile ANA_RXDCC_REG2_t ANA_RXDCC_REG2;
#define reg_RXDCC_DLLCLK_LANE_5_0  ANA_RXDCC_REG2.BF.RXDCC_DLLCLK_LANE_5_0

// 0x37	ANA_RXDCC_REG3		
typedef union {
	struct {
		uint8_t RXDCC_EOMCLK_LANE_5_0                    : 6;	/*  [5:0]     r/w 6'h20*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXDCC_REG3_t;
__xdata __at( 0xdc ) volatile ANA_RXDCC_REG3_t ANA_RXDCC_REG3;
#define reg_RXDCC_EOMCLK_LANE_5_0  ANA_RXDCC_REG3.BF.RXDCC_EOMCLK_LANE_5_0

// 0x38	ANA_RXREG_REG0		
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_CLK_LANE_2_0              : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXREG_REG0_t;
__xdata __at( 0xe0 ) volatile ANA_RXREG_REG0_t ANA_RXREG_REG0;
#define reg_RXREG_SPEEDTRK_CLK_LANE_2_0  ANA_RXREG_REG0.BF.RXREG_SPEEDTRK_CLK_LANE_2_0

// 0x39	ANA_RXREG_REG1		
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_LANE_2_0             : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXREG_REG1_t;
__xdata __at( 0xe4 ) volatile ANA_RXREG_REG1_t ANA_RXREG_REG1;
#define reg_RXREG_SPEEDTRK_DATA_LANE_2_0  ANA_RXREG_REG1.BF.RXREG_SPEEDTRK_DATA_LANE_2_0

// 0x3a	ANA_RXREG_REG2		
typedef union {
	struct {
		uint8_t RXSPEED_DIV_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_LANE             : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXREG_REG2_t;
__xdata __at( 0xe8 ) volatile ANA_RXREG_REG2_t ANA_RXREG_REG2;
#define reg_RXSPEED_DIV_LANE_2_0  ANA_RXREG_REG2.BF.RXSPEED_DIV_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_LANE  ANA_RXREG_REG2.BF.RXREG_SPEEDTRK_CLK_HALF_LANE

// 0x3b	ANA_SMPLR_REG4		
typedef union {
	struct {
		uint8_t SMPLR_CAL_EN_DLY_LANE                    : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_CAL_EN_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG4_t;
__xdata __at( 0xec ) volatile ANA_SMPLR_REG4_t ANA_SMPLR_REG4;
#define reg_SMPLR_CAL_EN_DLY_LANE  ANA_SMPLR_REG4.BF.SMPLR_CAL_EN_DLY_LANE
#define reg_SMPLR_CAL_EN_LANE  ANA_SMPLR_REG4.BF.SMPLR_CAL_EN_LANE

// 0x3c	ANA_SMPLR_REG5		
typedef union {
	struct {
		uint8_t SMPLR_CAL_SEL_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG5_t;
__xdata __at( 0xf0 ) volatile ANA_SMPLR_REG5_t ANA_SMPLR_REG5;
#define reg_SMPLR_CAL_SEL_LANE_3_0  ANA_SMPLR_REG5.BF.SMPLR_CAL_SEL_LANE_3_0

// 0x3d	ANA_SQ_REG0		
typedef union {
	struct {
		uint8_t SQ_AMPBW_LANE_1_0                        : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t SQ_CAL_PU_LANE                           : 1;	/*      2     r/w   0*/
		uint8_t SQ_LINEAR_DISABLE_LANE                   : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SQ_REG0_t;
__xdata __at( 0xf4 ) volatile ANA_SQ_REG0_t ANA_SQ_REG0;
#define reg_SQ_AMPBW_LANE_1_0  ANA_SQ_REG0.BF.SQ_AMPBW_LANE_1_0
#define reg_SQ_CAL_PU_LANE  ANA_SQ_REG0.BF.SQ_CAL_PU_LANE
#define reg_SQ_LINEAR_DISABLE_LANE  ANA_SQ_REG0.BF.SQ_LINEAR_DISABLE_LANE

// 0x3f	ANA_TXDCC_REG0		
typedef union {
	struct {
		uint8_t TXDCCCAL_EN_LANE                         : 1;	/*      0     r/w   0*/
		uint8_t TXDCC_HG_LANE                            : 1;	/*      1     r/w   0*/
		uint8_t TXDCC_EN_LANE                            : 1;	/*      2     r/w   1*/
		uint8_t TRXDCC_CAL_CLK100KHZ_LANE                : 1;	/*      3     r/w   0*/
		uint8_t SSC_CLK_EN_LANE                          : 1;	/*      4     r/w   0*/
		uint8_t SLEWRATE_EN_LANE                         : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDCC_REG0_t;
__xdata __at( 0xfc ) volatile ANA_TXDCC_REG0_t ANA_TXDCC_REG0;
#define reg_TXDCCCAL_EN_LANE  ANA_TXDCC_REG0.BF.TXDCCCAL_EN_LANE
#define reg_TXDCC_HG_LANE  ANA_TXDCC_REG0.BF.TXDCC_HG_LANE
#define reg_TXDCC_EN_LANE  ANA_TXDCC_REG0.BF.TXDCC_EN_LANE
#define reg_TRXDCC_CAL_CLK100KHZ_LANE  ANA_TXDCC_REG0.BF.TRXDCC_CAL_CLK100KHZ_LANE
#define reg_SSC_CLK_EN_LANE  ANA_TXDCC_REG0.BF.SSC_CLK_EN_LANE
#define reg_SLEWRATE_EN_LANE  ANA_TXDCC_REG0.BF.SLEWRATE_EN_LANE

// 0x40	ANA_TXDCC_REG1		
typedef union {
	struct {
		uint8_t TXDCC_CNT_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h20*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDCC_REG1_t;
__xdata __at( 0x100 ) volatile ANA_TXDCC_REG1_t ANA_TXDCC_REG1;
#define reg_TXDCC_CNT_LANE_5_0  ANA_TXDCC_REG1.BF.TXDCC_CNT_LANE_5_0

// 0x41	ANA_TXDCC_REG2		
typedef union {
	struct {
		uint8_t TRXDCCIN_SEL_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDCC_REG2_t;
__xdata __at( 0x104 ) volatile ANA_TXDCC_REG2_t ANA_TXDCC_REG2;
#define reg_TRXDCCIN_SEL_LANE_2_0  ANA_TXDCC_REG2.BF.TRXDCCIN_SEL_LANE_2_0

// 0x42	ANA_SLEW_REG0		
typedef union {
	struct {
		uint8_t SLEWCTRL1_LANE_1_0                       : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t SLEWCTRL0_LANE_1_0                       : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t SEL_EDGE_DLY_LANE_1_0                    : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t SEL_EDGE_EQ_LANE                         : 1;	/*      6     r/w   0*/
		uint8_t SLEW_NO_EM_LANE                          : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SLEW_REG0_t;
__xdata __at( 0x108 ) volatile ANA_SLEW_REG0_t ANA_SLEW_REG0;
#define reg_SLEWCTRL1_LANE_1_0  ANA_SLEW_REG0.BF.SLEWCTRL1_LANE_1_0
#define reg_SLEWCTRL0_LANE_1_0  ANA_SLEW_REG0.BF.SLEWCTRL0_LANE_1_0
#define reg_SEL_EDGE_DLY_LANE_1_0  ANA_SLEW_REG0.BF.SEL_EDGE_DLY_LANE_1_0
#define reg_SEL_EDGE_EQ_LANE  ANA_SLEW_REG0.BF.SEL_EDGE_EQ_LANE
#define reg_SLEW_NO_EM_LANE  ANA_SLEW_REG0.BF.SLEW_NO_EM_LANE

// 0x43	ANA_SQ_REG1		
typedef union {
	struct {
		uint8_t SQ_OFFSET_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SQ_REG1_t;
__xdata __at( 0x10c ) volatile ANA_SQ_REG1_t ANA_SQ_REG1;
#define reg_SQ_OFFSET_LANE_4_0  ANA_SQ_REG1.BF.SQ_OFFSET_LANE_4_0

// 0x44	ANA_SQ_REG2		
typedef union {
	struct {
		uint8_t SQ_THRIPTAT_LANE_1_0                     : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t SQ_THRESH_CAL_EN_LANE                    : 1;	/*      2     r/w   0*/
		uint8_t SQ_OFFSET_CAL_EN_LANE                    : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SQ_REG2_t;
__xdata __at( 0x110 ) volatile ANA_SQ_REG2_t ANA_SQ_REG2;
#define reg_SQ_THRIPTAT_LANE_1_0  ANA_SQ_REG2.BF.SQ_THRIPTAT_LANE_1_0
#define reg_SQ_THRESH_CAL_EN_LANE  ANA_SQ_REG2.BF.SQ_THRESH_CAL_EN_LANE
#define reg_SQ_OFFSET_CAL_EN_LANE  ANA_SQ_REG2.BF.SQ_OFFSET_CAL_EN_LANE

// 0x45	ANA_SQ_REG3		
typedef union {
	struct {
		uint8_t SQ_PKDETI_LANE_1_0                       : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t SQ_PKDETCAP_LANE_1_0                     : 2;	/*  [3:2]     r/w 2'h3*/
		uint8_t SQ_OFFSETCAL_SEL_LANE_1_0                : 2;	/*  [5:4]     r/w 2'h3*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SQ_REG3_t;
__xdata __at( 0x114 ) volatile ANA_SQ_REG3_t ANA_SQ_REG3;
#define reg_SQ_PKDETI_LANE_1_0  ANA_SQ_REG3.BF.SQ_PKDETI_LANE_1_0
#define reg_SQ_PKDETCAP_LANE_1_0  ANA_SQ_REG3.BF.SQ_PKDETCAP_LANE_1_0
#define reg_SQ_OFFSETCAL_SEL_LANE_1_0  ANA_SQ_REG3.BF.SQ_OFFSETCAL_SEL_LANE_1_0

// 0x46	ANA_SQ_REG4		
typedef union {
	struct {
		uint8_t SQ_REFTHR_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'h6*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SQ_REG4_t;
__xdata __at( 0x118 ) volatile ANA_SQ_REG4_t ANA_SQ_REG4;
#define reg_SQ_REFTHR_LANE_4_0  ANA_SQ_REG4.BF.SQ_REFTHR_LANE_4_0

// 0x47	ANA_SQ_REG5		
typedef union {
	struct {
		uint8_t SQ_THRESH_LANE_5_0                       : 6;	/*  [5:0]     r/w 6'h4*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SQ_REG5_t;
__xdata __at( 0x11c ) volatile ANA_SQ_REG5_t ANA_SQ_REG5;
#define reg_SQ_THRESH_LANE_5_0  ANA_SQ_REG5.BF.SQ_THRESH_LANE_5_0

// 0x48	ANA_MISC_REG3		
typedef union {
	struct {
		uint8_t TEST_LANE_8                              : 1;	/*      0     r/w   0*/
		uint8_t TXCLK_ALIGN_EN_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t TXCLK_2X_EN_LANE                         : 1;	/*      2     r/w   1*/
		uint8_t TSEN_SEL_LANE                            : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG3_t;
__xdata __at( 0x120 ) volatile ANA_MISC_REG3_t ANA_MISC_REG3;
#define reg_TEST_LANE_8  ANA_MISC_REG3.BF.TEST_LANE_8
#define reg_TXCLK_ALIGN_EN_LANE  ANA_MISC_REG3.BF.TXCLK_ALIGN_EN_LANE
#define reg_TXCLK_2X_EN_LANE  ANA_MISC_REG3.BF.TXCLK_2X_EN_LANE
#define reg_TSEN_SEL_LANE  ANA_MISC_REG3.BF.TSEN_SEL_LANE

// 0x49	ANA_TEST_REG0		
typedef union {
	struct {
		uint8_t TEST_LANE_7_0                            : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TEST_REG0_t;
__xdata __at( 0x124 ) volatile ANA_TEST_REG0_t ANA_TEST_REG0;
#define reg_TEST_LANE_7_0  ANA_TEST_REG0.BF.TEST_LANE_7_0

// 0x4a	ANA_TXDCC_REG3		
typedef union {
	struct {
		uint8_t TXDCCCAL_PDIV_CNT_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h20*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDCC_REG3_t;
__xdata __at( 0x128 ) volatile ANA_TXDCC_REG3_t ANA_TXDCC_REG3;
#define reg_TXDCCCAL_PDIV_CNT_LANE_5_0  ANA_TXDCC_REG3.BF.TXDCCCAL_PDIV_CNT_LANE_5_0

// 0x4b	ANA_TXIMP_REG0		
typedef union {
	struct {
		uint8_t TXIMPCAL_SIDE_LANE                       : 1;	/*      0     r/w   0*/
		uint8_t TXIMPCAL_EN_LANE                         : 1;	/*      1     r/w   0*/
		uint8_t TXIMPCAL_BOT_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t TXDCCCAL_PDIV_EN_LANE                    : 1;	/*      3     r/w   0*/
		uint8_t TXIMPCAL_SEL_LANE_1_0                    : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG0_t;
__xdata __at( 0x12c ) volatile ANA_TXIMP_REG0_t ANA_TXIMP_REG0;
#define reg_TXIMPCAL_SIDE_LANE  ANA_TXIMP_REG0.BF.TXIMPCAL_SIDE_LANE
#define reg_TXIMPCAL_EN_LANE  ANA_TXIMP_REG0.BF.TXIMPCAL_EN_LANE
#define reg_TXIMPCAL_BOT_LANE  ANA_TXIMP_REG0.BF.TXIMPCAL_BOT_LANE
#define reg_TXDCCCAL_PDIV_EN_LANE  ANA_TXIMP_REG0.BF.TXDCCCAL_PDIV_EN_LANE
#define reg_TXIMPCAL_SEL_LANE_1_0  ANA_TXIMP_REG0.BF.TXIMPCAL_SEL_LANE_1_0

// 0x4c	ANA_TXIMP_REG1		
typedef union {
	struct {
		uint8_t TXIMP_TUNEN_TOP_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h8*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG1_t;
__xdata __at( 0x130 ) volatile ANA_TXIMP_REG1_t ANA_TXIMP_REG1;
#define reg_TXIMP_TUNEN_TOP_LANE_5_0  ANA_TXIMP_REG1.BF.TXIMP_TUNEN_TOP_LANE_5_0

// 0x4d	ANA_TXIMP_REG2		
typedef union {
	struct {
		uint8_t TXIMP_TUNEP_TOP_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h37*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG2_t;
__xdata __at( 0x134 ) volatile ANA_TXIMP_REG2_t ANA_TXIMP_REG2;
#define reg_TXIMP_TUNEP_TOP_LANE_5_0  ANA_TXIMP_REG2.BF.TXIMP_TUNEP_TOP_LANE_5_0

// 0x4e	ANA_TXIMP_REG3		
typedef union {
	struct {
		uint8_t TXIMP_TUNEN_MID_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h8*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG3_t;
__xdata __at( 0x138 ) volatile ANA_TXIMP_REG3_t ANA_TXIMP_REG3;
#define reg_TXIMP_TUNEN_MID_LANE_5_0  ANA_TXIMP_REG3.BF.TXIMP_TUNEN_MID_LANE_5_0

// 0x4f	ANA_TXIMP_REG4		
typedef union {
	struct {
		uint8_t TXIMP_TUNEP_MID_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h37*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG4_t;
__xdata __at( 0x13c ) volatile ANA_TXIMP_REG4_t ANA_TXIMP_REG4;
#define reg_TXIMP_TUNEP_MID_LANE_5_0  ANA_TXIMP_REG4.BF.TXIMP_TUNEP_MID_LANE_5_0

// 0x50	ANA_TXIMP_REG5		
typedef union {
	struct {
		uint8_t TXIMP_TUNEN_BOT_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h8*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG5_t;
__xdata __at( 0x140 ) volatile ANA_TXIMP_REG5_t ANA_TXIMP_REG5;
#define reg_TXIMP_TUNEN_BOT_LANE_5_0  ANA_TXIMP_REG5.BF.TXIMP_TUNEN_BOT_LANE_5_0

// 0x51	ANA_TXIMP_REG6		
typedef union {
	struct {
		uint8_t TXIMP_TUNEP_BOT_LANE_5_0                 : 6;	/*  [5:0]     r/w 6'h37*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG6_t;
__xdata __at( 0x144 ) volatile ANA_TXIMP_REG6_t ANA_TXIMP_REG6;
#define reg_TXIMP_TUNEP_BOT_LANE_5_0  ANA_TXIMP_REG6.BF.TXIMP_TUNEP_BOT_LANE_5_0

// 0x52	ANA_SMPLR_REG6		
typedef union {
	struct {
		uint8_t VCM_SMPLR_GEN_CTRL_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG6_t;
__xdata __at( 0x148 ) volatile ANA_SMPLR_REG6_t ANA_SMPLR_REG6;
#define reg_VCM_SMPLR_GEN_CTRL_LANE_1_0  ANA_SMPLR_REG6.BF.VCM_SMPLR_GEN_CTRL_LANE_1_0

// 0x53	ANA_TXSPEED_REG0		
typedef union {
	struct {
		uint8_t TXSPEED_DIV_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXSPEED_REG0_t;
__xdata __at( 0x14c ) volatile ANA_TXSPEED_REG0_t ANA_TXSPEED_REG0;
#define reg_TXSPEED_DIV_LANE_2_0  ANA_TXSPEED_REG0.BF.TXSPEED_DIV_LANE_2_0

// 0x54	ANA_DFE_REG5		
typedef union {
	struct {
		uint8_t VICM_DFE_F3_CTRL_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t VICM_DFE_F11TO15_CTRL_LANE_1_0           : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t VREF_SHIFT_LANE_1_0                      : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG5_t;
__xdata __at( 0x150 ) volatile ANA_DFE_REG5_t ANA_DFE_REG5;
#define reg_VICM_DFE_F3_CTRL_LANE_1_0  ANA_DFE_REG5.BF.VICM_DFE_F3_CTRL_LANE_1_0
#define reg_VICM_DFE_F11TO15_CTRL_LANE_1_0  ANA_DFE_REG5.BF.VICM_DFE_F11TO15_CTRL_LANE_1_0
#define reg_VREF_SHIFT_LANE_1_0  ANA_DFE_REG5.BF.VREF_SHIFT_LANE_1_0

// 0x55	ANA_DFE_REG6		
typedef union {
	struct {
		uint8_t VICM_DFE_FLOAT_CTRL_LANE_1_0             : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t VICM_DFE_F8TO10_CTRL_LANE_1_0            : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t VICM_DFE_F5TO7_CTRL_LANE_1_0             : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t VICM_DFE_F4_CTRL_LANE_1_0                : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG6_t;
__xdata __at( 0x154 ) volatile ANA_DFE_REG6_t ANA_DFE_REG6;
#define reg_VICM_DFE_FLOAT_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_FLOAT_CTRL_LANE_1_0
#define reg_VICM_DFE_F8TO10_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F8TO10_CTRL_LANE_1_0
#define reg_VICM_DFE_F5TO7_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F5TO7_CTRL_LANE_1_0
#define reg_VICM_DFE_F4_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F4_CTRL_LANE_1_0

// 0x56	ANA_VDD_REG0		
typedef union {
	struct {
		uint8_t VDDA_RXINTP_HALF_EN_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t VDDA_RXDLL_HALF_EN_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t VDDA_RXCLK_HALF_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t VCM_SMPLR_SEL_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_VDD_REG0_t;
__xdata __at( 0x158 ) volatile ANA_VDD_REG0_t ANA_VDD_REG0;
#define reg_VDDA_RXINTP_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXINTP_HALF_EN_LANE
#define reg_VDDA_RXDLL_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXDLL_HALF_EN_LANE
#define reg_VDDA_RXCLK_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXCLK_HALF_EN_LANE
#define reg_VCM_SMPLR_SEL_LANE  ANA_VDD_REG0.BF.VCM_SMPLR_SEL_LANE

// 0x57	ANA_TXREG_REG0		
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_CLK_LANE_2_0              : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXREG_REG0_t;
__xdata __at( 0x15c ) volatile ANA_TXREG_REG0_t ANA_TXREG_REG0;
#define reg_TXREG_SPEEDTRK_CLK_LANE_2_0  ANA_TXREG_REG0.BF.TXREG_SPEEDTRK_CLK_LANE_2_0

// 0x58	ANA_TXREG_REG1		
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_LANE_2_0             : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXREG_REG1_t;
__xdata __at( 0x160 ) volatile ANA_TXREG_REG1_t ANA_TXREG_REG1;
#define reg_TXREG_SPEEDTRK_DATA_LANE_2_0  ANA_TXREG_REG1.BF.TXREG_SPEEDTRK_DATA_LANE_2_0

// 0x59	ANA_MISC_REG4		
typedef union {
	struct {
		uint8_t ACCAP_CLKDIV_SEL_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RXCK_SEL_LANE                            : 1;	/*      3     r/w   0*/
		uint8_t TXCK_SEL_LANE                            : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG4_t;
__xdata __at( 0x164 ) volatile ANA_MISC_REG4_t ANA_MISC_REG4;
#define reg_ACCAP_CLKDIV_SEL_LANE_2_0  ANA_MISC_REG4.BF.ACCAP_CLKDIV_SEL_LANE_2_0
#define reg_RXCK_SEL_LANE  ANA_MISC_REG4.BF.RXCK_SEL_LANE
#define reg_TXCK_SEL_LANE  ANA_MISC_REG4.BF.TXCK_SEL_LANE

// 0x5a	ANA_CTLE_REG9		
typedef union {
	struct {
		uint8_t CTLE_IPTAT_2NDO_LANE_1_0                 : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t CTLE_IPTAT_2NDE_LANE_1_0                 : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t CTLE_IPTAT_1ST_LANE_1_0                  : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t CTLE_COMP_DIG_EN_LANE                    : 1;	/*      6     r/w   0*/
		uint8_t CTLE_COMP_ANA_EN_LANE                    : 1;	/*      7     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG9_t;
__xdata __at( 0x168 ) volatile ANA_CTLE_REG9_t ANA_CTLE_REG9;
#define reg_CTLE_IPTAT_2NDO_LANE_1_0  ANA_CTLE_REG9.BF.CTLE_IPTAT_2NDO_LANE_1_0
#define reg_CTLE_IPTAT_2NDE_LANE_1_0  ANA_CTLE_REG9.BF.CTLE_IPTAT_2NDE_LANE_1_0
#define reg_CTLE_IPTAT_1ST_LANE_1_0  ANA_CTLE_REG9.BF.CTLE_IPTAT_1ST_LANE_1_0
#define reg_CTLE_COMP_DIG_EN_LANE  ANA_CTLE_REG9.BF.CTLE_COMP_DIG_EN_LANE
#define reg_CTLE_COMP_ANA_EN_LANE  ANA_CTLE_REG9.BF.CTLE_COMP_ANA_EN_LANE

// 0x5b	ANA_CTLE_REG10		
typedef union {
	struct {
		uint8_t CTLE_IPP_1ST_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG10_t;
__xdata __at( 0x16c ) volatile ANA_CTLE_REG10_t ANA_CTLE_REG10;
#define reg_CTLE_IPP_1ST_LANE_4_0  ANA_CTLE_REG10.BF.CTLE_IPP_1ST_LANE_4_0

// 0x5c	ANA_CTLE_REG11		
typedef union {
	struct {
		uint8_t CTLE_IPP_2NDE_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG11_t;
__xdata __at( 0x170 ) volatile ANA_CTLE_REG11_t ANA_CTLE_REG11;
#define reg_CTLE_IPP_2NDE_LANE_4_0  ANA_CTLE_REG11.BF.CTLE_IPP_2NDE_LANE_4_0

// 0x5d	ANA_CTLE_REG12		
typedef union {
	struct {
		uint8_t CTLE_IPP_2NDO_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG12_t;
__xdata __at( 0x174 ) volatile ANA_CTLE_REG12_t ANA_CTLE_REG12;
#define reg_CTLE_IPP_2NDO_LANE_4_0  ANA_CTLE_REG12.BF.CTLE_IPP_2NDO_LANE_4_0

// 0x5e	ANA_CTLE_REG13		
typedef union {
	struct {
		uint8_t CTLE_RL2_EXTRA_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t CTLE_RL1_EXTRA_LANE_1_0                  : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t CTLE_HPF_RSEL_LANE_1_0                   : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG13_t;
__xdata __at( 0x178 ) volatile ANA_CTLE_REG13_t ANA_CTLE_REG13;
#define reg_CTLE_RL2_EXTRA_LANE_1_0  ANA_CTLE_REG13.BF.CTLE_RL2_EXTRA_LANE_1_0
#define reg_CTLE_RL1_EXTRA_LANE_1_0  ANA_CTLE_REG13.BF.CTLE_RL1_EXTRA_LANE_1_0
#define reg_CTLE_HPF_RSEL_LANE_1_0  ANA_CTLE_REG13.BF.CTLE_HPF_RSEL_LANE_1_0

// 0x5f	ANA_AFIR_REG0		
typedef union {
	struct {
		uint8_t AFIR_CAP1P_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG0_t;
__xdata __at( 0x17c ) volatile ANA_AFIR_REG0_t ANA_AFIR_REG0;
#define reg_AFIR_CAP1P_LANE_4_0  ANA_AFIR_REG0.BF.AFIR_CAP1P_LANE_4_0

// 0x60	ANA_AFIR_REG1		
typedef union {
	struct {
		uint8_t AFIR_CAP1N_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG1_t;
__xdata __at( 0x180 ) volatile ANA_AFIR_REG1_t ANA_AFIR_REG1;
#define reg_AFIR_CAP1N_LANE_4_0  ANA_AFIR_REG1.BF.AFIR_CAP1N_LANE_4_0

// 0x61	ANA_AFIR_REG2		
typedef union {
	struct {
		uint8_t AFIR_CAP2P_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG2_t;
__xdata __at( 0x184 ) volatile ANA_AFIR_REG2_t ANA_AFIR_REG2;
#define reg_AFIR_CAP2P_LANE_4_0  ANA_AFIR_REG2.BF.AFIR_CAP2P_LANE_4_0

// 0x62	ANA_AFIR_REG3		
typedef union {
	struct {
		uint8_t AFIR_CAP2N_LANE_4_0                      : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG3_t;
__xdata __at( 0x188 ) volatile ANA_AFIR_REG3_t ANA_AFIR_REG3;
#define reg_AFIR_CAP2N_LANE_4_0  ANA_AFIR_REG3.BF.AFIR_CAP2N_LANE_4_0

// 0x63	ANA_AFIR_REG4		
typedef union {
	struct {
		uint8_t AFIR_VICM_LANE_2_0                       : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG4_t;
__xdata __at( 0x18c ) volatile ANA_AFIR_REG4_t ANA_AFIR_REG4;
#define reg_AFIR_VICM_LANE_2_0  ANA_AFIR_REG4.BF.AFIR_VICM_LANE_2_0

// 0x64	ANA_AFIR_REG5		
typedef union {
	struct {
		uint8_t AFIR_VSW_PRE_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG5_t;
__xdata __at( 0x190 ) volatile ANA_AFIR_REG5_t ANA_AFIR_REG5;
#define reg_AFIR_VSW_PRE_LANE_1_0  ANA_AFIR_REG5.BF.AFIR_VSW_PRE_LANE_1_0

// 0x65	ANA_AFIR_REG6		
typedef union {
	struct {
		uint8_t AFIR_VSW_POST_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG6_t;
__xdata __at( 0x194 ) volatile ANA_AFIR_REG6_t ANA_AFIR_REG6;
#define reg_AFIR_VSW_POST_LANE_3_0  ANA_AFIR_REG6.BF.AFIR_VSW_POST_LANE_3_0

// 0x66	ANA_AFIR_REG7		
typedef union {
	struct {
		uint8_t AFIR_GMI_LANE_3_0                        : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t PU_AFIR_LANE                             : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG7_t;
__xdata __at( 0x198 ) volatile ANA_AFIR_REG7_t ANA_AFIR_REG7;
#define reg_AFIR_GMI_LANE_3_0  ANA_AFIR_REG7.BF.AFIR_GMI_LANE_3_0
#define reg_PU_AFIR_LANE  ANA_AFIR_REG7.BF.PU_AFIR_LANE

// 0x67	ANA_AFIR_REG8		
typedef union {
	struct {
		uint8_t AFIR_VSW_MAIN_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG8_t;
__xdata __at( 0x19c ) volatile ANA_AFIR_REG8_t ANA_AFIR_REG8;
#define reg_AFIR_VSW_MAIN_LANE_2_0  ANA_AFIR_REG8.BF.AFIR_VSW_MAIN_LANE_2_0

// 0x68	ANA_AFIR_REG9		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG9_t;
__xdata __at( 0x1a0 ) volatile ANA_AFIR_REG9_t ANA_AFIR_REG9;

// 0x69	ANA_AFIR_REG10		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG10_t;
__xdata __at( 0x1a4 ) volatile ANA_AFIR_REG10_t ANA_AFIR_REG10;

// 0x7a	ANA_AFIR_REG11		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG11_t;
__xdata __at( 0x1e8 ) volatile ANA_AFIR_REG11_t ANA_AFIR_REG11;

// 0x7b	ANA_AFIR_REG12		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG12_t;
__xdata __at( 0x1ec ) volatile ANA_AFIR_REG12_t ANA_AFIR_REG12;

// 0x7c	ANA_TXDRV_REG		
typedef union {
	struct {
		uint8_t TXDRV_COMP_CURRENT_LANE_2_0              : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t TXDRV_COMP_EN_LANE                       : 1;	/*      3     r/w   1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDRV_REG_t;
__xdata __at( 0x1f0 ) volatile ANA_TXDRV_REG_t ANA_TXDRV_REG;
#define reg_TXDRV_COMP_CURRENT_LANE_2_0  ANA_TXDRV_REG.BF.TXDRV_COMP_CURRENT_LANE_2_0
#define reg_TXDRV_COMP_EN_LANE  ANA_TXDRV_REG.BF.TXDRV_COMP_EN_LANE

// 0x7d	ANA_CLKDIV_REG		
typedef union {
	struct {
		uint8_t TXCLK_DIV_RATIO_LANE_1_0                 : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RXCLK_DIV_RATIO_LANE_1_0                 : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t TXCLK_DIV_EN_LANE                        : 1;	/*      4     r/w   1*/
		uint8_t RXCLK_DIV_EN_LANE                        : 1;	/*      5     r/w   1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CLKDIV_REG_t;
__xdata __at( 0x1f4 ) volatile ANA_CLKDIV_REG_t ANA_CLKDIV_REG;
#define reg_TXCLK_DIV_RATIO_LANE_1_0  ANA_CLKDIV_REG.BF.TXCLK_DIV_RATIO_LANE_1_0
#define reg_RXCLK_DIV_RATIO_LANE_1_0  ANA_CLKDIV_REG.BF.RXCLK_DIV_RATIO_LANE_1_0
#define reg_TXCLK_DIV_EN_LANE  ANA_CLKDIV_REG.BF.TXCLK_DIV_EN_LANE
#define reg_RXCLK_DIV_EN_LANE  ANA_CLKDIV_REG.BF.RXCLK_DIV_EN_LANE

// 0x7e	ANA_LOOPBACK_REG		
typedef union {
	struct {
		uint8_t LB_RES_SEL_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'hc*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_LOOPBACK_REG_t;
__xdata __at( 0x1f8 ) volatile ANA_LOOPBACK_REG_t ANA_LOOPBACK_REG;
#define reg_LB_RES_SEL_LANE_3_0  ANA_LOOPBACK_REG.BF.LB_RES_SEL_LANE_3_0

#endif
