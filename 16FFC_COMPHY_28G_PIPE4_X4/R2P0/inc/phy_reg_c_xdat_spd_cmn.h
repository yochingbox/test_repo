#ifndef PHY_REG_C_XDAT_SPD_CMN_H
#define PHY_REG_C_XDAT_SPD_CMN_H



// 0x0000	AUTOSPEED0		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE0_2_0              : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE0_3_0             : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE0_7_0                    : 8;	/*[23:16]     r/w 8'hb4*/
		uint8_t FBDIV_PIOFF_RATE0_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED0_t;
__xdata __at( 0xe000 ) volatile AUTOSPEED0_t AUTOSPEED0;
#define reg_PLL_REG_SEL_PIOFF_RATE0_2_0  AUTOSPEED0.BF.PLL_REG_SEL_PIOFF_RATE0_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE0_3_0  AUTOSPEED0.BF.PLL_RATE_SEL_PIOFF_RATE0_3_0
#define reg_FBDIV_PIOFF_RATE0_7_0  AUTOSPEED0.BF.FBDIV_PIOFF_RATE0_7_0
#define reg_FBDIV_PIOFF_RATE0_9_8  AUTOSPEED0.BF.FBDIV_PIOFF_RATE0_9_8

// 0x0004	AUTOSPEED1		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE0_7_0                : 8;	/*  [7:0]     r/w 8'h1c*/
		uint8_t FBDIV_CAL_PIOFF_RATE0_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE0_3_0                   : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE0                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED1_t;
__xdata __at( 0xe004 ) volatile AUTOSPEED1_t AUTOSPEED1;
#define reg_FBDIV_CAL_PIOFF_RATE0_7_0  AUTOSPEED1.BF.FBDIV_CAL_PIOFF_RATE0_7_0
#define reg_FBDIV_CAL_PIOFF_RATE0_9_8  AUTOSPEED1.BF.FBDIV_CAL_PIOFF_RATE0_9_8
#define reg_REFDIV_PIOFF_RATE0_3_0  AUTOSPEED1.BF.REFDIV_PIOFF_RATE0_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE0  AUTOSPEED1.BF.VIND_BAND_SEL_PIOFF_RATE0

// 0x0008	AUTOSPEED2		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE0_7_0                   : 8;	/*  [7:0]     r/w 8'h38*/
		uint8_t DIV_1G_PIOFF_RATE0_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE0_7_0              : 8;	/*[23:16]     r/w 8'he*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE0_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED2_t;
__xdata __at( 0xe008 ) volatile AUTOSPEED2_t AUTOSPEED2;
#define reg_DIV_1G_PIOFF_RATE0_7_0  AUTOSPEED2.BF.DIV_1G_PIOFF_RATE0_7_0
#define reg_DIV_1G_PIOFF_RATE0_9_8  AUTOSPEED2.BF.DIV_1G_PIOFF_RATE0_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE0_7_0  AUTOSPEED2.BF.DIV_1G_FBCK_PIOFF_RATE0_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE0_9_8  AUTOSPEED2.BF.DIV_1G_FBCK_PIOFF_RATE0_9_8

// 0x000c	AUTOSPEED3		TBD
typedef union {
	struct {
		uint8_t ICP_PIOFF_RATE0_4_0                      : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE0_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE0_1_0                 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE0_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED3_t;
__xdata __at( 0xe00c ) volatile AUTOSPEED3_t AUTOSPEED3;
#define reg_ICP_PIOFF_RATE0_4_0  AUTOSPEED3.BF.ICP_PIOFF_RATE0_4_0
#define reg_PLL_LPFR_PIOFF_RATE0_1_0  AUTOSPEED3.BF.PLL_LPFR_PIOFF_RATE0_1_0
#define reg_PLL_LPFC_PIOFF_RATE0_1_0  AUTOSPEED3.BF.PLL_LPFC_PIOFF_RATE0_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE0_7_0  AUTOSPEED3.BF.INIT_TXFOFFS_PIOFF_RATE0_7_0

// 0x0010	AUTOSPEED4		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE0_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE0_7_0             : 8;	/* [15:8]     r/w 8'he3*/
		uint8_t SPEED_THRESH_PIOFF_RATE0_11_8            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE0                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED4_t;
__xdata __at( 0xe010 ) volatile AUTOSPEED4_t AUTOSPEED4;
#define reg_INIT_TXFOFFS_PIOFF_RATE0_9_8  AUTOSPEED4.BF.INIT_TXFOFFS_PIOFF_RATE0_9_8
#define reg_SPEED_THRESH_PIOFF_RATE0_7_0  AUTOSPEED4.BF.SPEED_THRESH_PIOFF_RATE0_7_0
#define reg_SPEED_THRESH_PIOFF_RATE0_11_8  AUTOSPEED4.BF.SPEED_THRESH_PIOFF_RATE0_11_8
#define reg_LCCAP_USB_PIOFF_RATE0  AUTOSPEED4.BF.LCCAP_USB_PIOFF_RATE0

// 0x0014	AUTOSPEED5		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE0               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_PIOFF_RATE0_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SSC_STEP_PIOFF_RATE0_10_8                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE0_7_0                    : 8;	/*[31:24]     r/w 8'h9d*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED5_t;
__xdata __at( 0xe014 ) volatile AUTOSPEED5_t AUTOSPEED5;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE0  AUTOSPEED5.BF.SSC_ACC_FACTOR_PIOFF_RATE0
#define reg_SSC_STEP_PIOFF_RATE0_7_0  AUTOSPEED5.BF.SSC_STEP_PIOFF_RATE0_7_0
#define reg_SSC_STEP_PIOFF_RATE0_10_8  AUTOSPEED5.BF.SSC_STEP_PIOFF_RATE0_10_8
#define reg_SSC_M_PIOFF_RATE0_7_0  AUTOSPEED5.BF.SSC_M_PIOFF_RATE0_7_0

// 0x0018	AUTOSPEED6		TBD
typedef union {
	struct {
		uint8_t SSC_M_PIOFF_RATE0_12_8                   : 5;	/*  [4:0]     r/w 5'hd*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED6_t;
__xdata __at( 0xe018 ) volatile AUTOSPEED6_t AUTOSPEED6;
#define reg_SSC_M_PIOFF_RATE0_12_8  AUTOSPEED6.BF.SSC_M_PIOFF_RATE0_12_8

// 0x001c	AUTOSPEED7		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE1_2_0              : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE1_3_0             : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE1_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t FBDIV_PIOFF_RATE1_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED7_t;
__xdata __at( 0xe01c ) volatile AUTOSPEED7_t AUTOSPEED7;
#define reg_PLL_REG_SEL_PIOFF_RATE1_2_0  AUTOSPEED7.BF.PLL_REG_SEL_PIOFF_RATE1_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE1_3_0  AUTOSPEED7.BF.PLL_RATE_SEL_PIOFF_RATE1_3_0
#define reg_FBDIV_PIOFF_RATE1_7_0  AUTOSPEED7.BF.FBDIV_PIOFF_RATE1_7_0
#define reg_FBDIV_PIOFF_RATE1_9_8  AUTOSPEED7.BF.FBDIV_PIOFF_RATE1_9_8

// 0x0020	AUTOSPEED8		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE1_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t FBDIV_CAL_PIOFF_RATE1_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE1_3_0                   : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE1                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED8_t;
__xdata __at( 0xe020 ) volatile AUTOSPEED8_t AUTOSPEED8;
#define reg_FBDIV_CAL_PIOFF_RATE1_7_0  AUTOSPEED8.BF.FBDIV_CAL_PIOFF_RATE1_7_0
#define reg_FBDIV_CAL_PIOFF_RATE1_9_8  AUTOSPEED8.BF.FBDIV_CAL_PIOFF_RATE1_9_8
#define reg_REFDIV_PIOFF_RATE1_3_0  AUTOSPEED8.BF.REFDIV_PIOFF_RATE1_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE1  AUTOSPEED8.BF.VIND_BAND_SEL_PIOFF_RATE1

// 0x0024	AUTOSPEED9		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE1_7_0                   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t DIV_1G_PIOFF_RATE1_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE1_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE1_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED9_t;
__xdata __at( 0xe024 ) volatile AUTOSPEED9_t AUTOSPEED9;
#define reg_DIV_1G_PIOFF_RATE1_7_0  AUTOSPEED9.BF.DIV_1G_PIOFF_RATE1_7_0
#define reg_DIV_1G_PIOFF_RATE1_9_8  AUTOSPEED9.BF.DIV_1G_PIOFF_RATE1_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE1_7_0  AUTOSPEED9.BF.DIV_1G_FBCK_PIOFF_RATE1_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE1_9_8  AUTOSPEED9.BF.DIV_1G_FBCK_PIOFF_RATE1_9_8

// 0x0028	AUTOSPEED10		TBD
typedef union {
	struct {
		uint8_t ICP_PIOFF_RATE1_4_0                      : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE1_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE1_1_0                 : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE1_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED10_t;
__xdata __at( 0xe028 ) volatile AUTOSPEED10_t AUTOSPEED10;
#define reg_ICP_PIOFF_RATE1_4_0  AUTOSPEED10.BF.ICP_PIOFF_RATE1_4_0
#define reg_PLL_LPFR_PIOFF_RATE1_1_0  AUTOSPEED10.BF.PLL_LPFR_PIOFF_RATE1_1_0
#define reg_PLL_LPFC_PIOFF_RATE1_1_0  AUTOSPEED10.BF.PLL_LPFC_PIOFF_RATE1_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE1_7_0  AUTOSPEED10.BF.INIT_TXFOFFS_PIOFF_RATE1_7_0

// 0x002c	AUTOSPEED11		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE1_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE1_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SPEED_THRESH_PIOFF_RATE1_11_8            : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE1                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED11_t;
__xdata __at( 0xe02c ) volatile AUTOSPEED11_t AUTOSPEED11;
#define reg_INIT_TXFOFFS_PIOFF_RATE1_9_8  AUTOSPEED11.BF.INIT_TXFOFFS_PIOFF_RATE1_9_8
#define reg_SPEED_THRESH_PIOFF_RATE1_7_0  AUTOSPEED11.BF.SPEED_THRESH_PIOFF_RATE1_7_0
#define reg_SPEED_THRESH_PIOFF_RATE1_11_8  AUTOSPEED11.BF.SPEED_THRESH_PIOFF_RATE1_11_8
#define reg_LCCAP_USB_PIOFF_RATE1  AUTOSPEED11.BF.LCCAP_USB_PIOFF_RATE1

// 0x0030	AUTOSPEED12		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE1               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_PIOFF_RATE1_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SSC_STEP_PIOFF_RATE1_10_8                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE1_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED12_t;
__xdata __at( 0xe030 ) volatile AUTOSPEED12_t AUTOSPEED12;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE1  AUTOSPEED12.BF.SSC_ACC_FACTOR_PIOFF_RATE1
#define reg_SSC_STEP_PIOFF_RATE1_7_0  AUTOSPEED12.BF.SSC_STEP_PIOFF_RATE1_7_0
#define reg_SSC_STEP_PIOFF_RATE1_10_8  AUTOSPEED12.BF.SSC_STEP_PIOFF_RATE1_10_8
#define reg_SSC_M_PIOFF_RATE1_7_0  AUTOSPEED12.BF.SSC_M_PIOFF_RATE1_7_0

// 0x0034	AUTOSPEED13		TBD
typedef union {
	struct {
		uint8_t SSC_M_PIOFF_RATE1_12_8                   : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED13_t;
__xdata __at( 0xe034 ) volatile AUTOSPEED13_t AUTOSPEED13;
#define reg_SSC_M_PIOFF_RATE1_12_8  AUTOSPEED13.BF.SSC_M_PIOFF_RATE1_12_8

// 0x0038	AUTOSPEED14		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE0_2_0               : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE0_3_0              : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE0_7_0                     : 8;	/*[23:16]     r/w 8'h2d*/
		uint8_t FBDIV_PION_RATE0_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED14_t;
__xdata __at( 0xe038 ) volatile AUTOSPEED14_t AUTOSPEED14;
#define reg_PLL_REG_SEL_PION_RATE0_2_0  AUTOSPEED14.BF.PLL_REG_SEL_PION_RATE0_2_0
#define reg_PLL_RATE_SEL_PION_RATE0_3_0  AUTOSPEED14.BF.PLL_RATE_SEL_PION_RATE0_3_0
#define reg_FBDIV_PION_RATE0_7_0  AUTOSPEED14.BF.FBDIV_PION_RATE0_7_0
#define reg_FBDIV_PION_RATE0_9_8  AUTOSPEED14.BF.FBDIV_PION_RATE0_9_8

// 0x003c	AUTOSPEED15		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE0_7_0                 : 8;	/*  [7:0]     r/w 8'h1c*/
		uint8_t FBDIV_CAL_PION_RATE0_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE0_3_0                    : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE0                 : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED15_t;
__xdata __at( 0xe03c ) volatile AUTOSPEED15_t AUTOSPEED15;
#define reg_FBDIV_CAL_PION_RATE0_7_0  AUTOSPEED15.BF.FBDIV_CAL_PION_RATE0_7_0
#define reg_FBDIV_CAL_PION_RATE0_9_8  AUTOSPEED15.BF.FBDIV_CAL_PION_RATE0_9_8
#define reg_REFDIV_PION_RATE0_3_0  AUTOSPEED15.BF.REFDIV_PION_RATE0_3_0
#define reg_VIND_BAND_SEL_PION_RATE0  AUTOSPEED15.BF.VIND_BAND_SEL_PION_RATE0

// 0x0040	AUTOSPEED16		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE0_7_0                    : 8;	/*  [7:0]     r/w 8'h38*/
		uint8_t DIV_1G_PION_RATE0_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE0_7_0               : 8;	/*[23:16]     r/w 8'he*/
		uint8_t DIV_1G_FBCK_PION_RATE0_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED16_t;
__xdata __at( 0xe040 ) volatile AUTOSPEED16_t AUTOSPEED16;
#define reg_DIV_1G_PION_RATE0_7_0  AUTOSPEED16.BF.DIV_1G_PION_RATE0_7_0
#define reg_DIV_1G_PION_RATE0_9_8  AUTOSPEED16.BF.DIV_1G_PION_RATE0_9_8
#define reg_DIV_1G_FBCK_PION_RATE0_7_0  AUTOSPEED16.BF.DIV_1G_FBCK_PION_RATE0_7_0
#define reg_DIV_1G_FBCK_PION_RATE0_9_8  AUTOSPEED16.BF.DIV_1G_FBCK_PION_RATE0_9_8

// 0x0044	AUTOSPEED17		TBD
typedef union {
	struct {
		uint8_t ICP_PION_RATE0_4_0                       : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE0_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE0_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE0_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED17_t;
__xdata __at( 0xe044 ) volatile AUTOSPEED17_t AUTOSPEED17;
#define reg_ICP_PION_RATE0_4_0  AUTOSPEED17.BF.ICP_PION_RATE0_4_0
#define reg_PLL_LPFR_PION_RATE0_1_0  AUTOSPEED17.BF.PLL_LPFR_PION_RATE0_1_0
#define reg_PLL_LPFC_PION_RATE0_1_0  AUTOSPEED17.BF.PLL_LPFC_PION_RATE0_1_0
#define reg_INIT_TXFOFFS_PION_RATE0_7_0  AUTOSPEED17.BF.INIT_TXFOFFS_PION_RATE0_7_0

// 0x0048	AUTOSPEED18		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE0_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE0_7_0              : 8;	/* [15:8]     r/w 8'he3*/
		uint8_t SPEED_THRESH_PION_RATE0_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE0                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED18_t;
__xdata __at( 0xe048 ) volatile AUTOSPEED18_t AUTOSPEED18;
#define reg_INIT_TXFOFFS_PION_RATE0_9_8  AUTOSPEED18.BF.INIT_TXFOFFS_PION_RATE0_9_8
#define reg_SPEED_THRESH_PION_RATE0_7_0  AUTOSPEED18.BF.SPEED_THRESH_PION_RATE0_7_0
#define reg_SPEED_THRESH_PION_RATE0_11_8  AUTOSPEED18.BF.SPEED_THRESH_PION_RATE0_11_8
#define reg_LCCAP_USB_PION_RATE0  AUTOSPEED18.BF.LCCAP_USB_PION_RATE0

// 0x004c	AUTOSPEED19		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE0                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_PION_RATE0_7_0                  : 8;	/* [15:8]     r/w 8'h39*/
		uint8_t SSC_STEP_PION_RATE0_10_8                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t SSC_M_PION_RATE0_7_0                     : 8;	/*[31:24]     r/w 8'h9d*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED19_t;
__xdata __at( 0xe04c ) volatile AUTOSPEED19_t AUTOSPEED19;
#define reg_SSC_ACC_FACTOR_PION_RATE0  AUTOSPEED19.BF.SSC_ACC_FACTOR_PION_RATE0
#define reg_SSC_STEP_PION_RATE0_7_0  AUTOSPEED19.BF.SSC_STEP_PION_RATE0_7_0
#define reg_SSC_STEP_PION_RATE0_10_8  AUTOSPEED19.BF.SSC_STEP_PION_RATE0_10_8
#define reg_SSC_M_PION_RATE0_7_0  AUTOSPEED19.BF.SSC_M_PION_RATE0_7_0

// 0x0050	AUTOSPEED20		TBD
typedef union {
	struct {
		uint8_t SSC_M_PION_RATE0_12_8                    : 5;	/*  [4:0]     r/w 5'hd*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED20_t;
__xdata __at( 0xe050 ) volatile AUTOSPEED20_t AUTOSPEED20;
#define reg_SSC_M_PION_RATE0_12_8  AUTOSPEED20.BF.SSC_M_PION_RATE0_12_8

// 0x0054	AUTOSPEED21		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE1_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE1_3_0              : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE1_7_0                     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t FBDIV_PION_RATE1_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED21_t;
__xdata __at( 0xe054 ) volatile AUTOSPEED21_t AUTOSPEED21;
#define reg_PLL_REG_SEL_PION_RATE1_2_0  AUTOSPEED21.BF.PLL_REG_SEL_PION_RATE1_2_0
#define reg_PLL_RATE_SEL_PION_RATE1_3_0  AUTOSPEED21.BF.PLL_RATE_SEL_PION_RATE1_3_0
#define reg_FBDIV_PION_RATE1_7_0  AUTOSPEED21.BF.FBDIV_PION_RATE1_7_0
#define reg_FBDIV_PION_RATE1_9_8  AUTOSPEED21.BF.FBDIV_PION_RATE1_9_8

// 0x0058	AUTOSPEED22		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE1_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t FBDIV_CAL_PION_RATE1_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE1_3_0                    : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE1                 : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED22_t;
__xdata __at( 0xe058 ) volatile AUTOSPEED22_t AUTOSPEED22;
#define reg_FBDIV_CAL_PION_RATE1_7_0  AUTOSPEED22.BF.FBDIV_CAL_PION_RATE1_7_0
#define reg_FBDIV_CAL_PION_RATE1_9_8  AUTOSPEED22.BF.FBDIV_CAL_PION_RATE1_9_8
#define reg_REFDIV_PION_RATE1_3_0  AUTOSPEED22.BF.REFDIV_PION_RATE1_3_0
#define reg_VIND_BAND_SEL_PION_RATE1  AUTOSPEED22.BF.VIND_BAND_SEL_PION_RATE1

// 0x005c	AUTOSPEED23		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE1_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t DIV_1G_PION_RATE1_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE1_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t DIV_1G_FBCK_PION_RATE1_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED23_t;
__xdata __at( 0xe05c ) volatile AUTOSPEED23_t AUTOSPEED23;
#define reg_DIV_1G_PION_RATE1_7_0  AUTOSPEED23.BF.DIV_1G_PION_RATE1_7_0
#define reg_DIV_1G_PION_RATE1_9_8  AUTOSPEED23.BF.DIV_1G_PION_RATE1_9_8
#define reg_DIV_1G_FBCK_PION_RATE1_7_0  AUTOSPEED23.BF.DIV_1G_FBCK_PION_RATE1_7_0
#define reg_DIV_1G_FBCK_PION_RATE1_9_8  AUTOSPEED23.BF.DIV_1G_FBCK_PION_RATE1_9_8

// 0x0060	AUTOSPEED24		TBD
typedef union {
	struct {
		uint8_t ICP_PION_RATE1_4_0                       : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE1_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE1_1_0                  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE1_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED24_t;
__xdata __at( 0xe060 ) volatile AUTOSPEED24_t AUTOSPEED24;
#define reg_ICP_PION_RATE1_4_0  AUTOSPEED24.BF.ICP_PION_RATE1_4_0
#define reg_PLL_LPFR_PION_RATE1_1_0  AUTOSPEED24.BF.PLL_LPFR_PION_RATE1_1_0
#define reg_PLL_LPFC_PION_RATE1_1_0  AUTOSPEED24.BF.PLL_LPFC_PION_RATE1_1_0
#define reg_INIT_TXFOFFS_PION_RATE1_7_0  AUTOSPEED24.BF.INIT_TXFOFFS_PION_RATE1_7_0

// 0x0064	AUTOSPEED25		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE1_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE1_7_0              : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SPEED_THRESH_PION_RATE1_11_8             : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE1                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED25_t;
__xdata __at( 0xe064 ) volatile AUTOSPEED25_t AUTOSPEED25;
#define reg_INIT_TXFOFFS_PION_RATE1_9_8  AUTOSPEED25.BF.INIT_TXFOFFS_PION_RATE1_9_8
#define reg_SPEED_THRESH_PION_RATE1_7_0  AUTOSPEED25.BF.SPEED_THRESH_PION_RATE1_7_0
#define reg_SPEED_THRESH_PION_RATE1_11_8  AUTOSPEED25.BF.SPEED_THRESH_PION_RATE1_11_8
#define reg_LCCAP_USB_PION_RATE1  AUTOSPEED25.BF.LCCAP_USB_PION_RATE1

// 0x0068	AUTOSPEED26		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE1                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_PION_RATE1_7_0                  : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SSC_STEP_PION_RATE1_10_8                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t SSC_M_PION_RATE1_7_0                     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED26_t;
__xdata __at( 0xe068 ) volatile AUTOSPEED26_t AUTOSPEED26;
#define reg_SSC_ACC_FACTOR_PION_RATE1  AUTOSPEED26.BF.SSC_ACC_FACTOR_PION_RATE1
#define reg_SSC_STEP_PION_RATE1_7_0  AUTOSPEED26.BF.SSC_STEP_PION_RATE1_7_0
#define reg_SSC_STEP_PION_RATE1_10_8  AUTOSPEED26.BF.SSC_STEP_PION_RATE1_10_8
#define reg_SSC_M_PION_RATE1_7_0  AUTOSPEED26.BF.SSC_M_PION_RATE1_7_0

// 0x006c	AUTOSPEED27		TBD
typedef union {
	struct {
		uint8_t SSC_M_PION_RATE1_12_8                    : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED27_t;
__xdata __at( 0xe06c ) volatile AUTOSPEED27_t AUTOSPEED27;
#define reg_SSC_M_PION_RATE1_12_8  AUTOSPEED27.BF.SSC_M_PION_RATE1_12_8

// 0x0070	AUTOSPEED28		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PIOFF_RATE0_3_0        : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PIOFF_RATE0_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE0_7_0           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE0_9_8           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED28_t;
__xdata __at( 0xe070 ) volatile AUTOSPEED28_t AUTOSPEED28;
#define reg_PLL_RATE_SEL_RPLL_PIOFF_RATE0_3_0  AUTOSPEED28.BF.PLL_RATE_SEL_RPLL_PIOFF_RATE0_3_0
#define reg_PLL_REFDIV_RING_PIOFF_RATE0_3_0  AUTOSPEED28.BF.PLL_REFDIV_RING_PIOFF_RATE0_3_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE0_7_0  AUTOSPEED28.BF.PLL_FBDIV_RING_PIOFF_RATE0_7_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE0_9_8  AUTOSPEED28.BF.PLL_FBDIV_RING_PIOFF_RATE0_9_8

// 0x0074	AUTOSPEED29		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE0_7_0      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE0_9_8      : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PIOFF_RATE0_3_0                 : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE0_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED29_t;
__xdata __at( 0xe074 ) volatile AUTOSPEED29_t AUTOSPEED29;
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE0_7_0  AUTOSPEED29.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE0_7_0
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE0_9_8  AUTOSPEED29.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE0_9_8
#define reg_ICP_RING_PIOFF_RATE0_3_0  AUTOSPEED29.BF.ICP_RING_PIOFF_RATE0_3_0
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE0_7_0  AUTOSPEED29.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE0_7_0

// 0x0078	AUTOSPEED30		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE0_8      : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE0_7_0           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE0_9_8           : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PIOFF_RATE0_3_0               : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED30_t;
__xdata __at( 0xe078 ) volatile AUTOSPEED30_t AUTOSPEED30;
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE0_8  AUTOSPEED30.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE0_8
#define reg_FBDIV_CAL_RING_PIOFF_RATE0_7_0  AUTOSPEED30.BF.FBDIV_CAL_RING_PIOFF_RATE0_7_0
#define reg_FBDIV_CAL_RING_PIOFF_RATE0_9_8  AUTOSPEED30.BF.FBDIV_CAL_RING_PIOFF_RATE0_9_8
#define reg_INTPI_RING_PIOFF_RATE0_3_0  AUTOSPEED30.BF.INTPI_RING_PIOFF_RATE0_3_0

// 0x007c	AUTOSPEED31		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PIOFF_RATE0_1_0            : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PIOFF_RATE0            : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PIOFF_RATE0_1_0      : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PIOFF_RATE0_1_0      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED31_t;
__xdata __at( 0xe07c ) volatile AUTOSPEED31_t AUTOSPEED31;
#define reg_TX_INTPR_RING_PIOFF_RATE0_1_0  AUTOSPEED31.BF.TX_INTPR_RING_PIOFF_RATE0_1_0
#define reg_PLL_BAND_SEL_RING_PIOFF_RATE0  AUTOSPEED31.BF.PLL_BAND_SEL_RING_PIOFF_RATE0
#define reg_PLL_LPF_C1_SEL_RING_PIOFF_RATE0_1_0  AUTOSPEED31.BF.PLL_LPF_C1_SEL_RING_PIOFF_RATE0_1_0
#define reg_PLL_LPF_C2_SEL_RING_PIOFF_RATE0_1_0  AUTOSPEED31.BF.PLL_LPF_C2_SEL_RING_PIOFF_RATE0_1_0

// 0x0080	AUTOSPEED32		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PIOFF_RATE0_2_0      : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE0_7_0        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE0_9_8        : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_7_0   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED32_t;
__xdata __at( 0xe080 ) volatile AUTOSPEED32_t AUTOSPEED32;
#define reg_PLL_LPF_R1_SEL_RING_PIOFF_RATE0_2_0  AUTOSPEED32.BF.PLL_LPF_R1_SEL_RING_PIOFF_RATE0_2_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE0_7_0  AUTOSPEED32.BF.INIT_TXFOFFS_RING_PIOFF_RATE0_7_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE0_9_8  AUTOSPEED32.BF.INIT_TXFOFFS_RING_PIOFF_RATE0_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_7_0  AUTOSPEED32.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_7_0

// 0x0084	AUTOSPEED33		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_9_8   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PIOFF_RATE0          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_RING_PIOFF_RATE0_7_0            : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SSC_STEP_RING_PIOFF_RATE0_10_8           : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED33_t;
__xdata __at( 0xe084 ) volatile AUTOSPEED33_t AUTOSPEED33;
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_9_8  AUTOSPEED33.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_9_8
#define reg_SSC_ACC_FACTOR_RING_PIOFF_RATE0  AUTOSPEED33.BF.SSC_ACC_FACTOR_RING_PIOFF_RATE0
#define reg_SSC_STEP_RING_PIOFF_RATE0_7_0  AUTOSPEED33.BF.SSC_STEP_RING_PIOFF_RATE0_7_0
#define reg_SSC_STEP_RING_PIOFF_RATE0_10_8  AUTOSPEED33.BF.SSC_STEP_RING_PIOFF_RATE0_10_8

// 0x0088	AUTOSPEED34		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PIOFF_RATE0_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SSC_M_RING_PIOFF_RATE0_12_8              : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED34_t;
__xdata __at( 0xe088 ) volatile AUTOSPEED34_t AUTOSPEED34;
#define reg_SSC_M_RING_PIOFF_RATE0_7_0  AUTOSPEED34.BF.SSC_M_RING_PIOFF_RATE0_7_0
#define reg_SSC_M_RING_PIOFF_RATE0_12_8  AUTOSPEED34.BF.SSC_M_RING_PIOFF_RATE0_12_8

// 0x008c	AUTOSPEED35		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PIOFF_RATE1_3_0        : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PIOFF_RATE1_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE1_7_0           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE1_9_8           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED35_t;
__xdata __at( 0xe08c ) volatile AUTOSPEED35_t AUTOSPEED35;
#define reg_PLL_RATE_SEL_RPLL_PIOFF_RATE1_3_0  AUTOSPEED35.BF.PLL_RATE_SEL_RPLL_PIOFF_RATE1_3_0
#define reg_PLL_REFDIV_RING_PIOFF_RATE1_3_0  AUTOSPEED35.BF.PLL_REFDIV_RING_PIOFF_RATE1_3_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE1_7_0  AUTOSPEED35.BF.PLL_FBDIV_RING_PIOFF_RATE1_7_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE1_9_8  AUTOSPEED35.BF.PLL_FBDIV_RING_PIOFF_RATE1_9_8

// 0x0090	AUTOSPEED36		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE1_7_0      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE1_9_8      : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PIOFF_RATE1_3_0                 : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE1_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED36_t;
__xdata __at( 0xe090 ) volatile AUTOSPEED36_t AUTOSPEED36;
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE1_7_0  AUTOSPEED36.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE1_7_0
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE1_9_8  AUTOSPEED36.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE1_9_8
#define reg_ICP_RING_PIOFF_RATE1_3_0  AUTOSPEED36.BF.ICP_RING_PIOFF_RATE1_3_0
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE1_7_0  AUTOSPEED36.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE1_7_0

// 0x0094	AUTOSPEED37		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE1_8      : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE1_7_0           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE1_9_8           : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PIOFF_RATE1_3_0               : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED37_t;
__xdata __at( 0xe094 ) volatile AUTOSPEED37_t AUTOSPEED37;
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE1_8  AUTOSPEED37.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE1_8
#define reg_FBDIV_CAL_RING_PIOFF_RATE1_7_0  AUTOSPEED37.BF.FBDIV_CAL_RING_PIOFF_RATE1_7_0
#define reg_FBDIV_CAL_RING_PIOFF_RATE1_9_8  AUTOSPEED37.BF.FBDIV_CAL_RING_PIOFF_RATE1_9_8
#define reg_INTPI_RING_PIOFF_RATE1_3_0  AUTOSPEED37.BF.INTPI_RING_PIOFF_RATE1_3_0

// 0x0098	AUTOSPEED38		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PIOFF_RATE1_1_0            : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PIOFF_RATE1            : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PIOFF_RATE1_1_0      : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PIOFF_RATE1_1_0      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED38_t;
__xdata __at( 0xe098 ) volatile AUTOSPEED38_t AUTOSPEED38;
#define reg_TX_INTPR_RING_PIOFF_RATE1_1_0  AUTOSPEED38.BF.TX_INTPR_RING_PIOFF_RATE1_1_0
#define reg_PLL_BAND_SEL_RING_PIOFF_RATE1  AUTOSPEED38.BF.PLL_BAND_SEL_RING_PIOFF_RATE1
#define reg_PLL_LPF_C1_SEL_RING_PIOFF_RATE1_1_0  AUTOSPEED38.BF.PLL_LPF_C1_SEL_RING_PIOFF_RATE1_1_0
#define reg_PLL_LPF_C2_SEL_RING_PIOFF_RATE1_1_0  AUTOSPEED38.BF.PLL_LPF_C2_SEL_RING_PIOFF_RATE1_1_0

// 0x009c	AUTOSPEED39		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PIOFF_RATE1_2_0      : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE1_7_0        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE1_9_8        : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_7_0   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED39_t;
__xdata __at( 0xe09c ) volatile AUTOSPEED39_t AUTOSPEED39;
#define reg_PLL_LPF_R1_SEL_RING_PIOFF_RATE1_2_0  AUTOSPEED39.BF.PLL_LPF_R1_SEL_RING_PIOFF_RATE1_2_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE1_7_0  AUTOSPEED39.BF.INIT_TXFOFFS_RING_PIOFF_RATE1_7_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE1_9_8  AUTOSPEED39.BF.INIT_TXFOFFS_RING_PIOFF_RATE1_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_7_0  AUTOSPEED39.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_7_0

// 0x00a0	AUTOSPEED40		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_9_8   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PIOFF_RATE1          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_RING_PIOFF_RATE1_7_0            : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SSC_STEP_RING_PIOFF_RATE1_10_8           : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED40_t;
__xdata __at( 0xe0a0 ) volatile AUTOSPEED40_t AUTOSPEED40;
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_9_8  AUTOSPEED40.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_9_8
#define reg_SSC_ACC_FACTOR_RING_PIOFF_RATE1  AUTOSPEED40.BF.SSC_ACC_FACTOR_RING_PIOFF_RATE1
#define reg_SSC_STEP_RING_PIOFF_RATE1_7_0  AUTOSPEED40.BF.SSC_STEP_RING_PIOFF_RATE1_7_0
#define reg_SSC_STEP_RING_PIOFF_RATE1_10_8  AUTOSPEED40.BF.SSC_STEP_RING_PIOFF_RATE1_10_8

// 0x00a4	AUTOSPEED41		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PIOFF_RATE1_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SSC_M_RING_PIOFF_RATE1_12_8              : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED41_t;
__xdata __at( 0xe0a4 ) volatile AUTOSPEED41_t AUTOSPEED41;
#define reg_SSC_M_RING_PIOFF_RATE1_7_0  AUTOSPEED41.BF.SSC_M_RING_PIOFF_RATE1_7_0
#define reg_SSC_M_RING_PIOFF_RATE1_12_8  AUTOSPEED41.BF.SSC_M_RING_PIOFF_RATE1_12_8

// 0x00a8	AUTOSPEED42		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PION_RATE0_3_0         : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PION_RATE0_3_0           : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PION_RATE0_7_0            : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_PION_RATE0_9_8            : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED42_t;
__xdata __at( 0xe0a8 ) volatile AUTOSPEED42_t AUTOSPEED42;
#define reg_PLL_RATE_SEL_RPLL_PION_RATE0_3_0  AUTOSPEED42.BF.PLL_RATE_SEL_RPLL_PION_RATE0_3_0
#define reg_PLL_REFDIV_RING_PION_RATE0_3_0  AUTOSPEED42.BF.PLL_REFDIV_RING_PION_RATE0_3_0
#define reg_PLL_FBDIV_RING_PION_RATE0_7_0  AUTOSPEED42.BF.PLL_FBDIV_RING_PION_RATE0_7_0
#define reg_PLL_FBDIV_RING_PION_RATE0_9_8  AUTOSPEED42.BF.PLL_FBDIV_RING_PION_RATE0_9_8

// 0x00ac	AUTOSPEED43		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE0_7_0       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE0_9_8       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PION_RATE0_3_0                  : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE0_7_0     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED43_t;
__xdata __at( 0xe0ac ) volatile AUTOSPEED43_t AUTOSPEED43;
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE0_7_0  AUTOSPEED43.BF.PLL_FBDIV_RING_FBCK_PION_RATE0_7_0
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE0_9_8  AUTOSPEED43.BF.PLL_FBDIV_RING_FBCK_PION_RATE0_9_8
#define reg_ICP_RING_PION_RATE0_3_0  AUTOSPEED43.BF.ICP_RING_PION_RATE0_3_0
#define reg_PLL_SPEED_THRESH_RING_PION_RATE0_7_0  AUTOSPEED43.BF.PLL_SPEED_THRESH_RING_PION_RATE0_7_0

// 0x00b0	AUTOSPEED44		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE0_8       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PION_RATE0_7_0            : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FBDIV_CAL_RING_PION_RATE0_9_8            : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PION_RATE0_3_0                : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED44_t;
__xdata __at( 0xe0b0 ) volatile AUTOSPEED44_t AUTOSPEED44;
#define reg_PLL_SPEED_THRESH_RING_PION_RATE0_8  AUTOSPEED44.BF.PLL_SPEED_THRESH_RING_PION_RATE0_8
#define reg_FBDIV_CAL_RING_PION_RATE0_7_0  AUTOSPEED44.BF.FBDIV_CAL_RING_PION_RATE0_7_0
#define reg_FBDIV_CAL_RING_PION_RATE0_9_8  AUTOSPEED44.BF.FBDIV_CAL_RING_PION_RATE0_9_8
#define reg_INTPI_RING_PION_RATE0_3_0  AUTOSPEED44.BF.INTPI_RING_PION_RATE0_3_0

// 0x00b4	AUTOSPEED45		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PION_RATE0_1_0             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PION_RATE0             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PION_RATE0_1_0       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PION_RATE0_1_0       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED45_t;
__xdata __at( 0xe0b4 ) volatile AUTOSPEED45_t AUTOSPEED45;
#define reg_TX_INTPR_RING_PION_RATE0_1_0  AUTOSPEED45.BF.TX_INTPR_RING_PION_RATE0_1_0
#define reg_PLL_BAND_SEL_RING_PION_RATE0  AUTOSPEED45.BF.PLL_BAND_SEL_RING_PION_RATE0
#define reg_PLL_LPF_C1_SEL_RING_PION_RATE0_1_0  AUTOSPEED45.BF.PLL_LPF_C1_SEL_RING_PION_RATE0_1_0
#define reg_PLL_LPF_C2_SEL_RING_PION_RATE0_1_0  AUTOSPEED45.BF.PLL_LPF_C2_SEL_RING_PION_RATE0_1_0

// 0x00b8	AUTOSPEED46		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PION_RATE0_2_0       : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE0_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE0_9_8         : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE0_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED46_t;
__xdata __at( 0xe0b8 ) volatile AUTOSPEED46_t AUTOSPEED46;
#define reg_PLL_LPF_R1_SEL_RING_PION_RATE0_2_0  AUTOSPEED46.BF.PLL_LPF_R1_SEL_RING_PION_RATE0_2_0
#define reg_INIT_TXFOFFS_RING_PION_RATE0_7_0  AUTOSPEED46.BF.INIT_TXFOFFS_RING_PION_RATE0_7_0
#define reg_INIT_TXFOFFS_RING_PION_RATE0_9_8  AUTOSPEED46.BF.INIT_TXFOFFS_RING_PION_RATE0_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE0_7_0  AUTOSPEED46.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE0_7_0

// 0x00bc	AUTOSPEED47		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE0_9_8    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PION_RATE0           : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_RING_PION_RATE0_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SSC_STEP_RING_PION_RATE0_10_8            : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED47_t;
__xdata __at( 0xe0bc ) volatile AUTOSPEED47_t AUTOSPEED47;
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE0_9_8  AUTOSPEED47.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE0_9_8
#define reg_SSC_ACC_FACTOR_RING_PION_RATE0  AUTOSPEED47.BF.SSC_ACC_FACTOR_RING_PION_RATE0
#define reg_SSC_STEP_RING_PION_RATE0_7_0  AUTOSPEED47.BF.SSC_STEP_RING_PION_RATE0_7_0
#define reg_SSC_STEP_RING_PION_RATE0_10_8  AUTOSPEED47.BF.SSC_STEP_RING_PION_RATE0_10_8

// 0x00c0	AUTOSPEED48		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PION_RATE0_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SSC_M_RING_PION_RATE0_12_8               : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED48_t;
__xdata __at( 0xe0c0 ) volatile AUTOSPEED48_t AUTOSPEED48;
#define reg_SSC_M_RING_PION_RATE0_7_0  AUTOSPEED48.BF.SSC_M_RING_PION_RATE0_7_0
#define reg_SSC_M_RING_PION_RATE0_12_8  AUTOSPEED48.BF.SSC_M_RING_PION_RATE0_12_8

// 0x00c4	AUTOSPEED49		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PION_RATE1_3_0         : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PION_RATE1_3_0           : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PION_RATE1_7_0            : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_PION_RATE1_9_8            : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED49_t;
__xdata __at( 0xe0c4 ) volatile AUTOSPEED49_t AUTOSPEED49;
#define reg_PLL_RATE_SEL_RPLL_PION_RATE1_3_0  AUTOSPEED49.BF.PLL_RATE_SEL_RPLL_PION_RATE1_3_0
#define reg_PLL_REFDIV_RING_PION_RATE1_3_0  AUTOSPEED49.BF.PLL_REFDIV_RING_PION_RATE1_3_0
#define reg_PLL_FBDIV_RING_PION_RATE1_7_0  AUTOSPEED49.BF.PLL_FBDIV_RING_PION_RATE1_7_0
#define reg_PLL_FBDIV_RING_PION_RATE1_9_8  AUTOSPEED49.BF.PLL_FBDIV_RING_PION_RATE1_9_8

// 0x00c8	AUTOSPEED50		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE1_7_0       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE1_9_8       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PION_RATE1_3_0                  : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE1_7_0     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED50_t;
__xdata __at( 0xe0c8 ) volatile AUTOSPEED50_t AUTOSPEED50;
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE1_7_0  AUTOSPEED50.BF.PLL_FBDIV_RING_FBCK_PION_RATE1_7_0
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE1_9_8  AUTOSPEED50.BF.PLL_FBDIV_RING_FBCK_PION_RATE1_9_8
#define reg_ICP_RING_PION_RATE1_3_0  AUTOSPEED50.BF.ICP_RING_PION_RATE1_3_0
#define reg_PLL_SPEED_THRESH_RING_PION_RATE1_7_0  AUTOSPEED50.BF.PLL_SPEED_THRESH_RING_PION_RATE1_7_0

// 0x00cc	AUTOSPEED51		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE1_8       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PION_RATE1_7_0            : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FBDIV_CAL_RING_PION_RATE1_9_8            : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PION_RATE1_3_0                : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED51_t;
__xdata __at( 0xe0cc ) volatile AUTOSPEED51_t AUTOSPEED51;
#define reg_PLL_SPEED_THRESH_RING_PION_RATE1_8  AUTOSPEED51.BF.PLL_SPEED_THRESH_RING_PION_RATE1_8
#define reg_FBDIV_CAL_RING_PION_RATE1_7_0  AUTOSPEED51.BF.FBDIV_CAL_RING_PION_RATE1_7_0
#define reg_FBDIV_CAL_RING_PION_RATE1_9_8  AUTOSPEED51.BF.FBDIV_CAL_RING_PION_RATE1_9_8
#define reg_INTPI_RING_PION_RATE1_3_0  AUTOSPEED51.BF.INTPI_RING_PION_RATE1_3_0

// 0x00d0	AUTOSPEED52		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PION_RATE1_1_0             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PION_RATE1             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PION_RATE1_1_0       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PION_RATE1_1_0       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED52_t;
__xdata __at( 0xe0d0 ) volatile AUTOSPEED52_t AUTOSPEED52;
#define reg_TX_INTPR_RING_PION_RATE1_1_0  AUTOSPEED52.BF.TX_INTPR_RING_PION_RATE1_1_0
#define reg_PLL_BAND_SEL_RING_PION_RATE1  AUTOSPEED52.BF.PLL_BAND_SEL_RING_PION_RATE1
#define reg_PLL_LPF_C1_SEL_RING_PION_RATE1_1_0  AUTOSPEED52.BF.PLL_LPF_C1_SEL_RING_PION_RATE1_1_0
#define reg_PLL_LPF_C2_SEL_RING_PION_RATE1_1_0  AUTOSPEED52.BF.PLL_LPF_C2_SEL_RING_PION_RATE1_1_0

// 0x00d4	AUTOSPEED53		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PION_RATE1_2_0       : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE1_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE1_9_8         : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE1_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED53_t;
__xdata __at( 0xe0d4 ) volatile AUTOSPEED53_t AUTOSPEED53;
#define reg_PLL_LPF_R1_SEL_RING_PION_RATE1_2_0  AUTOSPEED53.BF.PLL_LPF_R1_SEL_RING_PION_RATE1_2_0
#define reg_INIT_TXFOFFS_RING_PION_RATE1_7_0  AUTOSPEED53.BF.INIT_TXFOFFS_RING_PION_RATE1_7_0
#define reg_INIT_TXFOFFS_RING_PION_RATE1_9_8  AUTOSPEED53.BF.INIT_TXFOFFS_RING_PION_RATE1_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE1_7_0  AUTOSPEED53.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE1_7_0

// 0x00d8	AUTOSPEED54		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE1_9_8    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PION_RATE1           : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_RING_PION_RATE1_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SSC_STEP_RING_PION_RATE1_10_8            : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED54_t;
__xdata __at( 0xe0d8 ) volatile AUTOSPEED54_t AUTOSPEED54;
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE1_9_8  AUTOSPEED54.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE1_9_8
#define reg_SSC_ACC_FACTOR_RING_PION_RATE1  AUTOSPEED54.BF.SSC_ACC_FACTOR_RING_PION_RATE1
#define reg_SSC_STEP_RING_PION_RATE1_7_0  AUTOSPEED54.BF.SSC_STEP_RING_PION_RATE1_7_0
#define reg_SSC_STEP_RING_PION_RATE1_10_8  AUTOSPEED54.BF.SSC_STEP_RING_PION_RATE1_10_8

// 0x00dc	AUTOSPEED55		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PION_RATE1_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SSC_M_RING_PION_RATE1_12_8               : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED55_t;
__xdata __at( 0xe0dc ) volatile AUTOSPEED55_t AUTOSPEED55;
#define reg_SSC_M_RING_PION_RATE1_7_0  AUTOSPEED55.BF.SSC_M_RING_PION_RATE1_7_0
#define reg_SSC_M_RING_PION_RATE1_12_8  AUTOSPEED55.BF.SSC_M_RING_PION_RATE1_12_8

// 0x00e0	AUTOSPEED56		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PIOFF_RATE0_3_0        : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PIOFF_RATE0_3_0     : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE0_7_0      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE0_9_8      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED56_t;
__xdata __at( 0xe0e0 ) volatile AUTOSPEED56_t AUTOSPEED56;
#define reg_PLL_RATE_SEL_250M_PIOFF_RATE0_3_0  AUTOSPEED56.BF.PLL_RATE_SEL_250M_PIOFF_RATE0_3_0
#define reg_PLL_REFDIV_RING_250M_PIOFF_RATE0_3_0  AUTOSPEED56.BF.PLL_REFDIV_RING_250M_PIOFF_RATE0_3_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED56.BF.PLL_FBDIV_RING_250M_PIOFF_RATE0_7_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE0_9_8  AUTOSPEED56.BF.PLL_FBDIV_RING_250M_PIOFF_RATE0_9_8

// 0x00e4	AUTOSPEED57		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_7_0 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_9_8 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PIOFF_RATE0_3_0            : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED57_t;
__xdata __at( 0xe0e4 ) volatile AUTOSPEED57_t AUTOSPEED57;
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_7_0  AUTOSPEED57.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_9_8  AUTOSPEED57.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_9_8
#define reg_ICP_RING_250M_PIOFF_RATE0_3_0  AUTOSPEED57.BF.ICP_RING_250M_PIOFF_RATE0_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED57.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_7_0

// 0x00e8	AUTOSPEED58		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_8 : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE0_7_0      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE0_9_8      : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PIOFF_RATE0_3_0          : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED58_t;
__xdata __at( 0xe0e8 ) volatile AUTOSPEED58_t AUTOSPEED58;
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_8  AUTOSPEED58.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_8
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED58.BF.FBDIV_CAL_RING_250M_PIOFF_RATE0_7_0
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE0_9_8  AUTOSPEED58.BF.FBDIV_CAL_RING_250M_PIOFF_RATE0_9_8
#define reg_INTPI_RING_250M_PIOFF_RATE0_3_0  AUTOSPEED58.BF.INTPI_RING_250M_PIOFF_RATE0_3_0

// 0x00ec	AUTOSPEED59		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PIOFF_RATE0_1_0       : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PIOFF_RATE0       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE0_1_0 : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE0_1_0 : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED59_t;
__xdata __at( 0xe0ec ) volatile AUTOSPEED59_t AUTOSPEED59;
#define reg_TX_INTPR_RING_250M_PIOFF_RATE0_1_0  AUTOSPEED59.BF.TX_INTPR_RING_250M_PIOFF_RATE0_1_0
#define reg_PLL_BAND_SEL_RING_250M_PIOFF_RATE0  AUTOSPEED59.BF.PLL_BAND_SEL_RING_250M_PIOFF_RATE0
#define reg_PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE0_1_0  AUTOSPEED59.BF.PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE0_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE0_1_0  AUTOSPEED59.BF.PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE0_1_0

// 0x00f0	AUTOSPEED60		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE0_2_0 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE0_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE0_9_8   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED60_t;
__xdata __at( 0xe0f0 ) volatile AUTOSPEED60_t AUTOSPEED60;
#define reg_PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE0_2_0  AUTOSPEED60.BF.PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE0_2_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED60.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE0_7_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE0_9_8  AUTOSPEED60.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE0_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_7_0  AUTOSPEED60.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_7_0

// 0x00f4	AUTOSPEED61		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PIOFF_RATE0     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_RING_250M_PIOFF_RATE0_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SSC_STEP_RING_250M_PIOFF_RATE0_10_8      : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED61_t;
__xdata __at( 0xe0f4 ) volatile AUTOSPEED61_t AUTOSPEED61;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_9_8  AUTOSPEED61.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PIOFF_RATE0  AUTOSPEED61.BF.SSC_ACC_FACTOR_RING_250M_PIOFF_RATE0
#define reg_SSC_STEP_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED61.BF.SSC_STEP_RING_250M_PIOFF_RATE0_7_0
#define reg_SSC_STEP_RING_250M_PIOFF_RATE0_10_8  AUTOSPEED61.BF.SSC_STEP_RING_250M_PIOFF_RATE0_10_8

// 0x00f8	AUTOSPEED62		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PIOFF_RATE0_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SSC_M_RING_250M_PIOFF_RATE0_12_8         : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED62_t;
__xdata __at( 0xe0f8 ) volatile AUTOSPEED62_t AUTOSPEED62;
#define reg_SSC_M_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED62.BF.SSC_M_RING_250M_PIOFF_RATE0_7_0
#define reg_SSC_M_RING_250M_PIOFF_RATE0_12_8  AUTOSPEED62.BF.SSC_M_RING_250M_PIOFF_RATE0_12_8

// 0x00fc	AUTOSPEED63		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PIOFF_RATE1_3_0        : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PIOFF_RATE1_3_0     : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE1_7_0      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE1_9_8      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED63_t;
__xdata __at( 0xe0fc ) volatile AUTOSPEED63_t AUTOSPEED63;
#define reg_PLL_RATE_SEL_250M_PIOFF_RATE1_3_0  AUTOSPEED63.BF.PLL_RATE_SEL_250M_PIOFF_RATE1_3_0
#define reg_PLL_REFDIV_RING_250M_PIOFF_RATE1_3_0  AUTOSPEED63.BF.PLL_REFDIV_RING_250M_PIOFF_RATE1_3_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED63.BF.PLL_FBDIV_RING_250M_PIOFF_RATE1_7_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE1_9_8  AUTOSPEED63.BF.PLL_FBDIV_RING_250M_PIOFF_RATE1_9_8

// 0x0100	AUTOSPEED64		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_7_0 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_9_8 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PIOFF_RATE1_3_0            : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED64_t;
__xdata __at( 0xe100 ) volatile AUTOSPEED64_t AUTOSPEED64;
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_7_0  AUTOSPEED64.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_9_8  AUTOSPEED64.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_9_8
#define reg_ICP_RING_250M_PIOFF_RATE1_3_0  AUTOSPEED64.BF.ICP_RING_250M_PIOFF_RATE1_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED64.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_7_0

// 0x0104	AUTOSPEED65		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_8 : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE1_7_0      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE1_9_8      : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PIOFF_RATE1_3_0          : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED65_t;
__xdata __at( 0xe104 ) volatile AUTOSPEED65_t AUTOSPEED65;
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_8  AUTOSPEED65.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_8
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED65.BF.FBDIV_CAL_RING_250M_PIOFF_RATE1_7_0
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE1_9_8  AUTOSPEED65.BF.FBDIV_CAL_RING_250M_PIOFF_RATE1_9_8
#define reg_INTPI_RING_250M_PIOFF_RATE1_3_0  AUTOSPEED65.BF.INTPI_RING_250M_PIOFF_RATE1_3_0

// 0x0108	AUTOSPEED66		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PIOFF_RATE1_1_0       : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PIOFF_RATE1       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE1_1_0 : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE1_1_0 : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED66_t;
__xdata __at( 0xe108 ) volatile AUTOSPEED66_t AUTOSPEED66;
#define reg_TX_INTPR_RING_250M_PIOFF_RATE1_1_0  AUTOSPEED66.BF.TX_INTPR_RING_250M_PIOFF_RATE1_1_0
#define reg_PLL_BAND_SEL_RING_250M_PIOFF_RATE1  AUTOSPEED66.BF.PLL_BAND_SEL_RING_250M_PIOFF_RATE1
#define reg_PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE1_1_0  AUTOSPEED66.BF.PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE1_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE1_1_0  AUTOSPEED66.BF.PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE1_1_0

// 0x010c	AUTOSPEED67		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE1_2_0 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE1_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE1_9_8   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED67_t;
__xdata __at( 0xe10c ) volatile AUTOSPEED67_t AUTOSPEED67;
#define reg_PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE1_2_0  AUTOSPEED67.BF.PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE1_2_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED67.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE1_7_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE1_9_8  AUTOSPEED67.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE1_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_7_0  AUTOSPEED67.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_7_0

// 0x0110	AUTOSPEED68		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PIOFF_RATE1     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_RING_250M_PIOFF_RATE1_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SSC_STEP_RING_250M_PIOFF_RATE1_10_8      : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED68_t;
__xdata __at( 0xe110 ) volatile AUTOSPEED68_t AUTOSPEED68;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_9_8  AUTOSPEED68.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PIOFF_RATE1  AUTOSPEED68.BF.SSC_ACC_FACTOR_RING_250M_PIOFF_RATE1
#define reg_SSC_STEP_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED68.BF.SSC_STEP_RING_250M_PIOFF_RATE1_7_0
#define reg_SSC_STEP_RING_250M_PIOFF_RATE1_10_8  AUTOSPEED68.BF.SSC_STEP_RING_250M_PIOFF_RATE1_10_8

// 0x0114	AUTOSPEED69		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PIOFF_RATE1_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SSC_M_RING_250M_PIOFF_RATE1_12_8         : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED69_t;
__xdata __at( 0xe114 ) volatile AUTOSPEED69_t AUTOSPEED69;
#define reg_SSC_M_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED69.BF.SSC_M_RING_250M_PIOFF_RATE1_7_0
#define reg_SSC_M_RING_250M_PIOFF_RATE1_12_8  AUTOSPEED69.BF.SSC_M_RING_250M_PIOFF_RATE1_12_8

// 0x0118	AUTOSPEED70		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PION_RATE0_3_0         : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PION_RATE0_3_0      : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE0_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE0_9_8       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED70_t;
__xdata __at( 0xe118 ) volatile AUTOSPEED70_t AUTOSPEED70;
#define reg_PLL_RATE_SEL_250M_PION_RATE0_3_0  AUTOSPEED70.BF.PLL_RATE_SEL_250M_PION_RATE0_3_0
#define reg_PLL_REFDIV_RING_250M_PION_RATE0_3_0  AUTOSPEED70.BF.PLL_REFDIV_RING_250M_PION_RATE0_3_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE0_7_0  AUTOSPEED70.BF.PLL_FBDIV_RING_250M_PION_RATE0_7_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE0_9_8  AUTOSPEED70.BF.PLL_FBDIV_RING_250M_PION_RATE0_9_8

// 0x011c	AUTOSPEED71		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE0_7_0  : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE0_9_8  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PION_RATE0_3_0             : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE0_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED71_t;
__xdata __at( 0xe11c ) volatile AUTOSPEED71_t AUTOSPEED71;
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE0_7_0  AUTOSPEED71.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE0_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE0_9_8  AUTOSPEED71.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE0_9_8
#define reg_ICP_RING_250M_PION_RATE0_3_0  AUTOSPEED71.BF.ICP_RING_250M_PION_RATE0_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE0_7_0  AUTOSPEED71.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE0_7_0

// 0x0120	AUTOSPEED72		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE0_8  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE0_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE0_9_8       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PION_RATE0_3_0           : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED72_t;
__xdata __at( 0xe120 ) volatile AUTOSPEED72_t AUTOSPEED72;
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE0_8  AUTOSPEED72.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE0_8
#define reg_FBDIV_CAL_RING_250M_PION_RATE0_7_0  AUTOSPEED72.BF.FBDIV_CAL_RING_250M_PION_RATE0_7_0
#define reg_FBDIV_CAL_RING_250M_PION_RATE0_9_8  AUTOSPEED72.BF.FBDIV_CAL_RING_250M_PION_RATE0_9_8
#define reg_INTPI_RING_250M_PION_RATE0_3_0  AUTOSPEED72.BF.INTPI_RING_250M_PION_RATE0_3_0

// 0x0124	AUTOSPEED73		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PION_RATE0_1_0        : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PION_RATE0        : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PION_RATE0_1_0  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PION_RATE0_1_0  : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED73_t;
__xdata __at( 0xe124 ) volatile AUTOSPEED73_t AUTOSPEED73;
#define reg_TX_INTPR_RING_250M_PION_RATE0_1_0  AUTOSPEED73.BF.TX_INTPR_RING_250M_PION_RATE0_1_0
#define reg_PLL_BAND_SEL_RING_250M_PION_RATE0  AUTOSPEED73.BF.PLL_BAND_SEL_RING_250M_PION_RATE0
#define reg_PLL_LPF_C1_SEL_RING_250M_PION_RATE0_1_0  AUTOSPEED73.BF.PLL_LPF_C1_SEL_RING_250M_PION_RATE0_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PION_RATE0_1_0  AUTOSPEED73.BF.PLL_LPF_C2_SEL_RING_250M_PION_RATE0_1_0

// 0x0128	AUTOSPEED74		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PION_RATE0_2_0  : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE0_7_0    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE0_9_8    : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED74_t;
__xdata __at( 0xe128 ) volatile AUTOSPEED74_t AUTOSPEED74;
#define reg_PLL_LPF_R1_SEL_RING_250M_PION_RATE0_2_0  AUTOSPEED74.BF.PLL_LPF_R1_SEL_RING_250M_PION_RATE0_2_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE0_7_0  AUTOSPEED74.BF.INIT_TXFOFFS_RING_250M_PION_RATE0_7_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE0_9_8  AUTOSPEED74.BF.INIT_TXFOFFS_RING_250M_PION_RATE0_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_7_0  AUTOSPEED74.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_7_0

// 0x012c	AUTOSPEED75		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PION_RATE0      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_RING_250M_PION_RATE0_7_0        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SSC_STEP_RING_250M_PION_RATE0_10_8       : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED75_t;
__xdata __at( 0xe12c ) volatile AUTOSPEED75_t AUTOSPEED75;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_9_8  AUTOSPEED75.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PION_RATE0  AUTOSPEED75.BF.SSC_ACC_FACTOR_RING_250M_PION_RATE0
#define reg_SSC_STEP_RING_250M_PION_RATE0_7_0  AUTOSPEED75.BF.SSC_STEP_RING_250M_PION_RATE0_7_0
#define reg_SSC_STEP_RING_250M_PION_RATE0_10_8  AUTOSPEED75.BF.SSC_STEP_RING_250M_PION_RATE0_10_8

// 0x0130	AUTOSPEED76		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PION_RATE0_7_0           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SSC_M_RING_250M_PION_RATE0_12_8          : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED76_t;
__xdata __at( 0xe130 ) volatile AUTOSPEED76_t AUTOSPEED76;
#define reg_SSC_M_RING_250M_PION_RATE0_7_0  AUTOSPEED76.BF.SSC_M_RING_250M_PION_RATE0_7_0
#define reg_SSC_M_RING_250M_PION_RATE0_12_8  AUTOSPEED76.BF.SSC_M_RING_250M_PION_RATE0_12_8

// 0x0134	AUTOSPEED77		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PION_RATE1_3_0         : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PION_RATE1_3_0      : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE1_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE1_9_8       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED77_t;
__xdata __at( 0xe134 ) volatile AUTOSPEED77_t AUTOSPEED77;
#define reg_PLL_RATE_SEL_250M_PION_RATE1_3_0  AUTOSPEED77.BF.PLL_RATE_SEL_250M_PION_RATE1_3_0
#define reg_PLL_REFDIV_RING_250M_PION_RATE1_3_0  AUTOSPEED77.BF.PLL_REFDIV_RING_250M_PION_RATE1_3_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE1_7_0  AUTOSPEED77.BF.PLL_FBDIV_RING_250M_PION_RATE1_7_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE1_9_8  AUTOSPEED77.BF.PLL_FBDIV_RING_250M_PION_RATE1_9_8

// 0x0138	AUTOSPEED78		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE1_7_0  : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE1_9_8  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PION_RATE1_3_0             : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE1_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED78_t;
__xdata __at( 0xe138 ) volatile AUTOSPEED78_t AUTOSPEED78;
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE1_7_0  AUTOSPEED78.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE1_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE1_9_8  AUTOSPEED78.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE1_9_8
#define reg_ICP_RING_250M_PION_RATE1_3_0  AUTOSPEED78.BF.ICP_RING_250M_PION_RATE1_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE1_7_0  AUTOSPEED78.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE1_7_0

// 0x013c	AUTOSPEED79		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE1_8  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE1_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE1_9_8       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PION_RATE1_3_0           : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED79_t;
__xdata __at( 0xe13c ) volatile AUTOSPEED79_t AUTOSPEED79;
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE1_8  AUTOSPEED79.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE1_8
#define reg_FBDIV_CAL_RING_250M_PION_RATE1_7_0  AUTOSPEED79.BF.FBDIV_CAL_RING_250M_PION_RATE1_7_0
#define reg_FBDIV_CAL_RING_250M_PION_RATE1_9_8  AUTOSPEED79.BF.FBDIV_CAL_RING_250M_PION_RATE1_9_8
#define reg_INTPI_RING_250M_PION_RATE1_3_0  AUTOSPEED79.BF.INTPI_RING_250M_PION_RATE1_3_0

// 0x0140	AUTOSPEED80		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PION_RATE1_1_0        : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PION_RATE1        : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PION_RATE1_1_0  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PION_RATE1_1_0  : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED80_t;
__xdata __at( 0xe140 ) volatile AUTOSPEED80_t AUTOSPEED80;
#define reg_TX_INTPR_RING_250M_PION_RATE1_1_0  AUTOSPEED80.BF.TX_INTPR_RING_250M_PION_RATE1_1_0
#define reg_PLL_BAND_SEL_RING_250M_PION_RATE1  AUTOSPEED80.BF.PLL_BAND_SEL_RING_250M_PION_RATE1
#define reg_PLL_LPF_C1_SEL_RING_250M_PION_RATE1_1_0  AUTOSPEED80.BF.PLL_LPF_C1_SEL_RING_250M_PION_RATE1_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PION_RATE1_1_0  AUTOSPEED80.BF.PLL_LPF_C2_SEL_RING_250M_PION_RATE1_1_0

// 0x0144	AUTOSPEED81		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PION_RATE1_2_0  : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE1_7_0    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE1_9_8    : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED81_t;
__xdata __at( 0xe144 ) volatile AUTOSPEED81_t AUTOSPEED81;
#define reg_PLL_LPF_R1_SEL_RING_250M_PION_RATE1_2_0  AUTOSPEED81.BF.PLL_LPF_R1_SEL_RING_250M_PION_RATE1_2_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE1_7_0  AUTOSPEED81.BF.INIT_TXFOFFS_RING_250M_PION_RATE1_7_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE1_9_8  AUTOSPEED81.BF.INIT_TXFOFFS_RING_250M_PION_RATE1_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_7_0  AUTOSPEED81.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_7_0

// 0x0148	AUTOSPEED82		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PION_RATE1      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_RING_250M_PION_RATE1_7_0        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SSC_STEP_RING_250M_PION_RATE1_10_8       : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED82_t;
__xdata __at( 0xe148 ) volatile AUTOSPEED82_t AUTOSPEED82;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_9_8  AUTOSPEED82.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PION_RATE1  AUTOSPEED82.BF.SSC_ACC_FACTOR_RING_250M_PION_RATE1
#define reg_SSC_STEP_RING_250M_PION_RATE1_7_0  AUTOSPEED82.BF.SSC_STEP_RING_250M_PION_RATE1_7_0
#define reg_SSC_STEP_RING_250M_PION_RATE1_10_8  AUTOSPEED82.BF.SSC_STEP_RING_250M_PION_RATE1_10_8

// 0x014c	AUTOSPEED83		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PION_RATE1_7_0           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SSC_M_RING_250M_PION_RATE1_12_8          : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED83_t;
__xdata __at( 0xe14c ) volatile AUTOSPEED83_t AUTOSPEED83;
#define reg_SSC_M_RING_250M_PION_RATE1_7_0  AUTOSPEED83.BF.SSC_M_RING_250M_PION_RATE1_7_0
#define reg_SSC_M_RING_250M_PION_RATE1_12_8  AUTOSPEED83.BF.SSC_M_RING_250M_PION_RATE1_12_8

// 0x0150	AUTOSPEED84		TBD
typedef union {
	struct {
		uint8_t USE_RING_REFCLK_250M                     : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t CAL_LCVCO_DAC_LSB_RATE0_7_0              : 8;	/* [15:8]     r/w 8'h1f*/
		uint8_t CAL_LCVCO_DAC_LSB_RATE1_7_0              : 8;	/*[23:16]     r/w 8'h1f*/
		uint8_t CAL_LCVCO_DAC_LSB_CONT_RATE1_7_0         : 8;	/*[31:24]     r/w 8'h1f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED84_t;
__xdata __at( 0xe150 ) volatile AUTOSPEED84_t AUTOSPEED84;
#define reg_USE_RING_REFCLK_250M  AUTOSPEED84.BF.USE_RING_REFCLK_250M
#define reg_CAL_LCVCO_DAC_LSB_RATE0_7_0  AUTOSPEED84.BF.CAL_LCVCO_DAC_LSB_RATE0_7_0
#define reg_CAL_LCVCO_DAC_LSB_RATE1_7_0  AUTOSPEED84.BF.CAL_LCVCO_DAC_LSB_RATE1_7_0
#define reg_CAL_LCVCO_DAC_LSB_CONT_RATE1_7_0  AUTOSPEED84.BF.CAL_LCVCO_DAC_LSB_CONT_RATE1_7_0

// 0x0154	AUTOSPEED85		TBD
typedef union {
	struct {
		uint8_t CAL_LCVCO_DAC_MSB_RATE0_7_0              : 8;	/*  [7:0]     r/w 8'h21*/
		uint8_t CAL_LCVCO_DAC_MSB_RATE1_7_0              : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_LCVCO_DAC_MSB_CONT_RATE0_7_0         : 8;	/*[23:16]     r/w 8'h21*/
		uint8_t CAL_LCVCO_DAC_MSB_CONT_RATE1_7_0         : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED85_t;
__xdata __at( 0xe154 ) volatile AUTOSPEED85_t AUTOSPEED85;
#define reg_CAL_LCVCO_DAC_MSB_RATE0_7_0  AUTOSPEED85.BF.CAL_LCVCO_DAC_MSB_RATE0_7_0
#define reg_CAL_LCVCO_DAC_MSB_RATE1_7_0  AUTOSPEED85.BF.CAL_LCVCO_DAC_MSB_RATE1_7_0
#define reg_CAL_LCVCO_DAC_MSB_CONT_RATE0_7_0  AUTOSPEED85.BF.CAL_LCVCO_DAC_MSB_CONT_RATE0_7_0
#define reg_CAL_LCVCO_DAC_MSB_CONT_RATE1_7_0  AUTOSPEED85.BF.CAL_LCVCO_DAC_MSB_CONT_RATE1_7_0

// 0x0158	AUTOSPEED86		TBD
typedef union {
	struct {
		uint8_t CAL_LCCAP_LSB_RATE0_7_0                  : 8;	/*  [7:0]     r/w 8'h10*/
		uint8_t CAL_LCCAP_LSB_RATE1_7_0                  : 8;	/* [15:8]     r/w 8'h10*/
		uint8_t CAL_LCCAP_MSB_RATE0_7_0                  : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t CAL_LCCAP_MSB_RATE1_7_0                  : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED86_t;
__xdata __at( 0xe158 ) volatile AUTOSPEED86_t AUTOSPEED86;
#define reg_CAL_LCCAP_LSB_RATE0_7_0  AUTOSPEED86.BF.CAL_LCCAP_LSB_RATE0_7_0
#define reg_CAL_LCCAP_LSB_RATE1_7_0  AUTOSPEED86.BF.CAL_LCCAP_LSB_RATE1_7_0
#define reg_CAL_LCCAP_MSB_RATE0_7_0  AUTOSPEED86.BF.CAL_LCCAP_MSB_RATE0_7_0
#define reg_CAL_LCCAP_MSB_RATE1_7_0  AUTOSPEED86.BF.CAL_LCCAP_MSB_RATE1_7_0

// 0x015c	AUTOSPEED87		TBD
typedef union {
	struct {
		uint8_t CAL_PLLDCC_CNT_RATE0_7_0                 : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_PLLDCC_CNT_RATE1_7_0                 : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_PLLDCC_CNT_CONT_RATE0_7_0            : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_PLLDCC_CNT_CONT_RATE1_7_0            : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED87_t;
__xdata __at( 0xe15c ) volatile AUTOSPEED87_t AUTOSPEED87;
#define reg_CAL_PLLDCC_CNT_RATE0_7_0  AUTOSPEED87.BF.CAL_PLLDCC_CNT_RATE0_7_0
#define reg_CAL_PLLDCC_CNT_RATE1_7_0  AUTOSPEED87.BF.CAL_PLLDCC_CNT_RATE1_7_0
#define reg_CAL_PLLDCC_CNT_CONT_RATE0_7_0  AUTOSPEED87.BF.CAL_PLLDCC_CNT_CONT_RATE0_7_0
#define reg_CAL_PLLDCC_CNT_CONT_RATE1_7_0  AUTOSPEED87.BF.CAL_PLLDCC_CNT_CONT_RATE1_7_0

// 0x0160	AUTOSPEED88		TBD
typedef union {
	struct {
		uint8_t CAL_PLL_SPEED_RING_RATE0_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_RATE1_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_CONT_RATE0_7_0        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_CONT_RATE1_7_0        : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED88_t;
__xdata __at( 0xe160 ) volatile AUTOSPEED88_t AUTOSPEED88;
#define reg_CAL_PLL_SPEED_RING_RATE0_7_0  AUTOSPEED88.BF.CAL_PLL_SPEED_RING_RATE0_7_0
#define reg_CAL_PLL_SPEED_RING_RATE1_7_0  AUTOSPEED88.BF.CAL_PLL_SPEED_RING_RATE1_7_0
#define reg_CAL_PLL_SPEED_RING_CONT_RATE0_7_0  AUTOSPEED88.BF.CAL_PLL_SPEED_RING_CONT_RATE0_7_0
#define reg_CAL_PLL_SPEED_RING_CONT_RATE1_7_0  AUTOSPEED88.BF.CAL_PLL_SPEED_RING_CONT_RATE1_7_0

// 0x0164	AUTOSPEED89		TBD
typedef union {
	struct {
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_7_0   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_7_0 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED89_t;
__xdata __at( 0xe164 ) volatile AUTOSPEED89_t AUTOSPEED89;
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_7_0  AUTOSPEED89.BF.CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_7_0  AUTOSPEED89.BF.CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_7_0  AUTOSPEED89.BF.CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_7_0  AUTOSPEED89.BF.CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_7_0

// 0x0168	AUTOSPEED90		TBD
typedef union {
	struct {
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE0_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE0_15_8        : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE1_7_0         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE1_15_8        : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED90_t;
__xdata __at( 0xe168 ) volatile AUTOSPEED90_t AUTOSPEED90;
#define reg_CAL_SLLP_DAC_FINE_RING_RATE0_7_0  AUTOSPEED90.BF.CAL_SLLP_DAC_FINE_RING_RATE0_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_RATE0_15_8  AUTOSPEED90.BF.CAL_SLLP_DAC_FINE_RING_RATE0_15_8
#define reg_CAL_SLLP_DAC_FINE_RING_RATE1_7_0  AUTOSPEED90.BF.CAL_SLLP_DAC_FINE_RING_RATE1_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_RATE1_15_8  AUTOSPEED90.BF.CAL_SLLP_DAC_FINE_RING_RATE1_15_8

// 0x016c	AUTOSPEED91		TBD
typedef union {
	struct {
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE0_7_0    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE0_15_8   : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE1_7_0    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE1_15_8   : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED91_t;
__xdata __at( 0xe16c ) volatile AUTOSPEED91_t AUTOSPEED91;
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE0_7_0  AUTOSPEED91.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE0_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE0_15_8  AUTOSPEED91.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE0_15_8
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE1_7_0  AUTOSPEED91.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE1_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE1_15_8  AUTOSPEED91.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE1_15_8

#endif
