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
__xdata __at( 0x1000 ) volatile ANA_TRX_MISC0_t ANA_TRX_MISC0;
#define reg_ACCAP_CLK_SEL_LANE_1_0  ANA_TRX_MISC0.BF.ACCAP_CLK_SEL_LANE_1_0
#define reg_CLKFW_LANE  ANA_TRX_MISC0.BF.CLKFW_LANE
#define reg_ACCAP_RFTIME_SEL_LANE_2_0  ANA_TRX_MISC0.BF.ACCAP_RFTIME_SEL_LANE_2_0
#define reg_ACCAP_DISABLE_RIGHT_LANE  ANA_TRX_MISC0.BF.ACCAP_DISABLE_RIGHT_LANE
#define reg_ACCAP_DISABLE_LEFT_LANE  ANA_TRX_MISC0.BF.ACCAP_DISABLE_LEFT_LANE

// 0x1	ANA_TRX_MISC1		
typedef union {
	struct {
		uint8_t ACCAP_CLKDIV_SEL_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TRX_MISC1_t;
__xdata __at( 0x1004 ) volatile ANA_TRX_MISC1_t ANA_TRX_MISC1;
#define reg_ACCAP_CLKDIV_SEL_LANE_2_0  ANA_TRX_MISC1.BF.ACCAP_CLKDIV_SEL_LANE_2_0

// 0x2	ANA_ALIGN90_REG1		
typedef union {
	struct {
		uint8_t ALIGN90_REF_FILT_BW_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t ALIGN90_VCAP_LANE_1_0                    : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_ALIGN90_REG1_t;
__xdata __at( 0x1008 ) volatile ANA_ALIGN90_REG1_t ANA_ALIGN90_REG1;
#define reg_ALIGN90_REF_FILT_BW_LANE  ANA_ALIGN90_REG1.BF.ALIGN90_REF_FILT_BW_LANE
#define reg_ALIGN90_VCAP_LANE_1_0  ANA_ALIGN90_REG1.BF.ALIGN90_VCAP_LANE_1_0

// 0x3	ANA_RSVD_REG0		
typedef union {
	struct {
		uint8_t ANA_RSVD0_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG0_t;
__xdata __at( 0x100c ) volatile ANA_RSVD_REG0_t ANA_RSVD_REG0;
#define reg_ANA_RSVD0_LANE_7_0  ANA_RSVD_REG0.BF.ANA_RSVD0_LANE_7_0

// 0x4	ANA_RSVD_REG1		
typedef union {
	struct {
		uint8_t ANA_RSVD1_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG1_t;
__xdata __at( 0x1010 ) volatile ANA_RSVD_REG1_t ANA_RSVD_REG1;
#define reg_ANA_RSVD1_LANE_7_0  ANA_RSVD_REG1.BF.ANA_RSVD1_LANE_7_0

// 0x5	ANA_RSVD_REG2		
typedef union {
	struct {
		uint8_t ANA_RSVD2_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG2_t;
__xdata __at( 0x1014 ) volatile ANA_RSVD_REG2_t ANA_RSVD_REG2;
#define reg_ANA_RSVD2_LANE_7_0  ANA_RSVD_REG2.BF.ANA_RSVD2_LANE_7_0

// 0x6	ANA_RSVD_REG3		
typedef union {
	struct {
		uint8_t ANA_RSVD3_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG3_t;
__xdata __at( 0x1018 ) volatile ANA_RSVD_REG3_t ANA_RSVD_REG3;
#define reg_ANA_RSVD3_LANE_7_0  ANA_RSVD_REG3.BF.ANA_RSVD3_LANE_7_0

// 0x7	ANA_CDRPATTERN_REG		
typedef union {
	struct {
		uint8_t CDR_PATTERN_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t CDR_PATTERN_INDEX_LANE_1_0               : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CDRPATTERN_REG_t;
__xdata __at( 0x101c ) volatile ANA_CDRPATTERN_REG_t ANA_CDRPATTERN_REG;
#define reg_CDR_PATTERN_LANE_3_0  ANA_CDRPATTERN_REG.BF.CDR_PATTERN_LANE_3_0
#define reg_CDR_PATTERN_INDEX_LANE_1_0  ANA_CDRPATTERN_REG.BF.CDR_PATTERN_INDEX_LANE_1_0

// 0x8	ANA_DLL_REG		
typedef union {
	struct {
		uint8_t DLL_CAP_SEL_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 3;	/*  [5:3]     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DLL_REG_t;
__xdata __at( 0x1020 ) volatile ANA_DLL_REG_t ANA_DLL_REG;
#define reg_DLL_CAP_SEL_LANE_2_0  ANA_DLL_REG.BF.DLL_CAP_SEL_LANE_2_0

// 0x9	ANA_CLK_CTRL_REG0		
typedef union {
	struct {
		uint8_t CLK_DET_EN_LANE                          : 1;	/*      0     r/w   1*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CLK_CTRL_REG0_t;
__xdata __at( 0x1024 ) volatile ANA_CLK_CTRL_REG0_t ANA_CLK_CTRL_REG0;
#define reg_CLK_DET_EN_LANE  ANA_CLK_CTRL_REG0.BF.CLK_DET_EN_LANE

// 0xa	ANA_CTLE_REG9		
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
__xdata __at( 0x1028 ) volatile ANA_CTLE_REG9_t ANA_CTLE_REG9;
#define reg_CTLE_IPTAT_2NDO_LANE_1_0  ANA_CTLE_REG9.BF.CTLE_IPTAT_2NDO_LANE_1_0
#define reg_CTLE_IPTAT_2NDE_LANE_1_0  ANA_CTLE_REG9.BF.CTLE_IPTAT_2NDE_LANE_1_0
#define reg_CTLE_IPTAT_1ST_LANE_1_0  ANA_CTLE_REG9.BF.CTLE_IPTAT_1ST_LANE_1_0
#define reg_CTLE_COMP_DIG_EN_LANE  ANA_CTLE_REG9.BF.CTLE_COMP_DIG_EN_LANE
#define reg_CTLE_COMP_ANA_EN_LANE  ANA_CTLE_REG9.BF.CTLE_COMP_ANA_EN_LANE

// 0xb	ANA_CTLE_REG10		
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
__xdata __at( 0x102c ) volatile ANA_CTLE_REG10_t ANA_CTLE_REG10;
#define reg_CTLE_IPP_1ST_LANE_4_0  ANA_CTLE_REG10.BF.CTLE_IPP_1ST_LANE_4_0

// 0xc	ANA_CTLE_REG11		
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
__xdata __at( 0x1030 ) volatile ANA_CTLE_REG11_t ANA_CTLE_REG11;
#define reg_CTLE_IPP_2NDE_LANE_4_0  ANA_CTLE_REG11.BF.CTLE_IPP_2NDE_LANE_4_0

// 0xd	ANA_CTLE_REG12		
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
__xdata __at( 0x1034 ) volatile ANA_CTLE_REG12_t ANA_CTLE_REG12;
#define reg_CTLE_IPP_2NDO_LANE_4_0  ANA_CTLE_REG12.BF.CTLE_IPP_2NDO_LANE_4_0

// 0xe	ANA_CTLE_REG13		
typedef union {
	struct {
		uint8_t CTLE_RL1_EXTRA_LANE_2_0                  : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t CTLE_HPF_RSEL_LANE_1_0                   : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG13_t;
__xdata __at( 0x1038 ) volatile ANA_CTLE_REG13_t ANA_CTLE_REG13;
#define reg_CTLE_RL1_EXTRA_LANE_2_0  ANA_CTLE_REG13.BF.CTLE_RL1_EXTRA_LANE_2_0
#define reg_CTLE_HPF_RSEL_LANE_1_0  ANA_CTLE_REG13.BF.CTLE_HPF_RSEL_LANE_1_0

// 0xf	ANA_RSVD_REG9		
typedef union {
	struct {
		uint8_t CTLE_CL1_SEL_LANE_1_0                    : 2;	/*  [1:0]     r/w   0*/
		uint8_t CTLE_CL2_SEL_LANE_1_0                    : 2;	/*  [3:2]     r/w   0*/
		uint8_t RESERVED_4                               : 2;	/*  [5:4]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RSVD_REG9_t;
__xdata __at( 0x103c ) volatile ANA_RSVD_REG9_t ANA_RSVD_REG9;
#define reg_CTLE_CL1_SEL_LANE_1_0  ANA_RSVD_REG9.BF.CTLE_CL1_SEL_LANE_1_0
#define reg_CTLE_CL2_SEL_LANE_1_0  ANA_RSVD_REG9.BF.CTLE_CL2_SEL_LANE_1_0

// 0x10	ANA_CLK_CTRL_REG1		
typedef union {
	struct {
		uint8_t CTLE_VICM2_LANE_1_0                      : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t CTLE_VICM1_LANE_1_0                      : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t CTLE_CS1_MID_LANE_1_0                    : 2;	/*  [5:4]     r/w   0*/
		uint8_t CTLE_RS1_MID_LANE_1_0                    : 2;	/*  [7:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CLK_CTRL_REG1_t;
__xdata __at( 0x1040 ) volatile ANA_CLK_CTRL_REG1_t ANA_CLK_CTRL_REG1;
#define reg_CTLE_VICM2_LANE_1_0  ANA_CLK_CTRL_REG1.BF.CTLE_VICM2_LANE_1_0
#define reg_CTLE_VICM1_LANE_1_0  ANA_CLK_CTRL_REG1.BF.CTLE_VICM1_LANE_1_0
#define reg_CTLE_CS1_MID_LANE_1_0  ANA_CLK_CTRL_REG1.BF.CTLE_CS1_MID_LANE_1_0
#define reg_CTLE_RS1_MID_LANE_1_0  ANA_CLK_CTRL_REG1.BF.CTLE_RS1_MID_LANE_1_0

// 0x11	ANA_CTLE_REG0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RESERVED_2                               : 2;	/*  [3:2]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_LANE_1_0                 : 2;	/*  [6:5]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG0_t;
__xdata __at( 0x1044 ) volatile ANA_CTLE_REG0_t ANA_CTLE_REG0;
#define reg_CTLE_BYPASS2_EN_LANE  ANA_CTLE_REG0.BF.CTLE_BYPASS2_EN_LANE
#define reg_CTLE_BYPASS1_EN_LANE_1_0  ANA_CTLE_REG0.BF.CTLE_BYPASS1_EN_LANE_1_0

// 0x12	ANA_CTLE_REG1		
typedef union {
	struct {
		uint8_t CTLE_CAP1_SEL_G_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG1_t;
__xdata __at( 0x1048 ) volatile ANA_CTLE_REG1_t ANA_CTLE_REG1;
#define reg_CTLE_CAP1_SEL_G_LANE_3_0  ANA_CTLE_REG1.BF.CTLE_CAP1_SEL_G_LANE_3_0

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
__xdata __at( 0x104c ) volatile ANA_CTLE_REG2_t ANA_CTLE_REG2;
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
__xdata __at( 0x1050 ) volatile ANA_CTLE_REG3_t ANA_CTLE_REG3;
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
__xdata __at( 0x1054 ) volatile ANA_CTLE_REG4_t ANA_CTLE_REG4;
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
__xdata __at( 0x1058 ) volatile ANA_CTLE_REG5_t ANA_CTLE_REG5;
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
__xdata __at( 0x105c ) volatile ANA_CTLE_REG6_t ANA_CTLE_REG6;
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
__xdata __at( 0x1060 ) volatile ANA_CTLE_REG7_t ANA_CTLE_REG7;
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
__xdata __at( 0x1064 ) volatile ANA_CTLE_REG8_t ANA_CTLE_REG8;
#define reg_CTLE_RL2_SEL_LANE_3_0  ANA_CTLE_REG8.BF.CTLE_RL2_SEL_LANE_3_0

// 0x1a	ANA_DFE_REG0		
typedef union {
	struct {
		uint8_t DFE_CLK_DLY_LANE_1_0                     : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DEMUX2_SYNC_EN_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t DFE_F0_RES_DOUBLE_LANE                   : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG0_t;
__xdata __at( 0x1068 ) volatile ANA_DFE_REG0_t ANA_DFE_REG0;
#define reg_DFE_CLK_DLY_LANE_1_0  ANA_DFE_REG0.BF.DFE_CLK_DLY_LANE_1_0
#define reg_DEMUX2_SYNC_EN_LANE  ANA_DFE_REG0.BF.DEMUX2_SYNC_EN_LANE
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
__xdata __at( 0x106c ) volatile ANA_DFE_REG1_t ANA_DFE_REG1;
#define reg_DFE_RES_F1P5_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_F1P5_LANE_1_0
#define reg_DFE_RES_F1_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_F1_LANE_1_0
#define reg_DFE_RES_F0_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_F0_LANE_1_0
#define reg_DFE_RES_DOUBLE_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_DOUBLE_LANE_1_0

// 0x1c	ANA_DFE_REG2		
typedef union {
	struct {
		uint8_t DFE_RES_FLOATING_LANE                    : 1;	/*      0     r/w   0*/
		uint8_t DFE_RES_F11TO15_LANE                     : 1;	/*      1     r/w   0*/
		uint8_t DFE_RES_F8TO10_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t DFE_RES_F567_LANE                        : 1;	/*      3     r/w   0*/
		uint8_t DFE_RES_F34_LANE                         : 1;	/*      4     r/w   0*/
		uint8_t DFE_RES_F2_LANE_1_0                      : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG2_t;
__xdata __at( 0x1070 ) volatile ANA_DFE_REG2_t ANA_DFE_REG2;
#define reg_DFE_RES_FLOATING_LANE  ANA_DFE_REG2.BF.DFE_RES_FLOATING_LANE
#define reg_DFE_RES_F11TO15_LANE  ANA_DFE_REG2.BF.DFE_RES_F11TO15_LANE
#define reg_DFE_RES_F8TO10_LANE  ANA_DFE_REG2.BF.DFE_RES_F8TO10_LANE
#define reg_DFE_RES_F567_LANE  ANA_DFE_REG2.BF.DFE_RES_F567_LANE
#define reg_DFE_RES_F34_LANE  ANA_DFE_REG2.BF.DFE_RES_F34_LANE
#define reg_DFE_RES_F2_LANE_1_0  ANA_DFE_REG2.BF.DFE_RES_F2_LANE_1_0

// 0x1d	ANA_DFE_REG3		
typedef union {
	struct {
		uint8_t DFE_RES_VREF_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG3_t;
__xdata __at( 0x1074 ) volatile ANA_DFE_REG3_t ANA_DFE_REG3;
#define reg_DFE_RES_VREF_LANE_1_0  ANA_DFE_REG3.BF.DFE_RES_VREF_LANE_1_0

// 0x1e	ANA_DLL_REG0		
typedef union {
	struct {
		uint8_t DLL_REF_FILT_BW_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t DLL_HI_BW_LANE                           : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DLL_REG0_t;
__xdata __at( 0x1078 ) volatile ANA_DLL_REG0_t ANA_DLL_REG0;
#define reg_DLL_REF_FILT_BW_LANE  ANA_DLL_REG0.BF.DLL_REF_FILT_BW_LANE
#define reg_DLL_HI_BW_LANE  ANA_DLL_REG0.BF.DLL_HI_BW_LANE

// 0x1f	ANA_DLL_REG1		
typedef union {
	struct {
		uint8_t EOM_DLL_CAP_SEL_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DLL_REG1_t;
__xdata __at( 0x107c ) volatile ANA_DLL_REG1_t ANA_DLL_REG1;
#define reg_EOM_DLL_CAP_SEL_LANE_2_0  ANA_DLL_REG1.BF.EOM_DLL_CAP_SEL_LANE_2_0

// 0x20	ANA_DLL_REG2		
typedef union {
	struct {
		uint8_t DPHERCK_DLY_SEL_LANE_1_0                 : 2;	/*  [1:0]     r/w 2'h1*/
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
__xdata __at( 0x1080 ) volatile ANA_DLL_REG2_t ANA_DLL_REG2;
#define reg_DPHERCK_DLY_SEL_LANE_1_0  ANA_DLL_REG2.BF.DPHERCK_DLY_SEL_LANE_1_0

// 0x21	ANA_DTL_REG3		
typedef union {
	struct {
		uint8_t DTL_CLK_SPEEDUP_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 2;	/*  [4:3]     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DTL_REG3_t;
__xdata __at( 0x1084 ) volatile ANA_DTL_REG3_t ANA_DTL_REG3;
#define reg_DTL_CLK_SPEEDUP_LANE_2_0  ANA_DTL_REG3.BF.DTL_CLK_SPEEDUP_LANE_2_0

// 0x22	ANA_DTL_REG0		
typedef union {
	struct {
		uint8_t EN_DFE_F1TO2_LANE                        : 1;	/*      0     r/w   1*/
		uint8_t EN_DFE_F1P5_LANE                         : 1;	/*      1     r/w   1*/
		uint8_t EN_DFE_F11TO15_LANE                      : 1;	/*      2     r/w   1*/
		uint8_t EN_DFE_F0_LANE                           : 1;	/*      3     r/w   1*/
		uint8_t EN_CTLE_MID_FREQ_LANE                    : 1;	/*      4     r/w   0*/
		uint8_t F0_DC_SHIFT_LANE_1_0                     : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DTL_REG0_t;
__xdata __at( 0x1088 ) volatile ANA_DTL_REG0_t ANA_DTL_REG0;
#define reg_EN_DFE_F1TO2_LANE  ANA_DTL_REG0.BF.EN_DFE_F1TO2_LANE
#define reg_EN_DFE_F1P5_LANE  ANA_DTL_REG0.BF.EN_DFE_F1P5_LANE
#define reg_EN_DFE_F11TO15_LANE  ANA_DTL_REG0.BF.EN_DFE_F11TO15_LANE
#define reg_EN_DFE_F0_LANE  ANA_DTL_REG0.BF.EN_DFE_F0_LANE
#define reg_EN_CTLE_MID_FREQ_LANE  ANA_DTL_REG0.BF.EN_CTLE_MID_FREQ_LANE
#define reg_F0_DC_SHIFT_LANE_1_0  ANA_DTL_REG0.BF.F0_DC_SHIFT_LANE_1_0

// 0x23	ANA_DFE_REG4		
typedef union {
	struct {
		uint8_t EN_F0_S_LANE                             : 1;	/*      0     r/w   1*/
		uint8_t EN_F0_D_LANE                             : 1;	/*      1     r/w   1*/
		uint8_t EN_DFE_VREF_LANE                         : 1;	/*      2     r/w   1*/
		uint8_t EN_DFE_FLOATING_LANE                     : 1;	/*      3     r/w   1*/
		uint8_t EN_DFE_F8TO10_LANE                       : 1;	/*      4     r/w   1*/
		uint8_t EN_DFE_F3TO7_LANE                        : 1;	/*      5     r/w   1*/
		uint8_t F1P5_DC_SHIFT_LANE_1_0                   : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG4_t;
__xdata __at( 0x108c ) volatile ANA_DFE_REG4_t ANA_DFE_REG4;
#define reg_EN_F0_S_LANE  ANA_DFE_REG4.BF.EN_F0_S_LANE
#define reg_EN_F0_D_LANE  ANA_DFE_REG4.BF.EN_F0_D_LANE
#define reg_EN_DFE_VREF_LANE  ANA_DFE_REG4.BF.EN_DFE_VREF_LANE
#define reg_EN_DFE_FLOATING_LANE  ANA_DFE_REG4.BF.EN_DFE_FLOATING_LANE
#define reg_EN_DFE_F8TO10_LANE  ANA_DFE_REG4.BF.EN_DFE_F8TO10_LANE
#define reg_EN_DFE_F3TO7_LANE  ANA_DFE_REG4.BF.EN_DFE_F3TO7_LANE
#define reg_F1P5_DC_SHIFT_LANE_1_0  ANA_DFE_REG4.BF.F1P5_DC_SHIFT_LANE_1_0

// 0x24	ANA_EOM_REG0		
typedef union {
	struct {
		uint8_t EOM_DLL_REF_FILT_BW_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t EOM_RESET_INTP_EXT_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t EOM_DPHERCK_DLY_SEL_LANE_1_0             : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t EOM_CLK_EN_LANE                          : 1;	/*      4     r/w   0*/
		uint8_t EOM_DCCEN_LANE                           : 1;	/*      5     r/w   1*/
		uint8_t F1_DC_SHIFT_LANE_1_0                     : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG0_t;
__xdata __at( 0x1090 ) volatile ANA_EOM_REG0_t ANA_EOM_REG0;
#define reg_EOM_DLL_REF_FILT_BW_LANE  ANA_EOM_REG0.BF.EOM_DLL_REF_FILT_BW_LANE
#define reg_EOM_RESET_INTP_EXT_LANE  ANA_EOM_REG0.BF.EOM_RESET_INTP_EXT_LANE
#define reg_EOM_DPHERCK_DLY_SEL_LANE_1_0  ANA_EOM_REG0.BF.EOM_DPHERCK_DLY_SEL_LANE_1_0
#define reg_EOM_CLK_EN_LANE  ANA_EOM_REG0.BF.EOM_CLK_EN_LANE
#define reg_EOM_DCCEN_LANE  ANA_EOM_REG0.BF.EOM_DCCEN_LANE
#define reg_F1_DC_SHIFT_LANE_1_0  ANA_EOM_REG0.BF.F1_DC_SHIFT_LANE_1_0

// 0x25	ANA_EOM_REG1		
typedef union {
	struct {
		uint8_t EOM_DPHERCK_SEL_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t EOM_DPHERCK_LANE                         : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t EOM_DLL_HI_BW_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t OFST_DC_SHIFT_LANE_1_0                   : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t F2_DC_SHIFT_LANE_1_0                     : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG1_t;
__xdata __at( 0x1094 ) volatile ANA_EOM_REG1_t ANA_EOM_REG1;
#define reg_EOM_DPHERCK_SEL_LANE  ANA_EOM_REG1.BF.EOM_DPHERCK_SEL_LANE
#define reg_EOM_DPHERCK_LANE  ANA_EOM_REG1.BF.EOM_DPHERCK_LANE
#define reg_EOM_DLL_HI_BW_LANE  ANA_EOM_REG1.BF.EOM_DLL_HI_BW_LANE
#define reg_OFST_DC_SHIFT_LANE_1_0  ANA_EOM_REG1.BF.OFST_DC_SHIFT_LANE_1_0
#define reg_F2_DC_SHIFT_LANE_1_0  ANA_EOM_REG1.BF.F2_DC_SHIFT_LANE_1_0

// 0x26	ANA_EOM_REG2		
typedef union {
	struct {
		uint8_t EOM_INTP_BIAS_SHORT_EN_LANE              : 1;	/*      0     r/w   0*/
		uint8_t EOM_EN_S_LANE                            : 1;	/*      1     r/w   0*/
		uint8_t EOM_EN_E_LANE                            : 1;	/*      2     r/w   0*/
		uint8_t EOM_EN_D_LANE                            : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG2_t;
__xdata __at( 0x1098 ) volatile ANA_EOM_REG2_t ANA_EOM_REG2;
#define reg_EOM_INTP_BIAS_SHORT_EN_LANE  ANA_EOM_REG2.BF.EOM_INTP_BIAS_SHORT_EN_LANE
#define reg_EOM_EN_S_LANE  ANA_EOM_REG2.BF.EOM_EN_S_LANE
#define reg_EOM_EN_E_LANE  ANA_EOM_REG2.BF.EOM_EN_E_LANE
#define reg_EOM_EN_D_LANE  ANA_EOM_REG2.BF.EOM_EN_D_LANE

// 0x27	ANA_EOM_REG3		
typedef union {
	struct {
		uint8_t RXPLL_HI_SPEED_LANE                      : 1;	/*      0     r/w   1*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG3_t;
__xdata __at( 0x109c ) volatile ANA_EOM_REG3_t ANA_EOM_REG3;
#define reg_RXPLL_HI_SPEED_LANE  ANA_EOM_REG3.BF.RXPLL_HI_SPEED_LANE

// 0x28	ANA_EOM_REG4		
typedef union {
	struct {
		uint8_t TXPLL_HI_SPEED_LANE                      : 1;	/*      0     r/w   1*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG4_t;
__xdata __at( 0x10a0 ) volatile ANA_EOM_REG4_t ANA_EOM_REG4;
#define reg_TXPLL_HI_SPEED_LANE  ANA_EOM_REG4.BF.TXPLL_HI_SPEED_LANE

// 0x29	ANA_EOM_REG5		
typedef union {
	struct {
		uint8_t HPF_BW_LANE_1_0                          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG5_t;
__xdata __at( 0x10a4 ) volatile ANA_EOM_REG5_t ANA_EOM_REG5;
#define reg_HPF_BW_LANE_1_0  ANA_EOM_REG5.BF.HPF_BW_LANE_1_0

// 0x2a	ANA_IMPCAL_REG0		
typedef union {
	struct {
		uint8_t INTPR_LANE_1_0                           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PATH_DISABLE_EDGE_LANE                   : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_IMPCAL_REG0_t;
__xdata __at( 0x10a8 ) volatile ANA_IMPCAL_REG0_t ANA_IMPCAL_REG0;
#define reg_INTPR_LANE_1_0  ANA_IMPCAL_REG0.BF.INTPR_LANE_1_0
#define reg_PATH_DISABLE_EDGE_LANE  ANA_IMPCAL_REG0.BF.PATH_DISABLE_EDGE_LANE

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
__xdata __at( 0x10ac ) volatile ANA_IMPCAL_REG1_t ANA_IMPCAL_REG1;
#define reg_IMPCAL_RX_LANE_4_0  ANA_IMPCAL_REG1.BF.IMPCAL_RX_LANE_4_0

// 0x2c	ANA_INTPI_REG0		
typedef union {
	struct {
		uint8_t RXINTPI_LANE_3_0                         : 4;	/*  [3:0]     r/w 4'hb*/
		uint8_t RXINTPI_LOW_LANE_3_0                     : 4;	/*  [7:4]     r/w 4'hb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_INTPI_REG0_t;
__xdata __at( 0x10b0 ) volatile ANA_INTPI_REG0_t ANA_INTPI_REG0;
#define reg_RXINTPI_LANE_3_0  ANA_INTPI_REG0.BF.RXINTPI_LANE_3_0
#define reg_RXINTPI_LOW_LANE_3_0  ANA_INTPI_REG0.BF.RXINTPI_LOW_LANE_3_0

// 0x2d	ANA_INTPR_REG0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t IPTAT_I50U_X0P875_EN_LANE                : 1;	/*      1     r/w   0*/
		uint8_t INTP_BIAS_SHORT_EN_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t LB_RES_SEL_LANE_3_0                      : 4;	/*  [6:3]     r/w 4'hc*/
		uint8_t OFST_RES_LANE                            : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_INTPR_REG0_t;
__xdata __at( 0x10b4 ) volatile ANA_INTPR_REG0_t ANA_INTPR_REG0;
#define reg_IPTAT_I50U_X0P875_EN_LANE  ANA_INTPR_REG0.BF.IPTAT_I50U_X0P875_EN_LANE
#define reg_INTP_BIAS_SHORT_EN_LANE  ANA_INTPR_REG0.BF.INTP_BIAS_SHORT_EN_LANE
#define reg_LB_RES_SEL_LANE_3_0  ANA_INTPR_REG0.BF.LB_RES_SEL_LANE_3_0
#define reg_OFST_RES_LANE  ANA_INTPR_REG0.BF.OFST_RES_LANE

// 0x2e	ANA_MISC_REG1		
typedef union {
	struct {
		uint8_t PU_VCM_LANE                              : 1;	/*      0     r/w   1*/
		uint8_t PU_OS_LANE                               : 1;	/*      1     r/w   1*/
		uint8_t PU_ALIGN90_DCC_CMP_LANE                  : 1;	/*      2     r/w   1*/
		uint8_t PU_LB_LANE                               : 1;	/*      3     r/w   0*/
		uint8_t PI_DCCEN_LANE                            : 1;	/*      4     r/w   1*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t PAM2_F5FF6_FULLRANGE_LANE                : 1;	/*      6     r/w   0*/
		uint8_t PU_EOM_ALIGN90_DCC_CMP_LANE              : 1;	/*      7     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG1_t;
__xdata __at( 0x10b8 ) volatile ANA_MISC_REG1_t ANA_MISC_REG1;
#define reg_PU_VCM_LANE  ANA_MISC_REG1.BF.PU_VCM_LANE
#define reg_PU_OS_LANE  ANA_MISC_REG1.BF.PU_OS_LANE
#define reg_PU_ALIGN90_DCC_CMP_LANE  ANA_MISC_REG1.BF.PU_ALIGN90_DCC_CMP_LANE
#define reg_PU_LB_LANE  ANA_MISC_REG1.BF.PU_LB_LANE
#define reg_PI_DCCEN_LANE  ANA_MISC_REG1.BF.PI_DCCEN_LANE
#define reg_PAM2_F5FF6_FULLRANGE_LANE  ANA_MISC_REG1.BF.PAM2_F5FF6_FULLRANGE_LANE
#define reg_PU_EOM_ALIGN90_DCC_CMP_LANE  ANA_MISC_REG1.BF.PU_EOM_ALIGN90_DCC_CMP_LANE

// 0x2f	ANA_MISC_REG2		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESET_INTP_EXT_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t REG_SQ_PLOOP_OFF_LANE                    : 1;	/*      3     r/w   1*/
		uint8_t REG_SQ_DET_LANE                          : 1;	/*      4     r/w   1*/
		uint8_t REG_FLOOP_EN_LANE                        : 1;	/*      5     r/w   1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG2_t;
__xdata __at( 0x10bc ) volatile ANA_MISC_REG2_t ANA_MISC_REG2;
#define reg_RESET_INTP_EXT_LANE  ANA_MISC_REG2.BF.RESET_INTP_EXT_LANE
#define reg_REG_SQ_PLOOP_OFF_LANE  ANA_MISC_REG2.BF.REG_SQ_PLOOP_OFF_LANE
#define reg_REG_SQ_DET_LANE  ANA_MISC_REG2.BF.REG_SQ_DET_LANE
#define reg_REG_FLOOP_EN_LANE  ANA_MISC_REG2.BF.REG_FLOOP_EN_LANE

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
__xdata __at( 0x10c0 ) volatile ANA_SMPLR_REG0_t ANA_SMPLR_REG0;
#define reg_PU_SMPLR_D_O_LANE_2_0  ANA_SMPLR_REG0.BF.PU_SMPLR_D_O_LANE_2_0
#define reg_PU_SMPLR_D_E_LANE_2_0  ANA_SMPLR_REG0.BF.PU_SMPLR_D_E_LANE_2_0

// 0x31	ANA_SMPLR_REG1		
typedef union {
	struct {
		uint8_t REG_SELMUPF_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG1_t;
__xdata __at( 0x10c4 ) volatile ANA_SMPLR_REG1_t ANA_SMPLR_REG1;
#define reg_REG_SELMUPF_LANE_2_0  ANA_SMPLR_REG1.BF.REG_SELMUPF_LANE_2_0

// 0x32	ANA_SMPLR_REG2		
typedef union {
	struct {
		uint8_t PU_SMPLR_S_O_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t PU_SMPLR_S_E_LANE_2_0                    : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t PU_CTLE_ODD_LANE                         : 1;	/*      6     r/w   1*/
		uint8_t PU_CTLE_EVEN_LANE                        : 1;	/*      7     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG2_t;
__xdata __at( 0x10c8 ) volatile ANA_SMPLR_REG2_t ANA_SMPLR_REG2;
#define reg_PU_SMPLR_S_O_LANE_2_0  ANA_SMPLR_REG2.BF.PU_SMPLR_S_O_LANE_2_0
#define reg_PU_SMPLR_S_E_LANE_2_0  ANA_SMPLR_REG2.BF.PU_SMPLR_S_E_LANE_2_0
#define reg_PU_CTLE_ODD_LANE  ANA_SMPLR_REG2.BF.PU_CTLE_ODD_LANE
#define reg_PU_CTLE_EVEN_LANE  ANA_SMPLR_REG2.BF.PU_CTLE_EVEN_LANE

// 0x33	ANA_SMPLR_REG3		
typedef union {
	struct {
		uint8_t REG_SELMUPI_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG3_t;
__xdata __at( 0x10cc ) volatile ANA_SMPLR_REG3_t ANA_SMPLR_REG3;
#define reg_REG_SELMUPI_LANE_2_0  ANA_SMPLR_REG3.BF.REG_SELMUPI_LANE_2_0

// 0x34	ANA_RXDCC_REG0		
typedef union {
	struct {
		uint8_t RXDCC_HG_EOMCLK_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t RXDCC_HG_DLLCLK_LANE                     : 1;	/*      1     r/w   0*/
		uint8_t RXDCC_HG_DATACLK_LANE                    : 1;	/*      2     r/w   0*/
		uint8_t RXDCC_EN_DLLCLK_LANE                     : 1;	/*      3     r/w   1*/
		uint8_t RXIMPCAL_EN_LANE                         : 1;	/*      4     r/w   0*/
		uint8_t RXCLK_4X_EN_LANE                         : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXDCC_REG0_t;
__xdata __at( 0x10d0 ) volatile ANA_RXDCC_REG0_t ANA_RXDCC_REG0;
#define reg_RXDCC_HG_EOMCLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_HG_EOMCLK_LANE
#define reg_RXDCC_HG_DLLCLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_HG_DLLCLK_LANE
#define reg_RXDCC_HG_DATACLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_HG_DATACLK_LANE
#define reg_RXDCC_EN_DLLCLK_LANE  ANA_RXDCC_REG0.BF.RXDCC_EN_DLLCLK_LANE
#define reg_RXIMPCAL_EN_LANE  ANA_RXDCC_REG0.BF.RXIMPCAL_EN_LANE
#define reg_RXCLK_4X_EN_LANE  ANA_RXDCC_REG0.BF.RXCLK_4X_EN_LANE

// 0x35	ANA_RXDCC_REG1		
typedef union {
	struct {
		uint8_t RXCLK_25M_DIV_LANE_7_0                   : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXDCC_REG1_t;
__xdata __at( 0x10d4 ) volatile ANA_RXDCC_REG1_t ANA_RXDCC_REG1;
#define reg_RXCLK_25M_DIV_LANE_7_0  ANA_RXDCC_REG1.BF.RXCLK_25M_DIV_LANE_7_0

// 0x36	ANA_RXDCC_REG2		
typedef union {
	struct {
		uint8_t RXCLK_25M_FIX_DIV_EN_LANE                : 1;	/*      0     r/w 1'b0*/
		uint8_t RXCLK_25M_DIV1P5_EN_LANE                 : 1;	/*      1     r/w 1'b0*/
		uint8_t RXCLK_25M_DIV_RESET_LANE                 : 1;	/*      2     r/w 1'h0*/
		uint8_t RXCLK_25M_CTRL_LANE_1_0                  : 2;	/*  [4:3]     r/w 2'b0*/
		uint8_t RXCLK_NT_CTRL_LANE_1_0                   : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t RXCLK_25M_EN_LANE                        : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXDCC_REG2_t;
__xdata __at( 0x10d8 ) volatile ANA_RXDCC_REG2_t ANA_RXDCC_REG2;
#define reg_RXCLK_25M_FIX_DIV_EN_LANE  ANA_RXDCC_REG2.BF.RXCLK_25M_FIX_DIV_EN_LANE
#define reg_RXCLK_25M_DIV1P5_EN_LANE  ANA_RXDCC_REG2.BF.RXCLK_25M_DIV1P5_EN_LANE
#define reg_RXCLK_25M_DIV_RESET_LANE  ANA_RXDCC_REG2.BF.RXCLK_25M_DIV_RESET_LANE
#define reg_RXCLK_25M_CTRL_LANE_1_0  ANA_RXDCC_REG2.BF.RXCLK_25M_CTRL_LANE_1_0
#define reg_RXCLK_NT_CTRL_LANE_1_0  ANA_RXDCC_REG2.BF.RXCLK_NT_CTRL_LANE_1_0
#define reg_RXCLK_25M_EN_LANE  ANA_RXDCC_REG2.BF.RXCLK_25M_EN_LANE

// 0x37	ANA_RXDCC_REG3		
typedef union {
	struct {
		uint8_t RXCLK_NT_DIV_LANE_4_0                    : 5;	/*  [4:0]     r/w 5'h1e*/
		uint8_t RXCLK_NT_DIV_RESET_LANE                  : 1;	/*      5     r/w 1'b0*/
		uint8_t RXCLK_NT_FIX_DIV_EN_LANE                 : 1;	/*      6     r/w 1'b0*/
		uint8_t RXCLK_NT_EN_LANE                         : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXDCC_REG3_t;
__xdata __at( 0x10dc ) volatile ANA_RXDCC_REG3_t ANA_RXDCC_REG3;
#define reg_RXCLK_NT_DIV_LANE_4_0  ANA_RXDCC_REG3.BF.RXCLK_NT_DIV_LANE_4_0
#define reg_RXCLK_NT_DIV_RESET_LANE  ANA_RXDCC_REG3.BF.RXCLK_NT_DIV_RESET_LANE
#define reg_RXCLK_NT_FIX_DIV_EN_LANE  ANA_RXDCC_REG3.BF.RXCLK_NT_FIX_DIV_EN_LANE
#define reg_RXCLK_NT_EN_LANE  ANA_RXDCC_REG3.BF.RXCLK_NT_EN_LANE

// 0x38	ANA_RXREG_REG0		
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_CLK_LANE_2_0              : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_LANE             : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXREG_REG0_t;
__xdata __at( 0x10e0 ) volatile ANA_RXREG_REG0_t ANA_RXREG_REG0;
#define reg_RXREG_SPEEDTRK_CLK_LANE_2_0  ANA_RXREG_REG0.BF.RXREG_SPEEDTRK_CLK_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_LANE  ANA_RXREG_REG0.BF.RXREG_SPEEDTRK_CLK_HALF_LANE

// 0x39	ANA_RXREG_REG1		
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_LANE_2_0             : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RXSPEED_DIV_LANE_2_0                     : 3;	/*  [6:4]     r/w 3'h4*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXREG_REG1_t;
__xdata __at( 0x10e4 ) volatile ANA_RXREG_REG1_t ANA_RXREG_REG1;
#define reg_RXREG_SPEEDTRK_DATA_LANE_2_0  ANA_RXREG_REG1.BF.RXREG_SPEEDTRK_DATA_LANE_2_0
#define reg_RXSPEED_DIV_LANE_2_0  ANA_RXREG_REG1.BF.RXSPEED_DIV_LANE_2_0

// 0x3a	ANA_RXREG_REG2		
typedef union {
	struct {
		uint8_t SEL_EDGE_DLY_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t SEL_EDGE_EQ_LANE                         : 1;	/*      2     r/w   0*/
		uint8_t SMPLR_CAL_EN_LANE                        : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 3;	/*  [6:4]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXREG_REG2_t;
__xdata __at( 0x10e8 ) volatile ANA_RXREG_REG2_t ANA_RXREG_REG2;
#define reg_SEL_EDGE_DLY_LANE_1_0  ANA_RXREG_REG2.BF.SEL_EDGE_DLY_LANE_1_0
#define reg_SEL_EDGE_EQ_LANE  ANA_RXREG_REG2.BF.SEL_EDGE_EQ_LANE
#define reg_SMPLR_CAL_EN_LANE  ANA_RXREG_REG2.BF.SMPLR_CAL_EN_LANE

// 0x3b	ANA_SMPLR_REG4		
typedef union {
	struct {
		uint8_t RXTEST_LANE_8                            : 1;	/*      0     r/w   0*/
		uint8_t RXTERM_EXTRA_LANE_1_0                    : 2;	/*  [2:1]     r/w   0*/
		uint8_t RXTSEN_SEL_LANE                          : 1;	/*      3     r/w   0*/
		uint8_t RXSPEED_DIV_2X_LANE_1_0                  : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG4_t;
__xdata __at( 0x10ec ) volatile ANA_SMPLR_REG4_t ANA_SMPLR_REG4;
#define reg_RXTEST_LANE_8  ANA_SMPLR_REG4.BF.RXTEST_LANE_8
#define reg_RXTERM_EXTRA_LANE_1_0  ANA_SMPLR_REG4.BF.RXTERM_EXTRA_LANE_1_0
#define reg_RXTSEN_SEL_LANE  ANA_SMPLR_REG4.BF.RXTSEN_SEL_LANE
#define reg_RXSPEED_DIV_2X_LANE_1_0  ANA_SMPLR_REG4.BF.RXSPEED_DIV_2X_LANE_1_0

// 0x3c	ANA_SMPLR_REG5		
typedef union {
	struct {
		uint8_t RXTEST_LANE_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG5_t;
__xdata __at( 0x10f0 ) volatile ANA_SMPLR_REG5_t ANA_SMPLR_REG5;
#define reg_RXTEST_LANE_7_0  ANA_SMPLR_REG5.BF.RXTEST_LANE_7_0

// 0x3d	ANA_SQ_REG0		
typedef union {
	struct {
		uint8_t SQ_AMPBW_LANE_1_0                        : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t SQ_CAL_EN_LANE                           : 1;	/*      2     r/w   0*/
		uint8_t SQ_LINEAR_DISABLE_LANE                   : 1;	/*      3     r/w   0*/
		uint8_t RXCLK_2X_SEL_LANE                        : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SQ_REG0_t;
__xdata __at( 0x10f4 ) volatile ANA_SQ_REG0_t ANA_SQ_REG0;
#define reg_SQ_AMPBW_LANE_1_0  ANA_SQ_REG0.BF.SQ_AMPBW_LANE_1_0
#define reg_SQ_CAL_EN_LANE  ANA_SQ_REG0.BF.SQ_CAL_EN_LANE
#define reg_SQ_LINEAR_DISABLE_LANE  ANA_SQ_REG0.BF.SQ_LINEAR_DISABLE_LANE
#define reg_RXCLK_2X_SEL_LANE  ANA_SQ_REG0.BF.RXCLK_2X_SEL_LANE

// 0x3f	ANA_SQ_REG1		
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
__xdata __at( 0x10fc ) volatile ANA_SQ_REG1_t ANA_SQ_REG1;
#define reg_SQ_OFFSET_LANE_4_0  ANA_SQ_REG1.BF.SQ_OFFSET_LANE_4_0

// 0x40	ANA_SQ_REG2		
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
__xdata __at( 0x1100 ) volatile ANA_SQ_REG2_t ANA_SQ_REG2;
#define reg_SQ_THRIPTAT_LANE_1_0  ANA_SQ_REG2.BF.SQ_THRIPTAT_LANE_1_0
#define reg_SQ_THRESH_CAL_EN_LANE  ANA_SQ_REG2.BF.SQ_THRESH_CAL_EN_LANE
#define reg_SQ_OFFSET_CAL_EN_LANE  ANA_SQ_REG2.BF.SQ_OFFSET_CAL_EN_LANE

// 0x41	ANA_SQ_REG3		
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
__xdata __at( 0x1104 ) volatile ANA_SQ_REG3_t ANA_SQ_REG3;
#define reg_SQ_PKDETI_LANE_1_0  ANA_SQ_REG3.BF.SQ_PKDETI_LANE_1_0
#define reg_SQ_PKDETCAP_LANE_1_0  ANA_SQ_REG3.BF.SQ_PKDETCAP_LANE_1_0
#define reg_SQ_OFFSETCAL_SEL_LANE_1_0  ANA_SQ_REG3.BF.SQ_OFFSETCAL_SEL_LANE_1_0

// 0x42	ANA_SQ_REG4		
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
__xdata __at( 0x1108 ) volatile ANA_SQ_REG4_t ANA_SQ_REG4;
#define reg_SQ_REFTHR_LANE_4_0  ANA_SQ_REG4.BF.SQ_REFTHR_LANE_4_0

// 0x43	ANA_SMPLR_REG6		
typedef union {
	struct {
		uint8_t VCM_SMPLR_GEN_CTRL_LANE_2_0              : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG6_t;
__xdata __at( 0x110c ) volatile ANA_SMPLR_REG6_t ANA_SMPLR_REG6;
#define reg_VCM_SMPLR_GEN_CTRL_LANE_2_0  ANA_SMPLR_REG6.BF.VCM_SMPLR_GEN_CTRL_LANE_2_0

// 0x44	ANA_DFE_REG5		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t VREF_SHIFT_LANE_1_0                      : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG5_t;
__xdata __at( 0x1110 ) volatile ANA_DFE_REG5_t ANA_DFE_REG5;
#define reg_VREF_SHIFT_LANE_1_0  ANA_DFE_REG5.BF.VREF_SHIFT_LANE_1_0

// 0x45	ANA_DFE_REG6		
typedef union {
	struct {
		uint8_t VICM_DFE_F3_CTRL_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t VICM_DFE_F4_CTRL_LANE_1_0                : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t VICM_DFE_F5TO15_FLOAT_CTRL_LANE_1_0      : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG6_t;
__xdata __at( 0x1114 ) volatile ANA_DFE_REG6_t ANA_DFE_REG6;
#define reg_VICM_DFE_F3_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F3_CTRL_LANE_1_0
#define reg_VICM_DFE_F4_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F4_CTRL_LANE_1_0
#define reg_VICM_DFE_F5TO15_FLOAT_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F5TO15_FLOAT_CTRL_LANE_1_0

// 0x46	ANA_VDD_REG0		
typedef union {
	struct {
		uint8_t VDDA_RXEOMCLK_HALF_EN_LANE               : 1;	/*      0     r/w   0*/
		uint8_t VDDA_RXDLL_HALF_EN_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t VDDA_RXDATACLK_HALF_EN_LANE              : 1;	/*      2     r/w   0*/
		uint8_t VCM_SMPLR_SEL_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t VDDA_RXSAMPLER_HALF_EN_LANE              : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_VDD_REG0_t;
__xdata __at( 0x1118 ) volatile ANA_VDD_REG0_t ANA_VDD_REG0;
#define reg_VDDA_RXEOMCLK_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXEOMCLK_HALF_EN_LANE
#define reg_VDDA_RXDLL_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXDLL_HALF_EN_LANE
#define reg_VDDA_RXDATACLK_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXDATACLK_HALF_EN_LANE
#define reg_VCM_SMPLR_SEL_LANE  ANA_VDD_REG0.BF.VCM_SMPLR_SEL_LANE
#define reg_VDDA_RXSAMPLER_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXSAMPLER_HALF_EN_LANE

// 0x47	ANA_TXSPEED_REG0		
typedef union {
	struct {
		uint8_t TXSPEED_DIV_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXSPEED_REG0_t;
__xdata __at( 0x111c ) volatile ANA_TXSPEED_REG0_t ANA_TXSPEED_REG0;
#define reg_TXSPEED_DIV_LANE_2_0  ANA_TXSPEED_REG0.BF.TXSPEED_DIV_LANE_2_0

// 0x48	ANA_TXREG_REG0		
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_CLK_LANE_3_0              : 4;	/*  [3:0]     r/w 4'hF*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXREG_REG0_t;
__xdata __at( 0x1120 ) volatile ANA_TXREG_REG0_t ANA_TXREG_REG0;
#define reg_TXREG_SPEEDTRK_CLK_LANE_3_0  ANA_TXREG_REG0.BF.TXREG_SPEEDTRK_CLK_LANE_3_0

// 0x49	ANA_TXREG_REG1		
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_LANE_3_0             : 4;	/*  [3:0]     r/w 4'hF*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXREG_REG1_t;
__xdata __at( 0x1124 ) volatile ANA_TXREG_REG1_t ANA_TXREG_REG1;
#define reg_TXREG_SPEEDTRK_DATA_LANE_3_0  ANA_TXREG_REG1.BF.TXREG_SPEEDTRK_DATA_LANE_3_0

// 0x4a	ANA_TXDRV_REG		
typedef union {
	struct {
		uint8_t TXDRV_COMP_CURRENT_LANE_2_0              : 3;	/*  [2:0]     r/w   0*/
		uint8_t TXDRV_COMP_EN_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t TXDRV_REG_GM_LANE_1_0                    : 2;	/*  [5:4]     r/w 2'h3*/
		uint8_t TXDRVREG_FB_SEL_LANE                     : 1;	/*      6     r/w   0*/
		uint8_t TXDRVREG_HG_LANE                         : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDRV_REG_t;
__xdata __at( 0x1128 ) volatile ANA_TXDRV_REG_t ANA_TXDRV_REG;
#define reg_TXDRV_COMP_CURRENT_LANE_2_0  ANA_TXDRV_REG.BF.TXDRV_COMP_CURRENT_LANE_2_0
#define reg_TXDRV_COMP_EN_LANE  ANA_TXDRV_REG.BF.TXDRV_COMP_EN_LANE
#define reg_TXDRV_REG_GM_LANE_1_0  ANA_TXDRV_REG.BF.TXDRV_REG_GM_LANE_1_0
#define reg_TXDRVREG_FB_SEL_LANE  ANA_TXDRV_REG.BF.TXDRVREG_FB_SEL_LANE
#define reg_TXDRVREG_HG_LANE  ANA_TXDRV_REG.BF.TXDRVREG_HG_LANE

// 0x4b	ANA_TX_NT_REG		
typedef union {
	struct {
		uint8_t TXCLK_NT_CTRL_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'b00*/
		uint8_t TXCLK_NT_FIX_DIV_EN_LANE                 : 1;	/*      2     r/w 1'b0*/
		uint8_t TXCLK_NT_DIV_LANE_4_0                    : 5;	/*  [7:3]     r/w 5'h1e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_NT_REG_t;
__xdata __at( 0x112c ) volatile ANA_TX_NT_REG_t ANA_TX_NT_REG;
#define reg_TXCLK_NT_CTRL_LANE_1_0  ANA_TX_NT_REG.BF.TXCLK_NT_CTRL_LANE_1_0
#define reg_TXCLK_NT_FIX_DIV_EN_LANE  ANA_TX_NT_REG.BF.TXCLK_NT_FIX_DIV_EN_LANE
#define reg_TXCLK_NT_DIV_LANE_4_0  ANA_TX_NT_REG.BF.TXCLK_NT_DIV_LANE_4_0

// 0x4c	ANA_DATA_REG0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t IDCON_CUR_LANE_1_0                       : 2;	/*  [2:1]     r/w   0*/
		uint8_t LOCAL_ANA_TX2RX_LPBK_EN_LANE             : 1;	/*      3     r/w   0*/
		uint8_t IDCON_VDDADATA_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t TXCLK_4X_EN_LANE                         : 1;	/*      5     r/w   0*/
		uint8_t TXCLK_NT_EN_LANE                         : 1;	/*      6     r/w   0*/
		uint8_t TXCLK_NT_DIV_RESET_LANE                  : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DATA_REG0_t;
__xdata __at( 0x1130 ) volatile ANA_DATA_REG0_t ANA_DATA_REG0;
#define reg_IDCON_CUR_LANE_1_0  ANA_DATA_REG0.BF.IDCON_CUR_LANE_1_0
#define reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  ANA_DATA_REG0.BF.LOCAL_ANA_TX2RX_LPBK_EN_LANE
#define reg_IDCON_VDDADATA_LANE  ANA_DATA_REG0.BF.IDCON_VDDADATA_LANE
#define reg_TXCLK_4X_EN_LANE  ANA_DATA_REG0.BF.TXCLK_4X_EN_LANE
#define reg_TXCLK_NT_EN_LANE  ANA_DATA_REG0.BF.TXCLK_NT_EN_LANE
#define reg_TXCLK_NT_DIV_RESET_LANE  ANA_DATA_REG0.BF.TXCLK_NT_DIV_RESET_LANE

// 0x4d	ANA_TXDCC_REG0		
typedef union {
	struct {
		uint8_t TXDCC_PDIV_EN_LANE                       : 1;	/*      0     r/w   0*/
		uint8_t TXDCC_HG_LANE                            : 1;	/*      1     r/w   0*/
		uint8_t TXDCC_EN_LANE                            : 1;	/*      2     r/w   1*/
		uint8_t TXDCC_PDIV_HG_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t TXCAL_EN_LANE                            : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDCC_REG0_t;
__xdata __at( 0x1134 ) volatile ANA_TXDCC_REG0_t ANA_TXDCC_REG0;
#define reg_TXDCC_PDIV_EN_LANE  ANA_TXDCC_REG0.BF.TXDCC_PDIV_EN_LANE
#define reg_TXDCC_HG_LANE  ANA_TXDCC_REG0.BF.TXDCC_HG_LANE
#define reg_TXDCC_EN_LANE  ANA_TXDCC_REG0.BF.TXDCC_EN_LANE
#define reg_TXDCC_PDIV_HG_LANE  ANA_TXDCC_REG0.BF.TXDCC_PDIV_HG_LANE
#define reg_TXCAL_EN_LANE  ANA_TXDCC_REG0.BF.TXCAL_EN_LANE

// 0x4e	ANA_TXDETRX_REG1		
typedef union {
	struct {
		uint8_t TXDETRX_IMP_LANE_1_0                     : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TXDETRX_VTH_LANE_1_0                     : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t TXHIZ_HOLD_CUR_LANE_1_0                  : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDETRX_REG1_t;
__xdata __at( 0x1138 ) volatile ANA_TXDETRX_REG1_t ANA_TXDETRX_REG1;
#define reg_TXDETRX_IMP_LANE_1_0  ANA_TXDETRX_REG1.BF.TXDETRX_IMP_LANE_1_0
#define reg_TXDETRX_VTH_LANE_1_0  ANA_TXDETRX_REG1.BF.TXDETRX_VTH_LANE_1_0
#define reg_TXHIZ_HOLD_CUR_LANE_1_0  ANA_TXDETRX_REG1.BF.TXHIZ_HOLD_CUR_LANE_1_0

// 0x4f	ANA_TXIMP_REG0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TXIMPCAL_EN_LANE                         : 1;	/*      1     r/w   0*/
		uint8_t TXIMPCAL_NSIDE_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t TXIMPCAL_NMOS_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t TXIMPCAL_2ND_EN_LANE                     : 1;	/*      4     r/w   0*/
		uint8_t TXTEMPC_MSBN_EN_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t TXTEMPC_MSBP_EN_LANE                     : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG0_t;
__xdata __at( 0x113c ) volatile ANA_TXIMP_REG0_t ANA_TXIMP_REG0;
#define reg_TXIMPCAL_EN_LANE  ANA_TXIMP_REG0.BF.TXIMPCAL_EN_LANE
#define reg_TXIMPCAL_NSIDE_LANE  ANA_TXIMP_REG0.BF.TXIMPCAL_NSIDE_LANE
#define reg_TXIMPCAL_NMOS_LANE  ANA_TXIMP_REG0.BF.TXIMPCAL_NMOS_LANE
#define reg_TXIMPCAL_2ND_EN_LANE  ANA_TXIMP_REG0.BF.TXIMPCAL_2ND_EN_LANE
#define reg_TXTEMPC_MSBN_EN_LANE  ANA_TXIMP_REG0.BF.TXTEMPC_MSBN_EN_LANE
#define reg_TXTEMPC_MSBP_EN_LANE  ANA_TXIMP_REG0.BF.TXTEMPC_MSBP_EN_LANE

// 0x50	ANA_TXIMP_REG1		
typedef union {
	struct {
		uint8_t TXIMP_TEMPC_ICCP_EN_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t TXIMP_TEMPC_ICCN_EN_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG1_t;
__xdata __at( 0x1140 ) volatile ANA_TXIMP_REG1_t ANA_TXIMP_REG1;
#define reg_TXIMP_TEMPC_ICCP_EN_LANE  ANA_TXIMP_REG1.BF.TXIMP_TEMPC_ICCP_EN_LANE
#define reg_TXIMP_TEMPC_ICCN_EN_LANE  ANA_TXIMP_REG1.BF.TXIMP_TEMPC_ICCN_EN_LANE

// 0x51	ANA_TX_FIR_REG0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TXFIR_OPT_MAP_LANE                       : 1;	/*      1     r/w   0*/
		uint8_t TXRESET_FIR_LANE                         : 1;	/*      2     r/w   1*/
		uint8_t TXFIR_CLK_OFF_LANE                       : 1;	/*      3     r/w   1*/
		uint8_t TXFIR_RESERVED_LANE_3_0                  : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_REG0_t;
__xdata __at( 0x1144 ) volatile ANA_TX_FIR_REG0_t ANA_TX_FIR_REG0;
#define reg_TXFIR_OPT_MAP_LANE  ANA_TX_FIR_REG0.BF.TXFIR_OPT_MAP_LANE
#define reg_TXRESET_FIR_LANE  ANA_TX_FIR_REG0.BF.TXRESET_FIR_LANE
#define reg_TXFIR_CLK_OFF_LANE  ANA_TX_FIR_REG0.BF.TXFIR_CLK_OFF_LANE
#define reg_TXFIR_RESERVED_LANE_3_0  ANA_TX_FIR_REG0.BF.TXFIR_RESERVED_LANE_3_0

// 0x52	ANA_TX_FIR_SPD_REG0		
typedef union {
	struct {
		uint8_t TXFIR_2_DIG_CLK_DIV_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t TXFIR_BYPASS_L3_DELAY_LANE               : 1;	/*      1     r/w   0*/
		uint8_t TXFIR_BYPASS_L2_DELAY_LANE               : 1;	/*      2     r/w   0*/
		uint8_t TXFIR_BYPASS_L1_DELAY_LANE               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_SPD_REG0_t;
__xdata __at( 0x1148 ) volatile ANA_TX_FIR_SPD_REG0_t ANA_TX_FIR_SPD_REG0;
#define reg_TXFIR_2_DIG_CLK_DIV_LANE  ANA_TX_FIR_SPD_REG0.BF.TXFIR_2_DIG_CLK_DIV_LANE
#define reg_TXFIR_BYPASS_L3_DELAY_LANE  ANA_TX_FIR_SPD_REG0.BF.TXFIR_BYPASS_L3_DELAY_LANE
#define reg_TXFIR_BYPASS_L2_DELAY_LANE  ANA_TX_FIR_SPD_REG0.BF.TXFIR_BYPASS_L2_DELAY_LANE
#define reg_TXFIR_BYPASS_L1_DELAY_LANE  ANA_TX_FIR_SPD_REG0.BF.TXFIR_BYPASS_L1_DELAY_LANE

// 0x53	ANA_TXVCM_REG		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t TXVCM_SEL_LANE_1_0                       : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXVCM_REG_t;
__xdata __at( 0x114c ) volatile ANA_TXVCM_REG_t ANA_TXVCM_REG;
#define reg_TXVCM_SEL_LANE_1_0  ANA_TXVCM_REG.BF.TXVCM_SEL_LANE_1_0

// 0x54	ANA_TXINTP_REG1		
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
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXINTP_REG1_t;
__xdata __at( 0x1150 ) volatile ANA_TXINTP_REG1_t ANA_TXINTP_REG1;

// 0x55	ANA_CK500DIV_REG0		
typedef union {
	struct {
		uint8_t TXCLK500M_DIV_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CK500DIV_REG0_t;
__xdata __at( 0x1154 ) volatile ANA_CK500DIV_REG0_t ANA_CK500DIV_REG0;
#define reg_TXCLK500M_DIV_LANE_1_0  ANA_CK500DIV_REG0.BF.TXCLK500M_DIV_LANE_1_0

// 0x56	ANA_MISC_REG0		
typedef union {
	struct {
		uint8_t TXTEST_LANE_9_8                          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TXCLK_ALIGN_EN_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t TXTSEN_SEL_LANE                          : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG0_t;
__xdata __at( 0x1158 ) volatile ANA_MISC_REG0_t ANA_MISC_REG0;
#define reg_TXTEST_LANE_9_8  ANA_MISC_REG0.BF.TXTEST_LANE_9_8
#define reg_TXCLK_ALIGN_EN_LANE  ANA_MISC_REG0.BF.TXCLK_ALIGN_EN_LANE
#define reg_TXTSEN_SEL_LANE  ANA_MISC_REG0.BF.TXTSEN_SEL_LANE

// 0x57	ANA_TEST_REG0		
typedef union {
	struct {
		uint8_t TXTEST_LANE_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TEST_REG0_t;
__xdata __at( 0x115c ) volatile ANA_TEST_REG0_t ANA_TEST_REG0;
#define reg_TXTEST_LANE_7_0  ANA_TEST_REG0.BF.TXTEST_LANE_7_0

// 0x58	ANA_TXMUX_SCANREG		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t TXMUX_SCAN_EN_LANE                       : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCANREG_t;
__xdata __at( 0x1160 ) volatile ANA_TXMUX_SCANREG_t ANA_TXMUX_SCANREG;
#define reg_TXMUX_SCAN_EN_LANE  ANA_TXMUX_SCANREG.BF.TXMUX_SCAN_EN_LANE

// 0x59	ANA_TXMUX_SCAN0		
typedef union {
	struct {
		uint8_t TXMUX_SCAN0_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN0_t;
__xdata __at( 0x1164 ) volatile ANA_TXMUX_SCAN0_t ANA_TXMUX_SCAN0;
#define reg_TXMUX_SCAN0_LANE_7_0  ANA_TXMUX_SCAN0.BF.TXMUX_SCAN0_LANE_7_0

// 0x5a	ANA_TXMUX_SCAN1		
typedef union {
	struct {
		uint8_t TXMUX_SCAN0_LANE_9_8                     : 2;	/*  [1:0]       r 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN1_t;
__xdata __at( 0x1168 ) volatile ANA_TXMUX_SCAN1_t ANA_TXMUX_SCAN1;
#define reg_TXMUX_SCAN0_LANE_9_8  ANA_TXMUX_SCAN1.BF.TXMUX_SCAN0_LANE_9_8

// 0x5b	ANA_TXMUX_SCAN2		
typedef union {
	struct {
		uint8_t TXMUX_SCAN1_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN2_t;
__xdata __at( 0x116c ) volatile ANA_TXMUX_SCAN2_t ANA_TXMUX_SCAN2;
#define reg_TXMUX_SCAN1_LANE_7_0  ANA_TXMUX_SCAN2.BF.TXMUX_SCAN1_LANE_7_0

// 0x5c	ANA_TXMUX_SCAN3		
typedef union {
	struct {
		uint8_t TXMUX_SCAN1_LANE_9_8                     : 2;	/*  [1:0]       r 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN3_t;
__xdata __at( 0x1170 ) volatile ANA_TXMUX_SCAN3_t ANA_TXMUX_SCAN3;
#define reg_TXMUX_SCAN1_LANE_9_8  ANA_TXMUX_SCAN3.BF.TXMUX_SCAN1_LANE_9_8

// 0x5d	TX_RSVD_REG0		
typedef union {
	struct {
		uint8_t TXRSVD0_LANE_0                           : 1;	/*      0     r/w 1'h0*/
		uint8_t TXRSVD0_LANE_7_1                         : 7;	/*  [7:1]     r/w 7'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG0_t;
__xdata __at( 0x1174 ) volatile TX_RSVD_REG0_t TX_RSVD_REG0;
#define reg_TXRSVD0_LANE_0  TX_RSVD_REG0.BF.TXRSVD0_LANE_0
#define reg_TXRSVD0_LANE_7_1  TX_RSVD_REG0.BF.TXRSVD0_LANE_7_1

// 0x5e	TX_RSVD_REG1		
typedef union {
	struct {
		uint8_t TXRSVD1_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG1_t;
__xdata __at( 0x1178 ) volatile TX_RSVD_REG1_t TX_RSVD_REG1;
#define reg_TXRSVD1_LANE_7_0  TX_RSVD_REG1.BF.TXRSVD1_LANE_7_0

// 0x5f	TX_RSVD_REG2		
typedef union {
	struct {
		uint8_t TXRSVD2_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG2_t;
__xdata __at( 0x117c ) volatile TX_RSVD_REG2_t TX_RSVD_REG2;
#define reg_TXRSVD2_LANE_7_0  TX_RSVD_REG2.BF.TXRSVD2_LANE_7_0

// 0x60	TX_RSVD_REG3		
typedef union {
	struct {
		uint8_t TXRSVD3_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG3_t;
__xdata __at( 0x1180 ) volatile TX_RSVD_REG3_t TX_RSVD_REG3;
#define reg_TXRSVD3_LANE_7_0  TX_RSVD_REG3.BF.TXRSVD3_LANE_7_0

// 0x61	TX_RSVD_REG4		
typedef union {
	struct {
		uint8_t TXRSVD4_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG4_t;
__xdata __at( 0x1184 ) volatile TX_RSVD_REG4_t TX_RSVD_REG4;
#define reg_TXRSVD4_LANE_7_0  TX_RSVD_REG4.BF.TXRSVD4_LANE_7_0

// 0x62	TX_RSVD_REG5		
typedef union {
	struct {
		uint8_t TXRSVD5_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG5_t;
__xdata __at( 0x1188 ) volatile TX_RSVD_REG5_t TX_RSVD_REG5;
#define reg_TXRSVD5_LANE_7_0  TX_RSVD_REG5.BF.TXRSVD5_LANE_7_0

// 0x63	TX_RSVD_REG6		
typedef union {
	struct {
		uint8_t TXRSVD6_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG6_t;
__xdata __at( 0x118c ) volatile TX_RSVD_REG6_t TX_RSVD_REG6;
#define reg_TXRSVD6_LANE_7_0  TX_RSVD_REG6.BF.TXRSVD6_LANE_7_0

// 0x64	TX_RSVD_REG7		
typedef union {
	struct {
		uint8_t TXRSVD7_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG7_t;
__xdata __at( 0x1190 ) volatile TX_RSVD_REG7_t TX_RSVD_REG7;
#define reg_TXRSVD7_LANE_7_0  TX_RSVD_REG7.BF.TXRSVD7_LANE_7_0

// 0x65	TX_RSVD_REG8		
typedef union {
	struct {
		uint8_t TXRSVD8_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG8_t;
__xdata __at( 0x1194 ) volatile TX_RSVD_REG8_t TX_RSVD_REG8;
#define reg_TXRSVD8_LANE_7_0  TX_RSVD_REG8.BF.TXRSVD8_LANE_7_0

// 0x66	TX_RSVD_REG9		
typedef union {
	struct {
		uint8_t TXRSVD9_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG9_t;
__xdata __at( 0x1198 ) volatile TX_RSVD_REG9_t TX_RSVD_REG9;
#define reg_TXRSVD9_LANE_7_0  TX_RSVD_REG9.BF.TXRSVD9_LANE_7_0

// 0x67	ANA_TXCLK_DLY0		
typedef union {
	struct {
		uint8_t TXPAM2_EN_DUM_LANE                       : 1;	/*      0     r/w   0*/
		uint8_t TXAVDD09_SEL_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t TXCLK_2X_SEL_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXCLK_DLY0_t;
__xdata __at( 0x119c ) volatile ANA_TXCLK_DLY0_t ANA_TXCLK_DLY0;
#define reg_TXPAM2_EN_DUM_LANE  ANA_TXCLK_DLY0.BF.TXPAM2_EN_DUM_LANE
#define reg_TXAVDD09_SEL_LANE  ANA_TXCLK_DLY0.BF.TXAVDD09_SEL_LANE
#define reg_TXCLK_2X_SEL_LANE  ANA_TXCLK_DLY0.BF.TXCLK_2X_SEL_LANE

// 0x68	ANA_TXCLK_DLY1		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t TXIMP_TEMPC_NMOS_CAL_EN_LANE             : 1;	/*      3     r/w   0*/
		uint8_t TXIMP_TEMPC_PMOS_CAL_EN_LANE             : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXCLK_DLY1_t;
__xdata __at( 0x11a0 ) volatile ANA_TXCLK_DLY1_t ANA_TXCLK_DLY1;
#define reg_TXIMP_TEMPC_NMOS_CAL_EN_LANE  ANA_TXCLK_DLY1.BF.TXIMP_TEMPC_NMOS_CAL_EN_LANE
#define reg_TXIMP_TEMPC_PMOS_CAL_EN_LANE  ANA_TXCLK_DLY1.BF.TXIMP_TEMPC_PMOS_CAL_EN_LANE

// 0x69	DFE_CMN_REG0		
typedef union {
	struct {
		uint8_t F1_TUNE_BOT_D_E_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t F1_TUNE_BOT_D_O_LANE_2_0                 : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CMN_REG0_t;
__xdata __at( 0x11a4 ) volatile DFE_CMN_REG0_t DFE_CMN_REG0;
#define reg_F1_TUNE_BOT_D_E_LANE_2_0  DFE_CMN_REG0.BF.F1_TUNE_BOT_D_E_LANE_2_0
#define reg_F1_TUNE_BOT_D_O_LANE_2_0  DFE_CMN_REG0.BF.F1_TUNE_BOT_D_O_LANE_2_0

// 0x6a	DFE_CMN_REG1		
typedef union {
	struct {
		uint8_t F1_TUNE_BOT_S_E_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t F1_TUNE_BOT_S_O_LANE_2_0                 : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CMN_REG1_t;
__xdata __at( 0x11a8 ) volatile DFE_CMN_REG1_t DFE_CMN_REG1;
#define reg_F1_TUNE_BOT_S_E_LANE_2_0  DFE_CMN_REG1.BF.F1_TUNE_BOT_S_E_LANE_2_0
#define reg_F1_TUNE_BOT_S_O_LANE_2_0  DFE_CMN_REG1.BF.F1_TUNE_BOT_S_O_LANE_2_0

// 0x6b	DFE_CMN_REG2		
typedef union {
	struct {
		uint8_t F1_TUNE_MID_D_E_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t F1_TUNE_MID_D_O_LANE_2_0                 : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CMN_REG2_t;
__xdata __at( 0x11ac ) volatile DFE_CMN_REG2_t DFE_CMN_REG2;
#define reg_F1_TUNE_MID_D_E_LANE_2_0  DFE_CMN_REG2.BF.F1_TUNE_MID_D_E_LANE_2_0
#define reg_F1_TUNE_MID_D_O_LANE_2_0  DFE_CMN_REG2.BF.F1_TUNE_MID_D_O_LANE_2_0

// 0x6c	DFE_CMN_REG3		
typedef union {
	struct {
		uint8_t F1_TUNE_MID_S_E_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t F1_TUNE_MID_S_O_LANE_2_0                 : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CMN_REG3_t;
__xdata __at( 0x11b0 ) volatile DFE_CMN_REG3_t DFE_CMN_REG3;
#define reg_F1_TUNE_MID_S_E_LANE_2_0  DFE_CMN_REG3.BF.F1_TUNE_MID_S_E_LANE_2_0
#define reg_F1_TUNE_MID_S_O_LANE_2_0  DFE_CMN_REG3.BF.F1_TUNE_MID_S_O_LANE_2_0

// 0x6d	DFE_CMN_REG4		
typedef union {
	struct {
		uint8_t F1_TUNE_TOP_D_E_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t F1_TUNE_TOP_D_O_LANE_2_0                 : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CMN_REG4_t;
__xdata __at( 0x11b4 ) volatile DFE_CMN_REG4_t DFE_CMN_REG4;
#define reg_F1_TUNE_TOP_D_E_LANE_2_0  DFE_CMN_REG4.BF.F1_TUNE_TOP_D_E_LANE_2_0
#define reg_F1_TUNE_TOP_D_O_LANE_2_0  DFE_CMN_REG4.BF.F1_TUNE_TOP_D_O_LANE_2_0

// 0x6e	DFE_CMN_REG5		
typedef union {
	struct {
		uint8_t F1_TUNE_TOP_S_E_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t F1_TUNE_TOP_S_O_LANE_2_0                 : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CMN_REG5_t;
__xdata __at( 0x11b8 ) volatile DFE_CMN_REG5_t DFE_CMN_REG5;
#define reg_F1_TUNE_TOP_S_E_LANE_2_0  DFE_CMN_REG5.BF.F1_TUNE_TOP_S_E_LANE_2_0
#define reg_F1_TUNE_TOP_S_O_LANE_2_0  DFE_CMN_REG5.BF.F1_TUNE_TOP_S_O_LANE_2_0

// 0x6f	DFE_CMN_REG6		
typedef union {
	struct {
		uint8_t F1_TUNE_COM_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CMN_REG6_t;
__xdata __at( 0x11bc ) volatile DFE_CMN_REG6_t DFE_CMN_REG6;
#define reg_F1_TUNE_COM_LANE_2_0  DFE_CMN_REG6.BF.F1_TUNE_COM_LANE_2_0

// 0x70	TRX_CAL_REG0		Digital TRX Calibration Register 0
typedef union {
	struct {
		uint8_t RX_DIG_CAL_CLK_RST_BOT_LANE              : 1;	/*      0     r/w 1'h0*/
		uint8_t RX_DIG_CAL_CLK_EN_BOT_LANE               : 1;	/*      1     r/w 1'h1*/
		uint8_t RX_DIG_CAL_CLK_RST_TOP_LANE              : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_DIG_CAL_CLK_EN_TOP_LANE               : 1;	/*      3     r/w 1'h1*/
		uint8_t TX_DIG_CAL_CLK_RST_BOT_LANE              : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_DIG_CAL_CLK_EN_BOT_LANE               : 1;	/*      5     r/w 1'h1*/
		uint8_t TX_DIG_CAL_CLK_RST_TOP_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_DIG_CAL_CLK_EN_TOP_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG0_t;
__xdata __at( 0x11c0 ) volatile TRX_CAL_REG0_t TRX_CAL_REG0;
#define reg_RX_DIG_CAL_CLK_RST_BOT_LANE  TRX_CAL_REG0.BF.RX_DIG_CAL_CLK_RST_BOT_LANE
#define reg_RX_DIG_CAL_CLK_EN_BOT_LANE  TRX_CAL_REG0.BF.RX_DIG_CAL_CLK_EN_BOT_LANE
#define reg_RX_DIG_CAL_CLK_RST_TOP_LANE  TRX_CAL_REG0.BF.RX_DIG_CAL_CLK_RST_TOP_LANE
#define reg_RX_DIG_CAL_CLK_EN_TOP_LANE  TRX_CAL_REG0.BF.RX_DIG_CAL_CLK_EN_TOP_LANE
#define reg_TX_DIG_CAL_CLK_RST_BOT_LANE  TRX_CAL_REG0.BF.TX_DIG_CAL_CLK_RST_BOT_LANE
#define reg_TX_DIG_CAL_CLK_EN_BOT_LANE  TRX_CAL_REG0.BF.TX_DIG_CAL_CLK_EN_BOT_LANE
#define reg_TX_DIG_CAL_CLK_RST_TOP_LANE  TRX_CAL_REG0.BF.TX_DIG_CAL_CLK_RST_TOP_LANE
#define reg_TX_DIG_CAL_CLK_EN_TOP_LANE  TRX_CAL_REG0.BF.TX_DIG_CAL_CLK_EN_TOP_LANE

// 0x71	TRX_CAL_REG1		Digital TRX Calibration Register 1
typedef union {
	struct {
		uint8_t TX_DIG_CAL2M_DIV_TOP_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG1_t;
__xdata __at( 0x11c4 ) volatile TRX_CAL_REG1_t TRX_CAL_REG1;
#define reg_TX_DIG_CAL2M_DIV_TOP_LANE_7_0  TRX_CAL_REG1.BF.TX_DIG_CAL2M_DIV_TOP_LANE_7_0

// 0x72	TRX_CAL_REG2		Digital TRX Calibration Register 2
typedef union {
	struct {
		uint8_t TX_DIG_CAL2M_DIV_BOT_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG2_t;
__xdata __at( 0x11c8 ) volatile TRX_CAL_REG2_t TRX_CAL_REG2;
#define reg_TX_DIG_CAL2M_DIV_BOT_LANE_7_0  TRX_CAL_REG2.BF.TX_DIG_CAL2M_DIV_BOT_LANE_7_0

// 0x73	TRX_CAL_REG3		Digital TRX Calibration Register 3
typedef union {
	struct {
		uint8_t TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0         : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TRX_DIG_TESTBUS_SEL_TOP_LANE_3_0         : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG3_t;
__xdata __at( 0x11cc ) volatile TRX_CAL_REG3_t TRX_CAL_REG3;
#define reg_TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0  TRX_CAL_REG3.BF.TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0
#define reg_TRX_DIG_TESTBUS_SEL_TOP_LANE_3_0  TRX_CAL_REG3.BF.TRX_DIG_TESTBUS_SEL_TOP_LANE_3_0

// 0x74	TRX_CAL_REG4		Digital TRX Calibration Register 4
typedef union {
	struct {
		uint8_t TRX_DIG_SCAN_FF_TOP_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG4_t;
__xdata __at( 0x11d0 ) volatile TRX_CAL_REG4_t TRX_CAL_REG4;
#define reg_TRX_DIG_SCAN_FF_TOP_LANE_7_0  TRX_CAL_REG4.BF.TRX_DIG_SCAN_FF_TOP_LANE_7_0

// 0x75	TRX_CAL_REG5		Digital TRX Calibration Register 5
typedef union {
	struct {
		uint8_t TRX_DIG_SCAN_FF_BOT_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG5_t;
__xdata __at( 0x11d4 ) volatile TRX_CAL_REG5_t TRX_CAL_REG5;
#define reg_TRX_DIG_SCAN_FF_BOT_LANE_7_0  TRX_CAL_REG5.BF.TRX_DIG_SCAN_FF_BOT_LANE_7_0

// 0x76	TRX_CAL_REG6		Digital TRX Calibration Register 6
typedef union {
	struct {
		uint8_t RX_DIG_CAL2M_DIV_TOP_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG6_t;
__xdata __at( 0x11d8 ) volatile TRX_CAL_REG6_t TRX_CAL_REG6;
#define reg_RX_DIG_CAL2M_DIV_TOP_LANE_7_0  TRX_CAL_REG6.BF.RX_DIG_CAL2M_DIV_TOP_LANE_7_0

// 0x77	TRX_CAL_REG7		Digital TRX Calibration Register 7
typedef union {
	struct {
		uint8_t RX_DIG_CAL2M_DIV_BOT_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG7_t;
__xdata __at( 0x11dc ) volatile TRX_CAL_REG7_t TRX_CAL_REG7;
#define reg_RX_DIG_CAL2M_DIV_BOT_LANE_7_0  TRX_CAL_REG7.BF.RX_DIG_CAL2M_DIV_BOT_LANE_7_0

#endif
