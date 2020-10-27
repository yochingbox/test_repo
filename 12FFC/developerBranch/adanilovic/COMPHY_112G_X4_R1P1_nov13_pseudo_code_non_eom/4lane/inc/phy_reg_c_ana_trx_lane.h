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
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t ALIGN90_REF_FILT_BW_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_ALIGN90_REG0_t;
__xdata __at( 0x4 ) volatile ANA_ALIGN90_REG0_t ANA_ALIGN90_REG0;
#define reg_ALIGN90_REF_FILT_BW_LANE  ANA_ALIGN90_REG0.BF.ALIGN90_REF_FILT_BW_LANE

// 0x2	ANA_PATH_EDGE_REG0		
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P1P3_LANE              : 1;	/*      0     r/w   0*/
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
} ANA_PATH_EDGE_REG0_t;
__xdata __at( 0x8 ) volatile ANA_PATH_EDGE_REG0_t ANA_PATH_EDGE_REG0;
#define reg_PATH_DISABLE_EDGE_P1P3_LANE  ANA_PATH_EDGE_REG0.BF.PATH_DISABLE_EDGE_P1P3_LANE

// 0x3	ANA_CTLE_PRE		
typedef union {
	struct {
		uint8_t CTLE_CAP1_SEL_PRE_LANE_5_0               : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_PRE_t;
__xdata __at( 0xc ) volatile ANA_CTLE_PRE_t ANA_CTLE_PRE;
#define reg_CTLE_CAP1_SEL_PRE_LANE_5_0  ANA_CTLE_PRE.BF.CTLE_CAP1_SEL_PRE_LANE_5_0

// 0x4	ANA_CTLE_POST		
typedef union {
	struct {
		uint8_t CTLE_CAP1_SEL_POST_LANE_5_0              : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_POST_t;
__xdata __at( 0x10 ) volatile ANA_CTLE_POST_t ANA_CTLE_POST;
#define reg_CTLE_CAP1_SEL_POST_LANE_5_0  ANA_CTLE_POST.BF.CTLE_CAP1_SEL_POST_LANE_5_0

// 0x5	ANA_CTLE_MISC		
typedef union {
	struct {
		uint8_t CTLE_CL1_CTRL_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_MISC_t;
__xdata __at( 0x14 ) volatile ANA_CTLE_MISC_t ANA_CTLE_MISC;
#define reg_CTLE_CL1_CTRL_LANE_2_0  ANA_CTLE_MISC.BF.CTLE_CL1_CTRL_LANE_2_0

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
		uint8_t CDR_MODE_LANE_2_0                        : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CDR_PATTERN_REG0_t;
__xdata __at( 0x38 ) volatile ANA_CDR_PATTERN_REG0_t ANA_CDR_PATTERN_REG0;
#define reg_CDR_MODE_LANE_2_0  ANA_CDR_PATTERN_REG0.BF.CDR_MODE_LANE_2_0

// 0xf	ANA_VDD_CALEN_REG0		
typedef union {
	struct {
		uint8_t CALEN_VDDA_TXDATA_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t CALEN_VDDA_TXCLK_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t CALEN_VDDA_RXSAMPLER_LANE                : 1;	/*      2     r/w   0*/
		uint8_t CALEN_VDDA_RXEOMCLK_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t CALEN_VDDA_RXDATACLK_LANE                : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_VDD_CALEN_REG0_t;
__xdata __at( 0x3c ) volatile ANA_VDD_CALEN_REG0_t ANA_VDD_CALEN_REG0;
#define reg_CALEN_VDDA_TXDATA_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_TXDATA_LANE
#define reg_CALEN_VDDA_TXCLK_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_TXCLK_LANE
#define reg_CALEN_VDDA_RXSAMPLER_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_RXSAMPLER_LANE
#define reg_CALEN_VDDA_RXEOMCLK_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_RXEOMCLK_LANE
#define reg_CALEN_VDDA_RXDATACLK_LANE  ANA_VDD_CALEN_REG0.BF.CALEN_VDDA_RXDATACLK_LANE

// 0x10	ANA_CLK_CTRL_REG0		
typedef union {
	struct {
		uint8_t TXINTP_DPHERCK_DLY_SEL_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t CLK_DET_EN_LANE                          : 1;	/*      2     r/w   1*/
		uint8_t TXINTP_CLK_DET_EN_LANE                   : 1;	/*      3     r/w   1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CLK_CTRL_REG0_t;
__xdata __at( 0x40 ) volatile ANA_CLK_CTRL_REG0_t ANA_CLK_CTRL_REG0;
#define reg_TXINTP_DPHERCK_DLY_SEL_LANE_1_0  ANA_CLK_CTRL_REG0.BF.TXINTP_DPHERCK_DLY_SEL_LANE_1_0
#define reg_CLK_DET_EN_LANE  ANA_CLK_CTRL_REG0.BF.CLK_DET_EN_LANE
#define reg_TXINTP_CLK_DET_EN_LANE  ANA_CLK_CTRL_REG0.BF.TXINTP_CLK_DET_EN_LANE

// 0x11	ANA_CTLE_REG0		
typedef union {
	struct {
		uint8_t CTLE_VICM2_LANE_1_0                      : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t CTLE_VICM1_LANE_1_0                      : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t CTLE_RL1_EXTRA_LANE_2_0                  : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG0_t;
__xdata __at( 0x44 ) volatile ANA_CTLE_REG0_t ANA_CTLE_REG0;
#define reg_CTLE_VICM2_LANE_1_0  ANA_CTLE_REG0.BF.CTLE_VICM2_LANE_1_0
#define reg_CTLE_VICM1_LANE_1_0  ANA_CTLE_REG0.BF.CTLE_VICM1_LANE_1_0
#define reg_CTLE_RL1_EXTRA_LANE_2_0  ANA_CTLE_REG0.BF.CTLE_RL1_EXTRA_LANE_2_0

// 0x12	ANA_CTLE_REG1		
typedef union {
	struct {
		uint8_t CTLE_CAP1_SEL_LANE_5_0                   : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG1_t;
__xdata __at( 0x48 ) volatile ANA_CTLE_REG1_t ANA_CTLE_REG1;
#define reg_CTLE_CAP1_SEL_LANE_5_0  ANA_CTLE_REG1.BF.CTLE_CAP1_SEL_LANE_5_0

// 0x13	ANA_CTLE_REG2		
typedef union {
	struct {
		uint8_t CTLE_CAP2_SEL_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h7*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG2_t;
__xdata __at( 0x4c ) volatile ANA_CTLE_REG2_t ANA_CTLE_REG2;
#define reg_CTLE_CAP2_SEL_LANE_4_0  ANA_CTLE_REG2.BF.CTLE_CAP2_SEL_LANE_4_0

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
		uint8_t CTLE_RES1_SEL_POST_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG4_t;
__xdata __at( 0x54 ) volatile ANA_CTLE_REG4_t ANA_CTLE_REG4;
#define reg_CTLE_RES1_SEL_POST_LANE_3_0  ANA_CTLE_REG4.BF.CTLE_RES1_SEL_POST_LANE_3_0

// 0x16	ANA_CTLE_REG5		
typedef union {
	struct {
		uint8_t CTLE_RES1_SEL_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'h0*/
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
		uint8_t CTLE_RES1_SEL_PRE_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG6_t;
__xdata __at( 0x5c ) volatile ANA_CTLE_REG6_t ANA_CTLE_REG6;
#define reg_CTLE_RES1_SEL_PRE_LANE_3_0  ANA_CTLE_REG6.BF.CTLE_RES1_SEL_PRE_LANE_3_0

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
		uint8_t CTLE_RL1_EXTRA_POST_LANE_1_0             : 2;	/*  [1:0]     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG8_t;
__xdata __at( 0x64 ) volatile ANA_CTLE_REG8_t ANA_CTLE_REG8;
#define reg_CTLE_RL1_EXTRA_POST_LANE_1_0  ANA_CTLE_REG8.BF.CTLE_RL1_EXTRA_POST_LANE_1_0

// 0x1a	ANA_DFE_REG0		
typedef union {
	struct {
		uint8_t DFE_CLK_DLY_LANE_1_0                     : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DEMUX2_SYNC_EN_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t EN_DFE_F3TO4_LANE                        : 1;	/*      3     r/w   1*/
		uint8_t DFE_F0_RES_DOUBLE_LANE                   : 1;	/*      4     r/w   0*/
		uint8_t EN_DFE_F23TO30_LANE                      : 1;	/*      5     r/w   1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG0_t;
__xdata __at( 0x68 ) volatile ANA_DFE_REG0_t ANA_DFE_REG0;
#define reg_DFE_CLK_DLY_LANE_1_0  ANA_DFE_REG0.BF.DFE_CLK_DLY_LANE_1_0
#define reg_DEMUX2_SYNC_EN_LANE  ANA_DFE_REG0.BF.DEMUX2_SYNC_EN_LANE
#define reg_EN_DFE_F3TO4_LANE  ANA_DFE_REG0.BF.EN_DFE_F3TO4_LANE
#define reg_DFE_F0_RES_DOUBLE_LANE  ANA_DFE_REG0.BF.DFE_F0_RES_DOUBLE_LANE
#define reg_EN_DFE_F23TO30_LANE  ANA_DFE_REG0.BF.EN_DFE_F23TO30_LANE

// 0x1b	ANA_DFE_REG1		
typedef union {
	struct {
		uint8_t DFE_RES_F3TO4_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t DFE_RES_F2_LANE_1_0                      : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t DFE_RES_F0_LANE_1_0                      : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t DFE_RES_DOUBLE_LANE_1_0                  : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG1_t;
__xdata __at( 0x6c ) volatile ANA_DFE_REG1_t ANA_DFE_REG1;
#define reg_DFE_RES_F3TO4_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_F3TO4_LANE_1_0
#define reg_DFE_RES_F2_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_F2_LANE_1_0
#define reg_DFE_RES_F0_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_F0_LANE_1_0
#define reg_DFE_RES_DOUBLE_LANE_1_0  ANA_DFE_REG1.BF.DFE_RES_DOUBLE_LANE_1_0

// 0x1c	ANA_DFE_REG2		
typedef union {
	struct {
		uint8_t OFST_RES_LANE                            : 1;	/*      0     r/w   0*/
		uint8_t DFE_RES_F16182022_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t DFE_RES_F15171921_LANE                   : 1;	/*      2     r/w   0*/
		uint8_t DFE_RES_F9TO14_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t DFE_RES_F5TO8_LANE                       : 1;	/*      4     r/w   0*/
		uint8_t DFE_RES_F24262830_LANE                   : 1;	/*      5     r/w   0*/
		uint8_t DFE_RES_F23252729_LANE                   : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG2_t;
__xdata __at( 0x70 ) volatile ANA_DFE_REG2_t ANA_DFE_REG2;
#define reg_OFST_RES_LANE  ANA_DFE_REG2.BF.OFST_RES_LANE
#define reg_DFE_RES_F16182022_LANE  ANA_DFE_REG2.BF.DFE_RES_F16182022_LANE
#define reg_DFE_RES_F15171921_LANE  ANA_DFE_REG2.BF.DFE_RES_F15171921_LANE
#define reg_DFE_RES_F9TO14_LANE  ANA_DFE_REG2.BF.DFE_RES_F9TO14_LANE
#define reg_DFE_RES_F5TO8_LANE  ANA_DFE_REG2.BF.DFE_RES_F5TO8_LANE
#define reg_DFE_RES_F24262830_LANE  ANA_DFE_REG2.BF.DFE_RES_F24262830_LANE
#define reg_DFE_RES_F23252729_LANE  ANA_DFE_REG2.BF.DFE_RES_F23252729_LANE

// 0x1d	ANA_DFE_REG3		
typedef union {
	struct {
		uint8_t EN_DFE_F2_LANE                           : 1;	/*      0     r/w   1*/
		uint8_t EN_DFE_F5TO14_LANE                       : 1;	/*      1     r/w   1*/
		uint8_t EN_DFE_F15TO22_LANE                      : 1;	/*      2     r/w   1*/
		uint8_t EN_DFE_F0_LANE                           : 1;	/*      3     r/w   1*/
		uint8_t DFE_RES_VREF_LANE_1_0                    : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG3_t;
__xdata __at( 0x74 ) volatile ANA_DFE_REG3_t ANA_DFE_REG3;
#define reg_EN_DFE_F2_LANE  ANA_DFE_REG3.BF.EN_DFE_F2_LANE
#define reg_EN_DFE_F5TO14_LANE  ANA_DFE_REG3.BF.EN_DFE_F5TO14_LANE
#define reg_EN_DFE_F15TO22_LANE  ANA_DFE_REG3.BF.EN_DFE_F15TO22_LANE
#define reg_EN_DFE_F0_LANE  ANA_DFE_REG3.BF.EN_DFE_F0_LANE
#define reg_DFE_RES_VREF_LANE_1_0  ANA_DFE_REG3.BF.DFE_RES_VREF_LANE_1_0

// 0x1e	CTLE_FF		
typedef union {
	struct {
		uint8_t CTLE_VICM1_TIA_LANE_2_0                  : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CTLE_FF_t;
__xdata __at( 0x78 ) volatile CTLE_FF_t CTLE_FF;
#define reg_CTLE_VICM1_TIA_LANE_2_0  CTLE_FF.BF.CTLE_VICM1_TIA_LANE_2_0

// 0x1f	ANA_RXCTLE_REG		
typedef union {
	struct {
		uint8_t CTLE_RF_CTRL_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'hc*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXCTLE_REG_t;
__xdata __at( 0x7c ) volatile ANA_RXCTLE_REG_t ANA_RXCTLE_REG;
#define reg_CTLE_RF_CTRL_LANE_3_0  ANA_RXCTLE_REG.BF.CTLE_RF_CTRL_LANE_3_0

// 0x20	ANA_DLL_REG2		
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h7*/
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
#define reg_DLL_FREQ_SEL_LANE_2_0  ANA_DLL_REG2.BF.DLL_FREQ_SEL_LANE_2_0

// 0x21	ANA_RXCTLE_REG1		
typedef union {
	struct {
		uint8_t EN_CTLE_PRE_TAP_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t EN_CTLE_POST_TAP_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXCTLE_REG1_t;
__xdata __at( 0x84 ) volatile ANA_RXCTLE_REG1_t ANA_RXCTLE_REG1;
#define reg_EN_CTLE_PRE_TAP_LANE  ANA_RXCTLE_REG1.BF.EN_CTLE_PRE_TAP_LANE
#define reg_EN_CTLE_POST_TAP_LANE  ANA_RXCTLE_REG1.BF.EN_CTLE_POST_TAP_LANE

// 0x22	ANA_DTL_REG0		
typedef union {
	struct {
		uint8_t DTL_CLK_SPEEDUP_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DTL_REG0_t;
__xdata __at( 0x88 ) volatile ANA_DTL_REG0_t ANA_DTL_REG0;
#define reg_DTL_CLK_SPEEDUP_LANE_2_0  ANA_DTL_REG0.BF.DTL_CLK_SPEEDUP_LANE_2_0

// 0x23	ANA_DFE_REG4		
typedef union {
	struct {
		uint8_t EN_F0_S_LANE                             : 1;	/*      0     r/w   1*/
		uint8_t EN_F0_D_LANE                             : 1;	/*      1     r/w   1*/
		uint8_t EN_DFE_VREF_LANE                         : 1;	/*      2     r/w   1*/
		uint8_t EN_DFE_FLOATING_LANE                     : 1;	/*      3     r/w   1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
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

// 0x24	ANA_EOM_REG0		
typedef union {
	struct {
		uint8_t EOM_RESET_INTP_EXT_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t EOM_DPHERCK_DLY_SEL_LANE_1_0             : 2;	/*  [2:1]     r/w 2'h1*/
		uint8_t EOM_CLK_EN_LANE                          : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG0_t;
__xdata __at( 0x90 ) volatile ANA_EOM_REG0_t ANA_EOM_REG0;
#define reg_EOM_RESET_INTP_EXT_LANE  ANA_EOM_REG0.BF.EOM_RESET_INTP_EXT_LANE
#define reg_EOM_DPHERCK_DLY_SEL_LANE_1_0  ANA_EOM_REG0.BF.EOM_DPHERCK_DLY_SEL_LANE_1_0
#define reg_EOM_CLK_EN_LANE  ANA_EOM_REG0.BF.EOM_CLK_EN_LANE

// 0x25	ANA_DTL_REG1		
typedef union {
	struct {
		uint8_t DTL_DLY_CTRL_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t DPHERCK_DLY_SEL_LANE_1_0                 : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DTL_REG1_t;
__xdata __at( 0x94 ) volatile ANA_DTL_REG1_t ANA_DTL_REG1;
#define reg_DTL_DLY_CTRL_LANE_1_0  ANA_DTL_REG1.BF.DTL_DLY_CTRL_LANE_1_0
#define reg_DPHERCK_DLY_SEL_LANE_1_0  ANA_DTL_REG1.BF.DPHERCK_DLY_SEL_LANE_1_0

// 0x26	ANA_EOM_REG2		
typedef union {
	struct {
		uint8_t EOM_DLL_FREQ_SEL_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h7*/
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
#define reg_EOM_DLL_FREQ_SEL_LANE_2_0  ANA_EOM_REG2.BF.EOM_DLL_FREQ_SEL_LANE_2_0

// 0x27	ANA_EOM_REG3		
typedef union {
	struct {
		uint8_t EOM_INTP_BIAS_SHORT_EN_LANE              : 1;	/*      0     r/w   0*/
		uint8_t RXINTP_BIAS_SHORT_EN_LANE                : 1;	/*      1     r/w   0*/
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
__xdata __at( 0x9c ) volatile ANA_EOM_REG3_t ANA_EOM_REG3;
#define reg_EOM_INTP_BIAS_SHORT_EN_LANE  ANA_EOM_REG3.BF.EOM_INTP_BIAS_SHORT_EN_LANE
#define reg_RXINTP_BIAS_SHORT_EN_LANE  ANA_EOM_REG3.BF.RXINTP_BIAS_SHORT_EN_LANE

// 0x28	ANA_TXINTP_REG0		
typedef union {
	struct {
		uint8_t TXINTPI_LANE_3_0                         : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXINTP_REG0_t;
__xdata __at( 0xa0 ) volatile ANA_TXINTP_REG0_t ANA_TXINTP_REG0;
#define reg_TXINTPI_LANE_3_0  ANA_TXINTP_REG0.BF.TXINTPI_LANE_3_0

// 0x29	ANA_EOM_REG5		
typedef union {
	struct {
		uint8_t EOM_EN_S_LANE                            : 1;	/*      0     r/w   0*/
		uint8_t EOM_EN_E_LANE                            : 1;	/*      1     r/w   0*/
		uint8_t EOM_EN_D_LANE                            : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_EOM_REG5_t;
__xdata __at( 0xa4 ) volatile ANA_EOM_REG5_t ANA_EOM_REG5;
#define reg_EOM_EN_S_LANE  ANA_EOM_REG5.BF.EOM_EN_S_LANE
#define reg_EOM_EN_E_LANE  ANA_EOM_REG5.BF.EOM_EN_E_LANE
#define reg_EOM_EN_D_LANE  ANA_EOM_REG5.BF.EOM_EN_D_LANE

// 0x2a	ANA_IMPCAL_REG0		
typedef union {
	struct {
		uint8_t IDCON_CUR_LANE_1_0                       : 2;	/*  [1:0]     r/w   0*/
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
		uint8_t IMPCAL_RX_LANE_4_0                       : 5;	/*  [4:0]     r/w 5'hf*/
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
		uint8_t RXINTPI_LANE_3_0                         : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_INTPI_REG0_t;
__xdata __at( 0xb0 ) volatile ANA_INTPI_REG0_t ANA_INTPI_REG0;
#define reg_RXINTPI_LANE_3_0  ANA_INTPI_REG0.BF.RXINTPI_LANE_3_0

// 0x2d	ANA_INTPI_DIFF_REG0		
typedef union {
	struct {
		uint8_t RXINTPI_DIFF_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_INTPI_DIFF_REG0_t;
__xdata __at( 0xb4 ) volatile ANA_INTPI_DIFF_REG0_t ANA_INTPI_DIFF_REG0;
#define reg_RXINTPI_DIFF_LANE_2_0  ANA_INTPI_DIFF_REG0.BF.RXINTPI_DIFF_LANE_2_0

// 0x2e	ANA_MISC_REG1		
typedef union {
	struct {
		uint8_t PU_VCM_LANE                              : 1;	/*      0     r/w   1*/
		uint8_t PU_OS_LANE                               : 1;	/*      1     r/w   1*/
		uint8_t PU_LB_LANE                               : 1;	/*      2     r/w   0*/
		uint8_t PATH_DISABLE_S_P2P4_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t PATH_DISABLE_D_P2P4_LANE                 : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG1_t;
__xdata __at( 0xb8 ) volatile ANA_MISC_REG1_t ANA_MISC_REG1;
#define reg_PU_VCM_LANE  ANA_MISC_REG1.BF.PU_VCM_LANE
#define reg_PU_OS_LANE  ANA_MISC_REG1.BF.PU_OS_LANE
#define reg_PU_LB_LANE  ANA_MISC_REG1.BF.PU_LB_LANE
#define reg_PATH_DISABLE_S_P2P4_LANE  ANA_MISC_REG1.BF.PATH_DISABLE_S_P2P4_LANE
#define reg_PATH_DISABLE_D_P2P4_LANE  ANA_MISC_REG1.BF.PATH_DISABLE_D_P2P4_LANE

// 0x2f	ANA_MISC_REG2		
typedef union {
	struct {
		uint8_t RESET_INTP_EXT_LANE                      : 1;	/*      0     r/w   0*/
		uint8_t REG_SQUELCH_PLOOP_ON_LANE                : 1;	/*      1     r/w   1*/
		uint8_t REG_SQ_DET_LANE                          : 1;	/*      2     r/w   1*/
		uint8_t REG_FLOOP_EN_LANE                        : 1;	/*      3     r/w   1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
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

// 0x30	ANA_SMPLR_REG0		
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t PU_SMPLR_D_P1_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG0_t;
__xdata __at( 0xc0 ) volatile ANA_SMPLR_REG0_t ANA_SMPLR_REG0;
#define reg_PU_SMPLR_D_P3_LANE_2_0  ANA_SMPLR_REG0.BF.PU_SMPLR_D_P3_LANE_2_0
#define reg_PU_SMPLR_D_P1_LANE_2_0  ANA_SMPLR_REG0.BF.PU_SMPLR_D_P1_LANE_2_0

// 0x31	ANA_SMPLR_REG_1		
typedef union {
	struct {
		uint8_t REG_SELMUPF_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG_1_t;
__xdata __at( 0xc4 ) volatile ANA_SMPLR_REG_1_t ANA_SMPLR_REG_1;
#define reg_REG_SELMUPF_LANE_3_0  ANA_SMPLR_REG_1.BF.REG_SELMUPF_LANE_3_0

// 0x32	ANA_SMPLR_REG_2		
typedef union {
	struct {
		uint8_t PU_SMPLR_S_P3_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t PU_SMPLR_S_P1_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG_2_t;
__xdata __at( 0xc8 ) volatile ANA_SMPLR_REG_2_t ANA_SMPLR_REG_2;
#define reg_PU_SMPLR_S_P3_LANE_2_0  ANA_SMPLR_REG_2.BF.PU_SMPLR_S_P3_LANE_2_0
#define reg_PU_SMPLR_S_P1_LANE_2_0  ANA_SMPLR_REG_2.BF.PU_SMPLR_S_P1_LANE_2_0

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
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
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

// 0x35	ANA_SMPLR_REG1		
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P4_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t PU_SMPLR_D_P2_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG1_t;
__xdata __at( 0xd4 ) volatile ANA_SMPLR_REG1_t ANA_SMPLR_REG1;
#define reg_PU_SMPLR_D_P4_LANE_2_0  ANA_SMPLR_REG1.BF.PU_SMPLR_D_P4_LANE_2_0
#define reg_PU_SMPLR_D_P2_LANE_2_0  ANA_SMPLR_REG1.BF.PU_SMPLR_D_P2_LANE_2_0

// 0x36	ANA_SMPLR_REG2		
typedef union {
	struct {
		uint8_t PU_SMPLR_S_P4_LANE_2_0                   : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t PU_SMPLR_S_P2_LANE_2_0                   : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_REG2_t;
__xdata __at( 0xd8 ) volatile ANA_SMPLR_REG2_t ANA_SMPLR_REG2;
#define reg_PU_SMPLR_S_P4_LANE_2_0  ANA_SMPLR_REG2.BF.PU_SMPLR_S_P4_LANE_2_0
#define reg_PU_SMPLR_S_P2_LANE_2_0  ANA_SMPLR_REG2.BF.PU_SMPLR_S_P2_LANE_2_0

// 0x37	ANA_TXINTP_REG1		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t TXINTPR_LANE_1_0                         : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXINTP_REG1_t;
__xdata __at( 0xdc ) volatile ANA_TXINTP_REG1_t ANA_TXINTP_REG1;
#define reg_TXINTPR_LANE_1_0  ANA_TXINTP_REG1.BF.TXINTPR_LANE_1_0

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
		uint8_t RXSPEED_DIV_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
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

// 0x3b	ANA_SMPLR_REG4		
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
} ANA_SMPLR_REG4_t;
__xdata __at( 0xec ) volatile ANA_SMPLR_REG4_t ANA_SMPLR_REG4;
#define reg_INTPR_LANE_1_0  ANA_SMPLR_REG4.BF.INTPR_LANE_1_0

// 0x3c	ANA_RXREG_REG3		
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_CLK_HALF_LANE             : 1;	/*      0     r/w   0*/
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
} ANA_RXREG_REG3_t;
__xdata __at( 0xf0 ) volatile ANA_RXREG_REG3_t ANA_RXREG_REG3;
#define reg_RXREG_SPEEDTRK_CLK_HALF_LANE  ANA_RXREG_REG3.BF.RXREG_SPEEDTRK_CLK_HALF_LANE

// 0x3d	ANA_SQ_REG0		
typedef union {
	struct {
		uint8_t SQ_AMPBW_LANE_1_0                        : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t SQ_CAL_EN_LANE                           : 1;	/*      2     r/w   0*/
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
#define reg_SQ_CAL_EN_LANE  ANA_SQ_REG0.BF.SQ_CAL_EN_LANE
#define reg_SQ_LINEAR_DISABLE_LANE  ANA_SQ_REG0.BF.SQ_LINEAR_DISABLE_LANE

// 0x3f	ANA_TXDCC_REG0		
typedef union {
	struct {
		uint8_t TXDCC_HG_LANE                            : 1;	/*      0     r/w   0*/
		uint8_t TXDCC_EN_LANE                            : 1;	/*      1     r/w   1*/
		uint8_t TXINTP_SSC_CLK_EN_LANE                   : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDCC_REG0_t;
__xdata __at( 0xfc ) volatile ANA_TXDCC_REG0_t ANA_TXDCC_REG0;
#define reg_TXDCC_HG_LANE  ANA_TXDCC_REG0.BF.TXDCC_HG_LANE
#define reg_TXDCC_EN_LANE  ANA_TXDCC_REG0.BF.TXDCC_EN_LANE
#define reg_TXINTP_SSC_CLK_EN_LANE  ANA_TXDCC_REG0.BF.TXINTP_SSC_CLK_EN_LANE

// 0x40	ANA_PATH_EDGE_REG1		
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_LANE              : 1;	/*      0     r/w   0*/
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
} ANA_PATH_EDGE_REG1_t;
__xdata __at( 0x100 ) volatile ANA_PATH_EDGE_REG1_t ANA_PATH_EDGE_REG1;
#define reg_PATH_DISABLE_EDGE_P2P4_LANE  ANA_PATH_EDGE_REG1.BF.PATH_DISABLE_EDGE_P2P4_LANE

// 0x41	ANA_PATH_DISABLE_REG0		
typedef union {
	struct {
		uint8_t PATH_DISABLE_S_P1P3_LANE                 : 1;	/*      0     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PATH_DISABLE_REG0_t;
__xdata __at( 0x104 ) volatile ANA_PATH_DISABLE_REG0_t ANA_PATH_DISABLE_REG0;
#define reg_PATH_DISABLE_S_P1P3_LANE  ANA_PATH_DISABLE_REG0.BF.PATH_DISABLE_S_P1P3_LANE
#define reg_PATH_DISABLE_D_P1P3_LANE  ANA_PATH_DISABLE_REG0.BF.PATH_DISABLE_D_P1P3_LANE

// 0x42	ANA_SLEW_REG0		
typedef union {
	struct {
		uint8_t SEL_EDGE_DLY_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t SEL_EDGE_EQ_LANE                         : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SLEW_REG0_t;
__xdata __at( 0x108 ) volatile ANA_SLEW_REG0_t ANA_SLEW_REG0;
#define reg_SEL_EDGE_DLY_LANE_1_0  ANA_SLEW_REG0.BF.SEL_EDGE_DLY_LANE_1_0
#define reg_SEL_EDGE_EQ_LANE  ANA_SLEW_REG0.BF.SEL_EDGE_EQ_LANE

// 0x43	ANA_TXCAL_REG1		
typedef union {
	struct {
		uint8_t TXCAL_EN_LANE                            : 1;	/*      0     r/w   0*/
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
} ANA_TXCAL_REG1_t;
__xdata __at( 0x10c ) volatile ANA_TXCAL_REG1_t ANA_TXCAL_REG1;
#define reg_TXCAL_EN_LANE  ANA_TXCAL_REG1.BF.TXCAL_EN_LANE

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
		uint8_t SQ_OFFSET_LANE_4_0                       : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SQ_REG5_t;
__xdata __at( 0x11c ) volatile ANA_SQ_REG5_t ANA_SQ_REG5;
#define reg_SQ_OFFSET_LANE_4_0  ANA_SQ_REG5.BF.SQ_OFFSET_LANE_4_0

// 0x48	ANA_MISC_REG3		
typedef union {
	struct {
		uint8_t TEST_LANE_9_8                            : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TXCLK_ALIGN_EN_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t TSEN_SEL_LANE                            : 1;	/*      3     r/w   0*/
		uint8_t TXALIGN90_REF_FILT_BW_LANE               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG3_t;
__xdata __at( 0x120 ) volatile ANA_MISC_REG3_t ANA_MISC_REG3;
#define reg_TEST_LANE_9_8  ANA_MISC_REG3.BF.TEST_LANE_9_8
#define reg_TXCLK_ALIGN_EN_LANE  ANA_MISC_REG3.BF.TXCLK_ALIGN_EN_LANE
#define reg_TSEN_SEL_LANE  ANA_MISC_REG3.BF.TSEN_SEL_LANE
#define reg_TXALIGN90_REF_FILT_BW_LANE  ANA_MISC_REG3.BF.TXALIGN90_REF_FILT_BW_LANE

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

// 0x4a	ANA_CLK_CAL		
typedef union {
	struct {
		uint8_t PU_ALIGN90_DCC_CMP_LANE                  : 1;	/*      0     r/w   1*/
		uint8_t PU_EOM_ALIGN90_DCC_CMP_LANE              : 1;	/*      1     r/w   0*/
		uint8_t DLL_VDDA_INI_EN_LANE                     : 1;	/*      2     r/w   0*/
		uint8_t EOM_PI_INI_EN_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CLK_CAL_t;
__xdata __at( 0x128 ) volatile ANA_CLK_CAL_t ANA_CLK_CAL;
#define reg_PU_ALIGN90_DCC_CMP_LANE  ANA_CLK_CAL.BF.PU_ALIGN90_DCC_CMP_LANE
#define reg_PU_EOM_ALIGN90_DCC_CMP_LANE  ANA_CLK_CAL.BF.PU_EOM_ALIGN90_DCC_CMP_LANE
#define reg_DLL_VDDA_INI_EN_LANE  ANA_CLK_CAL.BF.DLL_VDDA_INI_EN_LANE
#define reg_EOM_PI_INI_EN_LANE  ANA_CLK_CAL.BF.EOM_PI_INI_EN_LANE

// 0x4b	ANA_TXIMP_REG0		
typedef union {
	struct {
		uint8_t TXIMPCAL_SIDE_LANE                       : 1;	/*      0     r/w   0*/
		uint8_t TXIMPCAL_EN_LANE                         : 1;	/*      1     r/w   0*/
		uint8_t TXIMPCAL_BOT_LANE                        : 1;	/*      2     r/w   0*/
		uint8_t TXDCC_PDIV_EN_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t RCAL_2ND_EN_LANE                         : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
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
#define reg_TXDCC_PDIV_EN_LANE  ANA_TXIMP_REG0.BF.TXDCC_PDIV_EN_LANE
#define reg_RCAL_2ND_EN_LANE  ANA_TXIMP_REG0.BF.RCAL_2ND_EN_LANE

// 0x4c	NOT_USED8		
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} NOT_USED8_t;
__xdata __at( 0x130 ) volatile NOT_USED8_t NOT_USED8;
#define reg_CTLE_LOW_SPEED_SEL_LANE_1_0  NOT_USED8.BF.CTLE_LOW_SPEED_SEL_LANE_1_0

// 0x4d	NOT_USED9		
typedef union {
	struct {
		uint8_t CTLE_BYPASS2_EN_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t CTLE_BYPASS1_EN_LANE                     : 1;	/*      1     r/w   1*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} NOT_USED9_t;
__xdata __at( 0x134 ) volatile NOT_USED9_t NOT_USED9;
#define reg_CTLE_BYPASS2_EN_LANE  NOT_USED9.BF.CTLE_BYPASS2_EN_LANE
#define reg_CTLE_BYPASS1_EN_LANE  NOT_USED9.BF.CTLE_BYPASS1_EN_LANE

// 0x4e	ANA_AFIR_P_REG1		
typedef union {
	struct {
		uint8_t RXFIR_CAPSELP_DLY1_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RXFIR_CAPSELP_ESD_LANE_3_0               : 4;	/*  [7:4]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_P_REG1_t;
__xdata __at( 0x138 ) volatile ANA_AFIR_P_REG1_t ANA_AFIR_P_REG1;
#define reg_RXFIR_CAPSELP_DLY1_LANE_3_0  ANA_AFIR_P_REG1.BF.RXFIR_CAPSELP_DLY1_LANE_3_0
#define reg_RXFIR_CAPSELP_ESD_LANE_3_0  ANA_AFIR_P_REG1.BF.RXFIR_CAPSELP_ESD_LANE_3_0

// 0x4f	ANA_AFIR_P_REG2		
typedef union {
	struct {
		uint8_t RXFIR_CAPSELP_F0_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RXFIR_CAPSELP_F1_LANE_3_0                : 4;	/*  [7:4]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_P_REG2_t;
__xdata __at( 0x13c ) volatile ANA_AFIR_P_REG2_t ANA_AFIR_P_REG2;
#define reg_RXFIR_CAPSELP_F0_LANE_3_0  ANA_AFIR_P_REG2.BF.RXFIR_CAPSELP_F0_LANE_3_0
#define reg_RXFIR_CAPSELP_F1_LANE_3_0  ANA_AFIR_P_REG2.BF.RXFIR_CAPSELP_F1_LANE_3_0

// 0x50	ANA_AFIR_P_REG3		
typedef union {
	struct {
		uint8_t RXFIR_CAPSELP_FN1_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RXFIR_CAPSELP_TERM_LANE_3_0              : 4;	/*  [7:4]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_P_REG3_t;
__xdata __at( 0x140 ) volatile ANA_AFIR_P_REG3_t ANA_AFIR_P_REG3;
#define reg_RXFIR_CAPSELP_FN1_LANE_3_0  ANA_AFIR_P_REG3.BF.RXFIR_CAPSELP_FN1_LANE_3_0
#define reg_RXFIR_CAPSELP_TERM_LANE_3_0  ANA_AFIR_P_REG3.BF.RXFIR_CAPSELP_TERM_LANE_3_0

// 0x51	ANA_SMPLR_CAL_REG0		
typedef union {
	struct {
		uint8_t SMPLR_CAL_EN_P1P3_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t SMPLR_CAL_EN_P2P4_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_CAL_REG0_t;
__xdata __at( 0x144 ) volatile ANA_SMPLR_CAL_REG0_t ANA_SMPLR_CAL_REG0;
#define reg_SMPLR_CAL_EN_P1P3_LANE  ANA_SMPLR_CAL_REG0.BF.SMPLR_CAL_EN_P1P3_LANE
#define reg_SMPLR_CAL_EN_P2P4_LANE  ANA_SMPLR_CAL_REG0.BF.SMPLR_CAL_EN_P2P4_LANE

// 0x52	ANA_SMPLR_REG6		
typedef union {
	struct {
		uint8_t VCM_SMPLR_GEN_CTRL_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t VDDA_RXSAMPLER_HALF_EN_LANE              : 1;	/*      2     r/w   0*/
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
#define reg_VDDA_RXSAMPLER_HALF_EN_LANE  ANA_SMPLR_REG6.BF.VDDA_RXSAMPLER_HALF_EN_LANE

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
		uint8_t VICM_DFE_F9TO14_CTRL_LANE_1_0            : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t VICM_DFE_F15171921_CTRL_LANE_1_0         : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t VICM_DFE_F16182022_CTRL_LANE_1_0         : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t VICM_DFE_F23252729_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG5_t;
__xdata __at( 0x150 ) volatile ANA_DFE_REG5_t ANA_DFE_REG5;
#define reg_VICM_DFE_F9TO14_CTRL_LANE_1_0  ANA_DFE_REG5.BF.VICM_DFE_F9TO14_CTRL_LANE_1_0
#define reg_VICM_DFE_F15171921_CTRL_LANE_1_0  ANA_DFE_REG5.BF.VICM_DFE_F15171921_CTRL_LANE_1_0
#define reg_VICM_DFE_F16182022_CTRL_LANE_1_0  ANA_DFE_REG5.BF.VICM_DFE_F16182022_CTRL_LANE_1_0
#define reg_VICM_DFE_F23252729_CTRL_LANE_1_0  ANA_DFE_REG5.BF.VICM_DFE_F23252729_CTRL_LANE_1_0

// 0x55	ANA_DFE_REG6		
typedef union {
	struct {
		uint8_t VICM_DFE_F8_CTRL_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t VICM_DFE_F7_CTRL_LANE_1_0                : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t VICM_DFE_F6_CTRL_LANE_1_0                : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t VICM_DFE_F5_CTRL_LANE_1_0                : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_REG6_t;
__xdata __at( 0x154 ) volatile ANA_DFE_REG6_t ANA_DFE_REG6;
#define reg_VICM_DFE_F8_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F8_CTRL_LANE_1_0
#define reg_VICM_DFE_F7_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F7_CTRL_LANE_1_0
#define reg_VICM_DFE_F6_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F6_CTRL_LANE_1_0
#define reg_VICM_DFE_F5_CTRL_LANE_1_0  ANA_DFE_REG6.BF.VICM_DFE_F5_CTRL_LANE_1_0

// 0x56	ANA_VDD_REG0		
typedef union {
	struct {
		uint8_t VDDA_RXEOMCLK_HALF_EN_LANE               : 1;	/*      0     r/w   0*/
		uint8_t VDDA_RXDLL_HALF_EN_LANE                  : 1;	/*      1     r/w   0*/
		uint8_t VDDA_RXDATACLK_HALF_EN_LANE              : 1;	/*      2     r/w   0*/
		uint8_t VCM_SMPLR_SEL_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t VREF_SHIFT_LANE_1_0                      : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t VICM_DFE_F24262830_CTRL_LANE_1_0         : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_VDD_REG0_t;
__xdata __at( 0x158 ) volatile ANA_VDD_REG0_t ANA_VDD_REG0;
#define reg_VDDA_RXEOMCLK_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXEOMCLK_HALF_EN_LANE
#define reg_VDDA_RXDLL_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXDLL_HALF_EN_LANE
#define reg_VDDA_RXDATACLK_HALF_EN_LANE  ANA_VDD_REG0.BF.VDDA_RXDATACLK_HALF_EN_LANE
#define reg_VCM_SMPLR_SEL_LANE  ANA_VDD_REG0.BF.VCM_SMPLR_SEL_LANE
#define reg_VREF_SHIFT_LANE_1_0  ANA_VDD_REG0.BF.VREF_SHIFT_LANE_1_0
#define reg_VICM_DFE_F24262830_CTRL_LANE_1_0  ANA_VDD_REG0.BF.VICM_DFE_F24262830_CTRL_LANE_1_0

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
		uint8_t CTLE_1ST_COMP_DIG_EN_LANE                : 1;	/*      3     r/w   0*/
		uint8_t CTLE_1ST_COMP_ANA_EN_LANE                : 1;	/*      4     r/w   1*/
		uint8_t CTLE_2ND_COMP_DIG_EN_LANE                : 1;	/*      5     r/w   0*/
		uint8_t CTLE_2ND_COMP_ANA_EN_LANE                : 1;	/*      6     r/w   1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG4_t;
__xdata __at( 0x164 ) volatile ANA_MISC_REG4_t ANA_MISC_REG4;
#define reg_ACCAP_CLKDIV_SEL_LANE_2_0  ANA_MISC_REG4.BF.ACCAP_CLKDIV_SEL_LANE_2_0
#define reg_CTLE_1ST_COMP_DIG_EN_LANE  ANA_MISC_REG4.BF.CTLE_1ST_COMP_DIG_EN_LANE
#define reg_CTLE_1ST_COMP_ANA_EN_LANE  ANA_MISC_REG4.BF.CTLE_1ST_COMP_ANA_EN_LANE
#define reg_CTLE_2ND_COMP_DIG_EN_LANE  ANA_MISC_REG4.BF.CTLE_2ND_COMP_DIG_EN_LANE
#define reg_CTLE_2ND_COMP_ANA_EN_LANE  ANA_MISC_REG4.BF.CTLE_2ND_COMP_ANA_EN_LANE

// 0x5a	ANA_CTLE_REG9		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t CTLE_HPF_RSEL_1ST_LANE_1_0               : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t CTLE_HPF_RSEL_2ND_LANE_1_0               : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG9_t;
__xdata __at( 0x168 ) volatile ANA_CTLE_REG9_t ANA_CTLE_REG9;
#define reg_CTLE_HPF_RSEL_1ST_LANE_1_0  ANA_CTLE_REG9.BF.CTLE_HPF_RSEL_1ST_LANE_1_0
#define reg_CTLE_HPF_RSEL_2ND_LANE_1_0  ANA_CTLE_REG9.BF.CTLE_HPF_RSEL_2ND_LANE_1_0

// 0x5b	ANA_CTLE_REG10		
typedef union {
	struct {
		uint8_t CTLE_IPP_1ST_GM_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t CTLE_IPTAT_1ST_GM_LANE_1_0               : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG10_t;
__xdata __at( 0x16c ) volatile ANA_CTLE_REG10_t ANA_CTLE_REG10;
#define reg_CTLE_IPP_1ST_GM_LANE_4_0  ANA_CTLE_REG10.BF.CTLE_IPP_1ST_GM_LANE_4_0
#define reg_CTLE_IPTAT_1ST_GM_LANE_1_0  ANA_CTLE_REG10.BF.CTLE_IPTAT_1ST_GM_LANE_1_0

// 0x5c	ANA_CTLE_REG11		
typedef union {
	struct {
		uint8_t CTLE_IPP_2ND_P1_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t CTLE_IPTAT_2ND_P1_LANE_1_0               : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG11_t;
__xdata __at( 0x170 ) volatile ANA_CTLE_REG11_t ANA_CTLE_REG11;
#define reg_CTLE_IPP_2ND_P1_LANE_4_0  ANA_CTLE_REG11.BF.CTLE_IPP_2ND_P1_LANE_4_0
#define reg_CTLE_IPTAT_2ND_P1_LANE_1_0  ANA_CTLE_REG11.BF.CTLE_IPTAT_2ND_P1_LANE_1_0

// 0x5d	ANA_CTLE_REG12		
typedef union {
	struct {
		uint8_t CTLE_IPP_2ND_P2_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t CTLE_IPTAT_2ND_P2_LANE_1_0               : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG12_t;
__xdata __at( 0x174 ) volatile ANA_CTLE_REG12_t ANA_CTLE_REG12;
#define reg_CTLE_IPP_2ND_P2_LANE_4_0  ANA_CTLE_REG12.BF.CTLE_IPP_2ND_P2_LANE_4_0
#define reg_CTLE_IPTAT_2ND_P2_LANE_1_0  ANA_CTLE_REG12.BF.CTLE_IPTAT_2ND_P2_LANE_1_0

// 0x5e	ANA_CTLE_REG13		
typedef union {
	struct {
		uint8_t CTLE_IPP_2ND_P3_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t CTLE_IPTAT_2ND_P3_LANE_1_0               : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG13_t;
__xdata __at( 0x178 ) volatile ANA_CTLE_REG13_t ANA_CTLE_REG13;
#define reg_CTLE_IPP_2ND_P3_LANE_4_0  ANA_CTLE_REG13.BF.CTLE_IPP_2ND_P3_LANE_4_0
#define reg_CTLE_IPTAT_2ND_P3_LANE_1_0  ANA_CTLE_REG13.BF.CTLE_IPTAT_2ND_P3_LANE_1_0

// 0x5f	ANA_CTLE_REG14		
typedef union {
	struct {
		uint8_t CTLE_IPP_2ND_P4_LANE_4_0                 : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t CTLE_IPTAT_2ND_P4_LANE_1_0               : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_REG14_t;
__xdata __at( 0x17c ) volatile ANA_CTLE_REG14_t ANA_CTLE_REG14;
#define reg_CTLE_IPP_2ND_P4_LANE_4_0  ANA_CTLE_REG14.BF.CTLE_IPP_2ND_P4_LANE_4_0
#define reg_CTLE_IPTAT_2ND_P4_LANE_1_0  ANA_CTLE_REG14.BF.CTLE_IPTAT_2ND_P4_LANE_1_0

// 0x60	ANA_AFIR_REG1		
typedef union {
	struct {
		uint8_t RXFIR_CAPSELN_DLY1_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RXFIR_CAPSELN_ESD_LANE_3_0               : 4;	/*  [7:4]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG1_t;
__xdata __at( 0x180 ) volatile ANA_AFIR_REG1_t ANA_AFIR_REG1;
#define reg_RXFIR_CAPSELN_DLY1_LANE_3_0  ANA_AFIR_REG1.BF.RXFIR_CAPSELN_DLY1_LANE_3_0
#define reg_RXFIR_CAPSELN_ESD_LANE_3_0  ANA_AFIR_REG1.BF.RXFIR_CAPSELN_ESD_LANE_3_0

// 0x61	ANA_AFIR_REG2		
typedef union {
	struct {
		uint8_t RXFIR_CAPSELN_F0_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RXFIR_CAPSELN_F1_LANE_3_0                : 4;	/*  [7:4]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG2_t;
__xdata __at( 0x184 ) volatile ANA_AFIR_REG2_t ANA_AFIR_REG2;
#define reg_RXFIR_CAPSELN_F0_LANE_3_0  ANA_AFIR_REG2.BF.RXFIR_CAPSELN_F0_LANE_3_0
#define reg_RXFIR_CAPSELN_F1_LANE_3_0  ANA_AFIR_REG2.BF.RXFIR_CAPSELN_F1_LANE_3_0

// 0x62	ANA_AFIR_REG3		
typedef union {
	struct {
		uint8_t RXFIR_CAPSELN_FN1_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RXFIR_CAPSELN_TERM_LANE_3_0              : 4;	/*  [7:4]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG3_t;
__xdata __at( 0x188 ) volatile ANA_AFIR_REG3_t ANA_AFIR_REG3;
#define reg_RXFIR_CAPSELN_FN1_LANE_3_0  ANA_AFIR_REG3.BF.RXFIR_CAPSELN_FN1_LANE_3_0
#define reg_RXFIR_CAPSELN_TERM_LANE_3_0  ANA_AFIR_REG3.BF.RXFIR_CAPSELN_TERM_LANE_3_0

// 0x63	ANA_AFIR_REG4		
typedef union {
	struct {
		uint8_t RXFIR_CAPSELN_DLY2_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RXFIR_CAPSELP_DLY2_LANE_3_0              : 4;	/*  [7:4]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_AFIR_REG4_t;
__xdata __at( 0x18c ) volatile ANA_AFIR_REG4_t ANA_AFIR_REG4;
#define reg_RXFIR_CAPSELN_DLY2_LANE_3_0  ANA_AFIR_REG4.BF.RXFIR_CAPSELN_DLY2_LANE_3_0
#define reg_RXFIR_CAPSELP_DLY2_LANE_3_0  ANA_AFIR_REG4.BF.RXFIR_CAPSELP_DLY2_LANE_3_0

// 0x64	ANA_CTLE_ICTRL0		
typedef union {
	struct {
		uint8_t CTLE_IPP_1ST_TIA_LANE_4_0                : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t CTLE_IPTAT_1ST_TIA_LANE_1_0              : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_ICTRL0_t;
__xdata __at( 0x190 ) volatile ANA_CTLE_ICTRL0_t ANA_CTLE_ICTRL0;
#define reg_CTLE_IPP_1ST_TIA_LANE_4_0  ANA_CTLE_ICTRL0.BF.CTLE_IPP_1ST_TIA_LANE_4_0
#define reg_CTLE_IPTAT_1ST_TIA_LANE_1_0  ANA_CTLE_ICTRL0.BF.CTLE_IPTAT_1ST_TIA_LANE_1_0

// 0x65	ANA_CTLE_MIDFREQ_REG0		
typedef union {
	struct {
		uint8_t CTLE_RS1_MID_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t CTLE_CS1_MID_LANE_1_0                    : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t EN_CTLE_MID_FREQ_LANE                    : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_MIDFREQ_REG0_t;
__xdata __at( 0x194 ) volatile ANA_CTLE_MIDFREQ_REG0_t ANA_CTLE_MIDFREQ_REG0;
#define reg_CTLE_RS1_MID_LANE_1_0  ANA_CTLE_MIDFREQ_REG0.BF.CTLE_RS1_MID_LANE_1_0
#define reg_CTLE_CS1_MID_LANE_1_0  ANA_CTLE_MIDFREQ_REG0.BF.CTLE_CS1_MID_LANE_1_0
#define reg_EN_CTLE_MID_FREQ_LANE  ANA_CTLE_MIDFREQ_REG0.BF.EN_CTLE_MID_FREQ_LANE

// 0x66	ANA_CTLE_TIA_CTRL		
typedef union {
	struct {
		uint8_t CTLE_RL1_TIA_SEL_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t CTLE_RL1_TIA_EXTRA_LANE_2_0              : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_TIA_CTRL_t;
__xdata __at( 0x198 ) volatile ANA_CTLE_TIA_CTRL_t ANA_CTLE_TIA_CTRL;
#define reg_CTLE_RL1_TIA_SEL_LANE_3_0  ANA_CTLE_TIA_CTRL.BF.CTLE_RL1_TIA_SEL_LANE_3_0
#define reg_CTLE_RL1_TIA_EXTRA_LANE_2_0  ANA_CTLE_TIA_CTRL.BF.CTLE_RL1_TIA_EXTRA_LANE_2_0

// 0x67	ANA_CTLE_ICTRL3		
typedef union {
	struct {
		uint8_t CTLE_CURRENT1_TIA_SEL_LANE_3_0           : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_ICTRL3_t;
__xdata __at( 0x19c ) volatile ANA_CTLE_ICTRL3_t ANA_CTLE_ICTRL3;
#define reg_CTLE_CURRENT1_TIA_SEL_LANE_3_0  ANA_CTLE_ICTRL3.BF.CTLE_CURRENT1_TIA_SEL_LANE_3_0

// 0x68	ANA_CTLE_ICTRL4		
typedef union {
	struct {
		uint8_t CTLE_CURRENT2_SEL_G_P1_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_ICTRL4_t;
__xdata __at( 0x1a0 ) volatile ANA_CTLE_ICTRL4_t ANA_CTLE_ICTRL4;
#define reg_CTLE_CURRENT2_SEL_G_P1_LANE_3_0  ANA_CTLE_ICTRL4.BF.CTLE_CURRENT2_SEL_G_P1_LANE_3_0

// 0x69	ANA_CTLE_ICTRL5		
typedef union {
	struct {
		uint8_t CTLE_CURRENT2_SEL_G_P2_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_ICTRL5_t;
__xdata __at( 0x1a4 ) volatile ANA_CTLE_ICTRL5_t ANA_CTLE_ICTRL5;
#define reg_CTLE_CURRENT2_SEL_G_P2_LANE_3_0  ANA_CTLE_ICTRL5.BF.CTLE_CURRENT2_SEL_G_P2_LANE_3_0

// 0x7a	ANA_CTLE_ICTRL6		
typedef union {
	struct {
		uint8_t CTLE_CURRENT2_SEL_G_P3_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_ICTRL6_t;
__xdata __at( 0x1e8 ) volatile ANA_CTLE_ICTRL6_t ANA_CTLE_ICTRL6;
#define reg_CTLE_CURRENT2_SEL_G_P3_LANE_3_0  ANA_CTLE_ICTRL6.BF.CTLE_CURRENT2_SEL_G_P3_LANE_3_0

// 0x7b	ANA_CTLE_ICTRL7		
typedef union {
	struct {
		uint8_t CTLE_CURRENT2_SEL_G_P4_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CTLE_ICTRL7_t;
__xdata __at( 0x1ec ) volatile ANA_CTLE_ICTRL7_t ANA_CTLE_ICTRL7;
#define reg_CTLE_CURRENT2_SEL_G_P4_LANE_3_0  ANA_CTLE_ICTRL7.BF.CTLE_CURRENT2_SEL_G_P4_LANE_3_0

// 0x7c	ANA_TXDRV_REG		
typedef union {
	struct {
		uint8_t TXDRV_COMP_CURRENT_LANE_2_0              : 3;	/*  [2:0]     r/w   0*/
		uint8_t TXDRV_COMP_EN_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t TXDRV_REG_GM_LANE_1_0                    : 2;	/*  [5:4]     r/w 2'h3*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDRV_REG_t;
__xdata __at( 0x1f0 ) volatile ANA_TXDRV_REG_t ANA_TXDRV_REG;
#define reg_TXDRV_COMP_CURRENT_LANE_2_0  ANA_TXDRV_REG.BF.TXDRV_COMP_CURRENT_LANE_2_0
#define reg_TXDRV_COMP_EN_LANE  ANA_TXDRV_REG.BF.TXDRV_COMP_EN_LANE
#define reg_TXDRV_REG_GM_LANE_1_0  ANA_TXDRV_REG.BF.TXDRV_REG_GM_LANE_1_0

// 0x7d	ANA_PLLDIV_REG1		
typedef union {
	struct {
		uint8_t RING_REF_DIV_SEL_LANE                    : 1;	/*      0     r/w 1'h0*/
		uint8_t DIV_1G_EN_LANE                           : 1;	/*      1     r/w 1'h1*/
		uint8_t LB_RES_SEL_LANE_3_0                      : 4;	/*  [5:2]     r/w 4'hc*/
		uint8_t DIV_1G_LANE_9_8                          : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLLDIV_REG1_t;
__xdata __at( 0x1f4 ) volatile ANA_PLLDIV_REG1_t ANA_PLLDIV_REG1;
#define reg_RING_REF_DIV_SEL_LANE  ANA_PLLDIV_REG1.BF.RING_REF_DIV_SEL_LANE
#define reg_DIV_1G_EN_LANE  ANA_PLLDIV_REG1.BF.DIV_1G_EN_LANE
#define reg_LB_RES_SEL_LANE_3_0  ANA_PLLDIV_REG1.BF.LB_RES_SEL_LANE_3_0
#define reg_DIV_1G_LANE_9_8  ANA_PLLDIV_REG1.BF.DIV_1G_LANE_9_8

// 0x7e	ANA_PLLDIV_REG2		
typedef union {
	struct {
		uint8_t DIV_1G_LANE_7_0                          : 8;	/*  [7:0]     r/w 8'h38*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLLDIV_REG2_t;
__xdata __at( 0x1f8 ) volatile ANA_PLLDIV_REG2_t ANA_PLLDIV_REG2;
#define reg_DIV_1G_LANE_7_0  ANA_PLLDIV_REG2.BF.DIV_1G_LANE_7_0

// 0x80	PLL_CTRL1		
typedef union {
	struct {
		uint8_t FORCE_NO_DLL_RST_LANE                    : 1;	/*      0     r/w   0*/
		uint8_t VIND_BAND_SEL_LANE                       : 1;	/*      1     r/w 1'h1*/
		uint8_t CLK1G_REFCLK_SEL_LANE                    : 1;	/*      2     r/w   0*/
		uint8_t LCPLL_DCC_CAL_EN_LANE                    : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PLL_CTRL1_t;
__xdata __at( 0x200 ) volatile PLL_CTRL1_t PLL_CTRL1;
#define reg_FORCE_NO_DLL_RST_LANE  PLL_CTRL1.BF.FORCE_NO_DLL_RST_LANE
#define reg_VIND_BAND_SEL_LANE  PLL_CTRL1.BF.VIND_BAND_SEL_LANE
#define reg_CLK1G_REFCLK_SEL_LANE  PLL_CTRL1.BF.CLK1G_REFCLK_SEL_LANE
#define reg_LCPLL_DCC_CAL_EN_LANE  PLL_CTRL1.BF.LCPLL_DCC_CAL_EN_LANE

// 0x81	ANA_PLL0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t FBDIV_LANE_9_8                           : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t PLLCAL_EN_LANE                           : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL0_t;
__xdata __at( 0x204 ) volatile ANA_PLL0_t ANA_PLL0;
#define reg_FBDIV_LANE_9_8  ANA_PLL0.BF.FBDIV_LANE_9_8
#define reg_PLLCAL_EN_LANE  ANA_PLL0.BF.PLLCAL_EN_LANE

// 0x82	ANA_PLL1		
typedef union {
	struct {
		uint8_t FBDIV_LANE_7_0                           : 8;	/*  [7:0]     r/w 8'h2d*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL1_t;
__xdata __at( 0x208 ) volatile ANA_PLL1_t ANA_PLL1;
#define reg_FBDIV_LANE_7_0  ANA_PLL1.BF.FBDIV_LANE_7_0

// 0x83	ANA_PLL2		
typedef union {
	struct {
		uint8_t PLL_LPFR_LANE_1_0                        : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PLL_LPFC_LANE_1_0                        : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t REFDIV_LANE_3_0                          : 4;	/*  [7:4]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL2_t;
__xdata __at( 0x20c ) volatile ANA_PLL2_t ANA_PLL2;
#define reg_PLL_LPFR_LANE_1_0  ANA_PLL2.BF.PLL_LPFR_LANE_1_0
#define reg_PLL_LPFC_LANE_1_0  ANA_PLL2.BF.PLL_LPFC_LANE_1_0
#define reg_REFDIV_LANE_3_0  ANA_PLL2.BF.REFDIV_LANE_3_0

// 0x84	ANA_PLL3		
typedef union {
	struct {
		uint8_t VIND_BIAS_SEL_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t PWEXP_DIS_DIV1G_LANE                     : 1;	/*      2     r/w 1'h0*/
		uint8_t PWEXP_DIS_LANE                           : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL3_t;
__xdata __at( 0x210 ) volatile ANA_PLL3_t ANA_PLL3;
#define reg_VIND_BIAS_SEL_LANE_1_0  ANA_PLL3.BF.VIND_BIAS_SEL_LANE_1_0
#define reg_PWEXP_DIS_DIV1G_LANE  ANA_PLL3.BF.PWEXP_DIS_DIV1G_LANE
#define reg_PWEXP_DIS_LANE  ANA_PLL3.BF.PWEXP_DIS_LANE

// 0x85	ANA_PLL4		
typedef union {
	struct {
		uint8_t LCVCO_SF_ICPTAT_SEL_LANE_2_0             : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t VCAP_OFF_SEL_LANE_1_0                    : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t VCON_REF_SEL_LANE_2_0                    : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL4_t;
__xdata __at( 0x214 ) volatile ANA_PLL4_t ANA_PLL4;
#define reg_LCVCO_SF_ICPTAT_SEL_LANE_2_0  ANA_PLL4.BF.LCVCO_SF_ICPTAT_SEL_LANE_2_0
#define reg_VCAP_OFF_SEL_LANE_1_0  ANA_PLL4.BF.VCAP_OFF_SEL_LANE_1_0
#define reg_VCON_REF_SEL_LANE_2_0  ANA_PLL4.BF.VCON_REF_SEL_LANE_2_0

// 0x86	ANA_PLL5		
typedef union {
	struct {
		uint8_t LCPLL_CLKBUF_EN_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t PLLAMPCAL_EN_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL5_t;
__xdata __at( 0x218 ) volatile ANA_PLL5_t ANA_PLL5;
#define reg_LCPLL_CLKBUF_EN_LANE  ANA_PLL5.BF.LCPLL_CLKBUF_EN_LANE
#define reg_PLLAMPCAL_EN_LANE  ANA_PLL5.BF.PLLAMPCAL_EN_LANE

// 0x87	ANA_PLL6		
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
} ANA_PLL6_t;
__xdata __at( 0x21c ) volatile ANA_PLL6_t ANA_PLL6;

// 0x88	ANA_PLL7		
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
} ANA_PLL7_t;
__xdata __at( 0x220 ) volatile ANA_PLL7_t ANA_PLL7;

// 0x89	ANA_PLL8		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t LCCAP_USB_LANE                           : 1;	/*      4     r/w 1'h0*/
		uint8_t TEMPC_RSHRT_SEL_LANE                     : 1;	/*      5     r/w 1'h0*/
		uint8_t TEMPC_RSHRT_EN_LANE                      : 1;	/*      6     r/w 1'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL8_t;
__xdata __at( 0x224 ) volatile ANA_PLL8_t ANA_PLL8;
#define reg_LCCAP_USB_LANE  ANA_PLL8.BF.LCCAP_USB_LANE
#define reg_TEMPC_RSHRT_SEL_LANE  ANA_PLL8.BF.TEMPC_RSHRT_SEL_LANE
#define reg_TEMPC_RSHRT_EN_LANE  ANA_PLL8.BF.TEMPC_RSHRT_EN_LANE

// 0x8a	ANA_PLL9		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t LCCAP_LSB_LANE_4_0                       : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL9_t;
__xdata __at( 0x228 ) volatile ANA_PLL9_t ANA_PLL9;
#define reg_LCCAP_LSB_LANE_4_0  ANA_PLL9.BF.LCCAP_LSB_LANE_4_0

// 0x8b	ANA_PLL10		
typedef union {
	struct {
		uint8_t VCOAMP_VTH_SEL_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'hC*/
		uint8_t LCCAP_MSB_LANE_3_0                       : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL10_t;
__xdata __at( 0x22c ) volatile ANA_PLL10_t ANA_PLL10;
#define reg_VCOAMP_VTH_SEL_LANE_3_0  ANA_PLL10.BF.VCOAMP_VTH_SEL_LANE_3_0
#define reg_LCCAP_MSB_LANE_3_0  ANA_PLL10.BF.LCCAP_MSB_LANE_3_0

// 0x8c	ANA_PLL11		
typedef union {
	struct {
		uint8_t IND_SW_DAC_SEL_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t VCON_MIN_SEL_LANE_2_0                    : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t VCON_MAX_SEL_LANE_2_0                    : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL11_t;
__xdata __at( 0x230 ) volatile ANA_PLL11_t ANA_PLL11;
#define reg_IND_SW_DAC_SEL_LANE_1_0  ANA_PLL11.BF.IND_SW_DAC_SEL_LANE_1_0
#define reg_VCON_MIN_SEL_LANE_2_0  ANA_PLL11.BF.VCON_MIN_SEL_LANE_2_0
#define reg_VCON_MAX_SEL_LANE_2_0  ANA_PLL11.BF.VCON_MAX_SEL_LANE_2_0

// 0x8d	ANA_PLL12		
typedef union {
	struct {
		uint8_t LCVCO_NSF_IPTAT_EN_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t LCVCOCAL_BUF_EN_LANE                     : 1;	/*      1     r/w 1'h0*/
		uint8_t IND_GATE_MODE_LANE                       : 1;	/*      2     r/w 1'h0*/
		uint8_t VIND_BIAS_EN_LANE                        : 1;	/*      3     r/w 1'h1*/
		uint8_t IND_SW_MODE_LANE                         : 1;	/*      4     r/w 1'h0*/
		uint8_t VARAC_BIAS_SEL_LANE_2_0                  : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL12_t;
__xdata __at( 0x234 ) volatile ANA_PLL12_t ANA_PLL12;
#define reg_LCVCO_NSF_IPTAT_EN_LANE  ANA_PLL12.BF.LCVCO_NSF_IPTAT_EN_LANE
#define reg_LCVCOCAL_BUF_EN_LANE  ANA_PLL12.BF.LCVCOCAL_BUF_EN_LANE
#define reg_IND_GATE_MODE_LANE  ANA_PLL12.BF.IND_GATE_MODE_LANE
#define reg_VIND_BIAS_EN_LANE  ANA_PLL12.BF.VIND_BIAS_EN_LANE
#define reg_IND_SW_MODE_LANE  ANA_PLL12.BF.IND_SW_MODE_LANE
#define reg_VARAC_BIAS_SEL_LANE_2_0  ANA_PLL12.BF.VARAC_BIAS_SEL_LANE_2_0

// 0x8e	ANA_PLL13		
typedef union {
	struct {
		uint8_t LCPLL_DCC_EN_LANE                        : 1;	/*      0     r/w 1'h1*/
		uint8_t LCPLL_DCC_HG_LANE                        : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL13_t;
__xdata __at( 0x238 ) volatile ANA_PLL13_t ANA_PLL13;
#define reg_LCPLL_DCC_EN_LANE  ANA_PLL13.BF.LCPLL_DCC_EN_LANE
#define reg_LCPLL_DCC_HG_LANE  ANA_PLL13.BF.LCPLL_DCC_HG_LANE

// 0x8f	ANA_PLL14		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t VCO_SLAVE_ADJ_LANE_2_0                   : 3;	/*  [3:1]     r/w 3'h3*/
		uint8_t PLL_REG_SEL_LANE_2_0                     : 3;	/*  [6:4]     r/w 3'h4*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL14_t;
__xdata __at( 0x23c ) volatile ANA_PLL14_t ANA_PLL14;
#define reg_VCO_SLAVE_ADJ_LANE_2_0  ANA_PLL14.BF.VCO_SLAVE_ADJ_LANE_2_0
#define reg_PLL_REG_SEL_LANE_2_0  ANA_PLL14.BF.PLL_REG_SEL_LANE_2_0

// 0x91	ANA_PLL15		
typedef union {
	struct {
		uint8_t PLL_ICP_LANE_4_0                         : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL15_t;
__xdata __at( 0x244 ) volatile ANA_PLL15_t ANA_PLL15;
#define reg_PLL_ICP_LANE_4_0  ANA_PLL15.BF.PLL_ICP_LANE_4_0

// 0x92	ANA_PLL16		
typedef union {
	struct {
		uint8_t VCO_REG_MID_SEL_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL16_t;
__xdata __at( 0x248 ) volatile ANA_PLL16_t ANA_PLL16;
#define reg_VCO_REG_MID_SEL_LANE_2_0  ANA_PLL16.BF.VCO_REG_MID_SEL_LANE_2_0

// 0x93	ANA_PLL17		
typedef union {
	struct {
		uint8_t PLL_OPENLOOP_EN_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t TXINTP_RESET_EXT_LANE                    : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL17_t;
__xdata __at( 0x24c ) volatile ANA_PLL17_t ANA_PLL17;
#define reg_PLL_OPENLOOP_EN_LANE  ANA_PLL17.BF.PLL_OPENLOOP_EN_LANE
#define reg_TXINTP_RESET_EXT_LANE  ANA_PLL17.BF.TXINTP_RESET_EXT_LANE

// 0x94	ANA_PLL18		
typedef union {
	struct {
		uint8_t VDDR_DAC_ADJ_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL18_t;
__xdata __at( 0x250 ) volatile ANA_PLL18_t ANA_PLL18;
#define reg_VDDR_DAC_ADJ_LANE_2_0  ANA_PLL18.BF.VDDR_DAC_ADJ_LANE_2_0

// 0x95	ANA_PLL19		
typedef union {
	struct {
		uint8_t SHRTR_TRXPLL_LANE                        : 1;	/*      0     r/w   0*/
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
} ANA_PLL19_t;
__xdata __at( 0x254 ) volatile ANA_PLL19_t ANA_PLL19;
#define reg_SHRTR_TRXPLL_LANE  ANA_PLL19.BF.SHRTR_TRXPLL_LANE

// 0x96	ANA_PLL20		
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
} ANA_PLL20_t;
__xdata __at( 0x258 ) volatile ANA_PLL20_t ANA_PLL20;

// 0x97	ANA_PLL21		
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
} ANA_PLL21_t;
__xdata __at( 0x25c ) volatile ANA_PLL21_t ANA_PLL21;

// 0x98	ANA_PLL22		
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
} ANA_PLL22_t;
__xdata __at( 0x260 ) volatile ANA_PLL22_t ANA_PLL22;

// 0x99	ANA_RXCLK25M		
typedef union {
	struct {
		uint8_t RXCLK_25M_DIV_LANE_7_0                   : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RXCLK25M_t;
__xdata __at( 0x264 ) volatile ANA_RXCLK25M_t ANA_RXCLK25M;
#define reg_RXCLK_25M_DIV_LANE_7_0  ANA_RXCLK25M.BF.RXCLK_25M_DIV_LANE_7_0

// 0x9a	ANA_PLL24		
typedef union {
	struct {
		uint8_t LCPLL_IND_RANGE_SEL_LANE                 : 1;	/*      0     r/w 1'h0*/
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
} ANA_PLL24_t;
__xdata __at( 0x268 ) volatile ANA_PLL24_t ANA_PLL24;
#define reg_LCPLL_IND_RANGE_SEL_LANE  ANA_PLL24.BF.LCPLL_IND_RANGE_SEL_LANE

// 0x9b	ANA_PLL25		
typedef union {
	struct {
		uint8_t TXCLK_NT_CTRL_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'b00*/
		uint8_t TXCLK_NT_FIX_DIV_EN_LANE                 : 1;	/*      2     r/w 1'b0*/
		uint8_t TXCLK_NT_DIV_LANE_4_0                    : 5;	/*  [7:3]     r/w 5'h1e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL25_t;
__xdata __at( 0x26c ) volatile ANA_PLL25_t ANA_PLL25;
#define reg_TXCLK_NT_CTRL_LANE_1_0  ANA_PLL25.BF.TXCLK_NT_CTRL_LANE_1_0
#define reg_TXCLK_NT_FIX_DIV_EN_LANE  ANA_PLL25.BF.TXCLK_NT_FIX_DIV_EN_LANE
#define reg_TXCLK_NT_DIV_LANE_4_0  ANA_PLL25.BF.TXCLK_NT_DIV_LANE_4_0

// 0x9c	ANA_PLL26		
typedef union {
	struct {
		uint8_t RXCLK_NT_CTRL_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TXCLK_NT_DIV_RESET_LANE                  : 1;	/*      2     r/w 1'b0*/
		uint8_t RXCLK_NT_DIV_LANE_4_0                    : 5;	/*  [7:3]     r/w 5'h1e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL26_t;
__xdata __at( 0x270 ) volatile ANA_PLL26_t ANA_PLL26;
#define reg_RXCLK_NT_CTRL_LANE_1_0  ANA_PLL26.BF.RXCLK_NT_CTRL_LANE_1_0
#define reg_TXCLK_NT_DIV_RESET_LANE  ANA_PLL26.BF.TXCLK_NT_DIV_RESET_LANE
#define reg_RXCLK_NT_DIV_LANE_4_0  ANA_PLL26.BF.RXCLK_NT_DIV_LANE_4_0

// 0x9d	ANA_PLL27		
typedef union {
	struct {
		uint8_t RXCLK_NT_FIX_DIV_EN_LANE                 : 1;	/*      0     r/w 1'b0*/
		uint8_t RXCLK_25M_DIV_RESET_LANE                 : 1;	/*      1     r/w 1'h0*/
		uint8_t RXCLK_NT_DIV_RESET_LANE                  : 1;	/*      2     r/w 1'b0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL27_t;
__xdata __at( 0x274 ) volatile ANA_PLL27_t ANA_PLL27;
#define reg_RXCLK_NT_FIX_DIV_EN_LANE  ANA_PLL27.BF.RXCLK_NT_FIX_DIV_EN_LANE
#define reg_RXCLK_25M_DIV_RESET_LANE  ANA_PLL27.BF.RXCLK_25M_DIV_RESET_LANE
#define reg_RXCLK_NT_DIV_RESET_LANE  ANA_PLL27.BF.RXCLK_NT_DIV_RESET_LANE

// 0x9e	ANA_PLL28		
typedef union {
	struct {
		uint8_t RXCLK_25M_DIV1P5_EN_LANE                 : 1;	/*      0     r/w 1'b0*/
		uint8_t RXCLK_25M_CTRL_LANE_1_0                  : 2;	/*  [2:1]     r/w 2'b0*/
		uint8_t RXCLK_25M_FIX_DIV_EN_LANE                : 1;	/*      3     r/w 1'b0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_PLL28_t;
__xdata __at( 0x278 ) volatile ANA_PLL28_t ANA_PLL28;
#define reg_RXCLK_25M_DIV1P5_EN_LANE  ANA_PLL28.BF.RXCLK_25M_DIV1P5_EN_LANE
#define reg_RXCLK_25M_CTRL_LANE_1_0  ANA_PLL28.BF.RXCLK_25M_CTRL_LANE_1_0
#define reg_RXCLK_25M_FIX_DIV_EN_LANE  ANA_PLL28.BF.RXCLK_25M_FIX_DIV_EN_LANE

// 0x9f	ANA_PLL29		
typedef union {
	struct {
		uint8_t PLL_PFD_PW_DLY_LANE                      : 1;	/*      0     r/w 1'b1*/
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
} ANA_PLL29_t;
__xdata __at( 0x27c ) volatile ANA_PLL29_t ANA_PLL29;
#define reg_PLL_PFD_PW_DLY_LANE  ANA_PLL29.BF.PLL_PFD_PW_DLY_LANE

// 0xa0	ANA_PLL30		
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
} ANA_PLL30_t;
__xdata __at( 0x280 ) volatile ANA_PLL30_t ANA_PLL30;

// 0xa1	ANA_PLL31		
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
} ANA_PLL31_t;
__xdata __at( 0x284 ) volatile ANA_PLL31_t ANA_PLL31;

// 0xa2	ANA_PLL32		
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
} ANA_PLL32_t;
__xdata __at( 0x288 ) volatile ANA_PLL32_t ANA_PLL32;

// 0xa3	ANA_SMPLR_CLK_CTRL1		
typedef union {
	struct {
		uint8_t CKP1_DA_TUNE_CODE_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_CLK_CTRL1_t;
__xdata __at( 0x28c ) volatile ANA_SMPLR_CLK_CTRL1_t ANA_SMPLR_CLK_CTRL1;
#define reg_CKP1_DA_TUNE_CODE_LANE_4_0  ANA_SMPLR_CLK_CTRL1.BF.CKP1_DA_TUNE_CODE_LANE_4_0

// 0xa4	ANA_SMPLR_CLK_CTRL2		
typedef union {
	struct {
		uint8_t CKP1_ER_TUNE_CODE_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_CLK_CTRL2_t;
__xdata __at( 0x290 ) volatile ANA_SMPLR_CLK_CTRL2_t ANA_SMPLR_CLK_CTRL2;
#define reg_CKP1_ER_TUNE_CODE_LANE_4_0  ANA_SMPLR_CLK_CTRL2.BF.CKP1_ER_TUNE_CODE_LANE_4_0

// 0xa5	ANA_SMPLR_CLK_CTRL3		
typedef union {
	struct {
		uint8_t CKP2_DA_TUNE_CODE_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_CLK_CTRL3_t;
__xdata __at( 0x294 ) volatile ANA_SMPLR_CLK_CTRL3_t ANA_SMPLR_CLK_CTRL3;
#define reg_CKP2_DA_TUNE_CODE_LANE_4_0  ANA_SMPLR_CLK_CTRL3.BF.CKP2_DA_TUNE_CODE_LANE_4_0

// 0xa6	ANA_SMPLR_CLK_CTRL4		
typedef union {
	struct {
		uint8_t CKP2_ER_TUNE_CODE_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_CLK_CTRL4_t;
__xdata __at( 0x298 ) volatile ANA_SMPLR_CLK_CTRL4_t ANA_SMPLR_CLK_CTRL4;
#define reg_CKP2_ER_TUNE_CODE_LANE_4_0  ANA_SMPLR_CLK_CTRL4.BF.CKP2_ER_TUNE_CODE_LANE_4_0

// 0xa7	ANA_SMPLR_CLK_CTRL5		
typedef union {
	struct {
		uint8_t CKP3_DA_TUNE_CODE_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_CLK_CTRL5_t;
__xdata __at( 0x29c ) volatile ANA_SMPLR_CLK_CTRL5_t ANA_SMPLR_CLK_CTRL5;
#define reg_CKP3_DA_TUNE_CODE_LANE_4_0  ANA_SMPLR_CLK_CTRL5.BF.CKP3_DA_TUNE_CODE_LANE_4_0

// 0xa8	ANA_SMPLR_CLK_CTRL6		
typedef union {
	struct {
		uint8_t CKP3_ER_TUNE_CODE_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_CLK_CTRL6_t;
__xdata __at( 0x2a0 ) volatile ANA_SMPLR_CLK_CTRL6_t ANA_SMPLR_CLK_CTRL6;
#define reg_CKP3_ER_TUNE_CODE_LANE_4_0  ANA_SMPLR_CLK_CTRL6.BF.CKP3_ER_TUNE_CODE_LANE_4_0

// 0xa9	ANA_SMPLR_CLK_CTRL7		
typedef union {
	struct {
		uint8_t CKP4_DA_TUNE_CODE_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_CLK_CTRL7_t;
__xdata __at( 0x2a4 ) volatile ANA_SMPLR_CLK_CTRL7_t ANA_SMPLR_CLK_CTRL7;
#define reg_CKP4_DA_TUNE_CODE_LANE_4_0  ANA_SMPLR_CLK_CTRL7.BF.CKP4_DA_TUNE_CODE_LANE_4_0

// 0xaa	ANA_SMPLR_CLK_CTRL8		
typedef union {
	struct {
		uint8_t CKP4_ER_TUNE_CODE_LANE_4_0               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_SMPLR_CLK_CTRL8_t;
__xdata __at( 0x2a8 ) volatile ANA_SMPLR_CLK_CTRL8_t ANA_SMPLR_CLK_CTRL8;
#define reg_CKP4_ER_TUNE_CODE_LANE_4_0  ANA_SMPLR_CLK_CTRL8.BF.CKP4_ER_TUNE_CODE_LANE_4_0

// 0xab	ANA_RX_CTLE_REG0		
typedef union {
	struct {
		uint8_t CTLE_RL1_EXTRA_PRE_LANE_1_0              : 2;	/*  [1:0]     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG0_t;
__xdata __at( 0x2ac ) volatile ANA_RX_CTLE_REG0_t ANA_RX_CTLE_REG0;
#define reg_CTLE_RL1_EXTRA_PRE_LANE_1_0  ANA_RX_CTLE_REG0.BF.CTLE_RL1_EXTRA_PRE_LANE_1_0

// 0xac	ANA_RX_CTLE_REG1		
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
} ANA_RX_CTLE_REG1_t;
__xdata __at( 0x2b0 ) volatile ANA_RX_CTLE_REG1_t ANA_RX_CTLE_REG1;

// 0xad	ANA_RX_CTLE_REG2		
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P1_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG2_t;
__xdata __at( 0x2b4 ) volatile ANA_RX_CTLE_REG2_t ANA_RX_CTLE_REG2;
#define reg_CTLE_RL2_SEL_G_P1_LANE_3_0  ANA_RX_CTLE_REG2.BF.CTLE_RL2_SEL_G_P1_LANE_3_0

// 0xae	ANA_RX_CTLE_REG3		
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG3_t;
__xdata __at( 0x2b8 ) volatile ANA_RX_CTLE_REG3_t ANA_RX_CTLE_REG3;
#define reg_CTLE_RL2_SEL_G_P2_LANE_3_0  ANA_RX_CTLE_REG3.BF.CTLE_RL2_SEL_G_P2_LANE_3_0

// 0xaf	ANA_RX_CTLE_REG4		
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P3_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG4_t;
__xdata __at( 0x2bc ) volatile ANA_RX_CTLE_REG4_t ANA_RX_CTLE_REG4;
#define reg_CTLE_RL2_SEL_G_P3_LANE_3_0  ANA_RX_CTLE_REG4.BF.CTLE_RL2_SEL_G_P3_LANE_3_0

// 0xb0	ANA_RX_CTLE_REG5		
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P4_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG5_t;
__xdata __at( 0x2c0 ) volatile ANA_RX_CTLE_REG5_t ANA_RX_CTLE_REG5;
#define reg_CTLE_RL2_SEL_G_P4_LANE_3_0  ANA_RX_CTLE_REG5.BF.CTLE_RL2_SEL_G_P4_LANE_3_0

// 0xb1	ANA_RX_CTLE_REG6		
typedef union {
	struct {
		uint8_t CTLE_RL2_TUNE_P1_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG6_t;
__xdata __at( 0x2c4 ) volatile ANA_RX_CTLE_REG6_t ANA_RX_CTLE_REG6;
#define reg_CTLE_RL2_TUNE_P1_LANE_2_0  ANA_RX_CTLE_REG6.BF.CTLE_RL2_TUNE_P1_LANE_2_0

// 0xb2	ANA_RX_CTLE_REG7		
typedef union {
	struct {
		uint8_t CTLE_RL2_TUNE_P2_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG7_t;
__xdata __at( 0x2c8 ) volatile ANA_RX_CTLE_REG7_t ANA_RX_CTLE_REG7;
#define reg_CTLE_RL2_TUNE_P2_LANE_2_0  ANA_RX_CTLE_REG7.BF.CTLE_RL2_TUNE_P2_LANE_2_0

// 0xb3	ANA_RX_CTLE_REG8		
typedef union {
	struct {
		uint8_t CTLE_RL2_TUNE_P3_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG8_t;
__xdata __at( 0x2cc ) volatile ANA_RX_CTLE_REG8_t ANA_RX_CTLE_REG8;
#define reg_CTLE_RL2_TUNE_P3_LANE_2_0  ANA_RX_CTLE_REG8.BF.CTLE_RL2_TUNE_P3_LANE_2_0

// 0xb4	ANA_RX_CTLE_REG9		
typedef union {
	struct {
		uint8_t CTLE_RL2_TUNE_P4_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG9_t;
__xdata __at( 0x2d0 ) volatile ANA_RX_CTLE_REG9_t ANA_RX_CTLE_REG9;
#define reg_CTLE_RL2_TUNE_P4_LANE_2_0  ANA_RX_CTLE_REG9.BF.CTLE_RL2_TUNE_P4_LANE_2_0

// 0xb5	ANA_RX_CTLE_REG10		
typedef union {
	struct {
		uint8_t CTLE_RS2_SEL_G_P1_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG10_t;
__xdata __at( 0x2d4 ) volatile ANA_RX_CTLE_REG10_t ANA_RX_CTLE_REG10;
#define reg_CTLE_RS2_SEL_G_P1_LANE_3_0  ANA_RX_CTLE_REG10.BF.CTLE_RS2_SEL_G_P1_LANE_3_0

// 0xb6	ANA_RX_CTLE_REG11		
typedef union {
	struct {
		uint8_t CTLE_RS2_SEL_G_P2_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG11_t;
__xdata __at( 0x2d8 ) volatile ANA_RX_CTLE_REG11_t ANA_RX_CTLE_REG11;
#define reg_CTLE_RS2_SEL_G_P2_LANE_3_0  ANA_RX_CTLE_REG11.BF.CTLE_RS2_SEL_G_P2_LANE_3_0

// 0xb7	ANA_RX_CTLE_REG12		
typedef union {
	struct {
		uint8_t CTLE_RS2_SEL_G_P3_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG12_t;
__xdata __at( 0x2dc ) volatile ANA_RX_CTLE_REG12_t ANA_RX_CTLE_REG12;
#define reg_CTLE_RS2_SEL_G_P3_LANE_3_0  ANA_RX_CTLE_REG12.BF.CTLE_RS2_SEL_G_P3_LANE_3_0

// 0xb8	ANA_RX_CTLE_REG13		
typedef union {
	struct {
		uint8_t CTLE_RS2_SEL_G_P4_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_CTLE_REG13_t;
__xdata __at( 0x2e0 ) volatile ANA_RX_CTLE_REG13_t ANA_RX_CTLE_REG13;
#define reg_CTLE_RS2_SEL_G_P4_LANE_3_0  ANA_RX_CTLE_REG13.BF.CTLE_RS2_SEL_G_P4_LANE_3_0

// 0xb9	TRX_CAL_REG0		Digital TRX Calibration Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t TRX_DIG_CAL_CLK_RST_BOT_LANE             : 1;	/*      4     r/w 1'h0*/
		uint8_t TRX_DIG_CAL_CLK_EN_BOT_LANE              : 1;	/*      5     r/w 1'h1*/
		uint8_t TRX_DIG_CAL_CLK_RST_TOP_LANE             : 1;	/*      6     r/w 1'h0*/
		uint8_t TRX_DIG_CAL_CLK_EN_TOP_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG0_t;
__xdata __at( 0x2e4 ) volatile TRX_CAL_REG0_t TRX_CAL_REG0;
#define reg_TRX_DIG_CAL_CLK_RST_BOT_LANE  TRX_CAL_REG0.BF.TRX_DIG_CAL_CLK_RST_BOT_LANE
#define reg_TRX_DIG_CAL_CLK_EN_BOT_LANE  TRX_CAL_REG0.BF.TRX_DIG_CAL_CLK_EN_BOT_LANE
#define reg_TRX_DIG_CAL_CLK_RST_TOP_LANE  TRX_CAL_REG0.BF.TRX_DIG_CAL_CLK_RST_TOP_LANE
#define reg_TRX_DIG_CAL_CLK_EN_TOP_LANE  TRX_CAL_REG0.BF.TRX_DIG_CAL_CLK_EN_TOP_LANE

// 0xba	TRX_CAL_REG1		Digital TRX Calibration Register 1
typedef union {
	struct {
		uint8_t TRX_DIG_CAL2M_DIV_TOP_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG1_t;
__xdata __at( 0x2e8 ) volatile TRX_CAL_REG1_t TRX_CAL_REG1;
#define reg_TRX_DIG_CAL2M_DIV_TOP_LANE_7_0  TRX_CAL_REG1.BF.TRX_DIG_CAL2M_DIV_TOP_LANE_7_0

// 0xbb	TRX_CAL_REG2		Digital TRX Calibration Register 2
typedef union {
	struct {
		uint8_t TRX_DIG_CAL2M_DIV_BOT_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG2_t;
__xdata __at( 0x2ec ) volatile TRX_CAL_REG2_t TRX_CAL_REG2;
#define reg_TRX_DIG_CAL2M_DIV_BOT_LANE_7_0  TRX_CAL_REG2.BF.TRX_DIG_CAL2M_DIV_BOT_LANE_7_0

// 0xbc	TRX_CAL_REG3		Digital TRX Calibration Register 3
typedef union {
	struct {
		uint8_t TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0         : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TRX_DIG_TESTBUS_SEL_TOP_LANE_3_0         : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG3_t;
__xdata __at( 0x2f0 ) volatile TRX_CAL_REG3_t TRX_CAL_REG3;
#define reg_TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0  TRX_CAL_REG3.BF.TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0
#define reg_TRX_DIG_TESTBUS_SEL_TOP_LANE_3_0  TRX_CAL_REG3.BF.TRX_DIG_TESTBUS_SEL_TOP_LANE_3_0

// 0xbd	ANA_TX_FIR_SCAN0		
typedef union {
	struct {
		uint8_t TXFIRSCAN_O0_LANE_7_0                    : 8;	/*  [7:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_SCAN0_t;
__xdata __at( 0x2f4 ) volatile ANA_TX_FIR_SCAN0_t ANA_TX_FIR_SCAN0;
#define reg_TXFIRSCAN_O0_LANE_7_0  ANA_TX_FIR_SCAN0.BF.TXFIRSCAN_O0_LANE_7_0

// 0xbe	ANA_TX_FIR_SCAN1		
typedef union {
	struct {
		uint8_t TXFIRSCAN_O1_LANE_7_0                    : 8;	/*  [7:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_SCAN1_t;
__xdata __at( 0x2f8 ) volatile ANA_TX_FIR_SCAN1_t ANA_TX_FIR_SCAN1;
#define reg_TXFIRSCAN_O1_LANE_7_0  ANA_TX_FIR_SCAN1.BF.TXFIRSCAN_O1_LANE_7_0

// 0xbf	ANA_TX_FIR_SCAN2		
typedef union {
	struct {
		uint8_t TXFIRSCAN_O2_LANE_7_0                    : 8;	/*  [7:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_SCAN2_t;
__xdata __at( 0x2fc ) volatile ANA_TX_FIR_SCAN2_t ANA_TX_FIR_SCAN2;
#define reg_TXFIRSCAN_O2_LANE_7_0  ANA_TX_FIR_SCAN2.BF.TXFIRSCAN_O2_LANE_7_0

// 0xc0	ANA_TX_FIR_SCAN3		
typedef union {
	struct {
		uint8_t TXFIRSCAN_O3_LANE_7_0                    : 8;	/*  [7:0]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_SCAN3_t;
__xdata __at( 0x300 ) volatile ANA_TX_FIR_SCAN3_t ANA_TX_FIR_SCAN3;
#define reg_TXFIRSCAN_O3_LANE_7_0  ANA_TX_FIR_SCAN3.BF.TXFIRSCAN_O3_LANE_7_0

// 0xc1	ANA_TX_FIR_SCAN4		
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
} ANA_TX_FIR_SCAN4_t;
__xdata __at( 0x304 ) volatile ANA_TX_FIR_SCAN4_t ANA_TX_FIR_SCAN4;

// 0xc2	ANA_TX_FIR_SCAN5		
typedef union {
	struct {
		uint8_t TXFIR_SCAN_LANE                          : 1;	/*      0     r/w   0*/
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
} ANA_TX_FIR_SCAN5_t;
__xdata __at( 0x308 ) volatile ANA_TX_FIR_SCAN5_t ANA_TX_FIR_SCAN5;
#define reg_TXFIR_SCAN_LANE  ANA_TX_FIR_SCAN5.BF.TXFIR_SCAN_LANE

// 0xc3	ANA_DFE_CUR0		
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_LANE_3_0                   : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t DFE_CUR_TUNE_CTRL_LANE_2_0               : 3;	/*  [6:4]     r/w 3'h3*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_DFE_CUR0_t;
__xdata __at( 0x30c ) volatile ANA_DFE_CUR0_t ANA_DFE_CUR0;
#define reg_DFE_CUR_SEL_G_LANE_3_0  ANA_DFE_CUR0.BF.DFE_CUR_SEL_G_LANE_3_0
#define reg_DFE_CUR_TUNE_CTRL_LANE_2_0  ANA_DFE_CUR0.BF.DFE_CUR_TUNE_CTRL_LANE_2_0

#endif
