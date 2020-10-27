#ifndef PHY_REG_C_XDAT_SPD_CMN_H
#define PHY_REG_C_XDAT_SPD_CMN_H



// 0x0000	AUTOSPEED0		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE0_2_0              : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE0_3_0             : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE0_7_0                    : 8;	/*[23:16]     r/w 8'h40*/
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
		uint8_t FBDIV_CAL_PIOFF_RATE0_7_0                : 8;	/*  [7:0]     r/w 8'h14*/
		uint8_t FBDIV_CAL_PIOFF_RATE0_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE0_3_0                   : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE0                : 1;	/*     24     r/w 1'h0*/
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
		uint8_t DIV_1G_PIOFF_RATE0_7_0                   : 8;	/*  [7:0]     r/w 8'h28*/
		uint8_t DIV_1G_PIOFF_RATE0_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE0_7_0              : 8;	/*[23:16]     r/w 8'ha*/
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
		uint8_t ICP_LC_PIOFF_RATE0_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
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
#define reg_ICP_LC_PIOFF_RATE0_4_0  AUTOSPEED3.BF.ICP_LC_PIOFF_RATE0_4_0
#define reg_PLL_LPFR_PIOFF_RATE0_1_0  AUTOSPEED3.BF.PLL_LPFR_PIOFF_RATE0_1_0
#define reg_PLL_LPFC_PIOFF_RATE0_1_0  AUTOSPEED3.BF.PLL_LPFC_PIOFF_RATE0_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE0_7_0  AUTOSPEED3.BF.INIT_TXFOFFS_PIOFF_RATE0_7_0

// 0x0010	AUTOSPEED4		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE0_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE0_7_0             : 8;	/* [15:8]     r/w 8'hda*/
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
		uint8_t SSC_STEP_125PPM_PIOFF_RATE0_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE0_7_0                    : 8;	/*[23:16]     r/w 8'haf*/
		uint8_t SSC_M_PIOFF_RATE0_12_8                   : 5;	/*[28:24]     r/w 5'h9*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED5_t;
__xdata __at( 0xe014 ) volatile AUTOSPEED5_t AUTOSPEED5;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE0  AUTOSPEED5.BF.SSC_ACC_FACTOR_PIOFF_RATE0
#define reg_SSC_STEP_125PPM_PIOFF_RATE0_3_0  AUTOSPEED5.BF.SSC_STEP_125PPM_PIOFF_RATE0_3_0
#define reg_SSC_M_PIOFF_RATE0_7_0  AUTOSPEED5.BF.SSC_M_PIOFF_RATE0_7_0
#define reg_SSC_M_PIOFF_RATE0_12_8  AUTOSPEED5.BF.SSC_M_PIOFF_RATE0_12_8

// 0x0018	AUTOSPEED6		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED6_t;
__xdata __at( 0xe018 ) volatile AUTOSPEED6_t AUTOSPEED6;

// 0x001c	AUTOSPEED7		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED7_t;
__xdata __at( 0xe01c ) volatile AUTOSPEED7_t AUTOSPEED7;

// 0x0020	AUTOSPEED8		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE1_2_0              : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE1_3_0             : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE1_7_0                    : 8;	/*[23:16]     r/w 8'h84*/
		uint8_t FBDIV_PIOFF_RATE1_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED8_t;
__xdata __at( 0xe020 ) volatile AUTOSPEED8_t AUTOSPEED8;
#define reg_PLL_REG_SEL_PIOFF_RATE1_2_0  AUTOSPEED8.BF.PLL_REG_SEL_PIOFF_RATE1_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE1_3_0  AUTOSPEED8.BF.PLL_RATE_SEL_PIOFF_RATE1_3_0
#define reg_FBDIV_PIOFF_RATE1_7_0  AUTOSPEED8.BF.FBDIV_PIOFF_RATE1_7_0
#define reg_FBDIV_PIOFF_RATE1_9_8  AUTOSPEED8.BF.FBDIV_PIOFF_RATE1_9_8

// 0x0024	AUTOSPEED9		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE1_7_0                : 8;	/*  [7:0]     r/w 8'h15*/
		uint8_t FBDIV_CAL_PIOFF_RATE1_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE1_3_0                   : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE1                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED9_t;
__xdata __at( 0xe024 ) volatile AUTOSPEED9_t AUTOSPEED9;
#define reg_FBDIV_CAL_PIOFF_RATE1_7_0  AUTOSPEED9.BF.FBDIV_CAL_PIOFF_RATE1_7_0
#define reg_FBDIV_CAL_PIOFF_RATE1_9_8  AUTOSPEED9.BF.FBDIV_CAL_PIOFF_RATE1_9_8
#define reg_REFDIV_PIOFF_RATE1_3_0  AUTOSPEED9.BF.REFDIV_PIOFF_RATE1_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE1  AUTOSPEED9.BF.VIND_BAND_SEL_PIOFF_RATE1

// 0x0028	AUTOSPEED10		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE1_7_0                   : 8;	/*  [7:0]     r/w 8'h29*/
		uint8_t DIV_1G_PIOFF_RATE1_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE1_7_0              : 8;	/*[23:16]     r/w 8'ha*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE1_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED10_t;
__xdata __at( 0xe028 ) volatile AUTOSPEED10_t AUTOSPEED10;
#define reg_DIV_1G_PIOFF_RATE1_7_0  AUTOSPEED10.BF.DIV_1G_PIOFF_RATE1_7_0
#define reg_DIV_1G_PIOFF_RATE1_9_8  AUTOSPEED10.BF.DIV_1G_PIOFF_RATE1_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE1_7_0  AUTOSPEED10.BF.DIV_1G_FBCK_PIOFF_RATE1_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE1_9_8  AUTOSPEED10.BF.DIV_1G_FBCK_PIOFF_RATE1_9_8

// 0x002c	AUTOSPEED11		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PIOFF_RATE1_4_0                   : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE1_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE1_1_0                 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE1_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED11_t;
__xdata __at( 0xe02c ) volatile AUTOSPEED11_t AUTOSPEED11;
#define reg_ICP_LC_PIOFF_RATE1_4_0  AUTOSPEED11.BF.ICP_LC_PIOFF_RATE1_4_0
#define reg_PLL_LPFR_PIOFF_RATE1_1_0  AUTOSPEED11.BF.PLL_LPFR_PIOFF_RATE1_1_0
#define reg_PLL_LPFC_PIOFF_RATE1_1_0  AUTOSPEED11.BF.PLL_LPFC_PIOFF_RATE1_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE1_7_0  AUTOSPEED11.BF.INIT_TXFOFFS_PIOFF_RATE1_7_0

// 0x0030	AUTOSPEED12		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE1_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE1_7_0             : 8;	/* [15:8]     r/w 8'hb6*/
		uint8_t SPEED_THRESH_PIOFF_RATE1_11_8            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE1                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED12_t;
__xdata __at( 0xe030 ) volatile AUTOSPEED12_t AUTOSPEED12;
#define reg_INIT_TXFOFFS_PIOFF_RATE1_9_8  AUTOSPEED12.BF.INIT_TXFOFFS_PIOFF_RATE1_9_8
#define reg_SPEED_THRESH_PIOFF_RATE1_7_0  AUTOSPEED12.BF.SPEED_THRESH_PIOFF_RATE1_7_0
#define reg_SPEED_THRESH_PIOFF_RATE1_11_8  AUTOSPEED12.BF.SPEED_THRESH_PIOFF_RATE1_11_8
#define reg_LCCAP_USB_PIOFF_RATE1  AUTOSPEED12.BF.LCCAP_USB_PIOFF_RATE1

// 0x0034	AUTOSPEED13		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE1               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PIOFF_RATE1_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE1_7_0                    : 8;	/*[23:16]     r/w 8'hfb*/
		uint8_t SSC_M_PIOFF_RATE1_12_8                   : 5;	/*[28:24]     r/w 5'h9*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED13_t;
__xdata __at( 0xe034 ) volatile AUTOSPEED13_t AUTOSPEED13;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE1  AUTOSPEED13.BF.SSC_ACC_FACTOR_PIOFF_RATE1
#define reg_SSC_STEP_125PPM_PIOFF_RATE1_3_0  AUTOSPEED13.BF.SSC_STEP_125PPM_PIOFF_RATE1_3_0
#define reg_SSC_M_PIOFF_RATE1_7_0  AUTOSPEED13.BF.SSC_M_PIOFF_RATE1_7_0
#define reg_SSC_M_PIOFF_RATE1_12_8  AUTOSPEED13.BF.SSC_M_PIOFF_RATE1_12_8

// 0x0038	AUTOSPEED14		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED14_t;
__xdata __at( 0xe038 ) volatile AUTOSPEED14_t AUTOSPEED14;

// 0x003c	AUTOSPEED15		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED15_t;
__xdata __at( 0xe03c ) volatile AUTOSPEED15_t AUTOSPEED15;

// 0x0040	AUTOSPEED16		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE2_2_0              : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE2_3_0             : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE2_7_0                    : 8;	/*[23:16]     r/w 8'h4e*/
		uint8_t FBDIV_PIOFF_RATE2_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED16_t;
__xdata __at( 0xe040 ) volatile AUTOSPEED16_t AUTOSPEED16;
#define reg_PLL_REG_SEL_PIOFF_RATE2_2_0  AUTOSPEED16.BF.PLL_REG_SEL_PIOFF_RATE2_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE2_3_0  AUTOSPEED16.BF.PLL_RATE_SEL_PIOFF_RATE2_3_0
#define reg_FBDIV_PIOFF_RATE2_7_0  AUTOSPEED16.BF.FBDIV_PIOFF_RATE2_7_0
#define reg_FBDIV_PIOFF_RATE2_9_8  AUTOSPEED16.BF.FBDIV_PIOFF_RATE2_9_8

// 0x0044	AUTOSPEED17		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE2_7_0                : 8;	/*  [7:0]     r/w 8'h18*/
		uint8_t FBDIV_CAL_PIOFF_RATE2_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE2_3_0                   : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE2                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED17_t;
__xdata __at( 0xe044 ) volatile AUTOSPEED17_t AUTOSPEED17;
#define reg_FBDIV_CAL_PIOFF_RATE2_7_0  AUTOSPEED17.BF.FBDIV_CAL_PIOFF_RATE2_7_0
#define reg_FBDIV_CAL_PIOFF_RATE2_9_8  AUTOSPEED17.BF.FBDIV_CAL_PIOFF_RATE2_9_8
#define reg_REFDIV_PIOFF_RATE2_3_0  AUTOSPEED17.BF.REFDIV_PIOFF_RATE2_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE2  AUTOSPEED17.BF.VIND_BAND_SEL_PIOFF_RATE2

// 0x0048	AUTOSPEED18		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE2_7_0                   : 8;	/*  [7:0]     r/w 8'h31*/
		uint8_t DIV_1G_PIOFF_RATE2_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE2_7_0              : 8;	/*[23:16]     r/w 8'hc*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE2_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED18_t;
__xdata __at( 0xe048 ) volatile AUTOSPEED18_t AUTOSPEED18;
#define reg_DIV_1G_PIOFF_RATE2_7_0  AUTOSPEED18.BF.DIV_1G_PIOFF_RATE2_7_0
#define reg_DIV_1G_PIOFF_RATE2_9_8  AUTOSPEED18.BF.DIV_1G_PIOFF_RATE2_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE2_7_0  AUTOSPEED18.BF.DIV_1G_FBCK_PIOFF_RATE2_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE2_9_8  AUTOSPEED18.BF.DIV_1G_FBCK_PIOFF_RATE2_9_8

// 0x004c	AUTOSPEED19		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PIOFF_RATE2_4_0                   : 5;	/*  [4:0]     r/w 5'h8*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE2_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE2_1_0                 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE2_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED19_t;
__xdata __at( 0xe04c ) volatile AUTOSPEED19_t AUTOSPEED19;
#define reg_ICP_LC_PIOFF_RATE2_4_0  AUTOSPEED19.BF.ICP_LC_PIOFF_RATE2_4_0
#define reg_PLL_LPFR_PIOFF_RATE2_1_0  AUTOSPEED19.BF.PLL_LPFR_PIOFF_RATE2_1_0
#define reg_PLL_LPFC_PIOFF_RATE2_1_0  AUTOSPEED19.BF.PLL_LPFC_PIOFF_RATE2_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE2_7_0  AUTOSPEED19.BF.INIT_TXFOFFS_PIOFF_RATE2_7_0

// 0x0050	AUTOSPEED20		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE2_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE2_7_0             : 8;	/* [15:8]     r/w 8'hf9*/
		uint8_t SPEED_THRESH_PIOFF_RATE2_11_8            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE2                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED20_t;
__xdata __at( 0xe050 ) volatile AUTOSPEED20_t AUTOSPEED20;
#define reg_INIT_TXFOFFS_PIOFF_RATE2_9_8  AUTOSPEED20.BF.INIT_TXFOFFS_PIOFF_RATE2_9_8
#define reg_SPEED_THRESH_PIOFF_RATE2_7_0  AUTOSPEED20.BF.SPEED_THRESH_PIOFF_RATE2_7_0
#define reg_SPEED_THRESH_PIOFF_RATE2_11_8  AUTOSPEED20.BF.SPEED_THRESH_PIOFF_RATE2_11_8
#define reg_LCCAP_USB_PIOFF_RATE2  AUTOSPEED20.BF.LCCAP_USB_PIOFF_RATE2

// 0x0054	AUTOSPEED21		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE2               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PIOFF_RATE2_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE2_7_0                    : 8;	/*[23:16]     r/w 8'hcd*/
		uint8_t SSC_M_PIOFF_RATE2_12_8                   : 5;	/*[28:24]     r/w 5'hb*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED21_t;
__xdata __at( 0xe054 ) volatile AUTOSPEED21_t AUTOSPEED21;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE2  AUTOSPEED21.BF.SSC_ACC_FACTOR_PIOFF_RATE2
#define reg_SSC_STEP_125PPM_PIOFF_RATE2_3_0  AUTOSPEED21.BF.SSC_STEP_125PPM_PIOFF_RATE2_3_0
#define reg_SSC_M_PIOFF_RATE2_7_0  AUTOSPEED21.BF.SSC_M_PIOFF_RATE2_7_0
#define reg_SSC_M_PIOFF_RATE2_12_8  AUTOSPEED21.BF.SSC_M_PIOFF_RATE2_12_8

// 0x0058	AUTOSPEED22		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED22_t;
__xdata __at( 0xe058 ) volatile AUTOSPEED22_t AUTOSPEED22;

// 0x005c	AUTOSPEED23		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED23_t;
__xdata __at( 0xe05c ) volatile AUTOSPEED23_t AUTOSPEED23;

// 0x0060	AUTOSPEED24		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE3_2_0              : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE3_3_0             : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE3_7_0                    : 8;	/*[23:16]     r/w 8'h50*/
		uint8_t FBDIV_PIOFF_RATE3_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED24_t;
__xdata __at( 0xe060 ) volatile AUTOSPEED24_t AUTOSPEED24;
#define reg_PLL_REG_SEL_PIOFF_RATE3_2_0  AUTOSPEED24.BF.PLL_REG_SEL_PIOFF_RATE3_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE3_3_0  AUTOSPEED24.BF.PLL_RATE_SEL_PIOFF_RATE3_3_0
#define reg_FBDIV_PIOFF_RATE3_7_0  AUTOSPEED24.BF.FBDIV_PIOFF_RATE3_7_0
#define reg_FBDIV_PIOFF_RATE3_9_8  AUTOSPEED24.BF.FBDIV_PIOFF_RATE3_9_8

// 0x0064	AUTOSPEED25		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE3_7_0                : 8;	/*  [7:0]     r/w 8'h19*/
		uint8_t FBDIV_CAL_PIOFF_RATE3_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE3_3_0                   : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE3                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED25_t;
__xdata __at( 0xe064 ) volatile AUTOSPEED25_t AUTOSPEED25;
#define reg_FBDIV_CAL_PIOFF_RATE3_7_0  AUTOSPEED25.BF.FBDIV_CAL_PIOFF_RATE3_7_0
#define reg_FBDIV_CAL_PIOFF_RATE3_9_8  AUTOSPEED25.BF.FBDIV_CAL_PIOFF_RATE3_9_8
#define reg_REFDIV_PIOFF_RATE3_3_0  AUTOSPEED25.BF.REFDIV_PIOFF_RATE3_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE3  AUTOSPEED25.BF.VIND_BAND_SEL_PIOFF_RATE3

// 0x0068	AUTOSPEED26		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE3_7_0                   : 8;	/*  [7:0]     r/w 8'h32*/
		uint8_t DIV_1G_PIOFF_RATE3_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE3_7_0              : 8;	/*[23:16]     r/w 8'hd*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE3_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED26_t;
__xdata __at( 0xe068 ) volatile AUTOSPEED26_t AUTOSPEED26;
#define reg_DIV_1G_PIOFF_RATE3_7_0  AUTOSPEED26.BF.DIV_1G_PIOFF_RATE3_7_0
#define reg_DIV_1G_PIOFF_RATE3_9_8  AUTOSPEED26.BF.DIV_1G_PIOFF_RATE3_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE3_7_0  AUTOSPEED26.BF.DIV_1G_FBCK_PIOFF_RATE3_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE3_9_8  AUTOSPEED26.BF.DIV_1G_FBCK_PIOFF_RATE3_9_8

// 0x006c	AUTOSPEED27		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PIOFF_RATE3_4_0                   : 5;	/*  [4:0]     r/w 5'h6*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE3_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE3_1_0                 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE3_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED27_t;
__xdata __at( 0xe06c ) volatile AUTOSPEED27_t AUTOSPEED27;
#define reg_ICP_LC_PIOFF_RATE3_4_0  AUTOSPEED27.BF.ICP_LC_PIOFF_RATE3_4_0
#define reg_PLL_LPFR_PIOFF_RATE3_1_0  AUTOSPEED27.BF.PLL_LPFR_PIOFF_RATE3_1_0
#define reg_PLL_LPFC_PIOFF_RATE3_1_0  AUTOSPEED27.BF.PLL_LPFC_PIOFF_RATE3_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE3_7_0  AUTOSPEED27.BF.INIT_TXFOFFS_PIOFF_RATE3_7_0

// 0x0070	AUTOSPEED28		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE3_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE3_7_0             : 8;	/* [15:8]     r/w 8'hda*/
		uint8_t SPEED_THRESH_PIOFF_RATE3_11_8            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE3                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED28_t;
__xdata __at( 0xe070 ) volatile AUTOSPEED28_t AUTOSPEED28;
#define reg_INIT_TXFOFFS_PIOFF_RATE3_9_8  AUTOSPEED28.BF.INIT_TXFOFFS_PIOFF_RATE3_9_8
#define reg_SPEED_THRESH_PIOFF_RATE3_7_0  AUTOSPEED28.BF.SPEED_THRESH_PIOFF_RATE3_7_0
#define reg_SPEED_THRESH_PIOFF_RATE3_11_8  AUTOSPEED28.BF.SPEED_THRESH_PIOFF_RATE3_11_8
#define reg_LCCAP_USB_PIOFF_RATE3  AUTOSPEED28.BF.LCCAP_USB_PIOFF_RATE3

// 0x0074	AUTOSPEED29		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE3               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PIOFF_RATE3_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE3_7_0                    : 8;	/*[23:16]     r/w 8'h1b*/
		uint8_t SSC_M_PIOFF_RATE3_12_8                   : 5;	/*[28:24]     r/w 5'hc*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED29_t;
__xdata __at( 0xe074 ) volatile AUTOSPEED29_t AUTOSPEED29;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE3  AUTOSPEED29.BF.SSC_ACC_FACTOR_PIOFF_RATE3
#define reg_SSC_STEP_125PPM_PIOFF_RATE3_3_0  AUTOSPEED29.BF.SSC_STEP_125PPM_PIOFF_RATE3_3_0
#define reg_SSC_M_PIOFF_RATE3_7_0  AUTOSPEED29.BF.SSC_M_PIOFF_RATE3_7_0
#define reg_SSC_M_PIOFF_RATE3_12_8  AUTOSPEED29.BF.SSC_M_PIOFF_RATE3_12_8

// 0x0078	AUTOSPEED30		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED30_t;
__xdata __at( 0xe078 ) volatile AUTOSPEED30_t AUTOSPEED30;

// 0x007c	AUTOSPEED31		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED31_t;
__xdata __at( 0xe07c ) volatile AUTOSPEED31_t AUTOSPEED31;

// 0x0080	AUTOSPEED32		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE4_2_0              : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE4_3_0             : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE4_7_0                    : 8;	/*[23:16]     r/w 8'ha5*/
		uint8_t FBDIV_PIOFF_RATE4_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED32_t;
__xdata __at( 0xe080 ) volatile AUTOSPEED32_t AUTOSPEED32;
#define reg_PLL_REG_SEL_PIOFF_RATE4_2_0  AUTOSPEED32.BF.PLL_REG_SEL_PIOFF_RATE4_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE4_3_0  AUTOSPEED32.BF.PLL_RATE_SEL_PIOFF_RATE4_3_0
#define reg_FBDIV_PIOFF_RATE4_7_0  AUTOSPEED32.BF.FBDIV_PIOFF_RATE4_7_0
#define reg_FBDIV_PIOFF_RATE4_9_8  AUTOSPEED32.BF.FBDIV_PIOFF_RATE4_9_8

// 0x0084	AUTOSPEED33		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE4_7_0                : 8;	/*  [7:0]     r/w 8'h1a*/
		uint8_t FBDIV_CAL_PIOFF_RATE4_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE4_3_0                   : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE4                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED33_t;
__xdata __at( 0xe084 ) volatile AUTOSPEED33_t AUTOSPEED33;
#define reg_FBDIV_CAL_PIOFF_RATE4_7_0  AUTOSPEED33.BF.FBDIV_CAL_PIOFF_RATE4_7_0
#define reg_FBDIV_CAL_PIOFF_RATE4_9_8  AUTOSPEED33.BF.FBDIV_CAL_PIOFF_RATE4_9_8
#define reg_REFDIV_PIOFF_RATE4_3_0  AUTOSPEED33.BF.REFDIV_PIOFF_RATE4_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE4  AUTOSPEED33.BF.VIND_BAND_SEL_PIOFF_RATE4

// 0x0088	AUTOSPEED34		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE4_7_0                   : 8;	/*  [7:0]     r/w 8'h34*/
		uint8_t DIV_1G_PIOFF_RATE4_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE4_7_0              : 8;	/*[23:16]     r/w 8'hd*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE4_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED34_t;
__xdata __at( 0xe088 ) volatile AUTOSPEED34_t AUTOSPEED34;
#define reg_DIV_1G_PIOFF_RATE4_7_0  AUTOSPEED34.BF.DIV_1G_PIOFF_RATE4_7_0
#define reg_DIV_1G_PIOFF_RATE4_9_8  AUTOSPEED34.BF.DIV_1G_PIOFF_RATE4_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE4_7_0  AUTOSPEED34.BF.DIV_1G_FBCK_PIOFF_RATE4_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE4_9_8  AUTOSPEED34.BF.DIV_1G_FBCK_PIOFF_RATE4_9_8

// 0x008c	AUTOSPEED35		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PIOFF_RATE4_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE4_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE4_1_0                 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE4_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED35_t;
__xdata __at( 0xe08c ) volatile AUTOSPEED35_t AUTOSPEED35;
#define reg_ICP_LC_PIOFF_RATE4_4_0  AUTOSPEED35.BF.ICP_LC_PIOFF_RATE4_4_0
#define reg_PLL_LPFR_PIOFF_RATE4_1_0  AUTOSPEED35.BF.PLL_LPFR_PIOFF_RATE4_1_0
#define reg_PLL_LPFC_PIOFF_RATE4_1_0  AUTOSPEED35.BF.PLL_LPFC_PIOFF_RATE4_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE4_7_0  AUTOSPEED35.BF.INIT_TXFOFFS_PIOFF_RATE4_7_0

// 0x0090	AUTOSPEED36		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE4_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE4_7_0             : 8;	/* [15:8]     r/w 8'hc9*/
		uint8_t SPEED_THRESH_PIOFF_RATE4_11_8            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE4                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED36_t;
__xdata __at( 0xe090 ) volatile AUTOSPEED36_t AUTOSPEED36;
#define reg_INIT_TXFOFFS_PIOFF_RATE4_9_8  AUTOSPEED36.BF.INIT_TXFOFFS_PIOFF_RATE4_9_8
#define reg_SPEED_THRESH_PIOFF_RATE4_7_0  AUTOSPEED36.BF.SPEED_THRESH_PIOFF_RATE4_7_0
#define reg_SPEED_THRESH_PIOFF_RATE4_11_8  AUTOSPEED36.BF.SPEED_THRESH_PIOFF_RATE4_11_8
#define reg_LCCAP_USB_PIOFF_RATE4  AUTOSPEED36.BF.LCCAP_USB_PIOFF_RATE4

// 0x0094	AUTOSPEED37		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE4               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PIOFF_RATE4_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE4_7_0                    : 8;	/*[23:16]     r/w 8'h7b*/
		uint8_t SSC_M_PIOFF_RATE4_12_8                   : 5;	/*[28:24]     r/w 5'hc*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED37_t;
__xdata __at( 0xe094 ) volatile AUTOSPEED37_t AUTOSPEED37;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE4  AUTOSPEED37.BF.SSC_ACC_FACTOR_PIOFF_RATE4
#define reg_SSC_STEP_125PPM_PIOFF_RATE4_3_0  AUTOSPEED37.BF.SSC_STEP_125PPM_PIOFF_RATE4_3_0
#define reg_SSC_M_PIOFF_RATE4_7_0  AUTOSPEED37.BF.SSC_M_PIOFF_RATE4_7_0
#define reg_SSC_M_PIOFF_RATE4_12_8  AUTOSPEED37.BF.SSC_M_PIOFF_RATE4_12_8

// 0x0098	AUTOSPEED38		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED38_t;
__xdata __at( 0xe098 ) volatile AUTOSPEED38_t AUTOSPEED38;

// 0x009c	AUTOSPEED39		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED39_t;
__xdata __at( 0xe09c ) volatile AUTOSPEED39_t AUTOSPEED39;

// 0x00a0	AUTOSPEED40		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE5_2_0              : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE5_3_0             : 4;	/* [11:8]     r/w 4'h5*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE5_7_0                    : 8;	/*[23:16]     r/w 8'haa*/
		uint8_t FBDIV_PIOFF_RATE5_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED40_t;
__xdata __at( 0xe0a0 ) volatile AUTOSPEED40_t AUTOSPEED40;
#define reg_PLL_REG_SEL_PIOFF_RATE5_2_0  AUTOSPEED40.BF.PLL_REG_SEL_PIOFF_RATE5_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE5_3_0  AUTOSPEED40.BF.PLL_RATE_SEL_PIOFF_RATE5_3_0
#define reg_FBDIV_PIOFF_RATE5_7_0  AUTOSPEED40.BF.FBDIV_PIOFF_RATE5_7_0
#define reg_FBDIV_PIOFF_RATE5_9_8  AUTOSPEED40.BF.FBDIV_PIOFF_RATE5_9_8

// 0x00a4	AUTOSPEED41		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE5_7_0                : 8;	/*  [7:0]     r/w 8'h1b*/
		uint8_t FBDIV_CAL_PIOFF_RATE5_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE5_3_0                   : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE5                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED41_t;
__xdata __at( 0xe0a4 ) volatile AUTOSPEED41_t AUTOSPEED41;
#define reg_FBDIV_CAL_PIOFF_RATE5_7_0  AUTOSPEED41.BF.FBDIV_CAL_PIOFF_RATE5_7_0
#define reg_FBDIV_CAL_PIOFF_RATE5_9_8  AUTOSPEED41.BF.FBDIV_CAL_PIOFF_RATE5_9_8
#define reg_REFDIV_PIOFF_RATE5_3_0  AUTOSPEED41.BF.REFDIV_PIOFF_RATE5_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE5  AUTOSPEED41.BF.VIND_BAND_SEL_PIOFF_RATE5

// 0x00a8	AUTOSPEED42		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE5_7_0                   : 8;	/*  [7:0]     r/w 8'h35*/
		uint8_t DIV_1G_PIOFF_RATE5_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE5_7_0              : 8;	/*[23:16]     r/w 8'hd*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE5_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED42_t;
__xdata __at( 0xe0a8 ) volatile AUTOSPEED42_t AUTOSPEED42;
#define reg_DIV_1G_PIOFF_RATE5_7_0  AUTOSPEED42.BF.DIV_1G_PIOFF_RATE5_7_0
#define reg_DIV_1G_PIOFF_RATE5_9_8  AUTOSPEED42.BF.DIV_1G_PIOFF_RATE5_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE5_7_0  AUTOSPEED42.BF.DIV_1G_FBCK_PIOFF_RATE5_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE5_9_8  AUTOSPEED42.BF.DIV_1G_FBCK_PIOFF_RATE5_9_8

// 0x00ac	AUTOSPEED43		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PIOFF_RATE5_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE5_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE5_1_0                 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE5_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED43_t;
__xdata __at( 0xe0ac ) volatile AUTOSPEED43_t AUTOSPEED43;
#define reg_ICP_LC_PIOFF_RATE5_4_0  AUTOSPEED43.BF.ICP_LC_PIOFF_RATE5_4_0
#define reg_PLL_LPFR_PIOFF_RATE5_1_0  AUTOSPEED43.BF.PLL_LPFR_PIOFF_RATE5_1_0
#define reg_PLL_LPFC_PIOFF_RATE5_1_0  AUTOSPEED43.BF.PLL_LPFC_PIOFF_RATE5_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE5_7_0  AUTOSPEED43.BF.INIT_TXFOFFS_PIOFF_RATE5_7_0

// 0x00b0	AUTOSPEED44		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE5_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE5_7_0             : 8;	/* [15:8]     r/w 8'hb9*/
		uint8_t SPEED_THRESH_PIOFF_RATE5_11_8            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE5                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED44_t;
__xdata __at( 0xe0b0 ) volatile AUTOSPEED44_t AUTOSPEED44;
#define reg_INIT_TXFOFFS_PIOFF_RATE5_9_8  AUTOSPEED44.BF.INIT_TXFOFFS_PIOFF_RATE5_9_8
#define reg_SPEED_THRESH_PIOFF_RATE5_7_0  AUTOSPEED44.BF.SPEED_THRESH_PIOFF_RATE5_7_0
#define reg_SPEED_THRESH_PIOFF_RATE5_11_8  AUTOSPEED44.BF.SPEED_THRESH_PIOFF_RATE5_11_8
#define reg_LCCAP_USB_PIOFF_RATE5  AUTOSPEED44.BF.LCCAP_USB_PIOFF_RATE5

// 0x00b4	AUTOSPEED45		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE5               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PIOFF_RATE5_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE5_7_0                    : 8;	/*[23:16]     r/w 8'hdb*/
		uint8_t SSC_M_PIOFF_RATE5_12_8                   : 5;	/*[28:24]     r/w 5'hc*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED45_t;
__xdata __at( 0xe0b4 ) volatile AUTOSPEED45_t AUTOSPEED45;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE5  AUTOSPEED45.BF.SSC_ACC_FACTOR_PIOFF_RATE5
#define reg_SSC_STEP_125PPM_PIOFF_RATE5_3_0  AUTOSPEED45.BF.SSC_STEP_125PPM_PIOFF_RATE5_3_0
#define reg_SSC_M_PIOFF_RATE5_7_0  AUTOSPEED45.BF.SSC_M_PIOFF_RATE5_7_0
#define reg_SSC_M_PIOFF_RATE5_12_8  AUTOSPEED45.BF.SSC_M_PIOFF_RATE5_12_8

// 0x00b8	AUTOSPEED46		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED46_t;
__xdata __at( 0xe0b8 ) volatile AUTOSPEED46_t AUTOSPEED46;

// 0x00bc	AUTOSPEED47		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED47_t;
__xdata __at( 0xe0bc ) volatile AUTOSPEED47_t AUTOSPEED47;

// 0x00c0	AUTOSPEED48		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE6_2_0              : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE6_3_0             : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE6_7_0                    : 8;	/*[23:16]     r/w 8'hb0*/
		uint8_t FBDIV_PIOFF_RATE6_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED48_t;
__xdata __at( 0xe0c0 ) volatile AUTOSPEED48_t AUTOSPEED48;
#define reg_PLL_REG_SEL_PIOFF_RATE6_2_0  AUTOSPEED48.BF.PLL_REG_SEL_PIOFF_RATE6_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE6_3_0  AUTOSPEED48.BF.PLL_RATE_SEL_PIOFF_RATE6_3_0
#define reg_FBDIV_PIOFF_RATE6_7_0  AUTOSPEED48.BF.FBDIV_PIOFF_RATE6_7_0
#define reg_FBDIV_PIOFF_RATE6_9_8  AUTOSPEED48.BF.FBDIV_PIOFF_RATE6_9_8

// 0x00c4	AUTOSPEED49		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE6_7_0                : 8;	/*  [7:0]     r/w 8'h1c*/
		uint8_t FBDIV_CAL_PIOFF_RATE6_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE6_3_0                   : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE6                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED49_t;
__xdata __at( 0xe0c4 ) volatile AUTOSPEED49_t AUTOSPEED49;
#define reg_FBDIV_CAL_PIOFF_RATE6_7_0  AUTOSPEED49.BF.FBDIV_CAL_PIOFF_RATE6_7_0
#define reg_FBDIV_CAL_PIOFF_RATE6_9_8  AUTOSPEED49.BF.FBDIV_CAL_PIOFF_RATE6_9_8
#define reg_REFDIV_PIOFF_RATE6_3_0  AUTOSPEED49.BF.REFDIV_PIOFF_RATE6_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE6  AUTOSPEED49.BF.VIND_BAND_SEL_PIOFF_RATE6

// 0x00c8	AUTOSPEED50		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE6_7_0                   : 8;	/*  [7:0]     r/w 8'h37*/
		uint8_t DIV_1G_PIOFF_RATE6_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE6_7_0              : 8;	/*[23:16]     r/w 8'he*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE6_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED50_t;
__xdata __at( 0xe0c8 ) volatile AUTOSPEED50_t AUTOSPEED50;
#define reg_DIV_1G_PIOFF_RATE6_7_0  AUTOSPEED50.BF.DIV_1G_PIOFF_RATE6_7_0
#define reg_DIV_1G_PIOFF_RATE6_9_8  AUTOSPEED50.BF.DIV_1G_PIOFF_RATE6_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE6_7_0  AUTOSPEED50.BF.DIV_1G_FBCK_PIOFF_RATE6_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE6_9_8  AUTOSPEED50.BF.DIV_1G_FBCK_PIOFF_RATE6_9_8

// 0x00cc	AUTOSPEED51		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PIOFF_RATE6_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE6_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE6_1_0                 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE6_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED51_t;
__xdata __at( 0xe0cc ) volatile AUTOSPEED51_t AUTOSPEED51;
#define reg_ICP_LC_PIOFF_RATE6_4_0  AUTOSPEED51.BF.ICP_LC_PIOFF_RATE6_4_0
#define reg_PLL_LPFR_PIOFF_RATE6_1_0  AUTOSPEED51.BF.PLL_LPFR_PIOFF_RATE6_1_0
#define reg_PLL_LPFC_PIOFF_RATE6_1_0  AUTOSPEED51.BF.PLL_LPFC_PIOFF_RATE6_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE6_7_0  AUTOSPEED51.BF.INIT_TXFOFFS_PIOFF_RATE6_7_0

// 0x00d0	AUTOSPEED52		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE6_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE6_7_0             : 8;	/* [15:8]     r/w 8'hb6*/
		uint8_t SPEED_THRESH_PIOFF_RATE6_11_8            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE6                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED52_t;
__xdata __at( 0xe0d0 ) volatile AUTOSPEED52_t AUTOSPEED52;
#define reg_INIT_TXFOFFS_PIOFF_RATE6_9_8  AUTOSPEED52.BF.INIT_TXFOFFS_PIOFF_RATE6_9_8
#define reg_SPEED_THRESH_PIOFF_RATE6_7_0  AUTOSPEED52.BF.SPEED_THRESH_PIOFF_RATE6_7_0
#define reg_SPEED_THRESH_PIOFF_RATE6_11_8  AUTOSPEED52.BF.SPEED_THRESH_PIOFF_RATE6_11_8
#define reg_LCCAP_USB_PIOFF_RATE6  AUTOSPEED52.BF.LCCAP_USB_PIOFF_RATE6

// 0x00d4	AUTOSPEED53		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE6               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PIOFF_RATE6_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE6_7_0                    : 8;	/*[23:16]     r/w 8'h51*/
		uint8_t SSC_M_PIOFF_RATE6_12_8                   : 5;	/*[28:24]     r/w 5'hd*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED53_t;
__xdata __at( 0xe0d4 ) volatile AUTOSPEED53_t AUTOSPEED53;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE6  AUTOSPEED53.BF.SSC_ACC_FACTOR_PIOFF_RATE6
#define reg_SSC_STEP_125PPM_PIOFF_RATE6_3_0  AUTOSPEED53.BF.SSC_STEP_125PPM_PIOFF_RATE6_3_0
#define reg_SSC_M_PIOFF_RATE6_7_0  AUTOSPEED53.BF.SSC_M_PIOFF_RATE6_7_0
#define reg_SSC_M_PIOFF_RATE6_12_8  AUTOSPEED53.BF.SSC_M_PIOFF_RATE6_12_8

// 0x00d8	AUTOSPEED54		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED54_t;
__xdata __at( 0xe0d8 ) volatile AUTOSPEED54_t AUTOSPEED54;

// 0x00dc	AUTOSPEED55		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED55_t;
__xdata __at( 0xe0dc ) volatile AUTOSPEED55_t AUTOSPEED55;

// 0x00e0	AUTOSPEED56		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE7_2_0              : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE7_3_0             : 4;	/* [11:8]     r/w 4'h7*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE7_7_0                    : 8;	/*[23:16]     r/w 8'hb4*/
		uint8_t FBDIV_PIOFF_RATE7_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED56_t;
__xdata __at( 0xe0e0 ) volatile AUTOSPEED56_t AUTOSPEED56;
#define reg_PLL_REG_SEL_PIOFF_RATE7_2_0  AUTOSPEED56.BF.PLL_REG_SEL_PIOFF_RATE7_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE7_3_0  AUTOSPEED56.BF.PLL_RATE_SEL_PIOFF_RATE7_3_0
#define reg_FBDIV_PIOFF_RATE7_7_0  AUTOSPEED56.BF.FBDIV_PIOFF_RATE7_7_0
#define reg_FBDIV_PIOFF_RATE7_9_8  AUTOSPEED56.BF.FBDIV_PIOFF_RATE7_9_8

// 0x00e4	AUTOSPEED57		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE7_7_0                : 8;	/*  [7:0]     r/w 8'h1c*/
		uint8_t FBDIV_CAL_PIOFF_RATE7_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE7_3_0                   : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE7                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED57_t;
__xdata __at( 0xe0e4 ) volatile AUTOSPEED57_t AUTOSPEED57;
#define reg_FBDIV_CAL_PIOFF_RATE7_7_0  AUTOSPEED57.BF.FBDIV_CAL_PIOFF_RATE7_7_0
#define reg_FBDIV_CAL_PIOFF_RATE7_9_8  AUTOSPEED57.BF.FBDIV_CAL_PIOFF_RATE7_9_8
#define reg_REFDIV_PIOFF_RATE7_3_0  AUTOSPEED57.BF.REFDIV_PIOFF_RATE7_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE7  AUTOSPEED57.BF.VIND_BAND_SEL_PIOFF_RATE7

// 0x00e8	AUTOSPEED58		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE7_7_0                   : 8;	/*  [7:0]     r/w 8'h38*/
		uint8_t DIV_1G_PIOFF_RATE7_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE7_7_0              : 8;	/*[23:16]     r/w 8'he*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE7_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED58_t;
__xdata __at( 0xe0e8 ) volatile AUTOSPEED58_t AUTOSPEED58;
#define reg_DIV_1G_PIOFF_RATE7_7_0  AUTOSPEED58.BF.DIV_1G_PIOFF_RATE7_7_0
#define reg_DIV_1G_PIOFF_RATE7_9_8  AUTOSPEED58.BF.DIV_1G_PIOFF_RATE7_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE7_7_0  AUTOSPEED58.BF.DIV_1G_FBCK_PIOFF_RATE7_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE7_9_8  AUTOSPEED58.BF.DIV_1G_FBCK_PIOFF_RATE7_9_8

// 0x00ec	AUTOSPEED59		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PIOFF_RATE7_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE7_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE7_1_0                 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE7_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED59_t;
__xdata __at( 0xe0ec ) volatile AUTOSPEED59_t AUTOSPEED59;
#define reg_ICP_LC_PIOFF_RATE7_4_0  AUTOSPEED59.BF.ICP_LC_PIOFF_RATE7_4_0
#define reg_PLL_LPFR_PIOFF_RATE7_1_0  AUTOSPEED59.BF.PLL_LPFR_PIOFF_RATE7_1_0
#define reg_PLL_LPFC_PIOFF_RATE7_1_0  AUTOSPEED59.BF.PLL_LPFC_PIOFF_RATE7_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE7_7_0  AUTOSPEED59.BF.INIT_TXFOFFS_PIOFF_RATE7_7_0

// 0x00f0	AUTOSPEED60		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE7_9_8             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE7_7_0             : 8;	/* [15:8]     r/w 8'he3*/
		uint8_t SPEED_THRESH_PIOFF_RATE7_11_8            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE7                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED60_t;
__xdata __at( 0xe0f0 ) volatile AUTOSPEED60_t AUTOSPEED60;
#define reg_INIT_TXFOFFS_PIOFF_RATE7_9_8  AUTOSPEED60.BF.INIT_TXFOFFS_PIOFF_RATE7_9_8
#define reg_SPEED_THRESH_PIOFF_RATE7_7_0  AUTOSPEED60.BF.SPEED_THRESH_PIOFF_RATE7_7_0
#define reg_SPEED_THRESH_PIOFF_RATE7_11_8  AUTOSPEED60.BF.SPEED_THRESH_PIOFF_RATE7_11_8
#define reg_LCCAP_USB_PIOFF_RATE7  AUTOSPEED60.BF.LCCAP_USB_PIOFF_RATE7

// 0x00f4	AUTOSPEED61		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE7               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PIOFF_RATE7_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE7_7_0                    : 8;	/*[23:16]     r/w 8'h9d*/
		uint8_t SSC_M_PIOFF_RATE7_12_8                   : 5;	/*[28:24]     r/w 5'hd*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED61_t;
__xdata __at( 0xe0f4 ) volatile AUTOSPEED61_t AUTOSPEED61;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE7  AUTOSPEED61.BF.SSC_ACC_FACTOR_PIOFF_RATE7
#define reg_SSC_STEP_125PPM_PIOFF_RATE7_3_0  AUTOSPEED61.BF.SSC_STEP_125PPM_PIOFF_RATE7_3_0
#define reg_SSC_M_PIOFF_RATE7_7_0  AUTOSPEED61.BF.SSC_M_PIOFF_RATE7_7_0
#define reg_SSC_M_PIOFF_RATE7_12_8  AUTOSPEED61.BF.SSC_M_PIOFF_RATE7_12_8

// 0x00f8	AUTOSPEED62		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED62_t;
__xdata __at( 0xe0f8 ) volatile AUTOSPEED62_t AUTOSPEED62;

// 0x00fc	AUTOSPEED63		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED63_t;
__xdata __at( 0xe0fc ) volatile AUTOSPEED63_t AUTOSPEED63;

// 0x0100	AUTOSPEED64		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PIOFF_RATE8_2_0              : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PIOFF_RATE8_3_0             : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PIOFF_RATE8_7_0                    : 8;	/*[23:16]     r/w 8'hb3*/
		uint8_t FBDIV_PIOFF_RATE8_9_8                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED64_t;
__xdata __at( 0xe100 ) volatile AUTOSPEED64_t AUTOSPEED64;
#define reg_PLL_REG_SEL_PIOFF_RATE8_2_0  AUTOSPEED64.BF.PLL_REG_SEL_PIOFF_RATE8_2_0
#define reg_PLL_RATE_SEL_PIOFF_RATE8_3_0  AUTOSPEED64.BF.PLL_RATE_SEL_PIOFF_RATE8_3_0
#define reg_FBDIV_PIOFF_RATE8_7_0  AUTOSPEED64.BF.FBDIV_PIOFF_RATE8_7_0
#define reg_FBDIV_PIOFF_RATE8_9_8  AUTOSPEED64.BF.FBDIV_PIOFF_RATE8_9_8

// 0x0104	AUTOSPEED65		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PIOFF_RATE8_7_0                : 8;	/*  [7:0]     r/w 8'h1c*/
		uint8_t FBDIV_CAL_PIOFF_RATE8_9_8                : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PIOFF_RATE8_3_0                   : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PIOFF_RATE8                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED65_t;
__xdata __at( 0xe104 ) volatile AUTOSPEED65_t AUTOSPEED65;
#define reg_FBDIV_CAL_PIOFF_RATE8_7_0  AUTOSPEED65.BF.FBDIV_CAL_PIOFF_RATE8_7_0
#define reg_FBDIV_CAL_PIOFF_RATE8_9_8  AUTOSPEED65.BF.FBDIV_CAL_PIOFF_RATE8_9_8
#define reg_REFDIV_PIOFF_RATE8_3_0  AUTOSPEED65.BF.REFDIV_PIOFF_RATE8_3_0
#define reg_VIND_BAND_SEL_PIOFF_RATE8  AUTOSPEED65.BF.VIND_BAND_SEL_PIOFF_RATE8

// 0x0108	AUTOSPEED66		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PIOFF_RATE8_7_0                   : 8;	/*  [7:0]     r/w 8'h38*/
		uint8_t DIV_1G_PIOFF_RATE8_9_8                   : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE8_7_0              : 8;	/*[23:16]     r/w 8'he*/
		uint8_t DIV_1G_FBCK_PIOFF_RATE8_9_8              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED66_t;
__xdata __at( 0xe108 ) volatile AUTOSPEED66_t AUTOSPEED66;
#define reg_DIV_1G_PIOFF_RATE8_7_0  AUTOSPEED66.BF.DIV_1G_PIOFF_RATE8_7_0
#define reg_DIV_1G_PIOFF_RATE8_9_8  AUTOSPEED66.BF.DIV_1G_PIOFF_RATE8_9_8
#define reg_DIV_1G_FBCK_PIOFF_RATE8_7_0  AUTOSPEED66.BF.DIV_1G_FBCK_PIOFF_RATE8_7_0
#define reg_DIV_1G_FBCK_PIOFF_RATE8_9_8  AUTOSPEED66.BF.DIV_1G_FBCK_PIOFF_RATE8_9_8

// 0x010c	AUTOSPEED67		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PIOFF_RATE8_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PIOFF_RATE8_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PIOFF_RATE8_1_0                 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PIOFF_RATE8_7_0             : 8;	/*[31:24]     r/w 8'hdb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED67_t;
__xdata __at( 0xe10c ) volatile AUTOSPEED67_t AUTOSPEED67;
#define reg_ICP_LC_PIOFF_RATE8_4_0  AUTOSPEED67.BF.ICP_LC_PIOFF_RATE8_4_0
#define reg_PLL_LPFR_PIOFF_RATE8_1_0  AUTOSPEED67.BF.PLL_LPFR_PIOFF_RATE8_1_0
#define reg_PLL_LPFC_PIOFF_RATE8_1_0  AUTOSPEED67.BF.PLL_LPFC_PIOFF_RATE8_1_0
#define reg_INIT_TXFOFFS_PIOFF_RATE8_7_0  AUTOSPEED67.BF.INIT_TXFOFFS_PIOFF_RATE8_7_0

// 0x0110	AUTOSPEED68		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PIOFF_RATE8_9_8             : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PIOFF_RATE8_7_0             : 8;	/* [15:8]     r/w 8'hda*/
		uint8_t SPEED_THRESH_PIOFF_RATE8_11_8            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PIOFF_RATE8                    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED68_t;
__xdata __at( 0xe110 ) volatile AUTOSPEED68_t AUTOSPEED68;
#define reg_INIT_TXFOFFS_PIOFF_RATE8_9_8  AUTOSPEED68.BF.INIT_TXFOFFS_PIOFF_RATE8_9_8
#define reg_SPEED_THRESH_PIOFF_RATE8_7_0  AUTOSPEED68.BF.SPEED_THRESH_PIOFF_RATE8_7_0
#define reg_SPEED_THRESH_PIOFF_RATE8_11_8  AUTOSPEED68.BF.SPEED_THRESH_PIOFF_RATE8_11_8
#define reg_LCCAP_USB_PIOFF_RATE8  AUTOSPEED68.BF.LCCAP_USB_PIOFF_RATE8

// 0x0114	AUTOSPEED69		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PIOFF_RATE8               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PIOFF_RATE8_3_0          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PIOFF_RATE8_7_0                    : 8;	/*[23:16]     r/w 8'h8f*/
		uint8_t SSC_M_PIOFF_RATE8_12_8                   : 5;	/*[28:24]     r/w 5'hd*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED69_t;
__xdata __at( 0xe114 ) volatile AUTOSPEED69_t AUTOSPEED69;
#define reg_SSC_ACC_FACTOR_PIOFF_RATE8  AUTOSPEED69.BF.SSC_ACC_FACTOR_PIOFF_RATE8
#define reg_SSC_STEP_125PPM_PIOFF_RATE8_3_0  AUTOSPEED69.BF.SSC_STEP_125PPM_PIOFF_RATE8_3_0
#define reg_SSC_M_PIOFF_RATE8_7_0  AUTOSPEED69.BF.SSC_M_PIOFF_RATE8_7_0
#define reg_SSC_M_PIOFF_RATE8_12_8  AUTOSPEED69.BF.SSC_M_PIOFF_RATE8_12_8

// 0x0118	AUTOSPEED70		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED70_t;
__xdata __at( 0xe118 ) volatile AUTOSPEED70_t AUTOSPEED70;

// 0x011c	AUTOSPEED71		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED71_t;
__xdata __at( 0xe11c ) volatile AUTOSPEED71_t AUTOSPEED71;

// 0x0120	AUTOSPEED72		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE0_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE0_3_0              : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE0_7_0                     : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t FBDIV_PION_RATE0_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED72_t;
__xdata __at( 0xe120 ) volatile AUTOSPEED72_t AUTOSPEED72;
#define reg_PLL_REG_SEL_PION_RATE0_2_0  AUTOSPEED72.BF.PLL_REG_SEL_PION_RATE0_2_0
#define reg_PLL_RATE_SEL_PION_RATE0_3_0  AUTOSPEED72.BF.PLL_RATE_SEL_PION_RATE0_3_0
#define reg_FBDIV_PION_RATE0_7_0  AUTOSPEED72.BF.FBDIV_PION_RATE0_7_0
#define reg_FBDIV_PION_RATE0_9_8  AUTOSPEED72.BF.FBDIV_PION_RATE0_9_8

// 0x0124	AUTOSPEED73		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE0_7_0                 : 8;	/*  [7:0]     r/w 8'h14*/
		uint8_t FBDIV_CAL_PION_RATE0_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE0_3_0                    : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE0                 : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED73_t;
__xdata __at( 0xe124 ) volatile AUTOSPEED73_t AUTOSPEED73;
#define reg_FBDIV_CAL_PION_RATE0_7_0  AUTOSPEED73.BF.FBDIV_CAL_PION_RATE0_7_0
#define reg_FBDIV_CAL_PION_RATE0_9_8  AUTOSPEED73.BF.FBDIV_CAL_PION_RATE0_9_8
#define reg_REFDIV_PION_RATE0_3_0  AUTOSPEED73.BF.REFDIV_PION_RATE0_3_0
#define reg_VIND_BAND_SEL_PION_RATE0  AUTOSPEED73.BF.VIND_BAND_SEL_PION_RATE0

// 0x0128	AUTOSPEED74		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE0_7_0                    : 8;	/*  [7:0]     r/w 8'h28*/
		uint8_t DIV_1G_PION_RATE0_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE0_7_0               : 8;	/*[23:16]     r/w 8'ha*/
		uint8_t DIV_1G_FBCK_PION_RATE0_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED74_t;
__xdata __at( 0xe128 ) volatile AUTOSPEED74_t AUTOSPEED74;
#define reg_DIV_1G_PION_RATE0_7_0  AUTOSPEED74.BF.DIV_1G_PION_RATE0_7_0
#define reg_DIV_1G_PION_RATE0_9_8  AUTOSPEED74.BF.DIV_1G_PION_RATE0_9_8
#define reg_DIV_1G_FBCK_PION_RATE0_7_0  AUTOSPEED74.BF.DIV_1G_FBCK_PION_RATE0_7_0
#define reg_DIV_1G_FBCK_PION_RATE0_9_8  AUTOSPEED74.BF.DIV_1G_FBCK_PION_RATE0_9_8

// 0x012c	AUTOSPEED75		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PION_RATE0_4_0                    : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE0_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE0_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE0_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED75_t;
__xdata __at( 0xe12c ) volatile AUTOSPEED75_t AUTOSPEED75;
#define reg_ICP_LC_PION_RATE0_4_0  AUTOSPEED75.BF.ICP_LC_PION_RATE0_4_0
#define reg_PLL_LPFR_PION_RATE0_1_0  AUTOSPEED75.BF.PLL_LPFR_PION_RATE0_1_0
#define reg_PLL_LPFC_PION_RATE0_1_0  AUTOSPEED75.BF.PLL_LPFC_PION_RATE0_1_0
#define reg_INIT_TXFOFFS_PION_RATE0_7_0  AUTOSPEED75.BF.INIT_TXFOFFS_PION_RATE0_7_0

// 0x0130	AUTOSPEED76		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE0_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE0_7_0              : 8;	/* [15:8]     r/w 8'hda*/
		uint8_t SPEED_THRESH_PION_RATE0_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE0                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED76_t;
__xdata __at( 0xe130 ) volatile AUTOSPEED76_t AUTOSPEED76;
#define reg_INIT_TXFOFFS_PION_RATE0_9_8  AUTOSPEED76.BF.INIT_TXFOFFS_PION_RATE0_9_8
#define reg_SPEED_THRESH_PION_RATE0_7_0  AUTOSPEED76.BF.SPEED_THRESH_PION_RATE0_7_0
#define reg_SPEED_THRESH_PION_RATE0_11_8  AUTOSPEED76.BF.SPEED_THRESH_PION_RATE0_11_8
#define reg_LCCAP_USB_PION_RATE0  AUTOSPEED76.BF.LCCAP_USB_PION_RATE0

// 0x0134	AUTOSPEED77		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE0                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PION_RATE0_3_0           : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PION_RATE0_7_0                     : 8;	/*[23:16]     r/w 8'haf*/
		uint8_t SSC_M_PION_RATE0_12_8                    : 5;	/*[28:24]     r/w 5'h9*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED77_t;
__xdata __at( 0xe134 ) volatile AUTOSPEED77_t AUTOSPEED77;
#define reg_SSC_ACC_FACTOR_PION_RATE0  AUTOSPEED77.BF.SSC_ACC_FACTOR_PION_RATE0
#define reg_SSC_STEP_125PPM_PION_RATE0_3_0  AUTOSPEED77.BF.SSC_STEP_125PPM_PION_RATE0_3_0
#define reg_SSC_M_PION_RATE0_7_0  AUTOSPEED77.BF.SSC_M_PION_RATE0_7_0
#define reg_SSC_M_PION_RATE0_12_8  AUTOSPEED77.BF.SSC_M_PION_RATE0_12_8

// 0x0138	AUTOSPEED78		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED78_t;
__xdata __at( 0xe138 ) volatile AUTOSPEED78_t AUTOSPEED78;

// 0x013c	AUTOSPEED79		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED79_t;
__xdata __at( 0xe13c ) volatile AUTOSPEED79_t AUTOSPEED79;

// 0x0140	AUTOSPEED80		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE1_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE1_3_0              : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE1_7_0                     : 8;	/*[23:16]     r/w 8'h21*/
		uint8_t FBDIV_PION_RATE1_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED80_t;
__xdata __at( 0xe140 ) volatile AUTOSPEED80_t AUTOSPEED80;
#define reg_PLL_REG_SEL_PION_RATE1_2_0  AUTOSPEED80.BF.PLL_REG_SEL_PION_RATE1_2_0
#define reg_PLL_RATE_SEL_PION_RATE1_3_0  AUTOSPEED80.BF.PLL_RATE_SEL_PION_RATE1_3_0
#define reg_FBDIV_PION_RATE1_7_0  AUTOSPEED80.BF.FBDIV_PION_RATE1_7_0
#define reg_FBDIV_PION_RATE1_9_8  AUTOSPEED80.BF.FBDIV_PION_RATE1_9_8

// 0x0144	AUTOSPEED81		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE1_7_0                 : 8;	/*  [7:0]     r/w 8'h15*/
		uint8_t FBDIV_CAL_PION_RATE1_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE1_3_0                    : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE1                 : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED81_t;
__xdata __at( 0xe144 ) volatile AUTOSPEED81_t AUTOSPEED81;
#define reg_FBDIV_CAL_PION_RATE1_7_0  AUTOSPEED81.BF.FBDIV_CAL_PION_RATE1_7_0
#define reg_FBDIV_CAL_PION_RATE1_9_8  AUTOSPEED81.BF.FBDIV_CAL_PION_RATE1_9_8
#define reg_REFDIV_PION_RATE1_3_0  AUTOSPEED81.BF.REFDIV_PION_RATE1_3_0
#define reg_VIND_BAND_SEL_PION_RATE1  AUTOSPEED81.BF.VIND_BAND_SEL_PION_RATE1

// 0x0148	AUTOSPEED82		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE1_7_0                    : 8;	/*  [7:0]     r/w 8'h29*/
		uint8_t DIV_1G_PION_RATE1_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE1_7_0               : 8;	/*[23:16]     r/w 8'ha*/
		uint8_t DIV_1G_FBCK_PION_RATE1_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED82_t;
__xdata __at( 0xe148 ) volatile AUTOSPEED82_t AUTOSPEED82;
#define reg_DIV_1G_PION_RATE1_7_0  AUTOSPEED82.BF.DIV_1G_PION_RATE1_7_0
#define reg_DIV_1G_PION_RATE1_9_8  AUTOSPEED82.BF.DIV_1G_PION_RATE1_9_8
#define reg_DIV_1G_FBCK_PION_RATE1_7_0  AUTOSPEED82.BF.DIV_1G_FBCK_PION_RATE1_7_0
#define reg_DIV_1G_FBCK_PION_RATE1_9_8  AUTOSPEED82.BF.DIV_1G_FBCK_PION_RATE1_9_8

// 0x014c	AUTOSPEED83		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PION_RATE1_4_0                    : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE1_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE1_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE1_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED83_t;
__xdata __at( 0xe14c ) volatile AUTOSPEED83_t AUTOSPEED83;
#define reg_ICP_LC_PION_RATE1_4_0  AUTOSPEED83.BF.ICP_LC_PION_RATE1_4_0
#define reg_PLL_LPFR_PION_RATE1_1_0  AUTOSPEED83.BF.PLL_LPFR_PION_RATE1_1_0
#define reg_PLL_LPFC_PION_RATE1_1_0  AUTOSPEED83.BF.PLL_LPFC_PION_RATE1_1_0
#define reg_INIT_TXFOFFS_PION_RATE1_7_0  AUTOSPEED83.BF.INIT_TXFOFFS_PION_RATE1_7_0

// 0x0150	AUTOSPEED84		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE1_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE1_7_0              : 8;	/* [15:8]     r/w 8'hb6*/
		uint8_t SPEED_THRESH_PION_RATE1_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE1                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED84_t;
__xdata __at( 0xe150 ) volatile AUTOSPEED84_t AUTOSPEED84;
#define reg_INIT_TXFOFFS_PION_RATE1_9_8  AUTOSPEED84.BF.INIT_TXFOFFS_PION_RATE1_9_8
#define reg_SPEED_THRESH_PION_RATE1_7_0  AUTOSPEED84.BF.SPEED_THRESH_PION_RATE1_7_0
#define reg_SPEED_THRESH_PION_RATE1_11_8  AUTOSPEED84.BF.SPEED_THRESH_PION_RATE1_11_8
#define reg_LCCAP_USB_PION_RATE1  AUTOSPEED84.BF.LCCAP_USB_PION_RATE1

// 0x0154	AUTOSPEED85		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE1                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PION_RATE1_3_0           : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PION_RATE1_7_0                     : 8;	/*[23:16]     r/w 8'hfb*/
		uint8_t SSC_M_PION_RATE1_12_8                    : 5;	/*[28:24]     r/w 5'h9*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED85_t;
__xdata __at( 0xe154 ) volatile AUTOSPEED85_t AUTOSPEED85;
#define reg_SSC_ACC_FACTOR_PION_RATE1  AUTOSPEED85.BF.SSC_ACC_FACTOR_PION_RATE1
#define reg_SSC_STEP_125PPM_PION_RATE1_3_0  AUTOSPEED85.BF.SSC_STEP_125PPM_PION_RATE1_3_0
#define reg_SSC_M_PION_RATE1_7_0  AUTOSPEED85.BF.SSC_M_PION_RATE1_7_0
#define reg_SSC_M_PION_RATE1_12_8  AUTOSPEED85.BF.SSC_M_PION_RATE1_12_8

// 0x0158	AUTOSPEED86		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED86_t;
__xdata __at( 0xe158 ) volatile AUTOSPEED86_t AUTOSPEED86;

// 0x015c	AUTOSPEED87		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED87_t;
__xdata __at( 0xe15c ) volatile AUTOSPEED87_t AUTOSPEED87;

// 0x0160	AUTOSPEED88		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE2_2_0               : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE2_3_0              : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE2_7_0                     : 8;	/*[23:16]     r/w 8'h27*/
		uint8_t FBDIV_PION_RATE2_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED88_t;
__xdata __at( 0xe160 ) volatile AUTOSPEED88_t AUTOSPEED88;
#define reg_PLL_REG_SEL_PION_RATE2_2_0  AUTOSPEED88.BF.PLL_REG_SEL_PION_RATE2_2_0
#define reg_PLL_RATE_SEL_PION_RATE2_3_0  AUTOSPEED88.BF.PLL_RATE_SEL_PION_RATE2_3_0
#define reg_FBDIV_PION_RATE2_7_0  AUTOSPEED88.BF.FBDIV_PION_RATE2_7_0
#define reg_FBDIV_PION_RATE2_9_8  AUTOSPEED88.BF.FBDIV_PION_RATE2_9_8

// 0x0164	AUTOSPEED89		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE2_7_0                 : 8;	/*  [7:0]     r/w 8'h18*/
		uint8_t FBDIV_CAL_PION_RATE2_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE2_3_0                    : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE2                 : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED89_t;
__xdata __at( 0xe164 ) volatile AUTOSPEED89_t AUTOSPEED89;
#define reg_FBDIV_CAL_PION_RATE2_7_0  AUTOSPEED89.BF.FBDIV_CAL_PION_RATE2_7_0
#define reg_FBDIV_CAL_PION_RATE2_9_8  AUTOSPEED89.BF.FBDIV_CAL_PION_RATE2_9_8
#define reg_REFDIV_PION_RATE2_3_0  AUTOSPEED89.BF.REFDIV_PION_RATE2_3_0
#define reg_VIND_BAND_SEL_PION_RATE2  AUTOSPEED89.BF.VIND_BAND_SEL_PION_RATE2

// 0x0168	AUTOSPEED90		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE2_7_0                    : 8;	/*  [7:0]     r/w 8'h31*/
		uint8_t DIV_1G_PION_RATE2_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE2_7_0               : 8;	/*[23:16]     r/w 8'hc*/
		uint8_t DIV_1G_FBCK_PION_RATE2_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED90_t;
__xdata __at( 0xe168 ) volatile AUTOSPEED90_t AUTOSPEED90;
#define reg_DIV_1G_PION_RATE2_7_0  AUTOSPEED90.BF.DIV_1G_PION_RATE2_7_0
#define reg_DIV_1G_PION_RATE2_9_8  AUTOSPEED90.BF.DIV_1G_PION_RATE2_9_8
#define reg_DIV_1G_FBCK_PION_RATE2_7_0  AUTOSPEED90.BF.DIV_1G_FBCK_PION_RATE2_7_0
#define reg_DIV_1G_FBCK_PION_RATE2_9_8  AUTOSPEED90.BF.DIV_1G_FBCK_PION_RATE2_9_8

// 0x016c	AUTOSPEED91		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PION_RATE2_4_0                    : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE2_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE2_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE2_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED91_t;
__xdata __at( 0xe16c ) volatile AUTOSPEED91_t AUTOSPEED91;
#define reg_ICP_LC_PION_RATE2_4_0  AUTOSPEED91.BF.ICP_LC_PION_RATE2_4_0
#define reg_PLL_LPFR_PION_RATE2_1_0  AUTOSPEED91.BF.PLL_LPFR_PION_RATE2_1_0
#define reg_PLL_LPFC_PION_RATE2_1_0  AUTOSPEED91.BF.PLL_LPFC_PION_RATE2_1_0
#define reg_INIT_TXFOFFS_PION_RATE2_7_0  AUTOSPEED91.BF.INIT_TXFOFFS_PION_RATE2_7_0

// 0x0170	AUTOSPEED92		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE2_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE2_7_0              : 8;	/* [15:8]     r/w 8'hf9*/
		uint8_t SPEED_THRESH_PION_RATE2_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE2                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED92_t;
__xdata __at( 0xe170 ) volatile AUTOSPEED92_t AUTOSPEED92;
#define reg_INIT_TXFOFFS_PION_RATE2_9_8  AUTOSPEED92.BF.INIT_TXFOFFS_PION_RATE2_9_8
#define reg_SPEED_THRESH_PION_RATE2_7_0  AUTOSPEED92.BF.SPEED_THRESH_PION_RATE2_7_0
#define reg_SPEED_THRESH_PION_RATE2_11_8  AUTOSPEED92.BF.SPEED_THRESH_PION_RATE2_11_8
#define reg_LCCAP_USB_PION_RATE2  AUTOSPEED92.BF.LCCAP_USB_PION_RATE2

// 0x0174	AUTOSPEED93		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE2                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PION_RATE2_3_0           : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PION_RATE2_7_0                     : 8;	/*[23:16]     r/w 8'hcd*/
		uint8_t SSC_M_PION_RATE2_12_8                    : 5;	/*[28:24]     r/w 5'hb*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED93_t;
__xdata __at( 0xe174 ) volatile AUTOSPEED93_t AUTOSPEED93;
#define reg_SSC_ACC_FACTOR_PION_RATE2  AUTOSPEED93.BF.SSC_ACC_FACTOR_PION_RATE2
#define reg_SSC_STEP_125PPM_PION_RATE2_3_0  AUTOSPEED93.BF.SSC_STEP_125PPM_PION_RATE2_3_0
#define reg_SSC_M_PION_RATE2_7_0  AUTOSPEED93.BF.SSC_M_PION_RATE2_7_0
#define reg_SSC_M_PION_RATE2_12_8  AUTOSPEED93.BF.SSC_M_PION_RATE2_12_8

// 0x0178	AUTOSPEED94		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED94_t;
__xdata __at( 0xe178 ) volatile AUTOSPEED94_t AUTOSPEED94;

// 0x017c	AUTOSPEED95		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED95_t;
__xdata __at( 0xe17c ) volatile AUTOSPEED95_t AUTOSPEED95;

// 0x0180	AUTOSPEED96		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE3_2_0               : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE3_3_0              : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE3_7_0                     : 8;	/*[23:16]     r/w 8'h14*/
		uint8_t FBDIV_PION_RATE3_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED96_t;
__xdata __at( 0xe180 ) volatile AUTOSPEED96_t AUTOSPEED96;
#define reg_PLL_REG_SEL_PION_RATE3_2_0  AUTOSPEED96.BF.PLL_REG_SEL_PION_RATE3_2_0
#define reg_PLL_RATE_SEL_PION_RATE3_3_0  AUTOSPEED96.BF.PLL_RATE_SEL_PION_RATE3_3_0
#define reg_FBDIV_PION_RATE3_7_0  AUTOSPEED96.BF.FBDIV_PION_RATE3_7_0
#define reg_FBDIV_PION_RATE3_9_8  AUTOSPEED96.BF.FBDIV_PION_RATE3_9_8

// 0x0184	AUTOSPEED97		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE3_7_0                 : 8;	/*  [7:0]     r/w 8'h19*/
		uint8_t FBDIV_CAL_PION_RATE3_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE3_3_0                    : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE3                 : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED97_t;
__xdata __at( 0xe184 ) volatile AUTOSPEED97_t AUTOSPEED97;
#define reg_FBDIV_CAL_PION_RATE3_7_0  AUTOSPEED97.BF.FBDIV_CAL_PION_RATE3_7_0
#define reg_FBDIV_CAL_PION_RATE3_9_8  AUTOSPEED97.BF.FBDIV_CAL_PION_RATE3_9_8
#define reg_REFDIV_PION_RATE3_3_0  AUTOSPEED97.BF.REFDIV_PION_RATE3_3_0
#define reg_VIND_BAND_SEL_PION_RATE3  AUTOSPEED97.BF.VIND_BAND_SEL_PION_RATE3

// 0x0188	AUTOSPEED98		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE3_7_0                    : 8;	/*  [7:0]     r/w 8'h32*/
		uint8_t DIV_1G_PION_RATE3_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE3_7_0               : 8;	/*[23:16]     r/w 8'hd*/
		uint8_t DIV_1G_FBCK_PION_RATE3_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED98_t;
__xdata __at( 0xe188 ) volatile AUTOSPEED98_t AUTOSPEED98;
#define reg_DIV_1G_PION_RATE3_7_0  AUTOSPEED98.BF.DIV_1G_PION_RATE3_7_0
#define reg_DIV_1G_PION_RATE3_9_8  AUTOSPEED98.BF.DIV_1G_PION_RATE3_9_8
#define reg_DIV_1G_FBCK_PION_RATE3_7_0  AUTOSPEED98.BF.DIV_1G_FBCK_PION_RATE3_7_0
#define reg_DIV_1G_FBCK_PION_RATE3_9_8  AUTOSPEED98.BF.DIV_1G_FBCK_PION_RATE3_9_8

// 0x018c	AUTOSPEED99		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PION_RATE3_4_0                    : 5;	/*  [4:0]     r/w 5'h6*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE3_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE3_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE3_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED99_t;
__xdata __at( 0xe18c ) volatile AUTOSPEED99_t AUTOSPEED99;
#define reg_ICP_LC_PION_RATE3_4_0  AUTOSPEED99.BF.ICP_LC_PION_RATE3_4_0
#define reg_PLL_LPFR_PION_RATE3_1_0  AUTOSPEED99.BF.PLL_LPFR_PION_RATE3_1_0
#define reg_PLL_LPFC_PION_RATE3_1_0  AUTOSPEED99.BF.PLL_LPFC_PION_RATE3_1_0
#define reg_INIT_TXFOFFS_PION_RATE3_7_0  AUTOSPEED99.BF.INIT_TXFOFFS_PION_RATE3_7_0

// 0x0190	AUTOSPEED100		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE3_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE3_7_0              : 8;	/* [15:8]     r/w 8'hda*/
		uint8_t SPEED_THRESH_PION_RATE3_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE3                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED100_t;
__xdata __at( 0xe190 ) volatile AUTOSPEED100_t AUTOSPEED100;
#define reg_INIT_TXFOFFS_PION_RATE3_9_8  AUTOSPEED100.BF.INIT_TXFOFFS_PION_RATE3_9_8
#define reg_SPEED_THRESH_PION_RATE3_7_0  AUTOSPEED100.BF.SPEED_THRESH_PION_RATE3_7_0
#define reg_SPEED_THRESH_PION_RATE3_11_8  AUTOSPEED100.BF.SPEED_THRESH_PION_RATE3_11_8
#define reg_LCCAP_USB_PION_RATE3  AUTOSPEED100.BF.LCCAP_USB_PION_RATE3

// 0x0194	AUTOSPEED101		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE3                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PION_RATE3_3_0           : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PION_RATE3_7_0                     : 8;	/*[23:16]     r/w 8'h1b*/
		uint8_t SSC_M_PION_RATE3_12_8                    : 5;	/*[28:24]     r/w 5'hc*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED101_t;
__xdata __at( 0xe194 ) volatile AUTOSPEED101_t AUTOSPEED101;
#define reg_SSC_ACC_FACTOR_PION_RATE3  AUTOSPEED101.BF.SSC_ACC_FACTOR_PION_RATE3
#define reg_SSC_STEP_125PPM_PION_RATE3_3_0  AUTOSPEED101.BF.SSC_STEP_125PPM_PION_RATE3_3_0
#define reg_SSC_M_PION_RATE3_7_0  AUTOSPEED101.BF.SSC_M_PION_RATE3_7_0
#define reg_SSC_M_PION_RATE3_12_8  AUTOSPEED101.BF.SSC_M_PION_RATE3_12_8

// 0x0198	AUTOSPEED102		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED102_t;
__xdata __at( 0xe198 ) volatile AUTOSPEED102_t AUTOSPEED102;

// 0x019c	AUTOSPEED103		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED103_t;
__xdata __at( 0xe19c ) volatile AUTOSPEED103_t AUTOSPEED103;

// 0x01a0	AUTOSPEED104		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE4_2_0               : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE4_3_0              : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE4_7_0                     : 8;	/*[23:16]     r/w 8'h3e*/
		uint8_t FBDIV_PION_RATE4_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED104_t;
__xdata __at( 0xe1a0 ) volatile AUTOSPEED104_t AUTOSPEED104;
#define reg_PLL_REG_SEL_PION_RATE4_2_0  AUTOSPEED104.BF.PLL_REG_SEL_PION_RATE4_2_0
#define reg_PLL_RATE_SEL_PION_RATE4_3_0  AUTOSPEED104.BF.PLL_RATE_SEL_PION_RATE4_3_0
#define reg_FBDIV_PION_RATE4_7_0  AUTOSPEED104.BF.FBDIV_PION_RATE4_7_0
#define reg_FBDIV_PION_RATE4_9_8  AUTOSPEED104.BF.FBDIV_PION_RATE4_9_8

// 0x01a4	AUTOSPEED105		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE4_7_0                 : 8;	/*  [7:0]     r/w 8'h1a*/
		uint8_t FBDIV_CAL_PION_RATE4_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE4_3_0                    : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE4                 : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED105_t;
__xdata __at( 0xe1a4 ) volatile AUTOSPEED105_t AUTOSPEED105;
#define reg_FBDIV_CAL_PION_RATE4_7_0  AUTOSPEED105.BF.FBDIV_CAL_PION_RATE4_7_0
#define reg_FBDIV_CAL_PION_RATE4_9_8  AUTOSPEED105.BF.FBDIV_CAL_PION_RATE4_9_8
#define reg_REFDIV_PION_RATE4_3_0  AUTOSPEED105.BF.REFDIV_PION_RATE4_3_0
#define reg_VIND_BAND_SEL_PION_RATE4  AUTOSPEED105.BF.VIND_BAND_SEL_PION_RATE4

// 0x01a8	AUTOSPEED106		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE4_7_0                    : 8;	/*  [7:0]     r/w 8'h34*/
		uint8_t DIV_1G_PION_RATE4_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE4_7_0               : 8;	/*[23:16]     r/w 8'hd*/
		uint8_t DIV_1G_FBCK_PION_RATE4_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED106_t;
__xdata __at( 0xe1a8 ) volatile AUTOSPEED106_t AUTOSPEED106;
#define reg_DIV_1G_PION_RATE4_7_0  AUTOSPEED106.BF.DIV_1G_PION_RATE4_7_0
#define reg_DIV_1G_PION_RATE4_9_8  AUTOSPEED106.BF.DIV_1G_PION_RATE4_9_8
#define reg_DIV_1G_FBCK_PION_RATE4_7_0  AUTOSPEED106.BF.DIV_1G_FBCK_PION_RATE4_7_0
#define reg_DIV_1G_FBCK_PION_RATE4_9_8  AUTOSPEED106.BF.DIV_1G_FBCK_PION_RATE4_9_8

// 0x01ac	AUTOSPEED107		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PION_RATE4_4_0                    : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE4_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE4_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE4_7_0              : 8;	/*[31:24]     r/w 8'h42*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED107_t;
__xdata __at( 0xe1ac ) volatile AUTOSPEED107_t AUTOSPEED107;
#define reg_ICP_LC_PION_RATE4_4_0  AUTOSPEED107.BF.ICP_LC_PION_RATE4_4_0
#define reg_PLL_LPFR_PION_RATE4_1_0  AUTOSPEED107.BF.PLL_LPFR_PION_RATE4_1_0
#define reg_PLL_LPFC_PION_RATE4_1_0  AUTOSPEED107.BF.PLL_LPFC_PION_RATE4_1_0
#define reg_INIT_TXFOFFS_PION_RATE4_7_0  AUTOSPEED107.BF.INIT_TXFOFFS_PION_RATE4_7_0

// 0x01b0	AUTOSPEED108		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE4_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE4_7_0              : 8;	/* [15:8]     r/w 8'hc9*/
		uint8_t SPEED_THRESH_PION_RATE4_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE4                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED108_t;
__xdata __at( 0xe1b0 ) volatile AUTOSPEED108_t AUTOSPEED108;
#define reg_INIT_TXFOFFS_PION_RATE4_9_8  AUTOSPEED108.BF.INIT_TXFOFFS_PION_RATE4_9_8
#define reg_SPEED_THRESH_PION_RATE4_7_0  AUTOSPEED108.BF.SPEED_THRESH_PION_RATE4_7_0
#define reg_SPEED_THRESH_PION_RATE4_11_8  AUTOSPEED108.BF.SPEED_THRESH_PION_RATE4_11_8
#define reg_LCCAP_USB_PION_RATE4  AUTOSPEED108.BF.LCCAP_USB_PION_RATE4

// 0x01b4	AUTOSPEED109		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE4                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PION_RATE4_3_0           : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PION_RATE4_7_0                     : 8;	/*[23:16]     r/w 8'h7b*/
		uint8_t SSC_M_PION_RATE4_12_8                    : 5;	/*[28:24]     r/w 5'hc*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED109_t;
__xdata __at( 0xe1b4 ) volatile AUTOSPEED109_t AUTOSPEED109;
#define reg_SSC_ACC_FACTOR_PION_RATE4  AUTOSPEED109.BF.SSC_ACC_FACTOR_PION_RATE4
#define reg_SSC_STEP_125PPM_PION_RATE4_3_0  AUTOSPEED109.BF.SSC_STEP_125PPM_PION_RATE4_3_0
#define reg_SSC_M_PION_RATE4_7_0  AUTOSPEED109.BF.SSC_M_PION_RATE4_7_0
#define reg_SSC_M_PION_RATE4_12_8  AUTOSPEED109.BF.SSC_M_PION_RATE4_12_8

// 0x01b8	AUTOSPEED110		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED110_t;
__xdata __at( 0xe1b8 ) volatile AUTOSPEED110_t AUTOSPEED110;

// 0x01bc	AUTOSPEED111		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED111_t;
__xdata __at( 0xe1bc ) volatile AUTOSPEED111_t AUTOSPEED111;

// 0x01c0	AUTOSPEED112		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE5_2_0               : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE5_3_0              : 4;	/* [11:8]     r/w 4'h5*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE5_7_0                     : 8;	/*[23:16]     r/w 8'h55*/
		uint8_t FBDIV_PION_RATE5_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED112_t;
__xdata __at( 0xe1c0 ) volatile AUTOSPEED112_t AUTOSPEED112;
#define reg_PLL_REG_SEL_PION_RATE5_2_0  AUTOSPEED112.BF.PLL_REG_SEL_PION_RATE5_2_0
#define reg_PLL_RATE_SEL_PION_RATE5_3_0  AUTOSPEED112.BF.PLL_RATE_SEL_PION_RATE5_3_0
#define reg_FBDIV_PION_RATE5_7_0  AUTOSPEED112.BF.FBDIV_PION_RATE5_7_0
#define reg_FBDIV_PION_RATE5_9_8  AUTOSPEED112.BF.FBDIV_PION_RATE5_9_8

// 0x01c4	AUTOSPEED113		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE5_7_0                 : 8;	/*  [7:0]     r/w 8'h1b*/
		uint8_t FBDIV_CAL_PION_RATE5_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE5_3_0                    : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE5                 : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED113_t;
__xdata __at( 0xe1c4 ) volatile AUTOSPEED113_t AUTOSPEED113;
#define reg_FBDIV_CAL_PION_RATE5_7_0  AUTOSPEED113.BF.FBDIV_CAL_PION_RATE5_7_0
#define reg_FBDIV_CAL_PION_RATE5_9_8  AUTOSPEED113.BF.FBDIV_CAL_PION_RATE5_9_8
#define reg_REFDIV_PION_RATE5_3_0  AUTOSPEED113.BF.REFDIV_PION_RATE5_3_0
#define reg_VIND_BAND_SEL_PION_RATE5  AUTOSPEED113.BF.VIND_BAND_SEL_PION_RATE5

// 0x01c8	AUTOSPEED114		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE5_7_0                    : 8;	/*  [7:0]     r/w 8'h35*/
		uint8_t DIV_1G_PION_RATE5_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE5_7_0               : 8;	/*[23:16]     r/w 8'hd*/
		uint8_t DIV_1G_FBCK_PION_RATE5_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED114_t;
__xdata __at( 0xe1c8 ) volatile AUTOSPEED114_t AUTOSPEED114;
#define reg_DIV_1G_PION_RATE5_7_0  AUTOSPEED114.BF.DIV_1G_PION_RATE5_7_0
#define reg_DIV_1G_PION_RATE5_9_8  AUTOSPEED114.BF.DIV_1G_PION_RATE5_9_8
#define reg_DIV_1G_FBCK_PION_RATE5_7_0  AUTOSPEED114.BF.DIV_1G_FBCK_PION_RATE5_7_0
#define reg_DIV_1G_FBCK_PION_RATE5_9_8  AUTOSPEED114.BF.DIV_1G_FBCK_PION_RATE5_9_8

// 0x01cc	AUTOSPEED115		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PION_RATE5_4_0                    : 5;	/*  [4:0]     r/w 5'hd*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE5_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE5_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE5_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED115_t;
__xdata __at( 0xe1cc ) volatile AUTOSPEED115_t AUTOSPEED115;
#define reg_ICP_LC_PION_RATE5_4_0  AUTOSPEED115.BF.ICP_LC_PION_RATE5_4_0
#define reg_PLL_LPFR_PION_RATE5_1_0  AUTOSPEED115.BF.PLL_LPFR_PION_RATE5_1_0
#define reg_PLL_LPFC_PION_RATE5_1_0  AUTOSPEED115.BF.PLL_LPFC_PION_RATE5_1_0
#define reg_INIT_TXFOFFS_PION_RATE5_7_0  AUTOSPEED115.BF.INIT_TXFOFFS_PION_RATE5_7_0

// 0x01d0	AUTOSPEED116		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE5_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE5_7_0              : 8;	/* [15:8]     r/w 8'hb9*/
		uint8_t SPEED_THRESH_PION_RATE5_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE5                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED116_t;
__xdata __at( 0xe1d0 ) volatile AUTOSPEED116_t AUTOSPEED116;
#define reg_INIT_TXFOFFS_PION_RATE5_9_8  AUTOSPEED116.BF.INIT_TXFOFFS_PION_RATE5_9_8
#define reg_SPEED_THRESH_PION_RATE5_7_0  AUTOSPEED116.BF.SPEED_THRESH_PION_RATE5_7_0
#define reg_SPEED_THRESH_PION_RATE5_11_8  AUTOSPEED116.BF.SPEED_THRESH_PION_RATE5_11_8
#define reg_LCCAP_USB_PION_RATE5  AUTOSPEED116.BF.LCCAP_USB_PION_RATE5

// 0x01d4	AUTOSPEED117		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE5                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PION_RATE5_3_0           : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PION_RATE5_7_0                     : 8;	/*[23:16]     r/w 8'hdb*/
		uint8_t SSC_M_PION_RATE5_12_8                    : 5;	/*[28:24]     r/w 5'hc*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED117_t;
__xdata __at( 0xe1d4 ) volatile AUTOSPEED117_t AUTOSPEED117;
#define reg_SSC_ACC_FACTOR_PION_RATE5  AUTOSPEED117.BF.SSC_ACC_FACTOR_PION_RATE5
#define reg_SSC_STEP_125PPM_PION_RATE5_3_0  AUTOSPEED117.BF.SSC_STEP_125PPM_PION_RATE5_3_0
#define reg_SSC_M_PION_RATE5_7_0  AUTOSPEED117.BF.SSC_M_PION_RATE5_7_0
#define reg_SSC_M_PION_RATE5_12_8  AUTOSPEED117.BF.SSC_M_PION_RATE5_12_8

// 0x01d8	AUTOSPEED118		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED118_t;
__xdata __at( 0xe1d8 ) volatile AUTOSPEED118_t AUTOSPEED118;

// 0x01dc	AUTOSPEED119		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED119_t;
__xdata __at( 0xe1dc ) volatile AUTOSPEED119_t AUTOSPEED119;

// 0x01e0	AUTOSPEED120		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE6_2_0               : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE6_3_0              : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE6_7_0                     : 8;	/*[23:16]     r/w 8'h2c*/
		uint8_t FBDIV_PION_RATE6_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED120_t;
__xdata __at( 0xe1e0 ) volatile AUTOSPEED120_t AUTOSPEED120;
#define reg_PLL_REG_SEL_PION_RATE6_2_0  AUTOSPEED120.BF.PLL_REG_SEL_PION_RATE6_2_0
#define reg_PLL_RATE_SEL_PION_RATE6_3_0  AUTOSPEED120.BF.PLL_RATE_SEL_PION_RATE6_3_0
#define reg_FBDIV_PION_RATE6_7_0  AUTOSPEED120.BF.FBDIV_PION_RATE6_7_0
#define reg_FBDIV_PION_RATE6_9_8  AUTOSPEED120.BF.FBDIV_PION_RATE6_9_8

// 0x01e4	AUTOSPEED121		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE6_7_0                 : 8;	/*  [7:0]     r/w 8'h1c*/
		uint8_t FBDIV_CAL_PION_RATE6_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE6_3_0                    : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE6                 : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED121_t;
__xdata __at( 0xe1e4 ) volatile AUTOSPEED121_t AUTOSPEED121;
#define reg_FBDIV_CAL_PION_RATE6_7_0  AUTOSPEED121.BF.FBDIV_CAL_PION_RATE6_7_0
#define reg_FBDIV_CAL_PION_RATE6_9_8  AUTOSPEED121.BF.FBDIV_CAL_PION_RATE6_9_8
#define reg_REFDIV_PION_RATE6_3_0  AUTOSPEED121.BF.REFDIV_PION_RATE6_3_0
#define reg_VIND_BAND_SEL_PION_RATE6  AUTOSPEED121.BF.VIND_BAND_SEL_PION_RATE6

// 0x01e8	AUTOSPEED122		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE6_7_0                    : 8;	/*  [7:0]     r/w 8'h37*/
		uint8_t DIV_1G_PION_RATE6_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE6_7_0               : 8;	/*[23:16]     r/w 8'he*/
		uint8_t DIV_1G_FBCK_PION_RATE6_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED122_t;
__xdata __at( 0xe1e8 ) volatile AUTOSPEED122_t AUTOSPEED122;
#define reg_DIV_1G_PION_RATE6_7_0  AUTOSPEED122.BF.DIV_1G_PION_RATE6_7_0
#define reg_DIV_1G_PION_RATE6_9_8  AUTOSPEED122.BF.DIV_1G_PION_RATE6_9_8
#define reg_DIV_1G_FBCK_PION_RATE6_7_0  AUTOSPEED122.BF.DIV_1G_FBCK_PION_RATE6_7_0
#define reg_DIV_1G_FBCK_PION_RATE6_9_8  AUTOSPEED122.BF.DIV_1G_FBCK_PION_RATE6_9_8

// 0x01ec	AUTOSPEED123		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PION_RATE6_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE6_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE6_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE6_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED123_t;
__xdata __at( 0xe1ec ) volatile AUTOSPEED123_t AUTOSPEED123;
#define reg_ICP_LC_PION_RATE6_4_0  AUTOSPEED123.BF.ICP_LC_PION_RATE6_4_0
#define reg_PLL_LPFR_PION_RATE6_1_0  AUTOSPEED123.BF.PLL_LPFR_PION_RATE6_1_0
#define reg_PLL_LPFC_PION_RATE6_1_0  AUTOSPEED123.BF.PLL_LPFC_PION_RATE6_1_0
#define reg_INIT_TXFOFFS_PION_RATE6_7_0  AUTOSPEED123.BF.INIT_TXFOFFS_PION_RATE6_7_0

// 0x01f0	AUTOSPEED124		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE6_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE6_7_0              : 8;	/* [15:8]     r/w 8'hb6*/
		uint8_t SPEED_THRESH_PION_RATE6_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE6                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED124_t;
__xdata __at( 0xe1f0 ) volatile AUTOSPEED124_t AUTOSPEED124;
#define reg_INIT_TXFOFFS_PION_RATE6_9_8  AUTOSPEED124.BF.INIT_TXFOFFS_PION_RATE6_9_8
#define reg_SPEED_THRESH_PION_RATE6_7_0  AUTOSPEED124.BF.SPEED_THRESH_PION_RATE6_7_0
#define reg_SPEED_THRESH_PION_RATE6_11_8  AUTOSPEED124.BF.SPEED_THRESH_PION_RATE6_11_8
#define reg_LCCAP_USB_PION_RATE6  AUTOSPEED124.BF.LCCAP_USB_PION_RATE6

// 0x01f4	AUTOSPEED125		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE6                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PION_RATE6_3_0           : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PION_RATE6_7_0                     : 8;	/*[23:16]     r/w 8'h51*/
		uint8_t SSC_M_PION_RATE6_12_8                    : 5;	/*[28:24]     r/w 5'hd*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED125_t;
__xdata __at( 0xe1f4 ) volatile AUTOSPEED125_t AUTOSPEED125;
#define reg_SSC_ACC_FACTOR_PION_RATE6  AUTOSPEED125.BF.SSC_ACC_FACTOR_PION_RATE6
#define reg_SSC_STEP_125PPM_PION_RATE6_3_0  AUTOSPEED125.BF.SSC_STEP_125PPM_PION_RATE6_3_0
#define reg_SSC_M_PION_RATE6_7_0  AUTOSPEED125.BF.SSC_M_PION_RATE6_7_0
#define reg_SSC_M_PION_RATE6_12_8  AUTOSPEED125.BF.SSC_M_PION_RATE6_12_8

// 0x01f8	AUTOSPEED126		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED126_t;
__xdata __at( 0xe1f8 ) volatile AUTOSPEED126_t AUTOSPEED126;

// 0x01fc	AUTOSPEED127		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED127_t;
__xdata __at( 0xe1fc ) volatile AUTOSPEED127_t AUTOSPEED127;

// 0x0200	AUTOSPEED128		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE7_2_0               : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE7_3_0              : 4;	/* [11:8]     r/w 4'h7*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE7_7_0                     : 8;	/*[23:16]     r/w 8'h2d*/
		uint8_t FBDIV_PION_RATE7_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED128_t;
__xdata __at( 0xe200 ) volatile AUTOSPEED128_t AUTOSPEED128;
#define reg_PLL_REG_SEL_PION_RATE7_2_0  AUTOSPEED128.BF.PLL_REG_SEL_PION_RATE7_2_0
#define reg_PLL_RATE_SEL_PION_RATE7_3_0  AUTOSPEED128.BF.PLL_RATE_SEL_PION_RATE7_3_0
#define reg_FBDIV_PION_RATE7_7_0  AUTOSPEED128.BF.FBDIV_PION_RATE7_7_0
#define reg_FBDIV_PION_RATE7_9_8  AUTOSPEED128.BF.FBDIV_PION_RATE7_9_8

// 0x0204	AUTOSPEED129		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE7_7_0                 : 8;	/*  [7:0]     r/w 8'h1c*/
		uint8_t FBDIV_CAL_PION_RATE7_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE7_3_0                    : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE7                 : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED129_t;
__xdata __at( 0xe204 ) volatile AUTOSPEED129_t AUTOSPEED129;
#define reg_FBDIV_CAL_PION_RATE7_7_0  AUTOSPEED129.BF.FBDIV_CAL_PION_RATE7_7_0
#define reg_FBDIV_CAL_PION_RATE7_9_8  AUTOSPEED129.BF.FBDIV_CAL_PION_RATE7_9_8
#define reg_REFDIV_PION_RATE7_3_0  AUTOSPEED129.BF.REFDIV_PION_RATE7_3_0
#define reg_VIND_BAND_SEL_PION_RATE7  AUTOSPEED129.BF.VIND_BAND_SEL_PION_RATE7

// 0x0208	AUTOSPEED130		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE7_7_0                    : 8;	/*  [7:0]     r/w 8'h38*/
		uint8_t DIV_1G_PION_RATE7_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE7_7_0               : 8;	/*[23:16]     r/w 8'he*/
		uint8_t DIV_1G_FBCK_PION_RATE7_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED130_t;
__xdata __at( 0xe208 ) volatile AUTOSPEED130_t AUTOSPEED130;
#define reg_DIV_1G_PION_RATE7_7_0  AUTOSPEED130.BF.DIV_1G_PION_RATE7_7_0
#define reg_DIV_1G_PION_RATE7_9_8  AUTOSPEED130.BF.DIV_1G_PION_RATE7_9_8
#define reg_DIV_1G_FBCK_PION_RATE7_7_0  AUTOSPEED130.BF.DIV_1G_FBCK_PION_RATE7_7_0
#define reg_DIV_1G_FBCK_PION_RATE7_9_8  AUTOSPEED130.BF.DIV_1G_FBCK_PION_RATE7_9_8

// 0x020c	AUTOSPEED131		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PION_RATE7_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE7_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE7_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE7_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED131_t;
__xdata __at( 0xe20c ) volatile AUTOSPEED131_t AUTOSPEED131;
#define reg_ICP_LC_PION_RATE7_4_0  AUTOSPEED131.BF.ICP_LC_PION_RATE7_4_0
#define reg_PLL_LPFR_PION_RATE7_1_0  AUTOSPEED131.BF.PLL_LPFR_PION_RATE7_1_0
#define reg_PLL_LPFC_PION_RATE7_1_0  AUTOSPEED131.BF.PLL_LPFC_PION_RATE7_1_0
#define reg_INIT_TXFOFFS_PION_RATE7_7_0  AUTOSPEED131.BF.INIT_TXFOFFS_PION_RATE7_7_0

// 0x0210	AUTOSPEED132		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE7_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE7_7_0              : 8;	/* [15:8]     r/w 8'he3*/
		uint8_t SPEED_THRESH_PION_RATE7_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE7                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED132_t;
__xdata __at( 0xe210 ) volatile AUTOSPEED132_t AUTOSPEED132;
#define reg_INIT_TXFOFFS_PION_RATE7_9_8  AUTOSPEED132.BF.INIT_TXFOFFS_PION_RATE7_9_8
#define reg_SPEED_THRESH_PION_RATE7_7_0  AUTOSPEED132.BF.SPEED_THRESH_PION_RATE7_7_0
#define reg_SPEED_THRESH_PION_RATE7_11_8  AUTOSPEED132.BF.SPEED_THRESH_PION_RATE7_11_8
#define reg_LCCAP_USB_PION_RATE7  AUTOSPEED132.BF.LCCAP_USB_PION_RATE7

// 0x0214	AUTOSPEED133		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE7                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PION_RATE7_3_0           : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PION_RATE7_7_0                     : 8;	/*[23:16]     r/w 8'h9d*/
		uint8_t SSC_M_PION_RATE7_12_8                    : 5;	/*[28:24]     r/w 5'hd*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED133_t;
__xdata __at( 0xe214 ) volatile AUTOSPEED133_t AUTOSPEED133;
#define reg_SSC_ACC_FACTOR_PION_RATE7  AUTOSPEED133.BF.SSC_ACC_FACTOR_PION_RATE7
#define reg_SSC_STEP_125PPM_PION_RATE7_3_0  AUTOSPEED133.BF.SSC_STEP_125PPM_PION_RATE7_3_0
#define reg_SSC_M_PION_RATE7_7_0  AUTOSPEED133.BF.SSC_M_PION_RATE7_7_0
#define reg_SSC_M_PION_RATE7_12_8  AUTOSPEED133.BF.SSC_M_PION_RATE7_12_8

// 0x0218	AUTOSPEED134		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED134_t;
__xdata __at( 0xe218 ) volatile AUTOSPEED134_t AUTOSPEED134;

// 0x021c	AUTOSPEED135		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED135_t;
__xdata __at( 0xe21c ) volatile AUTOSPEED135_t AUTOSPEED135;

// 0x0220	AUTOSPEED136		TBD
typedef union {
	struct {
		uint8_t PLL_REG_SEL_PION_RATE8_2_0               : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PLL_RATE_SEL_PION_RATE8_3_0              : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t FBDIV_PION_RATE8_7_0                     : 8;	/*[23:16]     r/w 8'h2d*/
		uint8_t FBDIV_PION_RATE8_9_8                     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED136_t;
__xdata __at( 0xe220 ) volatile AUTOSPEED136_t AUTOSPEED136;
#define reg_PLL_REG_SEL_PION_RATE8_2_0  AUTOSPEED136.BF.PLL_REG_SEL_PION_RATE8_2_0
#define reg_PLL_RATE_SEL_PION_RATE8_3_0  AUTOSPEED136.BF.PLL_RATE_SEL_PION_RATE8_3_0
#define reg_FBDIV_PION_RATE8_7_0  AUTOSPEED136.BF.FBDIV_PION_RATE8_7_0
#define reg_FBDIV_PION_RATE8_9_8  AUTOSPEED136.BF.FBDIV_PION_RATE8_9_8

// 0x0224	AUTOSPEED137		TBD
typedef union {
	struct {
		uint8_t FBDIV_CAL_PION_RATE8_7_0                 : 8;	/*  [7:0]     r/w 8'h1c*/
		uint8_t FBDIV_CAL_PION_RATE8_9_8                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REFDIV_PION_RATE8_3_0                    : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t VIND_BAND_SEL_PION_RATE8                 : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED137_t;
__xdata __at( 0xe224 ) volatile AUTOSPEED137_t AUTOSPEED137;
#define reg_FBDIV_CAL_PION_RATE8_7_0  AUTOSPEED137.BF.FBDIV_CAL_PION_RATE8_7_0
#define reg_FBDIV_CAL_PION_RATE8_9_8  AUTOSPEED137.BF.FBDIV_CAL_PION_RATE8_9_8
#define reg_REFDIV_PION_RATE8_3_0  AUTOSPEED137.BF.REFDIV_PION_RATE8_3_0
#define reg_VIND_BAND_SEL_PION_RATE8  AUTOSPEED137.BF.VIND_BAND_SEL_PION_RATE8

// 0x0228	AUTOSPEED138		TBD
typedef union {
	struct {
		uint8_t DIV_1G_PION_RATE8_7_0                    : 8;	/*  [7:0]     r/w 8'h38*/
		uint8_t DIV_1G_PION_RATE8_9_8                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DIV_1G_FBCK_PION_RATE8_7_0               : 8;	/*[23:16]     r/w 8'he*/
		uint8_t DIV_1G_FBCK_PION_RATE8_9_8               : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED138_t;
__xdata __at( 0xe228 ) volatile AUTOSPEED138_t AUTOSPEED138;
#define reg_DIV_1G_PION_RATE8_7_0  AUTOSPEED138.BF.DIV_1G_PION_RATE8_7_0
#define reg_DIV_1G_PION_RATE8_9_8  AUTOSPEED138.BF.DIV_1G_PION_RATE8_9_8
#define reg_DIV_1G_FBCK_PION_RATE8_7_0  AUTOSPEED138.BF.DIV_1G_FBCK_PION_RATE8_7_0
#define reg_DIV_1G_FBCK_PION_RATE8_9_8  AUTOSPEED138.BF.DIV_1G_FBCK_PION_RATE8_9_8

// 0x022c	AUTOSPEED139		TBD
typedef union {
	struct {
		uint8_t ICP_LC_PION_RATE8_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE8_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE8_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE8_7_0              : 8;	/*[31:24]     r/w 8'h92*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED139_t;
__xdata __at( 0xe22c ) volatile AUTOSPEED139_t AUTOSPEED139;
#define reg_ICP_LC_PION_RATE8_4_0  AUTOSPEED139.BF.ICP_LC_PION_RATE8_4_0
#define reg_PLL_LPFR_PION_RATE8_1_0  AUTOSPEED139.BF.PLL_LPFR_PION_RATE8_1_0
#define reg_PLL_LPFC_PION_RATE8_1_0  AUTOSPEED139.BF.PLL_LPFC_PION_RATE8_1_0
#define reg_INIT_TXFOFFS_PION_RATE8_7_0  AUTOSPEED139.BF.INIT_TXFOFFS_PION_RATE8_7_0

// 0x0230	AUTOSPEED140		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE8_9_8              : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE8_7_0              : 8;	/* [15:8]     r/w 8'hda*/
		uint8_t SPEED_THRESH_PION_RATE8_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE8                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED140_t;
__xdata __at( 0xe230 ) volatile AUTOSPEED140_t AUTOSPEED140;
#define reg_INIT_TXFOFFS_PION_RATE8_9_8  AUTOSPEED140.BF.INIT_TXFOFFS_PION_RATE8_9_8
#define reg_SPEED_THRESH_PION_RATE8_7_0  AUTOSPEED140.BF.SPEED_THRESH_PION_RATE8_7_0
#define reg_SPEED_THRESH_PION_RATE8_11_8  AUTOSPEED140.BF.SPEED_THRESH_PION_RATE8_11_8
#define reg_LCCAP_USB_PION_RATE8  AUTOSPEED140.BF.LCCAP_USB_PION_RATE8

// 0x0234	AUTOSPEED141		TBD
typedef union {
	struct {
		uint8_t SSC_ACC_FACTOR_PION_RATE8                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t SSC_STEP_125PPM_PION_RATE8_3_0           : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SSC_M_PION_RATE8_7_0                     : 8;	/*[23:16]     r/w 8'h8f*/
		uint8_t SSC_M_PION_RATE8_12_8                    : 5;	/*[28:24]     r/w 5'hd*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED141_t;
__xdata __at( 0xe234 ) volatile AUTOSPEED141_t AUTOSPEED141;
#define reg_SSC_ACC_FACTOR_PION_RATE8  AUTOSPEED141.BF.SSC_ACC_FACTOR_PION_RATE8
#define reg_SSC_STEP_125PPM_PION_RATE8_3_0  AUTOSPEED141.BF.SSC_STEP_125PPM_PION_RATE8_3_0
#define reg_SSC_M_PION_RATE8_7_0  AUTOSPEED141.BF.SSC_M_PION_RATE8_7_0
#define reg_SSC_M_PION_RATE8_12_8  AUTOSPEED141.BF.SSC_M_PION_RATE8_12_8

// 0x0238	AUTOSPEED142		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED142_t;
__xdata __at( 0xe238 ) volatile AUTOSPEED142_t AUTOSPEED142;

// 0x023c	AUTOSPEED143		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED143_t;
__xdata __at( 0xe23c ) volatile AUTOSPEED143_t AUTOSPEED143;

// 0x0240	AUTOSPEED144		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PIOFF_RATE0_3_0        : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PIOFF_RATE0_3_0          : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE0_7_0           : 8;	/*[23:16]     r/w 8'h40*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE0_9_8           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED144_t;
__xdata __at( 0xe240 ) volatile AUTOSPEED144_t AUTOSPEED144;
#define reg_PLL_RATE_SEL_RPLL_PIOFF_RATE0_3_0  AUTOSPEED144.BF.PLL_RATE_SEL_RPLL_PIOFF_RATE0_3_0
#define reg_PLL_REFDIV_RING_PIOFF_RATE0_3_0  AUTOSPEED144.BF.PLL_REFDIV_RING_PIOFF_RATE0_3_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE0_7_0  AUTOSPEED144.BF.PLL_FBDIV_RING_PIOFF_RATE0_7_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE0_9_8  AUTOSPEED144.BF.PLL_FBDIV_RING_PIOFF_RATE0_9_8

// 0x0244	AUTOSPEED145		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE0_7_0      : 8;	/*  [7:0]     r/w 8'h40*/
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE0_9_8      : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PIOFF_RATE0_3_0                 : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE0_7_0    : 8;	/*[31:24]     r/w 8'hfb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED145_t;
__xdata __at( 0xe244 ) volatile AUTOSPEED145_t AUTOSPEED145;
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE0_7_0  AUTOSPEED145.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE0_7_0
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE0_9_8  AUTOSPEED145.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE0_9_8
#define reg_ICP_RING_PIOFF_RATE0_3_0  AUTOSPEED145.BF.ICP_RING_PIOFF_RATE0_3_0
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE0_7_0  AUTOSPEED145.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE0_7_0

// 0x0248	AUTOSPEED146		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE0_8      : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE0_7_0           : 8;	/* [15:8]     r/w 8'h28*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE0_9_8           : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PIOFF_RATE0_3_0               : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED146_t;
__xdata __at( 0xe248 ) volatile AUTOSPEED146_t AUTOSPEED146;
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE0_8  AUTOSPEED146.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE0_8
#define reg_FBDIV_CAL_RING_PIOFF_RATE0_7_0  AUTOSPEED146.BF.FBDIV_CAL_RING_PIOFF_RATE0_7_0
#define reg_FBDIV_CAL_RING_PIOFF_RATE0_9_8  AUTOSPEED146.BF.FBDIV_CAL_RING_PIOFF_RATE0_9_8
#define reg_INTPI_RING_PIOFF_RATE0_3_0  AUTOSPEED146.BF.INTPI_RING_PIOFF_RATE0_3_0

// 0x024c	AUTOSPEED147		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PIOFF_RATE0_1_0            : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PIOFF_RATE0            : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PIOFF_RATE0_1_0      : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PIOFF_RATE0_1_0      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED147_t;
__xdata __at( 0xe24c ) volatile AUTOSPEED147_t AUTOSPEED147;
#define reg_TX_INTPR_RING_PIOFF_RATE0_1_0  AUTOSPEED147.BF.TX_INTPR_RING_PIOFF_RATE0_1_0
#define reg_PLL_BAND_SEL_RING_PIOFF_RATE0  AUTOSPEED147.BF.PLL_BAND_SEL_RING_PIOFF_RATE0
#define reg_PLL_LPF_C1_SEL_RING_PIOFF_RATE0_1_0  AUTOSPEED147.BF.PLL_LPF_C1_SEL_RING_PIOFF_RATE0_1_0
#define reg_PLL_LPF_C2_SEL_RING_PIOFF_RATE0_1_0  AUTOSPEED147.BF.PLL_LPF_C2_SEL_RING_PIOFF_RATE0_1_0

// 0x0250	AUTOSPEED148		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PIOFF_RATE0_2_0      : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE0_7_0        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE0_9_8        : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_7_0   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED148_t;
__xdata __at( 0xe250 ) volatile AUTOSPEED148_t AUTOSPEED148;
#define reg_PLL_LPF_R1_SEL_RING_PIOFF_RATE0_2_0  AUTOSPEED148.BF.PLL_LPF_R1_SEL_RING_PIOFF_RATE0_2_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE0_7_0  AUTOSPEED148.BF.INIT_TXFOFFS_RING_PIOFF_RATE0_7_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE0_9_8  AUTOSPEED148.BF.INIT_TXFOFFS_RING_PIOFF_RATE0_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_7_0  AUTOSPEED148.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_7_0

// 0x0254	AUTOSPEED149		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_9_8   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PIOFF_RATE0          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_PIOFF_RATE0_3_0     : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_PIOFF_RATE0_7_0               : 8;	/*[31:24]     r/w 8'haf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED149_t;
__xdata __at( 0xe254 ) volatile AUTOSPEED149_t AUTOSPEED149;
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_9_8  AUTOSPEED149.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE0_9_8
#define reg_SSC_ACC_FACTOR_RING_PIOFF_RATE0  AUTOSPEED149.BF.SSC_ACC_FACTOR_RING_PIOFF_RATE0
#define reg_SSC_STEP_125PPM_RING_PIOFF_RATE0_3_0  AUTOSPEED149.BF.SSC_STEP_125PPM_RING_PIOFF_RATE0_3_0
#define reg_SSC_M_RING_PIOFF_RATE0_7_0  AUTOSPEED149.BF.SSC_M_RING_PIOFF_RATE0_7_0

// 0x0258	AUTOSPEED150		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PIOFF_RATE0_12_8              : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED150_t;
__xdata __at( 0xe258 ) volatile AUTOSPEED150_t AUTOSPEED150;
#define reg_SSC_M_RING_PIOFF_RATE0_12_8  AUTOSPEED150.BF.SSC_M_RING_PIOFF_RATE0_12_8

// 0x025c	AUTOSPEED151		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED151_t;
__xdata __at( 0xe25c ) volatile AUTOSPEED151_t AUTOSPEED151;

// 0x0260	AUTOSPEED152		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED152_t;
__xdata __at( 0xe260 ) volatile AUTOSPEED152_t AUTOSPEED152;

// 0x0264	AUTOSPEED153		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PIOFF_RATE1_3_0        : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PIOFF_RATE1_3_0          : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE1_7_0           : 8;	/*[23:16]     r/w 8'h42*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE1_9_8           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED153_t;
__xdata __at( 0xe264 ) volatile AUTOSPEED153_t AUTOSPEED153;
#define reg_PLL_RATE_SEL_RPLL_PIOFF_RATE1_3_0  AUTOSPEED153.BF.PLL_RATE_SEL_RPLL_PIOFF_RATE1_3_0
#define reg_PLL_REFDIV_RING_PIOFF_RATE1_3_0  AUTOSPEED153.BF.PLL_REFDIV_RING_PIOFF_RATE1_3_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE1_7_0  AUTOSPEED153.BF.PLL_FBDIV_RING_PIOFF_RATE1_7_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE1_9_8  AUTOSPEED153.BF.PLL_FBDIV_RING_PIOFF_RATE1_9_8

// 0x0268	AUTOSPEED154		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE1_7_0      : 8;	/*  [7:0]     r/w 8'h42*/
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE1_9_8      : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PIOFF_RATE1_3_0                 : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE1_7_0    : 8;	/*[31:24]     r/w 8'hfd*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED154_t;
__xdata __at( 0xe268 ) volatile AUTOSPEED154_t AUTOSPEED154;
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE1_7_0  AUTOSPEED154.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE1_7_0
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE1_9_8  AUTOSPEED154.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE1_9_8
#define reg_ICP_RING_PIOFF_RATE1_3_0  AUTOSPEED154.BF.ICP_RING_PIOFF_RATE1_3_0
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE1_7_0  AUTOSPEED154.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE1_7_0

// 0x026c	AUTOSPEED155		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE1_8      : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE1_7_0           : 8;	/* [15:8]     r/w 8'h29*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE1_9_8           : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PIOFF_RATE1_3_0               : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED155_t;
__xdata __at( 0xe26c ) volatile AUTOSPEED155_t AUTOSPEED155;
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE1_8  AUTOSPEED155.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE1_8
#define reg_FBDIV_CAL_RING_PIOFF_RATE1_7_0  AUTOSPEED155.BF.FBDIV_CAL_RING_PIOFF_RATE1_7_0
#define reg_FBDIV_CAL_RING_PIOFF_RATE1_9_8  AUTOSPEED155.BF.FBDIV_CAL_RING_PIOFF_RATE1_9_8
#define reg_INTPI_RING_PIOFF_RATE1_3_0  AUTOSPEED155.BF.INTPI_RING_PIOFF_RATE1_3_0

// 0x0270	AUTOSPEED156		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PIOFF_RATE1_1_0            : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PIOFF_RATE1            : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PIOFF_RATE1_1_0      : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PIOFF_RATE1_1_0      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED156_t;
__xdata __at( 0xe270 ) volatile AUTOSPEED156_t AUTOSPEED156;
#define reg_TX_INTPR_RING_PIOFF_RATE1_1_0  AUTOSPEED156.BF.TX_INTPR_RING_PIOFF_RATE1_1_0
#define reg_PLL_BAND_SEL_RING_PIOFF_RATE1  AUTOSPEED156.BF.PLL_BAND_SEL_RING_PIOFF_RATE1
#define reg_PLL_LPF_C1_SEL_RING_PIOFF_RATE1_1_0  AUTOSPEED156.BF.PLL_LPF_C1_SEL_RING_PIOFF_RATE1_1_0
#define reg_PLL_LPF_C2_SEL_RING_PIOFF_RATE1_1_0  AUTOSPEED156.BF.PLL_LPF_C2_SEL_RING_PIOFF_RATE1_1_0

// 0x0274	AUTOSPEED157		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PIOFF_RATE1_2_0      : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE1_7_0        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE1_9_8        : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_7_0   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED157_t;
__xdata __at( 0xe274 ) volatile AUTOSPEED157_t AUTOSPEED157;
#define reg_PLL_LPF_R1_SEL_RING_PIOFF_RATE1_2_0  AUTOSPEED157.BF.PLL_LPF_R1_SEL_RING_PIOFF_RATE1_2_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE1_7_0  AUTOSPEED157.BF.INIT_TXFOFFS_RING_PIOFF_RATE1_7_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE1_9_8  AUTOSPEED157.BF.INIT_TXFOFFS_RING_PIOFF_RATE1_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_7_0  AUTOSPEED157.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_7_0

// 0x0278	AUTOSPEED158		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_9_8   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PIOFF_RATE1          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_PIOFF_RATE1_3_0     : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_PIOFF_RATE1_7_0               : 8;	/*[31:24]     r/w 8'hfb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED158_t;
__xdata __at( 0xe278 ) volatile AUTOSPEED158_t AUTOSPEED158;
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_9_8  AUTOSPEED158.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE1_9_8
#define reg_SSC_ACC_FACTOR_RING_PIOFF_RATE1  AUTOSPEED158.BF.SSC_ACC_FACTOR_RING_PIOFF_RATE1
#define reg_SSC_STEP_125PPM_RING_PIOFF_RATE1_3_0  AUTOSPEED158.BF.SSC_STEP_125PPM_RING_PIOFF_RATE1_3_0
#define reg_SSC_M_RING_PIOFF_RATE1_7_0  AUTOSPEED158.BF.SSC_M_RING_PIOFF_RATE1_7_0

// 0x027c	AUTOSPEED159		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PIOFF_RATE1_12_8              : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED159_t;
__xdata __at( 0xe27c ) volatile AUTOSPEED159_t AUTOSPEED159;
#define reg_SSC_M_RING_PIOFF_RATE1_12_8  AUTOSPEED159.BF.SSC_M_RING_PIOFF_RATE1_12_8

// 0x0280	AUTOSPEED160		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED160_t;
__xdata __at( 0xe280 ) volatile AUTOSPEED160_t AUTOSPEED160;

// 0x0284	AUTOSPEED161		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED161_t;
__xdata __at( 0xe284 ) volatile AUTOSPEED161_t AUTOSPEED161;

// 0x0288	AUTOSPEED162		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PIOFF_RATE2_3_0        : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PIOFF_RATE2_3_0          : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE2_7_0           : 8;	/*[23:16]     r/w 8'h4e*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE2_9_8           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED162_t;
__xdata __at( 0xe288 ) volatile AUTOSPEED162_t AUTOSPEED162;
#define reg_PLL_RATE_SEL_RPLL_PIOFF_RATE2_3_0  AUTOSPEED162.BF.PLL_RATE_SEL_RPLL_PIOFF_RATE2_3_0
#define reg_PLL_REFDIV_RING_PIOFF_RATE2_3_0  AUTOSPEED162.BF.PLL_REFDIV_RING_PIOFF_RATE2_3_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE2_7_0  AUTOSPEED162.BF.PLL_FBDIV_RING_PIOFF_RATE2_7_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE2_9_8  AUTOSPEED162.BF.PLL_FBDIV_RING_PIOFF_RATE2_9_8

// 0x028c	AUTOSPEED163		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE2_7_0      : 8;	/*  [7:0]     r/w 8'h4e*/
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE2_9_8      : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PIOFF_RATE2_3_0                 : 4;	/*[19:16]     r/w 4'he*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE2_7_0    : 8;	/*[31:24]     r/w 8'hfa*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED163_t;
__xdata __at( 0xe28c ) volatile AUTOSPEED163_t AUTOSPEED163;
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE2_7_0  AUTOSPEED163.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE2_7_0
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE2_9_8  AUTOSPEED163.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE2_9_8
#define reg_ICP_RING_PIOFF_RATE2_3_0  AUTOSPEED163.BF.ICP_RING_PIOFF_RATE2_3_0
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE2_7_0  AUTOSPEED163.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE2_7_0

// 0x0290	AUTOSPEED164		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE2_8      : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE2_7_0           : 8;	/* [15:8]     r/w 8'h31*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE2_9_8           : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PIOFF_RATE2_3_0               : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED164_t;
__xdata __at( 0xe290 ) volatile AUTOSPEED164_t AUTOSPEED164;
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE2_8  AUTOSPEED164.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE2_8
#define reg_FBDIV_CAL_RING_PIOFF_RATE2_7_0  AUTOSPEED164.BF.FBDIV_CAL_RING_PIOFF_RATE2_7_0
#define reg_FBDIV_CAL_RING_PIOFF_RATE2_9_8  AUTOSPEED164.BF.FBDIV_CAL_RING_PIOFF_RATE2_9_8
#define reg_INTPI_RING_PIOFF_RATE2_3_0  AUTOSPEED164.BF.INTPI_RING_PIOFF_RATE2_3_0

// 0x0294	AUTOSPEED165		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PIOFF_RATE2_1_0            : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PIOFF_RATE2            : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PIOFF_RATE2_1_0      : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PIOFF_RATE2_1_0      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED165_t;
__xdata __at( 0xe294 ) volatile AUTOSPEED165_t AUTOSPEED165;
#define reg_TX_INTPR_RING_PIOFF_RATE2_1_0  AUTOSPEED165.BF.TX_INTPR_RING_PIOFF_RATE2_1_0
#define reg_PLL_BAND_SEL_RING_PIOFF_RATE2  AUTOSPEED165.BF.PLL_BAND_SEL_RING_PIOFF_RATE2
#define reg_PLL_LPF_C1_SEL_RING_PIOFF_RATE2_1_0  AUTOSPEED165.BF.PLL_LPF_C1_SEL_RING_PIOFF_RATE2_1_0
#define reg_PLL_LPF_C2_SEL_RING_PIOFF_RATE2_1_0  AUTOSPEED165.BF.PLL_LPF_C2_SEL_RING_PIOFF_RATE2_1_0

// 0x0298	AUTOSPEED166		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PIOFF_RATE2_2_0      : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE2_7_0        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE2_9_8        : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE2_7_0   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED166_t;
__xdata __at( 0xe298 ) volatile AUTOSPEED166_t AUTOSPEED166;
#define reg_PLL_LPF_R1_SEL_RING_PIOFF_RATE2_2_0  AUTOSPEED166.BF.PLL_LPF_R1_SEL_RING_PIOFF_RATE2_2_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE2_7_0  AUTOSPEED166.BF.INIT_TXFOFFS_RING_PIOFF_RATE2_7_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE2_9_8  AUTOSPEED166.BF.INIT_TXFOFFS_RING_PIOFF_RATE2_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE2_7_0  AUTOSPEED166.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE2_7_0

// 0x029c	AUTOSPEED167		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE2_9_8   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PIOFF_RATE2          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_PIOFF_RATE2_3_0     : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_PIOFF_RATE2_7_0               : 8;	/*[31:24]     r/w 8'hcd*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED167_t;
__xdata __at( 0xe29c ) volatile AUTOSPEED167_t AUTOSPEED167;
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE2_9_8  AUTOSPEED167.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE2_9_8
#define reg_SSC_ACC_FACTOR_RING_PIOFF_RATE2  AUTOSPEED167.BF.SSC_ACC_FACTOR_RING_PIOFF_RATE2
#define reg_SSC_STEP_125PPM_RING_PIOFF_RATE2_3_0  AUTOSPEED167.BF.SSC_STEP_125PPM_RING_PIOFF_RATE2_3_0
#define reg_SSC_M_RING_PIOFF_RATE2_7_0  AUTOSPEED167.BF.SSC_M_RING_PIOFF_RATE2_7_0

// 0x02a0	AUTOSPEED168		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PIOFF_RATE2_12_8              : 5;	/*  [4:0]     r/w 5'hb*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED168_t;
__xdata __at( 0xe2a0 ) volatile AUTOSPEED168_t AUTOSPEED168;
#define reg_SSC_M_RING_PIOFF_RATE2_12_8  AUTOSPEED168.BF.SSC_M_RING_PIOFF_RATE2_12_8

// 0x02a4	AUTOSPEED169		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED169_t;
__xdata __at( 0xe2a4 ) volatile AUTOSPEED169_t AUTOSPEED169;

// 0x02a8	AUTOSPEED170		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED170_t;
__xdata __at( 0xe2a8 ) volatile AUTOSPEED170_t AUTOSPEED170;

// 0x02ac	AUTOSPEED171		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PIOFF_RATE3_3_0        : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PIOFF_RATE3_3_0          : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE3_7_0           : 8;	/*[23:16]     r/w 8'h50*/
		uint8_t PLL_FBDIV_RING_PIOFF_RATE3_9_8           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED171_t;
__xdata __at( 0xe2ac ) volatile AUTOSPEED171_t AUTOSPEED171;
#define reg_PLL_RATE_SEL_RPLL_PIOFF_RATE3_3_0  AUTOSPEED171.BF.PLL_RATE_SEL_RPLL_PIOFF_RATE3_3_0
#define reg_PLL_REFDIV_RING_PIOFF_RATE3_3_0  AUTOSPEED171.BF.PLL_REFDIV_RING_PIOFF_RATE3_3_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE3_7_0  AUTOSPEED171.BF.PLL_FBDIV_RING_PIOFF_RATE3_7_0
#define reg_PLL_FBDIV_RING_PIOFF_RATE3_9_8  AUTOSPEED171.BF.PLL_FBDIV_RING_PIOFF_RATE3_9_8

// 0x02b0	AUTOSPEED172		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE3_7_0      : 8;	/*  [7:0]     r/w 8'h50*/
		uint8_t PLL_FBDIV_RING_FBCK_PIOFF_RATE3_9_8      : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PIOFF_RATE3_3_0                 : 4;	/*[19:16]     r/w 4'he*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE3_7_0    : 8;	/*[31:24]     r/w 8'hfb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED172_t;
__xdata __at( 0xe2b0 ) volatile AUTOSPEED172_t AUTOSPEED172;
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE3_7_0  AUTOSPEED172.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE3_7_0
#define reg_PLL_FBDIV_RING_FBCK_PIOFF_RATE3_9_8  AUTOSPEED172.BF.PLL_FBDIV_RING_FBCK_PIOFF_RATE3_9_8
#define reg_ICP_RING_PIOFF_RATE3_3_0  AUTOSPEED172.BF.ICP_RING_PIOFF_RATE3_3_0
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE3_7_0  AUTOSPEED172.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE3_7_0

// 0x02b4	AUTOSPEED173		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PIOFF_RATE3_8      : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE3_7_0           : 8;	/* [15:8]     r/w 8'h32*/
		uint8_t FBDIV_CAL_RING_PIOFF_RATE3_9_8           : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PIOFF_RATE3_3_0               : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED173_t;
__xdata __at( 0xe2b4 ) volatile AUTOSPEED173_t AUTOSPEED173;
#define reg_PLL_SPEED_THRESH_RING_PIOFF_RATE3_8  AUTOSPEED173.BF.PLL_SPEED_THRESH_RING_PIOFF_RATE3_8
#define reg_FBDIV_CAL_RING_PIOFF_RATE3_7_0  AUTOSPEED173.BF.FBDIV_CAL_RING_PIOFF_RATE3_7_0
#define reg_FBDIV_CAL_RING_PIOFF_RATE3_9_8  AUTOSPEED173.BF.FBDIV_CAL_RING_PIOFF_RATE3_9_8
#define reg_INTPI_RING_PIOFF_RATE3_3_0  AUTOSPEED173.BF.INTPI_RING_PIOFF_RATE3_3_0

// 0x02b8	AUTOSPEED174		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PIOFF_RATE3_1_0            : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PIOFF_RATE3            : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PIOFF_RATE3_1_0      : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PIOFF_RATE3_1_0      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED174_t;
__xdata __at( 0xe2b8 ) volatile AUTOSPEED174_t AUTOSPEED174;
#define reg_TX_INTPR_RING_PIOFF_RATE3_1_0  AUTOSPEED174.BF.TX_INTPR_RING_PIOFF_RATE3_1_0
#define reg_PLL_BAND_SEL_RING_PIOFF_RATE3  AUTOSPEED174.BF.PLL_BAND_SEL_RING_PIOFF_RATE3
#define reg_PLL_LPF_C1_SEL_RING_PIOFF_RATE3_1_0  AUTOSPEED174.BF.PLL_LPF_C1_SEL_RING_PIOFF_RATE3_1_0
#define reg_PLL_LPF_C2_SEL_RING_PIOFF_RATE3_1_0  AUTOSPEED174.BF.PLL_LPF_C2_SEL_RING_PIOFF_RATE3_1_0

// 0x02bc	AUTOSPEED175		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PIOFF_RATE3_2_0      : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE3_7_0        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PIOFF_RATE3_9_8        : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE3_7_0   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED175_t;
__xdata __at( 0xe2bc ) volatile AUTOSPEED175_t AUTOSPEED175;
#define reg_PLL_LPF_R1_SEL_RING_PIOFF_RATE3_2_0  AUTOSPEED175.BF.PLL_LPF_R1_SEL_RING_PIOFF_RATE3_2_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE3_7_0  AUTOSPEED175.BF.INIT_TXFOFFS_RING_PIOFF_RATE3_7_0
#define reg_INIT_TXFOFFS_RING_PIOFF_RATE3_9_8  AUTOSPEED175.BF.INIT_TXFOFFS_RING_PIOFF_RATE3_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE3_7_0  AUTOSPEED175.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE3_7_0

// 0x02c0	AUTOSPEED176		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PIOFF_RATE3_9_8   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PIOFF_RATE3          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_PIOFF_RATE3_3_0     : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_PIOFF_RATE3_7_0               : 8;	/*[31:24]     r/w 8'h1b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED176_t;
__xdata __at( 0xe2c0 ) volatile AUTOSPEED176_t AUTOSPEED176;
#define reg_INIT_TXFOFFS_RING_FBCK_PIOFF_RATE3_9_8  AUTOSPEED176.BF.INIT_TXFOFFS_RING_FBCK_PIOFF_RATE3_9_8
#define reg_SSC_ACC_FACTOR_RING_PIOFF_RATE3  AUTOSPEED176.BF.SSC_ACC_FACTOR_RING_PIOFF_RATE3
#define reg_SSC_STEP_125PPM_RING_PIOFF_RATE3_3_0  AUTOSPEED176.BF.SSC_STEP_125PPM_RING_PIOFF_RATE3_3_0
#define reg_SSC_M_RING_PIOFF_RATE3_7_0  AUTOSPEED176.BF.SSC_M_RING_PIOFF_RATE3_7_0

// 0x02c4	AUTOSPEED177		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PIOFF_RATE3_12_8              : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED177_t;
__xdata __at( 0xe2c4 ) volatile AUTOSPEED177_t AUTOSPEED177;
#define reg_SSC_M_RING_PIOFF_RATE3_12_8  AUTOSPEED177.BF.SSC_M_RING_PIOFF_RATE3_12_8

// 0x02c8	AUTOSPEED178		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED178_t;
__xdata __at( 0xe2c8 ) volatile AUTOSPEED178_t AUTOSPEED178;

// 0x02cc	AUTOSPEED179		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED179_t;
__xdata __at( 0xe2cc ) volatile AUTOSPEED179_t AUTOSPEED179;

// 0x02d0	AUTOSPEED180		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PION_RATE0_3_0         : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PION_RATE0_3_0           : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PION_RATE0_7_0            : 8;	/*[23:16]     r/w 8'h10*/
		uint8_t PLL_FBDIV_RING_PION_RATE0_9_8            : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED180_t;
__xdata __at( 0xe2d0 ) volatile AUTOSPEED180_t AUTOSPEED180;
#define reg_PLL_RATE_SEL_RPLL_PION_RATE0_3_0  AUTOSPEED180.BF.PLL_RATE_SEL_RPLL_PION_RATE0_3_0
#define reg_PLL_REFDIV_RING_PION_RATE0_3_0  AUTOSPEED180.BF.PLL_REFDIV_RING_PION_RATE0_3_0
#define reg_PLL_FBDIV_RING_PION_RATE0_7_0  AUTOSPEED180.BF.PLL_FBDIV_RING_PION_RATE0_7_0
#define reg_PLL_FBDIV_RING_PION_RATE0_9_8  AUTOSPEED180.BF.PLL_FBDIV_RING_PION_RATE0_9_8

// 0x02d4	AUTOSPEED181		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE0_7_0       : 8;	/*  [7:0]     r/w 8'h10*/
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE0_9_8       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PION_RATE0_3_0                  : 4;	/*[19:16]     r/w 4'hd*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE0_7_0     : 8;	/*[31:24]     r/w 8'hfb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED181_t;
__xdata __at( 0xe2d4 ) volatile AUTOSPEED181_t AUTOSPEED181;
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE0_7_0  AUTOSPEED181.BF.PLL_FBDIV_RING_FBCK_PION_RATE0_7_0
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE0_9_8  AUTOSPEED181.BF.PLL_FBDIV_RING_FBCK_PION_RATE0_9_8
#define reg_ICP_RING_PION_RATE0_3_0  AUTOSPEED181.BF.ICP_RING_PION_RATE0_3_0
#define reg_PLL_SPEED_THRESH_RING_PION_RATE0_7_0  AUTOSPEED181.BF.PLL_SPEED_THRESH_RING_PION_RATE0_7_0

// 0x02d8	AUTOSPEED182		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE0_8       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PION_RATE0_7_0            : 8;	/* [15:8]     r/w 8'h28*/
		uint8_t FBDIV_CAL_RING_PION_RATE0_9_8            : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PION_RATE0_3_0                : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED182_t;
__xdata __at( 0xe2d8 ) volatile AUTOSPEED182_t AUTOSPEED182;
#define reg_PLL_SPEED_THRESH_RING_PION_RATE0_8  AUTOSPEED182.BF.PLL_SPEED_THRESH_RING_PION_RATE0_8
#define reg_FBDIV_CAL_RING_PION_RATE0_7_0  AUTOSPEED182.BF.FBDIV_CAL_RING_PION_RATE0_7_0
#define reg_FBDIV_CAL_RING_PION_RATE0_9_8  AUTOSPEED182.BF.FBDIV_CAL_RING_PION_RATE0_9_8
#define reg_INTPI_RING_PION_RATE0_3_0  AUTOSPEED182.BF.INTPI_RING_PION_RATE0_3_0

// 0x02dc	AUTOSPEED183		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PION_RATE0_1_0             : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PION_RATE0             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PION_RATE0_1_0       : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PION_RATE0_1_0       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED183_t;
__xdata __at( 0xe2dc ) volatile AUTOSPEED183_t AUTOSPEED183;
#define reg_TX_INTPR_RING_PION_RATE0_1_0  AUTOSPEED183.BF.TX_INTPR_RING_PION_RATE0_1_0
#define reg_PLL_BAND_SEL_RING_PION_RATE0  AUTOSPEED183.BF.PLL_BAND_SEL_RING_PION_RATE0
#define reg_PLL_LPF_C1_SEL_RING_PION_RATE0_1_0  AUTOSPEED183.BF.PLL_LPF_C1_SEL_RING_PION_RATE0_1_0
#define reg_PLL_LPF_C2_SEL_RING_PION_RATE0_1_0  AUTOSPEED183.BF.PLL_LPF_C2_SEL_RING_PION_RATE0_1_0

// 0x02e0	AUTOSPEED184		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PION_RATE0_2_0       : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE0_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE0_9_8         : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE0_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED184_t;
__xdata __at( 0xe2e0 ) volatile AUTOSPEED184_t AUTOSPEED184;
#define reg_PLL_LPF_R1_SEL_RING_PION_RATE0_2_0  AUTOSPEED184.BF.PLL_LPF_R1_SEL_RING_PION_RATE0_2_0
#define reg_INIT_TXFOFFS_RING_PION_RATE0_7_0  AUTOSPEED184.BF.INIT_TXFOFFS_RING_PION_RATE0_7_0
#define reg_INIT_TXFOFFS_RING_PION_RATE0_9_8  AUTOSPEED184.BF.INIT_TXFOFFS_RING_PION_RATE0_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE0_7_0  AUTOSPEED184.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE0_7_0

// 0x02e4	AUTOSPEED185		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE0_9_8    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PION_RATE0           : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_PION_RATE0_3_0      : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_PION_RATE0_7_0                : 8;	/*[31:24]     r/w 8'haf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED185_t;
__xdata __at( 0xe2e4 ) volatile AUTOSPEED185_t AUTOSPEED185;
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE0_9_8  AUTOSPEED185.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE0_9_8
#define reg_SSC_ACC_FACTOR_RING_PION_RATE0  AUTOSPEED185.BF.SSC_ACC_FACTOR_RING_PION_RATE0
#define reg_SSC_STEP_125PPM_RING_PION_RATE0_3_0  AUTOSPEED185.BF.SSC_STEP_125PPM_RING_PION_RATE0_3_0
#define reg_SSC_M_RING_PION_RATE0_7_0  AUTOSPEED185.BF.SSC_M_RING_PION_RATE0_7_0

// 0x02e8	AUTOSPEED186		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PION_RATE0_12_8               : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED186_t;
__xdata __at( 0xe2e8 ) volatile AUTOSPEED186_t AUTOSPEED186;
#define reg_SSC_M_RING_PION_RATE0_12_8  AUTOSPEED186.BF.SSC_M_RING_PION_RATE0_12_8

// 0x02ec	AUTOSPEED187		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED187_t;
__xdata __at( 0xe2ec ) volatile AUTOSPEED187_t AUTOSPEED187;

// 0x02f0	AUTOSPEED188		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED188_t;
__xdata __at( 0xe2f0 ) volatile AUTOSPEED188_t AUTOSPEED188;

// 0x02f4	AUTOSPEED189		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PION_RATE1_3_0         : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PION_RATE1_3_0           : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PION_RATE1_7_0            : 8;	/*[23:16]     r/w 8'h21*/
		uint8_t PLL_FBDIV_RING_PION_RATE1_9_8            : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED189_t;
__xdata __at( 0xe2f4 ) volatile AUTOSPEED189_t AUTOSPEED189;
#define reg_PLL_RATE_SEL_RPLL_PION_RATE1_3_0  AUTOSPEED189.BF.PLL_RATE_SEL_RPLL_PION_RATE1_3_0
#define reg_PLL_REFDIV_RING_PION_RATE1_3_0  AUTOSPEED189.BF.PLL_REFDIV_RING_PION_RATE1_3_0
#define reg_PLL_FBDIV_RING_PION_RATE1_7_0  AUTOSPEED189.BF.PLL_FBDIV_RING_PION_RATE1_7_0
#define reg_PLL_FBDIV_RING_PION_RATE1_9_8  AUTOSPEED189.BF.PLL_FBDIV_RING_PION_RATE1_9_8

// 0x02f8	AUTOSPEED190		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE1_7_0       : 8;	/*  [7:0]     r/w 8'h21*/
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE1_9_8       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PION_RATE1_3_0                  : 4;	/*[19:16]     r/w 4'he*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE1_7_0     : 8;	/*[31:24]     r/w 8'hfd*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED190_t;
__xdata __at( 0xe2f8 ) volatile AUTOSPEED190_t AUTOSPEED190;
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE1_7_0  AUTOSPEED190.BF.PLL_FBDIV_RING_FBCK_PION_RATE1_7_0
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE1_9_8  AUTOSPEED190.BF.PLL_FBDIV_RING_FBCK_PION_RATE1_9_8
#define reg_ICP_RING_PION_RATE1_3_0  AUTOSPEED190.BF.ICP_RING_PION_RATE1_3_0
#define reg_PLL_SPEED_THRESH_RING_PION_RATE1_7_0  AUTOSPEED190.BF.PLL_SPEED_THRESH_RING_PION_RATE1_7_0

// 0x02fc	AUTOSPEED191		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE1_8       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PION_RATE1_7_0            : 8;	/* [15:8]     r/w 8'h29*/
		uint8_t FBDIV_CAL_RING_PION_RATE1_9_8            : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PION_RATE1_3_0                : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED191_t;
__xdata __at( 0xe2fc ) volatile AUTOSPEED191_t AUTOSPEED191;
#define reg_PLL_SPEED_THRESH_RING_PION_RATE1_8  AUTOSPEED191.BF.PLL_SPEED_THRESH_RING_PION_RATE1_8
#define reg_FBDIV_CAL_RING_PION_RATE1_7_0  AUTOSPEED191.BF.FBDIV_CAL_RING_PION_RATE1_7_0
#define reg_FBDIV_CAL_RING_PION_RATE1_9_8  AUTOSPEED191.BF.FBDIV_CAL_RING_PION_RATE1_9_8
#define reg_INTPI_RING_PION_RATE1_3_0  AUTOSPEED191.BF.INTPI_RING_PION_RATE1_3_0

// 0x0300	AUTOSPEED192		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PION_RATE1_1_0             : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PION_RATE1             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PION_RATE1_1_0       : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PION_RATE1_1_0       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED192_t;
__xdata __at( 0xe300 ) volatile AUTOSPEED192_t AUTOSPEED192;
#define reg_TX_INTPR_RING_PION_RATE1_1_0  AUTOSPEED192.BF.TX_INTPR_RING_PION_RATE1_1_0
#define reg_PLL_BAND_SEL_RING_PION_RATE1  AUTOSPEED192.BF.PLL_BAND_SEL_RING_PION_RATE1
#define reg_PLL_LPF_C1_SEL_RING_PION_RATE1_1_0  AUTOSPEED192.BF.PLL_LPF_C1_SEL_RING_PION_RATE1_1_0
#define reg_PLL_LPF_C2_SEL_RING_PION_RATE1_1_0  AUTOSPEED192.BF.PLL_LPF_C2_SEL_RING_PION_RATE1_1_0

// 0x0304	AUTOSPEED193		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PION_RATE1_2_0       : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE1_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE1_9_8         : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE1_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED193_t;
__xdata __at( 0xe304 ) volatile AUTOSPEED193_t AUTOSPEED193;
#define reg_PLL_LPF_R1_SEL_RING_PION_RATE1_2_0  AUTOSPEED193.BF.PLL_LPF_R1_SEL_RING_PION_RATE1_2_0
#define reg_INIT_TXFOFFS_RING_PION_RATE1_7_0  AUTOSPEED193.BF.INIT_TXFOFFS_RING_PION_RATE1_7_0
#define reg_INIT_TXFOFFS_RING_PION_RATE1_9_8  AUTOSPEED193.BF.INIT_TXFOFFS_RING_PION_RATE1_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE1_7_0  AUTOSPEED193.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE1_7_0

// 0x0308	AUTOSPEED194		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE1_9_8    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PION_RATE1           : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_PION_RATE1_3_0      : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_PION_RATE1_7_0                : 8;	/*[31:24]     r/w 8'hfb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED194_t;
__xdata __at( 0xe308 ) volatile AUTOSPEED194_t AUTOSPEED194;
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE1_9_8  AUTOSPEED194.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE1_9_8
#define reg_SSC_ACC_FACTOR_RING_PION_RATE1  AUTOSPEED194.BF.SSC_ACC_FACTOR_RING_PION_RATE1
#define reg_SSC_STEP_125PPM_RING_PION_RATE1_3_0  AUTOSPEED194.BF.SSC_STEP_125PPM_RING_PION_RATE1_3_0
#define reg_SSC_M_RING_PION_RATE1_7_0  AUTOSPEED194.BF.SSC_M_RING_PION_RATE1_7_0

// 0x030c	AUTOSPEED195		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PION_RATE1_12_8               : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED195_t;
__xdata __at( 0xe30c ) volatile AUTOSPEED195_t AUTOSPEED195;
#define reg_SSC_M_RING_PION_RATE1_12_8  AUTOSPEED195.BF.SSC_M_RING_PION_RATE1_12_8

// 0x0310	AUTOSPEED196		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED196_t;
__xdata __at( 0xe310 ) volatile AUTOSPEED196_t AUTOSPEED196;

// 0x0314	AUTOSPEED197		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED197_t;
__xdata __at( 0xe314 ) volatile AUTOSPEED197_t AUTOSPEED197;

// 0x0318	AUTOSPEED198		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PION_RATE2_3_0         : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PION_RATE2_3_0           : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PION_RATE2_7_0            : 8;	/*[23:16]     r/w 8'h27*/
		uint8_t PLL_FBDIV_RING_PION_RATE2_9_8            : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED198_t;
__xdata __at( 0xe318 ) volatile AUTOSPEED198_t AUTOSPEED198;
#define reg_PLL_RATE_SEL_RPLL_PION_RATE2_3_0  AUTOSPEED198.BF.PLL_RATE_SEL_RPLL_PION_RATE2_3_0
#define reg_PLL_REFDIV_RING_PION_RATE2_3_0  AUTOSPEED198.BF.PLL_REFDIV_RING_PION_RATE2_3_0
#define reg_PLL_FBDIV_RING_PION_RATE2_7_0  AUTOSPEED198.BF.PLL_FBDIV_RING_PION_RATE2_7_0
#define reg_PLL_FBDIV_RING_PION_RATE2_9_8  AUTOSPEED198.BF.PLL_FBDIV_RING_PION_RATE2_9_8

// 0x031c	AUTOSPEED199		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE2_7_0       : 8;	/*  [7:0]     r/w 8'h27*/
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE2_9_8       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PION_RATE2_3_0                  : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE2_7_0     : 8;	/*[31:24]     r/w 8'hfa*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED199_t;
__xdata __at( 0xe31c ) volatile AUTOSPEED199_t AUTOSPEED199;
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE2_7_0  AUTOSPEED199.BF.PLL_FBDIV_RING_FBCK_PION_RATE2_7_0
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE2_9_8  AUTOSPEED199.BF.PLL_FBDIV_RING_FBCK_PION_RATE2_9_8
#define reg_ICP_RING_PION_RATE2_3_0  AUTOSPEED199.BF.ICP_RING_PION_RATE2_3_0
#define reg_PLL_SPEED_THRESH_RING_PION_RATE2_7_0  AUTOSPEED199.BF.PLL_SPEED_THRESH_RING_PION_RATE2_7_0

// 0x0320	AUTOSPEED200		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE2_8       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PION_RATE2_7_0            : 8;	/* [15:8]     r/w 8'h31*/
		uint8_t FBDIV_CAL_RING_PION_RATE2_9_8            : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PION_RATE2_3_0                : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED200_t;
__xdata __at( 0xe320 ) volatile AUTOSPEED200_t AUTOSPEED200;
#define reg_PLL_SPEED_THRESH_RING_PION_RATE2_8  AUTOSPEED200.BF.PLL_SPEED_THRESH_RING_PION_RATE2_8
#define reg_FBDIV_CAL_RING_PION_RATE2_7_0  AUTOSPEED200.BF.FBDIV_CAL_RING_PION_RATE2_7_0
#define reg_FBDIV_CAL_RING_PION_RATE2_9_8  AUTOSPEED200.BF.FBDIV_CAL_RING_PION_RATE2_9_8
#define reg_INTPI_RING_PION_RATE2_3_0  AUTOSPEED200.BF.INTPI_RING_PION_RATE2_3_0

// 0x0324	AUTOSPEED201		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PION_RATE2_1_0             : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PION_RATE2             : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PION_RATE2_1_0       : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PION_RATE2_1_0       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED201_t;
__xdata __at( 0xe324 ) volatile AUTOSPEED201_t AUTOSPEED201;
#define reg_TX_INTPR_RING_PION_RATE2_1_0  AUTOSPEED201.BF.TX_INTPR_RING_PION_RATE2_1_0
#define reg_PLL_BAND_SEL_RING_PION_RATE2  AUTOSPEED201.BF.PLL_BAND_SEL_RING_PION_RATE2
#define reg_PLL_LPF_C1_SEL_RING_PION_RATE2_1_0  AUTOSPEED201.BF.PLL_LPF_C1_SEL_RING_PION_RATE2_1_0
#define reg_PLL_LPF_C2_SEL_RING_PION_RATE2_1_0  AUTOSPEED201.BF.PLL_LPF_C2_SEL_RING_PION_RATE2_1_0

// 0x0328	AUTOSPEED202		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PION_RATE2_2_0       : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE2_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE2_9_8         : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE2_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED202_t;
__xdata __at( 0xe328 ) volatile AUTOSPEED202_t AUTOSPEED202;
#define reg_PLL_LPF_R1_SEL_RING_PION_RATE2_2_0  AUTOSPEED202.BF.PLL_LPF_R1_SEL_RING_PION_RATE2_2_0
#define reg_INIT_TXFOFFS_RING_PION_RATE2_7_0  AUTOSPEED202.BF.INIT_TXFOFFS_RING_PION_RATE2_7_0
#define reg_INIT_TXFOFFS_RING_PION_RATE2_9_8  AUTOSPEED202.BF.INIT_TXFOFFS_RING_PION_RATE2_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE2_7_0  AUTOSPEED202.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE2_7_0

// 0x032c	AUTOSPEED203		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE2_9_8    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PION_RATE2           : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_PION_RATE2_3_0      : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_PION_RATE2_7_0                : 8;	/*[31:24]     r/w 8'hcd*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED203_t;
__xdata __at( 0xe32c ) volatile AUTOSPEED203_t AUTOSPEED203;
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE2_9_8  AUTOSPEED203.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE2_9_8
#define reg_SSC_ACC_FACTOR_RING_PION_RATE2  AUTOSPEED203.BF.SSC_ACC_FACTOR_RING_PION_RATE2
#define reg_SSC_STEP_125PPM_RING_PION_RATE2_3_0  AUTOSPEED203.BF.SSC_STEP_125PPM_RING_PION_RATE2_3_0
#define reg_SSC_M_RING_PION_RATE2_7_0  AUTOSPEED203.BF.SSC_M_RING_PION_RATE2_7_0

// 0x0330	AUTOSPEED204		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PION_RATE2_12_8               : 5;	/*  [4:0]     r/w 5'hb*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED204_t;
__xdata __at( 0xe330 ) volatile AUTOSPEED204_t AUTOSPEED204;
#define reg_SSC_M_RING_PION_RATE2_12_8  AUTOSPEED204.BF.SSC_M_RING_PION_RATE2_12_8

// 0x0334	AUTOSPEED205		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED205_t;
__xdata __at( 0xe334 ) volatile AUTOSPEED205_t AUTOSPEED205;

// 0x0338	AUTOSPEED206		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED206_t;
__xdata __at( 0xe338 ) volatile AUTOSPEED206_t AUTOSPEED206;

// 0x033c	AUTOSPEED207		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RPLL_PION_RATE3_3_0         : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_PION_RATE3_3_0           : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_PION_RATE3_7_0            : 8;	/*[23:16]     r/w 8'h14*/
		uint8_t PLL_FBDIV_RING_PION_RATE3_9_8            : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED207_t;
__xdata __at( 0xe33c ) volatile AUTOSPEED207_t AUTOSPEED207;
#define reg_PLL_RATE_SEL_RPLL_PION_RATE3_3_0  AUTOSPEED207.BF.PLL_RATE_SEL_RPLL_PION_RATE3_3_0
#define reg_PLL_REFDIV_RING_PION_RATE3_3_0  AUTOSPEED207.BF.PLL_REFDIV_RING_PION_RATE3_3_0
#define reg_PLL_FBDIV_RING_PION_RATE3_7_0  AUTOSPEED207.BF.PLL_FBDIV_RING_PION_RATE3_7_0
#define reg_PLL_FBDIV_RING_PION_RATE3_9_8  AUTOSPEED207.BF.PLL_FBDIV_RING_PION_RATE3_9_8

// 0x0340	AUTOSPEED208		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE3_7_0       : 8;	/*  [7:0]     r/w 8'h14*/
		uint8_t PLL_FBDIV_RING_FBCK_PION_RATE3_9_8       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_PION_RATE3_3_0                  : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE3_7_0     : 8;	/*[31:24]     r/w 8'hfb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED208_t;
__xdata __at( 0xe340 ) volatile AUTOSPEED208_t AUTOSPEED208;
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE3_7_0  AUTOSPEED208.BF.PLL_FBDIV_RING_FBCK_PION_RATE3_7_0
#define reg_PLL_FBDIV_RING_FBCK_PION_RATE3_9_8  AUTOSPEED208.BF.PLL_FBDIV_RING_FBCK_PION_RATE3_9_8
#define reg_ICP_RING_PION_RATE3_3_0  AUTOSPEED208.BF.ICP_RING_PION_RATE3_3_0
#define reg_PLL_SPEED_THRESH_RING_PION_RATE3_7_0  AUTOSPEED208.BF.PLL_SPEED_THRESH_RING_PION_RATE3_7_0

// 0x0344	AUTOSPEED209		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_PION_RATE3_8       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_PION_RATE3_7_0            : 8;	/* [15:8]     r/w 8'h32*/
		uint8_t FBDIV_CAL_RING_PION_RATE3_9_8            : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_PION_RATE3_3_0                : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED209_t;
__xdata __at( 0xe344 ) volatile AUTOSPEED209_t AUTOSPEED209;
#define reg_PLL_SPEED_THRESH_RING_PION_RATE3_8  AUTOSPEED209.BF.PLL_SPEED_THRESH_RING_PION_RATE3_8
#define reg_FBDIV_CAL_RING_PION_RATE3_7_0  AUTOSPEED209.BF.FBDIV_CAL_RING_PION_RATE3_7_0
#define reg_FBDIV_CAL_RING_PION_RATE3_9_8  AUTOSPEED209.BF.FBDIV_CAL_RING_PION_RATE3_9_8
#define reg_INTPI_RING_PION_RATE3_3_0  AUTOSPEED209.BF.INTPI_RING_PION_RATE3_3_0

// 0x0348	AUTOSPEED210		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_PION_RATE3_1_0             : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_PION_RATE3             : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_PION_RATE3_1_0       : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_PION_RATE3_1_0       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED210_t;
__xdata __at( 0xe348 ) volatile AUTOSPEED210_t AUTOSPEED210;
#define reg_TX_INTPR_RING_PION_RATE3_1_0  AUTOSPEED210.BF.TX_INTPR_RING_PION_RATE3_1_0
#define reg_PLL_BAND_SEL_RING_PION_RATE3  AUTOSPEED210.BF.PLL_BAND_SEL_RING_PION_RATE3
#define reg_PLL_LPF_C1_SEL_RING_PION_RATE3_1_0  AUTOSPEED210.BF.PLL_LPF_C1_SEL_RING_PION_RATE3_1_0
#define reg_PLL_LPF_C2_SEL_RING_PION_RATE3_1_0  AUTOSPEED210.BF.PLL_LPF_C2_SEL_RING_PION_RATE3_1_0

// 0x034c	AUTOSPEED211		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_PION_RATE3_2_0       : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE3_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_PION_RATE3_9_8         : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE3_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED211_t;
__xdata __at( 0xe34c ) volatile AUTOSPEED211_t AUTOSPEED211;
#define reg_PLL_LPF_R1_SEL_RING_PION_RATE3_2_0  AUTOSPEED211.BF.PLL_LPF_R1_SEL_RING_PION_RATE3_2_0
#define reg_INIT_TXFOFFS_RING_PION_RATE3_7_0  AUTOSPEED211.BF.INIT_TXFOFFS_RING_PION_RATE3_7_0
#define reg_INIT_TXFOFFS_RING_PION_RATE3_9_8  AUTOSPEED211.BF.INIT_TXFOFFS_RING_PION_RATE3_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE3_7_0  AUTOSPEED211.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE3_7_0

// 0x0350	AUTOSPEED212		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_PION_RATE3_9_8    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_PION_RATE3           : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_PION_RATE3_3_0      : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_PION_RATE3_7_0                : 8;	/*[31:24]     r/w 8'h1b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED212_t;
__xdata __at( 0xe350 ) volatile AUTOSPEED212_t AUTOSPEED212;
#define reg_INIT_TXFOFFS_RING_FBCK_PION_RATE3_9_8  AUTOSPEED212.BF.INIT_TXFOFFS_RING_FBCK_PION_RATE3_9_8
#define reg_SSC_ACC_FACTOR_RING_PION_RATE3  AUTOSPEED212.BF.SSC_ACC_FACTOR_RING_PION_RATE3
#define reg_SSC_STEP_125PPM_RING_PION_RATE3_3_0  AUTOSPEED212.BF.SSC_STEP_125PPM_RING_PION_RATE3_3_0
#define reg_SSC_M_RING_PION_RATE3_7_0  AUTOSPEED212.BF.SSC_M_RING_PION_RATE3_7_0

// 0x0354	AUTOSPEED213		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_PION_RATE3_12_8               : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED213_t;
__xdata __at( 0xe354 ) volatile AUTOSPEED213_t AUTOSPEED213;
#define reg_SSC_M_RING_PION_RATE3_12_8  AUTOSPEED213.BF.SSC_M_RING_PION_RATE3_12_8

// 0x0358	AUTOSPEED214		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED214_t;
__xdata __at( 0xe358 ) volatile AUTOSPEED214_t AUTOSPEED214;

// 0x035c	AUTOSPEED215		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED215_t;
__xdata __at( 0xe35c ) volatile AUTOSPEED215_t AUTOSPEED215;

// 0x0360	AUTOSPEED216		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PIOFF_RATE0_3_0        : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PIOFF_RATE0_3_0     : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE0_7_0      : 8;	/*[23:16]     r/w 8'h28*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE0_9_8      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED216_t;
__xdata __at( 0xe360 ) volatile AUTOSPEED216_t AUTOSPEED216;
#define reg_PLL_RATE_SEL_250M_PIOFF_RATE0_3_0  AUTOSPEED216.BF.PLL_RATE_SEL_250M_PIOFF_RATE0_3_0
#define reg_PLL_REFDIV_RING_250M_PIOFF_RATE0_3_0  AUTOSPEED216.BF.PLL_REFDIV_RING_250M_PIOFF_RATE0_3_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED216.BF.PLL_FBDIV_RING_250M_PIOFF_RATE0_7_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE0_9_8  AUTOSPEED216.BF.PLL_FBDIV_RING_250M_PIOFF_RATE0_9_8

// 0x0364	AUTOSPEED217		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_7_0 : 8;	/*  [7:0]     r/w 8'h28*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_9_8 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PIOFF_RATE0_3_0            : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_7_0 : 8;	/*[31:24]     r/w 8'hfa*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED217_t;
__xdata __at( 0xe364 ) volatile AUTOSPEED217_t AUTOSPEED217;
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_7_0  AUTOSPEED217.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_9_8  AUTOSPEED217.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE0_9_8
#define reg_ICP_RING_250M_PIOFF_RATE0_3_0  AUTOSPEED217.BF.ICP_RING_250M_PIOFF_RATE0_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED217.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_7_0

// 0x0368	AUTOSPEED218		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_8 : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE0_7_0      : 8;	/* [15:8]     r/w 8'h28*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE0_9_8      : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PIOFF_RATE0_3_0          : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED218_t;
__xdata __at( 0xe368 ) volatile AUTOSPEED218_t AUTOSPEED218;
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_8  AUTOSPEED218.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE0_8
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED218.BF.FBDIV_CAL_RING_250M_PIOFF_RATE0_7_0
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE0_9_8  AUTOSPEED218.BF.FBDIV_CAL_RING_250M_PIOFF_RATE0_9_8
#define reg_INTPI_RING_250M_PIOFF_RATE0_3_0  AUTOSPEED218.BF.INTPI_RING_250M_PIOFF_RATE0_3_0

// 0x036c	AUTOSPEED219		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PIOFF_RATE0_1_0       : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PIOFF_RATE0       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE0_1_0 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE0_1_0 : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED219_t;
__xdata __at( 0xe36c ) volatile AUTOSPEED219_t AUTOSPEED219;
#define reg_TX_INTPR_RING_250M_PIOFF_RATE0_1_0  AUTOSPEED219.BF.TX_INTPR_RING_250M_PIOFF_RATE0_1_0
#define reg_PLL_BAND_SEL_RING_250M_PIOFF_RATE0  AUTOSPEED219.BF.PLL_BAND_SEL_RING_250M_PIOFF_RATE0
#define reg_PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE0_1_0  AUTOSPEED219.BF.PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE0_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE0_1_0  AUTOSPEED219.BF.PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE0_1_0

// 0x0370	AUTOSPEED220		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE0_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE0_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE0_9_8   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED220_t;
__xdata __at( 0xe370 ) volatile AUTOSPEED220_t AUTOSPEED220;
#define reg_PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE0_2_0  AUTOSPEED220.BF.PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE0_2_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED220.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE0_7_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE0_9_8  AUTOSPEED220.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE0_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_7_0  AUTOSPEED220.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_7_0

// 0x0374	AUTOSPEED221		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PIOFF_RATE0     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_250M_PIOFF_RATE0_3_0 : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_250M_PIOFF_RATE0_7_0          : 8;	/*[31:24]     r/w 8'haf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED221_t;
__xdata __at( 0xe374 ) volatile AUTOSPEED221_t AUTOSPEED221;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_9_8  AUTOSPEED221.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE0_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PIOFF_RATE0  AUTOSPEED221.BF.SSC_ACC_FACTOR_RING_250M_PIOFF_RATE0
#define reg_SSC_STEP_125PPM_RING_250M_PIOFF_RATE0_3_0  AUTOSPEED221.BF.SSC_STEP_125PPM_RING_250M_PIOFF_RATE0_3_0
#define reg_SSC_M_RING_250M_PIOFF_RATE0_7_0  AUTOSPEED221.BF.SSC_M_RING_250M_PIOFF_RATE0_7_0

// 0x0378	AUTOSPEED222		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PIOFF_RATE0_12_8         : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED222_t;
__xdata __at( 0xe378 ) volatile AUTOSPEED222_t AUTOSPEED222;
#define reg_SSC_M_RING_250M_PIOFF_RATE0_12_8  AUTOSPEED222.BF.SSC_M_RING_250M_PIOFF_RATE0_12_8

// 0x037c	AUTOSPEED223		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED223_t;
__xdata __at( 0xe37c ) volatile AUTOSPEED223_t AUTOSPEED223;

// 0x0380	AUTOSPEED224		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED224_t;
__xdata __at( 0xe380 ) volatile AUTOSPEED224_t AUTOSPEED224;

// 0x0384	AUTOSPEED225		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PIOFF_RATE1_3_0        : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PIOFF_RATE1_3_0     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE1_7_0      : 8;	/*[23:16]     r/w 8'ha5*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE1_9_8      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED225_t;
__xdata __at( 0xe384 ) volatile AUTOSPEED225_t AUTOSPEED225;
#define reg_PLL_RATE_SEL_250M_PIOFF_RATE1_3_0  AUTOSPEED225.BF.PLL_RATE_SEL_250M_PIOFF_RATE1_3_0
#define reg_PLL_REFDIV_RING_250M_PIOFF_RATE1_3_0  AUTOSPEED225.BF.PLL_REFDIV_RING_250M_PIOFF_RATE1_3_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED225.BF.PLL_FBDIV_RING_250M_PIOFF_RATE1_7_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE1_9_8  AUTOSPEED225.BF.PLL_FBDIV_RING_250M_PIOFF_RATE1_9_8

// 0x0388	AUTOSPEED226		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_7_0 : 8;	/*  [7:0]     r/w 8'ha5*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_9_8 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PIOFF_RATE1_3_0            : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_7_0 : 8;	/*[31:24]     r/w 8'hfc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED226_t;
__xdata __at( 0xe388 ) volatile AUTOSPEED226_t AUTOSPEED226;
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_7_0  AUTOSPEED226.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_9_8  AUTOSPEED226.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE1_9_8
#define reg_ICP_RING_250M_PIOFF_RATE1_3_0  AUTOSPEED226.BF.ICP_RING_250M_PIOFF_RATE1_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED226.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_7_0

// 0x038c	AUTOSPEED227		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_8 : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE1_7_0      : 8;	/* [15:8]     r/w 8'h29*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE1_9_8      : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PIOFF_RATE1_3_0          : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED227_t;
__xdata __at( 0xe38c ) volatile AUTOSPEED227_t AUTOSPEED227;
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_8  AUTOSPEED227.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE1_8
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED227.BF.FBDIV_CAL_RING_250M_PIOFF_RATE1_7_0
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE1_9_8  AUTOSPEED227.BF.FBDIV_CAL_RING_250M_PIOFF_RATE1_9_8
#define reg_INTPI_RING_250M_PIOFF_RATE1_3_0  AUTOSPEED227.BF.INTPI_RING_250M_PIOFF_RATE1_3_0

// 0x0390	AUTOSPEED228		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PIOFF_RATE1_1_0       : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PIOFF_RATE1       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE1_1_0 : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE1_1_0 : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED228_t;
__xdata __at( 0xe390 ) volatile AUTOSPEED228_t AUTOSPEED228;
#define reg_TX_INTPR_RING_250M_PIOFF_RATE1_1_0  AUTOSPEED228.BF.TX_INTPR_RING_250M_PIOFF_RATE1_1_0
#define reg_PLL_BAND_SEL_RING_250M_PIOFF_RATE1  AUTOSPEED228.BF.PLL_BAND_SEL_RING_250M_PIOFF_RATE1
#define reg_PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE1_1_0  AUTOSPEED228.BF.PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE1_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE1_1_0  AUTOSPEED228.BF.PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE1_1_0

// 0x0394	AUTOSPEED229		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE1_2_0 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE1_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE1_9_8   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED229_t;
__xdata __at( 0xe394 ) volatile AUTOSPEED229_t AUTOSPEED229;
#define reg_PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE1_2_0  AUTOSPEED229.BF.PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE1_2_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED229.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE1_7_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE1_9_8  AUTOSPEED229.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE1_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_7_0  AUTOSPEED229.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_7_0

// 0x0398	AUTOSPEED230		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PIOFF_RATE1     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_250M_PIOFF_RATE1_3_0 : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_250M_PIOFF_RATE1_7_0          : 8;	/*[31:24]     r/w 8'hfb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED230_t;
__xdata __at( 0xe398 ) volatile AUTOSPEED230_t AUTOSPEED230;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_9_8  AUTOSPEED230.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE1_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PIOFF_RATE1  AUTOSPEED230.BF.SSC_ACC_FACTOR_RING_250M_PIOFF_RATE1
#define reg_SSC_STEP_125PPM_RING_250M_PIOFF_RATE1_3_0  AUTOSPEED230.BF.SSC_STEP_125PPM_RING_250M_PIOFF_RATE1_3_0
#define reg_SSC_M_RING_250M_PIOFF_RATE1_7_0  AUTOSPEED230.BF.SSC_M_RING_250M_PIOFF_RATE1_7_0

// 0x039c	AUTOSPEED231		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PIOFF_RATE1_12_8         : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED231_t;
__xdata __at( 0xe39c ) volatile AUTOSPEED231_t AUTOSPEED231;
#define reg_SSC_M_RING_250M_PIOFF_RATE1_12_8  AUTOSPEED231.BF.SSC_M_RING_250M_PIOFF_RATE1_12_8

// 0x03a0	AUTOSPEED232		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED232_t;
__xdata __at( 0xe3a0 ) volatile AUTOSPEED232_t AUTOSPEED232;

// 0x03a4	AUTOSPEED233		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED233_t;
__xdata __at( 0xe3a4 ) volatile AUTOSPEED233_t AUTOSPEED233;

// 0x03a8	AUTOSPEED234		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PIOFF_RATE2_3_0        : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PIOFF_RATE2_3_0     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE2_7_0      : 8;	/*[23:16]     r/w 8'hc3*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE2_9_8      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED234_t;
__xdata __at( 0xe3a8 ) volatile AUTOSPEED234_t AUTOSPEED234;
#define reg_PLL_RATE_SEL_250M_PIOFF_RATE2_3_0  AUTOSPEED234.BF.PLL_RATE_SEL_250M_PIOFF_RATE2_3_0
#define reg_PLL_REFDIV_RING_250M_PIOFF_RATE2_3_0  AUTOSPEED234.BF.PLL_REFDIV_RING_250M_PIOFF_RATE2_3_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE2_7_0  AUTOSPEED234.BF.PLL_FBDIV_RING_250M_PIOFF_RATE2_7_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE2_9_8  AUTOSPEED234.BF.PLL_FBDIV_RING_250M_PIOFF_RATE2_9_8

// 0x03ac	AUTOSPEED235		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE2_7_0 : 8;	/*  [7:0]     r/w 8'hc3*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE2_9_8 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PIOFF_RATE2_3_0            : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE2_7_0 : 8;	/*[31:24]     r/w 8'hf9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED235_t;
__xdata __at( 0xe3ac ) volatile AUTOSPEED235_t AUTOSPEED235;
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE2_7_0  AUTOSPEED235.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE2_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE2_9_8  AUTOSPEED235.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE2_9_8
#define reg_ICP_RING_250M_PIOFF_RATE2_3_0  AUTOSPEED235.BF.ICP_RING_250M_PIOFF_RATE2_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE2_7_0  AUTOSPEED235.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE2_7_0

// 0x03b0	AUTOSPEED236		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE2_8 : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE2_7_0      : 8;	/* [15:8]     r/w 8'h31*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE2_9_8      : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PIOFF_RATE2_3_0          : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED236_t;
__xdata __at( 0xe3b0 ) volatile AUTOSPEED236_t AUTOSPEED236;
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE2_8  AUTOSPEED236.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE2_8
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE2_7_0  AUTOSPEED236.BF.FBDIV_CAL_RING_250M_PIOFF_RATE2_7_0
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE2_9_8  AUTOSPEED236.BF.FBDIV_CAL_RING_250M_PIOFF_RATE2_9_8
#define reg_INTPI_RING_250M_PIOFF_RATE2_3_0  AUTOSPEED236.BF.INTPI_RING_250M_PIOFF_RATE2_3_0

// 0x03b4	AUTOSPEED237		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PIOFF_RATE2_1_0       : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PIOFF_RATE2       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE2_1_0 : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE2_1_0 : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED237_t;
__xdata __at( 0xe3b4 ) volatile AUTOSPEED237_t AUTOSPEED237;
#define reg_TX_INTPR_RING_250M_PIOFF_RATE2_1_0  AUTOSPEED237.BF.TX_INTPR_RING_250M_PIOFF_RATE2_1_0
#define reg_PLL_BAND_SEL_RING_250M_PIOFF_RATE2  AUTOSPEED237.BF.PLL_BAND_SEL_RING_250M_PIOFF_RATE2
#define reg_PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE2_1_0  AUTOSPEED237.BF.PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE2_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE2_1_0  AUTOSPEED237.BF.PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE2_1_0

// 0x03b8	AUTOSPEED238		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE2_2_0 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE2_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE2_9_8   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE2_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED238_t;
__xdata __at( 0xe3b8 ) volatile AUTOSPEED238_t AUTOSPEED238;
#define reg_PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE2_2_0  AUTOSPEED238.BF.PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE2_2_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE2_7_0  AUTOSPEED238.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE2_7_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE2_9_8  AUTOSPEED238.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE2_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE2_7_0  AUTOSPEED238.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE2_7_0

// 0x03bc	AUTOSPEED239		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE2_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PIOFF_RATE2     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_250M_PIOFF_RATE2_3_0 : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_250M_PIOFF_RATE2_7_0          : 8;	/*[31:24]     r/w 8'hcd*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED239_t;
__xdata __at( 0xe3bc ) volatile AUTOSPEED239_t AUTOSPEED239;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE2_9_8  AUTOSPEED239.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE2_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PIOFF_RATE2  AUTOSPEED239.BF.SSC_ACC_FACTOR_RING_250M_PIOFF_RATE2
#define reg_SSC_STEP_125PPM_RING_250M_PIOFF_RATE2_3_0  AUTOSPEED239.BF.SSC_STEP_125PPM_RING_250M_PIOFF_RATE2_3_0
#define reg_SSC_M_RING_250M_PIOFF_RATE2_7_0  AUTOSPEED239.BF.SSC_M_RING_250M_PIOFF_RATE2_7_0

// 0x03c0	AUTOSPEED240		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PIOFF_RATE2_12_8         : 5;	/*  [4:0]     r/w 5'hb*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED240_t;
__xdata __at( 0xe3c0 ) volatile AUTOSPEED240_t AUTOSPEED240;
#define reg_SSC_M_RING_250M_PIOFF_RATE2_12_8  AUTOSPEED240.BF.SSC_M_RING_250M_PIOFF_RATE2_12_8

// 0x03c4	AUTOSPEED241		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED241_t;
__xdata __at( 0xe3c4 ) volatile AUTOSPEED241_t AUTOSPEED241;

// 0x03c8	AUTOSPEED242		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED242_t;
__xdata __at( 0xe3c8 ) volatile AUTOSPEED242_t AUTOSPEED242;

// 0x03cc	AUTOSPEED243		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PIOFF_RATE3_3_0        : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PIOFF_RATE3_3_0     : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE3_7_0      : 8;	/*[23:16]     r/w 8'h32*/
		uint8_t PLL_FBDIV_RING_250M_PIOFF_RATE3_9_8      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED243_t;
__xdata __at( 0xe3cc ) volatile AUTOSPEED243_t AUTOSPEED243;
#define reg_PLL_RATE_SEL_250M_PIOFF_RATE3_3_0  AUTOSPEED243.BF.PLL_RATE_SEL_250M_PIOFF_RATE3_3_0
#define reg_PLL_REFDIV_RING_250M_PIOFF_RATE3_3_0  AUTOSPEED243.BF.PLL_REFDIV_RING_250M_PIOFF_RATE3_3_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE3_7_0  AUTOSPEED243.BF.PLL_FBDIV_RING_250M_PIOFF_RATE3_7_0
#define reg_PLL_FBDIV_RING_250M_PIOFF_RATE3_9_8  AUTOSPEED243.BF.PLL_FBDIV_RING_250M_PIOFF_RATE3_9_8

// 0x03d0	AUTOSPEED244		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE3_7_0 : 8;	/*  [7:0]     r/w 8'h32*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE3_9_8 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PIOFF_RATE3_3_0            : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE3_7_0 : 8;	/*[31:24]     r/w 8'hfa*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED244_t;
__xdata __at( 0xe3d0 ) volatile AUTOSPEED244_t AUTOSPEED244;
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE3_7_0  AUTOSPEED244.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE3_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE3_9_8  AUTOSPEED244.BF.PLL_FBDIV_RING_FBCK_250M_PIOFF_RATE3_9_8
#define reg_ICP_RING_250M_PIOFF_RATE3_3_0  AUTOSPEED244.BF.ICP_RING_250M_PIOFF_RATE3_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE3_7_0  AUTOSPEED244.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE3_7_0

// 0x03d4	AUTOSPEED245		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PIOFF_RATE3_8 : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE3_7_0      : 8;	/* [15:8]     r/w 8'h32*/
		uint8_t FBDIV_CAL_RING_250M_PIOFF_RATE3_9_8      : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PIOFF_RATE3_3_0          : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED245_t;
__xdata __at( 0xe3d4 ) volatile AUTOSPEED245_t AUTOSPEED245;
#define reg_PLL_SPEED_THRESH_RING_250M_PIOFF_RATE3_8  AUTOSPEED245.BF.PLL_SPEED_THRESH_RING_250M_PIOFF_RATE3_8
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE3_7_0  AUTOSPEED245.BF.FBDIV_CAL_RING_250M_PIOFF_RATE3_7_0
#define reg_FBDIV_CAL_RING_250M_PIOFF_RATE3_9_8  AUTOSPEED245.BF.FBDIV_CAL_RING_250M_PIOFF_RATE3_9_8
#define reg_INTPI_RING_250M_PIOFF_RATE3_3_0  AUTOSPEED245.BF.INTPI_RING_250M_PIOFF_RATE3_3_0

// 0x03d8	AUTOSPEED246		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PIOFF_RATE3_1_0       : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PIOFF_RATE3       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE3_1_0 : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE3_1_0 : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED246_t;
__xdata __at( 0xe3d8 ) volatile AUTOSPEED246_t AUTOSPEED246;
#define reg_TX_INTPR_RING_250M_PIOFF_RATE3_1_0  AUTOSPEED246.BF.TX_INTPR_RING_250M_PIOFF_RATE3_1_0
#define reg_PLL_BAND_SEL_RING_250M_PIOFF_RATE3  AUTOSPEED246.BF.PLL_BAND_SEL_RING_250M_PIOFF_RATE3
#define reg_PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE3_1_0  AUTOSPEED246.BF.PLL_LPF_C1_SEL_RING_250M_PIOFF_RATE3_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE3_1_0  AUTOSPEED246.BF.PLL_LPF_C2_SEL_RING_250M_PIOFF_RATE3_1_0

// 0x03dc	AUTOSPEED247		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE3_2_0 : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE3_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PIOFF_RATE3_9_8   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE3_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED247_t;
__xdata __at( 0xe3dc ) volatile AUTOSPEED247_t AUTOSPEED247;
#define reg_PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE3_2_0  AUTOSPEED247.BF.PLL_LPF_R1_SEL_RING_250M_PIOFF_RATE3_2_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE3_7_0  AUTOSPEED247.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE3_7_0
#define reg_INIT_TXFOFFS_RING_250M_PIOFF_RATE3_9_8  AUTOSPEED247.BF.INIT_TXFOFFS_RING_250M_PIOFF_RATE3_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE3_7_0  AUTOSPEED247.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE3_7_0

// 0x03e0	AUTOSPEED248		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE3_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PIOFF_RATE3     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_250M_PIOFF_RATE3_3_0 : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_250M_PIOFF_RATE3_7_0          : 8;	/*[31:24]     r/w 8'h1b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED248_t;
__xdata __at( 0xe3e0 ) volatile AUTOSPEED248_t AUTOSPEED248;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE3_9_8  AUTOSPEED248.BF.INIT_TXFOFFS_RING_FBCK_250M_PIOFF_RATE3_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PIOFF_RATE3  AUTOSPEED248.BF.SSC_ACC_FACTOR_RING_250M_PIOFF_RATE3
#define reg_SSC_STEP_125PPM_RING_250M_PIOFF_RATE3_3_0  AUTOSPEED248.BF.SSC_STEP_125PPM_RING_250M_PIOFF_RATE3_3_0
#define reg_SSC_M_RING_250M_PIOFF_RATE3_7_0  AUTOSPEED248.BF.SSC_M_RING_250M_PIOFF_RATE3_7_0

// 0x03e4	AUTOSPEED249		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PIOFF_RATE3_12_8         : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED249_t;
__xdata __at( 0xe3e4 ) volatile AUTOSPEED249_t AUTOSPEED249;
#define reg_SSC_M_RING_250M_PIOFF_RATE3_12_8  AUTOSPEED249.BF.SSC_M_RING_250M_PIOFF_RATE3_12_8

// 0x03e8	AUTOSPEED250		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED250_t;
__xdata __at( 0xe3e8 ) volatile AUTOSPEED250_t AUTOSPEED250;

// 0x03ec	AUTOSPEED251		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED251_t;
__xdata __at( 0xe3ec ) volatile AUTOSPEED251_t AUTOSPEED251;

// 0x03f0	AUTOSPEED252		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PION_RATE0_3_0         : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PION_RATE0_3_0      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE0_7_0       : 8;	/*[23:16]     r/w 8'h28*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE0_9_8       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED252_t;
__xdata __at( 0xe3f0 ) volatile AUTOSPEED252_t AUTOSPEED252;
#define reg_PLL_RATE_SEL_250M_PION_RATE0_3_0  AUTOSPEED252.BF.PLL_RATE_SEL_250M_PION_RATE0_3_0
#define reg_PLL_REFDIV_RING_250M_PION_RATE0_3_0  AUTOSPEED252.BF.PLL_REFDIV_RING_250M_PION_RATE0_3_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE0_7_0  AUTOSPEED252.BF.PLL_FBDIV_RING_250M_PION_RATE0_7_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE0_9_8  AUTOSPEED252.BF.PLL_FBDIV_RING_250M_PION_RATE0_9_8

// 0x03f4	AUTOSPEED253		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE0_7_0  : 8;	/*  [7:0]     r/w 8'h28*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE0_9_8  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PION_RATE0_3_0             : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE0_7_0 : 8;	/*[31:24]     r/w 8'hfa*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED253_t;
__xdata __at( 0xe3f4 ) volatile AUTOSPEED253_t AUTOSPEED253;
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE0_7_0  AUTOSPEED253.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE0_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE0_9_8  AUTOSPEED253.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE0_9_8
#define reg_ICP_RING_250M_PION_RATE0_3_0  AUTOSPEED253.BF.ICP_RING_250M_PION_RATE0_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE0_7_0  AUTOSPEED253.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE0_7_0

// 0x03f8	AUTOSPEED254		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE0_8  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE0_7_0       : 8;	/* [15:8]     r/w 8'h28*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE0_9_8       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PION_RATE0_3_0           : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED254_t;
__xdata __at( 0xe3f8 ) volatile AUTOSPEED254_t AUTOSPEED254;
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE0_8  AUTOSPEED254.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE0_8
#define reg_FBDIV_CAL_RING_250M_PION_RATE0_7_0  AUTOSPEED254.BF.FBDIV_CAL_RING_250M_PION_RATE0_7_0
#define reg_FBDIV_CAL_RING_250M_PION_RATE0_9_8  AUTOSPEED254.BF.FBDIV_CAL_RING_250M_PION_RATE0_9_8
#define reg_INTPI_RING_250M_PION_RATE0_3_0  AUTOSPEED254.BF.INTPI_RING_250M_PION_RATE0_3_0

// 0x03fc	AUTOSPEED255		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PION_RATE0_1_0        : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PION_RATE0        : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PION_RATE0_1_0  : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PION_RATE0_1_0  : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED255_t;
__xdata __at( 0xe3fc ) volatile AUTOSPEED255_t AUTOSPEED255;
#define reg_TX_INTPR_RING_250M_PION_RATE0_1_0  AUTOSPEED255.BF.TX_INTPR_RING_250M_PION_RATE0_1_0
#define reg_PLL_BAND_SEL_RING_250M_PION_RATE0  AUTOSPEED255.BF.PLL_BAND_SEL_RING_250M_PION_RATE0
#define reg_PLL_LPF_C1_SEL_RING_250M_PION_RATE0_1_0  AUTOSPEED255.BF.PLL_LPF_C1_SEL_RING_250M_PION_RATE0_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PION_RATE0_1_0  AUTOSPEED255.BF.PLL_LPF_C2_SEL_RING_250M_PION_RATE0_1_0

// 0x0400	AUTOSPEED256		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PION_RATE0_2_0  : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE0_7_0    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE0_9_8    : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED256_t;
__xdata __at( 0xe400 ) volatile AUTOSPEED256_t AUTOSPEED256;
#define reg_PLL_LPF_R1_SEL_RING_250M_PION_RATE0_2_0  AUTOSPEED256.BF.PLL_LPF_R1_SEL_RING_250M_PION_RATE0_2_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE0_7_0  AUTOSPEED256.BF.INIT_TXFOFFS_RING_250M_PION_RATE0_7_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE0_9_8  AUTOSPEED256.BF.INIT_TXFOFFS_RING_250M_PION_RATE0_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_7_0  AUTOSPEED256.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_7_0

// 0x0404	AUTOSPEED257		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PION_RATE0      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_250M_PION_RATE0_3_0 : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_250M_PION_RATE0_7_0           : 8;	/*[31:24]     r/w 8'haf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED257_t;
__xdata __at( 0xe404 ) volatile AUTOSPEED257_t AUTOSPEED257;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_9_8  AUTOSPEED257.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE0_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PION_RATE0  AUTOSPEED257.BF.SSC_ACC_FACTOR_RING_250M_PION_RATE0
#define reg_SSC_STEP_125PPM_RING_250M_PION_RATE0_3_0  AUTOSPEED257.BF.SSC_STEP_125PPM_RING_250M_PION_RATE0_3_0
#define reg_SSC_M_RING_250M_PION_RATE0_7_0  AUTOSPEED257.BF.SSC_M_RING_250M_PION_RATE0_7_0

// 0x0408	AUTOSPEED258		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PION_RATE0_12_8          : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED258_t;
__xdata __at( 0xe408 ) volatile AUTOSPEED258_t AUTOSPEED258;
#define reg_SSC_M_RING_250M_PION_RATE0_12_8  AUTOSPEED258.BF.SSC_M_RING_250M_PION_RATE0_12_8

// 0x040c	AUTOSPEED259		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED259_t;
__xdata __at( 0xe40c ) volatile AUTOSPEED259_t AUTOSPEED259;

// 0x0410	AUTOSPEED260		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED260_t;
__xdata __at( 0xe410 ) volatile AUTOSPEED260_t AUTOSPEED260;

// 0x0414	AUTOSPEED261		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PION_RATE1_3_0         : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PION_RATE1_3_0      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE1_7_0       : 8;	/*[23:16]     r/w 8'h29*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE1_9_8       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED261_t;
__xdata __at( 0xe414 ) volatile AUTOSPEED261_t AUTOSPEED261;
#define reg_PLL_RATE_SEL_250M_PION_RATE1_3_0  AUTOSPEED261.BF.PLL_RATE_SEL_250M_PION_RATE1_3_0
#define reg_PLL_REFDIV_RING_250M_PION_RATE1_3_0  AUTOSPEED261.BF.PLL_REFDIV_RING_250M_PION_RATE1_3_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE1_7_0  AUTOSPEED261.BF.PLL_FBDIV_RING_250M_PION_RATE1_7_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE1_9_8  AUTOSPEED261.BF.PLL_FBDIV_RING_250M_PION_RATE1_9_8

// 0x0418	AUTOSPEED262		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE1_7_0  : 8;	/*  [7:0]     r/w 8'h29*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE1_9_8  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PION_RATE1_3_0             : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE1_7_0 : 8;	/*[31:24]     r/w 8'hfc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED262_t;
__xdata __at( 0xe418 ) volatile AUTOSPEED262_t AUTOSPEED262;
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE1_7_0  AUTOSPEED262.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE1_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE1_9_8  AUTOSPEED262.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE1_9_8
#define reg_ICP_RING_250M_PION_RATE1_3_0  AUTOSPEED262.BF.ICP_RING_250M_PION_RATE1_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE1_7_0  AUTOSPEED262.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE1_7_0

// 0x041c	AUTOSPEED263		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE1_8  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE1_7_0       : 8;	/* [15:8]     r/w 8'h29*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE1_9_8       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PION_RATE1_3_0           : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED263_t;
__xdata __at( 0xe41c ) volatile AUTOSPEED263_t AUTOSPEED263;
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE1_8  AUTOSPEED263.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE1_8
#define reg_FBDIV_CAL_RING_250M_PION_RATE1_7_0  AUTOSPEED263.BF.FBDIV_CAL_RING_250M_PION_RATE1_7_0
#define reg_FBDIV_CAL_RING_250M_PION_RATE1_9_8  AUTOSPEED263.BF.FBDIV_CAL_RING_250M_PION_RATE1_9_8
#define reg_INTPI_RING_250M_PION_RATE1_3_0  AUTOSPEED263.BF.INTPI_RING_250M_PION_RATE1_3_0

// 0x0420	AUTOSPEED264		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PION_RATE1_1_0        : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PION_RATE1        : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PION_RATE1_1_0  : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PION_RATE1_1_0  : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED264_t;
__xdata __at( 0xe420 ) volatile AUTOSPEED264_t AUTOSPEED264;
#define reg_TX_INTPR_RING_250M_PION_RATE1_1_0  AUTOSPEED264.BF.TX_INTPR_RING_250M_PION_RATE1_1_0
#define reg_PLL_BAND_SEL_RING_250M_PION_RATE1  AUTOSPEED264.BF.PLL_BAND_SEL_RING_250M_PION_RATE1
#define reg_PLL_LPF_C1_SEL_RING_250M_PION_RATE1_1_0  AUTOSPEED264.BF.PLL_LPF_C1_SEL_RING_250M_PION_RATE1_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PION_RATE1_1_0  AUTOSPEED264.BF.PLL_LPF_C2_SEL_RING_250M_PION_RATE1_1_0

// 0x0424	AUTOSPEED265		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PION_RATE1_2_0  : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE1_7_0    : 8;	/* [15:8]     r/w 8'h39*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE1_9_8    : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_7_0 : 8;	/*[31:24]     r/w 8'h39*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED265_t;
__xdata __at( 0xe424 ) volatile AUTOSPEED265_t AUTOSPEED265;
#define reg_PLL_LPF_R1_SEL_RING_250M_PION_RATE1_2_0  AUTOSPEED265.BF.PLL_LPF_R1_SEL_RING_250M_PION_RATE1_2_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE1_7_0  AUTOSPEED265.BF.INIT_TXFOFFS_RING_250M_PION_RATE1_7_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE1_9_8  AUTOSPEED265.BF.INIT_TXFOFFS_RING_250M_PION_RATE1_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_7_0  AUTOSPEED265.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_7_0

// 0x0428	AUTOSPEED266		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_9_8 : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PION_RATE1      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_250M_PION_RATE1_3_0 : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_250M_PION_RATE1_7_0           : 8;	/*[31:24]     r/w 8'hfb*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED266_t;
__xdata __at( 0xe428 ) volatile AUTOSPEED266_t AUTOSPEED266;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_9_8  AUTOSPEED266.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE1_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PION_RATE1  AUTOSPEED266.BF.SSC_ACC_FACTOR_RING_250M_PION_RATE1
#define reg_SSC_STEP_125PPM_RING_250M_PION_RATE1_3_0  AUTOSPEED266.BF.SSC_STEP_125PPM_RING_250M_PION_RATE1_3_0
#define reg_SSC_M_RING_250M_PION_RATE1_7_0  AUTOSPEED266.BF.SSC_M_RING_250M_PION_RATE1_7_0

// 0x042c	AUTOSPEED267		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PION_RATE1_12_8          : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED267_t;
__xdata __at( 0xe42c ) volatile AUTOSPEED267_t AUTOSPEED267;
#define reg_SSC_M_RING_250M_PION_RATE1_12_8  AUTOSPEED267.BF.SSC_M_RING_250M_PION_RATE1_12_8

// 0x0430	AUTOSPEED268		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED268_t;
__xdata __at( 0xe430 ) volatile AUTOSPEED268_t AUTOSPEED268;

// 0x0434	AUTOSPEED269		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED269_t;
__xdata __at( 0xe434 ) volatile AUTOSPEED269_t AUTOSPEED269;

// 0x0438	AUTOSPEED270		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PION_RATE2_3_0         : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PION_RATE2_3_0      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE2_7_0       : 8;	/*[23:16]     r/w 8'h31*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE2_9_8       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED270_t;
__xdata __at( 0xe438 ) volatile AUTOSPEED270_t AUTOSPEED270;
#define reg_PLL_RATE_SEL_250M_PION_RATE2_3_0  AUTOSPEED270.BF.PLL_RATE_SEL_250M_PION_RATE2_3_0
#define reg_PLL_REFDIV_RING_250M_PION_RATE2_3_0  AUTOSPEED270.BF.PLL_REFDIV_RING_250M_PION_RATE2_3_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE2_7_0  AUTOSPEED270.BF.PLL_FBDIV_RING_250M_PION_RATE2_7_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE2_9_8  AUTOSPEED270.BF.PLL_FBDIV_RING_250M_PION_RATE2_9_8

// 0x043c	AUTOSPEED271		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE2_7_0  : 8;	/*  [7:0]     r/w 8'h31*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE2_9_8  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PION_RATE2_3_0             : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE2_7_0 : 8;	/*[31:24]     r/w 8'hf9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED271_t;
__xdata __at( 0xe43c ) volatile AUTOSPEED271_t AUTOSPEED271;
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE2_7_0  AUTOSPEED271.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE2_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE2_9_8  AUTOSPEED271.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE2_9_8
#define reg_ICP_RING_250M_PION_RATE2_3_0  AUTOSPEED271.BF.ICP_RING_250M_PION_RATE2_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE2_7_0  AUTOSPEED271.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE2_7_0

// 0x0440	AUTOSPEED272		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE2_8  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE2_7_0       : 8;	/* [15:8]     r/w 8'h31*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE2_9_8       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PION_RATE2_3_0           : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED272_t;
__xdata __at( 0xe440 ) volatile AUTOSPEED272_t AUTOSPEED272;
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE2_8  AUTOSPEED272.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE2_8
#define reg_FBDIV_CAL_RING_250M_PION_RATE2_7_0  AUTOSPEED272.BF.FBDIV_CAL_RING_250M_PION_RATE2_7_0
#define reg_FBDIV_CAL_RING_250M_PION_RATE2_9_8  AUTOSPEED272.BF.FBDIV_CAL_RING_250M_PION_RATE2_9_8
#define reg_INTPI_RING_250M_PION_RATE2_3_0  AUTOSPEED272.BF.INTPI_RING_250M_PION_RATE2_3_0

// 0x0444	AUTOSPEED273		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PION_RATE2_1_0        : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PION_RATE2        : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PION_RATE2_1_0  : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PION_RATE2_1_0  : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED273_t;
__xdata __at( 0xe444 ) volatile AUTOSPEED273_t AUTOSPEED273;
#define reg_TX_INTPR_RING_250M_PION_RATE2_1_0  AUTOSPEED273.BF.TX_INTPR_RING_250M_PION_RATE2_1_0
#define reg_PLL_BAND_SEL_RING_250M_PION_RATE2  AUTOSPEED273.BF.PLL_BAND_SEL_RING_250M_PION_RATE2
#define reg_PLL_LPF_C1_SEL_RING_250M_PION_RATE2_1_0  AUTOSPEED273.BF.PLL_LPF_C1_SEL_RING_250M_PION_RATE2_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PION_RATE2_1_0  AUTOSPEED273.BF.PLL_LPF_C2_SEL_RING_250M_PION_RATE2_1_0

// 0x0448	AUTOSPEED274		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PION_RATE2_2_0  : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE2_7_0    : 8;	/* [15:8]     r/w 8'ha8*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE2_9_8    : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE2_7_0 : 8;	/*[31:24]     r/w 8'ha8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED274_t;
__xdata __at( 0xe448 ) volatile AUTOSPEED274_t AUTOSPEED274;
#define reg_PLL_LPF_R1_SEL_RING_250M_PION_RATE2_2_0  AUTOSPEED274.BF.PLL_LPF_R1_SEL_RING_250M_PION_RATE2_2_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE2_7_0  AUTOSPEED274.BF.INIT_TXFOFFS_RING_250M_PION_RATE2_7_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE2_9_8  AUTOSPEED274.BF.INIT_TXFOFFS_RING_250M_PION_RATE2_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE2_7_0  AUTOSPEED274.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE2_7_0

// 0x044c	AUTOSPEED275		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE2_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PION_RATE2      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_250M_PION_RATE2_3_0 : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_250M_PION_RATE2_7_0           : 8;	/*[31:24]     r/w 8'hcd*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED275_t;
__xdata __at( 0xe44c ) volatile AUTOSPEED275_t AUTOSPEED275;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE2_9_8  AUTOSPEED275.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE2_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PION_RATE2  AUTOSPEED275.BF.SSC_ACC_FACTOR_RING_250M_PION_RATE2
#define reg_SSC_STEP_125PPM_RING_250M_PION_RATE2_3_0  AUTOSPEED275.BF.SSC_STEP_125PPM_RING_250M_PION_RATE2_3_0
#define reg_SSC_M_RING_250M_PION_RATE2_7_0  AUTOSPEED275.BF.SSC_M_RING_250M_PION_RATE2_7_0

// 0x0450	AUTOSPEED276		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PION_RATE2_12_8          : 5;	/*  [4:0]     r/w 5'hb*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED276_t;
__xdata __at( 0xe450 ) volatile AUTOSPEED276_t AUTOSPEED276;
#define reg_SSC_M_RING_250M_PION_RATE2_12_8  AUTOSPEED276.BF.SSC_M_RING_250M_PION_RATE2_12_8

// 0x0454	AUTOSPEED277		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED277_t;
__xdata __at( 0xe454 ) volatile AUTOSPEED277_t AUTOSPEED277;

// 0x0458	AUTOSPEED278		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED278_t;
__xdata __at( 0xe458 ) volatile AUTOSPEED278_t AUTOSPEED278;

// 0x045c	AUTOSPEED279		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_250M_PION_RATE3_3_0         : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t PLL_REFDIV_RING_250M_PION_RATE3_3_0      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE3_7_0       : 8;	/*[23:16]     r/w 8'h32*/
		uint8_t PLL_FBDIV_RING_250M_PION_RATE3_9_8       : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED279_t;
__xdata __at( 0xe45c ) volatile AUTOSPEED279_t AUTOSPEED279;
#define reg_PLL_RATE_SEL_250M_PION_RATE3_3_0  AUTOSPEED279.BF.PLL_RATE_SEL_250M_PION_RATE3_3_0
#define reg_PLL_REFDIV_RING_250M_PION_RATE3_3_0  AUTOSPEED279.BF.PLL_REFDIV_RING_250M_PION_RATE3_3_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE3_7_0  AUTOSPEED279.BF.PLL_FBDIV_RING_250M_PION_RATE3_7_0
#define reg_PLL_FBDIV_RING_250M_PION_RATE3_9_8  AUTOSPEED279.BF.PLL_FBDIV_RING_250M_PION_RATE3_9_8

// 0x0460	AUTOSPEED280		TBD
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE3_7_0  : 8;	/*  [7:0]     r/w 8'h32*/
		uint8_t PLL_FBDIV_RING_FBCK_250M_PION_RATE3_9_8  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t ICP_RING_250M_PION_RATE3_3_0             : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE3_7_0 : 8;	/*[31:24]     r/w 8'hfa*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED280_t;
__xdata __at( 0xe460 ) volatile AUTOSPEED280_t AUTOSPEED280;
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE3_7_0  AUTOSPEED280.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE3_7_0
#define reg_PLL_FBDIV_RING_FBCK_250M_PION_RATE3_9_8  AUTOSPEED280.BF.PLL_FBDIV_RING_FBCK_250M_PION_RATE3_9_8
#define reg_ICP_RING_250M_PION_RATE3_3_0  AUTOSPEED280.BF.ICP_RING_250M_PION_RATE3_3_0
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE3_7_0  AUTOSPEED280.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE3_7_0

// 0x0464	AUTOSPEED281		TBD
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_250M_PION_RATE3_8  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE3_7_0       : 8;	/* [15:8]     r/w 8'h32*/
		uint8_t FBDIV_CAL_RING_250M_PION_RATE3_9_8       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INTPI_RING_250M_PION_RATE3_3_0           : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED281_t;
__xdata __at( 0xe464 ) volatile AUTOSPEED281_t AUTOSPEED281;
#define reg_PLL_SPEED_THRESH_RING_250M_PION_RATE3_8  AUTOSPEED281.BF.PLL_SPEED_THRESH_RING_250M_PION_RATE3_8
#define reg_FBDIV_CAL_RING_250M_PION_RATE3_7_0  AUTOSPEED281.BF.FBDIV_CAL_RING_250M_PION_RATE3_7_0
#define reg_FBDIV_CAL_RING_250M_PION_RATE3_9_8  AUTOSPEED281.BF.FBDIV_CAL_RING_250M_PION_RATE3_9_8
#define reg_INTPI_RING_250M_PION_RATE3_3_0  AUTOSPEED281.BF.INTPI_RING_250M_PION_RATE3_3_0

// 0x0468	AUTOSPEED282		TBD
typedef union {
	struct {
		uint8_t TX_INTPR_RING_250M_PION_RATE3_1_0        : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_BAND_SEL_RING_250M_PION_RATE3        : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PLL_LPF_C1_SEL_RING_250M_PION_RATE3_1_0  : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_250M_PION_RATE3_1_0  : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED282_t;
__xdata __at( 0xe468 ) volatile AUTOSPEED282_t AUTOSPEED282;
#define reg_TX_INTPR_RING_250M_PION_RATE3_1_0  AUTOSPEED282.BF.TX_INTPR_RING_250M_PION_RATE3_1_0
#define reg_PLL_BAND_SEL_RING_250M_PION_RATE3  AUTOSPEED282.BF.PLL_BAND_SEL_RING_250M_PION_RATE3
#define reg_PLL_LPF_C1_SEL_RING_250M_PION_RATE3_1_0  AUTOSPEED282.BF.PLL_LPF_C1_SEL_RING_250M_PION_RATE3_1_0
#define reg_PLL_LPF_C2_SEL_RING_250M_PION_RATE3_1_0  AUTOSPEED282.BF.PLL_LPF_C2_SEL_RING_250M_PION_RATE3_1_0

// 0x046c	AUTOSPEED283		TBD
typedef union {
	struct {
		uint8_t PLL_LPF_R1_SEL_RING_250M_PION_RATE3_2_0  : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE3_7_0    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_TXFOFFS_RING_250M_PION_RATE3_9_8    : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE3_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED283_t;
__xdata __at( 0xe46c ) volatile AUTOSPEED283_t AUTOSPEED283;
#define reg_PLL_LPF_R1_SEL_RING_250M_PION_RATE3_2_0  AUTOSPEED283.BF.PLL_LPF_R1_SEL_RING_250M_PION_RATE3_2_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE3_7_0  AUTOSPEED283.BF.INIT_TXFOFFS_RING_250M_PION_RATE3_7_0
#define reg_INIT_TXFOFFS_RING_250M_PION_RATE3_9_8  AUTOSPEED283.BF.INIT_TXFOFFS_RING_250M_PION_RATE3_9_8
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE3_7_0  AUTOSPEED283.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE3_7_0

// 0x0470	AUTOSPEED284		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_RING_FBCK_250M_PION_RATE3_9_8 : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SSC_ACC_FACTOR_RING_250M_PION_RATE3      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SSC_STEP_125PPM_RING_250M_PION_RATE3_3_0 : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t SSC_M_RING_250M_PION_RATE3_7_0           : 8;	/*[31:24]     r/w 8'h1b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED284_t;
__xdata __at( 0xe470 ) volatile AUTOSPEED284_t AUTOSPEED284;
#define reg_INIT_TXFOFFS_RING_FBCK_250M_PION_RATE3_9_8  AUTOSPEED284.BF.INIT_TXFOFFS_RING_FBCK_250M_PION_RATE3_9_8
#define reg_SSC_ACC_FACTOR_RING_250M_PION_RATE3  AUTOSPEED284.BF.SSC_ACC_FACTOR_RING_250M_PION_RATE3
#define reg_SSC_STEP_125PPM_RING_250M_PION_RATE3_3_0  AUTOSPEED284.BF.SSC_STEP_125PPM_RING_250M_PION_RATE3_3_0
#define reg_SSC_M_RING_250M_PION_RATE3_7_0  AUTOSPEED284.BF.SSC_M_RING_250M_PION_RATE3_7_0

// 0x0474	AUTOSPEED285		TBD
typedef union {
	struct {
		uint8_t SSC_M_RING_250M_PION_RATE3_12_8          : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED285_t;
__xdata __at( 0xe474 ) volatile AUTOSPEED285_t AUTOSPEED285;
#define reg_SSC_M_RING_250M_PION_RATE3_12_8  AUTOSPEED285.BF.SSC_M_RING_250M_PION_RATE3_12_8

// 0x0478	AUTOSPEED286		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED286_t;
__xdata __at( 0xe478 ) volatile AUTOSPEED286_t AUTOSPEED286;

// 0x047c	AUTOSPEED287		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED287_t;
__xdata __at( 0xe47c ) volatile AUTOSPEED287_t AUTOSPEED287;

// 0x0480	AUTOSPEED288		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED288_t;
__xdata __at( 0xe480 ) volatile AUTOSPEED288_t AUTOSPEED288;

// 0x0484	AUTOSPEED289		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED289_t;
__xdata __at( 0xe484 ) volatile AUTOSPEED289_t AUTOSPEED289;

// 0x0488	AUTOSPEED290		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED290_t;
__xdata __at( 0xe488 ) volatile AUTOSPEED290_t AUTOSPEED290;

// 0x048c	AUTOSPEED291		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED291_t;
__xdata __at( 0xe48c ) volatile AUTOSPEED291_t AUTOSPEED291;

// 0x0490	AUTOSPEED292		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED292_t;
__xdata __at( 0xe490 ) volatile AUTOSPEED292_t AUTOSPEED292;

// 0x0494	AUTOSPEED293		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED293_t;
__xdata __at( 0xe494 ) volatile AUTOSPEED293_t AUTOSPEED293;

// 0x0498	AUTOSPEED294		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED294_t;
__xdata __at( 0xe498 ) volatile AUTOSPEED294_t AUTOSPEED294;

// 0x049c	AUTOSPEED295		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED295_t;
__xdata __at( 0xe49c ) volatile AUTOSPEED295_t AUTOSPEED295;

// 0x04a0	AUTOSPEED296		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED296_t;
__xdata __at( 0xe4a0 ) volatile AUTOSPEED296_t AUTOSPEED296;

// 0x04a4	AUTOSPEED297		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED297_t;
__xdata __at( 0xe4a4 ) volatile AUTOSPEED297_t AUTOSPEED297;

// 0x04a8	AUTOSPEED298		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED298_t;
__xdata __at( 0xe4a8 ) volatile AUTOSPEED298_t AUTOSPEED298;

// 0x04ac	AUTOSPEED299		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED299_t;
__xdata __at( 0xe4ac ) volatile AUTOSPEED299_t AUTOSPEED299;

// 0x04b0	AUTOSPEED300		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED300_t;
__xdata __at( 0xe4b0 ) volatile AUTOSPEED300_t AUTOSPEED300;

// 0x04b4	AUTOSPEED301		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED301_t;
__xdata __at( 0xe4b4 ) volatile AUTOSPEED301_t AUTOSPEED301;

// 0x04b8	AUTOSPEED302		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED302_t;
__xdata __at( 0xe4b8 ) volatile AUTOSPEED302_t AUTOSPEED302;

// 0x04bc	AUTOSPEED303		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED303_t;
__xdata __at( 0xe4bc ) volatile AUTOSPEED303_t AUTOSPEED303;

// 0x04c0	AUTOSPEED304		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED304_t;
__xdata __at( 0xe4c0 ) volatile AUTOSPEED304_t AUTOSPEED304;

// 0x04c4	AUTOSPEED305		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED305_t;
__xdata __at( 0xe4c4 ) volatile AUTOSPEED305_t AUTOSPEED305;

// 0x04c8	AUTOSPEED306		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED306_t;
__xdata __at( 0xe4c8 ) volatile AUTOSPEED306_t AUTOSPEED306;

// 0x04cc	AUTOSPEED307		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED307_t;
__xdata __at( 0xe4cc ) volatile AUTOSPEED307_t AUTOSPEED307;

// 0x04d0	AUTOSPEED308		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED308_t;
__xdata __at( 0xe4d0 ) volatile AUTOSPEED308_t AUTOSPEED308;

// 0x04d4	AUTOSPEED309		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED309_t;
__xdata __at( 0xe4d4 ) volatile AUTOSPEED309_t AUTOSPEED309;

// 0x04d8	AUTOSPEED310		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED310_t;
__xdata __at( 0xe4d8 ) volatile AUTOSPEED310_t AUTOSPEED310;

// 0x04dc	AUTOSPEED311		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED311_t;
__xdata __at( 0xe4dc ) volatile AUTOSPEED311_t AUTOSPEED311;

// 0x04e0	AUTOSPEED312		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED312_t;
__xdata __at( 0xe4e0 ) volatile AUTOSPEED312_t AUTOSPEED312;

// 0x04e4	AUTOSPEED313		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED313_t;
__xdata __at( 0xe4e4 ) volatile AUTOSPEED313_t AUTOSPEED313;

// 0x04e8	AUTOSPEED314		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED314_t;
__xdata __at( 0xe4e8 ) volatile AUTOSPEED314_t AUTOSPEED314;

// 0x04ec	AUTOSPEED315		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED315_t;
__xdata __at( 0xe4ec ) volatile AUTOSPEED315_t AUTOSPEED315;

// 0x04f0	AUTOSPEED316		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED316_t;
__xdata __at( 0xe4f0 ) volatile AUTOSPEED316_t AUTOSPEED316;

// 0x04f4	AUTOSPEED317		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED317_t;
__xdata __at( 0xe4f4 ) volatile AUTOSPEED317_t AUTOSPEED317;

// 0x04f8	AUTOSPEED318		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED318_t;
__xdata __at( 0xe4f8 ) volatile AUTOSPEED318_t AUTOSPEED318;

// 0x04fc	AUTOSPEED319		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED319_t;
__xdata __at( 0xe4fc ) volatile AUTOSPEED319_t AUTOSPEED319;

// 0x0500	AUTOSPEED320		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED320_t;
__xdata __at( 0xe500 ) volatile AUTOSPEED320_t AUTOSPEED320;

// 0x0504	AUTOSPEED321		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED321_t;
__xdata __at( 0xe504 ) volatile AUTOSPEED321_t AUTOSPEED321;

// 0x0508	AUTOSPEED322		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED322_t;
__xdata __at( 0xe508 ) volatile AUTOSPEED322_t AUTOSPEED322;

// 0x050c	AUTOSPEED323		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED323_t;
__xdata __at( 0xe50c ) volatile AUTOSPEED323_t AUTOSPEED323;

// 0x0510	AUTOSPEED324		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED324_t;
__xdata __at( 0xe510 ) volatile AUTOSPEED324_t AUTOSPEED324;

// 0x0514	AUTOSPEED325		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED325_t;
__xdata __at( 0xe514 ) volatile AUTOSPEED325_t AUTOSPEED325;

// 0x0518	AUTOSPEED326		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED326_t;
__xdata __at( 0xe518 ) volatile AUTOSPEED326_t AUTOSPEED326;

// 0x051c	AUTOSPEED327		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED327_t;
__xdata __at( 0xe51c ) volatile AUTOSPEED327_t AUTOSPEED327;

// 0x0520	AUTOSPEED328		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED328_t;
__xdata __at( 0xe520 ) volatile AUTOSPEED328_t AUTOSPEED328;

// 0x0524	AUTOSPEED329		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED329_t;
__xdata __at( 0xe524 ) volatile AUTOSPEED329_t AUTOSPEED329;

// 0x0528	AUTOSPEED330		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED330_t;
__xdata __at( 0xe528 ) volatile AUTOSPEED330_t AUTOSPEED330;

// 0x052c	AUTOSPEED331		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED331_t;
__xdata __at( 0xe52c ) volatile AUTOSPEED331_t AUTOSPEED331;

// 0x0530	AUTOSPEED332		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED332_t;
__xdata __at( 0xe530 ) volatile AUTOSPEED332_t AUTOSPEED332;

// 0x0534	AUTOSPEED333		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED333_t;
__xdata __at( 0xe534 ) volatile AUTOSPEED333_t AUTOSPEED333;

// 0x0538	AUTOSPEED334		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED334_t;
__xdata __at( 0xe538 ) volatile AUTOSPEED334_t AUTOSPEED334;

// 0x053c	AUTOSPEED335		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED335_t;
__xdata __at( 0xe53c ) volatile AUTOSPEED335_t AUTOSPEED335;

// 0x0540	AUTOSPEED336		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED336_t;
__xdata __at( 0xe540 ) volatile AUTOSPEED336_t AUTOSPEED336;

// 0x0544	AUTOSPEED337		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED337_t;
__xdata __at( 0xe544 ) volatile AUTOSPEED337_t AUTOSPEED337;

// 0x0548	AUTOSPEED338		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED338_t;
__xdata __at( 0xe548 ) volatile AUTOSPEED338_t AUTOSPEED338;

// 0x054c	AUTOSPEED339		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED339_t;
__xdata __at( 0xe54c ) volatile AUTOSPEED339_t AUTOSPEED339;

// 0x0550	AUTOSPEED340		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED340_t;
__xdata __at( 0xe550 ) volatile AUTOSPEED340_t AUTOSPEED340;

// 0x0554	AUTOSPEED341		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED341_t;
__xdata __at( 0xe554 ) volatile AUTOSPEED341_t AUTOSPEED341;

// 0x0558	AUTOSPEED342		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED342_t;
__xdata __at( 0xe558 ) volatile AUTOSPEED342_t AUTOSPEED342;

// 0x055c	AUTOSPEED343		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED343_t;
__xdata __at( 0xe55c ) volatile AUTOSPEED343_t AUTOSPEED343;

// 0x0560	AUTOSPEED344		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED344_t;
__xdata __at( 0xe560 ) volatile AUTOSPEED344_t AUTOSPEED344;

// 0x0564	AUTOSPEED345		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED345_t;
__xdata __at( 0xe564 ) volatile AUTOSPEED345_t AUTOSPEED345;

// 0x0568	AUTOSPEED346		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED346_t;
__xdata __at( 0xe568 ) volatile AUTOSPEED346_t AUTOSPEED346;

// 0x056c	AUTOSPEED347		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED347_t;
__xdata __at( 0xe56c ) volatile AUTOSPEED347_t AUTOSPEED347;

// 0x0570	AUTOSPEED348		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED348_t;
__xdata __at( 0xe570 ) volatile AUTOSPEED348_t AUTOSPEED348;

// 0x0574	AUTOSPEED349		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED349_t;
__xdata __at( 0xe574 ) volatile AUTOSPEED349_t AUTOSPEED349;

// 0x0578	AUTOSPEED350		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED350_t;
__xdata __at( 0xe578 ) volatile AUTOSPEED350_t AUTOSPEED350;

// 0x057c	AUTOSPEED351		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED351_t;
__xdata __at( 0xe57c ) volatile AUTOSPEED351_t AUTOSPEED351;

// 0x0580	AUTOSPEED352		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED352_t;
__xdata __at( 0xe580 ) volatile AUTOSPEED352_t AUTOSPEED352;

// 0x0584	AUTOSPEED353		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED353_t;
__xdata __at( 0xe584 ) volatile AUTOSPEED353_t AUTOSPEED353;

// 0x0588	AUTOSPEED354		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED354_t;
__xdata __at( 0xe588 ) volatile AUTOSPEED354_t AUTOSPEED354;

// 0x058c	AUTOSPEED355		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED355_t;
__xdata __at( 0xe58c ) volatile AUTOSPEED355_t AUTOSPEED355;

// 0x0590	AUTOSPEED356		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED356_t;
__xdata __at( 0xe590 ) volatile AUTOSPEED356_t AUTOSPEED356;

// 0x0594	AUTOSPEED357		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED357_t;
__xdata __at( 0xe594 ) volatile AUTOSPEED357_t AUTOSPEED357;

// 0x0598	AUTOSPEED358		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED358_t;
__xdata __at( 0xe598 ) volatile AUTOSPEED358_t AUTOSPEED358;

// 0x059c	AUTOSPEED359		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED359_t;
__xdata __at( 0xe59c ) volatile AUTOSPEED359_t AUTOSPEED359;

// 0x05a0	AUTOSPEED360		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED360_t;
__xdata __at( 0xe5a0 ) volatile AUTOSPEED360_t AUTOSPEED360;

// 0x05a4	AUTOSPEED361		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED361_t;
__xdata __at( 0xe5a4 ) volatile AUTOSPEED361_t AUTOSPEED361;

// 0x05a8	AUTOSPEED362		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED362_t;
__xdata __at( 0xe5a8 ) volatile AUTOSPEED362_t AUTOSPEED362;

// 0x05ac	AUTOSPEED363		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED363_t;
__xdata __at( 0xe5ac ) volatile AUTOSPEED363_t AUTOSPEED363;

// 0x05b0	AUTOSPEED364		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED364_t;
__xdata __at( 0xe5b0 ) volatile AUTOSPEED364_t AUTOSPEED364;

// 0x05b4	AUTOSPEED365		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED365_t;
__xdata __at( 0xe5b4 ) volatile AUTOSPEED365_t AUTOSPEED365;

// 0x05b8	AUTOSPEED366		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED366_t;
__xdata __at( 0xe5b8 ) volatile AUTOSPEED366_t AUTOSPEED366;

// 0x05bc	AUTOSPEED367		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED367_t;
__xdata __at( 0xe5bc ) volatile AUTOSPEED367_t AUTOSPEED367;

// 0x05c0	AUTOSPEED368		TBD
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
} AUTOSPEED368_t;
__xdata __at( 0xe5c0 ) volatile AUTOSPEED368_t AUTOSPEED368;
#define reg_USE_RING_REFCLK_250M  AUTOSPEED368.BF.USE_RING_REFCLK_250M
#define reg_CAL_LCVCO_DAC_LSB_RATE0_7_0  AUTOSPEED368.BF.CAL_LCVCO_DAC_LSB_RATE0_7_0
#define reg_CAL_LCVCO_DAC_LSB_RATE1_7_0  AUTOSPEED368.BF.CAL_LCVCO_DAC_LSB_RATE1_7_0
#define reg_CAL_LCVCO_DAC_LSB_CONT_RATE1_7_0  AUTOSPEED368.BF.CAL_LCVCO_DAC_LSB_CONT_RATE1_7_0

// 0x05c4	AUTOSPEED369		TBD
typedef union {
	struct {
		uint8_t CAL_LCVCO_DAC_MSB_RATE0_7_0              : 8;	/*  [7:0]     r/w 8'h21*/
		uint8_t CAL_LCVCO_DAC_MSB_RATE1_7_0              : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_LCVCO_DAC_MSB_CONT_RATE0_7_0         : 8;	/*[23:16]     r/w 8'h21*/
		uint8_t CAL_LCVCO_DAC_MSB_CONT_RATE1_7_0         : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED369_t;
__xdata __at( 0xe5c4 ) volatile AUTOSPEED369_t AUTOSPEED369;
#define reg_CAL_LCVCO_DAC_MSB_RATE0_7_0  AUTOSPEED369.BF.CAL_LCVCO_DAC_MSB_RATE0_7_0
#define reg_CAL_LCVCO_DAC_MSB_RATE1_7_0  AUTOSPEED369.BF.CAL_LCVCO_DAC_MSB_RATE1_7_0
#define reg_CAL_LCVCO_DAC_MSB_CONT_RATE0_7_0  AUTOSPEED369.BF.CAL_LCVCO_DAC_MSB_CONT_RATE0_7_0
#define reg_CAL_LCVCO_DAC_MSB_CONT_RATE1_7_0  AUTOSPEED369.BF.CAL_LCVCO_DAC_MSB_CONT_RATE1_7_0

// 0x05c8	AUTOSPEED370		TBD
typedef union {
	struct {
		uint8_t CAL_LCCAP_LSB_RATE0_7_0                  : 8;	/*  [7:0]     r/w 8'h10*/
		uint8_t CAL_LCCAP_LSB_RATE1_7_0                  : 8;	/* [15:8]     r/w 8'h10*/
		uint8_t CAL_LCCAP_MSB_RATE0_7_0                  : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t CAL_LCCAP_MSB_RATE1_7_0                  : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED370_t;
__xdata __at( 0xe5c8 ) volatile AUTOSPEED370_t AUTOSPEED370;
#define reg_CAL_LCCAP_LSB_RATE0_7_0  AUTOSPEED370.BF.CAL_LCCAP_LSB_RATE0_7_0
#define reg_CAL_LCCAP_LSB_RATE1_7_0  AUTOSPEED370.BF.CAL_LCCAP_LSB_RATE1_7_0
#define reg_CAL_LCCAP_MSB_RATE0_7_0  AUTOSPEED370.BF.CAL_LCCAP_MSB_RATE0_7_0
#define reg_CAL_LCCAP_MSB_RATE1_7_0  AUTOSPEED370.BF.CAL_LCCAP_MSB_RATE1_7_0

// 0x05cc	AUTOSPEED371		TBD
typedef union {
	struct {
		uint8_t CAL_PLLDCC_CNT_RATE0_7_0                 : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_PLLDCC_CNT_RATE1_7_0                 : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_PLLDCC_CNT_CONT_RATE0_7_0            : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_PLLDCC_CNT_CONT_RATE1_7_0            : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED371_t;
__xdata __at( 0xe5cc ) volatile AUTOSPEED371_t AUTOSPEED371;
#define reg_CAL_PLLDCC_CNT_RATE0_7_0  AUTOSPEED371.BF.CAL_PLLDCC_CNT_RATE0_7_0
#define reg_CAL_PLLDCC_CNT_RATE1_7_0  AUTOSPEED371.BF.CAL_PLLDCC_CNT_RATE1_7_0
#define reg_CAL_PLLDCC_CNT_CONT_RATE0_7_0  AUTOSPEED371.BF.CAL_PLLDCC_CNT_CONT_RATE0_7_0
#define reg_CAL_PLLDCC_CNT_CONT_RATE1_7_0  AUTOSPEED371.BF.CAL_PLLDCC_CNT_CONT_RATE1_7_0

// 0x05d0	AUTOSPEED372		TBD
typedef union {
	struct {
		uint8_t CAL_PLL_SPEED_RING_RATE0_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_RATE1_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_CONT_RATE0_7_0        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_CONT_RATE1_7_0        : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED372_t;
__xdata __at( 0xe5d0 ) volatile AUTOSPEED372_t AUTOSPEED372;
#define reg_CAL_PLL_SPEED_RING_RATE0_7_0  AUTOSPEED372.BF.CAL_PLL_SPEED_RING_RATE0_7_0
#define reg_CAL_PLL_SPEED_RING_RATE1_7_0  AUTOSPEED372.BF.CAL_PLL_SPEED_RING_RATE1_7_0
#define reg_CAL_PLL_SPEED_RING_CONT_RATE0_7_0  AUTOSPEED372.BF.CAL_PLL_SPEED_RING_CONT_RATE0_7_0
#define reg_CAL_PLL_SPEED_RING_CONT_RATE1_7_0  AUTOSPEED372.BF.CAL_PLL_SPEED_RING_CONT_RATE1_7_0

// 0x05d4	AUTOSPEED373		TBD
typedef union {
	struct {
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_7_0   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_7_0 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED373_t;
__xdata __at( 0xe5d4 ) volatile AUTOSPEED373_t AUTOSPEED373;
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_7_0  AUTOSPEED373.BF.CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_7_0  AUTOSPEED373.BF.CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_7_0  AUTOSPEED373.BF.CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_7_0  AUTOSPEED373.BF.CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_7_0

// 0x05d8	AUTOSPEED374		TBD
typedef union {
	struct {
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE0_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE0_15_8        : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE1_7_0         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE1_15_8        : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED374_t;
__xdata __at( 0xe5d8 ) volatile AUTOSPEED374_t AUTOSPEED374;
#define reg_CAL_SLLP_DAC_FINE_RING_RATE0_7_0  AUTOSPEED374.BF.CAL_SLLP_DAC_FINE_RING_RATE0_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_RATE0_15_8  AUTOSPEED374.BF.CAL_SLLP_DAC_FINE_RING_RATE0_15_8
#define reg_CAL_SLLP_DAC_FINE_RING_RATE1_7_0  AUTOSPEED374.BF.CAL_SLLP_DAC_FINE_RING_RATE1_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_RATE1_15_8  AUTOSPEED374.BF.CAL_SLLP_DAC_FINE_RING_RATE1_15_8

// 0x05dc	AUTOSPEED375		TBD
typedef union {
	struct {
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE0_7_0    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE0_15_8   : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE1_7_0    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE1_15_8   : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED375_t;
__xdata __at( 0xe5dc ) volatile AUTOSPEED375_t AUTOSPEED375;
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE0_7_0  AUTOSPEED375.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE0_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE0_15_8  AUTOSPEED375.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE0_15_8
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE1_7_0  AUTOSPEED375.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE1_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE1_15_8  AUTOSPEED375.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE1_15_8

#endif
