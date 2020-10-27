#ifndef PHY_REG_C_XDAT_SPD_LANE_H
#define PHY_REG_C_XDAT_SPD_LANE_H



// 0x0500	AUTOSPEED8		TBD
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
} AUTOSPEED8_t;
__xdata __at( 0x6500 ) volatile AUTOSPEED8_t AUTOSPEED8;
#define reg_PLL_REG_SEL_PION_RATE0_2_0  AUTOSPEED8.BF.PLL_REG_SEL_PION_RATE0_2_0
#define reg_PLL_RATE_SEL_PION_RATE0_3_0  AUTOSPEED8.BF.PLL_RATE_SEL_PION_RATE0_3_0
#define reg_FBDIV_PION_RATE0_7_0  AUTOSPEED8.BF.FBDIV_PION_RATE0_7_0
#define reg_FBDIV_PION_RATE0_9_8  AUTOSPEED8.BF.FBDIV_PION_RATE0_9_8

// 0x0504	AUTOSPEED9		TBD
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
} AUTOSPEED9_t;
__xdata __at( 0x6504 ) volatile AUTOSPEED9_t AUTOSPEED9;
#define reg_FBDIV_CAL_PION_RATE0_7_0  AUTOSPEED9.BF.FBDIV_CAL_PION_RATE0_7_0
#define reg_FBDIV_CAL_PION_RATE0_9_8  AUTOSPEED9.BF.FBDIV_CAL_PION_RATE0_9_8
#define reg_REFDIV_PION_RATE0_3_0  AUTOSPEED9.BF.REFDIV_PION_RATE0_3_0
#define reg_VIND_BAND_SEL_PION_RATE0  AUTOSPEED9.BF.VIND_BAND_SEL_PION_RATE0

// 0x0508	AUTOSPEED10		TBD
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
} AUTOSPEED10_t;
__xdata __at( 0x6508 ) volatile AUTOSPEED10_t AUTOSPEED10;
#define reg_DIV_1G_PION_RATE0_7_0  AUTOSPEED10.BF.DIV_1G_PION_RATE0_7_0
#define reg_DIV_1G_PION_RATE0_9_8  AUTOSPEED10.BF.DIV_1G_PION_RATE0_9_8
#define reg_DIV_1G_FBCK_PION_RATE0_7_0  AUTOSPEED10.BF.DIV_1G_FBCK_PION_RATE0_7_0
#define reg_DIV_1G_FBCK_PION_RATE0_9_8  AUTOSPEED10.BF.DIV_1G_FBCK_PION_RATE0_9_8

// 0x050c	AUTOSPEED11		TBD
typedef union {
	struct {
		uint8_t PLL_ICP_PION_RATE0_4_0                   : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE0_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE0_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE0_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED11_t;
__xdata __at( 0x650c ) volatile AUTOSPEED11_t AUTOSPEED11;
#define reg_PLL_ICP_PION_RATE0_4_0  AUTOSPEED11.BF.PLL_ICP_PION_RATE0_4_0
#define reg_PLL_LPFR_PION_RATE0_1_0  AUTOSPEED11.BF.PLL_LPFR_PION_RATE0_1_0
#define reg_PLL_LPFC_PION_RATE0_1_0  AUTOSPEED11.BF.PLL_LPFC_PION_RATE0_1_0
#define reg_INIT_TXFOFFS_PION_RATE0_7_0  AUTOSPEED11.BF.INIT_TXFOFFS_PION_RATE0_7_0

// 0x0510	AUTOSPEED12		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE0_12_8             : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE0_7_0              : 8;	/* [15:8]     r/w 8'hda*/
		uint8_t SPEED_THRESH_PION_RATE0_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE0                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED12_t;
__xdata __at( 0x6510 ) volatile AUTOSPEED12_t AUTOSPEED12;
#define reg_INIT_TXFOFFS_PION_RATE0_12_8  AUTOSPEED12.BF.INIT_TXFOFFS_PION_RATE0_12_8
#define reg_SPEED_THRESH_PION_RATE0_7_0  AUTOSPEED12.BF.SPEED_THRESH_PION_RATE0_7_0
#define reg_SPEED_THRESH_PION_RATE0_11_8  AUTOSPEED12.BF.SPEED_THRESH_PION_RATE0_11_8
#define reg_LCCAP_USB_PION_RATE0  AUTOSPEED12.BF.LCCAP_USB_PION_RATE0

// 0x0514	AUTOSPEED13		TBD
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
} AUTOSPEED13_t;
__xdata __at( 0x6514 ) volatile AUTOSPEED13_t AUTOSPEED13;
#define reg_SSC_ACC_FACTOR_PION_RATE0  AUTOSPEED13.BF.SSC_ACC_FACTOR_PION_RATE0
#define reg_SSC_STEP_125PPM_PION_RATE0_3_0  AUTOSPEED13.BF.SSC_STEP_125PPM_PION_RATE0_3_0
#define reg_SSC_M_PION_RATE0_7_0  AUTOSPEED13.BF.SSC_M_PION_RATE0_7_0
#define reg_SSC_M_PION_RATE0_12_8  AUTOSPEED13.BF.SSC_M_PION_RATE0_12_8

// 0x0518	AUTOSPEED14		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED14_t;
__xdata __at( 0x6518 ) volatile AUTOSPEED14_t AUTOSPEED14;

// 0x051c	AUTOSPEED15		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED15_t;
__xdata __at( 0x651c ) volatile AUTOSPEED15_t AUTOSPEED15;

// 0x0520	AUTOSPEED16		TBD
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
} AUTOSPEED16_t;
__xdata __at( 0x6520 ) volatile AUTOSPEED16_t AUTOSPEED16;
#define reg_PLL_REG_SEL_PION_RATE1_2_0  AUTOSPEED16.BF.PLL_REG_SEL_PION_RATE1_2_0
#define reg_PLL_RATE_SEL_PION_RATE1_3_0  AUTOSPEED16.BF.PLL_RATE_SEL_PION_RATE1_3_0
#define reg_FBDIV_PION_RATE1_7_0  AUTOSPEED16.BF.FBDIV_PION_RATE1_7_0
#define reg_FBDIV_PION_RATE1_9_8  AUTOSPEED16.BF.FBDIV_PION_RATE1_9_8

// 0x0524	AUTOSPEED17		TBD
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
} AUTOSPEED17_t;
__xdata __at( 0x6524 ) volatile AUTOSPEED17_t AUTOSPEED17;
#define reg_FBDIV_CAL_PION_RATE1_7_0  AUTOSPEED17.BF.FBDIV_CAL_PION_RATE1_7_0
#define reg_FBDIV_CAL_PION_RATE1_9_8  AUTOSPEED17.BF.FBDIV_CAL_PION_RATE1_9_8
#define reg_REFDIV_PION_RATE1_3_0  AUTOSPEED17.BF.REFDIV_PION_RATE1_3_0
#define reg_VIND_BAND_SEL_PION_RATE1  AUTOSPEED17.BF.VIND_BAND_SEL_PION_RATE1

// 0x0528	AUTOSPEED18		TBD
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
} AUTOSPEED18_t;
__xdata __at( 0x6528 ) volatile AUTOSPEED18_t AUTOSPEED18;
#define reg_DIV_1G_PION_RATE1_7_0  AUTOSPEED18.BF.DIV_1G_PION_RATE1_7_0
#define reg_DIV_1G_PION_RATE1_9_8  AUTOSPEED18.BF.DIV_1G_PION_RATE1_9_8
#define reg_DIV_1G_FBCK_PION_RATE1_7_0  AUTOSPEED18.BF.DIV_1G_FBCK_PION_RATE1_7_0
#define reg_DIV_1G_FBCK_PION_RATE1_9_8  AUTOSPEED18.BF.DIV_1G_FBCK_PION_RATE1_9_8

// 0x052c	AUTOSPEED19		TBD
typedef union {
	struct {
		uint8_t PLL_ICP_PION_RATE1_4_0                   : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE1_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE1_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE1_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED19_t;
__xdata __at( 0x652c ) volatile AUTOSPEED19_t AUTOSPEED19;
#define reg_PLL_ICP_PION_RATE1_4_0  AUTOSPEED19.BF.PLL_ICP_PION_RATE1_4_0
#define reg_PLL_LPFR_PION_RATE1_1_0  AUTOSPEED19.BF.PLL_LPFR_PION_RATE1_1_0
#define reg_PLL_LPFC_PION_RATE1_1_0  AUTOSPEED19.BF.PLL_LPFC_PION_RATE1_1_0
#define reg_INIT_TXFOFFS_PION_RATE1_7_0  AUTOSPEED19.BF.INIT_TXFOFFS_PION_RATE1_7_0

// 0x0530	AUTOSPEED20		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE1_12_8             : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE1_7_0              : 8;	/* [15:8]     r/w 8'hb6*/
		uint8_t SPEED_THRESH_PION_RATE1_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE1                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED20_t;
__xdata __at( 0x6530 ) volatile AUTOSPEED20_t AUTOSPEED20;
#define reg_INIT_TXFOFFS_PION_RATE1_12_8  AUTOSPEED20.BF.INIT_TXFOFFS_PION_RATE1_12_8
#define reg_SPEED_THRESH_PION_RATE1_7_0  AUTOSPEED20.BF.SPEED_THRESH_PION_RATE1_7_0
#define reg_SPEED_THRESH_PION_RATE1_11_8  AUTOSPEED20.BF.SPEED_THRESH_PION_RATE1_11_8
#define reg_LCCAP_USB_PION_RATE1  AUTOSPEED20.BF.LCCAP_USB_PION_RATE1

// 0x0534	AUTOSPEED21		TBD
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
} AUTOSPEED21_t;
__xdata __at( 0x6534 ) volatile AUTOSPEED21_t AUTOSPEED21;
#define reg_SSC_ACC_FACTOR_PION_RATE1  AUTOSPEED21.BF.SSC_ACC_FACTOR_PION_RATE1
#define reg_SSC_STEP_125PPM_PION_RATE1_3_0  AUTOSPEED21.BF.SSC_STEP_125PPM_PION_RATE1_3_0
#define reg_SSC_M_PION_RATE1_7_0  AUTOSPEED21.BF.SSC_M_PION_RATE1_7_0
#define reg_SSC_M_PION_RATE1_12_8  AUTOSPEED21.BF.SSC_M_PION_RATE1_12_8

// 0x0538	AUTOSPEED22		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED22_t;
__xdata __at( 0x6538 ) volatile AUTOSPEED22_t AUTOSPEED22;

// 0x053c	AUTOSPEED23		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED23_t;
__xdata __at( 0x653c ) volatile AUTOSPEED23_t AUTOSPEED23;

// 0x0540	AUTOSPEED24		TBD
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
} AUTOSPEED24_t;
__xdata __at( 0x6540 ) volatile AUTOSPEED24_t AUTOSPEED24;
#define reg_PLL_REG_SEL_PION_RATE2_2_0  AUTOSPEED24.BF.PLL_REG_SEL_PION_RATE2_2_0
#define reg_PLL_RATE_SEL_PION_RATE2_3_0  AUTOSPEED24.BF.PLL_RATE_SEL_PION_RATE2_3_0
#define reg_FBDIV_PION_RATE2_7_0  AUTOSPEED24.BF.FBDIV_PION_RATE2_7_0
#define reg_FBDIV_PION_RATE2_9_8  AUTOSPEED24.BF.FBDIV_PION_RATE2_9_8

// 0x0544	AUTOSPEED25		TBD
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
} AUTOSPEED25_t;
__xdata __at( 0x6544 ) volatile AUTOSPEED25_t AUTOSPEED25;
#define reg_FBDIV_CAL_PION_RATE2_7_0  AUTOSPEED25.BF.FBDIV_CAL_PION_RATE2_7_0
#define reg_FBDIV_CAL_PION_RATE2_9_8  AUTOSPEED25.BF.FBDIV_CAL_PION_RATE2_9_8
#define reg_REFDIV_PION_RATE2_3_0  AUTOSPEED25.BF.REFDIV_PION_RATE2_3_0
#define reg_VIND_BAND_SEL_PION_RATE2  AUTOSPEED25.BF.VIND_BAND_SEL_PION_RATE2

// 0x0548	AUTOSPEED26		TBD
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
} AUTOSPEED26_t;
__xdata __at( 0x6548 ) volatile AUTOSPEED26_t AUTOSPEED26;
#define reg_DIV_1G_PION_RATE2_7_0  AUTOSPEED26.BF.DIV_1G_PION_RATE2_7_0
#define reg_DIV_1G_PION_RATE2_9_8  AUTOSPEED26.BF.DIV_1G_PION_RATE2_9_8
#define reg_DIV_1G_FBCK_PION_RATE2_7_0  AUTOSPEED26.BF.DIV_1G_FBCK_PION_RATE2_7_0
#define reg_DIV_1G_FBCK_PION_RATE2_9_8  AUTOSPEED26.BF.DIV_1G_FBCK_PION_RATE2_9_8

// 0x054c	AUTOSPEED27		TBD
typedef union {
	struct {
		uint8_t PLL_ICP_PION_RATE2_4_0                   : 5;	/*  [4:0]     r/w 5'hc*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE2_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE2_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE2_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED27_t;
__xdata __at( 0x654c ) volatile AUTOSPEED27_t AUTOSPEED27;
#define reg_PLL_ICP_PION_RATE2_4_0  AUTOSPEED27.BF.PLL_ICP_PION_RATE2_4_0
#define reg_PLL_LPFR_PION_RATE2_1_0  AUTOSPEED27.BF.PLL_LPFR_PION_RATE2_1_0
#define reg_PLL_LPFC_PION_RATE2_1_0  AUTOSPEED27.BF.PLL_LPFC_PION_RATE2_1_0
#define reg_INIT_TXFOFFS_PION_RATE2_7_0  AUTOSPEED27.BF.INIT_TXFOFFS_PION_RATE2_7_0

// 0x0550	AUTOSPEED28		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE2_12_8             : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE2_7_0              : 8;	/* [15:8]     r/w 8'hf9*/
		uint8_t SPEED_THRESH_PION_RATE2_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE2                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED28_t;
__xdata __at( 0x6550 ) volatile AUTOSPEED28_t AUTOSPEED28;
#define reg_INIT_TXFOFFS_PION_RATE2_12_8  AUTOSPEED28.BF.INIT_TXFOFFS_PION_RATE2_12_8
#define reg_SPEED_THRESH_PION_RATE2_7_0  AUTOSPEED28.BF.SPEED_THRESH_PION_RATE2_7_0
#define reg_SPEED_THRESH_PION_RATE2_11_8  AUTOSPEED28.BF.SPEED_THRESH_PION_RATE2_11_8
#define reg_LCCAP_USB_PION_RATE2  AUTOSPEED28.BF.LCCAP_USB_PION_RATE2

// 0x0554	AUTOSPEED29		TBD
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
} AUTOSPEED29_t;
__xdata __at( 0x6554 ) volatile AUTOSPEED29_t AUTOSPEED29;
#define reg_SSC_ACC_FACTOR_PION_RATE2  AUTOSPEED29.BF.SSC_ACC_FACTOR_PION_RATE2
#define reg_SSC_STEP_125PPM_PION_RATE2_3_0  AUTOSPEED29.BF.SSC_STEP_125PPM_PION_RATE2_3_0
#define reg_SSC_M_PION_RATE2_7_0  AUTOSPEED29.BF.SSC_M_PION_RATE2_7_0
#define reg_SSC_M_PION_RATE2_12_8  AUTOSPEED29.BF.SSC_M_PION_RATE2_12_8

// 0x0558	AUTOSPEED30		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED30_t;
__xdata __at( 0x6558 ) volatile AUTOSPEED30_t AUTOSPEED30;

// 0x055c	AUTOSPEED31		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED31_t;
__xdata __at( 0x655c ) volatile AUTOSPEED31_t AUTOSPEED31;

// 0x0560	AUTOSPEED32		TBD
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
} AUTOSPEED32_t;
__xdata __at( 0x6560 ) volatile AUTOSPEED32_t AUTOSPEED32;
#define reg_PLL_REG_SEL_PION_RATE3_2_0  AUTOSPEED32.BF.PLL_REG_SEL_PION_RATE3_2_0
#define reg_PLL_RATE_SEL_PION_RATE3_3_0  AUTOSPEED32.BF.PLL_RATE_SEL_PION_RATE3_3_0
#define reg_FBDIV_PION_RATE3_7_0  AUTOSPEED32.BF.FBDIV_PION_RATE3_7_0
#define reg_FBDIV_PION_RATE3_9_8  AUTOSPEED32.BF.FBDIV_PION_RATE3_9_8

// 0x0564	AUTOSPEED33		TBD
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
} AUTOSPEED33_t;
__xdata __at( 0x6564 ) volatile AUTOSPEED33_t AUTOSPEED33;
#define reg_FBDIV_CAL_PION_RATE3_7_0  AUTOSPEED33.BF.FBDIV_CAL_PION_RATE3_7_0
#define reg_FBDIV_CAL_PION_RATE3_9_8  AUTOSPEED33.BF.FBDIV_CAL_PION_RATE3_9_8
#define reg_REFDIV_PION_RATE3_3_0  AUTOSPEED33.BF.REFDIV_PION_RATE3_3_0
#define reg_VIND_BAND_SEL_PION_RATE3  AUTOSPEED33.BF.VIND_BAND_SEL_PION_RATE3

// 0x0568	AUTOSPEED34		TBD
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
} AUTOSPEED34_t;
__xdata __at( 0x6568 ) volatile AUTOSPEED34_t AUTOSPEED34;
#define reg_DIV_1G_PION_RATE3_7_0  AUTOSPEED34.BF.DIV_1G_PION_RATE3_7_0
#define reg_DIV_1G_PION_RATE3_9_8  AUTOSPEED34.BF.DIV_1G_PION_RATE3_9_8
#define reg_DIV_1G_FBCK_PION_RATE3_7_0  AUTOSPEED34.BF.DIV_1G_FBCK_PION_RATE3_7_0
#define reg_DIV_1G_FBCK_PION_RATE3_9_8  AUTOSPEED34.BF.DIV_1G_FBCK_PION_RATE3_9_8

// 0x056c	AUTOSPEED35		TBD
typedef union {
	struct {
		uint8_t PLL_ICP_PION_RATE3_4_0                   : 5;	/*  [4:0]     r/w 5'h6*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE3_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE3_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE3_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED35_t;
__xdata __at( 0x656c ) volatile AUTOSPEED35_t AUTOSPEED35;
#define reg_PLL_ICP_PION_RATE3_4_0  AUTOSPEED35.BF.PLL_ICP_PION_RATE3_4_0
#define reg_PLL_LPFR_PION_RATE3_1_0  AUTOSPEED35.BF.PLL_LPFR_PION_RATE3_1_0
#define reg_PLL_LPFC_PION_RATE3_1_0  AUTOSPEED35.BF.PLL_LPFC_PION_RATE3_1_0
#define reg_INIT_TXFOFFS_PION_RATE3_7_0  AUTOSPEED35.BF.INIT_TXFOFFS_PION_RATE3_7_0

// 0x0570	AUTOSPEED36		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE3_12_8             : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE3_7_0              : 8;	/* [15:8]     r/w 8'hda*/
		uint8_t SPEED_THRESH_PION_RATE3_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE3                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED36_t;
__xdata __at( 0x6570 ) volatile AUTOSPEED36_t AUTOSPEED36;
#define reg_INIT_TXFOFFS_PION_RATE3_12_8  AUTOSPEED36.BF.INIT_TXFOFFS_PION_RATE3_12_8
#define reg_SPEED_THRESH_PION_RATE3_7_0  AUTOSPEED36.BF.SPEED_THRESH_PION_RATE3_7_0
#define reg_SPEED_THRESH_PION_RATE3_11_8  AUTOSPEED36.BF.SPEED_THRESH_PION_RATE3_11_8
#define reg_LCCAP_USB_PION_RATE3  AUTOSPEED36.BF.LCCAP_USB_PION_RATE3

// 0x0574	AUTOSPEED37		TBD
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
} AUTOSPEED37_t;
__xdata __at( 0x6574 ) volatile AUTOSPEED37_t AUTOSPEED37;
#define reg_SSC_ACC_FACTOR_PION_RATE3  AUTOSPEED37.BF.SSC_ACC_FACTOR_PION_RATE3
#define reg_SSC_STEP_125PPM_PION_RATE3_3_0  AUTOSPEED37.BF.SSC_STEP_125PPM_PION_RATE3_3_0
#define reg_SSC_M_PION_RATE3_7_0  AUTOSPEED37.BF.SSC_M_PION_RATE3_7_0
#define reg_SSC_M_PION_RATE3_12_8  AUTOSPEED37.BF.SSC_M_PION_RATE3_12_8

// 0x0578	AUTOSPEED38		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED38_t;
__xdata __at( 0x6578 ) volatile AUTOSPEED38_t AUTOSPEED38;

// 0x057c	AUTOSPEED39		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED39_t;
__xdata __at( 0x657c ) volatile AUTOSPEED39_t AUTOSPEED39;

// 0x0580	AUTOSPEED40		TBD
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
} AUTOSPEED40_t;
__xdata __at( 0x6580 ) volatile AUTOSPEED40_t AUTOSPEED40;
#define reg_PLL_REG_SEL_PION_RATE4_2_0  AUTOSPEED40.BF.PLL_REG_SEL_PION_RATE4_2_0
#define reg_PLL_RATE_SEL_PION_RATE4_3_0  AUTOSPEED40.BF.PLL_RATE_SEL_PION_RATE4_3_0
#define reg_FBDIV_PION_RATE4_7_0  AUTOSPEED40.BF.FBDIV_PION_RATE4_7_0
#define reg_FBDIV_PION_RATE4_9_8  AUTOSPEED40.BF.FBDIV_PION_RATE4_9_8

// 0x0584	AUTOSPEED41		TBD
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
} AUTOSPEED41_t;
__xdata __at( 0x6584 ) volatile AUTOSPEED41_t AUTOSPEED41;
#define reg_FBDIV_CAL_PION_RATE4_7_0  AUTOSPEED41.BF.FBDIV_CAL_PION_RATE4_7_0
#define reg_FBDIV_CAL_PION_RATE4_9_8  AUTOSPEED41.BF.FBDIV_CAL_PION_RATE4_9_8
#define reg_REFDIV_PION_RATE4_3_0  AUTOSPEED41.BF.REFDIV_PION_RATE4_3_0
#define reg_VIND_BAND_SEL_PION_RATE4  AUTOSPEED41.BF.VIND_BAND_SEL_PION_RATE4

// 0x0588	AUTOSPEED42		TBD
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
} AUTOSPEED42_t;
__xdata __at( 0x6588 ) volatile AUTOSPEED42_t AUTOSPEED42;
#define reg_DIV_1G_PION_RATE4_7_0  AUTOSPEED42.BF.DIV_1G_PION_RATE4_7_0
#define reg_DIV_1G_PION_RATE4_9_8  AUTOSPEED42.BF.DIV_1G_PION_RATE4_9_8
#define reg_DIV_1G_FBCK_PION_RATE4_7_0  AUTOSPEED42.BF.DIV_1G_FBCK_PION_RATE4_7_0
#define reg_DIV_1G_FBCK_PION_RATE4_9_8  AUTOSPEED42.BF.DIV_1G_FBCK_PION_RATE4_9_8

// 0x058c	AUTOSPEED43		TBD
typedef union {
	struct {
		uint8_t PLL_ICP_PION_RATE4_4_0                   : 5;	/*  [4:0]     r/w 5'h1f*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE4_1_0                  : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE4_1_0                  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE4_7_0              : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED43_t;
__xdata __at( 0x658c ) volatile AUTOSPEED43_t AUTOSPEED43;
#define reg_PLL_ICP_PION_RATE4_4_0  AUTOSPEED43.BF.PLL_ICP_PION_RATE4_4_0
#define reg_PLL_LPFR_PION_RATE4_1_0  AUTOSPEED43.BF.PLL_LPFR_PION_RATE4_1_0
#define reg_PLL_LPFC_PION_RATE4_1_0  AUTOSPEED43.BF.PLL_LPFC_PION_RATE4_1_0
#define reg_INIT_TXFOFFS_PION_RATE4_7_0  AUTOSPEED43.BF.INIT_TXFOFFS_PION_RATE4_7_0

// 0x0590	AUTOSPEED44		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE4_12_8             : 5;	/*  [4:0]     r/w 5'h4*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE4_7_0              : 8;	/* [15:8]     r/w 8'hc9*/
		uint8_t SPEED_THRESH_PION_RATE4_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE4                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED44_t;
__xdata __at( 0x6590 ) volatile AUTOSPEED44_t AUTOSPEED44;
#define reg_INIT_TXFOFFS_PION_RATE4_12_8  AUTOSPEED44.BF.INIT_TXFOFFS_PION_RATE4_12_8
#define reg_SPEED_THRESH_PION_RATE4_7_0  AUTOSPEED44.BF.SPEED_THRESH_PION_RATE4_7_0
#define reg_SPEED_THRESH_PION_RATE4_11_8  AUTOSPEED44.BF.SPEED_THRESH_PION_RATE4_11_8
#define reg_LCCAP_USB_PION_RATE4  AUTOSPEED44.BF.LCCAP_USB_PION_RATE4

// 0x0594	AUTOSPEED45		TBD
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
} AUTOSPEED45_t;
__xdata __at( 0x6594 ) volatile AUTOSPEED45_t AUTOSPEED45;
#define reg_SSC_ACC_FACTOR_PION_RATE4  AUTOSPEED45.BF.SSC_ACC_FACTOR_PION_RATE4
#define reg_SSC_STEP_125PPM_PION_RATE4_3_0  AUTOSPEED45.BF.SSC_STEP_125PPM_PION_RATE4_3_0
#define reg_SSC_M_PION_RATE4_7_0  AUTOSPEED45.BF.SSC_M_PION_RATE4_7_0
#define reg_SSC_M_PION_RATE4_12_8  AUTOSPEED45.BF.SSC_M_PION_RATE4_12_8

// 0x0598	AUTOSPEED46		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED46_t;
__xdata __at( 0x6598 ) volatile AUTOSPEED46_t AUTOSPEED46;

// 0x059c	AUTOSPEED47		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED47_t;
__xdata __at( 0x659c ) volatile AUTOSPEED47_t AUTOSPEED47;

// 0x05a0	AUTOSPEED48		TBD
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
} AUTOSPEED48_t;
__xdata __at( 0x65a0 ) volatile AUTOSPEED48_t AUTOSPEED48;
#define reg_PLL_REG_SEL_PION_RATE5_2_0  AUTOSPEED48.BF.PLL_REG_SEL_PION_RATE5_2_0
#define reg_PLL_RATE_SEL_PION_RATE5_3_0  AUTOSPEED48.BF.PLL_RATE_SEL_PION_RATE5_3_0
#define reg_FBDIV_PION_RATE5_7_0  AUTOSPEED48.BF.FBDIV_PION_RATE5_7_0
#define reg_FBDIV_PION_RATE5_9_8  AUTOSPEED48.BF.FBDIV_PION_RATE5_9_8

// 0x05a4	AUTOSPEED49		TBD
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
} AUTOSPEED49_t;
__xdata __at( 0x65a4 ) volatile AUTOSPEED49_t AUTOSPEED49;
#define reg_FBDIV_CAL_PION_RATE5_7_0  AUTOSPEED49.BF.FBDIV_CAL_PION_RATE5_7_0
#define reg_FBDIV_CAL_PION_RATE5_9_8  AUTOSPEED49.BF.FBDIV_CAL_PION_RATE5_9_8
#define reg_REFDIV_PION_RATE5_3_0  AUTOSPEED49.BF.REFDIV_PION_RATE5_3_0
#define reg_VIND_BAND_SEL_PION_RATE5  AUTOSPEED49.BF.VIND_BAND_SEL_PION_RATE5

// 0x05a8	AUTOSPEED50		TBD
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
} AUTOSPEED50_t;
__xdata __at( 0x65a8 ) volatile AUTOSPEED50_t AUTOSPEED50;
#define reg_DIV_1G_PION_RATE5_7_0  AUTOSPEED50.BF.DIV_1G_PION_RATE5_7_0
#define reg_DIV_1G_PION_RATE5_9_8  AUTOSPEED50.BF.DIV_1G_PION_RATE5_9_8
#define reg_DIV_1G_FBCK_PION_RATE5_7_0  AUTOSPEED50.BF.DIV_1G_FBCK_PION_RATE5_7_0
#define reg_DIV_1G_FBCK_PION_RATE5_9_8  AUTOSPEED50.BF.DIV_1G_FBCK_PION_RATE5_9_8

// 0x05ac	AUTOSPEED51		TBD
typedef union {
	struct {
		uint8_t PLL_ICP_PION_RATE5_4_0                   : 5;	/*  [4:0]     r/w 5'hf*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE5_1_0                  : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE5_1_0                  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE5_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED51_t;
__xdata __at( 0x65ac ) volatile AUTOSPEED51_t AUTOSPEED51;
#define reg_PLL_ICP_PION_RATE5_4_0  AUTOSPEED51.BF.PLL_ICP_PION_RATE5_4_0
#define reg_PLL_LPFR_PION_RATE5_1_0  AUTOSPEED51.BF.PLL_LPFR_PION_RATE5_1_0
#define reg_PLL_LPFC_PION_RATE5_1_0  AUTOSPEED51.BF.PLL_LPFC_PION_RATE5_1_0
#define reg_INIT_TXFOFFS_PION_RATE5_7_0  AUTOSPEED51.BF.INIT_TXFOFFS_PION_RATE5_7_0

// 0x05b0	AUTOSPEED52		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE5_12_8             : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE5_7_0              : 8;	/* [15:8]     r/w 8'hb9*/
		uint8_t SPEED_THRESH_PION_RATE5_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE5                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED52_t;
__xdata __at( 0x65b0 ) volatile AUTOSPEED52_t AUTOSPEED52;
#define reg_INIT_TXFOFFS_PION_RATE5_12_8  AUTOSPEED52.BF.INIT_TXFOFFS_PION_RATE5_12_8
#define reg_SPEED_THRESH_PION_RATE5_7_0  AUTOSPEED52.BF.SPEED_THRESH_PION_RATE5_7_0
#define reg_SPEED_THRESH_PION_RATE5_11_8  AUTOSPEED52.BF.SPEED_THRESH_PION_RATE5_11_8
#define reg_LCCAP_USB_PION_RATE5  AUTOSPEED52.BF.LCCAP_USB_PION_RATE5

// 0x05b4	AUTOSPEED53		TBD
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
} AUTOSPEED53_t;
__xdata __at( 0x65b4 ) volatile AUTOSPEED53_t AUTOSPEED53;
#define reg_SSC_ACC_FACTOR_PION_RATE5  AUTOSPEED53.BF.SSC_ACC_FACTOR_PION_RATE5
#define reg_SSC_STEP_125PPM_PION_RATE5_3_0  AUTOSPEED53.BF.SSC_STEP_125PPM_PION_RATE5_3_0
#define reg_SSC_M_PION_RATE5_7_0  AUTOSPEED53.BF.SSC_M_PION_RATE5_7_0
#define reg_SSC_M_PION_RATE5_12_8  AUTOSPEED53.BF.SSC_M_PION_RATE5_12_8

// 0x05b8	AUTOSPEED54		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED54_t;
__xdata __at( 0x65b8 ) volatile AUTOSPEED54_t AUTOSPEED54;

// 0x05bc	AUTOSPEED55		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED55_t;
__xdata __at( 0x65bc ) volatile AUTOSPEED55_t AUTOSPEED55;

// 0x05c0	AUTOSPEED56		TBD
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
} AUTOSPEED56_t;
__xdata __at( 0x65c0 ) volatile AUTOSPEED56_t AUTOSPEED56;
#define reg_PLL_REG_SEL_PION_RATE6_2_0  AUTOSPEED56.BF.PLL_REG_SEL_PION_RATE6_2_0
#define reg_PLL_RATE_SEL_PION_RATE6_3_0  AUTOSPEED56.BF.PLL_RATE_SEL_PION_RATE6_3_0
#define reg_FBDIV_PION_RATE6_7_0  AUTOSPEED56.BF.FBDIV_PION_RATE6_7_0
#define reg_FBDIV_PION_RATE6_9_8  AUTOSPEED56.BF.FBDIV_PION_RATE6_9_8

// 0x05c4	AUTOSPEED57		TBD
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
} AUTOSPEED57_t;
__xdata __at( 0x65c4 ) volatile AUTOSPEED57_t AUTOSPEED57;
#define reg_FBDIV_CAL_PION_RATE6_7_0  AUTOSPEED57.BF.FBDIV_CAL_PION_RATE6_7_0
#define reg_FBDIV_CAL_PION_RATE6_9_8  AUTOSPEED57.BF.FBDIV_CAL_PION_RATE6_9_8
#define reg_REFDIV_PION_RATE6_3_0  AUTOSPEED57.BF.REFDIV_PION_RATE6_3_0
#define reg_VIND_BAND_SEL_PION_RATE6  AUTOSPEED57.BF.VIND_BAND_SEL_PION_RATE6

// 0x05c8	AUTOSPEED58		TBD
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
} AUTOSPEED58_t;
__xdata __at( 0x65c8 ) volatile AUTOSPEED58_t AUTOSPEED58;
#define reg_DIV_1G_PION_RATE6_7_0  AUTOSPEED58.BF.DIV_1G_PION_RATE6_7_0
#define reg_DIV_1G_PION_RATE6_9_8  AUTOSPEED58.BF.DIV_1G_PION_RATE6_9_8
#define reg_DIV_1G_FBCK_PION_RATE6_7_0  AUTOSPEED58.BF.DIV_1G_FBCK_PION_RATE6_7_0
#define reg_DIV_1G_FBCK_PION_RATE6_9_8  AUTOSPEED58.BF.DIV_1G_FBCK_PION_RATE6_9_8

// 0x05cc	AUTOSPEED59		TBD
typedef union {
	struct {
		uint8_t PLL_ICP_PION_RATE6_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE6_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE6_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE6_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED59_t;
__xdata __at( 0x65cc ) volatile AUTOSPEED59_t AUTOSPEED59;
#define reg_PLL_ICP_PION_RATE6_4_0  AUTOSPEED59.BF.PLL_ICP_PION_RATE6_4_0
#define reg_PLL_LPFR_PION_RATE6_1_0  AUTOSPEED59.BF.PLL_LPFR_PION_RATE6_1_0
#define reg_PLL_LPFC_PION_RATE6_1_0  AUTOSPEED59.BF.PLL_LPFC_PION_RATE6_1_0
#define reg_INIT_TXFOFFS_PION_RATE6_7_0  AUTOSPEED59.BF.INIT_TXFOFFS_PION_RATE6_7_0

// 0x05d0	AUTOSPEED60		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE6_12_8             : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE6_7_0              : 8;	/* [15:8]     r/w 8'hb6*/
		uint8_t SPEED_THRESH_PION_RATE6_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE6                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED60_t;
__xdata __at( 0x65d0 ) volatile AUTOSPEED60_t AUTOSPEED60;
#define reg_INIT_TXFOFFS_PION_RATE6_12_8  AUTOSPEED60.BF.INIT_TXFOFFS_PION_RATE6_12_8
#define reg_SPEED_THRESH_PION_RATE6_7_0  AUTOSPEED60.BF.SPEED_THRESH_PION_RATE6_7_0
#define reg_SPEED_THRESH_PION_RATE6_11_8  AUTOSPEED60.BF.SPEED_THRESH_PION_RATE6_11_8
#define reg_LCCAP_USB_PION_RATE6  AUTOSPEED60.BF.LCCAP_USB_PION_RATE6

// 0x05d4	AUTOSPEED61		TBD
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
} AUTOSPEED61_t;
__xdata __at( 0x65d4 ) volatile AUTOSPEED61_t AUTOSPEED61;
#define reg_SSC_ACC_FACTOR_PION_RATE6  AUTOSPEED61.BF.SSC_ACC_FACTOR_PION_RATE6
#define reg_SSC_STEP_125PPM_PION_RATE6_3_0  AUTOSPEED61.BF.SSC_STEP_125PPM_PION_RATE6_3_0
#define reg_SSC_M_PION_RATE6_7_0  AUTOSPEED61.BF.SSC_M_PION_RATE6_7_0
#define reg_SSC_M_PION_RATE6_12_8  AUTOSPEED61.BF.SSC_M_PION_RATE6_12_8

// 0x05d8	AUTOSPEED62		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED62_t;
__xdata __at( 0x65d8 ) volatile AUTOSPEED62_t AUTOSPEED62;

// 0x05dc	AUTOSPEED63		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED63_t;
__xdata __at( 0x65dc ) volatile AUTOSPEED63_t AUTOSPEED63;

// 0x05e0	AUTOSPEED64		TBD
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
} AUTOSPEED64_t;
__xdata __at( 0x65e0 ) volatile AUTOSPEED64_t AUTOSPEED64;
#define reg_PLL_REG_SEL_PION_RATE7_2_0  AUTOSPEED64.BF.PLL_REG_SEL_PION_RATE7_2_0
#define reg_PLL_RATE_SEL_PION_RATE7_3_0  AUTOSPEED64.BF.PLL_RATE_SEL_PION_RATE7_3_0
#define reg_FBDIV_PION_RATE7_7_0  AUTOSPEED64.BF.FBDIV_PION_RATE7_7_0
#define reg_FBDIV_PION_RATE7_9_8  AUTOSPEED64.BF.FBDIV_PION_RATE7_9_8

// 0x05e4	AUTOSPEED65		TBD
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
} AUTOSPEED65_t;
__xdata __at( 0x65e4 ) volatile AUTOSPEED65_t AUTOSPEED65;
#define reg_FBDIV_CAL_PION_RATE7_7_0  AUTOSPEED65.BF.FBDIV_CAL_PION_RATE7_7_0
#define reg_FBDIV_CAL_PION_RATE7_9_8  AUTOSPEED65.BF.FBDIV_CAL_PION_RATE7_9_8
#define reg_REFDIV_PION_RATE7_3_0  AUTOSPEED65.BF.REFDIV_PION_RATE7_3_0
#define reg_VIND_BAND_SEL_PION_RATE7  AUTOSPEED65.BF.VIND_BAND_SEL_PION_RATE7

// 0x05e8	AUTOSPEED66		TBD
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
} AUTOSPEED66_t;
__xdata __at( 0x65e8 ) volatile AUTOSPEED66_t AUTOSPEED66;
#define reg_DIV_1G_PION_RATE7_7_0  AUTOSPEED66.BF.DIV_1G_PION_RATE7_7_0
#define reg_DIV_1G_PION_RATE7_9_8  AUTOSPEED66.BF.DIV_1G_PION_RATE7_9_8
#define reg_DIV_1G_FBCK_PION_RATE7_7_0  AUTOSPEED66.BF.DIV_1G_FBCK_PION_RATE7_7_0
#define reg_DIV_1G_FBCK_PION_RATE7_9_8  AUTOSPEED66.BF.DIV_1G_FBCK_PION_RATE7_9_8

// 0x05ec	AUTOSPEED67		TBD
typedef union {
	struct {
		uint8_t PLL_ICP_PION_RATE7_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE7_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE7_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE7_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED67_t;
__xdata __at( 0x65ec ) volatile AUTOSPEED67_t AUTOSPEED67;
#define reg_PLL_ICP_PION_RATE7_4_0  AUTOSPEED67.BF.PLL_ICP_PION_RATE7_4_0
#define reg_PLL_LPFR_PION_RATE7_1_0  AUTOSPEED67.BF.PLL_LPFR_PION_RATE7_1_0
#define reg_PLL_LPFC_PION_RATE7_1_0  AUTOSPEED67.BF.PLL_LPFC_PION_RATE7_1_0
#define reg_INIT_TXFOFFS_PION_RATE7_7_0  AUTOSPEED67.BF.INIT_TXFOFFS_PION_RATE7_7_0

// 0x05f0	AUTOSPEED68		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE7_12_8             : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE7_7_0              : 8;	/* [15:8]     r/w 8'he3*/
		uint8_t SPEED_THRESH_PION_RATE7_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE7                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED68_t;
__xdata __at( 0x65f0 ) volatile AUTOSPEED68_t AUTOSPEED68;
#define reg_INIT_TXFOFFS_PION_RATE7_12_8  AUTOSPEED68.BF.INIT_TXFOFFS_PION_RATE7_12_8
#define reg_SPEED_THRESH_PION_RATE7_7_0  AUTOSPEED68.BF.SPEED_THRESH_PION_RATE7_7_0
#define reg_SPEED_THRESH_PION_RATE7_11_8  AUTOSPEED68.BF.SPEED_THRESH_PION_RATE7_11_8
#define reg_LCCAP_USB_PION_RATE7  AUTOSPEED68.BF.LCCAP_USB_PION_RATE7

// 0x05f4	AUTOSPEED69		TBD
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
} AUTOSPEED69_t;
__xdata __at( 0x65f4 ) volatile AUTOSPEED69_t AUTOSPEED69;
#define reg_SSC_ACC_FACTOR_PION_RATE7  AUTOSPEED69.BF.SSC_ACC_FACTOR_PION_RATE7
#define reg_SSC_STEP_125PPM_PION_RATE7_3_0  AUTOSPEED69.BF.SSC_STEP_125PPM_PION_RATE7_3_0
#define reg_SSC_M_PION_RATE7_7_0  AUTOSPEED69.BF.SSC_M_PION_RATE7_7_0
#define reg_SSC_M_PION_RATE7_12_8  AUTOSPEED69.BF.SSC_M_PION_RATE7_12_8

// 0x05f8	AUTOSPEED70		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED70_t;
__xdata __at( 0x65f8 ) volatile AUTOSPEED70_t AUTOSPEED70;

// 0x05fc	AUTOSPEED71		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED71_t;
__xdata __at( 0x65fc ) volatile AUTOSPEED71_t AUTOSPEED71;

// 0x0600	AUTOSPEED72		TBD
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
} AUTOSPEED72_t;
__xdata __at( 0x6600 ) volatile AUTOSPEED72_t AUTOSPEED72;
#define reg_PLL_REG_SEL_PION_RATE8_2_0  AUTOSPEED72.BF.PLL_REG_SEL_PION_RATE8_2_0
#define reg_PLL_RATE_SEL_PION_RATE8_3_0  AUTOSPEED72.BF.PLL_RATE_SEL_PION_RATE8_3_0
#define reg_FBDIV_PION_RATE8_7_0  AUTOSPEED72.BF.FBDIV_PION_RATE8_7_0
#define reg_FBDIV_PION_RATE8_9_8  AUTOSPEED72.BF.FBDIV_PION_RATE8_9_8

// 0x0604	AUTOSPEED73		TBD
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
} AUTOSPEED73_t;
__xdata __at( 0x6604 ) volatile AUTOSPEED73_t AUTOSPEED73;
#define reg_FBDIV_CAL_PION_RATE8_7_0  AUTOSPEED73.BF.FBDIV_CAL_PION_RATE8_7_0
#define reg_FBDIV_CAL_PION_RATE8_9_8  AUTOSPEED73.BF.FBDIV_CAL_PION_RATE8_9_8
#define reg_REFDIV_PION_RATE8_3_0  AUTOSPEED73.BF.REFDIV_PION_RATE8_3_0
#define reg_VIND_BAND_SEL_PION_RATE8  AUTOSPEED73.BF.VIND_BAND_SEL_PION_RATE8

// 0x0608	AUTOSPEED74		TBD
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
} AUTOSPEED74_t;
__xdata __at( 0x6608 ) volatile AUTOSPEED74_t AUTOSPEED74;
#define reg_DIV_1G_PION_RATE8_7_0  AUTOSPEED74.BF.DIV_1G_PION_RATE8_7_0
#define reg_DIV_1G_PION_RATE8_9_8  AUTOSPEED74.BF.DIV_1G_PION_RATE8_9_8
#define reg_DIV_1G_FBCK_PION_RATE8_7_0  AUTOSPEED74.BF.DIV_1G_FBCK_PION_RATE8_7_0
#define reg_DIV_1G_FBCK_PION_RATE8_9_8  AUTOSPEED74.BF.DIV_1G_FBCK_PION_RATE8_9_8

// 0x060c	AUTOSPEED75		TBD
typedef union {
	struct {
		uint8_t PLL_ICP_PION_RATE8_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t PLL_LPFR_PION_RATE8_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t PLL_LPFC_PION_RATE8_1_0                  : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t INIT_TXFOFFS_PION_RATE8_7_0              : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED75_t;
__xdata __at( 0x660c ) volatile AUTOSPEED75_t AUTOSPEED75;
#define reg_PLL_ICP_PION_RATE8_4_0  AUTOSPEED75.BF.PLL_ICP_PION_RATE8_4_0
#define reg_PLL_LPFR_PION_RATE8_1_0  AUTOSPEED75.BF.PLL_LPFR_PION_RATE8_1_0
#define reg_PLL_LPFC_PION_RATE8_1_0  AUTOSPEED75.BF.PLL_LPFC_PION_RATE8_1_0
#define reg_INIT_TXFOFFS_PION_RATE8_7_0  AUTOSPEED75.BF.INIT_TXFOFFS_PION_RATE8_7_0

// 0x0610	AUTOSPEED76		TBD
typedef union {
	struct {
		uint8_t INIT_TXFOFFS_PION_RATE8_12_8             : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t SPEED_THRESH_PION_RATE8_7_0              : 8;	/* [15:8]     r/w 8'hda*/
		uint8_t SPEED_THRESH_PION_RATE8_11_8             : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t LCCAP_USB_PION_RATE8                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED76_t;
__xdata __at( 0x6610 ) volatile AUTOSPEED76_t AUTOSPEED76;
#define reg_INIT_TXFOFFS_PION_RATE8_12_8  AUTOSPEED76.BF.INIT_TXFOFFS_PION_RATE8_12_8
#define reg_SPEED_THRESH_PION_RATE8_7_0  AUTOSPEED76.BF.SPEED_THRESH_PION_RATE8_7_0
#define reg_SPEED_THRESH_PION_RATE8_11_8  AUTOSPEED76.BF.SPEED_THRESH_PION_RATE8_11_8
#define reg_LCCAP_USB_PION_RATE8  AUTOSPEED76.BF.LCCAP_USB_PION_RATE8

// 0x0614	AUTOSPEED77		TBD
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
} AUTOSPEED77_t;
__xdata __at( 0x6614 ) volatile AUTOSPEED77_t AUTOSPEED77;
#define reg_SSC_ACC_FACTOR_PION_RATE8  AUTOSPEED77.BF.SSC_ACC_FACTOR_PION_RATE8
#define reg_SSC_STEP_125PPM_PION_RATE8_3_0  AUTOSPEED77.BF.SSC_STEP_125PPM_PION_RATE8_3_0
#define reg_SSC_M_PION_RATE8_7_0  AUTOSPEED77.BF.SSC_M_PION_RATE8_7_0
#define reg_SSC_M_PION_RATE8_12_8  AUTOSPEED77.BF.SSC_M_PION_RATE8_12_8

// 0x0618	AUTOSPEED78		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED78_t;
__xdata __at( 0x6618 ) volatile AUTOSPEED78_t AUTOSPEED78;

// 0x061c	AUTOSPEED79		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED79_t;
__xdata __at( 0x661c ) volatile AUTOSPEED79_t AUTOSPEED79;

// 0x0620	AUTOSPEED80		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED80_t;
__xdata __at( 0x6620 ) volatile AUTOSPEED80_t AUTOSPEED80;

// 0x0624	AUTOSPEED81		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G0_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G0_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G0_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G0_LANE_2_0           : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED81_t;
__xdata __at( 0x6624 ) volatile AUTOSPEED81_t AUTOSPEED81;
#define reg_PLL_RATE_SEL_TX_G0_LANE_3_0  AUTOSPEED81.BF.PLL_RATE_SEL_TX_G0_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G0_LANE  AUTOSPEED81.BF.TX_VDDCAL_RATE_EN_G0_LANE
#define reg_TX_SPEEDDIV_G0_LANE_2_0  AUTOSPEED81.BF.TX_SPEEDDIV_G0_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G0_LANE_2_0  AUTOSPEED81.BF.TXREG_SPEEDTRK_CLK_G0_LANE_2_0

// 0x0628	AUTOSPEED82		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G0_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G0_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G0_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G0_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED82_t;
__xdata __at( 0x6628 ) volatile AUTOSPEED82_t AUTOSPEED82;
#define reg_TXREG_SPEEDTRK_DATA_G0_LANE_2_0  AUTOSPEED82.BF.TXREG_SPEEDTRK_DATA_G0_LANE_2_0
#define reg_TX_PAM2_EN_G0_LANE  AUTOSPEED82.BF.TX_PAM2_EN_G0_LANE
#define reg_TX_HALFRATE_EN_G0_LANE  AUTOSPEED82.BF.TX_HALFRATE_EN_G0_LANE
#define reg_TX_TRAIN_PAT_SEL_G0_LANE_1_0  AUTOSPEED82.BF.TX_TRAIN_PAT_SEL_G0_LANE_1_0

// 0x062c	AUTOSPEED83		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G0_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G0_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G0_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G0_LANE_2_0              : 3;	/*[26:24]     r/w 3'h3*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED83_t;
__xdata __at( 0x662c ) volatile AUTOSPEED83_t AUTOSPEED83;
#define reg_PLL_RATE_SEL_RX_G0_LANE_3_0  AUTOSPEED83.BF.PLL_RATE_SEL_RX_G0_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G0_LANE  AUTOSPEED83.BF.RX_VDDCAL_RATE_EN_G0_LANE
#define reg_RX_SPEED_DIV_G0_LANE_2_0  AUTOSPEED83.BF.RX_SPEED_DIV_G0_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G0_LANE_2_0  AUTOSPEED83.BF.DTL_CLK_SPEEDUP_G0_LANE_2_0

// 0x0630	AUTOSPEED84		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G0_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G0_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G0_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G0_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED84_t;
__xdata __at( 0x6630 ) volatile AUTOSPEED84_t AUTOSPEED84;
#define reg_RXINTPI_G0_LANE_3_0  AUTOSPEED84.BF.RXINTPI_G0_LANE_3_0
#define reg_INTPR_G0_LANE_1_0  AUTOSPEED84.BF.INTPR_G0_LANE_1_0
#define reg_DLL_FREQ_SEL_G0_LANE_2_0  AUTOSPEED84.BF.DLL_FREQ_SEL_G0_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G0_LANE_2_0  AUTOSPEED84.BF.EOM_DLL_FREQ_SEL_G0_LANE_2_0

// 0x0634	AUTOSPEED85		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G0_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G0_LANE_2_0           : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G0_LANE          : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G0_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED85_t;
__xdata __at( 0x6634 ) volatile AUTOSPEED85_t AUTOSPEED85;
#define reg_RXREG_SPEEDTRK_DATA_G0_LANE_2_0  AUTOSPEED85.BF.RXREG_SPEEDTRK_DATA_G0_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G0_LANE_2_0  AUTOSPEED85.BF.RXREG_SPEEDTRK_CLK_G0_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G0_LANE  AUTOSPEED85.BF.RXREG_SPEEDTRK_CLK_HALF_G0_LANE
#define reg_SELMUFI_G0_LANE_2_0  AUTOSPEED85.BF.SELMUFI_G0_LANE_2_0

// 0x0638	AUTOSPEED86		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G0_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G0_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G0_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G0_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED86_t;
__xdata __at( 0x6638 ) volatile AUTOSPEED86_t AUTOSPEED86;
#define reg_SELMUFF_G0_LANE_2_0  AUTOSPEED86.BF.SELMUFF_G0_LANE_2_0
#define reg_SELMUPI_G0_LANE_3_0  AUTOSPEED86.BF.SELMUPI_G0_LANE_3_0
#define reg_SELMUPF_G0_LANE_3_0  AUTOSPEED86.BF.SELMUPF_G0_LANE_3_0
#define reg_DTL_CLK_MODE_G0_LANE_1_0  AUTOSPEED86.BF.DTL_CLK_MODE_G0_LANE_1_0

// 0x063c	AUTOSPEED87		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G0_LANE_7_0           : 8;	/*  [7:0]     r/w 8'ha*/
		uint8_t RX_FOFFSET_EXTRA_M_G0_LANE_13_8          : 6;	/* [13:8]     r/w 6'h15*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G0_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G0_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED87_t;
__xdata __at( 0x663c ) volatile AUTOSPEED87_t AUTOSPEED87;
#define reg_RX_FOFFSET_EXTRA_M_G0_LANE_7_0  AUTOSPEED87.BF.RX_FOFFSET_EXTRA_M_G0_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G0_LANE_13_8  AUTOSPEED87.BF.RX_FOFFSET_EXTRA_M_G0_LANE_13_8
#define reg_INIT_RXFOFFS_G0_LANE_7_0  AUTOSPEED87.BF.INIT_RXFOFFS_G0_LANE_7_0
#define reg_INIT_RXFOFFS_G0_LANE_12_8  AUTOSPEED87.BF.INIT_RXFOFFS_G0_LANE_12_8

// 0x0640	AUTOSPEED88		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G0_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G0_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G0_LANE_2_0                : 3;	/*[18:16]     r/w 3'h2*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G0_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED88_t;
__xdata __at( 0x6640 ) volatile AUTOSPEED88_t AUTOSPEED88;
#define reg_PU_SMPLR_D_P2_G0_LANE_2_0  AUTOSPEED88.BF.PU_SMPLR_D_P2_G0_LANE_2_0
#define reg_PU_SMPLR_S_P2_G0_LANE_2_0  AUTOSPEED88.BF.PU_SMPLR_S_P2_G0_LANE_2_0
#define reg_PU_SMPLR_D_P4_G0_LANE_2_0  AUTOSPEED88.BF.PU_SMPLR_D_P4_G0_LANE_2_0
#define reg_PU_SMPLR_S_P4_G0_LANE_2_0  AUTOSPEED88.BF.PU_SMPLR_S_P4_G0_LANE_2_0

// 0x0644	AUTOSPEED89		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G0_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G0_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G0_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G0_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED89_t;
__xdata __at( 0x6644 ) volatile AUTOSPEED89_t AUTOSPEED89;
#define reg_PATH_DISABLE_EDGE_P2P4_G0_LANE  AUTOSPEED89.BF.PATH_DISABLE_EDGE_P2P4_G0_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G0_LANE  AUTOSPEED89.BF.PATH_DISABLE_EDGE_P1P3_G0_LANE
#define reg_PU_SMPLR_D_P1_G0_LANE_2_0  AUTOSPEED89.BF.PU_SMPLR_D_P1_G0_LANE_2_0
#define reg_PU_SMPLR_S_P1_G0_LANE_2_0  AUTOSPEED89.BF.PU_SMPLR_S_P1_G0_LANE_2_0

// 0x0648	AUTOSPEED90		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G0_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G0_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G0_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G0_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED90_t;
__xdata __at( 0x6648 ) volatile AUTOSPEED90_t AUTOSPEED90;
#define reg_PU_SMPLR_D_P3_G0_LANE_2_0  AUTOSPEED90.BF.PU_SMPLR_D_P3_G0_LANE_2_0
#define reg_PU_SMPLR_S_P3_G0_LANE_2_0  AUTOSPEED90.BF.PU_SMPLR_S_P3_G0_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G0_LANE  AUTOSPEED90.BF.PATH_DISABLE_D_P1P3_G0_LANE
#define reg_PATH_DISABLE_S_P1P3_G0_LANE  AUTOSPEED90.BF.PATH_DISABLE_S_P1P3_G0_LANE

// 0x064c	AUTOSPEED91		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G0_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G0_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G0_LANE_7_0                : 8;	/*[23:16]     r/w 8'h64*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G0_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED91_t;
__xdata __at( 0x664c ) volatile AUTOSPEED91_t AUTOSPEED91;
#define reg_RXCLK_25M_CTRL_G0_LANE_1_0  AUTOSPEED91.BF.RXCLK_25M_CTRL_G0_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G0_LANE  AUTOSPEED91.BF.RXCLK_25M_DIV1P5_EN_G0_LANE
#define reg_RXCLK_25M_DIV_G0_LANE_7_0  AUTOSPEED91.BF.RXCLK_25M_DIV_G0_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G0_LANE  AUTOSPEED91.BF.RXCLK_25M_FIX_DIV_EN_G0_LANE

// 0x0650	AUTOSPEED92		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G0_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G0_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G0_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G0_LANE_3_0            : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED92_t;
__xdata __at( 0x6650 ) volatile AUTOSPEED92_t AUTOSPEED92;
#define reg_CTLE_LOW_SPEED_SEL_G0_LANE_1_0  AUTOSPEED92.BF.CTLE_LOW_SPEED_SEL_G0_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G0_LANE  AUTOSPEED92.BF.CTLE_BYPASS1_EN_G0_LANE
#define reg_CTLE_BYPASS2_EN_G0_LANE  AUTOSPEED92.BF.CTLE_BYPASS2_EN_G0_LANE
#define reg_CTLE_CURRENT1_SEL_G0_LANE_3_0  AUTOSPEED92.BF.CTLE_CURRENT1_SEL_G0_LANE_3_0

// 0x0654	AUTOSPEED93		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G0_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G0_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G0_LANE_3_0             : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G0_LANE_3_0        : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED93_t;
__xdata __at( 0x6654 ) volatile AUTOSPEED93_t AUTOSPEED93;
#define reg_CTLE_RL1_SEL_G0_LANE_3_0  AUTOSPEED93.BF.CTLE_RL1_SEL_G0_LANE_3_0
#define reg_CTLE_RF_CTRL_G0_LANE_3_0  AUTOSPEED93.BF.CTLE_RF_CTRL_G0_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G0_LANE_3_0  AUTOSPEED93.BF.CTLE_RL1_TIA_SEL_G0_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G0_LANE_3_0  AUTOSPEED93.BF.CTLE_CURRENT1_TIA_SEL_G0_LANE_3_0

// 0x0658	AUTOSPEED94		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G0_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G0_LANE_3_0       : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G0_LANE_3_0            : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G0_LANE_3_0       : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED94_t;
__xdata __at( 0x6658 ) volatile AUTOSPEED94_t AUTOSPEED94;
#define reg_CTLE_RL2_SEL_G_P2_G0_LANE_3_0  AUTOSPEED94.BF.CTLE_RL2_SEL_G_P2_G0_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G0_LANE_3_0  AUTOSPEED94.BF.CTLE_CURRENT2_SEL_G_P2_G0_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G0_LANE_3_0  AUTOSPEED94.BF.CTLE_RL2_SEL_G_P4_G0_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G0_LANE_3_0  AUTOSPEED94.BF.CTLE_CURRENT2_SEL_G_P4_G0_LANE_3_0

// 0x065c	AUTOSPEED95		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G0_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G0_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G0_LANE                      : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G0_LANE_1_0     : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED95_t;
__xdata __at( 0x665c ) volatile AUTOSPEED95_t AUTOSPEED95;
#define reg_DFE_CUR_SEL_G_G0_LANE_3_0  AUTOSPEED95.BF.DFE_CUR_SEL_G_G0_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G0_LANE_1_0  AUTOSPEED95.BF.REG_DFE_RATE_MODE_G0_LANE_1_0
#define reg_REG_DFE_DIS_G0_LANE  AUTOSPEED95.BF.REG_DFE_DIS_G0_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G0_LANE_1_0  AUTOSPEED95.BF.REG_DFE_TAP_SETTLE_SCALE_G0_LANE_1_0

// 0x0660	AUTOSPEED96		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G0_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G0_LANE_7_0                 : 8;	/* [15:8]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G0_LANE                    : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G0_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED96_t;
__xdata __at( 0x6660 ) volatile AUTOSPEED96_t AUTOSPEED96;
#define reg_RXDLL_TEMP_A_G0_LANE_7_0  AUTOSPEED96.BF.RXDLL_TEMP_A_G0_LANE_7_0
#define reg_RXDLL_TEMP_B_G0_LANE_7_0  AUTOSPEED96.BF.RXDLL_TEMP_B_G0_LANE_7_0
#define reg_DFE_PAM2_MODE_G0_LANE  AUTOSPEED96.BF.DFE_PAM2_MODE_G0_LANE
#define reg_RX_PAM2_EN_G0_LANE  AUTOSPEED96.BF.RX_PAM2_EN_G0_LANE

// 0x0664	AUTOSPEED97		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G0_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED97_t;
__xdata __at( 0x6664 ) volatile AUTOSPEED97_t AUTOSPEED97;
#define reg_RX_HALFRATE_EN_G0_LANE  AUTOSPEED97.BF.RX_HALFRATE_EN_G0_LANE

// 0x0668	AUTOSPEED98		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G1_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G1_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G1_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h3*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G1_LANE_2_0           : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED98_t;
__xdata __at( 0x6668 ) volatile AUTOSPEED98_t AUTOSPEED98;
#define reg_PLL_RATE_SEL_TX_G1_LANE_3_0  AUTOSPEED98.BF.PLL_RATE_SEL_TX_G1_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G1_LANE  AUTOSPEED98.BF.TX_VDDCAL_RATE_EN_G1_LANE
#define reg_TX_SPEEDDIV_G1_LANE_2_0  AUTOSPEED98.BF.TX_SPEEDDIV_G1_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G1_LANE_2_0  AUTOSPEED98.BF.TXREG_SPEEDTRK_CLK_G1_LANE_2_0

// 0x066c	AUTOSPEED99		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G1_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G1_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G1_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G1_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED99_t;
__xdata __at( 0x666c ) volatile AUTOSPEED99_t AUTOSPEED99;
#define reg_TXREG_SPEEDTRK_DATA_G1_LANE_2_0  AUTOSPEED99.BF.TXREG_SPEEDTRK_DATA_G1_LANE_2_0
#define reg_TX_PAM2_EN_G1_LANE  AUTOSPEED99.BF.TX_PAM2_EN_G1_LANE
#define reg_TX_HALFRATE_EN_G1_LANE  AUTOSPEED99.BF.TX_HALFRATE_EN_G1_LANE
#define reg_TX_TRAIN_PAT_SEL_G1_LANE_1_0  AUTOSPEED99.BF.TX_TRAIN_PAT_SEL_G1_LANE_1_0

// 0x0670	AUTOSPEED100		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G1_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G1_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G1_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h6*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G1_LANE_2_0              : 3;	/*[26:24]     r/w 3'h2*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED100_t;
__xdata __at( 0x6670 ) volatile AUTOSPEED100_t AUTOSPEED100;
#define reg_PLL_RATE_SEL_RX_G1_LANE_3_0  AUTOSPEED100.BF.PLL_RATE_SEL_RX_G1_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G1_LANE  AUTOSPEED100.BF.RX_VDDCAL_RATE_EN_G1_LANE
#define reg_RX_SPEED_DIV_G1_LANE_2_0  AUTOSPEED100.BF.RX_SPEED_DIV_G1_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G1_LANE_2_0  AUTOSPEED100.BF.DTL_CLK_SPEEDUP_G1_LANE_2_0

// 0x0674	AUTOSPEED101		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'hb*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G1_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G1_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G1_LANE_2_0             : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED101_t;
__xdata __at( 0x6674 ) volatile AUTOSPEED101_t AUTOSPEED101;
#define reg_RXINTPI_G1_LANE_3_0  AUTOSPEED101.BF.RXINTPI_G1_LANE_3_0
#define reg_INTPR_G1_LANE_1_0  AUTOSPEED101.BF.INTPR_G1_LANE_1_0
#define reg_DLL_FREQ_SEL_G1_LANE_2_0  AUTOSPEED101.BF.DLL_FREQ_SEL_G1_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G1_LANE_2_0  AUTOSPEED101.BF.EOM_DLL_FREQ_SEL_G1_LANE_2_0

// 0x0678	AUTOSPEED102		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G1_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G1_LANE_2_0           : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G1_LANE          : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G1_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED102_t;
__xdata __at( 0x6678 ) volatile AUTOSPEED102_t AUTOSPEED102;
#define reg_RXREG_SPEEDTRK_DATA_G1_LANE_2_0  AUTOSPEED102.BF.RXREG_SPEEDTRK_DATA_G1_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G1_LANE_2_0  AUTOSPEED102.BF.RXREG_SPEEDTRK_CLK_G1_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G1_LANE  AUTOSPEED102.BF.RXREG_SPEEDTRK_CLK_HALF_G1_LANE
#define reg_SELMUFI_G1_LANE_2_0  AUTOSPEED102.BF.SELMUFI_G1_LANE_2_0

// 0x067c	AUTOSPEED103		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G1_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G1_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G1_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G1_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED103_t;
__xdata __at( 0x667c ) volatile AUTOSPEED103_t AUTOSPEED103;
#define reg_SELMUFF_G1_LANE_2_0  AUTOSPEED103.BF.SELMUFF_G1_LANE_2_0
#define reg_SELMUPI_G1_LANE_3_0  AUTOSPEED103.BF.SELMUPI_G1_LANE_3_0
#define reg_SELMUPF_G1_LANE_3_0  AUTOSPEED103.BF.SELMUPF_G1_LANE_3_0
#define reg_DTL_CLK_MODE_G1_LANE_1_0  AUTOSPEED103.BF.DTL_CLK_MODE_G1_LANE_1_0

// 0x0680	AUTOSPEED104		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G1_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h4d*/
		uint8_t RX_FOFFSET_EXTRA_M_G1_LANE_13_8          : 6;	/* [13:8]     r/w 6'h1a*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G1_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G1_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED104_t;
__xdata __at( 0x6680 ) volatile AUTOSPEED104_t AUTOSPEED104;
#define reg_RX_FOFFSET_EXTRA_M_G1_LANE_7_0  AUTOSPEED104.BF.RX_FOFFSET_EXTRA_M_G1_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G1_LANE_13_8  AUTOSPEED104.BF.RX_FOFFSET_EXTRA_M_G1_LANE_13_8
#define reg_INIT_RXFOFFS_G1_LANE_7_0  AUTOSPEED104.BF.INIT_RXFOFFS_G1_LANE_7_0
#define reg_INIT_RXFOFFS_G1_LANE_12_8  AUTOSPEED104.BF.INIT_RXFOFFS_G1_LANE_12_8

// 0x0684	AUTOSPEED105		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G1_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G1_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G1_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G1_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED105_t;
__xdata __at( 0x6684 ) volatile AUTOSPEED105_t AUTOSPEED105;
#define reg_PU_SMPLR_D_P2_G1_LANE_2_0  AUTOSPEED105.BF.PU_SMPLR_D_P2_G1_LANE_2_0
#define reg_PU_SMPLR_S_P2_G1_LANE_2_0  AUTOSPEED105.BF.PU_SMPLR_S_P2_G1_LANE_2_0
#define reg_PU_SMPLR_D_P4_G1_LANE_2_0  AUTOSPEED105.BF.PU_SMPLR_D_P4_G1_LANE_2_0
#define reg_PU_SMPLR_S_P4_G1_LANE_2_0  AUTOSPEED105.BF.PU_SMPLR_S_P4_G1_LANE_2_0

// 0x0688	AUTOSPEED106		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G1_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G1_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G1_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G1_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED106_t;
__xdata __at( 0x6688 ) volatile AUTOSPEED106_t AUTOSPEED106;
#define reg_PATH_DISABLE_EDGE_P2P4_G1_LANE  AUTOSPEED106.BF.PATH_DISABLE_EDGE_P2P4_G1_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G1_LANE  AUTOSPEED106.BF.PATH_DISABLE_EDGE_P1P3_G1_LANE
#define reg_PU_SMPLR_D_P1_G1_LANE_2_0  AUTOSPEED106.BF.PU_SMPLR_D_P1_G1_LANE_2_0
#define reg_PU_SMPLR_S_P1_G1_LANE_2_0  AUTOSPEED106.BF.PU_SMPLR_S_P1_G1_LANE_2_0

// 0x068c	AUTOSPEED107		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G1_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G1_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G1_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G1_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED107_t;
__xdata __at( 0x668c ) volatile AUTOSPEED107_t AUTOSPEED107;
#define reg_PU_SMPLR_D_P3_G1_LANE_2_0  AUTOSPEED107.BF.PU_SMPLR_D_P3_G1_LANE_2_0
#define reg_PU_SMPLR_S_P3_G1_LANE_2_0  AUTOSPEED107.BF.PU_SMPLR_S_P3_G1_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G1_LANE  AUTOSPEED107.BF.PATH_DISABLE_D_P1P3_G1_LANE
#define reg_PATH_DISABLE_S_P1P3_G1_LANE  AUTOSPEED107.BF.PATH_DISABLE_S_P1P3_G1_LANE

// 0x0690	AUTOSPEED108		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G1_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G1_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G1_LANE_7_0                : 8;	/*[23:16]     r/w 8'h3e*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G1_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED108_t;
__xdata __at( 0x6690 ) volatile AUTOSPEED108_t AUTOSPEED108;
#define reg_RXCLK_25M_CTRL_G1_LANE_1_0  AUTOSPEED108.BF.RXCLK_25M_CTRL_G1_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G1_LANE  AUTOSPEED108.BF.RXCLK_25M_DIV1P5_EN_G1_LANE
#define reg_RXCLK_25M_DIV_G1_LANE_7_0  AUTOSPEED108.BF.RXCLK_25M_DIV_G1_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G1_LANE  AUTOSPEED108.BF.RXCLK_25M_FIX_DIV_EN_G1_LANE

// 0x0694	AUTOSPEED109		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G1_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G1_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G1_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G1_LANE_3_0            : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED109_t;
__xdata __at( 0x6694 ) volatile AUTOSPEED109_t AUTOSPEED109;
#define reg_CTLE_LOW_SPEED_SEL_G1_LANE_1_0  AUTOSPEED109.BF.CTLE_LOW_SPEED_SEL_G1_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G1_LANE  AUTOSPEED109.BF.CTLE_BYPASS1_EN_G1_LANE
#define reg_CTLE_BYPASS2_EN_G1_LANE  AUTOSPEED109.BF.CTLE_BYPASS2_EN_G1_LANE
#define reg_CTLE_CURRENT1_SEL_G1_LANE_3_0  AUTOSPEED109.BF.CTLE_CURRENT1_SEL_G1_LANE_3_0

// 0x0698	AUTOSPEED110		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G1_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G1_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G1_LANE_3_0             : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G1_LANE_3_0        : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED110_t;
__xdata __at( 0x6698 ) volatile AUTOSPEED110_t AUTOSPEED110;
#define reg_CTLE_RL1_SEL_G1_LANE_3_0  AUTOSPEED110.BF.CTLE_RL1_SEL_G1_LANE_3_0
#define reg_CTLE_RF_CTRL_G1_LANE_3_0  AUTOSPEED110.BF.CTLE_RF_CTRL_G1_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G1_LANE_3_0  AUTOSPEED110.BF.CTLE_RL1_TIA_SEL_G1_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G1_LANE_3_0  AUTOSPEED110.BF.CTLE_CURRENT1_TIA_SEL_G1_LANE_3_0

// 0x069c	AUTOSPEED111		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G1_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G1_LANE_3_0       : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G1_LANE_3_0            : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G1_LANE_3_0       : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED111_t;
__xdata __at( 0x669c ) volatile AUTOSPEED111_t AUTOSPEED111;
#define reg_CTLE_RL2_SEL_G_P2_G1_LANE_3_0  AUTOSPEED111.BF.CTLE_RL2_SEL_G_P2_G1_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G1_LANE_3_0  AUTOSPEED111.BF.CTLE_CURRENT2_SEL_G_P2_G1_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G1_LANE_3_0  AUTOSPEED111.BF.CTLE_RL2_SEL_G_P4_G1_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G1_LANE_3_0  AUTOSPEED111.BF.CTLE_CURRENT2_SEL_G_P4_G1_LANE_3_0

// 0x06a0	AUTOSPEED112		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G1_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G1_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G1_LANE                      : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G1_LANE_1_0     : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED112_t;
__xdata __at( 0x66a0 ) volatile AUTOSPEED112_t AUTOSPEED112;
#define reg_DFE_CUR_SEL_G_G1_LANE_3_0  AUTOSPEED112.BF.DFE_CUR_SEL_G_G1_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G1_LANE_1_0  AUTOSPEED112.BF.REG_DFE_RATE_MODE_G1_LANE_1_0
#define reg_REG_DFE_DIS_G1_LANE  AUTOSPEED112.BF.REG_DFE_DIS_G1_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G1_LANE_1_0  AUTOSPEED112.BF.REG_DFE_TAP_SETTLE_SCALE_G1_LANE_1_0

// 0x06a4	AUTOSPEED113		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G1_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G1_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha9*/
		uint8_t DFE_PAM2_MODE_G1_LANE                    : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G1_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED113_t;
__xdata __at( 0x66a4 ) volatile AUTOSPEED113_t AUTOSPEED113;
#define reg_RXDLL_TEMP_A_G1_LANE_7_0  AUTOSPEED113.BF.RXDLL_TEMP_A_G1_LANE_7_0
#define reg_RXDLL_TEMP_B_G1_LANE_7_0  AUTOSPEED113.BF.RXDLL_TEMP_B_G1_LANE_7_0
#define reg_DFE_PAM2_MODE_G1_LANE  AUTOSPEED113.BF.DFE_PAM2_MODE_G1_LANE
#define reg_RX_PAM2_EN_G1_LANE  AUTOSPEED113.BF.RX_PAM2_EN_G1_LANE

// 0x06a8	AUTOSPEED114		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G1_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED114_t;
__xdata __at( 0x66a8 ) volatile AUTOSPEED114_t AUTOSPEED114;
#define reg_RX_HALFRATE_EN_G1_LANE  AUTOSPEED114.BF.RX_HALFRATE_EN_G1_LANE

// 0x06ac	AUTOSPEED115		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G2_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G2_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G2_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h2*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G2_LANE_2_0           : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED115_t;
__xdata __at( 0x66ac ) volatile AUTOSPEED115_t AUTOSPEED115;
#define reg_PLL_RATE_SEL_TX_G2_LANE_3_0  AUTOSPEED115.BF.PLL_RATE_SEL_TX_G2_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G2_LANE  AUTOSPEED115.BF.TX_VDDCAL_RATE_EN_G2_LANE
#define reg_TX_SPEEDDIV_G2_LANE_2_0  AUTOSPEED115.BF.TX_SPEEDDIV_G2_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G2_LANE_2_0  AUTOSPEED115.BF.TXREG_SPEEDTRK_CLK_G2_LANE_2_0

// 0x06b0	AUTOSPEED116		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G2_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G2_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G2_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G2_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED116_t;
__xdata __at( 0x66b0 ) volatile AUTOSPEED116_t AUTOSPEED116;
#define reg_TXREG_SPEEDTRK_DATA_G2_LANE_2_0  AUTOSPEED116.BF.TXREG_SPEEDTRK_DATA_G2_LANE_2_0
#define reg_TX_PAM2_EN_G2_LANE  AUTOSPEED116.BF.TX_PAM2_EN_G2_LANE
#define reg_TX_HALFRATE_EN_G2_LANE  AUTOSPEED116.BF.TX_HALFRATE_EN_G2_LANE
#define reg_TX_TRAIN_PAT_SEL_G2_LANE_1_0  AUTOSPEED116.BF.TX_TRAIN_PAT_SEL_G2_LANE_1_0

// 0x06b4	AUTOSPEED117		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G2_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G2_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G2_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G2_LANE_2_0              : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED117_t;
__xdata __at( 0x66b4 ) volatile AUTOSPEED117_t AUTOSPEED117;
#define reg_PLL_RATE_SEL_RX_G2_LANE_3_0  AUTOSPEED117.BF.PLL_RATE_SEL_RX_G2_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G2_LANE  AUTOSPEED117.BF.RX_VDDCAL_RATE_EN_G2_LANE
#define reg_RX_SPEED_DIV_G2_LANE_2_0  AUTOSPEED117.BF.RX_SPEED_DIV_G2_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G2_LANE_2_0  AUTOSPEED117.BF.DTL_CLK_SPEEDUP_G2_LANE_2_0

// 0x06b8	AUTOSPEED118		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G2_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G2_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G2_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G2_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED118_t;
__xdata __at( 0x66b8 ) volatile AUTOSPEED118_t AUTOSPEED118;
#define reg_RXINTPI_G2_LANE_3_0  AUTOSPEED118.BF.RXINTPI_G2_LANE_3_0
#define reg_INTPR_G2_LANE_1_0  AUTOSPEED118.BF.INTPR_G2_LANE_1_0
#define reg_DLL_FREQ_SEL_G2_LANE_2_0  AUTOSPEED118.BF.DLL_FREQ_SEL_G2_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G2_LANE_2_0  AUTOSPEED118.BF.EOM_DLL_FREQ_SEL_G2_LANE_2_0

// 0x06bc	AUTOSPEED119		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G2_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G2_LANE_2_0           : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G2_LANE          : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G2_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED119_t;
__xdata __at( 0x66bc ) volatile AUTOSPEED119_t AUTOSPEED119;
#define reg_RXREG_SPEEDTRK_DATA_G2_LANE_2_0  AUTOSPEED119.BF.RXREG_SPEEDTRK_DATA_G2_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G2_LANE_2_0  AUTOSPEED119.BF.RXREG_SPEEDTRK_CLK_G2_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G2_LANE  AUTOSPEED119.BF.RXREG_SPEEDTRK_CLK_HALF_G2_LANE
#define reg_SELMUFI_G2_LANE_2_0  AUTOSPEED119.BF.SELMUFI_G2_LANE_2_0

// 0x06c0	AUTOSPEED120		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G2_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G2_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G2_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G2_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED120_t;
__xdata __at( 0x66c0 ) volatile AUTOSPEED120_t AUTOSPEED120;
#define reg_SELMUFF_G2_LANE_2_0  AUTOSPEED120.BF.SELMUFF_G2_LANE_2_0
#define reg_SELMUPI_G2_LANE_3_0  AUTOSPEED120.BF.SELMUPI_G2_LANE_3_0
#define reg_SELMUPF_G2_LANE_3_0  AUTOSPEED120.BF.SELMUPF_G2_LANE_3_0
#define reg_DTL_CLK_MODE_G2_LANE_1_0  AUTOSPEED120.BF.DTL_CLK_MODE_G2_LANE_1_0

// 0x06c4	AUTOSPEED121		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G2_LANE_7_0           : 8;	/*  [7:0]     r/w 8'hb3*/
		uint8_t RX_FOFFSET_EXTRA_M_G2_LANE_13_8          : 6;	/* [13:8]     r/w 6'h15*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G2_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G2_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED121_t;
__xdata __at( 0x66c4 ) volatile AUTOSPEED121_t AUTOSPEED121;
#define reg_RX_FOFFSET_EXTRA_M_G2_LANE_7_0  AUTOSPEED121.BF.RX_FOFFSET_EXTRA_M_G2_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G2_LANE_13_8  AUTOSPEED121.BF.RX_FOFFSET_EXTRA_M_G2_LANE_13_8
#define reg_INIT_RXFOFFS_G2_LANE_7_0  AUTOSPEED121.BF.INIT_RXFOFFS_G2_LANE_7_0
#define reg_INIT_RXFOFFS_G2_LANE_12_8  AUTOSPEED121.BF.INIT_RXFOFFS_G2_LANE_12_8

// 0x06c8	AUTOSPEED122		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G2_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G2_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G2_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G2_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED122_t;
__xdata __at( 0x66c8 ) volatile AUTOSPEED122_t AUTOSPEED122;
#define reg_PU_SMPLR_D_P2_G2_LANE_2_0  AUTOSPEED122.BF.PU_SMPLR_D_P2_G2_LANE_2_0
#define reg_PU_SMPLR_S_P2_G2_LANE_2_0  AUTOSPEED122.BF.PU_SMPLR_S_P2_G2_LANE_2_0
#define reg_PU_SMPLR_D_P4_G2_LANE_2_0  AUTOSPEED122.BF.PU_SMPLR_D_P4_G2_LANE_2_0
#define reg_PU_SMPLR_S_P4_G2_LANE_2_0  AUTOSPEED122.BF.PU_SMPLR_S_P4_G2_LANE_2_0

// 0x06cc	AUTOSPEED123		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G2_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G2_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G2_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G2_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED123_t;
__xdata __at( 0x66cc ) volatile AUTOSPEED123_t AUTOSPEED123;
#define reg_PATH_DISABLE_EDGE_P2P4_G2_LANE  AUTOSPEED123.BF.PATH_DISABLE_EDGE_P2P4_G2_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G2_LANE  AUTOSPEED123.BF.PATH_DISABLE_EDGE_P1P3_G2_LANE
#define reg_PU_SMPLR_D_P1_G2_LANE_2_0  AUTOSPEED123.BF.PU_SMPLR_D_P1_G2_LANE_2_0
#define reg_PU_SMPLR_S_P1_G2_LANE_2_0  AUTOSPEED123.BF.PU_SMPLR_S_P1_G2_LANE_2_0

// 0x06d0	AUTOSPEED124		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G2_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G2_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G2_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G2_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED124_t;
__xdata __at( 0x66d0 ) volatile AUTOSPEED124_t AUTOSPEED124;
#define reg_PU_SMPLR_D_P3_G2_LANE_2_0  AUTOSPEED124.BF.PU_SMPLR_D_P3_G2_LANE_2_0
#define reg_PU_SMPLR_S_P3_G2_LANE_2_0  AUTOSPEED124.BF.PU_SMPLR_S_P3_G2_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G2_LANE  AUTOSPEED124.BF.PATH_DISABLE_D_P1P3_G2_LANE
#define reg_PATH_DISABLE_S_P1P3_G2_LANE  AUTOSPEED124.BF.PATH_DISABLE_S_P1P3_G2_LANE

// 0x06d4	AUTOSPEED125		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G2_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G2_LANE              : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G2_LANE_7_0                : 8;	/*[23:16]     r/w 8'h89*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G2_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED125_t;
__xdata __at( 0x66d4 ) volatile AUTOSPEED125_t AUTOSPEED125;
#define reg_RXCLK_25M_CTRL_G2_LANE_1_0  AUTOSPEED125.BF.RXCLK_25M_CTRL_G2_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G2_LANE  AUTOSPEED125.BF.RXCLK_25M_DIV1P5_EN_G2_LANE
#define reg_RXCLK_25M_DIV_G2_LANE_7_0  AUTOSPEED125.BF.RXCLK_25M_DIV_G2_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G2_LANE  AUTOSPEED125.BF.RXCLK_25M_FIX_DIV_EN_G2_LANE

// 0x06d8	AUTOSPEED126		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G2_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G2_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G2_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G2_LANE_3_0            : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED126_t;
__xdata __at( 0x66d8 ) volatile AUTOSPEED126_t AUTOSPEED126;
#define reg_CTLE_LOW_SPEED_SEL_G2_LANE_1_0  AUTOSPEED126.BF.CTLE_LOW_SPEED_SEL_G2_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G2_LANE  AUTOSPEED126.BF.CTLE_BYPASS1_EN_G2_LANE
#define reg_CTLE_BYPASS2_EN_G2_LANE  AUTOSPEED126.BF.CTLE_BYPASS2_EN_G2_LANE
#define reg_CTLE_CURRENT1_SEL_G2_LANE_3_0  AUTOSPEED126.BF.CTLE_CURRENT1_SEL_G2_LANE_3_0

// 0x06dc	AUTOSPEED127		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G2_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G2_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G2_LANE_3_0             : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G2_LANE_3_0        : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED127_t;
__xdata __at( 0x66dc ) volatile AUTOSPEED127_t AUTOSPEED127;
#define reg_CTLE_RL1_SEL_G2_LANE_3_0  AUTOSPEED127.BF.CTLE_RL1_SEL_G2_LANE_3_0
#define reg_CTLE_RF_CTRL_G2_LANE_3_0  AUTOSPEED127.BF.CTLE_RF_CTRL_G2_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G2_LANE_3_0  AUTOSPEED127.BF.CTLE_RL1_TIA_SEL_G2_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G2_LANE_3_0  AUTOSPEED127.BF.CTLE_CURRENT1_TIA_SEL_G2_LANE_3_0

// 0x06e0	AUTOSPEED128		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G2_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G2_LANE_3_0       : 4;	/* [11:8]     r/w 4'h7*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G2_LANE_3_0            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G2_LANE_3_0       : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED128_t;
__xdata __at( 0x66e0 ) volatile AUTOSPEED128_t AUTOSPEED128;
#define reg_CTLE_RL2_SEL_G_P2_G2_LANE_3_0  AUTOSPEED128.BF.CTLE_RL2_SEL_G_P2_G2_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G2_LANE_3_0  AUTOSPEED128.BF.CTLE_CURRENT2_SEL_G_P2_G2_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G2_LANE_3_0  AUTOSPEED128.BF.CTLE_RL2_SEL_G_P4_G2_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G2_LANE_3_0  AUTOSPEED128.BF.CTLE_CURRENT2_SEL_G_P4_G2_LANE_3_0

// 0x06e4	AUTOSPEED129		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G2_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G2_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G2_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G2_LANE_1_0     : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED129_t;
__xdata __at( 0x66e4 ) volatile AUTOSPEED129_t AUTOSPEED129;
#define reg_DFE_CUR_SEL_G_G2_LANE_3_0  AUTOSPEED129.BF.DFE_CUR_SEL_G_G2_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G2_LANE_1_0  AUTOSPEED129.BF.REG_DFE_RATE_MODE_G2_LANE_1_0
#define reg_REG_DFE_DIS_G2_LANE  AUTOSPEED129.BF.REG_DFE_DIS_G2_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G2_LANE_1_0  AUTOSPEED129.BF.REG_DFE_TAP_SETTLE_SCALE_G2_LANE_1_0

// 0x06e8	AUTOSPEED130		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G2_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G2_LANE_7_0                 : 8;	/* [15:8]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G2_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G2_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED130_t;
__xdata __at( 0x66e8 ) volatile AUTOSPEED130_t AUTOSPEED130;
#define reg_RXDLL_TEMP_A_G2_LANE_7_0  AUTOSPEED130.BF.RXDLL_TEMP_A_G2_LANE_7_0
#define reg_RXDLL_TEMP_B_G2_LANE_7_0  AUTOSPEED130.BF.RXDLL_TEMP_B_G2_LANE_7_0
#define reg_DFE_PAM2_MODE_G2_LANE  AUTOSPEED130.BF.DFE_PAM2_MODE_G2_LANE
#define reg_RX_PAM2_EN_G2_LANE  AUTOSPEED130.BF.RX_PAM2_EN_G2_LANE

// 0x06ec	AUTOSPEED131		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G2_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED131_t;
__xdata __at( 0x66ec ) volatile AUTOSPEED131_t AUTOSPEED131;
#define reg_RX_HALFRATE_EN_G2_LANE  AUTOSPEED131.BF.RX_HALFRATE_EN_G2_LANE

// 0x06f0	AUTOSPEED132		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G3_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G3_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G3_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h2*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G3_LANE_2_0           : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED132_t;
__xdata __at( 0x66f0 ) volatile AUTOSPEED132_t AUTOSPEED132;
#define reg_PLL_RATE_SEL_TX_G3_LANE_3_0  AUTOSPEED132.BF.PLL_RATE_SEL_TX_G3_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G3_LANE  AUTOSPEED132.BF.TX_VDDCAL_RATE_EN_G3_LANE
#define reg_TX_SPEEDDIV_G3_LANE_2_0  AUTOSPEED132.BF.TX_SPEEDDIV_G3_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G3_LANE_2_0  AUTOSPEED132.BF.TXREG_SPEEDTRK_CLK_G3_LANE_2_0

// 0x06f4	AUTOSPEED133		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G3_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G3_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G3_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G3_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED133_t;
__xdata __at( 0x66f4 ) volatile AUTOSPEED133_t AUTOSPEED133;
#define reg_TXREG_SPEEDTRK_DATA_G3_LANE_2_0  AUTOSPEED133.BF.TXREG_SPEEDTRK_DATA_G3_LANE_2_0
#define reg_TX_PAM2_EN_G3_LANE  AUTOSPEED133.BF.TX_PAM2_EN_G3_LANE
#define reg_TX_HALFRATE_EN_G3_LANE  AUTOSPEED133.BF.TX_HALFRATE_EN_G3_LANE
#define reg_TX_TRAIN_PAT_SEL_G3_LANE_1_0  AUTOSPEED133.BF.TX_TRAIN_PAT_SEL_G3_LANE_1_0

// 0x06f8	AUTOSPEED134		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G3_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G3_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G3_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G3_LANE_2_0              : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED134_t;
__xdata __at( 0x66f8 ) volatile AUTOSPEED134_t AUTOSPEED134;
#define reg_PLL_RATE_SEL_RX_G3_LANE_3_0  AUTOSPEED134.BF.PLL_RATE_SEL_RX_G3_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G3_LANE  AUTOSPEED134.BF.RX_VDDCAL_RATE_EN_G3_LANE
#define reg_RX_SPEED_DIV_G3_LANE_2_0  AUTOSPEED134.BF.RX_SPEED_DIV_G3_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G3_LANE_2_0  AUTOSPEED134.BF.DTL_CLK_SPEEDUP_G3_LANE_2_0

// 0x06fc	AUTOSPEED135		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G3_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'hb*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G3_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G3_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G3_LANE_2_0             : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED135_t;
__xdata __at( 0x66fc ) volatile AUTOSPEED135_t AUTOSPEED135;
#define reg_RXINTPI_G3_LANE_3_0  AUTOSPEED135.BF.RXINTPI_G3_LANE_3_0
#define reg_INTPR_G3_LANE_1_0  AUTOSPEED135.BF.INTPR_G3_LANE_1_0
#define reg_DLL_FREQ_SEL_G3_LANE_2_0  AUTOSPEED135.BF.DLL_FREQ_SEL_G3_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G3_LANE_2_0  AUTOSPEED135.BF.EOM_DLL_FREQ_SEL_G3_LANE_2_0

// 0x0700	AUTOSPEED136		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G3_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G3_LANE_2_0           : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G3_LANE          : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G3_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED136_t;
__xdata __at( 0x6700 ) volatile AUTOSPEED136_t AUTOSPEED136;
#define reg_RXREG_SPEEDTRK_DATA_G3_LANE_2_0  AUTOSPEED136.BF.RXREG_SPEEDTRK_DATA_G3_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G3_LANE_2_0  AUTOSPEED136.BF.RXREG_SPEEDTRK_CLK_G3_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G3_LANE  AUTOSPEED136.BF.RXREG_SPEEDTRK_CLK_HALF_G3_LANE
#define reg_SELMUFI_G3_LANE_2_0  AUTOSPEED136.BF.SELMUFI_G3_LANE_2_0

// 0x0704	AUTOSPEED137		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G3_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G3_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G3_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G3_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED137_t;
__xdata __at( 0x6704 ) volatile AUTOSPEED137_t AUTOSPEED137;
#define reg_SELMUFF_G3_LANE_2_0  AUTOSPEED137.BF.SELMUFF_G3_LANE_2_0
#define reg_SELMUPI_G3_LANE_3_0  AUTOSPEED137.BF.SELMUPI_G3_LANE_3_0
#define reg_SELMUPF_G3_LANE_3_0  AUTOSPEED137.BF.SELMUPF_G3_LANE_3_0
#define reg_DTL_CLK_MODE_G3_LANE_1_0  AUTOSPEED137.BF.DTL_CLK_MODE_G3_LANE_1_0

// 0x0708	AUTOSPEED138		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G3_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h4d*/
		uint8_t RX_FOFFSET_EXTRA_M_G3_LANE_13_8          : 6;	/* [13:8]     r/w 6'h1a*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G3_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G3_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED138_t;
__xdata __at( 0x6708 ) volatile AUTOSPEED138_t AUTOSPEED138;
#define reg_RX_FOFFSET_EXTRA_M_G3_LANE_7_0  AUTOSPEED138.BF.RX_FOFFSET_EXTRA_M_G3_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G3_LANE_13_8  AUTOSPEED138.BF.RX_FOFFSET_EXTRA_M_G3_LANE_13_8
#define reg_INIT_RXFOFFS_G3_LANE_7_0  AUTOSPEED138.BF.INIT_RXFOFFS_G3_LANE_7_0
#define reg_INIT_RXFOFFS_G3_LANE_12_8  AUTOSPEED138.BF.INIT_RXFOFFS_G3_LANE_12_8

// 0x070c	AUTOSPEED139		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G3_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G3_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G3_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G3_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED139_t;
__xdata __at( 0x670c ) volatile AUTOSPEED139_t AUTOSPEED139;
#define reg_PU_SMPLR_D_P2_G3_LANE_2_0  AUTOSPEED139.BF.PU_SMPLR_D_P2_G3_LANE_2_0
#define reg_PU_SMPLR_S_P2_G3_LANE_2_0  AUTOSPEED139.BF.PU_SMPLR_S_P2_G3_LANE_2_0
#define reg_PU_SMPLR_D_P4_G3_LANE_2_0  AUTOSPEED139.BF.PU_SMPLR_D_P4_G3_LANE_2_0
#define reg_PU_SMPLR_S_P4_G3_LANE_2_0  AUTOSPEED139.BF.PU_SMPLR_S_P4_G3_LANE_2_0

// 0x0710	AUTOSPEED140		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G3_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G3_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G3_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G3_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED140_t;
__xdata __at( 0x6710 ) volatile AUTOSPEED140_t AUTOSPEED140;
#define reg_PATH_DISABLE_EDGE_P2P4_G3_LANE  AUTOSPEED140.BF.PATH_DISABLE_EDGE_P2P4_G3_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G3_LANE  AUTOSPEED140.BF.PATH_DISABLE_EDGE_P1P3_G3_LANE
#define reg_PU_SMPLR_D_P1_G3_LANE_2_0  AUTOSPEED140.BF.PU_SMPLR_D_P1_G3_LANE_2_0
#define reg_PU_SMPLR_S_P1_G3_LANE_2_0  AUTOSPEED140.BF.PU_SMPLR_S_P1_G3_LANE_2_0

// 0x0714	AUTOSPEED141		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G3_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G3_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G3_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G3_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED141_t;
__xdata __at( 0x6714 ) volatile AUTOSPEED141_t AUTOSPEED141;
#define reg_PU_SMPLR_D_P3_G3_LANE_2_0  AUTOSPEED141.BF.PU_SMPLR_D_P3_G3_LANE_2_0
#define reg_PU_SMPLR_S_P3_G3_LANE_2_0  AUTOSPEED141.BF.PU_SMPLR_S_P3_G3_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G3_LANE  AUTOSPEED141.BF.PATH_DISABLE_D_P1P3_G3_LANE
#define reg_PATH_DISABLE_S_P1P3_G3_LANE  AUTOSPEED141.BF.PATH_DISABLE_S_P1P3_G3_LANE

// 0x0718	AUTOSPEED142		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G3_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G3_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G3_LANE_7_0                : 8;	/*[23:16]     r/w 8'h3e*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G3_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED142_t;
__xdata __at( 0x6718 ) volatile AUTOSPEED142_t AUTOSPEED142;
#define reg_RXCLK_25M_CTRL_G3_LANE_1_0  AUTOSPEED142.BF.RXCLK_25M_CTRL_G3_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G3_LANE  AUTOSPEED142.BF.RXCLK_25M_DIV1P5_EN_G3_LANE
#define reg_RXCLK_25M_DIV_G3_LANE_7_0  AUTOSPEED142.BF.RXCLK_25M_DIV_G3_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G3_LANE  AUTOSPEED142.BF.RXCLK_25M_FIX_DIV_EN_G3_LANE

// 0x071c	AUTOSPEED143		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G3_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G3_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G3_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G3_LANE_3_0            : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED143_t;
__xdata __at( 0x671c ) volatile AUTOSPEED143_t AUTOSPEED143;
#define reg_CTLE_LOW_SPEED_SEL_G3_LANE_1_0  AUTOSPEED143.BF.CTLE_LOW_SPEED_SEL_G3_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G3_LANE  AUTOSPEED143.BF.CTLE_BYPASS1_EN_G3_LANE
#define reg_CTLE_BYPASS2_EN_G3_LANE  AUTOSPEED143.BF.CTLE_BYPASS2_EN_G3_LANE
#define reg_CTLE_CURRENT1_SEL_G3_LANE_3_0  AUTOSPEED143.BF.CTLE_CURRENT1_SEL_G3_LANE_3_0

// 0x0720	AUTOSPEED144		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G3_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G3_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G3_LANE_3_0             : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G3_LANE_3_0        : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED144_t;
__xdata __at( 0x6720 ) volatile AUTOSPEED144_t AUTOSPEED144;
#define reg_CTLE_RL1_SEL_G3_LANE_3_0  AUTOSPEED144.BF.CTLE_RL1_SEL_G3_LANE_3_0
#define reg_CTLE_RF_CTRL_G3_LANE_3_0  AUTOSPEED144.BF.CTLE_RF_CTRL_G3_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G3_LANE_3_0  AUTOSPEED144.BF.CTLE_RL1_TIA_SEL_G3_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G3_LANE_3_0  AUTOSPEED144.BF.CTLE_CURRENT1_TIA_SEL_G3_LANE_3_0

// 0x0724	AUTOSPEED145		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G3_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G3_LANE_3_0       : 4;	/* [11:8]     r/w 4'h7*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G3_LANE_3_0            : 4;	/*[19:16]     r/w 4'h7*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G3_LANE_3_0       : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED145_t;
__xdata __at( 0x6724 ) volatile AUTOSPEED145_t AUTOSPEED145;
#define reg_CTLE_RL2_SEL_G_P2_G3_LANE_3_0  AUTOSPEED145.BF.CTLE_RL2_SEL_G_P2_G3_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G3_LANE_3_0  AUTOSPEED145.BF.CTLE_CURRENT2_SEL_G_P2_G3_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G3_LANE_3_0  AUTOSPEED145.BF.CTLE_RL2_SEL_G_P4_G3_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G3_LANE_3_0  AUTOSPEED145.BF.CTLE_CURRENT2_SEL_G_P4_G3_LANE_3_0

// 0x0728	AUTOSPEED146		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G3_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G3_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G3_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G3_LANE_1_0     : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED146_t;
__xdata __at( 0x6728 ) volatile AUTOSPEED146_t AUTOSPEED146;
#define reg_DFE_CUR_SEL_G_G3_LANE_3_0  AUTOSPEED146.BF.DFE_CUR_SEL_G_G3_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G3_LANE_1_0  AUTOSPEED146.BF.REG_DFE_RATE_MODE_G3_LANE_1_0
#define reg_REG_DFE_DIS_G3_LANE  AUTOSPEED146.BF.REG_DFE_DIS_G3_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G3_LANE_1_0  AUTOSPEED146.BF.REG_DFE_TAP_SETTLE_SCALE_G3_LANE_1_0

// 0x072c	AUTOSPEED147		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G3_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G3_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha9*/
		uint8_t DFE_PAM2_MODE_G3_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G3_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED147_t;
__xdata __at( 0x672c ) volatile AUTOSPEED147_t AUTOSPEED147;
#define reg_RXDLL_TEMP_A_G3_LANE_7_0  AUTOSPEED147.BF.RXDLL_TEMP_A_G3_LANE_7_0
#define reg_RXDLL_TEMP_B_G3_LANE_7_0  AUTOSPEED147.BF.RXDLL_TEMP_B_G3_LANE_7_0
#define reg_DFE_PAM2_MODE_G3_LANE  AUTOSPEED147.BF.DFE_PAM2_MODE_G3_LANE
#define reg_RX_PAM2_EN_G3_LANE  AUTOSPEED147.BF.RX_PAM2_EN_G3_LANE

// 0x0730	AUTOSPEED148		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G3_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED148_t;
__xdata __at( 0x6730 ) volatile AUTOSPEED148_t AUTOSPEED148;
#define reg_RX_HALFRATE_EN_G3_LANE  AUTOSPEED148.BF.RX_HALFRATE_EN_G3_LANE

// 0x0734	AUTOSPEED149		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G4_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G4_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G4_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G4_LANE_2_0           : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED149_t;
__xdata __at( 0x6734 ) volatile AUTOSPEED149_t AUTOSPEED149;
#define reg_PLL_RATE_SEL_TX_G4_LANE_3_0  AUTOSPEED149.BF.PLL_RATE_SEL_TX_G4_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G4_LANE  AUTOSPEED149.BF.TX_VDDCAL_RATE_EN_G4_LANE
#define reg_TX_SPEEDDIV_G4_LANE_2_0  AUTOSPEED149.BF.TX_SPEEDDIV_G4_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G4_LANE_2_0  AUTOSPEED149.BF.TXREG_SPEEDTRK_CLK_G4_LANE_2_0

// 0x0738	AUTOSPEED150		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G4_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G4_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G4_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G4_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED150_t;
__xdata __at( 0x6738 ) volatile AUTOSPEED150_t AUTOSPEED150;
#define reg_TXREG_SPEEDTRK_DATA_G4_LANE_2_0  AUTOSPEED150.BF.TXREG_SPEEDTRK_DATA_G4_LANE_2_0
#define reg_TX_PAM2_EN_G4_LANE  AUTOSPEED150.BF.TX_PAM2_EN_G4_LANE
#define reg_TX_HALFRATE_EN_G4_LANE  AUTOSPEED150.BF.TX_HALFRATE_EN_G4_LANE
#define reg_TX_TRAIN_PAT_SEL_G4_LANE_1_0  AUTOSPEED150.BF.TX_TRAIN_PAT_SEL_G4_LANE_1_0

// 0x073c	AUTOSPEED151		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G4_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G4_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G4_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G4_LANE_2_0              : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED151_t;
__xdata __at( 0x673c ) volatile AUTOSPEED151_t AUTOSPEED151;
#define reg_PLL_RATE_SEL_RX_G4_LANE_3_0  AUTOSPEED151.BF.PLL_RATE_SEL_RX_G4_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G4_LANE  AUTOSPEED151.BF.RX_VDDCAL_RATE_EN_G4_LANE
#define reg_RX_SPEED_DIV_G4_LANE_2_0  AUTOSPEED151.BF.RX_SPEED_DIV_G4_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G4_LANE_2_0  AUTOSPEED151.BF.DTL_CLK_SPEEDUP_G4_LANE_2_0

// 0x0740	AUTOSPEED152		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G4_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G4_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G4_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED152_t;
__xdata __at( 0x6740 ) volatile AUTOSPEED152_t AUTOSPEED152;
#define reg_RXINTPI_G4_LANE_3_0  AUTOSPEED152.BF.RXINTPI_G4_LANE_3_0
#define reg_INTPR_G4_LANE_1_0  AUTOSPEED152.BF.INTPR_G4_LANE_1_0
#define reg_DLL_FREQ_SEL_G4_LANE_2_0  AUTOSPEED152.BF.DLL_FREQ_SEL_G4_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G4_LANE_2_0  AUTOSPEED152.BF.EOM_DLL_FREQ_SEL_G4_LANE_2_0

// 0x0744	AUTOSPEED153		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G4_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G4_LANE_2_0           : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G4_LANE          : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G4_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED153_t;
__xdata __at( 0x6744 ) volatile AUTOSPEED153_t AUTOSPEED153;
#define reg_RXREG_SPEEDTRK_DATA_G4_LANE_2_0  AUTOSPEED153.BF.RXREG_SPEEDTRK_DATA_G4_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G4_LANE_2_0  AUTOSPEED153.BF.RXREG_SPEEDTRK_CLK_G4_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G4_LANE  AUTOSPEED153.BF.RXREG_SPEEDTRK_CLK_HALF_G4_LANE
#define reg_SELMUFI_G4_LANE_2_0  AUTOSPEED153.BF.SELMUFI_G4_LANE_2_0

// 0x0748	AUTOSPEED154		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G4_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G4_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G4_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G4_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED154_t;
__xdata __at( 0x6748 ) volatile AUTOSPEED154_t AUTOSPEED154;
#define reg_SELMUFF_G4_LANE_2_0  AUTOSPEED154.BF.SELMUFF_G4_LANE_2_0
#define reg_SELMUPI_G4_LANE_3_0  AUTOSPEED154.BF.SELMUPI_G4_LANE_3_0
#define reg_SELMUPF_G4_LANE_3_0  AUTOSPEED154.BF.SELMUPF_G4_LANE_3_0
#define reg_DTL_CLK_MODE_G4_LANE_1_0  AUTOSPEED154.BF.DTL_CLK_MODE_G4_LANE_1_0

// 0x074c	AUTOSPEED155		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G4_LANE_7_0           : 8;	/*  [7:0]     r/w 8'hb3*/
		uint8_t RX_FOFFSET_EXTRA_M_G4_LANE_13_8          : 6;	/* [13:8]     r/w 6'h15*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G4_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G4_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED155_t;
__xdata __at( 0x674c ) volatile AUTOSPEED155_t AUTOSPEED155;
#define reg_RX_FOFFSET_EXTRA_M_G4_LANE_7_0  AUTOSPEED155.BF.RX_FOFFSET_EXTRA_M_G4_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G4_LANE_13_8  AUTOSPEED155.BF.RX_FOFFSET_EXTRA_M_G4_LANE_13_8
#define reg_INIT_RXFOFFS_G4_LANE_7_0  AUTOSPEED155.BF.INIT_RXFOFFS_G4_LANE_7_0
#define reg_INIT_RXFOFFS_G4_LANE_12_8  AUTOSPEED155.BF.INIT_RXFOFFS_G4_LANE_12_8

// 0x0750	AUTOSPEED156		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G4_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G4_LANE_2_0                : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G4_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G4_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED156_t;
__xdata __at( 0x6750 ) volatile AUTOSPEED156_t AUTOSPEED156;
#define reg_PU_SMPLR_D_P2_G4_LANE_2_0  AUTOSPEED156.BF.PU_SMPLR_D_P2_G4_LANE_2_0
#define reg_PU_SMPLR_S_P2_G4_LANE_2_0  AUTOSPEED156.BF.PU_SMPLR_S_P2_G4_LANE_2_0
#define reg_PU_SMPLR_D_P4_G4_LANE_2_0  AUTOSPEED156.BF.PU_SMPLR_D_P4_G4_LANE_2_0
#define reg_PU_SMPLR_S_P4_G4_LANE_2_0  AUTOSPEED156.BF.PU_SMPLR_S_P4_G4_LANE_2_0

// 0x0754	AUTOSPEED157		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G4_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G4_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G4_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G4_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED157_t;
__xdata __at( 0x6754 ) volatile AUTOSPEED157_t AUTOSPEED157;
#define reg_PATH_DISABLE_EDGE_P2P4_G4_LANE  AUTOSPEED157.BF.PATH_DISABLE_EDGE_P2P4_G4_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G4_LANE  AUTOSPEED157.BF.PATH_DISABLE_EDGE_P1P3_G4_LANE
#define reg_PU_SMPLR_D_P1_G4_LANE_2_0  AUTOSPEED157.BF.PU_SMPLR_D_P1_G4_LANE_2_0
#define reg_PU_SMPLR_S_P1_G4_LANE_2_0  AUTOSPEED157.BF.PU_SMPLR_S_P1_G4_LANE_2_0

// 0x0758	AUTOSPEED158		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G4_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G4_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G4_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G4_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED158_t;
__xdata __at( 0x6758 ) volatile AUTOSPEED158_t AUTOSPEED158;
#define reg_PU_SMPLR_D_P3_G4_LANE_2_0  AUTOSPEED158.BF.PU_SMPLR_D_P3_G4_LANE_2_0
#define reg_PU_SMPLR_S_P3_G4_LANE_2_0  AUTOSPEED158.BF.PU_SMPLR_S_P3_G4_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G4_LANE  AUTOSPEED158.BF.PATH_DISABLE_D_P1P3_G4_LANE
#define reg_PATH_DISABLE_S_P1P3_G4_LANE  AUTOSPEED158.BF.PATH_DISABLE_S_P1P3_G4_LANE

// 0x075c	AUTOSPEED159		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G4_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G4_LANE              : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G4_LANE_7_0                : 8;	/*[23:16]     r/w 8'h89*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G4_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED159_t;
__xdata __at( 0x675c ) volatile AUTOSPEED159_t AUTOSPEED159;
#define reg_RXCLK_25M_CTRL_G4_LANE_1_0  AUTOSPEED159.BF.RXCLK_25M_CTRL_G4_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G4_LANE  AUTOSPEED159.BF.RXCLK_25M_DIV1P5_EN_G4_LANE
#define reg_RXCLK_25M_DIV_G4_LANE_7_0  AUTOSPEED159.BF.RXCLK_25M_DIV_G4_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G4_LANE  AUTOSPEED159.BF.RXCLK_25M_FIX_DIV_EN_G4_LANE

// 0x0760	AUTOSPEED160		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G4_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G4_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G4_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G4_LANE_3_0            : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED160_t;
__xdata __at( 0x6760 ) volatile AUTOSPEED160_t AUTOSPEED160;
#define reg_CTLE_LOW_SPEED_SEL_G4_LANE_1_0  AUTOSPEED160.BF.CTLE_LOW_SPEED_SEL_G4_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G4_LANE  AUTOSPEED160.BF.CTLE_BYPASS1_EN_G4_LANE
#define reg_CTLE_BYPASS2_EN_G4_LANE  AUTOSPEED160.BF.CTLE_BYPASS2_EN_G4_LANE
#define reg_CTLE_CURRENT1_SEL_G4_LANE_3_0  AUTOSPEED160.BF.CTLE_CURRENT1_SEL_G4_LANE_3_0

// 0x0764	AUTOSPEED161		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G4_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'hc*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G4_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G4_LANE_3_0             : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G4_LANE_3_0        : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED161_t;
__xdata __at( 0x6764 ) volatile AUTOSPEED161_t AUTOSPEED161;
#define reg_CTLE_RL1_SEL_G4_LANE_3_0  AUTOSPEED161.BF.CTLE_RL1_SEL_G4_LANE_3_0
#define reg_CTLE_RF_CTRL_G4_LANE_3_0  AUTOSPEED161.BF.CTLE_RF_CTRL_G4_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G4_LANE_3_0  AUTOSPEED161.BF.CTLE_RL1_TIA_SEL_G4_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G4_LANE_3_0  AUTOSPEED161.BF.CTLE_CURRENT1_TIA_SEL_G4_LANE_3_0

// 0x0768	AUTOSPEED162		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G4_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G4_LANE_3_0       : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G4_LANE_3_0            : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G4_LANE_3_0       : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED162_t;
__xdata __at( 0x6768 ) volatile AUTOSPEED162_t AUTOSPEED162;
#define reg_CTLE_RL2_SEL_G_P2_G4_LANE_3_0  AUTOSPEED162.BF.CTLE_RL2_SEL_G_P2_G4_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G4_LANE_3_0  AUTOSPEED162.BF.CTLE_CURRENT2_SEL_G_P2_G4_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G4_LANE_3_0  AUTOSPEED162.BF.CTLE_RL2_SEL_G_P4_G4_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G4_LANE_3_0  AUTOSPEED162.BF.CTLE_CURRENT2_SEL_G_P4_G4_LANE_3_0

// 0x076c	AUTOSPEED163		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G4_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G4_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G4_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G4_LANE_1_0     : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED163_t;
__xdata __at( 0x676c ) volatile AUTOSPEED163_t AUTOSPEED163;
#define reg_DFE_CUR_SEL_G_G4_LANE_3_0  AUTOSPEED163.BF.DFE_CUR_SEL_G_G4_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G4_LANE_1_0  AUTOSPEED163.BF.REG_DFE_RATE_MODE_G4_LANE_1_0
#define reg_REG_DFE_DIS_G4_LANE  AUTOSPEED163.BF.REG_DFE_DIS_G4_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G4_LANE_1_0  AUTOSPEED163.BF.REG_DFE_TAP_SETTLE_SCALE_G4_LANE_1_0

// 0x0770	AUTOSPEED164		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G4_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G4_LANE_7_0                 : 8;	/* [15:8]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G4_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G4_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED164_t;
__xdata __at( 0x6770 ) volatile AUTOSPEED164_t AUTOSPEED164;
#define reg_RXDLL_TEMP_A_G4_LANE_7_0  AUTOSPEED164.BF.RXDLL_TEMP_A_G4_LANE_7_0
#define reg_RXDLL_TEMP_B_G4_LANE_7_0  AUTOSPEED164.BF.RXDLL_TEMP_B_G4_LANE_7_0
#define reg_DFE_PAM2_MODE_G4_LANE  AUTOSPEED164.BF.DFE_PAM2_MODE_G4_LANE
#define reg_RX_PAM2_EN_G4_LANE  AUTOSPEED164.BF.RX_PAM2_EN_G4_LANE

// 0x0774	AUTOSPEED165		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G4_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED165_t;
__xdata __at( 0x6774 ) volatile AUTOSPEED165_t AUTOSPEED165;
#define reg_RX_HALFRATE_EN_G4_LANE  AUTOSPEED165.BF.RX_HALFRATE_EN_G4_LANE

// 0x0778	AUTOSPEED166		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G5_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G5_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G5_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G5_LANE_2_0           : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED166_t;
__xdata __at( 0x6778 ) volatile AUTOSPEED166_t AUTOSPEED166;
#define reg_PLL_RATE_SEL_TX_G5_LANE_3_0  AUTOSPEED166.BF.PLL_RATE_SEL_TX_G5_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G5_LANE  AUTOSPEED166.BF.TX_VDDCAL_RATE_EN_G5_LANE
#define reg_TX_SPEEDDIV_G5_LANE_2_0  AUTOSPEED166.BF.TX_SPEEDDIV_G5_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G5_LANE_2_0  AUTOSPEED166.BF.TXREG_SPEEDTRK_CLK_G5_LANE_2_0

// 0x077c	AUTOSPEED167		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G5_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G5_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G5_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G5_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED167_t;
__xdata __at( 0x677c ) volatile AUTOSPEED167_t AUTOSPEED167;
#define reg_TXREG_SPEEDTRK_DATA_G5_LANE_2_0  AUTOSPEED167.BF.TXREG_SPEEDTRK_DATA_G5_LANE_2_0
#define reg_TX_PAM2_EN_G5_LANE  AUTOSPEED167.BF.TX_PAM2_EN_G5_LANE
#define reg_TX_HALFRATE_EN_G5_LANE  AUTOSPEED167.BF.TX_HALFRATE_EN_G5_LANE
#define reg_TX_TRAIN_PAT_SEL_G5_LANE_1_0  AUTOSPEED167.BF.TX_TRAIN_PAT_SEL_G5_LANE_1_0

// 0x0780	AUTOSPEED168		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G5_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G5_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G5_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G5_LANE_2_0              : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED168_t;
__xdata __at( 0x6780 ) volatile AUTOSPEED168_t AUTOSPEED168;
#define reg_PLL_RATE_SEL_RX_G5_LANE_3_0  AUTOSPEED168.BF.PLL_RATE_SEL_RX_G5_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G5_LANE  AUTOSPEED168.BF.RX_VDDCAL_RATE_EN_G5_LANE
#define reg_RX_SPEED_DIV_G5_LANE_2_0  AUTOSPEED168.BF.RX_SPEED_DIV_G5_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G5_LANE_2_0  AUTOSPEED168.BF.DTL_CLK_SPEEDUP_G5_LANE_2_0

// 0x0784	AUTOSPEED169		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G5_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G5_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G5_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G5_LANE_2_0             : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED169_t;
__xdata __at( 0x6784 ) volatile AUTOSPEED169_t AUTOSPEED169;
#define reg_RXINTPI_G5_LANE_3_0  AUTOSPEED169.BF.RXINTPI_G5_LANE_3_0
#define reg_INTPR_G5_LANE_1_0  AUTOSPEED169.BF.INTPR_G5_LANE_1_0
#define reg_DLL_FREQ_SEL_G5_LANE_2_0  AUTOSPEED169.BF.DLL_FREQ_SEL_G5_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G5_LANE_2_0  AUTOSPEED169.BF.EOM_DLL_FREQ_SEL_G5_LANE_2_0

// 0x0788	AUTOSPEED170		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G5_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G5_LANE_2_0           : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G5_LANE          : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G5_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED170_t;
__xdata __at( 0x6788 ) volatile AUTOSPEED170_t AUTOSPEED170;
#define reg_RXREG_SPEEDTRK_DATA_G5_LANE_2_0  AUTOSPEED170.BF.RXREG_SPEEDTRK_DATA_G5_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G5_LANE_2_0  AUTOSPEED170.BF.RXREG_SPEEDTRK_CLK_G5_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G5_LANE  AUTOSPEED170.BF.RXREG_SPEEDTRK_CLK_HALF_G5_LANE
#define reg_SELMUFI_G5_LANE_2_0  AUTOSPEED170.BF.SELMUFI_G5_LANE_2_0

// 0x078c	AUTOSPEED171		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G5_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G5_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G5_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G5_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED171_t;
__xdata __at( 0x678c ) volatile AUTOSPEED171_t AUTOSPEED171;
#define reg_SELMUFF_G5_LANE_2_0  AUTOSPEED171.BF.SELMUFF_G5_LANE_2_0
#define reg_SELMUPI_G5_LANE_3_0  AUTOSPEED171.BF.SELMUPI_G5_LANE_3_0
#define reg_SELMUPF_G5_LANE_3_0  AUTOSPEED171.BF.SELMUPF_G5_LANE_3_0
#define reg_DTL_CLK_MODE_G5_LANE_1_0  AUTOSPEED171.BF.DTL_CLK_MODE_G5_LANE_1_0

// 0x0790	AUTOSPEED172		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G5_LANE_7_0           : 8;	/*  [7:0]     r/w 8'ha5*/
		uint8_t RX_FOFFSET_EXTRA_M_G5_LANE_13_8          : 6;	/* [13:8]     r/w 6'h19*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G5_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G5_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED172_t;
__xdata __at( 0x6790 ) volatile AUTOSPEED172_t AUTOSPEED172;
#define reg_RX_FOFFSET_EXTRA_M_G5_LANE_7_0  AUTOSPEED172.BF.RX_FOFFSET_EXTRA_M_G5_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G5_LANE_13_8  AUTOSPEED172.BF.RX_FOFFSET_EXTRA_M_G5_LANE_13_8
#define reg_INIT_RXFOFFS_G5_LANE_7_0  AUTOSPEED172.BF.INIT_RXFOFFS_G5_LANE_7_0
#define reg_INIT_RXFOFFS_G5_LANE_12_8  AUTOSPEED172.BF.INIT_RXFOFFS_G5_LANE_12_8

// 0x0794	AUTOSPEED173		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G5_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G5_LANE_2_0                : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G5_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G5_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED173_t;
__xdata __at( 0x6794 ) volatile AUTOSPEED173_t AUTOSPEED173;
#define reg_PU_SMPLR_D_P2_G5_LANE_2_0  AUTOSPEED173.BF.PU_SMPLR_D_P2_G5_LANE_2_0
#define reg_PU_SMPLR_S_P2_G5_LANE_2_0  AUTOSPEED173.BF.PU_SMPLR_S_P2_G5_LANE_2_0
#define reg_PU_SMPLR_D_P4_G5_LANE_2_0  AUTOSPEED173.BF.PU_SMPLR_D_P4_G5_LANE_2_0
#define reg_PU_SMPLR_S_P4_G5_LANE_2_0  AUTOSPEED173.BF.PU_SMPLR_S_P4_G5_LANE_2_0

// 0x0798	AUTOSPEED174		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G5_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G5_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G5_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G5_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED174_t;
__xdata __at( 0x6798 ) volatile AUTOSPEED174_t AUTOSPEED174;
#define reg_PATH_DISABLE_EDGE_P2P4_G5_LANE  AUTOSPEED174.BF.PATH_DISABLE_EDGE_P2P4_G5_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G5_LANE  AUTOSPEED174.BF.PATH_DISABLE_EDGE_P1P3_G5_LANE
#define reg_PU_SMPLR_D_P1_G5_LANE_2_0  AUTOSPEED174.BF.PU_SMPLR_D_P1_G5_LANE_2_0
#define reg_PU_SMPLR_S_P1_G5_LANE_2_0  AUTOSPEED174.BF.PU_SMPLR_S_P1_G5_LANE_2_0

// 0x079c	AUTOSPEED175		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G5_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G5_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G5_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G5_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED175_t;
__xdata __at( 0x679c ) volatile AUTOSPEED175_t AUTOSPEED175;
#define reg_PU_SMPLR_D_P3_G5_LANE_2_0  AUTOSPEED175.BF.PU_SMPLR_D_P3_G5_LANE_2_0
#define reg_PU_SMPLR_S_P3_G5_LANE_2_0  AUTOSPEED175.BF.PU_SMPLR_S_P3_G5_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G5_LANE  AUTOSPEED175.BF.PATH_DISABLE_D_P1P3_G5_LANE
#define reg_PATH_DISABLE_S_P1P3_G5_LANE  AUTOSPEED175.BF.PATH_DISABLE_S_P1P3_G5_LANE

// 0x07a0	AUTOSPEED176		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G5_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G5_LANE              : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G5_LANE_7_0                : 8;	/*[23:16]     r/w 8'ha2*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G5_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED176_t;
__xdata __at( 0x67a0 ) volatile AUTOSPEED176_t AUTOSPEED176;
#define reg_RXCLK_25M_CTRL_G5_LANE_1_0  AUTOSPEED176.BF.RXCLK_25M_CTRL_G5_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G5_LANE  AUTOSPEED176.BF.RXCLK_25M_DIV1P5_EN_G5_LANE
#define reg_RXCLK_25M_DIV_G5_LANE_7_0  AUTOSPEED176.BF.RXCLK_25M_DIV_G5_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G5_LANE  AUTOSPEED176.BF.RXCLK_25M_FIX_DIV_EN_G5_LANE

// 0x07a4	AUTOSPEED177		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G5_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G5_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G5_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G5_LANE_3_0            : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED177_t;
__xdata __at( 0x67a4 ) volatile AUTOSPEED177_t AUTOSPEED177;
#define reg_CTLE_LOW_SPEED_SEL_G5_LANE_1_0  AUTOSPEED177.BF.CTLE_LOW_SPEED_SEL_G5_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G5_LANE  AUTOSPEED177.BF.CTLE_BYPASS1_EN_G5_LANE
#define reg_CTLE_BYPASS2_EN_G5_LANE  AUTOSPEED177.BF.CTLE_BYPASS2_EN_G5_LANE
#define reg_CTLE_CURRENT1_SEL_G5_LANE_3_0  AUTOSPEED177.BF.CTLE_CURRENT1_SEL_G5_LANE_3_0

// 0x07a8	AUTOSPEED178		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G5_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'hc*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G5_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G5_LANE_3_0             : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G5_LANE_3_0        : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED178_t;
__xdata __at( 0x67a8 ) volatile AUTOSPEED178_t AUTOSPEED178;
#define reg_CTLE_RL1_SEL_G5_LANE_3_0  AUTOSPEED178.BF.CTLE_RL1_SEL_G5_LANE_3_0
#define reg_CTLE_RF_CTRL_G5_LANE_3_0  AUTOSPEED178.BF.CTLE_RF_CTRL_G5_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G5_LANE_3_0  AUTOSPEED178.BF.CTLE_RL1_TIA_SEL_G5_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G5_LANE_3_0  AUTOSPEED178.BF.CTLE_CURRENT1_TIA_SEL_G5_LANE_3_0

// 0x07ac	AUTOSPEED179		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G5_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G5_LANE_3_0       : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G5_LANE_3_0            : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G5_LANE_3_0       : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED179_t;
__xdata __at( 0x67ac ) volatile AUTOSPEED179_t AUTOSPEED179;
#define reg_CTLE_RL2_SEL_G_P2_G5_LANE_3_0  AUTOSPEED179.BF.CTLE_RL2_SEL_G_P2_G5_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G5_LANE_3_0  AUTOSPEED179.BF.CTLE_CURRENT2_SEL_G_P2_G5_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G5_LANE_3_0  AUTOSPEED179.BF.CTLE_RL2_SEL_G_P4_G5_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G5_LANE_3_0  AUTOSPEED179.BF.CTLE_CURRENT2_SEL_G_P4_G5_LANE_3_0

// 0x07b0	AUTOSPEED180		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G5_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G5_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G5_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G5_LANE_1_0     : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED180_t;
__xdata __at( 0x67b0 ) volatile AUTOSPEED180_t AUTOSPEED180;
#define reg_DFE_CUR_SEL_G_G5_LANE_3_0  AUTOSPEED180.BF.DFE_CUR_SEL_G_G5_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G5_LANE_1_0  AUTOSPEED180.BF.REG_DFE_RATE_MODE_G5_LANE_1_0
#define reg_REG_DFE_DIS_G5_LANE  AUTOSPEED180.BF.REG_DFE_DIS_G5_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G5_LANE_1_0  AUTOSPEED180.BF.REG_DFE_TAP_SETTLE_SCALE_G5_LANE_1_0

// 0x07b4	AUTOSPEED181		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G5_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G5_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha9*/
		uint8_t DFE_PAM2_MODE_G5_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G5_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED181_t;
__xdata __at( 0x67b4 ) volatile AUTOSPEED181_t AUTOSPEED181;
#define reg_RXDLL_TEMP_A_G5_LANE_7_0  AUTOSPEED181.BF.RXDLL_TEMP_A_G5_LANE_7_0
#define reg_RXDLL_TEMP_B_G5_LANE_7_0  AUTOSPEED181.BF.RXDLL_TEMP_B_G5_LANE_7_0
#define reg_DFE_PAM2_MODE_G5_LANE  AUTOSPEED181.BF.DFE_PAM2_MODE_G5_LANE
#define reg_RX_PAM2_EN_G5_LANE  AUTOSPEED181.BF.RX_PAM2_EN_G5_LANE

// 0x07b8	AUTOSPEED182		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G5_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED182_t;
__xdata __at( 0x67b8 ) volatile AUTOSPEED182_t AUTOSPEED182;
#define reg_RX_HALFRATE_EN_G5_LANE  AUTOSPEED182.BF.RX_HALFRATE_EN_G5_LANE

// 0x07bc	AUTOSPEED183		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G6_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G6_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G6_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G6_LANE_2_0           : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED183_t;
__xdata __at( 0x67bc ) volatile AUTOSPEED183_t AUTOSPEED183;
#define reg_PLL_RATE_SEL_TX_G6_LANE_3_0  AUTOSPEED183.BF.PLL_RATE_SEL_TX_G6_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G6_LANE  AUTOSPEED183.BF.TX_VDDCAL_RATE_EN_G6_LANE
#define reg_TX_SPEEDDIV_G6_LANE_2_0  AUTOSPEED183.BF.TX_SPEEDDIV_G6_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G6_LANE_2_0  AUTOSPEED183.BF.TXREG_SPEEDTRK_CLK_G6_LANE_2_0

// 0x07c0	AUTOSPEED184		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G6_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G6_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G6_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G6_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED184_t;
__xdata __at( 0x67c0 ) volatile AUTOSPEED184_t AUTOSPEED184;
#define reg_TXREG_SPEEDTRK_DATA_G6_LANE_2_0  AUTOSPEED184.BF.TXREG_SPEEDTRK_DATA_G6_LANE_2_0
#define reg_TX_PAM2_EN_G6_LANE  AUTOSPEED184.BF.TX_PAM2_EN_G6_LANE
#define reg_TX_HALFRATE_EN_G6_LANE  AUTOSPEED184.BF.TX_HALFRATE_EN_G6_LANE
#define reg_TX_TRAIN_PAT_SEL_G6_LANE_1_0  AUTOSPEED184.BF.TX_TRAIN_PAT_SEL_G6_LANE_1_0

// 0x07c4	AUTOSPEED185		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G6_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G6_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G6_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G6_LANE_2_0              : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED185_t;
__xdata __at( 0x67c4 ) volatile AUTOSPEED185_t AUTOSPEED185;
#define reg_PLL_RATE_SEL_RX_G6_LANE_3_0  AUTOSPEED185.BF.PLL_RATE_SEL_RX_G6_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G6_LANE  AUTOSPEED185.BF.RX_VDDCAL_RATE_EN_G6_LANE
#define reg_RX_SPEED_DIV_G6_LANE_2_0  AUTOSPEED185.BF.RX_SPEED_DIV_G6_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G6_LANE_2_0  AUTOSPEED185.BF.DTL_CLK_SPEEDUP_G6_LANE_2_0

// 0x07c8	AUTOSPEED186		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G6_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'hb*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G6_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G6_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G6_LANE_2_0             : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED186_t;
__xdata __at( 0x67c8 ) volatile AUTOSPEED186_t AUTOSPEED186;
#define reg_RXINTPI_G6_LANE_3_0  AUTOSPEED186.BF.RXINTPI_G6_LANE_3_0
#define reg_INTPR_G6_LANE_1_0  AUTOSPEED186.BF.INTPR_G6_LANE_1_0
#define reg_DLL_FREQ_SEL_G6_LANE_2_0  AUTOSPEED186.BF.DLL_FREQ_SEL_G6_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G6_LANE_2_0  AUTOSPEED186.BF.EOM_DLL_FREQ_SEL_G6_LANE_2_0

// 0x07cc	AUTOSPEED187		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G6_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G6_LANE_2_0           : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G6_LANE          : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G6_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED187_t;
__xdata __at( 0x67cc ) volatile AUTOSPEED187_t AUTOSPEED187;
#define reg_RXREG_SPEEDTRK_DATA_G6_LANE_2_0  AUTOSPEED187.BF.RXREG_SPEEDTRK_DATA_G6_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G6_LANE_2_0  AUTOSPEED187.BF.RXREG_SPEEDTRK_CLK_G6_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G6_LANE  AUTOSPEED187.BF.RXREG_SPEEDTRK_CLK_HALF_G6_LANE
#define reg_SELMUFI_G6_LANE_2_0  AUTOSPEED187.BF.SELMUFI_G6_LANE_2_0

// 0x07d0	AUTOSPEED188		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G6_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G6_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G6_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G6_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED188_t;
__xdata __at( 0x67d0 ) volatile AUTOSPEED188_t AUTOSPEED188;
#define reg_SELMUFF_G6_LANE_2_0  AUTOSPEED188.BF.SELMUFF_G6_LANE_2_0
#define reg_SELMUPI_G6_LANE_3_0  AUTOSPEED188.BF.SELMUPI_G6_LANE_3_0
#define reg_SELMUPF_G6_LANE_3_0  AUTOSPEED188.BF.SELMUPF_G6_LANE_3_0
#define reg_DTL_CLK_MODE_G6_LANE_1_0  AUTOSPEED188.BF.DTL_CLK_MODE_G6_LANE_1_0

// 0x07d4	AUTOSPEED189		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G6_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h4d*/
		uint8_t RX_FOFFSET_EXTRA_M_G6_LANE_13_8          : 6;	/* [13:8]     r/w 6'h1a*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G6_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G6_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED189_t;
__xdata __at( 0x67d4 ) volatile AUTOSPEED189_t AUTOSPEED189;
#define reg_RX_FOFFSET_EXTRA_M_G6_LANE_7_0  AUTOSPEED189.BF.RX_FOFFSET_EXTRA_M_G6_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G6_LANE_13_8  AUTOSPEED189.BF.RX_FOFFSET_EXTRA_M_G6_LANE_13_8
#define reg_INIT_RXFOFFS_G6_LANE_7_0  AUTOSPEED189.BF.INIT_RXFOFFS_G6_LANE_7_0
#define reg_INIT_RXFOFFS_G6_LANE_12_8  AUTOSPEED189.BF.INIT_RXFOFFS_G6_LANE_12_8

// 0x07d8	AUTOSPEED190		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G6_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G6_LANE_2_0                : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G6_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G6_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED190_t;
__xdata __at( 0x67d8 ) volatile AUTOSPEED190_t AUTOSPEED190;
#define reg_PU_SMPLR_D_P2_G6_LANE_2_0  AUTOSPEED190.BF.PU_SMPLR_D_P2_G6_LANE_2_0
#define reg_PU_SMPLR_S_P2_G6_LANE_2_0  AUTOSPEED190.BF.PU_SMPLR_S_P2_G6_LANE_2_0
#define reg_PU_SMPLR_D_P4_G6_LANE_2_0  AUTOSPEED190.BF.PU_SMPLR_D_P4_G6_LANE_2_0
#define reg_PU_SMPLR_S_P4_G6_LANE_2_0  AUTOSPEED190.BF.PU_SMPLR_S_P4_G6_LANE_2_0

// 0x07dc	AUTOSPEED191		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G6_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G6_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G6_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G6_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED191_t;
__xdata __at( 0x67dc ) volatile AUTOSPEED191_t AUTOSPEED191;
#define reg_PATH_DISABLE_EDGE_P2P4_G6_LANE  AUTOSPEED191.BF.PATH_DISABLE_EDGE_P2P4_G6_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G6_LANE  AUTOSPEED191.BF.PATH_DISABLE_EDGE_P1P3_G6_LANE
#define reg_PU_SMPLR_D_P1_G6_LANE_2_0  AUTOSPEED191.BF.PU_SMPLR_D_P1_G6_LANE_2_0
#define reg_PU_SMPLR_S_P1_G6_LANE_2_0  AUTOSPEED191.BF.PU_SMPLR_S_P1_G6_LANE_2_0

// 0x07e0	AUTOSPEED192		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G6_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G6_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G6_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G6_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED192_t;
__xdata __at( 0x67e0 ) volatile AUTOSPEED192_t AUTOSPEED192;
#define reg_PU_SMPLR_D_P3_G6_LANE_2_0  AUTOSPEED192.BF.PU_SMPLR_D_P3_G6_LANE_2_0
#define reg_PU_SMPLR_S_P3_G6_LANE_2_0  AUTOSPEED192.BF.PU_SMPLR_S_P3_G6_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G6_LANE  AUTOSPEED192.BF.PATH_DISABLE_D_P1P3_G6_LANE
#define reg_PATH_DISABLE_S_P1P3_G6_LANE  AUTOSPEED192.BF.PATH_DISABLE_S_P1P3_G6_LANE

// 0x07e4	AUTOSPEED193		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G6_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G6_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G6_LANE_7_0                : 8;	/*[23:16]     r/w 8'h3e*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G6_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED193_t;
__xdata __at( 0x67e4 ) volatile AUTOSPEED193_t AUTOSPEED193;
#define reg_RXCLK_25M_CTRL_G6_LANE_1_0  AUTOSPEED193.BF.RXCLK_25M_CTRL_G6_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G6_LANE  AUTOSPEED193.BF.RXCLK_25M_DIV1P5_EN_G6_LANE
#define reg_RXCLK_25M_DIV_G6_LANE_7_0  AUTOSPEED193.BF.RXCLK_25M_DIV_G6_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G6_LANE  AUTOSPEED193.BF.RXCLK_25M_FIX_DIV_EN_G6_LANE

// 0x07e8	AUTOSPEED194		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G6_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G6_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G6_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G6_LANE_3_0            : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED194_t;
__xdata __at( 0x67e8 ) volatile AUTOSPEED194_t AUTOSPEED194;
#define reg_CTLE_LOW_SPEED_SEL_G6_LANE_1_0  AUTOSPEED194.BF.CTLE_LOW_SPEED_SEL_G6_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G6_LANE  AUTOSPEED194.BF.CTLE_BYPASS1_EN_G6_LANE
#define reg_CTLE_BYPASS2_EN_G6_LANE  AUTOSPEED194.BF.CTLE_BYPASS2_EN_G6_LANE
#define reg_CTLE_CURRENT1_SEL_G6_LANE_3_0  AUTOSPEED194.BF.CTLE_CURRENT1_SEL_G6_LANE_3_0

// 0x07ec	AUTOSPEED195		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G6_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'hc*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G6_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G6_LANE_3_0             : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G6_LANE_3_0        : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED195_t;
__xdata __at( 0x67ec ) volatile AUTOSPEED195_t AUTOSPEED195;
#define reg_CTLE_RL1_SEL_G6_LANE_3_0  AUTOSPEED195.BF.CTLE_RL1_SEL_G6_LANE_3_0
#define reg_CTLE_RF_CTRL_G6_LANE_3_0  AUTOSPEED195.BF.CTLE_RF_CTRL_G6_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G6_LANE_3_0  AUTOSPEED195.BF.CTLE_RL1_TIA_SEL_G6_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G6_LANE_3_0  AUTOSPEED195.BF.CTLE_CURRENT1_TIA_SEL_G6_LANE_3_0

// 0x07f0	AUTOSPEED196		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G6_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G6_LANE_3_0       : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G6_LANE_3_0            : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G6_LANE_3_0       : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED196_t;
__xdata __at( 0x67f0 ) volatile AUTOSPEED196_t AUTOSPEED196;
#define reg_CTLE_RL2_SEL_G_P2_G6_LANE_3_0  AUTOSPEED196.BF.CTLE_RL2_SEL_G_P2_G6_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G6_LANE_3_0  AUTOSPEED196.BF.CTLE_CURRENT2_SEL_G_P2_G6_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G6_LANE_3_0  AUTOSPEED196.BF.CTLE_RL2_SEL_G_P4_G6_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G6_LANE_3_0  AUTOSPEED196.BF.CTLE_CURRENT2_SEL_G_P4_G6_LANE_3_0

// 0x07f4	AUTOSPEED197		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G6_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G6_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G6_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G6_LANE_1_0     : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED197_t;
__xdata __at( 0x67f4 ) volatile AUTOSPEED197_t AUTOSPEED197;
#define reg_DFE_CUR_SEL_G_G6_LANE_3_0  AUTOSPEED197.BF.DFE_CUR_SEL_G_G6_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G6_LANE_1_0  AUTOSPEED197.BF.REG_DFE_RATE_MODE_G6_LANE_1_0
#define reg_REG_DFE_DIS_G6_LANE  AUTOSPEED197.BF.REG_DFE_DIS_G6_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G6_LANE_1_0  AUTOSPEED197.BF.REG_DFE_TAP_SETTLE_SCALE_G6_LANE_1_0

// 0x07f8	AUTOSPEED198		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G6_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G6_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha9*/
		uint8_t DFE_PAM2_MODE_G6_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G6_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED198_t;
__xdata __at( 0x67f8 ) volatile AUTOSPEED198_t AUTOSPEED198;
#define reg_RXDLL_TEMP_A_G6_LANE_7_0  AUTOSPEED198.BF.RXDLL_TEMP_A_G6_LANE_7_0
#define reg_RXDLL_TEMP_B_G6_LANE_7_0  AUTOSPEED198.BF.RXDLL_TEMP_B_G6_LANE_7_0
#define reg_DFE_PAM2_MODE_G6_LANE  AUTOSPEED198.BF.DFE_PAM2_MODE_G6_LANE
#define reg_RX_PAM2_EN_G6_LANE  AUTOSPEED198.BF.RX_PAM2_EN_G6_LANE

// 0x07fc	AUTOSPEED199		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G6_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED199_t;
__xdata __at( 0x67fc ) volatile AUTOSPEED199_t AUTOSPEED199;
#define reg_RX_HALFRATE_EN_G6_LANE  AUTOSPEED199.BF.RX_HALFRATE_EN_G6_LANE

// 0x0800	AUTOSPEED200		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G7_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G7_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G7_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G7_LANE_2_0           : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED200_t;
__xdata __at( 0x6800 ) volatile AUTOSPEED200_t AUTOSPEED200;
#define reg_PLL_RATE_SEL_TX_G7_LANE_3_0  AUTOSPEED200.BF.PLL_RATE_SEL_TX_G7_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G7_LANE  AUTOSPEED200.BF.TX_VDDCAL_RATE_EN_G7_LANE
#define reg_TX_SPEEDDIV_G7_LANE_2_0  AUTOSPEED200.BF.TX_SPEEDDIV_G7_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G7_LANE_2_0  AUTOSPEED200.BF.TXREG_SPEEDTRK_CLK_G7_LANE_2_0

// 0x0804	AUTOSPEED201		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G7_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G7_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G7_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G7_LANE_1_0             : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED201_t;
__xdata __at( 0x6804 ) volatile AUTOSPEED201_t AUTOSPEED201;
#define reg_TXREG_SPEEDTRK_DATA_G7_LANE_2_0  AUTOSPEED201.BF.TXREG_SPEEDTRK_DATA_G7_LANE_2_0
#define reg_TX_PAM2_EN_G7_LANE  AUTOSPEED201.BF.TX_PAM2_EN_G7_LANE
#define reg_TX_HALFRATE_EN_G7_LANE  AUTOSPEED201.BF.TX_HALFRATE_EN_G7_LANE
#define reg_TX_TRAIN_PAT_SEL_G7_LANE_1_0  AUTOSPEED201.BF.TX_TRAIN_PAT_SEL_G7_LANE_1_0

// 0x0808	AUTOSPEED202		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G7_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G7_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G7_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G7_LANE_2_0              : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED202_t;
__xdata __at( 0x6808 ) volatile AUTOSPEED202_t AUTOSPEED202;
#define reg_PLL_RATE_SEL_RX_G7_LANE_3_0  AUTOSPEED202.BF.PLL_RATE_SEL_RX_G7_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G7_LANE  AUTOSPEED202.BF.RX_VDDCAL_RATE_EN_G7_LANE
#define reg_RX_SPEED_DIV_G7_LANE_2_0  AUTOSPEED202.BF.RX_SPEED_DIV_G7_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G7_LANE_2_0  AUTOSPEED202.BF.DTL_CLK_SPEEDUP_G7_LANE_2_0

// 0x080c	AUTOSPEED203		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G7_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'hb*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G7_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G7_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G7_LANE_2_0             : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED203_t;
__xdata __at( 0x680c ) volatile AUTOSPEED203_t AUTOSPEED203;
#define reg_RXINTPI_G7_LANE_3_0  AUTOSPEED203.BF.RXINTPI_G7_LANE_3_0
#define reg_INTPR_G7_LANE_1_0  AUTOSPEED203.BF.INTPR_G7_LANE_1_0
#define reg_DLL_FREQ_SEL_G7_LANE_2_0  AUTOSPEED203.BF.DLL_FREQ_SEL_G7_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G7_LANE_2_0  AUTOSPEED203.BF.EOM_DLL_FREQ_SEL_G7_LANE_2_0

// 0x0810	AUTOSPEED204		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G7_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G7_LANE_2_0           : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G7_LANE          : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G7_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED204_t;
__xdata __at( 0x6810 ) volatile AUTOSPEED204_t AUTOSPEED204;
#define reg_RXREG_SPEEDTRK_DATA_G7_LANE_2_0  AUTOSPEED204.BF.RXREG_SPEEDTRK_DATA_G7_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G7_LANE_2_0  AUTOSPEED204.BF.RXREG_SPEEDTRK_CLK_G7_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G7_LANE  AUTOSPEED204.BF.RXREG_SPEEDTRK_CLK_HALF_G7_LANE
#define reg_SELMUFI_G7_LANE_2_0  AUTOSPEED204.BF.SELMUFI_G7_LANE_2_0

// 0x0814	AUTOSPEED205		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G7_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G7_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G7_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G7_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED205_t;
__xdata __at( 0x6814 ) volatile AUTOSPEED205_t AUTOSPEED205;
#define reg_SELMUFF_G7_LANE_2_0  AUTOSPEED205.BF.SELMUFF_G7_LANE_2_0
#define reg_SELMUPI_G7_LANE_3_0  AUTOSPEED205.BF.SELMUPI_G7_LANE_3_0
#define reg_SELMUPF_G7_LANE_3_0  AUTOSPEED205.BF.SELMUPF_G7_LANE_3_0
#define reg_DTL_CLK_MODE_G7_LANE_1_0  AUTOSPEED205.BF.DTL_CLK_MODE_G7_LANE_1_0

// 0x0818	AUTOSPEED206		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G7_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t RX_FOFFSET_EXTRA_M_G7_LANE_13_8          : 6;	/* [13:8]     r/w 6'h1b*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G7_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G7_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED206_t;
__xdata __at( 0x6818 ) volatile AUTOSPEED206_t AUTOSPEED206;
#define reg_RX_FOFFSET_EXTRA_M_G7_LANE_7_0  AUTOSPEED206.BF.RX_FOFFSET_EXTRA_M_G7_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G7_LANE_13_8  AUTOSPEED206.BF.RX_FOFFSET_EXTRA_M_G7_LANE_13_8
#define reg_INIT_RXFOFFS_G7_LANE_7_0  AUTOSPEED206.BF.INIT_RXFOFFS_G7_LANE_7_0
#define reg_INIT_RXFOFFS_G7_LANE_12_8  AUTOSPEED206.BF.INIT_RXFOFFS_G7_LANE_12_8

// 0x081c	AUTOSPEED207		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G7_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G7_LANE_2_0                : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G7_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G7_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED207_t;
__xdata __at( 0x681c ) volatile AUTOSPEED207_t AUTOSPEED207;
#define reg_PU_SMPLR_D_P2_G7_LANE_2_0  AUTOSPEED207.BF.PU_SMPLR_D_P2_G7_LANE_2_0
#define reg_PU_SMPLR_S_P2_G7_LANE_2_0  AUTOSPEED207.BF.PU_SMPLR_S_P2_G7_LANE_2_0
#define reg_PU_SMPLR_D_P4_G7_LANE_2_0  AUTOSPEED207.BF.PU_SMPLR_D_P4_G7_LANE_2_0
#define reg_PU_SMPLR_S_P4_G7_LANE_2_0  AUTOSPEED207.BF.PU_SMPLR_S_P4_G7_LANE_2_0

// 0x0820	AUTOSPEED208		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G7_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G7_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G7_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G7_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED208_t;
__xdata __at( 0x6820 ) volatile AUTOSPEED208_t AUTOSPEED208;
#define reg_PATH_DISABLE_EDGE_P2P4_G7_LANE  AUTOSPEED208.BF.PATH_DISABLE_EDGE_P2P4_G7_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G7_LANE  AUTOSPEED208.BF.PATH_DISABLE_EDGE_P1P3_G7_LANE
#define reg_PU_SMPLR_D_P1_G7_LANE_2_0  AUTOSPEED208.BF.PU_SMPLR_D_P1_G7_LANE_2_0
#define reg_PU_SMPLR_S_P1_G7_LANE_2_0  AUTOSPEED208.BF.PU_SMPLR_S_P1_G7_LANE_2_0

// 0x0824	AUTOSPEED209		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G7_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G7_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G7_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G7_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED209_t;
__xdata __at( 0x6824 ) volatile AUTOSPEED209_t AUTOSPEED209;
#define reg_PU_SMPLR_D_P3_G7_LANE_2_0  AUTOSPEED209.BF.PU_SMPLR_D_P3_G7_LANE_2_0
#define reg_PU_SMPLR_S_P3_G7_LANE_2_0  AUTOSPEED209.BF.PU_SMPLR_S_P3_G7_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G7_LANE  AUTOSPEED209.BF.PATH_DISABLE_D_P1P3_G7_LANE
#define reg_PATH_DISABLE_S_P1P3_G7_LANE  AUTOSPEED209.BF.PATH_DISABLE_S_P1P3_G7_LANE

// 0x0828	AUTOSPEED210		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G7_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G7_LANE              : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G7_LANE_7_0                : 8;	/*[23:16]     r/w 8'h56*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G7_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED210_t;
__xdata __at( 0x6828 ) volatile AUTOSPEED210_t AUTOSPEED210;
#define reg_RXCLK_25M_CTRL_G7_LANE_1_0  AUTOSPEED210.BF.RXCLK_25M_CTRL_G7_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G7_LANE  AUTOSPEED210.BF.RXCLK_25M_DIV1P5_EN_G7_LANE
#define reg_RXCLK_25M_DIV_G7_LANE_7_0  AUTOSPEED210.BF.RXCLK_25M_DIV_G7_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G7_LANE  AUTOSPEED210.BF.RXCLK_25M_FIX_DIV_EN_G7_LANE

// 0x082c	AUTOSPEED211		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G7_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G7_LANE                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G7_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G7_LANE_3_0            : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED211_t;
__xdata __at( 0x682c ) volatile AUTOSPEED211_t AUTOSPEED211;
#define reg_CTLE_LOW_SPEED_SEL_G7_LANE_1_0  AUTOSPEED211.BF.CTLE_LOW_SPEED_SEL_G7_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G7_LANE  AUTOSPEED211.BF.CTLE_BYPASS1_EN_G7_LANE
#define reg_CTLE_BYPASS2_EN_G7_LANE  AUTOSPEED211.BF.CTLE_BYPASS2_EN_G7_LANE
#define reg_CTLE_CURRENT1_SEL_G7_LANE_3_0  AUTOSPEED211.BF.CTLE_CURRENT1_SEL_G7_LANE_3_0

// 0x0830	AUTOSPEED212		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G7_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G7_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G7_LANE_3_0             : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G7_LANE_3_0        : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED212_t;
__xdata __at( 0x6830 ) volatile AUTOSPEED212_t AUTOSPEED212;
#define reg_CTLE_RL1_SEL_G7_LANE_3_0  AUTOSPEED212.BF.CTLE_RL1_SEL_G7_LANE_3_0
#define reg_CTLE_RF_CTRL_G7_LANE_3_0  AUTOSPEED212.BF.CTLE_RF_CTRL_G7_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G7_LANE_3_0  AUTOSPEED212.BF.CTLE_RL1_TIA_SEL_G7_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G7_LANE_3_0  AUTOSPEED212.BF.CTLE_CURRENT1_TIA_SEL_G7_LANE_3_0

// 0x0834	AUTOSPEED213		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G7_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G7_LANE_3_0       : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G7_LANE_3_0            : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G7_LANE_3_0       : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED213_t;
__xdata __at( 0x6834 ) volatile AUTOSPEED213_t AUTOSPEED213;
#define reg_CTLE_RL2_SEL_G_P2_G7_LANE_3_0  AUTOSPEED213.BF.CTLE_RL2_SEL_G_P2_G7_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G7_LANE_3_0  AUTOSPEED213.BF.CTLE_CURRENT2_SEL_G_P2_G7_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G7_LANE_3_0  AUTOSPEED213.BF.CTLE_RL2_SEL_G_P4_G7_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G7_LANE_3_0  AUTOSPEED213.BF.CTLE_CURRENT2_SEL_G_P4_G7_LANE_3_0

// 0x0838	AUTOSPEED214		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G7_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G7_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G7_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G7_LANE_1_0     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED214_t;
__xdata __at( 0x6838 ) volatile AUTOSPEED214_t AUTOSPEED214;
#define reg_DFE_CUR_SEL_G_G7_LANE_3_0  AUTOSPEED214.BF.DFE_CUR_SEL_G_G7_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G7_LANE_1_0  AUTOSPEED214.BF.REG_DFE_RATE_MODE_G7_LANE_1_0
#define reg_REG_DFE_DIS_G7_LANE  AUTOSPEED214.BF.REG_DFE_DIS_G7_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G7_LANE_1_0  AUTOSPEED214.BF.REG_DFE_TAP_SETTLE_SCALE_G7_LANE_1_0

// 0x083c	AUTOSPEED215		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G7_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G7_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha9*/
		uint8_t DFE_PAM2_MODE_G7_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G7_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED215_t;
__xdata __at( 0x683c ) volatile AUTOSPEED215_t AUTOSPEED215;
#define reg_RXDLL_TEMP_A_G7_LANE_7_0  AUTOSPEED215.BF.RXDLL_TEMP_A_G7_LANE_7_0
#define reg_RXDLL_TEMP_B_G7_LANE_7_0  AUTOSPEED215.BF.RXDLL_TEMP_B_G7_LANE_7_0
#define reg_DFE_PAM2_MODE_G7_LANE  AUTOSPEED215.BF.DFE_PAM2_MODE_G7_LANE
#define reg_RX_PAM2_EN_G7_LANE  AUTOSPEED215.BF.RX_PAM2_EN_G7_LANE

// 0x0840	AUTOSPEED216		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G7_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED216_t;
__xdata __at( 0x6840 ) volatile AUTOSPEED216_t AUTOSPEED216;
#define reg_RX_HALFRATE_EN_G7_LANE  AUTOSPEED216.BF.RX_HALFRATE_EN_G7_LANE

// 0x0844	AUTOSPEED217		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G8_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G8_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G8_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G8_LANE_2_0           : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED217_t;
__xdata __at( 0x6844 ) volatile AUTOSPEED217_t AUTOSPEED217;
#define reg_PLL_RATE_SEL_TX_G8_LANE_3_0  AUTOSPEED217.BF.PLL_RATE_SEL_TX_G8_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G8_LANE  AUTOSPEED217.BF.TX_VDDCAL_RATE_EN_G8_LANE
#define reg_TX_SPEEDDIV_G8_LANE_2_0  AUTOSPEED217.BF.TX_SPEEDDIV_G8_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G8_LANE_2_0  AUTOSPEED217.BF.TXREG_SPEEDTRK_CLK_G8_LANE_2_0

// 0x0848	AUTOSPEED218		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G8_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G8_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G8_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G8_LANE_1_0             : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED218_t;
__xdata __at( 0x6848 ) volatile AUTOSPEED218_t AUTOSPEED218;
#define reg_TXREG_SPEEDTRK_DATA_G8_LANE_2_0  AUTOSPEED218.BF.TXREG_SPEEDTRK_DATA_G8_LANE_2_0
#define reg_TX_PAM2_EN_G8_LANE  AUTOSPEED218.BF.TX_PAM2_EN_G8_LANE
#define reg_TX_HALFRATE_EN_G8_LANE  AUTOSPEED218.BF.TX_HALFRATE_EN_G8_LANE
#define reg_TX_TRAIN_PAT_SEL_G8_LANE_1_0  AUTOSPEED218.BF.TX_TRAIN_PAT_SEL_G8_LANE_1_0

// 0x084c	AUTOSPEED219		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G8_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G8_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G8_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G8_LANE_2_0              : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED219_t;
__xdata __at( 0x684c ) volatile AUTOSPEED219_t AUTOSPEED219;
#define reg_PLL_RATE_SEL_RX_G8_LANE_3_0  AUTOSPEED219.BF.PLL_RATE_SEL_RX_G8_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G8_LANE  AUTOSPEED219.BF.RX_VDDCAL_RATE_EN_G8_LANE
#define reg_RX_SPEED_DIV_G8_LANE_2_0  AUTOSPEED219.BF.RX_SPEED_DIV_G8_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G8_LANE_2_0  AUTOSPEED219.BF.DTL_CLK_SPEEDUP_G8_LANE_2_0

// 0x0850	AUTOSPEED220		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G8_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G8_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G8_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G8_LANE_2_0             : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED220_t;
__xdata __at( 0x6850 ) volatile AUTOSPEED220_t AUTOSPEED220;
#define reg_RXINTPI_G8_LANE_3_0  AUTOSPEED220.BF.RXINTPI_G8_LANE_3_0
#define reg_INTPR_G8_LANE_1_0  AUTOSPEED220.BF.INTPR_G8_LANE_1_0
#define reg_DLL_FREQ_SEL_G8_LANE_2_0  AUTOSPEED220.BF.DLL_FREQ_SEL_G8_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G8_LANE_2_0  AUTOSPEED220.BF.EOM_DLL_FREQ_SEL_G8_LANE_2_0

// 0x0854	AUTOSPEED221		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G8_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G8_LANE_2_0           : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G8_LANE          : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G8_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED221_t;
__xdata __at( 0x6854 ) volatile AUTOSPEED221_t AUTOSPEED221;
#define reg_RXREG_SPEEDTRK_DATA_G8_LANE_2_0  AUTOSPEED221.BF.RXREG_SPEEDTRK_DATA_G8_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G8_LANE_2_0  AUTOSPEED221.BF.RXREG_SPEEDTRK_CLK_G8_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G8_LANE  AUTOSPEED221.BF.RXREG_SPEEDTRK_CLK_HALF_G8_LANE
#define reg_SELMUFI_G8_LANE_2_0  AUTOSPEED221.BF.SELMUFI_G8_LANE_2_0

// 0x0858	AUTOSPEED222		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G8_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G8_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G8_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G8_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED222_t;
__xdata __at( 0x6858 ) volatile AUTOSPEED222_t AUTOSPEED222;
#define reg_SELMUFF_G8_LANE_2_0  AUTOSPEED222.BF.SELMUFF_G8_LANE_2_0
#define reg_SELMUPI_G8_LANE_3_0  AUTOSPEED222.BF.SELMUPI_G8_LANE_3_0
#define reg_SELMUPF_G8_LANE_3_0  AUTOSPEED222.BF.SELMUPF_G8_LANE_3_0
#define reg_DTL_CLK_MODE_G8_LANE_1_0  AUTOSPEED222.BF.DTL_CLK_MODE_G8_LANE_1_0

// 0x085c	AUTOSPEED223		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G8_LANE_7_0           : 8;	/*  [7:0]     r/w 8'hef*/
		uint8_t RX_FOFFSET_EXTRA_M_G8_LANE_13_8          : 6;	/* [13:8]     r/w 6'h1c*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G8_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G8_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED223_t;
__xdata __at( 0x685c ) volatile AUTOSPEED223_t AUTOSPEED223;
#define reg_RX_FOFFSET_EXTRA_M_G8_LANE_7_0  AUTOSPEED223.BF.RX_FOFFSET_EXTRA_M_G8_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G8_LANE_13_8  AUTOSPEED223.BF.RX_FOFFSET_EXTRA_M_G8_LANE_13_8
#define reg_INIT_RXFOFFS_G8_LANE_7_0  AUTOSPEED223.BF.INIT_RXFOFFS_G8_LANE_7_0
#define reg_INIT_RXFOFFS_G8_LANE_12_8  AUTOSPEED223.BF.INIT_RXFOFFS_G8_LANE_12_8

// 0x0860	AUTOSPEED224		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G8_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G8_LANE_2_0                : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G8_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G8_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED224_t;
__xdata __at( 0x6860 ) volatile AUTOSPEED224_t AUTOSPEED224;
#define reg_PU_SMPLR_D_P2_G8_LANE_2_0  AUTOSPEED224.BF.PU_SMPLR_D_P2_G8_LANE_2_0
#define reg_PU_SMPLR_S_P2_G8_LANE_2_0  AUTOSPEED224.BF.PU_SMPLR_S_P2_G8_LANE_2_0
#define reg_PU_SMPLR_D_P4_G8_LANE_2_0  AUTOSPEED224.BF.PU_SMPLR_D_P4_G8_LANE_2_0
#define reg_PU_SMPLR_S_P4_G8_LANE_2_0  AUTOSPEED224.BF.PU_SMPLR_S_P4_G8_LANE_2_0

// 0x0864	AUTOSPEED225		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G8_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G8_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G8_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G8_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED225_t;
__xdata __at( 0x6864 ) volatile AUTOSPEED225_t AUTOSPEED225;
#define reg_PATH_DISABLE_EDGE_P2P4_G8_LANE  AUTOSPEED225.BF.PATH_DISABLE_EDGE_P2P4_G8_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G8_LANE  AUTOSPEED225.BF.PATH_DISABLE_EDGE_P1P3_G8_LANE
#define reg_PU_SMPLR_D_P1_G8_LANE_2_0  AUTOSPEED225.BF.PU_SMPLR_D_P1_G8_LANE_2_0
#define reg_PU_SMPLR_S_P1_G8_LANE_2_0  AUTOSPEED225.BF.PU_SMPLR_S_P1_G8_LANE_2_0

// 0x0868	AUTOSPEED226		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G8_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G8_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G8_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G8_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED226_t;
__xdata __at( 0x6868 ) volatile AUTOSPEED226_t AUTOSPEED226;
#define reg_PU_SMPLR_D_P3_G8_LANE_2_0  AUTOSPEED226.BF.PU_SMPLR_D_P3_G8_LANE_2_0
#define reg_PU_SMPLR_S_P3_G8_LANE_2_0  AUTOSPEED226.BF.PU_SMPLR_S_P3_G8_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G8_LANE  AUTOSPEED226.BF.PATH_DISABLE_D_P1P3_G8_LANE
#define reg_PATH_DISABLE_S_P1P3_G8_LANE  AUTOSPEED226.BF.PATH_DISABLE_S_P1P3_G8_LANE

// 0x086c	AUTOSPEED227		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G8_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G8_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G8_LANE_7_0                : 8;	/*[23:16]     r/w 8'h89*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G8_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED227_t;
__xdata __at( 0x686c ) volatile AUTOSPEED227_t AUTOSPEED227;
#define reg_RXCLK_25M_CTRL_G8_LANE_1_0  AUTOSPEED227.BF.RXCLK_25M_CTRL_G8_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G8_LANE  AUTOSPEED227.BF.RXCLK_25M_DIV1P5_EN_G8_LANE
#define reg_RXCLK_25M_DIV_G8_LANE_7_0  AUTOSPEED227.BF.RXCLK_25M_DIV_G8_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G8_LANE  AUTOSPEED227.BF.RXCLK_25M_FIX_DIV_EN_G8_LANE

// 0x0870	AUTOSPEED228		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G8_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G8_LANE                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G8_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G8_LANE_3_0            : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED228_t;
__xdata __at( 0x6870 ) volatile AUTOSPEED228_t AUTOSPEED228;
#define reg_CTLE_LOW_SPEED_SEL_G8_LANE_1_0  AUTOSPEED228.BF.CTLE_LOW_SPEED_SEL_G8_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G8_LANE  AUTOSPEED228.BF.CTLE_BYPASS1_EN_G8_LANE
#define reg_CTLE_BYPASS2_EN_G8_LANE  AUTOSPEED228.BF.CTLE_BYPASS2_EN_G8_LANE
#define reg_CTLE_CURRENT1_SEL_G8_LANE_3_0  AUTOSPEED228.BF.CTLE_CURRENT1_SEL_G8_LANE_3_0

// 0x0874	AUTOSPEED229		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G8_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G8_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G8_LANE_3_0             : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G8_LANE_3_0        : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED229_t;
__xdata __at( 0x6874 ) volatile AUTOSPEED229_t AUTOSPEED229;
#define reg_CTLE_RL1_SEL_G8_LANE_3_0  AUTOSPEED229.BF.CTLE_RL1_SEL_G8_LANE_3_0
#define reg_CTLE_RF_CTRL_G8_LANE_3_0  AUTOSPEED229.BF.CTLE_RF_CTRL_G8_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G8_LANE_3_0  AUTOSPEED229.BF.CTLE_RL1_TIA_SEL_G8_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G8_LANE_3_0  AUTOSPEED229.BF.CTLE_CURRENT1_TIA_SEL_G8_LANE_3_0

// 0x0878	AUTOSPEED230		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G8_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G8_LANE_3_0       : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G8_LANE_3_0            : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G8_LANE_3_0       : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED230_t;
__xdata __at( 0x6878 ) volatile AUTOSPEED230_t AUTOSPEED230;
#define reg_CTLE_RL2_SEL_G_P2_G8_LANE_3_0  AUTOSPEED230.BF.CTLE_RL2_SEL_G_P2_G8_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G8_LANE_3_0  AUTOSPEED230.BF.CTLE_CURRENT2_SEL_G_P2_G8_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G8_LANE_3_0  AUTOSPEED230.BF.CTLE_RL2_SEL_G_P4_G8_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G8_LANE_3_0  AUTOSPEED230.BF.CTLE_CURRENT2_SEL_G_P4_G8_LANE_3_0

// 0x087c	AUTOSPEED231		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G8_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G8_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G8_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G8_LANE_1_0     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED231_t;
__xdata __at( 0x687c ) volatile AUTOSPEED231_t AUTOSPEED231;
#define reg_DFE_CUR_SEL_G_G8_LANE_3_0  AUTOSPEED231.BF.DFE_CUR_SEL_G_G8_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G8_LANE_1_0  AUTOSPEED231.BF.REG_DFE_RATE_MODE_G8_LANE_1_0
#define reg_REG_DFE_DIS_G8_LANE  AUTOSPEED231.BF.REG_DFE_DIS_G8_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G8_LANE_1_0  AUTOSPEED231.BF.REG_DFE_TAP_SETTLE_SCALE_G8_LANE_1_0

// 0x0880	AUTOSPEED232		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G8_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G8_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h9d*/
		uint8_t DFE_PAM2_MODE_G8_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G8_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED232_t;
__xdata __at( 0x6880 ) volatile AUTOSPEED232_t AUTOSPEED232;
#define reg_RXDLL_TEMP_A_G8_LANE_7_0  AUTOSPEED232.BF.RXDLL_TEMP_A_G8_LANE_7_0
#define reg_RXDLL_TEMP_B_G8_LANE_7_0  AUTOSPEED232.BF.RXDLL_TEMP_B_G8_LANE_7_0
#define reg_DFE_PAM2_MODE_G8_LANE  AUTOSPEED232.BF.DFE_PAM2_MODE_G8_LANE
#define reg_RX_PAM2_EN_G8_LANE  AUTOSPEED232.BF.RX_PAM2_EN_G8_LANE

// 0x0884	AUTOSPEED233		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G8_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED233_t;
__xdata __at( 0x6884 ) volatile AUTOSPEED233_t AUTOSPEED233;
#define reg_RX_HALFRATE_EN_G8_LANE  AUTOSPEED233.BF.RX_HALFRATE_EN_G8_LANE

// 0x0888	AUTOSPEED234		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G9_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G9_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G9_LANE_2_0                  : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G9_LANE_2_0           : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED234_t;
__xdata __at( 0x6888 ) volatile AUTOSPEED234_t AUTOSPEED234;
#define reg_PLL_RATE_SEL_TX_G9_LANE_3_0  AUTOSPEED234.BF.PLL_RATE_SEL_TX_G9_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G9_LANE  AUTOSPEED234.BF.TX_VDDCAL_RATE_EN_G9_LANE
#define reg_TX_SPEEDDIV_G9_LANE_2_0  AUTOSPEED234.BF.TX_SPEEDDIV_G9_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G9_LANE_2_0  AUTOSPEED234.BF.TXREG_SPEEDTRK_CLK_G9_LANE_2_0

// 0x088c	AUTOSPEED235		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G9_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G9_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G9_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G9_LANE_1_0             : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED235_t;
__xdata __at( 0x688c ) volatile AUTOSPEED235_t AUTOSPEED235;
#define reg_TXREG_SPEEDTRK_DATA_G9_LANE_2_0  AUTOSPEED235.BF.TXREG_SPEEDTRK_DATA_G9_LANE_2_0
#define reg_TX_PAM2_EN_G9_LANE  AUTOSPEED235.BF.TX_PAM2_EN_G9_LANE
#define reg_TX_HALFRATE_EN_G9_LANE  AUTOSPEED235.BF.TX_HALFRATE_EN_G9_LANE
#define reg_TX_TRAIN_PAT_SEL_G9_LANE_1_0  AUTOSPEED235.BF.TX_TRAIN_PAT_SEL_G9_LANE_1_0

// 0x0890	AUTOSPEED236		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G9_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G9_LANE                : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G9_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G9_LANE_2_0              : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED236_t;
__xdata __at( 0x6890 ) volatile AUTOSPEED236_t AUTOSPEED236;
#define reg_PLL_RATE_SEL_RX_G9_LANE_3_0  AUTOSPEED236.BF.PLL_RATE_SEL_RX_G9_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G9_LANE  AUTOSPEED236.BF.RX_VDDCAL_RATE_EN_G9_LANE
#define reg_RX_SPEED_DIV_G9_LANE_2_0  AUTOSPEED236.BF.RX_SPEED_DIV_G9_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G9_LANE_2_0  AUTOSPEED236.BF.DTL_CLK_SPEEDUP_G9_LANE_2_0

// 0x0894	AUTOSPEED237		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G9_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G9_LANE_1_0                        : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G9_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G9_LANE_2_0             : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED237_t;
__xdata __at( 0x6894 ) volatile AUTOSPEED237_t AUTOSPEED237;
#define reg_RXINTPI_G9_LANE_3_0  AUTOSPEED237.BF.RXINTPI_G9_LANE_3_0
#define reg_INTPR_G9_LANE_1_0  AUTOSPEED237.BF.INTPR_G9_LANE_1_0
#define reg_DLL_FREQ_SEL_G9_LANE_2_0  AUTOSPEED237.BF.DLL_FREQ_SEL_G9_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G9_LANE_2_0  AUTOSPEED237.BF.EOM_DLL_FREQ_SEL_G9_LANE_2_0

// 0x0898	AUTOSPEED238		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G9_LANE_2_0          : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G9_LANE_2_0           : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G9_LANE          : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G9_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED238_t;
__xdata __at( 0x6898 ) volatile AUTOSPEED238_t AUTOSPEED238;
#define reg_RXREG_SPEEDTRK_DATA_G9_LANE_2_0  AUTOSPEED238.BF.RXREG_SPEEDTRK_DATA_G9_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G9_LANE_2_0  AUTOSPEED238.BF.RXREG_SPEEDTRK_CLK_G9_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G9_LANE  AUTOSPEED238.BF.RXREG_SPEEDTRK_CLK_HALF_G9_LANE
#define reg_SELMUFI_G9_LANE_2_0  AUTOSPEED238.BF.SELMUFI_G9_LANE_2_0

// 0x089c	AUTOSPEED239		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G9_LANE_2_0                      : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G9_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G9_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G9_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED239_t;
__xdata __at( 0x689c ) volatile AUTOSPEED239_t AUTOSPEED239;
#define reg_SELMUFF_G9_LANE_2_0  AUTOSPEED239.BF.SELMUFF_G9_LANE_2_0
#define reg_SELMUPI_G9_LANE_3_0  AUTOSPEED239.BF.SELMUPI_G9_LANE_3_0
#define reg_SELMUPF_G9_LANE_3_0  AUTOSPEED239.BF.SELMUPF_G9_LANE_3_0
#define reg_DTL_CLK_MODE_G9_LANE_1_0  AUTOSPEED239.BF.DTL_CLK_MODE_G9_LANE_1_0

// 0x08a0	AUTOSPEED240		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G9_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h97*/
		uint8_t RX_FOFFSET_EXTRA_M_G9_LANE_13_8          : 6;	/* [13:8]     r/w 6'h1d*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G9_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G9_LANE_12_8                : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED240_t;
__xdata __at( 0x68a0 ) volatile AUTOSPEED240_t AUTOSPEED240;
#define reg_RX_FOFFSET_EXTRA_M_G9_LANE_7_0  AUTOSPEED240.BF.RX_FOFFSET_EXTRA_M_G9_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G9_LANE_13_8  AUTOSPEED240.BF.RX_FOFFSET_EXTRA_M_G9_LANE_13_8
#define reg_INIT_RXFOFFS_G9_LANE_7_0  AUTOSPEED240.BF.INIT_RXFOFFS_G9_LANE_7_0
#define reg_INIT_RXFOFFS_G9_LANE_12_8  AUTOSPEED240.BF.INIT_RXFOFFS_G9_LANE_12_8

// 0x08a4	AUTOSPEED241		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G9_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G9_LANE_2_0                : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G9_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G9_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED241_t;
__xdata __at( 0x68a4 ) volatile AUTOSPEED241_t AUTOSPEED241;
#define reg_PU_SMPLR_D_P2_G9_LANE_2_0  AUTOSPEED241.BF.PU_SMPLR_D_P2_G9_LANE_2_0
#define reg_PU_SMPLR_S_P2_G9_LANE_2_0  AUTOSPEED241.BF.PU_SMPLR_S_P2_G9_LANE_2_0
#define reg_PU_SMPLR_D_P4_G9_LANE_2_0  AUTOSPEED241.BF.PU_SMPLR_D_P4_G9_LANE_2_0
#define reg_PU_SMPLR_S_P4_G9_LANE_2_0  AUTOSPEED241.BF.PU_SMPLR_S_P4_G9_LANE_2_0

// 0x08a8	AUTOSPEED242		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G9_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G9_LANE           : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G9_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G9_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED242_t;
__xdata __at( 0x68a8 ) volatile AUTOSPEED242_t AUTOSPEED242;
#define reg_PATH_DISABLE_EDGE_P2P4_G9_LANE  AUTOSPEED242.BF.PATH_DISABLE_EDGE_P2P4_G9_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G9_LANE  AUTOSPEED242.BF.PATH_DISABLE_EDGE_P1P3_G9_LANE
#define reg_PU_SMPLR_D_P1_G9_LANE_2_0  AUTOSPEED242.BF.PU_SMPLR_D_P1_G9_LANE_2_0
#define reg_PU_SMPLR_S_P1_G9_LANE_2_0  AUTOSPEED242.BF.PU_SMPLR_S_P1_G9_LANE_2_0

// 0x08ac	AUTOSPEED243		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G9_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G9_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G9_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G9_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED243_t;
__xdata __at( 0x68ac ) volatile AUTOSPEED243_t AUTOSPEED243;
#define reg_PU_SMPLR_D_P3_G9_LANE_2_0  AUTOSPEED243.BF.PU_SMPLR_D_P3_G9_LANE_2_0
#define reg_PU_SMPLR_S_P3_G9_LANE_2_0  AUTOSPEED243.BF.PU_SMPLR_S_P3_G9_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G9_LANE  AUTOSPEED243.BF.PATH_DISABLE_D_P1P3_G9_LANE
#define reg_PATH_DISABLE_S_P1P3_G9_LANE  AUTOSPEED243.BF.PATH_DISABLE_S_P1P3_G9_LANE

// 0x08b0	AUTOSPEED244		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G9_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G9_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G9_LANE_7_0                : 8;	/*[23:16]     r/w 8'h46*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G9_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED244_t;
__xdata __at( 0x68b0 ) volatile AUTOSPEED244_t AUTOSPEED244;
#define reg_RXCLK_25M_CTRL_G9_LANE_1_0  AUTOSPEED244.BF.RXCLK_25M_CTRL_G9_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G9_LANE  AUTOSPEED244.BF.RXCLK_25M_DIV1P5_EN_G9_LANE
#define reg_RXCLK_25M_DIV_G9_LANE_7_0  AUTOSPEED244.BF.RXCLK_25M_DIV_G9_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G9_LANE  AUTOSPEED244.BF.RXCLK_25M_FIX_DIV_EN_G9_LANE

// 0x08b4	AUTOSPEED245		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G9_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G9_LANE                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G9_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G9_LANE_3_0            : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED245_t;
__xdata __at( 0x68b4 ) volatile AUTOSPEED245_t AUTOSPEED245;
#define reg_CTLE_LOW_SPEED_SEL_G9_LANE_1_0  AUTOSPEED245.BF.CTLE_LOW_SPEED_SEL_G9_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G9_LANE  AUTOSPEED245.BF.CTLE_BYPASS1_EN_G9_LANE
#define reg_CTLE_BYPASS2_EN_G9_LANE  AUTOSPEED245.BF.CTLE_BYPASS2_EN_G9_LANE
#define reg_CTLE_CURRENT1_SEL_G9_LANE_3_0  AUTOSPEED245.BF.CTLE_CURRENT1_SEL_G9_LANE_3_0

// 0x08b8	AUTOSPEED246		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G9_LANE_3_0                 : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G9_LANE_3_0                 : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G9_LANE_3_0             : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G9_LANE_3_0        : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED246_t;
__xdata __at( 0x68b8 ) volatile AUTOSPEED246_t AUTOSPEED246;
#define reg_CTLE_RL1_SEL_G9_LANE_3_0  AUTOSPEED246.BF.CTLE_RL1_SEL_G9_LANE_3_0
#define reg_CTLE_RF_CTRL_G9_LANE_3_0  AUTOSPEED246.BF.CTLE_RF_CTRL_G9_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G9_LANE_3_0  AUTOSPEED246.BF.CTLE_RL1_TIA_SEL_G9_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G9_LANE_3_0  AUTOSPEED246.BF.CTLE_CURRENT1_TIA_SEL_G9_LANE_3_0

// 0x08bc	AUTOSPEED247		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G9_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G9_LANE_3_0       : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G9_LANE_3_0            : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G9_LANE_3_0       : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED247_t;
__xdata __at( 0x68bc ) volatile AUTOSPEED247_t AUTOSPEED247;
#define reg_CTLE_RL2_SEL_G_P2_G9_LANE_3_0  AUTOSPEED247.BF.CTLE_RL2_SEL_G_P2_G9_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G9_LANE_3_0  AUTOSPEED247.BF.CTLE_CURRENT2_SEL_G_P2_G9_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G9_LANE_3_0  AUTOSPEED247.BF.CTLE_RL2_SEL_G_P4_G9_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G9_LANE_3_0  AUTOSPEED247.BF.CTLE_CURRENT2_SEL_G_P4_G9_LANE_3_0

// 0x08c0	AUTOSPEED248		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G9_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G9_LANE_1_0            : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G9_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G9_LANE_1_0     : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED248_t;
__xdata __at( 0x68c0 ) volatile AUTOSPEED248_t AUTOSPEED248;
#define reg_DFE_CUR_SEL_G_G9_LANE_3_0  AUTOSPEED248.BF.DFE_CUR_SEL_G_G9_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G9_LANE_1_0  AUTOSPEED248.BF.REG_DFE_RATE_MODE_G9_LANE_1_0
#define reg_REG_DFE_DIS_G9_LANE  AUTOSPEED248.BF.REG_DFE_DIS_G9_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G9_LANE_1_0  AUTOSPEED248.BF.REG_DFE_TAP_SETTLE_SCALE_G9_LANE_1_0

// 0x08c4	AUTOSPEED249		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G9_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G9_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h9d*/
		uint8_t DFE_PAM2_MODE_G9_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G9_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED249_t;
__xdata __at( 0x68c4 ) volatile AUTOSPEED249_t AUTOSPEED249;
#define reg_RXDLL_TEMP_A_G9_LANE_7_0  AUTOSPEED249.BF.RXDLL_TEMP_A_G9_LANE_7_0
#define reg_RXDLL_TEMP_B_G9_LANE_7_0  AUTOSPEED249.BF.RXDLL_TEMP_B_G9_LANE_7_0
#define reg_DFE_PAM2_MODE_G9_LANE  AUTOSPEED249.BF.DFE_PAM2_MODE_G9_LANE
#define reg_RX_PAM2_EN_G9_LANE  AUTOSPEED249.BF.RX_PAM2_EN_G9_LANE

// 0x08c8	AUTOSPEED250		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G9_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED250_t;
__xdata __at( 0x68c8 ) volatile AUTOSPEED250_t AUTOSPEED250;
#define reg_RX_HALFRATE_EN_G9_LANE  AUTOSPEED250.BF.RX_HALFRATE_EN_G9_LANE

// 0x08cc	AUTOSPEED251		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G10_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G10_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G10_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G10_LANE_2_0          : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED251_t;
__xdata __at( 0x68cc ) volatile AUTOSPEED251_t AUTOSPEED251;
#define reg_PLL_RATE_SEL_TX_G10_LANE_3_0  AUTOSPEED251.BF.PLL_RATE_SEL_TX_G10_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G10_LANE  AUTOSPEED251.BF.TX_VDDCAL_RATE_EN_G10_LANE
#define reg_TX_SPEEDDIV_G10_LANE_2_0  AUTOSPEED251.BF.TX_SPEEDDIV_G10_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G10_LANE_2_0  AUTOSPEED251.BF.TXREG_SPEEDTRK_CLK_G10_LANE_2_0

// 0x08d0	AUTOSPEED252		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G10_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G10_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G10_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G10_LANE_1_0            : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED252_t;
__xdata __at( 0x68d0 ) volatile AUTOSPEED252_t AUTOSPEED252;
#define reg_TXREG_SPEEDTRK_DATA_G10_LANE_2_0  AUTOSPEED252.BF.TXREG_SPEEDTRK_DATA_G10_LANE_2_0
#define reg_TX_PAM2_EN_G10_LANE  AUTOSPEED252.BF.TX_PAM2_EN_G10_LANE
#define reg_TX_HALFRATE_EN_G10_LANE  AUTOSPEED252.BF.TX_HALFRATE_EN_G10_LANE
#define reg_TX_TRAIN_PAT_SEL_G10_LANE_1_0  AUTOSPEED252.BF.TX_TRAIN_PAT_SEL_G10_LANE_1_0

// 0x08d4	AUTOSPEED253		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G10_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G10_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G10_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G10_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED253_t;
__xdata __at( 0x68d4 ) volatile AUTOSPEED253_t AUTOSPEED253;
#define reg_PLL_RATE_SEL_RX_G10_LANE_3_0  AUTOSPEED253.BF.PLL_RATE_SEL_RX_G10_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G10_LANE  AUTOSPEED253.BF.RX_VDDCAL_RATE_EN_G10_LANE
#define reg_RX_SPEED_DIV_G10_LANE_2_0  AUTOSPEED253.BF.RX_SPEED_DIV_G10_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G10_LANE_2_0  AUTOSPEED253.BF.DTL_CLK_SPEEDUP_G10_LANE_2_0

// 0x08d8	AUTOSPEED254		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G10_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G10_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G10_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G10_LANE_2_0            : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED254_t;
__xdata __at( 0x68d8 ) volatile AUTOSPEED254_t AUTOSPEED254;
#define reg_RXINTPI_G10_LANE_3_0  AUTOSPEED254.BF.RXINTPI_G10_LANE_3_0
#define reg_INTPR_G10_LANE_1_0  AUTOSPEED254.BF.INTPR_G10_LANE_1_0
#define reg_DLL_FREQ_SEL_G10_LANE_2_0  AUTOSPEED254.BF.DLL_FREQ_SEL_G10_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G10_LANE_2_0  AUTOSPEED254.BF.EOM_DLL_FREQ_SEL_G10_LANE_2_0

// 0x08dc	AUTOSPEED255		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G10_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G10_LANE_2_0          : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G10_LANE         : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G10_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED255_t;
__xdata __at( 0x68dc ) volatile AUTOSPEED255_t AUTOSPEED255;
#define reg_RXREG_SPEEDTRK_DATA_G10_LANE_2_0  AUTOSPEED255.BF.RXREG_SPEEDTRK_DATA_G10_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G10_LANE_2_0  AUTOSPEED255.BF.RXREG_SPEEDTRK_CLK_G10_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G10_LANE  AUTOSPEED255.BF.RXREG_SPEEDTRK_CLK_HALF_G10_LANE
#define reg_SELMUFI_G10_LANE_2_0  AUTOSPEED255.BF.SELMUFI_G10_LANE_2_0

// 0x08e0	AUTOSPEED256		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G10_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G10_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G10_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G10_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED256_t;
__xdata __at( 0x68e0 ) volatile AUTOSPEED256_t AUTOSPEED256;
#define reg_SELMUFF_G10_LANE_2_0  AUTOSPEED256.BF.SELMUFF_G10_LANE_2_0
#define reg_SELMUPI_G10_LANE_3_0  AUTOSPEED256.BF.SELMUPI_G10_LANE_3_0
#define reg_SELMUPF_G10_LANE_3_0  AUTOSPEED256.BF.SELMUPF_G10_LANE_3_0
#define reg_DTL_CLK_MODE_G10_LANE_1_0  AUTOSPEED256.BF.DTL_CLK_MODE_G10_LANE_1_0

// 0x08e4	AUTOSPEED257		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G10_LANE_7_0          : 8;	/*  [7:0]     r/w 8'hf2*/
		uint8_t RX_FOFFSET_EXTRA_M_G10_LANE_13_8         : 6;	/* [13:8]     r/w 6'h1b*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G10_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G10_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED257_t;
__xdata __at( 0x68e4 ) volatile AUTOSPEED257_t AUTOSPEED257;
#define reg_RX_FOFFSET_EXTRA_M_G10_LANE_7_0  AUTOSPEED257.BF.RX_FOFFSET_EXTRA_M_G10_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G10_LANE_13_8  AUTOSPEED257.BF.RX_FOFFSET_EXTRA_M_G10_LANE_13_8
#define reg_INIT_RXFOFFS_G10_LANE_7_0  AUTOSPEED257.BF.INIT_RXFOFFS_G10_LANE_7_0
#define reg_INIT_RXFOFFS_G10_LANE_12_8  AUTOSPEED257.BF.INIT_RXFOFFS_G10_LANE_12_8

// 0x08e8	AUTOSPEED258		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G10_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G10_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G10_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G10_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED258_t;
__xdata __at( 0x68e8 ) volatile AUTOSPEED258_t AUTOSPEED258;
#define reg_PU_SMPLR_D_P2_G10_LANE_2_0  AUTOSPEED258.BF.PU_SMPLR_D_P2_G10_LANE_2_0
#define reg_PU_SMPLR_S_P2_G10_LANE_2_0  AUTOSPEED258.BF.PU_SMPLR_S_P2_G10_LANE_2_0
#define reg_PU_SMPLR_D_P4_G10_LANE_2_0  AUTOSPEED258.BF.PU_SMPLR_D_P4_G10_LANE_2_0
#define reg_PU_SMPLR_S_P4_G10_LANE_2_0  AUTOSPEED258.BF.PU_SMPLR_S_P4_G10_LANE_2_0

// 0x08ec	AUTOSPEED259		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G10_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G10_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G10_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G10_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED259_t;
__xdata __at( 0x68ec ) volatile AUTOSPEED259_t AUTOSPEED259;
#define reg_PATH_DISABLE_EDGE_P2P4_G10_LANE  AUTOSPEED259.BF.PATH_DISABLE_EDGE_P2P4_G10_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G10_LANE  AUTOSPEED259.BF.PATH_DISABLE_EDGE_P1P3_G10_LANE
#define reg_PU_SMPLR_D_P1_G10_LANE_2_0  AUTOSPEED259.BF.PU_SMPLR_D_P1_G10_LANE_2_0
#define reg_PU_SMPLR_S_P1_G10_LANE_2_0  AUTOSPEED259.BF.PU_SMPLR_S_P1_G10_LANE_2_0

// 0x08f0	AUTOSPEED260		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G10_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G10_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G10_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G10_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED260_t;
__xdata __at( 0x68f0 ) volatile AUTOSPEED260_t AUTOSPEED260;
#define reg_PU_SMPLR_D_P3_G10_LANE_2_0  AUTOSPEED260.BF.PU_SMPLR_D_P3_G10_LANE_2_0
#define reg_PU_SMPLR_S_P3_G10_LANE_2_0  AUTOSPEED260.BF.PU_SMPLR_S_P3_G10_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G10_LANE  AUTOSPEED260.BF.PATH_DISABLE_D_P1P3_G10_LANE
#define reg_PATH_DISABLE_S_P1P3_G10_LANE  AUTOSPEED260.BF.PATH_DISABLE_S_P1P3_G10_LANE

// 0x08f4	AUTOSPEED261		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G10_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G10_LANE             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G10_LANE_7_0               : 8;	/*[23:16]     r/w 8'h42*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G10_LANE            : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED261_t;
__xdata __at( 0x68f4 ) volatile AUTOSPEED261_t AUTOSPEED261;
#define reg_RXCLK_25M_CTRL_G10_LANE_1_0  AUTOSPEED261.BF.RXCLK_25M_CTRL_G10_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G10_LANE  AUTOSPEED261.BF.RXCLK_25M_DIV1P5_EN_G10_LANE
#define reg_RXCLK_25M_DIV_G10_LANE_7_0  AUTOSPEED261.BF.RXCLK_25M_DIV_G10_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G10_LANE  AUTOSPEED261.BF.RXCLK_25M_FIX_DIV_EN_G10_LANE

// 0x08f8	AUTOSPEED262		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G10_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G10_LANE                 : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G10_LANE                 : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G10_LANE_3_0           : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED262_t;
__xdata __at( 0x68f8 ) volatile AUTOSPEED262_t AUTOSPEED262;
#define reg_CTLE_LOW_SPEED_SEL_G10_LANE_1_0  AUTOSPEED262.BF.CTLE_LOW_SPEED_SEL_G10_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G10_LANE  AUTOSPEED262.BF.CTLE_BYPASS1_EN_G10_LANE
#define reg_CTLE_BYPASS2_EN_G10_LANE  AUTOSPEED262.BF.CTLE_BYPASS2_EN_G10_LANE
#define reg_CTLE_CURRENT1_SEL_G10_LANE_3_0  AUTOSPEED262.BF.CTLE_CURRENT1_SEL_G10_LANE_3_0

// 0x08fc	AUTOSPEED263		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G10_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G10_LANE_3_0                : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G10_LANE_3_0            : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G10_LANE_3_0       : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED263_t;
__xdata __at( 0x68fc ) volatile AUTOSPEED263_t AUTOSPEED263;
#define reg_CTLE_RL1_SEL_G10_LANE_3_0  AUTOSPEED263.BF.CTLE_RL1_SEL_G10_LANE_3_0
#define reg_CTLE_RF_CTRL_G10_LANE_3_0  AUTOSPEED263.BF.CTLE_RF_CTRL_G10_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G10_LANE_3_0  AUTOSPEED263.BF.CTLE_RL1_TIA_SEL_G10_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G10_LANE_3_0  AUTOSPEED263.BF.CTLE_CURRENT1_TIA_SEL_G10_LANE_3_0

// 0x0900	AUTOSPEED264		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G10_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G10_LANE_3_0      : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G10_LANE_3_0           : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G10_LANE_3_0      : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED264_t;
__xdata __at( 0x6900 ) volatile AUTOSPEED264_t AUTOSPEED264;
#define reg_CTLE_RL2_SEL_G_P2_G10_LANE_3_0  AUTOSPEED264.BF.CTLE_RL2_SEL_G_P2_G10_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G10_LANE_3_0  AUTOSPEED264.BF.CTLE_CURRENT2_SEL_G_P2_G10_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G10_LANE_3_0  AUTOSPEED264.BF.CTLE_RL2_SEL_G_P4_G10_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G10_LANE_3_0  AUTOSPEED264.BF.CTLE_CURRENT2_SEL_G_P4_G10_LANE_3_0

// 0x0904	AUTOSPEED265		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G10_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G10_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G10_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G10_LANE_1_0    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED265_t;
__xdata __at( 0x6904 ) volatile AUTOSPEED265_t AUTOSPEED265;
#define reg_DFE_CUR_SEL_G_G10_LANE_3_0  AUTOSPEED265.BF.DFE_CUR_SEL_G_G10_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G10_LANE_1_0  AUTOSPEED265.BF.REG_DFE_RATE_MODE_G10_LANE_1_0
#define reg_REG_DFE_DIS_G10_LANE  AUTOSPEED265.BF.REG_DFE_DIS_G10_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G10_LANE_1_0  AUTOSPEED265.BF.REG_DFE_TAP_SETTLE_SCALE_G10_LANE_1_0

// 0x0908	AUTOSPEED266		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G10_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G10_LANE_7_0                : 8;	/* [15:8]     r/w 8'h9d*/
		uint8_t DFE_PAM2_MODE_G10_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G10_LANE                      : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED266_t;
__xdata __at( 0x6908 ) volatile AUTOSPEED266_t AUTOSPEED266;
#define reg_RXDLL_TEMP_A_G10_LANE_7_0  AUTOSPEED266.BF.RXDLL_TEMP_A_G10_LANE_7_0
#define reg_RXDLL_TEMP_B_G10_LANE_7_0  AUTOSPEED266.BF.RXDLL_TEMP_B_G10_LANE_7_0
#define reg_DFE_PAM2_MODE_G10_LANE  AUTOSPEED266.BF.DFE_PAM2_MODE_G10_LANE
#define reg_RX_PAM2_EN_G10_LANE  AUTOSPEED266.BF.RX_PAM2_EN_G10_LANE

// 0x090c	AUTOSPEED267		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G10_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED267_t;
__xdata __at( 0x690c ) volatile AUTOSPEED267_t AUTOSPEED267;
#define reg_RX_HALFRATE_EN_G10_LANE  AUTOSPEED267.BF.RX_HALFRATE_EN_G10_LANE

// 0x0910	AUTOSPEED268		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G11_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G11_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G11_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G11_LANE_2_0          : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED268_t;
__xdata __at( 0x6910 ) volatile AUTOSPEED268_t AUTOSPEED268;
#define reg_PLL_RATE_SEL_TX_G11_LANE_3_0  AUTOSPEED268.BF.PLL_RATE_SEL_TX_G11_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G11_LANE  AUTOSPEED268.BF.TX_VDDCAL_RATE_EN_G11_LANE
#define reg_TX_SPEEDDIV_G11_LANE_2_0  AUTOSPEED268.BF.TX_SPEEDDIV_G11_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G11_LANE_2_0  AUTOSPEED268.BF.TXREG_SPEEDTRK_CLK_G11_LANE_2_0

// 0x0914	AUTOSPEED269		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G11_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G11_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G11_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G11_LANE_1_0            : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED269_t;
__xdata __at( 0x6914 ) volatile AUTOSPEED269_t AUTOSPEED269;
#define reg_TXREG_SPEEDTRK_DATA_G11_LANE_2_0  AUTOSPEED269.BF.TXREG_SPEEDTRK_DATA_G11_LANE_2_0
#define reg_TX_PAM2_EN_G11_LANE  AUTOSPEED269.BF.TX_PAM2_EN_G11_LANE
#define reg_TX_HALFRATE_EN_G11_LANE  AUTOSPEED269.BF.TX_HALFRATE_EN_G11_LANE
#define reg_TX_TRAIN_PAT_SEL_G11_LANE_1_0  AUTOSPEED269.BF.TX_TRAIN_PAT_SEL_G11_LANE_1_0

// 0x0918	AUTOSPEED270		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G11_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G11_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G11_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G11_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED270_t;
__xdata __at( 0x6918 ) volatile AUTOSPEED270_t AUTOSPEED270;
#define reg_PLL_RATE_SEL_RX_G11_LANE_3_0  AUTOSPEED270.BF.PLL_RATE_SEL_RX_G11_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G11_LANE  AUTOSPEED270.BF.RX_VDDCAL_RATE_EN_G11_LANE
#define reg_RX_SPEED_DIV_G11_LANE_2_0  AUTOSPEED270.BF.RX_SPEED_DIV_G11_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G11_LANE_2_0  AUTOSPEED270.BF.DTL_CLK_SPEEDUP_G11_LANE_2_0

// 0x091c	AUTOSPEED271		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G11_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G11_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G11_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G11_LANE_2_0            : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED271_t;
__xdata __at( 0x691c ) volatile AUTOSPEED271_t AUTOSPEED271;
#define reg_RXINTPI_G11_LANE_3_0  AUTOSPEED271.BF.RXINTPI_G11_LANE_3_0
#define reg_INTPR_G11_LANE_1_0  AUTOSPEED271.BF.INTPR_G11_LANE_1_0
#define reg_DLL_FREQ_SEL_G11_LANE_2_0  AUTOSPEED271.BF.DLL_FREQ_SEL_G11_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G11_LANE_2_0  AUTOSPEED271.BF.EOM_DLL_FREQ_SEL_G11_LANE_2_0

// 0x0920	AUTOSPEED272		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G11_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G11_LANE_2_0          : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G11_LANE         : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G11_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED272_t;
__xdata __at( 0x6920 ) volatile AUTOSPEED272_t AUTOSPEED272;
#define reg_RXREG_SPEEDTRK_DATA_G11_LANE_2_0  AUTOSPEED272.BF.RXREG_SPEEDTRK_DATA_G11_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G11_LANE_2_0  AUTOSPEED272.BF.RXREG_SPEEDTRK_CLK_G11_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G11_LANE  AUTOSPEED272.BF.RXREG_SPEEDTRK_CLK_HALF_G11_LANE
#define reg_SELMUFI_G11_LANE_2_0  AUTOSPEED272.BF.SELMUFI_G11_LANE_2_0

// 0x0924	AUTOSPEED273		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G11_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G11_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G11_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G11_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED273_t;
__xdata __at( 0x6924 ) volatile AUTOSPEED273_t AUTOSPEED273;
#define reg_SELMUFF_G11_LANE_2_0  AUTOSPEED273.BF.SELMUFF_G11_LANE_2_0
#define reg_SELMUPI_G11_LANE_3_0  AUTOSPEED273.BF.SELMUPI_G11_LANE_3_0
#define reg_SELMUPF_G11_LANE_3_0  AUTOSPEED273.BF.SELMUPF_G11_LANE_3_0
#define reg_DTL_CLK_MODE_G11_LANE_1_0  AUTOSPEED273.BF.DTL_CLK_MODE_G11_LANE_1_0

// 0x0928	AUTOSPEED274		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G11_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h76*/
		uint8_t RX_FOFFSET_EXTRA_M_G11_LANE_13_8         : 6;	/* [13:8]     r/w 6'h1d*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G11_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G11_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED274_t;
__xdata __at( 0x6928 ) volatile AUTOSPEED274_t AUTOSPEED274;
#define reg_RX_FOFFSET_EXTRA_M_G11_LANE_7_0  AUTOSPEED274.BF.RX_FOFFSET_EXTRA_M_G11_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G11_LANE_13_8  AUTOSPEED274.BF.RX_FOFFSET_EXTRA_M_G11_LANE_13_8
#define reg_INIT_RXFOFFS_G11_LANE_7_0  AUTOSPEED274.BF.INIT_RXFOFFS_G11_LANE_7_0
#define reg_INIT_RXFOFFS_G11_LANE_12_8  AUTOSPEED274.BF.INIT_RXFOFFS_G11_LANE_12_8

// 0x092c	AUTOSPEED275		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G11_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G11_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G11_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G11_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED275_t;
__xdata __at( 0x692c ) volatile AUTOSPEED275_t AUTOSPEED275;
#define reg_PU_SMPLR_D_P2_G11_LANE_2_0  AUTOSPEED275.BF.PU_SMPLR_D_P2_G11_LANE_2_0
#define reg_PU_SMPLR_S_P2_G11_LANE_2_0  AUTOSPEED275.BF.PU_SMPLR_S_P2_G11_LANE_2_0
#define reg_PU_SMPLR_D_P4_G11_LANE_2_0  AUTOSPEED275.BF.PU_SMPLR_D_P4_G11_LANE_2_0
#define reg_PU_SMPLR_S_P4_G11_LANE_2_0  AUTOSPEED275.BF.PU_SMPLR_S_P4_G11_LANE_2_0

// 0x0930	AUTOSPEED276		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G11_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G11_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G11_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G11_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED276_t;
__xdata __at( 0x6930 ) volatile AUTOSPEED276_t AUTOSPEED276;
#define reg_PATH_DISABLE_EDGE_P2P4_G11_LANE  AUTOSPEED276.BF.PATH_DISABLE_EDGE_P2P4_G11_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G11_LANE  AUTOSPEED276.BF.PATH_DISABLE_EDGE_P1P3_G11_LANE
#define reg_PU_SMPLR_D_P1_G11_LANE_2_0  AUTOSPEED276.BF.PU_SMPLR_D_P1_G11_LANE_2_0
#define reg_PU_SMPLR_S_P1_G11_LANE_2_0  AUTOSPEED276.BF.PU_SMPLR_S_P1_G11_LANE_2_0

// 0x0934	AUTOSPEED277		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G11_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G11_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G11_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G11_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED277_t;
__xdata __at( 0x6934 ) volatile AUTOSPEED277_t AUTOSPEED277;
#define reg_PU_SMPLR_D_P3_G11_LANE_2_0  AUTOSPEED277.BF.PU_SMPLR_D_P3_G11_LANE_2_0
#define reg_PU_SMPLR_S_P3_G11_LANE_2_0  AUTOSPEED277.BF.PU_SMPLR_S_P3_G11_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G11_LANE  AUTOSPEED277.BF.PATH_DISABLE_D_P1P3_G11_LANE
#define reg_PATH_DISABLE_S_P1P3_G11_LANE  AUTOSPEED277.BF.PATH_DISABLE_S_P1P3_G11_LANE

// 0x0938	AUTOSPEED278		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G11_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G11_LANE             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G11_LANE_7_0               : 8;	/*[23:16]     r/w 8'h46*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G11_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED278_t;
__xdata __at( 0x6938 ) volatile AUTOSPEED278_t AUTOSPEED278;
#define reg_RXCLK_25M_CTRL_G11_LANE_1_0  AUTOSPEED278.BF.RXCLK_25M_CTRL_G11_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G11_LANE  AUTOSPEED278.BF.RXCLK_25M_DIV1P5_EN_G11_LANE
#define reg_RXCLK_25M_DIV_G11_LANE_7_0  AUTOSPEED278.BF.RXCLK_25M_DIV_G11_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G11_LANE  AUTOSPEED278.BF.RXCLK_25M_FIX_DIV_EN_G11_LANE

// 0x093c	AUTOSPEED279		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G11_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G11_LANE                 : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G11_LANE                 : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G11_LANE_3_0           : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED279_t;
__xdata __at( 0x693c ) volatile AUTOSPEED279_t AUTOSPEED279;
#define reg_CTLE_LOW_SPEED_SEL_G11_LANE_1_0  AUTOSPEED279.BF.CTLE_LOW_SPEED_SEL_G11_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G11_LANE  AUTOSPEED279.BF.CTLE_BYPASS1_EN_G11_LANE
#define reg_CTLE_BYPASS2_EN_G11_LANE  AUTOSPEED279.BF.CTLE_BYPASS2_EN_G11_LANE
#define reg_CTLE_CURRENT1_SEL_G11_LANE_3_0  AUTOSPEED279.BF.CTLE_CURRENT1_SEL_G11_LANE_3_0

// 0x0940	AUTOSPEED280		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G11_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G11_LANE_3_0                : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G11_LANE_3_0            : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G11_LANE_3_0       : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED280_t;
__xdata __at( 0x6940 ) volatile AUTOSPEED280_t AUTOSPEED280;
#define reg_CTLE_RL1_SEL_G11_LANE_3_0  AUTOSPEED280.BF.CTLE_RL1_SEL_G11_LANE_3_0
#define reg_CTLE_RF_CTRL_G11_LANE_3_0  AUTOSPEED280.BF.CTLE_RF_CTRL_G11_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G11_LANE_3_0  AUTOSPEED280.BF.CTLE_RL1_TIA_SEL_G11_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G11_LANE_3_0  AUTOSPEED280.BF.CTLE_CURRENT1_TIA_SEL_G11_LANE_3_0

// 0x0944	AUTOSPEED281		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G11_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G11_LANE_3_0      : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G11_LANE_3_0           : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G11_LANE_3_0      : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED281_t;
__xdata __at( 0x6944 ) volatile AUTOSPEED281_t AUTOSPEED281;
#define reg_CTLE_RL2_SEL_G_P2_G11_LANE_3_0  AUTOSPEED281.BF.CTLE_RL2_SEL_G_P2_G11_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G11_LANE_3_0  AUTOSPEED281.BF.CTLE_CURRENT2_SEL_G_P2_G11_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G11_LANE_3_0  AUTOSPEED281.BF.CTLE_RL2_SEL_G_P4_G11_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G11_LANE_3_0  AUTOSPEED281.BF.CTLE_CURRENT2_SEL_G_P4_G11_LANE_3_0

// 0x0948	AUTOSPEED282		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G11_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G11_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G11_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G11_LANE_1_0    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED282_t;
__xdata __at( 0x6948 ) volatile AUTOSPEED282_t AUTOSPEED282;
#define reg_DFE_CUR_SEL_G_G11_LANE_3_0  AUTOSPEED282.BF.DFE_CUR_SEL_G_G11_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G11_LANE_1_0  AUTOSPEED282.BF.REG_DFE_RATE_MODE_G11_LANE_1_0
#define reg_REG_DFE_DIS_G11_LANE  AUTOSPEED282.BF.REG_DFE_DIS_G11_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G11_LANE_1_0  AUTOSPEED282.BF.REG_DFE_TAP_SETTLE_SCALE_G11_LANE_1_0

// 0x094c	AUTOSPEED283		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G11_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G11_LANE_7_0                : 8;	/* [15:8]     r/w 8'h9d*/
		uint8_t DFE_PAM2_MODE_G11_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G11_LANE                      : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED283_t;
__xdata __at( 0x694c ) volatile AUTOSPEED283_t AUTOSPEED283;
#define reg_RXDLL_TEMP_A_G11_LANE_7_0  AUTOSPEED283.BF.RXDLL_TEMP_A_G11_LANE_7_0
#define reg_RXDLL_TEMP_B_G11_LANE_7_0  AUTOSPEED283.BF.RXDLL_TEMP_B_G11_LANE_7_0
#define reg_DFE_PAM2_MODE_G11_LANE  AUTOSPEED283.BF.DFE_PAM2_MODE_G11_LANE
#define reg_RX_PAM2_EN_G11_LANE  AUTOSPEED283.BF.RX_PAM2_EN_G11_LANE

// 0x0950	AUTOSPEED284		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G11_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED284_t;
__xdata __at( 0x6950 ) volatile AUTOSPEED284_t AUTOSPEED284;
#define reg_RX_HALFRATE_EN_G11_LANE  AUTOSPEED284.BF.RX_HALFRATE_EN_G11_LANE

// 0x0954	AUTOSPEED285		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G12_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G12_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G12_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h3*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G12_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED285_t;
__xdata __at( 0x6954 ) volatile AUTOSPEED285_t AUTOSPEED285;
#define reg_PLL_RATE_SEL_TX_G12_LANE_3_0  AUTOSPEED285.BF.PLL_RATE_SEL_TX_G12_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G12_LANE  AUTOSPEED285.BF.TX_VDDCAL_RATE_EN_G12_LANE
#define reg_TX_SPEEDDIV_G12_LANE_2_0  AUTOSPEED285.BF.TX_SPEEDDIV_G12_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G12_LANE_2_0  AUTOSPEED285.BF.TXREG_SPEEDTRK_CLK_G12_LANE_2_0

// 0x0958	AUTOSPEED286		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G12_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G12_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G12_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G12_LANE_1_0            : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED286_t;
__xdata __at( 0x6958 ) volatile AUTOSPEED286_t AUTOSPEED286;
#define reg_TXREG_SPEEDTRK_DATA_G12_LANE_2_0  AUTOSPEED286.BF.TXREG_SPEEDTRK_DATA_G12_LANE_2_0
#define reg_TX_PAM2_EN_G12_LANE  AUTOSPEED286.BF.TX_PAM2_EN_G12_LANE
#define reg_TX_HALFRATE_EN_G12_LANE  AUTOSPEED286.BF.TX_HALFRATE_EN_G12_LANE
#define reg_TX_TRAIN_PAT_SEL_G12_LANE_1_0  AUTOSPEED286.BF.TX_TRAIN_PAT_SEL_G12_LANE_1_0

// 0x095c	AUTOSPEED287		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G12_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G12_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G12_LANE_2_0                : 3;	/*[18:16]     r/w 3'h6*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G12_LANE_2_0             : 3;	/*[26:24]     r/w 3'h2*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED287_t;
__xdata __at( 0x695c ) volatile AUTOSPEED287_t AUTOSPEED287;
#define reg_PLL_RATE_SEL_RX_G12_LANE_3_0  AUTOSPEED287.BF.PLL_RATE_SEL_RX_G12_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G12_LANE  AUTOSPEED287.BF.RX_VDDCAL_RATE_EN_G12_LANE
#define reg_RX_SPEED_DIV_G12_LANE_2_0  AUTOSPEED287.BF.RX_SPEED_DIV_G12_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G12_LANE_2_0  AUTOSPEED287.BF.DTL_CLK_SPEEDUP_G12_LANE_2_0

// 0x0960	AUTOSPEED288		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G12_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G12_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G12_LANE_2_0                : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G12_LANE_2_0            : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED288_t;
__xdata __at( 0x6960 ) volatile AUTOSPEED288_t AUTOSPEED288;
#define reg_RXINTPI_G12_LANE_3_0  AUTOSPEED288.BF.RXINTPI_G12_LANE_3_0
#define reg_INTPR_G12_LANE_1_0  AUTOSPEED288.BF.INTPR_G12_LANE_1_0
#define reg_DLL_FREQ_SEL_G12_LANE_2_0  AUTOSPEED288.BF.DLL_FREQ_SEL_G12_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G12_LANE_2_0  AUTOSPEED288.BF.EOM_DLL_FREQ_SEL_G12_LANE_2_0

// 0x0964	AUTOSPEED289		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G12_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G12_LANE_2_0          : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G12_LANE         : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G12_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED289_t;
__xdata __at( 0x6964 ) volatile AUTOSPEED289_t AUTOSPEED289;
#define reg_RXREG_SPEEDTRK_DATA_G12_LANE_2_0  AUTOSPEED289.BF.RXREG_SPEEDTRK_DATA_G12_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G12_LANE_2_0  AUTOSPEED289.BF.RXREG_SPEEDTRK_CLK_G12_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G12_LANE  AUTOSPEED289.BF.RXREG_SPEEDTRK_CLK_HALF_G12_LANE
#define reg_SELMUFI_G12_LANE_2_0  AUTOSPEED289.BF.SELMUFI_G12_LANE_2_0

// 0x0968	AUTOSPEED290		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G12_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G12_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G12_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G12_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED290_t;
__xdata __at( 0x6968 ) volatile AUTOSPEED290_t AUTOSPEED290;
#define reg_SELMUFF_G12_LANE_2_0  AUTOSPEED290.BF.SELMUFF_G12_LANE_2_0
#define reg_SELMUPI_G12_LANE_3_0  AUTOSPEED290.BF.SELMUPI_G12_LANE_3_0
#define reg_SELMUPF_G12_LANE_3_0  AUTOSPEED290.BF.SELMUPF_G12_LANE_3_0
#define reg_DTL_CLK_MODE_G12_LANE_1_0  AUTOSPEED290.BF.DTL_CLK_MODE_G12_LANE_1_0

// 0x096c	AUTOSPEED291		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G12_LANE_7_0          : 8;	/*  [7:0]     r/w 8'ha*/
		uint8_t RX_FOFFSET_EXTRA_M_G12_LANE_13_8         : 6;	/* [13:8]     r/w 6'h15*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G12_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G12_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED291_t;
__xdata __at( 0x696c ) volatile AUTOSPEED291_t AUTOSPEED291;
#define reg_RX_FOFFSET_EXTRA_M_G12_LANE_7_0  AUTOSPEED291.BF.RX_FOFFSET_EXTRA_M_G12_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G12_LANE_13_8  AUTOSPEED291.BF.RX_FOFFSET_EXTRA_M_G12_LANE_13_8
#define reg_INIT_RXFOFFS_G12_LANE_7_0  AUTOSPEED291.BF.INIT_RXFOFFS_G12_LANE_7_0
#define reg_INIT_RXFOFFS_G12_LANE_12_8  AUTOSPEED291.BF.INIT_RXFOFFS_G12_LANE_12_8

// 0x0970	AUTOSPEED292		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G12_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G12_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G12_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G12_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED292_t;
__xdata __at( 0x6970 ) volatile AUTOSPEED292_t AUTOSPEED292;
#define reg_PU_SMPLR_D_P2_G12_LANE_2_0  AUTOSPEED292.BF.PU_SMPLR_D_P2_G12_LANE_2_0
#define reg_PU_SMPLR_S_P2_G12_LANE_2_0  AUTOSPEED292.BF.PU_SMPLR_S_P2_G12_LANE_2_0
#define reg_PU_SMPLR_D_P4_G12_LANE_2_0  AUTOSPEED292.BF.PU_SMPLR_D_P4_G12_LANE_2_0
#define reg_PU_SMPLR_S_P4_G12_LANE_2_0  AUTOSPEED292.BF.PU_SMPLR_S_P4_G12_LANE_2_0

// 0x0974	AUTOSPEED293		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G12_LANE          : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G12_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G12_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G12_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED293_t;
__xdata __at( 0x6974 ) volatile AUTOSPEED293_t AUTOSPEED293;
#define reg_PATH_DISABLE_EDGE_P2P4_G12_LANE  AUTOSPEED293.BF.PATH_DISABLE_EDGE_P2P4_G12_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G12_LANE  AUTOSPEED293.BF.PATH_DISABLE_EDGE_P1P3_G12_LANE
#define reg_PU_SMPLR_D_P1_G12_LANE_2_0  AUTOSPEED293.BF.PU_SMPLR_D_P1_G12_LANE_2_0
#define reg_PU_SMPLR_S_P1_G12_LANE_2_0  AUTOSPEED293.BF.PU_SMPLR_S_P1_G12_LANE_2_0

// 0x0978	AUTOSPEED294		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G12_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G12_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G12_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G12_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED294_t;
__xdata __at( 0x6978 ) volatile AUTOSPEED294_t AUTOSPEED294;
#define reg_PU_SMPLR_D_P3_G12_LANE_2_0  AUTOSPEED294.BF.PU_SMPLR_D_P3_G12_LANE_2_0
#define reg_PU_SMPLR_S_P3_G12_LANE_2_0  AUTOSPEED294.BF.PU_SMPLR_S_P3_G12_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G12_LANE  AUTOSPEED294.BF.PATH_DISABLE_D_P1P3_G12_LANE
#define reg_PATH_DISABLE_S_P1P3_G12_LANE  AUTOSPEED294.BF.PATH_DISABLE_S_P1P3_G12_LANE

// 0x097c	AUTOSPEED295		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G12_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G12_LANE             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G12_LANE_7_0               : 8;	/*[23:16]     r/w 8'h64*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G12_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED295_t;
__xdata __at( 0x697c ) volatile AUTOSPEED295_t AUTOSPEED295;
#define reg_RXCLK_25M_CTRL_G12_LANE_1_0  AUTOSPEED295.BF.RXCLK_25M_CTRL_G12_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G12_LANE  AUTOSPEED295.BF.RXCLK_25M_DIV1P5_EN_G12_LANE
#define reg_RXCLK_25M_DIV_G12_LANE_7_0  AUTOSPEED295.BF.RXCLK_25M_DIV_G12_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G12_LANE  AUTOSPEED295.BF.RXCLK_25M_FIX_DIV_EN_G12_LANE

// 0x0980	AUTOSPEED296		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G12_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G12_LANE                 : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G12_LANE                 : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G12_LANE_3_0           : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED296_t;
__xdata __at( 0x6980 ) volatile AUTOSPEED296_t AUTOSPEED296;
#define reg_CTLE_LOW_SPEED_SEL_G12_LANE_1_0  AUTOSPEED296.BF.CTLE_LOW_SPEED_SEL_G12_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G12_LANE  AUTOSPEED296.BF.CTLE_BYPASS1_EN_G12_LANE
#define reg_CTLE_BYPASS2_EN_G12_LANE  AUTOSPEED296.BF.CTLE_BYPASS2_EN_G12_LANE
#define reg_CTLE_CURRENT1_SEL_G12_LANE_3_0  AUTOSPEED296.BF.CTLE_CURRENT1_SEL_G12_LANE_3_0

// 0x0984	AUTOSPEED297		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G12_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G12_LANE_3_0                : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G12_LANE_3_0            : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G12_LANE_3_0       : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED297_t;
__xdata __at( 0x6984 ) volatile AUTOSPEED297_t AUTOSPEED297;
#define reg_CTLE_RL1_SEL_G12_LANE_3_0  AUTOSPEED297.BF.CTLE_RL1_SEL_G12_LANE_3_0
#define reg_CTLE_RF_CTRL_G12_LANE_3_0  AUTOSPEED297.BF.CTLE_RF_CTRL_G12_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G12_LANE_3_0  AUTOSPEED297.BF.CTLE_RL1_TIA_SEL_G12_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G12_LANE_3_0  AUTOSPEED297.BF.CTLE_CURRENT1_TIA_SEL_G12_LANE_3_0

// 0x0988	AUTOSPEED298		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G12_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G12_LANE_3_0      : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G12_LANE_3_0           : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G12_LANE_3_0      : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED298_t;
__xdata __at( 0x6988 ) volatile AUTOSPEED298_t AUTOSPEED298;
#define reg_CTLE_RL2_SEL_G_P2_G12_LANE_3_0  AUTOSPEED298.BF.CTLE_RL2_SEL_G_P2_G12_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G12_LANE_3_0  AUTOSPEED298.BF.CTLE_CURRENT2_SEL_G_P2_G12_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G12_LANE_3_0  AUTOSPEED298.BF.CTLE_RL2_SEL_G_P4_G12_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G12_LANE_3_0  AUTOSPEED298.BF.CTLE_CURRENT2_SEL_G_P4_G12_LANE_3_0

// 0x098c	AUTOSPEED299		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G12_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G12_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G12_LANE                     : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G12_LANE_1_0    : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED299_t;
__xdata __at( 0x698c ) volatile AUTOSPEED299_t AUTOSPEED299;
#define reg_DFE_CUR_SEL_G_G12_LANE_3_0  AUTOSPEED299.BF.DFE_CUR_SEL_G_G12_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G12_LANE_1_0  AUTOSPEED299.BF.REG_DFE_RATE_MODE_G12_LANE_1_0
#define reg_REG_DFE_DIS_G12_LANE  AUTOSPEED299.BF.REG_DFE_DIS_G12_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G12_LANE_1_0  AUTOSPEED299.BF.REG_DFE_TAP_SETTLE_SCALE_G12_LANE_1_0

// 0x0990	AUTOSPEED300		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G12_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G12_LANE_7_0                : 8;	/* [15:8]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G12_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G12_LANE                      : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED300_t;
__xdata __at( 0x6990 ) volatile AUTOSPEED300_t AUTOSPEED300;
#define reg_RXDLL_TEMP_A_G12_LANE_7_0  AUTOSPEED300.BF.RXDLL_TEMP_A_G12_LANE_7_0
#define reg_RXDLL_TEMP_B_G12_LANE_7_0  AUTOSPEED300.BF.RXDLL_TEMP_B_G12_LANE_7_0
#define reg_DFE_PAM2_MODE_G12_LANE  AUTOSPEED300.BF.DFE_PAM2_MODE_G12_LANE
#define reg_RX_PAM2_EN_G12_LANE  AUTOSPEED300.BF.RX_PAM2_EN_G12_LANE

// 0x0994	AUTOSPEED301		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G12_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED301_t;
__xdata __at( 0x6994 ) volatile AUTOSPEED301_t AUTOSPEED301;
#define reg_RX_HALFRATE_EN_G12_LANE  AUTOSPEED301.BF.RX_HALFRATE_EN_G12_LANE

// 0x0998	AUTOSPEED302		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G13_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G13_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G13_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G13_LANE_2_0          : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED302_t;
__xdata __at( 0x6998 ) volatile AUTOSPEED302_t AUTOSPEED302;
#define reg_PLL_RATE_SEL_TX_G13_LANE_3_0  AUTOSPEED302.BF.PLL_RATE_SEL_TX_G13_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G13_LANE  AUTOSPEED302.BF.TX_VDDCAL_RATE_EN_G13_LANE
#define reg_TX_SPEEDDIV_G13_LANE_2_0  AUTOSPEED302.BF.TX_SPEEDDIV_G13_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G13_LANE_2_0  AUTOSPEED302.BF.TXREG_SPEEDTRK_CLK_G13_LANE_2_0

// 0x099c	AUTOSPEED303		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G13_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G13_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G13_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G13_LANE_1_0            : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED303_t;
__xdata __at( 0x699c ) volatile AUTOSPEED303_t AUTOSPEED303;
#define reg_TXREG_SPEEDTRK_DATA_G13_LANE_2_0  AUTOSPEED303.BF.TXREG_SPEEDTRK_DATA_G13_LANE_2_0
#define reg_TX_PAM2_EN_G13_LANE  AUTOSPEED303.BF.TX_PAM2_EN_G13_LANE
#define reg_TX_HALFRATE_EN_G13_LANE  AUTOSPEED303.BF.TX_HALFRATE_EN_G13_LANE
#define reg_TX_TRAIN_PAT_SEL_G13_LANE_1_0  AUTOSPEED303.BF.TX_TRAIN_PAT_SEL_G13_LANE_1_0

// 0x09a0	AUTOSPEED304		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G13_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G13_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G13_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G13_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED304_t;
__xdata __at( 0x69a0 ) volatile AUTOSPEED304_t AUTOSPEED304;
#define reg_PLL_RATE_SEL_RX_G13_LANE_3_0  AUTOSPEED304.BF.PLL_RATE_SEL_RX_G13_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G13_LANE  AUTOSPEED304.BF.RX_VDDCAL_RATE_EN_G13_LANE
#define reg_RX_SPEED_DIV_G13_LANE_2_0  AUTOSPEED304.BF.RX_SPEED_DIV_G13_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G13_LANE_2_0  AUTOSPEED304.BF.DTL_CLK_SPEEDUP_G13_LANE_2_0

// 0x09a4	AUTOSPEED305		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G13_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G13_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G13_LANE_2_0                : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G13_LANE_2_0            : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED305_t;
__xdata __at( 0x69a4 ) volatile AUTOSPEED305_t AUTOSPEED305;
#define reg_RXINTPI_G13_LANE_3_0  AUTOSPEED305.BF.RXINTPI_G13_LANE_3_0
#define reg_INTPR_G13_LANE_1_0  AUTOSPEED305.BF.INTPR_G13_LANE_1_0
#define reg_DLL_FREQ_SEL_G13_LANE_2_0  AUTOSPEED305.BF.DLL_FREQ_SEL_G13_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G13_LANE_2_0  AUTOSPEED305.BF.EOM_DLL_FREQ_SEL_G13_LANE_2_0

// 0x09a8	AUTOSPEED306		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G13_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G13_LANE_2_0          : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G13_LANE         : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G13_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED306_t;
__xdata __at( 0x69a8 ) volatile AUTOSPEED306_t AUTOSPEED306;
#define reg_RXREG_SPEEDTRK_DATA_G13_LANE_2_0  AUTOSPEED306.BF.RXREG_SPEEDTRK_DATA_G13_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G13_LANE_2_0  AUTOSPEED306.BF.RXREG_SPEEDTRK_CLK_G13_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G13_LANE  AUTOSPEED306.BF.RXREG_SPEEDTRK_CLK_HALF_G13_LANE
#define reg_SELMUFI_G13_LANE_2_0  AUTOSPEED306.BF.SELMUFI_G13_LANE_2_0

// 0x09ac	AUTOSPEED307		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G13_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G13_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G13_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G13_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED307_t;
__xdata __at( 0x69ac ) volatile AUTOSPEED307_t AUTOSPEED307;
#define reg_SELMUFF_G13_LANE_2_0  AUTOSPEED307.BF.SELMUFF_G13_LANE_2_0
#define reg_SELMUPI_G13_LANE_3_0  AUTOSPEED307.BF.SELMUPI_G13_LANE_3_0
#define reg_SELMUPF_G13_LANE_3_0  AUTOSPEED307.BF.SELMUPF_G13_LANE_3_0
#define reg_DTL_CLK_MODE_G13_LANE_1_0  AUTOSPEED307.BF.DTL_CLK_MODE_G13_LANE_1_0

// 0x09b0	AUTOSPEED308		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G13_LANE_7_0          : 8;	/*  [7:0]     r/w 8'hb3*/
		uint8_t RX_FOFFSET_EXTRA_M_G13_LANE_13_8         : 6;	/* [13:8]     r/w 6'h15*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G13_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G13_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED308_t;
__xdata __at( 0x69b0 ) volatile AUTOSPEED308_t AUTOSPEED308;
#define reg_RX_FOFFSET_EXTRA_M_G13_LANE_7_0  AUTOSPEED308.BF.RX_FOFFSET_EXTRA_M_G13_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G13_LANE_13_8  AUTOSPEED308.BF.RX_FOFFSET_EXTRA_M_G13_LANE_13_8
#define reg_INIT_RXFOFFS_G13_LANE_7_0  AUTOSPEED308.BF.INIT_RXFOFFS_G13_LANE_7_0
#define reg_INIT_RXFOFFS_G13_LANE_12_8  AUTOSPEED308.BF.INIT_RXFOFFS_G13_LANE_12_8

// 0x09b4	AUTOSPEED309		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G13_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G13_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G13_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G13_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED309_t;
__xdata __at( 0x69b4 ) volatile AUTOSPEED309_t AUTOSPEED309;
#define reg_PU_SMPLR_D_P2_G13_LANE_2_0  AUTOSPEED309.BF.PU_SMPLR_D_P2_G13_LANE_2_0
#define reg_PU_SMPLR_S_P2_G13_LANE_2_0  AUTOSPEED309.BF.PU_SMPLR_S_P2_G13_LANE_2_0
#define reg_PU_SMPLR_D_P4_G13_LANE_2_0  AUTOSPEED309.BF.PU_SMPLR_D_P4_G13_LANE_2_0
#define reg_PU_SMPLR_S_P4_G13_LANE_2_0  AUTOSPEED309.BF.PU_SMPLR_S_P4_G13_LANE_2_0

// 0x09b8	AUTOSPEED310		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G13_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G13_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G13_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G13_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED310_t;
__xdata __at( 0x69b8 ) volatile AUTOSPEED310_t AUTOSPEED310;
#define reg_PATH_DISABLE_EDGE_P2P4_G13_LANE  AUTOSPEED310.BF.PATH_DISABLE_EDGE_P2P4_G13_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G13_LANE  AUTOSPEED310.BF.PATH_DISABLE_EDGE_P1P3_G13_LANE
#define reg_PU_SMPLR_D_P1_G13_LANE_2_0  AUTOSPEED310.BF.PU_SMPLR_D_P1_G13_LANE_2_0
#define reg_PU_SMPLR_S_P1_G13_LANE_2_0  AUTOSPEED310.BF.PU_SMPLR_S_P1_G13_LANE_2_0

// 0x09bc	AUTOSPEED311		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G13_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G13_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G13_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G13_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED311_t;
__xdata __at( 0x69bc ) volatile AUTOSPEED311_t AUTOSPEED311;
#define reg_PU_SMPLR_D_P3_G13_LANE_2_0  AUTOSPEED311.BF.PU_SMPLR_D_P3_G13_LANE_2_0
#define reg_PU_SMPLR_S_P3_G13_LANE_2_0  AUTOSPEED311.BF.PU_SMPLR_S_P3_G13_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G13_LANE  AUTOSPEED311.BF.PATH_DISABLE_D_P1P3_G13_LANE
#define reg_PATH_DISABLE_S_P1P3_G13_LANE  AUTOSPEED311.BF.PATH_DISABLE_S_P1P3_G13_LANE

// 0x09c0	AUTOSPEED312		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G13_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G13_LANE             : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G13_LANE_7_0               : 8;	/*[23:16]     r/w 8'h89*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G13_LANE            : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED312_t;
__xdata __at( 0x69c0 ) volatile AUTOSPEED312_t AUTOSPEED312;
#define reg_RXCLK_25M_CTRL_G13_LANE_1_0  AUTOSPEED312.BF.RXCLK_25M_CTRL_G13_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G13_LANE  AUTOSPEED312.BF.RXCLK_25M_DIV1P5_EN_G13_LANE
#define reg_RXCLK_25M_DIV_G13_LANE_7_0  AUTOSPEED312.BF.RXCLK_25M_DIV_G13_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G13_LANE  AUTOSPEED312.BF.RXCLK_25M_FIX_DIV_EN_G13_LANE

// 0x09c4	AUTOSPEED313		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G13_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G13_LANE                 : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G13_LANE                 : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G13_LANE_3_0           : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED313_t;
__xdata __at( 0x69c4 ) volatile AUTOSPEED313_t AUTOSPEED313;
#define reg_CTLE_LOW_SPEED_SEL_G13_LANE_1_0  AUTOSPEED313.BF.CTLE_LOW_SPEED_SEL_G13_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G13_LANE  AUTOSPEED313.BF.CTLE_BYPASS1_EN_G13_LANE
#define reg_CTLE_BYPASS2_EN_G13_LANE  AUTOSPEED313.BF.CTLE_BYPASS2_EN_G13_LANE
#define reg_CTLE_CURRENT1_SEL_G13_LANE_3_0  AUTOSPEED313.BF.CTLE_CURRENT1_SEL_G13_LANE_3_0

// 0x09c8	AUTOSPEED314		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G13_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G13_LANE_3_0                : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G13_LANE_3_0            : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G13_LANE_3_0       : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED314_t;
__xdata __at( 0x69c8 ) volatile AUTOSPEED314_t AUTOSPEED314;
#define reg_CTLE_RL1_SEL_G13_LANE_3_0  AUTOSPEED314.BF.CTLE_RL1_SEL_G13_LANE_3_0
#define reg_CTLE_RF_CTRL_G13_LANE_3_0  AUTOSPEED314.BF.CTLE_RF_CTRL_G13_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G13_LANE_3_0  AUTOSPEED314.BF.CTLE_RL1_TIA_SEL_G13_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G13_LANE_3_0  AUTOSPEED314.BF.CTLE_CURRENT1_TIA_SEL_G13_LANE_3_0

// 0x09cc	AUTOSPEED315		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G13_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G13_LANE_3_0      : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G13_LANE_3_0           : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G13_LANE_3_0      : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED315_t;
__xdata __at( 0x69cc ) volatile AUTOSPEED315_t AUTOSPEED315;
#define reg_CTLE_RL2_SEL_G_P2_G13_LANE_3_0  AUTOSPEED315.BF.CTLE_RL2_SEL_G_P2_G13_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G13_LANE_3_0  AUTOSPEED315.BF.CTLE_CURRENT2_SEL_G_P2_G13_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G13_LANE_3_0  AUTOSPEED315.BF.CTLE_RL2_SEL_G_P4_G13_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G13_LANE_3_0  AUTOSPEED315.BF.CTLE_CURRENT2_SEL_G_P4_G13_LANE_3_0

// 0x09d0	AUTOSPEED316		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G13_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G13_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G13_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G13_LANE_1_0    : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED316_t;
__xdata __at( 0x69d0 ) volatile AUTOSPEED316_t AUTOSPEED316;
#define reg_DFE_CUR_SEL_G_G13_LANE_3_0  AUTOSPEED316.BF.DFE_CUR_SEL_G_G13_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G13_LANE_1_0  AUTOSPEED316.BF.REG_DFE_RATE_MODE_G13_LANE_1_0
#define reg_REG_DFE_DIS_G13_LANE  AUTOSPEED316.BF.REG_DFE_DIS_G13_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G13_LANE_1_0  AUTOSPEED316.BF.REG_DFE_TAP_SETTLE_SCALE_G13_LANE_1_0

// 0x09d4	AUTOSPEED317		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G13_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G13_LANE_7_0                : 8;	/* [15:8]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G13_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G13_LANE                      : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED317_t;
__xdata __at( 0x69d4 ) volatile AUTOSPEED317_t AUTOSPEED317;
#define reg_RXDLL_TEMP_A_G13_LANE_7_0  AUTOSPEED317.BF.RXDLL_TEMP_A_G13_LANE_7_0
#define reg_RXDLL_TEMP_B_G13_LANE_7_0  AUTOSPEED317.BF.RXDLL_TEMP_B_G13_LANE_7_0
#define reg_DFE_PAM2_MODE_G13_LANE  AUTOSPEED317.BF.DFE_PAM2_MODE_G13_LANE
#define reg_RX_PAM2_EN_G13_LANE  AUTOSPEED317.BF.RX_PAM2_EN_G13_LANE

// 0x09d8	AUTOSPEED318		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G13_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED318_t;
__xdata __at( 0x69d8 ) volatile AUTOSPEED318_t AUTOSPEED318;
#define reg_RX_HALFRATE_EN_G13_LANE  AUTOSPEED318.BF.RX_HALFRATE_EN_G13_LANE

// 0x09dc	AUTOSPEED319		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G14_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G14_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G14_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G14_LANE_2_0          : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED319_t;
__xdata __at( 0x69dc ) volatile AUTOSPEED319_t AUTOSPEED319;
#define reg_PLL_RATE_SEL_TX_G14_LANE_3_0  AUTOSPEED319.BF.PLL_RATE_SEL_TX_G14_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G14_LANE  AUTOSPEED319.BF.TX_VDDCAL_RATE_EN_G14_LANE
#define reg_TX_SPEEDDIV_G14_LANE_2_0  AUTOSPEED319.BF.TX_SPEEDDIV_G14_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G14_LANE_2_0  AUTOSPEED319.BF.TXREG_SPEEDTRK_CLK_G14_LANE_2_0

// 0x09e0	AUTOSPEED320		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G14_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G14_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G14_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G14_LANE_1_0            : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED320_t;
__xdata __at( 0x69e0 ) volatile AUTOSPEED320_t AUTOSPEED320;
#define reg_TXREG_SPEEDTRK_DATA_G14_LANE_2_0  AUTOSPEED320.BF.TXREG_SPEEDTRK_DATA_G14_LANE_2_0
#define reg_TX_PAM2_EN_G14_LANE  AUTOSPEED320.BF.TX_PAM2_EN_G14_LANE
#define reg_TX_HALFRATE_EN_G14_LANE  AUTOSPEED320.BF.TX_HALFRATE_EN_G14_LANE
#define reg_TX_TRAIN_PAT_SEL_G14_LANE_1_0  AUTOSPEED320.BF.TX_TRAIN_PAT_SEL_G14_LANE_1_0

// 0x09e4	AUTOSPEED321		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G14_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G14_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G14_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G14_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED321_t;
__xdata __at( 0x69e4 ) volatile AUTOSPEED321_t AUTOSPEED321;
#define reg_PLL_RATE_SEL_RX_G14_LANE_3_0  AUTOSPEED321.BF.PLL_RATE_SEL_RX_G14_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G14_LANE  AUTOSPEED321.BF.RX_VDDCAL_RATE_EN_G14_LANE
#define reg_RX_SPEED_DIV_G14_LANE_2_0  AUTOSPEED321.BF.RX_SPEED_DIV_G14_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G14_LANE_2_0  AUTOSPEED321.BF.DTL_CLK_SPEEDUP_G14_LANE_2_0

// 0x09e8	AUTOSPEED322		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G14_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G14_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G14_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G14_LANE_2_0            : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED322_t;
__xdata __at( 0x69e8 ) volatile AUTOSPEED322_t AUTOSPEED322;
#define reg_RXINTPI_G14_LANE_3_0  AUTOSPEED322.BF.RXINTPI_G14_LANE_3_0
#define reg_INTPR_G14_LANE_1_0  AUTOSPEED322.BF.INTPR_G14_LANE_1_0
#define reg_DLL_FREQ_SEL_G14_LANE_2_0  AUTOSPEED322.BF.DLL_FREQ_SEL_G14_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G14_LANE_2_0  AUTOSPEED322.BF.EOM_DLL_FREQ_SEL_G14_LANE_2_0

// 0x09ec	AUTOSPEED323		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G14_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G14_LANE_2_0          : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G14_LANE         : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G14_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED323_t;
__xdata __at( 0x69ec ) volatile AUTOSPEED323_t AUTOSPEED323;
#define reg_RXREG_SPEEDTRK_DATA_G14_LANE_2_0  AUTOSPEED323.BF.RXREG_SPEEDTRK_DATA_G14_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G14_LANE_2_0  AUTOSPEED323.BF.RXREG_SPEEDTRK_CLK_G14_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G14_LANE  AUTOSPEED323.BF.RXREG_SPEEDTRK_CLK_HALF_G14_LANE
#define reg_SELMUFI_G14_LANE_2_0  AUTOSPEED323.BF.SELMUFI_G14_LANE_2_0

// 0x09f0	AUTOSPEED324		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G14_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G14_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G14_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G14_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED324_t;
__xdata __at( 0x69f0 ) volatile AUTOSPEED324_t AUTOSPEED324;
#define reg_SELMUFF_G14_LANE_2_0  AUTOSPEED324.BF.SELMUFF_G14_LANE_2_0
#define reg_SELMUPI_G14_LANE_3_0  AUTOSPEED324.BF.SELMUPI_G14_LANE_3_0
#define reg_SELMUPF_G14_LANE_3_0  AUTOSPEED324.BF.SELMUPF_G14_LANE_3_0
#define reg_DTL_CLK_MODE_G14_LANE_1_0  AUTOSPEED324.BF.DTL_CLK_MODE_G14_LANE_1_0

// 0x09f4	AUTOSPEED325		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G14_LANE_7_0          : 8;	/*  [7:0]     r/w 8'hf2*/
		uint8_t RX_FOFFSET_EXTRA_M_G14_LANE_13_8         : 6;	/* [13:8]     r/w 6'h1b*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G14_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G14_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED325_t;
__xdata __at( 0x69f4 ) volatile AUTOSPEED325_t AUTOSPEED325;
#define reg_RX_FOFFSET_EXTRA_M_G14_LANE_7_0  AUTOSPEED325.BF.RX_FOFFSET_EXTRA_M_G14_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G14_LANE_13_8  AUTOSPEED325.BF.RX_FOFFSET_EXTRA_M_G14_LANE_13_8
#define reg_INIT_RXFOFFS_G14_LANE_7_0  AUTOSPEED325.BF.INIT_RXFOFFS_G14_LANE_7_0
#define reg_INIT_RXFOFFS_G14_LANE_12_8  AUTOSPEED325.BF.INIT_RXFOFFS_G14_LANE_12_8

// 0x09f8	AUTOSPEED326		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G14_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G14_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G14_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G14_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED326_t;
__xdata __at( 0x69f8 ) volatile AUTOSPEED326_t AUTOSPEED326;
#define reg_PU_SMPLR_D_P2_G14_LANE_2_0  AUTOSPEED326.BF.PU_SMPLR_D_P2_G14_LANE_2_0
#define reg_PU_SMPLR_S_P2_G14_LANE_2_0  AUTOSPEED326.BF.PU_SMPLR_S_P2_G14_LANE_2_0
#define reg_PU_SMPLR_D_P4_G14_LANE_2_0  AUTOSPEED326.BF.PU_SMPLR_D_P4_G14_LANE_2_0
#define reg_PU_SMPLR_S_P4_G14_LANE_2_0  AUTOSPEED326.BF.PU_SMPLR_S_P4_G14_LANE_2_0

// 0x09fc	AUTOSPEED327		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G14_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G14_LANE          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G14_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G14_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED327_t;
__xdata __at( 0x69fc ) volatile AUTOSPEED327_t AUTOSPEED327;
#define reg_PATH_DISABLE_EDGE_P2P4_G14_LANE  AUTOSPEED327.BF.PATH_DISABLE_EDGE_P2P4_G14_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G14_LANE  AUTOSPEED327.BF.PATH_DISABLE_EDGE_P1P3_G14_LANE
#define reg_PU_SMPLR_D_P1_G14_LANE_2_0  AUTOSPEED327.BF.PU_SMPLR_D_P1_G14_LANE_2_0
#define reg_PU_SMPLR_S_P1_G14_LANE_2_0  AUTOSPEED327.BF.PU_SMPLR_S_P1_G14_LANE_2_0

// 0x0a00	AUTOSPEED328		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G14_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G14_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G14_LANE             : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G14_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED328_t;
__xdata __at( 0x6a00 ) volatile AUTOSPEED328_t AUTOSPEED328;
#define reg_PU_SMPLR_D_P3_G14_LANE_2_0  AUTOSPEED328.BF.PU_SMPLR_D_P3_G14_LANE_2_0
#define reg_PU_SMPLR_S_P3_G14_LANE_2_0  AUTOSPEED328.BF.PU_SMPLR_S_P3_G14_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G14_LANE  AUTOSPEED328.BF.PATH_DISABLE_D_P1P3_G14_LANE
#define reg_PATH_DISABLE_S_P1P3_G14_LANE  AUTOSPEED328.BF.PATH_DISABLE_S_P1P3_G14_LANE

// 0x0a04	AUTOSPEED329		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G14_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G14_LANE             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G14_LANE_7_0               : 8;	/*[23:16]     r/w 8'h42*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G14_LANE            : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED329_t;
__xdata __at( 0x6a04 ) volatile AUTOSPEED329_t AUTOSPEED329;
#define reg_RXCLK_25M_CTRL_G14_LANE_1_0  AUTOSPEED329.BF.RXCLK_25M_CTRL_G14_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G14_LANE  AUTOSPEED329.BF.RXCLK_25M_DIV1P5_EN_G14_LANE
#define reg_RXCLK_25M_DIV_G14_LANE_7_0  AUTOSPEED329.BF.RXCLK_25M_DIV_G14_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G14_LANE  AUTOSPEED329.BF.RXCLK_25M_FIX_DIV_EN_G14_LANE

// 0x0a08	AUTOSPEED330		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G14_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G14_LANE                 : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G14_LANE                 : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G14_LANE_3_0           : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED330_t;
__xdata __at( 0x6a08 ) volatile AUTOSPEED330_t AUTOSPEED330;
#define reg_CTLE_LOW_SPEED_SEL_G14_LANE_1_0  AUTOSPEED330.BF.CTLE_LOW_SPEED_SEL_G14_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G14_LANE  AUTOSPEED330.BF.CTLE_BYPASS1_EN_G14_LANE
#define reg_CTLE_BYPASS2_EN_G14_LANE  AUTOSPEED330.BF.CTLE_BYPASS2_EN_G14_LANE
#define reg_CTLE_CURRENT1_SEL_G14_LANE_3_0  AUTOSPEED330.BF.CTLE_CURRENT1_SEL_G14_LANE_3_0

// 0x0a0c	AUTOSPEED331		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G14_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G14_LANE_3_0                : 4;	/* [11:8]     r/w 4'hc*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G14_LANE_3_0            : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G14_LANE_3_0       : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED331_t;
__xdata __at( 0x6a0c ) volatile AUTOSPEED331_t AUTOSPEED331;
#define reg_CTLE_RL1_SEL_G14_LANE_3_0  AUTOSPEED331.BF.CTLE_RL1_SEL_G14_LANE_3_0
#define reg_CTLE_RF_CTRL_G14_LANE_3_0  AUTOSPEED331.BF.CTLE_RF_CTRL_G14_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G14_LANE_3_0  AUTOSPEED331.BF.CTLE_RL1_TIA_SEL_G14_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G14_LANE_3_0  AUTOSPEED331.BF.CTLE_CURRENT1_TIA_SEL_G14_LANE_3_0

// 0x0a10	AUTOSPEED332		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G14_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G14_LANE_3_0      : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G14_LANE_3_0           : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G14_LANE_3_0      : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED332_t;
__xdata __at( 0x6a10 ) volatile AUTOSPEED332_t AUTOSPEED332;
#define reg_CTLE_RL2_SEL_G_P2_G14_LANE_3_0  AUTOSPEED332.BF.CTLE_RL2_SEL_G_P2_G14_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G14_LANE_3_0  AUTOSPEED332.BF.CTLE_CURRENT2_SEL_G_P2_G14_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G14_LANE_3_0  AUTOSPEED332.BF.CTLE_RL2_SEL_G_P4_G14_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G14_LANE_3_0  AUTOSPEED332.BF.CTLE_CURRENT2_SEL_G_P4_G14_LANE_3_0

// 0x0a14	AUTOSPEED333		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G14_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G14_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G14_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G14_LANE_1_0    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED333_t;
__xdata __at( 0x6a14 ) volatile AUTOSPEED333_t AUTOSPEED333;
#define reg_DFE_CUR_SEL_G_G14_LANE_3_0  AUTOSPEED333.BF.DFE_CUR_SEL_G_G14_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G14_LANE_1_0  AUTOSPEED333.BF.REG_DFE_RATE_MODE_G14_LANE_1_0
#define reg_REG_DFE_DIS_G14_LANE  AUTOSPEED333.BF.REG_DFE_DIS_G14_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G14_LANE_1_0  AUTOSPEED333.BF.REG_DFE_TAP_SETTLE_SCALE_G14_LANE_1_0

// 0x0a18	AUTOSPEED334		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G14_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G14_LANE_7_0                : 8;	/* [15:8]     r/w 8'h9d*/
		uint8_t DFE_PAM2_MODE_G14_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G14_LANE                      : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED334_t;
__xdata __at( 0x6a18 ) volatile AUTOSPEED334_t AUTOSPEED334;
#define reg_RXDLL_TEMP_A_G14_LANE_7_0  AUTOSPEED334.BF.RXDLL_TEMP_A_G14_LANE_7_0
#define reg_RXDLL_TEMP_B_G14_LANE_7_0  AUTOSPEED334.BF.RXDLL_TEMP_B_G14_LANE_7_0
#define reg_DFE_PAM2_MODE_G14_LANE  AUTOSPEED334.BF.DFE_PAM2_MODE_G14_LANE
#define reg_RX_PAM2_EN_G14_LANE  AUTOSPEED334.BF.RX_PAM2_EN_G14_LANE

// 0x0a1c	AUTOSPEED335		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G14_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED335_t;
__xdata __at( 0x6a1c ) volatile AUTOSPEED335_t AUTOSPEED335;
#define reg_RX_HALFRATE_EN_G14_LANE  AUTOSPEED335.BF.RX_HALFRATE_EN_G14_LANE

// 0x0a20	AUTOSPEED336		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G15_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G15_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G15_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G15_LANE_2_0          : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED336_t;
__xdata __at( 0x6a20 ) volatile AUTOSPEED336_t AUTOSPEED336;
#define reg_PLL_RATE_SEL_TX_G15_LANE_3_0  AUTOSPEED336.BF.PLL_RATE_SEL_TX_G15_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G15_LANE  AUTOSPEED336.BF.TX_VDDCAL_RATE_EN_G15_LANE
#define reg_TX_SPEEDDIV_G15_LANE_2_0  AUTOSPEED336.BF.TX_SPEEDDIV_G15_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G15_LANE_2_0  AUTOSPEED336.BF.TXREG_SPEEDTRK_CLK_G15_LANE_2_0

// 0x0a24	AUTOSPEED337		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G15_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G15_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G15_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G15_LANE_1_0            : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED337_t;
__xdata __at( 0x6a24 ) volatile AUTOSPEED337_t AUTOSPEED337;
#define reg_TXREG_SPEEDTRK_DATA_G15_LANE_2_0  AUTOSPEED337.BF.TXREG_SPEEDTRK_DATA_G15_LANE_2_0
#define reg_TX_PAM2_EN_G15_LANE  AUTOSPEED337.BF.TX_PAM2_EN_G15_LANE
#define reg_TX_HALFRATE_EN_G15_LANE  AUTOSPEED337.BF.TX_HALFRATE_EN_G15_LANE
#define reg_TX_TRAIN_PAT_SEL_G15_LANE_1_0  AUTOSPEED337.BF.TX_TRAIN_PAT_SEL_G15_LANE_1_0

// 0x0a28	AUTOSPEED338		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G15_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G15_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G15_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G15_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED338_t;
__xdata __at( 0x6a28 ) volatile AUTOSPEED338_t AUTOSPEED338;
#define reg_PLL_RATE_SEL_RX_G15_LANE_3_0  AUTOSPEED338.BF.PLL_RATE_SEL_RX_G15_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G15_LANE  AUTOSPEED338.BF.RX_VDDCAL_RATE_EN_G15_LANE
#define reg_RX_SPEED_DIV_G15_LANE_2_0  AUTOSPEED338.BF.RX_SPEED_DIV_G15_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G15_LANE_2_0  AUTOSPEED338.BF.DTL_CLK_SPEEDUP_G15_LANE_2_0

// 0x0a2c	AUTOSPEED339		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G15_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G15_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G15_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G15_LANE_2_0            : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED339_t;
__xdata __at( 0x6a2c ) volatile AUTOSPEED339_t AUTOSPEED339;
#define reg_RXINTPI_G15_LANE_3_0  AUTOSPEED339.BF.RXINTPI_G15_LANE_3_0
#define reg_INTPR_G15_LANE_1_0  AUTOSPEED339.BF.INTPR_G15_LANE_1_0
#define reg_DLL_FREQ_SEL_G15_LANE_2_0  AUTOSPEED339.BF.DLL_FREQ_SEL_G15_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G15_LANE_2_0  AUTOSPEED339.BF.EOM_DLL_FREQ_SEL_G15_LANE_2_0

// 0x0a30	AUTOSPEED340		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G15_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G15_LANE_2_0          : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G15_LANE         : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G15_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED340_t;
__xdata __at( 0x6a30 ) volatile AUTOSPEED340_t AUTOSPEED340;
#define reg_RXREG_SPEEDTRK_DATA_G15_LANE_2_0  AUTOSPEED340.BF.RXREG_SPEEDTRK_DATA_G15_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G15_LANE_2_0  AUTOSPEED340.BF.RXREG_SPEEDTRK_CLK_G15_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G15_LANE  AUTOSPEED340.BF.RXREG_SPEEDTRK_CLK_HALF_G15_LANE
#define reg_SELMUFI_G15_LANE_2_0  AUTOSPEED340.BF.SELMUFI_G15_LANE_2_0

// 0x0a34	AUTOSPEED341		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G15_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G15_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G15_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G15_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED341_t;
__xdata __at( 0x6a34 ) volatile AUTOSPEED341_t AUTOSPEED341;
#define reg_SELMUFF_G15_LANE_2_0  AUTOSPEED341.BF.SELMUFF_G15_LANE_2_0
#define reg_SELMUPI_G15_LANE_3_0  AUTOSPEED341.BF.SELMUPI_G15_LANE_3_0
#define reg_SELMUPF_G15_LANE_3_0  AUTOSPEED341.BF.SELMUPF_G15_LANE_3_0
#define reg_DTL_CLK_MODE_G15_LANE_1_0  AUTOSPEED341.BF.DTL_CLK_MODE_G15_LANE_1_0

// 0x0a38	AUTOSPEED342		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G15_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h76*/
		uint8_t RX_FOFFSET_EXTRA_M_G15_LANE_13_8         : 6;	/* [13:8]     r/w 6'h1d*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G15_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G15_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED342_t;
__xdata __at( 0x6a38 ) volatile AUTOSPEED342_t AUTOSPEED342;
#define reg_RX_FOFFSET_EXTRA_M_G15_LANE_7_0  AUTOSPEED342.BF.RX_FOFFSET_EXTRA_M_G15_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G15_LANE_13_8  AUTOSPEED342.BF.RX_FOFFSET_EXTRA_M_G15_LANE_13_8
#define reg_INIT_RXFOFFS_G15_LANE_7_0  AUTOSPEED342.BF.INIT_RXFOFFS_G15_LANE_7_0
#define reg_INIT_RXFOFFS_G15_LANE_12_8  AUTOSPEED342.BF.INIT_RXFOFFS_G15_LANE_12_8

// 0x0a3c	AUTOSPEED343		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G15_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G15_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G15_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G15_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED343_t;
__xdata __at( 0x6a3c ) volatile AUTOSPEED343_t AUTOSPEED343;
#define reg_PU_SMPLR_D_P2_G15_LANE_2_0  AUTOSPEED343.BF.PU_SMPLR_D_P2_G15_LANE_2_0
#define reg_PU_SMPLR_S_P2_G15_LANE_2_0  AUTOSPEED343.BF.PU_SMPLR_S_P2_G15_LANE_2_0
#define reg_PU_SMPLR_D_P4_G15_LANE_2_0  AUTOSPEED343.BF.PU_SMPLR_D_P4_G15_LANE_2_0
#define reg_PU_SMPLR_S_P4_G15_LANE_2_0  AUTOSPEED343.BF.PU_SMPLR_S_P4_G15_LANE_2_0

// 0x0a40	AUTOSPEED344		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G15_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G15_LANE          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G15_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G15_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED344_t;
__xdata __at( 0x6a40 ) volatile AUTOSPEED344_t AUTOSPEED344;
#define reg_PATH_DISABLE_EDGE_P2P4_G15_LANE  AUTOSPEED344.BF.PATH_DISABLE_EDGE_P2P4_G15_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G15_LANE  AUTOSPEED344.BF.PATH_DISABLE_EDGE_P1P3_G15_LANE
#define reg_PU_SMPLR_D_P1_G15_LANE_2_0  AUTOSPEED344.BF.PU_SMPLR_D_P1_G15_LANE_2_0
#define reg_PU_SMPLR_S_P1_G15_LANE_2_0  AUTOSPEED344.BF.PU_SMPLR_S_P1_G15_LANE_2_0

// 0x0a44	AUTOSPEED345		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G15_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G15_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G15_LANE             : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G15_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED345_t;
__xdata __at( 0x6a44 ) volatile AUTOSPEED345_t AUTOSPEED345;
#define reg_PU_SMPLR_D_P3_G15_LANE_2_0  AUTOSPEED345.BF.PU_SMPLR_D_P3_G15_LANE_2_0
#define reg_PU_SMPLR_S_P3_G15_LANE_2_0  AUTOSPEED345.BF.PU_SMPLR_S_P3_G15_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G15_LANE  AUTOSPEED345.BF.PATH_DISABLE_D_P1P3_G15_LANE
#define reg_PATH_DISABLE_S_P1P3_G15_LANE  AUTOSPEED345.BF.PATH_DISABLE_S_P1P3_G15_LANE

// 0x0a48	AUTOSPEED346		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G15_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G15_LANE             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G15_LANE_7_0               : 8;	/*[23:16]     r/w 8'h46*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G15_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED346_t;
__xdata __at( 0x6a48 ) volatile AUTOSPEED346_t AUTOSPEED346;
#define reg_RXCLK_25M_CTRL_G15_LANE_1_0  AUTOSPEED346.BF.RXCLK_25M_CTRL_G15_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G15_LANE  AUTOSPEED346.BF.RXCLK_25M_DIV1P5_EN_G15_LANE
#define reg_RXCLK_25M_DIV_G15_LANE_7_0  AUTOSPEED346.BF.RXCLK_25M_DIV_G15_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G15_LANE  AUTOSPEED346.BF.RXCLK_25M_FIX_DIV_EN_G15_LANE

// 0x0a4c	AUTOSPEED347		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G15_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G15_LANE                 : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G15_LANE                 : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G15_LANE_3_0           : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED347_t;
__xdata __at( 0x6a4c ) volatile AUTOSPEED347_t AUTOSPEED347;
#define reg_CTLE_LOW_SPEED_SEL_G15_LANE_1_0  AUTOSPEED347.BF.CTLE_LOW_SPEED_SEL_G15_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G15_LANE  AUTOSPEED347.BF.CTLE_BYPASS1_EN_G15_LANE
#define reg_CTLE_BYPASS2_EN_G15_LANE  AUTOSPEED347.BF.CTLE_BYPASS2_EN_G15_LANE
#define reg_CTLE_CURRENT1_SEL_G15_LANE_3_0  AUTOSPEED347.BF.CTLE_CURRENT1_SEL_G15_LANE_3_0

// 0x0a50	AUTOSPEED348		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G15_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G15_LANE_3_0                : 4;	/* [11:8]     r/w 4'hc*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G15_LANE_3_0            : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G15_LANE_3_0       : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED348_t;
__xdata __at( 0x6a50 ) volatile AUTOSPEED348_t AUTOSPEED348;
#define reg_CTLE_RL1_SEL_G15_LANE_3_0  AUTOSPEED348.BF.CTLE_RL1_SEL_G15_LANE_3_0
#define reg_CTLE_RF_CTRL_G15_LANE_3_0  AUTOSPEED348.BF.CTLE_RF_CTRL_G15_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G15_LANE_3_0  AUTOSPEED348.BF.CTLE_RL1_TIA_SEL_G15_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G15_LANE_3_0  AUTOSPEED348.BF.CTLE_CURRENT1_TIA_SEL_G15_LANE_3_0

// 0x0a54	AUTOSPEED349		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G15_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G15_LANE_3_0      : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G15_LANE_3_0           : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G15_LANE_3_0      : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED349_t;
__xdata __at( 0x6a54 ) volatile AUTOSPEED349_t AUTOSPEED349;
#define reg_CTLE_RL2_SEL_G_P2_G15_LANE_3_0  AUTOSPEED349.BF.CTLE_RL2_SEL_G_P2_G15_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G15_LANE_3_0  AUTOSPEED349.BF.CTLE_CURRENT2_SEL_G_P2_G15_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G15_LANE_3_0  AUTOSPEED349.BF.CTLE_RL2_SEL_G_P4_G15_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G15_LANE_3_0  AUTOSPEED349.BF.CTLE_CURRENT2_SEL_G_P4_G15_LANE_3_0

// 0x0a58	AUTOSPEED350		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G15_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G15_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G15_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G15_LANE_1_0    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED350_t;
__xdata __at( 0x6a58 ) volatile AUTOSPEED350_t AUTOSPEED350;
#define reg_DFE_CUR_SEL_G_G15_LANE_3_0  AUTOSPEED350.BF.DFE_CUR_SEL_G_G15_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G15_LANE_1_0  AUTOSPEED350.BF.REG_DFE_RATE_MODE_G15_LANE_1_0
#define reg_REG_DFE_DIS_G15_LANE  AUTOSPEED350.BF.REG_DFE_DIS_G15_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G15_LANE_1_0  AUTOSPEED350.BF.REG_DFE_TAP_SETTLE_SCALE_G15_LANE_1_0

// 0x0a5c	AUTOSPEED351		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G15_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G15_LANE_7_0                : 8;	/* [15:8]     r/w 8'h9d*/
		uint8_t DFE_PAM2_MODE_G15_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G15_LANE                      : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED351_t;
__xdata __at( 0x6a5c ) volatile AUTOSPEED351_t AUTOSPEED351;
#define reg_RXDLL_TEMP_A_G15_LANE_7_0  AUTOSPEED351.BF.RXDLL_TEMP_A_G15_LANE_7_0
#define reg_RXDLL_TEMP_B_G15_LANE_7_0  AUTOSPEED351.BF.RXDLL_TEMP_B_G15_LANE_7_0
#define reg_DFE_PAM2_MODE_G15_LANE  AUTOSPEED351.BF.DFE_PAM2_MODE_G15_LANE
#define reg_RX_PAM2_EN_G15_LANE  AUTOSPEED351.BF.RX_PAM2_EN_G15_LANE

// 0x0a60	AUTOSPEED352		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G15_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED352_t;
__xdata __at( 0x6a60 ) volatile AUTOSPEED352_t AUTOSPEED352;
#define reg_RX_HALFRATE_EN_G15_LANE  AUTOSPEED352.BF.RX_HALFRATE_EN_G15_LANE

// 0x0a64	AUTOSPEED353		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G16_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G16_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G16_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G16_LANE_2_0          : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED353_t;
__xdata __at( 0x6a64 ) volatile AUTOSPEED353_t AUTOSPEED353;
#define reg_PLL_RATE_SEL_TX_G16_LANE_3_0  AUTOSPEED353.BF.PLL_RATE_SEL_TX_G16_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G16_LANE  AUTOSPEED353.BF.TX_VDDCAL_RATE_EN_G16_LANE
#define reg_TX_SPEEDDIV_G16_LANE_2_0  AUTOSPEED353.BF.TX_SPEEDDIV_G16_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G16_LANE_2_0  AUTOSPEED353.BF.TXREG_SPEEDTRK_CLK_G16_LANE_2_0

// 0x0a68	AUTOSPEED354		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G16_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G16_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G16_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G16_LANE_1_0            : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED354_t;
__xdata __at( 0x6a68 ) volatile AUTOSPEED354_t AUTOSPEED354;
#define reg_TXREG_SPEEDTRK_DATA_G16_LANE_2_0  AUTOSPEED354.BF.TXREG_SPEEDTRK_DATA_G16_LANE_2_0
#define reg_TX_PAM2_EN_G16_LANE  AUTOSPEED354.BF.TX_PAM2_EN_G16_LANE
#define reg_TX_HALFRATE_EN_G16_LANE  AUTOSPEED354.BF.TX_HALFRATE_EN_G16_LANE
#define reg_TX_TRAIN_PAT_SEL_G16_LANE_1_0  AUTOSPEED354.BF.TX_TRAIN_PAT_SEL_G16_LANE_1_0

// 0x0a6c	AUTOSPEED355		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G16_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G16_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G16_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G16_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED355_t;
__xdata __at( 0x6a6c ) volatile AUTOSPEED355_t AUTOSPEED355;
#define reg_PLL_RATE_SEL_RX_G16_LANE_3_0  AUTOSPEED355.BF.PLL_RATE_SEL_RX_G16_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G16_LANE  AUTOSPEED355.BF.RX_VDDCAL_RATE_EN_G16_LANE
#define reg_RX_SPEED_DIV_G16_LANE_2_0  AUTOSPEED355.BF.RX_SPEED_DIV_G16_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G16_LANE_2_0  AUTOSPEED355.BF.DTL_CLK_SPEEDUP_G16_LANE_2_0

// 0x0a70	AUTOSPEED356		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G16_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G16_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G16_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G16_LANE_2_0            : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED356_t;
__xdata __at( 0x6a70 ) volatile AUTOSPEED356_t AUTOSPEED356;
#define reg_RXINTPI_G16_LANE_3_0  AUTOSPEED356.BF.RXINTPI_G16_LANE_3_0
#define reg_INTPR_G16_LANE_1_0  AUTOSPEED356.BF.INTPR_G16_LANE_1_0
#define reg_DLL_FREQ_SEL_G16_LANE_2_0  AUTOSPEED356.BF.DLL_FREQ_SEL_G16_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G16_LANE_2_0  AUTOSPEED356.BF.EOM_DLL_FREQ_SEL_G16_LANE_2_0

// 0x0a74	AUTOSPEED357		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G16_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G16_LANE_2_0          : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G16_LANE         : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G16_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED357_t;
__xdata __at( 0x6a74 ) volatile AUTOSPEED357_t AUTOSPEED357;
#define reg_RXREG_SPEEDTRK_DATA_G16_LANE_2_0  AUTOSPEED357.BF.RXREG_SPEEDTRK_DATA_G16_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G16_LANE_2_0  AUTOSPEED357.BF.RXREG_SPEEDTRK_CLK_G16_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G16_LANE  AUTOSPEED357.BF.RXREG_SPEEDTRK_CLK_HALF_G16_LANE
#define reg_SELMUFI_G16_LANE_2_0  AUTOSPEED357.BF.SELMUFI_G16_LANE_2_0

// 0x0a78	AUTOSPEED358		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G16_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G16_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G16_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G16_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED358_t;
__xdata __at( 0x6a78 ) volatile AUTOSPEED358_t AUTOSPEED358;
#define reg_SELMUFF_G16_LANE_2_0  AUTOSPEED358.BF.SELMUFF_G16_LANE_2_0
#define reg_SELMUPI_G16_LANE_3_0  AUTOSPEED358.BF.SELMUPI_G16_LANE_3_0
#define reg_SELMUPF_G16_LANE_3_0  AUTOSPEED358.BF.SELMUPF_G16_LANE_3_0
#define reg_DTL_CLK_MODE_G16_LANE_1_0  AUTOSPEED358.BF.DTL_CLK_MODE_G16_LANE_1_0

// 0x0a7c	AUTOSPEED359		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G16_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t RX_FOFFSET_EXTRA_M_G16_LANE_13_8         : 6;	/* [13:8]     r/w 6'h1b*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G16_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G16_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED359_t;
__xdata __at( 0x6a7c ) volatile AUTOSPEED359_t AUTOSPEED359;
#define reg_RX_FOFFSET_EXTRA_M_G16_LANE_7_0  AUTOSPEED359.BF.RX_FOFFSET_EXTRA_M_G16_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G16_LANE_13_8  AUTOSPEED359.BF.RX_FOFFSET_EXTRA_M_G16_LANE_13_8
#define reg_INIT_RXFOFFS_G16_LANE_7_0  AUTOSPEED359.BF.INIT_RXFOFFS_G16_LANE_7_0
#define reg_INIT_RXFOFFS_G16_LANE_12_8  AUTOSPEED359.BF.INIT_RXFOFFS_G16_LANE_12_8

// 0x0a80	AUTOSPEED360		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G16_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G16_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G16_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G16_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED360_t;
__xdata __at( 0x6a80 ) volatile AUTOSPEED360_t AUTOSPEED360;
#define reg_PU_SMPLR_D_P2_G16_LANE_2_0  AUTOSPEED360.BF.PU_SMPLR_D_P2_G16_LANE_2_0
#define reg_PU_SMPLR_S_P2_G16_LANE_2_0  AUTOSPEED360.BF.PU_SMPLR_S_P2_G16_LANE_2_0
#define reg_PU_SMPLR_D_P4_G16_LANE_2_0  AUTOSPEED360.BF.PU_SMPLR_D_P4_G16_LANE_2_0
#define reg_PU_SMPLR_S_P4_G16_LANE_2_0  AUTOSPEED360.BF.PU_SMPLR_S_P4_G16_LANE_2_0

// 0x0a84	AUTOSPEED361		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G16_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G16_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G16_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G16_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED361_t;
__xdata __at( 0x6a84 ) volatile AUTOSPEED361_t AUTOSPEED361;
#define reg_PATH_DISABLE_EDGE_P2P4_G16_LANE  AUTOSPEED361.BF.PATH_DISABLE_EDGE_P2P4_G16_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G16_LANE  AUTOSPEED361.BF.PATH_DISABLE_EDGE_P1P3_G16_LANE
#define reg_PU_SMPLR_D_P1_G16_LANE_2_0  AUTOSPEED361.BF.PU_SMPLR_D_P1_G16_LANE_2_0
#define reg_PU_SMPLR_S_P1_G16_LANE_2_0  AUTOSPEED361.BF.PU_SMPLR_S_P1_G16_LANE_2_0

// 0x0a88	AUTOSPEED362		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G16_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G16_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G16_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G16_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED362_t;
__xdata __at( 0x6a88 ) volatile AUTOSPEED362_t AUTOSPEED362;
#define reg_PU_SMPLR_D_P3_G16_LANE_2_0  AUTOSPEED362.BF.PU_SMPLR_D_P3_G16_LANE_2_0
#define reg_PU_SMPLR_S_P3_G16_LANE_2_0  AUTOSPEED362.BF.PU_SMPLR_S_P3_G16_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G16_LANE  AUTOSPEED362.BF.PATH_DISABLE_D_P1P3_G16_LANE
#define reg_PATH_DISABLE_S_P1P3_G16_LANE  AUTOSPEED362.BF.PATH_DISABLE_S_P1P3_G16_LANE

// 0x0a8c	AUTOSPEED363		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G16_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G16_LANE             : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G16_LANE_7_0               : 8;	/*[23:16]     r/w 8'h56*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G16_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED363_t;
__xdata __at( 0x6a8c ) volatile AUTOSPEED363_t AUTOSPEED363;
#define reg_RXCLK_25M_CTRL_G16_LANE_1_0  AUTOSPEED363.BF.RXCLK_25M_CTRL_G16_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G16_LANE  AUTOSPEED363.BF.RXCLK_25M_DIV1P5_EN_G16_LANE
#define reg_RXCLK_25M_DIV_G16_LANE_7_0  AUTOSPEED363.BF.RXCLK_25M_DIV_G16_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G16_LANE  AUTOSPEED363.BF.RXCLK_25M_FIX_DIV_EN_G16_LANE

// 0x0a90	AUTOSPEED364		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G16_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G16_LANE                 : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G16_LANE                 : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G16_LANE_3_0           : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED364_t;
__xdata __at( 0x6a90 ) volatile AUTOSPEED364_t AUTOSPEED364;
#define reg_CTLE_LOW_SPEED_SEL_G16_LANE_1_0  AUTOSPEED364.BF.CTLE_LOW_SPEED_SEL_G16_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G16_LANE  AUTOSPEED364.BF.CTLE_BYPASS1_EN_G16_LANE
#define reg_CTLE_BYPASS2_EN_G16_LANE  AUTOSPEED364.BF.CTLE_BYPASS2_EN_G16_LANE
#define reg_CTLE_CURRENT1_SEL_G16_LANE_3_0  AUTOSPEED364.BF.CTLE_CURRENT1_SEL_G16_LANE_3_0

// 0x0a94	AUTOSPEED365		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G16_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G16_LANE_3_0                : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G16_LANE_3_0            : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G16_LANE_3_0       : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED365_t;
__xdata __at( 0x6a94 ) volatile AUTOSPEED365_t AUTOSPEED365;
#define reg_CTLE_RL1_SEL_G16_LANE_3_0  AUTOSPEED365.BF.CTLE_RL1_SEL_G16_LANE_3_0
#define reg_CTLE_RF_CTRL_G16_LANE_3_0  AUTOSPEED365.BF.CTLE_RF_CTRL_G16_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G16_LANE_3_0  AUTOSPEED365.BF.CTLE_RL1_TIA_SEL_G16_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G16_LANE_3_0  AUTOSPEED365.BF.CTLE_CURRENT1_TIA_SEL_G16_LANE_3_0

// 0x0a98	AUTOSPEED366		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G16_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G16_LANE_3_0      : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G16_LANE_3_0           : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G16_LANE_3_0      : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED366_t;
__xdata __at( 0x6a98 ) volatile AUTOSPEED366_t AUTOSPEED366;
#define reg_CTLE_RL2_SEL_G_P2_G16_LANE_3_0  AUTOSPEED366.BF.CTLE_RL2_SEL_G_P2_G16_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G16_LANE_3_0  AUTOSPEED366.BF.CTLE_CURRENT2_SEL_G_P2_G16_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G16_LANE_3_0  AUTOSPEED366.BF.CTLE_RL2_SEL_G_P4_G16_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G16_LANE_3_0  AUTOSPEED366.BF.CTLE_CURRENT2_SEL_G_P4_G16_LANE_3_0

// 0x0a9c	AUTOSPEED367		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G16_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G16_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G16_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G16_LANE_1_0    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED367_t;
__xdata __at( 0x6a9c ) volatile AUTOSPEED367_t AUTOSPEED367;
#define reg_DFE_CUR_SEL_G_G16_LANE_3_0  AUTOSPEED367.BF.DFE_CUR_SEL_G_G16_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G16_LANE_1_0  AUTOSPEED367.BF.REG_DFE_RATE_MODE_G16_LANE_1_0
#define reg_REG_DFE_DIS_G16_LANE  AUTOSPEED367.BF.REG_DFE_DIS_G16_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G16_LANE_1_0  AUTOSPEED367.BF.REG_DFE_TAP_SETTLE_SCALE_G16_LANE_1_0

// 0x0aa0	AUTOSPEED368		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G16_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G16_LANE_7_0                : 8;	/* [15:8]     r/w 8'h9d*/
		uint8_t DFE_PAM2_MODE_G16_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G16_LANE                      : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED368_t;
__xdata __at( 0x6aa0 ) volatile AUTOSPEED368_t AUTOSPEED368;
#define reg_RXDLL_TEMP_A_G16_LANE_7_0  AUTOSPEED368.BF.RXDLL_TEMP_A_G16_LANE_7_0
#define reg_RXDLL_TEMP_B_G16_LANE_7_0  AUTOSPEED368.BF.RXDLL_TEMP_B_G16_LANE_7_0
#define reg_DFE_PAM2_MODE_G16_LANE  AUTOSPEED368.BF.DFE_PAM2_MODE_G16_LANE
#define reg_RX_PAM2_EN_G16_LANE  AUTOSPEED368.BF.RX_PAM2_EN_G16_LANE

// 0x0aa4	AUTOSPEED369		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G16_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED369_t;
__xdata __at( 0x6aa4 ) volatile AUTOSPEED369_t AUTOSPEED369;
#define reg_RX_HALFRATE_EN_G16_LANE  AUTOSPEED369.BF.RX_HALFRATE_EN_G16_LANE

// 0x0aa8	AUTOSPEED370		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G17_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G17_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G17_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G17_LANE_2_0          : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED370_t;
__xdata __at( 0x6aa8 ) volatile AUTOSPEED370_t AUTOSPEED370;
#define reg_PLL_RATE_SEL_TX_G17_LANE_3_0  AUTOSPEED370.BF.PLL_RATE_SEL_TX_G17_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G17_LANE  AUTOSPEED370.BF.TX_VDDCAL_RATE_EN_G17_LANE
#define reg_TX_SPEEDDIV_G17_LANE_2_0  AUTOSPEED370.BF.TX_SPEEDDIV_G17_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G17_LANE_2_0  AUTOSPEED370.BF.TXREG_SPEEDTRK_CLK_G17_LANE_2_0

// 0x0aac	AUTOSPEED371		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G17_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G17_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G17_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G17_LANE_1_0            : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED371_t;
__xdata __at( 0x6aac ) volatile AUTOSPEED371_t AUTOSPEED371;
#define reg_TXREG_SPEEDTRK_DATA_G17_LANE_2_0  AUTOSPEED371.BF.TXREG_SPEEDTRK_DATA_G17_LANE_2_0
#define reg_TX_PAM2_EN_G17_LANE  AUTOSPEED371.BF.TX_PAM2_EN_G17_LANE
#define reg_TX_HALFRATE_EN_G17_LANE  AUTOSPEED371.BF.TX_HALFRATE_EN_G17_LANE
#define reg_TX_TRAIN_PAT_SEL_G17_LANE_1_0  AUTOSPEED371.BF.TX_TRAIN_PAT_SEL_G17_LANE_1_0

// 0x0ab0	AUTOSPEED372		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G17_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G17_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G17_LANE_2_0                : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G17_LANE_2_0             : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED372_t;
__xdata __at( 0x6ab0 ) volatile AUTOSPEED372_t AUTOSPEED372;
#define reg_PLL_RATE_SEL_RX_G17_LANE_3_0  AUTOSPEED372.BF.PLL_RATE_SEL_RX_G17_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G17_LANE  AUTOSPEED372.BF.RX_VDDCAL_RATE_EN_G17_LANE
#define reg_RX_SPEED_DIV_G17_LANE_2_0  AUTOSPEED372.BF.RX_SPEED_DIV_G17_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G17_LANE_2_0  AUTOSPEED372.BF.DTL_CLK_SPEEDUP_G17_LANE_2_0

// 0x0ab4	AUTOSPEED373		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G17_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'hb*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G17_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G17_LANE_2_0                : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G17_LANE_2_0            : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED373_t;
__xdata __at( 0x6ab4 ) volatile AUTOSPEED373_t AUTOSPEED373;
#define reg_RXINTPI_G17_LANE_3_0  AUTOSPEED373.BF.RXINTPI_G17_LANE_3_0
#define reg_INTPR_G17_LANE_1_0  AUTOSPEED373.BF.INTPR_G17_LANE_1_0
#define reg_DLL_FREQ_SEL_G17_LANE_2_0  AUTOSPEED373.BF.DLL_FREQ_SEL_G17_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G17_LANE_2_0  AUTOSPEED373.BF.EOM_DLL_FREQ_SEL_G17_LANE_2_0

// 0x0ab8	AUTOSPEED374		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G17_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G17_LANE_2_0          : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G17_LANE         : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G17_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED374_t;
__xdata __at( 0x6ab8 ) volatile AUTOSPEED374_t AUTOSPEED374;
#define reg_RXREG_SPEEDTRK_DATA_G17_LANE_2_0  AUTOSPEED374.BF.RXREG_SPEEDTRK_DATA_G17_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G17_LANE_2_0  AUTOSPEED374.BF.RXREG_SPEEDTRK_CLK_G17_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G17_LANE  AUTOSPEED374.BF.RXREG_SPEEDTRK_CLK_HALF_G17_LANE
#define reg_SELMUFI_G17_LANE_2_0  AUTOSPEED374.BF.SELMUFI_G17_LANE_2_0

// 0x0abc	AUTOSPEED375		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G17_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G17_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G17_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G17_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED375_t;
__xdata __at( 0x6abc ) volatile AUTOSPEED375_t AUTOSPEED375;
#define reg_SELMUFF_G17_LANE_2_0  AUTOSPEED375.BF.SELMUFF_G17_LANE_2_0
#define reg_SELMUPI_G17_LANE_3_0  AUTOSPEED375.BF.SELMUPI_G17_LANE_3_0
#define reg_SELMUPF_G17_LANE_3_0  AUTOSPEED375.BF.SELMUPF_G17_LANE_3_0
#define reg_DTL_CLK_MODE_G17_LANE_1_0  AUTOSPEED375.BF.DTL_CLK_MODE_G17_LANE_1_0

// 0x0ac0	AUTOSPEED376		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G17_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t RX_FOFFSET_EXTRA_M_G17_LANE_13_8         : 6;	/* [13:8]     r/w 6'h1b*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G17_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G17_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED376_t;
__xdata __at( 0x6ac0 ) volatile AUTOSPEED376_t AUTOSPEED376;
#define reg_RX_FOFFSET_EXTRA_M_G17_LANE_7_0  AUTOSPEED376.BF.RX_FOFFSET_EXTRA_M_G17_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G17_LANE_13_8  AUTOSPEED376.BF.RX_FOFFSET_EXTRA_M_G17_LANE_13_8
#define reg_INIT_RXFOFFS_G17_LANE_7_0  AUTOSPEED376.BF.INIT_RXFOFFS_G17_LANE_7_0
#define reg_INIT_RXFOFFS_G17_LANE_12_8  AUTOSPEED376.BF.INIT_RXFOFFS_G17_LANE_12_8

// 0x0ac4	AUTOSPEED377		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G17_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G17_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G17_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G17_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED377_t;
__xdata __at( 0x6ac4 ) volatile AUTOSPEED377_t AUTOSPEED377;
#define reg_PU_SMPLR_D_P2_G17_LANE_2_0  AUTOSPEED377.BF.PU_SMPLR_D_P2_G17_LANE_2_0
#define reg_PU_SMPLR_S_P2_G17_LANE_2_0  AUTOSPEED377.BF.PU_SMPLR_S_P2_G17_LANE_2_0
#define reg_PU_SMPLR_D_P4_G17_LANE_2_0  AUTOSPEED377.BF.PU_SMPLR_D_P4_G17_LANE_2_0
#define reg_PU_SMPLR_S_P4_G17_LANE_2_0  AUTOSPEED377.BF.PU_SMPLR_S_P4_G17_LANE_2_0

// 0x0ac8	AUTOSPEED378		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G17_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G17_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G17_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G17_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED378_t;
__xdata __at( 0x6ac8 ) volatile AUTOSPEED378_t AUTOSPEED378;
#define reg_PATH_DISABLE_EDGE_P2P4_G17_LANE  AUTOSPEED378.BF.PATH_DISABLE_EDGE_P2P4_G17_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G17_LANE  AUTOSPEED378.BF.PATH_DISABLE_EDGE_P1P3_G17_LANE
#define reg_PU_SMPLR_D_P1_G17_LANE_2_0  AUTOSPEED378.BF.PU_SMPLR_D_P1_G17_LANE_2_0
#define reg_PU_SMPLR_S_P1_G17_LANE_2_0  AUTOSPEED378.BF.PU_SMPLR_S_P1_G17_LANE_2_0

// 0x0acc	AUTOSPEED379		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G17_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G17_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G17_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G17_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED379_t;
__xdata __at( 0x6acc ) volatile AUTOSPEED379_t AUTOSPEED379;
#define reg_PU_SMPLR_D_P3_G17_LANE_2_0  AUTOSPEED379.BF.PU_SMPLR_D_P3_G17_LANE_2_0
#define reg_PU_SMPLR_S_P3_G17_LANE_2_0  AUTOSPEED379.BF.PU_SMPLR_S_P3_G17_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G17_LANE  AUTOSPEED379.BF.PATH_DISABLE_D_P1P3_G17_LANE
#define reg_PATH_DISABLE_S_P1P3_G17_LANE  AUTOSPEED379.BF.PATH_DISABLE_S_P1P3_G17_LANE

// 0x0ad0	AUTOSPEED380		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G17_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G17_LANE             : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G17_LANE_7_0               : 8;	/*[23:16]     r/w 8'h56*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G17_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED380_t;
__xdata __at( 0x6ad0 ) volatile AUTOSPEED380_t AUTOSPEED380;
#define reg_RXCLK_25M_CTRL_G17_LANE_1_0  AUTOSPEED380.BF.RXCLK_25M_CTRL_G17_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G17_LANE  AUTOSPEED380.BF.RXCLK_25M_DIV1P5_EN_G17_LANE
#define reg_RXCLK_25M_DIV_G17_LANE_7_0  AUTOSPEED380.BF.RXCLK_25M_DIV_G17_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G17_LANE  AUTOSPEED380.BF.RXCLK_25M_FIX_DIV_EN_G17_LANE

// 0x0ad4	AUTOSPEED381		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G17_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G17_LANE                 : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G17_LANE                 : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G17_LANE_3_0           : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED381_t;
__xdata __at( 0x6ad4 ) volatile AUTOSPEED381_t AUTOSPEED381;
#define reg_CTLE_LOW_SPEED_SEL_G17_LANE_1_0  AUTOSPEED381.BF.CTLE_LOW_SPEED_SEL_G17_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G17_LANE  AUTOSPEED381.BF.CTLE_BYPASS1_EN_G17_LANE
#define reg_CTLE_BYPASS2_EN_G17_LANE  AUTOSPEED381.BF.CTLE_BYPASS2_EN_G17_LANE
#define reg_CTLE_CURRENT1_SEL_G17_LANE_3_0  AUTOSPEED381.BF.CTLE_CURRENT1_SEL_G17_LANE_3_0

// 0x0ad8	AUTOSPEED382		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G17_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hc*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G17_LANE_3_0                : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G17_LANE_3_0            : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G17_LANE_3_0       : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED382_t;
__xdata __at( 0x6ad8 ) volatile AUTOSPEED382_t AUTOSPEED382;
#define reg_CTLE_RL1_SEL_G17_LANE_3_0  AUTOSPEED382.BF.CTLE_RL1_SEL_G17_LANE_3_0
#define reg_CTLE_RF_CTRL_G17_LANE_3_0  AUTOSPEED382.BF.CTLE_RF_CTRL_G17_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G17_LANE_3_0  AUTOSPEED382.BF.CTLE_RL1_TIA_SEL_G17_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G17_LANE_3_0  AUTOSPEED382.BF.CTLE_CURRENT1_TIA_SEL_G17_LANE_3_0

// 0x0adc	AUTOSPEED383		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G17_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G17_LANE_3_0      : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G17_LANE_3_0           : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G17_LANE_3_0      : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED383_t;
__xdata __at( 0x6adc ) volatile AUTOSPEED383_t AUTOSPEED383;
#define reg_CTLE_RL2_SEL_G_P2_G17_LANE_3_0  AUTOSPEED383.BF.CTLE_RL2_SEL_G_P2_G17_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G17_LANE_3_0  AUTOSPEED383.BF.CTLE_CURRENT2_SEL_G_P2_G17_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G17_LANE_3_0  AUTOSPEED383.BF.CTLE_RL2_SEL_G_P4_G17_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G17_LANE_3_0  AUTOSPEED383.BF.CTLE_CURRENT2_SEL_G_P4_G17_LANE_3_0

// 0x0ae0	AUTOSPEED384		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G17_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G17_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G17_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G17_LANE_1_0    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED384_t;
__xdata __at( 0x6ae0 ) volatile AUTOSPEED384_t AUTOSPEED384;
#define reg_DFE_CUR_SEL_G_G17_LANE_3_0  AUTOSPEED384.BF.DFE_CUR_SEL_G_G17_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G17_LANE_1_0  AUTOSPEED384.BF.REG_DFE_RATE_MODE_G17_LANE_1_0
#define reg_REG_DFE_DIS_G17_LANE  AUTOSPEED384.BF.REG_DFE_DIS_G17_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G17_LANE_1_0  AUTOSPEED384.BF.REG_DFE_TAP_SETTLE_SCALE_G17_LANE_1_0

// 0x0ae4	AUTOSPEED385		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G17_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G17_LANE_7_0                : 8;	/* [15:8]     r/w 8'ha9*/
		uint8_t DFE_PAM2_MODE_G17_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G17_LANE                      : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED385_t;
__xdata __at( 0x6ae4 ) volatile AUTOSPEED385_t AUTOSPEED385;
#define reg_RXDLL_TEMP_A_G17_LANE_7_0  AUTOSPEED385.BF.RXDLL_TEMP_A_G17_LANE_7_0
#define reg_RXDLL_TEMP_B_G17_LANE_7_0  AUTOSPEED385.BF.RXDLL_TEMP_B_G17_LANE_7_0
#define reg_DFE_PAM2_MODE_G17_LANE  AUTOSPEED385.BF.DFE_PAM2_MODE_G17_LANE
#define reg_RX_PAM2_EN_G17_LANE  AUTOSPEED385.BF.RX_PAM2_EN_G17_LANE

// 0x0ae8	AUTOSPEED386		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G17_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED386_t;
__xdata __at( 0x6ae8 ) volatile AUTOSPEED386_t AUTOSPEED386;
#define reg_RX_HALFRATE_EN_G17_LANE  AUTOSPEED386.BF.RX_HALFRATE_EN_G17_LANE

// 0x0aec	AUTOSPEED387		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G18_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G18_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G18_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G18_LANE_2_0          : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED387_t;
__xdata __at( 0x6aec ) volatile AUTOSPEED387_t AUTOSPEED387;
#define reg_PLL_RATE_SEL_TX_G18_LANE_3_0  AUTOSPEED387.BF.PLL_RATE_SEL_TX_G18_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G18_LANE  AUTOSPEED387.BF.TX_VDDCAL_RATE_EN_G18_LANE
#define reg_TX_SPEEDDIV_G18_LANE_2_0  AUTOSPEED387.BF.TX_SPEEDDIV_G18_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G18_LANE_2_0  AUTOSPEED387.BF.TXREG_SPEEDTRK_CLK_G18_LANE_2_0

// 0x0af0	AUTOSPEED388		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G18_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G18_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G18_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G18_LANE_1_0            : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED388_t;
__xdata __at( 0x6af0 ) volatile AUTOSPEED388_t AUTOSPEED388;
#define reg_TXREG_SPEEDTRK_DATA_G18_LANE_2_0  AUTOSPEED388.BF.TXREG_SPEEDTRK_DATA_G18_LANE_2_0
#define reg_TX_PAM2_EN_G18_LANE  AUTOSPEED388.BF.TX_PAM2_EN_G18_LANE
#define reg_TX_HALFRATE_EN_G18_LANE  AUTOSPEED388.BF.TX_HALFRATE_EN_G18_LANE
#define reg_TX_TRAIN_PAT_SEL_G18_LANE_1_0  AUTOSPEED388.BF.TX_TRAIN_PAT_SEL_G18_LANE_1_0

// 0x0af4	AUTOSPEED389		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G18_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G18_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G18_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G18_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED389_t;
__xdata __at( 0x6af4 ) volatile AUTOSPEED389_t AUTOSPEED389;
#define reg_PLL_RATE_SEL_RX_G18_LANE_3_0  AUTOSPEED389.BF.PLL_RATE_SEL_RX_G18_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G18_LANE  AUTOSPEED389.BF.RX_VDDCAL_RATE_EN_G18_LANE
#define reg_RX_SPEED_DIV_G18_LANE_2_0  AUTOSPEED389.BF.RX_SPEED_DIV_G18_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G18_LANE_2_0  AUTOSPEED389.BF.DTL_CLK_SPEEDUP_G18_LANE_2_0

// 0x0af8	AUTOSPEED390		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G18_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'hb*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G18_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G18_LANE_2_0                : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G18_LANE_2_0            : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED390_t;
__xdata __at( 0x6af8 ) volatile AUTOSPEED390_t AUTOSPEED390;
#define reg_RXINTPI_G18_LANE_3_0  AUTOSPEED390.BF.RXINTPI_G18_LANE_3_0
#define reg_INTPR_G18_LANE_1_0  AUTOSPEED390.BF.INTPR_G18_LANE_1_0
#define reg_DLL_FREQ_SEL_G18_LANE_2_0  AUTOSPEED390.BF.DLL_FREQ_SEL_G18_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G18_LANE_2_0  AUTOSPEED390.BF.EOM_DLL_FREQ_SEL_G18_LANE_2_0

// 0x0afc	AUTOSPEED391		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G18_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G18_LANE_2_0          : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G18_LANE         : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G18_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED391_t;
__xdata __at( 0x6afc ) volatile AUTOSPEED391_t AUTOSPEED391;
#define reg_RXREG_SPEEDTRK_DATA_G18_LANE_2_0  AUTOSPEED391.BF.RXREG_SPEEDTRK_DATA_G18_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G18_LANE_2_0  AUTOSPEED391.BF.RXREG_SPEEDTRK_CLK_G18_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G18_LANE  AUTOSPEED391.BF.RXREG_SPEEDTRK_CLK_HALF_G18_LANE
#define reg_SELMUFI_G18_LANE_2_0  AUTOSPEED391.BF.SELMUFI_G18_LANE_2_0

// 0x0b00	AUTOSPEED392		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G18_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G18_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G18_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G18_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED392_t;
__xdata __at( 0x6b00 ) volatile AUTOSPEED392_t AUTOSPEED392;
#define reg_SELMUFF_G18_LANE_2_0  AUTOSPEED392.BF.SELMUFF_G18_LANE_2_0
#define reg_SELMUPI_G18_LANE_3_0  AUTOSPEED392.BF.SELMUPI_G18_LANE_3_0
#define reg_SELMUPF_G18_LANE_3_0  AUTOSPEED392.BF.SELMUPF_G18_LANE_3_0
#define reg_DTL_CLK_MODE_G18_LANE_1_0  AUTOSPEED392.BF.DTL_CLK_MODE_G18_LANE_1_0

// 0x0b04	AUTOSPEED393		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G18_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t RX_FOFFSET_EXTRA_M_G18_LANE_13_8         : 6;	/* [13:8]     r/w 6'h1b*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G18_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G18_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED393_t;
__xdata __at( 0x6b04 ) volatile AUTOSPEED393_t AUTOSPEED393;
#define reg_RX_FOFFSET_EXTRA_M_G18_LANE_7_0  AUTOSPEED393.BF.RX_FOFFSET_EXTRA_M_G18_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G18_LANE_13_8  AUTOSPEED393.BF.RX_FOFFSET_EXTRA_M_G18_LANE_13_8
#define reg_INIT_RXFOFFS_G18_LANE_7_0  AUTOSPEED393.BF.INIT_RXFOFFS_G18_LANE_7_0
#define reg_INIT_RXFOFFS_G18_LANE_12_8  AUTOSPEED393.BF.INIT_RXFOFFS_G18_LANE_12_8

// 0x0b08	AUTOSPEED394		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G18_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G18_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G18_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G18_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED394_t;
__xdata __at( 0x6b08 ) volatile AUTOSPEED394_t AUTOSPEED394;
#define reg_PU_SMPLR_D_P2_G18_LANE_2_0  AUTOSPEED394.BF.PU_SMPLR_D_P2_G18_LANE_2_0
#define reg_PU_SMPLR_S_P2_G18_LANE_2_0  AUTOSPEED394.BF.PU_SMPLR_S_P2_G18_LANE_2_0
#define reg_PU_SMPLR_D_P4_G18_LANE_2_0  AUTOSPEED394.BF.PU_SMPLR_D_P4_G18_LANE_2_0
#define reg_PU_SMPLR_S_P4_G18_LANE_2_0  AUTOSPEED394.BF.PU_SMPLR_S_P4_G18_LANE_2_0

// 0x0b0c	AUTOSPEED395		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G18_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G18_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G18_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G18_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED395_t;
__xdata __at( 0x6b0c ) volatile AUTOSPEED395_t AUTOSPEED395;
#define reg_PATH_DISABLE_EDGE_P2P4_G18_LANE  AUTOSPEED395.BF.PATH_DISABLE_EDGE_P2P4_G18_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G18_LANE  AUTOSPEED395.BF.PATH_DISABLE_EDGE_P1P3_G18_LANE
#define reg_PU_SMPLR_D_P1_G18_LANE_2_0  AUTOSPEED395.BF.PU_SMPLR_D_P1_G18_LANE_2_0
#define reg_PU_SMPLR_S_P1_G18_LANE_2_0  AUTOSPEED395.BF.PU_SMPLR_S_P1_G18_LANE_2_0

// 0x0b10	AUTOSPEED396		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G18_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G18_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G18_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G18_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED396_t;
__xdata __at( 0x6b10 ) volatile AUTOSPEED396_t AUTOSPEED396;
#define reg_PU_SMPLR_D_P3_G18_LANE_2_0  AUTOSPEED396.BF.PU_SMPLR_D_P3_G18_LANE_2_0
#define reg_PU_SMPLR_S_P3_G18_LANE_2_0  AUTOSPEED396.BF.PU_SMPLR_S_P3_G18_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G18_LANE  AUTOSPEED396.BF.PATH_DISABLE_D_P1P3_G18_LANE
#define reg_PATH_DISABLE_S_P1P3_G18_LANE  AUTOSPEED396.BF.PATH_DISABLE_S_P1P3_G18_LANE

// 0x0b14	AUTOSPEED397		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G18_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G18_LANE             : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G18_LANE_7_0               : 8;	/*[23:16]     r/w 8'h56*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G18_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED397_t;
__xdata __at( 0x6b14 ) volatile AUTOSPEED397_t AUTOSPEED397;
#define reg_RXCLK_25M_CTRL_G18_LANE_1_0  AUTOSPEED397.BF.RXCLK_25M_CTRL_G18_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G18_LANE  AUTOSPEED397.BF.RXCLK_25M_DIV1P5_EN_G18_LANE
#define reg_RXCLK_25M_DIV_G18_LANE_7_0  AUTOSPEED397.BF.RXCLK_25M_DIV_G18_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G18_LANE  AUTOSPEED397.BF.RXCLK_25M_FIX_DIV_EN_G18_LANE

// 0x0b18	AUTOSPEED398		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G18_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G18_LANE                 : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G18_LANE                 : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G18_LANE_3_0           : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED398_t;
__xdata __at( 0x6b18 ) volatile AUTOSPEED398_t AUTOSPEED398;
#define reg_CTLE_LOW_SPEED_SEL_G18_LANE_1_0  AUTOSPEED398.BF.CTLE_LOW_SPEED_SEL_G18_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G18_LANE  AUTOSPEED398.BF.CTLE_BYPASS1_EN_G18_LANE
#define reg_CTLE_BYPASS2_EN_G18_LANE  AUTOSPEED398.BF.CTLE_BYPASS2_EN_G18_LANE
#define reg_CTLE_CURRENT1_SEL_G18_LANE_3_0  AUTOSPEED398.BF.CTLE_CURRENT1_SEL_G18_LANE_3_0

// 0x0b1c	AUTOSPEED399		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G18_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G18_LANE_3_0                : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G18_LANE_3_0            : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G18_LANE_3_0       : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED399_t;
__xdata __at( 0x6b1c ) volatile AUTOSPEED399_t AUTOSPEED399;
#define reg_CTLE_RL1_SEL_G18_LANE_3_0  AUTOSPEED399.BF.CTLE_RL1_SEL_G18_LANE_3_0
#define reg_CTLE_RF_CTRL_G18_LANE_3_0  AUTOSPEED399.BF.CTLE_RF_CTRL_G18_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G18_LANE_3_0  AUTOSPEED399.BF.CTLE_RL1_TIA_SEL_G18_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G18_LANE_3_0  AUTOSPEED399.BF.CTLE_CURRENT1_TIA_SEL_G18_LANE_3_0

// 0x0b20	AUTOSPEED400		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G18_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G18_LANE_3_0      : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G18_LANE_3_0           : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G18_LANE_3_0      : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED400_t;
__xdata __at( 0x6b20 ) volatile AUTOSPEED400_t AUTOSPEED400;
#define reg_CTLE_RL2_SEL_G_P2_G18_LANE_3_0  AUTOSPEED400.BF.CTLE_RL2_SEL_G_P2_G18_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G18_LANE_3_0  AUTOSPEED400.BF.CTLE_CURRENT2_SEL_G_P2_G18_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G18_LANE_3_0  AUTOSPEED400.BF.CTLE_RL2_SEL_G_P4_G18_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G18_LANE_3_0  AUTOSPEED400.BF.CTLE_CURRENT2_SEL_G_P4_G18_LANE_3_0

// 0x0b24	AUTOSPEED401		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G18_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G18_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G18_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G18_LANE_1_0    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED401_t;
__xdata __at( 0x6b24 ) volatile AUTOSPEED401_t AUTOSPEED401;
#define reg_DFE_CUR_SEL_G_G18_LANE_3_0  AUTOSPEED401.BF.DFE_CUR_SEL_G_G18_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G18_LANE_1_0  AUTOSPEED401.BF.REG_DFE_RATE_MODE_G18_LANE_1_0
#define reg_REG_DFE_DIS_G18_LANE  AUTOSPEED401.BF.REG_DFE_DIS_G18_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G18_LANE_1_0  AUTOSPEED401.BF.REG_DFE_TAP_SETTLE_SCALE_G18_LANE_1_0

// 0x0b28	AUTOSPEED402		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G18_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G18_LANE_7_0                : 8;	/* [15:8]     r/w 8'ha9*/
		uint8_t DFE_PAM2_MODE_G18_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G18_LANE                      : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED402_t;
__xdata __at( 0x6b28 ) volatile AUTOSPEED402_t AUTOSPEED402;
#define reg_RXDLL_TEMP_A_G18_LANE_7_0  AUTOSPEED402.BF.RXDLL_TEMP_A_G18_LANE_7_0
#define reg_RXDLL_TEMP_B_G18_LANE_7_0  AUTOSPEED402.BF.RXDLL_TEMP_B_G18_LANE_7_0
#define reg_DFE_PAM2_MODE_G18_LANE  AUTOSPEED402.BF.DFE_PAM2_MODE_G18_LANE
#define reg_RX_PAM2_EN_G18_LANE  AUTOSPEED402.BF.RX_PAM2_EN_G18_LANE

// 0x0b2c	AUTOSPEED403		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G18_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED403_t;
__xdata __at( 0x6b2c ) volatile AUTOSPEED403_t AUTOSPEED403;
#define reg_RX_HALFRATE_EN_G18_LANE  AUTOSPEED403.BF.RX_HALFRATE_EN_G18_LANE

// 0x0b30	AUTOSPEED404		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G19_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G19_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G19_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G19_LANE_2_0          : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED404_t;
__xdata __at( 0x6b30 ) volatile AUTOSPEED404_t AUTOSPEED404;
#define reg_PLL_RATE_SEL_TX_G19_LANE_3_0  AUTOSPEED404.BF.PLL_RATE_SEL_TX_G19_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G19_LANE  AUTOSPEED404.BF.TX_VDDCAL_RATE_EN_G19_LANE
#define reg_TX_SPEEDDIV_G19_LANE_2_0  AUTOSPEED404.BF.TX_SPEEDDIV_G19_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G19_LANE_2_0  AUTOSPEED404.BF.TXREG_SPEEDTRK_CLK_G19_LANE_2_0

// 0x0b34	AUTOSPEED405		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G19_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G19_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G19_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G19_LANE_1_0            : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED405_t;
__xdata __at( 0x6b34 ) volatile AUTOSPEED405_t AUTOSPEED405;
#define reg_TXREG_SPEEDTRK_DATA_G19_LANE_2_0  AUTOSPEED405.BF.TXREG_SPEEDTRK_DATA_G19_LANE_2_0
#define reg_TX_PAM2_EN_G19_LANE  AUTOSPEED405.BF.TX_PAM2_EN_G19_LANE
#define reg_TX_HALFRATE_EN_G19_LANE  AUTOSPEED405.BF.TX_HALFRATE_EN_G19_LANE
#define reg_TX_TRAIN_PAT_SEL_G19_LANE_1_0  AUTOSPEED405.BF.TX_TRAIN_PAT_SEL_G19_LANE_1_0

// 0x0b38	AUTOSPEED406		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G19_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G19_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G19_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G19_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED406_t;
__xdata __at( 0x6b38 ) volatile AUTOSPEED406_t AUTOSPEED406;
#define reg_PLL_RATE_SEL_RX_G19_LANE_3_0  AUTOSPEED406.BF.PLL_RATE_SEL_RX_G19_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G19_LANE  AUTOSPEED406.BF.RX_VDDCAL_RATE_EN_G19_LANE
#define reg_RX_SPEED_DIV_G19_LANE_2_0  AUTOSPEED406.BF.RX_SPEED_DIV_G19_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G19_LANE_2_0  AUTOSPEED406.BF.DTL_CLK_SPEEDUP_G19_LANE_2_0

// 0x0b3c	AUTOSPEED407		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G19_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'hb*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G19_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G19_LANE_2_0                : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G19_LANE_2_0            : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED407_t;
__xdata __at( 0x6b3c ) volatile AUTOSPEED407_t AUTOSPEED407;
#define reg_RXINTPI_G19_LANE_3_0  AUTOSPEED407.BF.RXINTPI_G19_LANE_3_0
#define reg_INTPR_G19_LANE_1_0  AUTOSPEED407.BF.INTPR_G19_LANE_1_0
#define reg_DLL_FREQ_SEL_G19_LANE_2_0  AUTOSPEED407.BF.DLL_FREQ_SEL_G19_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G19_LANE_2_0  AUTOSPEED407.BF.EOM_DLL_FREQ_SEL_G19_LANE_2_0

// 0x0b40	AUTOSPEED408		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G19_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G19_LANE_2_0          : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G19_LANE         : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G19_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED408_t;
__xdata __at( 0x6b40 ) volatile AUTOSPEED408_t AUTOSPEED408;
#define reg_RXREG_SPEEDTRK_DATA_G19_LANE_2_0  AUTOSPEED408.BF.RXREG_SPEEDTRK_DATA_G19_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G19_LANE_2_0  AUTOSPEED408.BF.RXREG_SPEEDTRK_CLK_G19_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G19_LANE  AUTOSPEED408.BF.RXREG_SPEEDTRK_CLK_HALF_G19_LANE
#define reg_SELMUFI_G19_LANE_2_0  AUTOSPEED408.BF.SELMUFI_G19_LANE_2_0

// 0x0b44	AUTOSPEED409		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G19_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G19_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G19_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G19_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED409_t;
__xdata __at( 0x6b44 ) volatile AUTOSPEED409_t AUTOSPEED409;
#define reg_SELMUFF_G19_LANE_2_0  AUTOSPEED409.BF.SELMUFF_G19_LANE_2_0
#define reg_SELMUPI_G19_LANE_3_0  AUTOSPEED409.BF.SELMUPI_G19_LANE_3_0
#define reg_SELMUPF_G19_LANE_3_0  AUTOSPEED409.BF.SELMUPF_G19_LANE_3_0
#define reg_DTL_CLK_MODE_G19_LANE_1_0  AUTOSPEED409.BF.DTL_CLK_MODE_G19_LANE_1_0

// 0x0b48	AUTOSPEED410		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G19_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t RX_FOFFSET_EXTRA_M_G19_LANE_13_8         : 6;	/* [13:8]     r/w 6'h1b*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G19_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G19_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED410_t;
__xdata __at( 0x6b48 ) volatile AUTOSPEED410_t AUTOSPEED410;
#define reg_RX_FOFFSET_EXTRA_M_G19_LANE_7_0  AUTOSPEED410.BF.RX_FOFFSET_EXTRA_M_G19_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G19_LANE_13_8  AUTOSPEED410.BF.RX_FOFFSET_EXTRA_M_G19_LANE_13_8
#define reg_INIT_RXFOFFS_G19_LANE_7_0  AUTOSPEED410.BF.INIT_RXFOFFS_G19_LANE_7_0
#define reg_INIT_RXFOFFS_G19_LANE_12_8  AUTOSPEED410.BF.INIT_RXFOFFS_G19_LANE_12_8

// 0x0b4c	AUTOSPEED411		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G19_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G19_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G19_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G19_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED411_t;
__xdata __at( 0x6b4c ) volatile AUTOSPEED411_t AUTOSPEED411;
#define reg_PU_SMPLR_D_P2_G19_LANE_2_0  AUTOSPEED411.BF.PU_SMPLR_D_P2_G19_LANE_2_0
#define reg_PU_SMPLR_S_P2_G19_LANE_2_0  AUTOSPEED411.BF.PU_SMPLR_S_P2_G19_LANE_2_0
#define reg_PU_SMPLR_D_P4_G19_LANE_2_0  AUTOSPEED411.BF.PU_SMPLR_D_P4_G19_LANE_2_0
#define reg_PU_SMPLR_S_P4_G19_LANE_2_0  AUTOSPEED411.BF.PU_SMPLR_S_P4_G19_LANE_2_0

// 0x0b50	AUTOSPEED412		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G19_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G19_LANE          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G19_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G19_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED412_t;
__xdata __at( 0x6b50 ) volatile AUTOSPEED412_t AUTOSPEED412;
#define reg_PATH_DISABLE_EDGE_P2P4_G19_LANE  AUTOSPEED412.BF.PATH_DISABLE_EDGE_P2P4_G19_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G19_LANE  AUTOSPEED412.BF.PATH_DISABLE_EDGE_P1P3_G19_LANE
#define reg_PU_SMPLR_D_P1_G19_LANE_2_0  AUTOSPEED412.BF.PU_SMPLR_D_P1_G19_LANE_2_0
#define reg_PU_SMPLR_S_P1_G19_LANE_2_0  AUTOSPEED412.BF.PU_SMPLR_S_P1_G19_LANE_2_0

// 0x0b54	AUTOSPEED413		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G19_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G19_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G19_LANE             : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G19_LANE             : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED413_t;
__xdata __at( 0x6b54 ) volatile AUTOSPEED413_t AUTOSPEED413;
#define reg_PU_SMPLR_D_P3_G19_LANE_2_0  AUTOSPEED413.BF.PU_SMPLR_D_P3_G19_LANE_2_0
#define reg_PU_SMPLR_S_P3_G19_LANE_2_0  AUTOSPEED413.BF.PU_SMPLR_S_P3_G19_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G19_LANE  AUTOSPEED413.BF.PATH_DISABLE_D_P1P3_G19_LANE
#define reg_PATH_DISABLE_S_P1P3_G19_LANE  AUTOSPEED413.BF.PATH_DISABLE_S_P1P3_G19_LANE

// 0x0b58	AUTOSPEED414		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G19_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G19_LANE             : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G19_LANE_7_0               : 8;	/*[23:16]     r/w 8'h56*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G19_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED414_t;
__xdata __at( 0x6b58 ) volatile AUTOSPEED414_t AUTOSPEED414;
#define reg_RXCLK_25M_CTRL_G19_LANE_1_0  AUTOSPEED414.BF.RXCLK_25M_CTRL_G19_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G19_LANE  AUTOSPEED414.BF.RXCLK_25M_DIV1P5_EN_G19_LANE
#define reg_RXCLK_25M_DIV_G19_LANE_7_0  AUTOSPEED414.BF.RXCLK_25M_DIV_G19_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G19_LANE  AUTOSPEED414.BF.RXCLK_25M_FIX_DIV_EN_G19_LANE

// 0x0b5c	AUTOSPEED415		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G19_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G19_LANE                 : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G19_LANE                 : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G19_LANE_3_0           : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED415_t;
__xdata __at( 0x6b5c ) volatile AUTOSPEED415_t AUTOSPEED415;
#define reg_CTLE_LOW_SPEED_SEL_G19_LANE_1_0  AUTOSPEED415.BF.CTLE_LOW_SPEED_SEL_G19_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G19_LANE  AUTOSPEED415.BF.CTLE_BYPASS1_EN_G19_LANE
#define reg_CTLE_BYPASS2_EN_G19_LANE  AUTOSPEED415.BF.CTLE_BYPASS2_EN_G19_LANE
#define reg_CTLE_CURRENT1_SEL_G19_LANE_3_0  AUTOSPEED415.BF.CTLE_CURRENT1_SEL_G19_LANE_3_0

// 0x0b60	AUTOSPEED416		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G19_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G19_LANE_3_0                : 4;	/* [11:8]     r/w 4'hc*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G19_LANE_3_0            : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G19_LANE_3_0       : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED416_t;
__xdata __at( 0x6b60 ) volatile AUTOSPEED416_t AUTOSPEED416;
#define reg_CTLE_RL1_SEL_G19_LANE_3_0  AUTOSPEED416.BF.CTLE_RL1_SEL_G19_LANE_3_0
#define reg_CTLE_RF_CTRL_G19_LANE_3_0  AUTOSPEED416.BF.CTLE_RF_CTRL_G19_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G19_LANE_3_0  AUTOSPEED416.BF.CTLE_RL1_TIA_SEL_G19_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G19_LANE_3_0  AUTOSPEED416.BF.CTLE_CURRENT1_TIA_SEL_G19_LANE_3_0

// 0x0b64	AUTOSPEED417		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G19_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G19_LANE_3_0      : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G19_LANE_3_0           : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G19_LANE_3_0      : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED417_t;
__xdata __at( 0x6b64 ) volatile AUTOSPEED417_t AUTOSPEED417;
#define reg_CTLE_RL2_SEL_G_P2_G19_LANE_3_0  AUTOSPEED417.BF.CTLE_RL2_SEL_G_P2_G19_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G19_LANE_3_0  AUTOSPEED417.BF.CTLE_CURRENT2_SEL_G_P2_G19_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G19_LANE_3_0  AUTOSPEED417.BF.CTLE_RL2_SEL_G_P4_G19_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G19_LANE_3_0  AUTOSPEED417.BF.CTLE_CURRENT2_SEL_G_P4_G19_LANE_3_0

// 0x0b68	AUTOSPEED418		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G19_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G19_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G19_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G19_LANE_1_0    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED418_t;
__xdata __at( 0x6b68 ) volatile AUTOSPEED418_t AUTOSPEED418;
#define reg_DFE_CUR_SEL_G_G19_LANE_3_0  AUTOSPEED418.BF.DFE_CUR_SEL_G_G19_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G19_LANE_1_0  AUTOSPEED418.BF.REG_DFE_RATE_MODE_G19_LANE_1_0
#define reg_REG_DFE_DIS_G19_LANE  AUTOSPEED418.BF.REG_DFE_DIS_G19_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G19_LANE_1_0  AUTOSPEED418.BF.REG_DFE_TAP_SETTLE_SCALE_G19_LANE_1_0

// 0x0b6c	AUTOSPEED419		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G19_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G19_LANE_7_0                : 8;	/* [15:8]     r/w 8'ha9*/
		uint8_t DFE_PAM2_MODE_G19_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G19_LANE                      : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED419_t;
__xdata __at( 0x6b6c ) volatile AUTOSPEED419_t AUTOSPEED419;
#define reg_RXDLL_TEMP_A_G19_LANE_7_0  AUTOSPEED419.BF.RXDLL_TEMP_A_G19_LANE_7_0
#define reg_RXDLL_TEMP_B_G19_LANE_7_0  AUTOSPEED419.BF.RXDLL_TEMP_B_G19_LANE_7_0
#define reg_DFE_PAM2_MODE_G19_LANE  AUTOSPEED419.BF.DFE_PAM2_MODE_G19_LANE
#define reg_RX_PAM2_EN_G19_LANE  AUTOSPEED419.BF.RX_PAM2_EN_G19_LANE

// 0x0b70	AUTOSPEED420		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G19_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED420_t;
__xdata __at( 0x6b70 ) volatile AUTOSPEED420_t AUTOSPEED420;
#define reg_RX_HALFRATE_EN_G19_LANE  AUTOSPEED420.BF.RX_HALFRATE_EN_G19_LANE

// 0x0b74	AUTOSPEED421		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G20_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G20_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G20_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h3*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G20_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED421_t;
__xdata __at( 0x6b74 ) volatile AUTOSPEED421_t AUTOSPEED421;
#define reg_PLL_RATE_SEL_TX_G20_LANE_3_0  AUTOSPEED421.BF.PLL_RATE_SEL_TX_G20_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G20_LANE  AUTOSPEED421.BF.TX_VDDCAL_RATE_EN_G20_LANE
#define reg_TX_SPEEDDIV_G20_LANE_2_0  AUTOSPEED421.BF.TX_SPEEDDIV_G20_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G20_LANE_2_0  AUTOSPEED421.BF.TXREG_SPEEDTRK_CLK_G20_LANE_2_0

// 0x0b78	AUTOSPEED422		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G20_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G20_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G20_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G20_LANE_1_0            : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED422_t;
__xdata __at( 0x6b78 ) volatile AUTOSPEED422_t AUTOSPEED422;
#define reg_TXREG_SPEEDTRK_DATA_G20_LANE_2_0  AUTOSPEED422.BF.TXREG_SPEEDTRK_DATA_G20_LANE_2_0
#define reg_TX_PAM2_EN_G20_LANE  AUTOSPEED422.BF.TX_PAM2_EN_G20_LANE
#define reg_TX_HALFRATE_EN_G20_LANE  AUTOSPEED422.BF.TX_HALFRATE_EN_G20_LANE
#define reg_TX_TRAIN_PAT_SEL_G20_LANE_1_0  AUTOSPEED422.BF.TX_TRAIN_PAT_SEL_G20_LANE_1_0

// 0x0b7c	AUTOSPEED423		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G20_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G20_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G20_LANE_2_0                : 3;	/*[18:16]     r/w 3'h6*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G20_LANE_2_0             : 3;	/*[26:24]     r/w 3'h2*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED423_t;
__xdata __at( 0x6b7c ) volatile AUTOSPEED423_t AUTOSPEED423;
#define reg_PLL_RATE_SEL_RX_G20_LANE_3_0  AUTOSPEED423.BF.PLL_RATE_SEL_RX_G20_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G20_LANE  AUTOSPEED423.BF.RX_VDDCAL_RATE_EN_G20_LANE
#define reg_RX_SPEED_DIV_G20_LANE_2_0  AUTOSPEED423.BF.RX_SPEED_DIV_G20_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G20_LANE_2_0  AUTOSPEED423.BF.DTL_CLK_SPEEDUP_G20_LANE_2_0

// 0x0b80	AUTOSPEED424		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G20_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G20_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G20_LANE_2_0                : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G20_LANE_2_0            : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED424_t;
__xdata __at( 0x6b80 ) volatile AUTOSPEED424_t AUTOSPEED424;
#define reg_RXINTPI_G20_LANE_3_0  AUTOSPEED424.BF.RXINTPI_G20_LANE_3_0
#define reg_INTPR_G20_LANE_1_0  AUTOSPEED424.BF.INTPR_G20_LANE_1_0
#define reg_DLL_FREQ_SEL_G20_LANE_2_0  AUTOSPEED424.BF.DLL_FREQ_SEL_G20_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G20_LANE_2_0  AUTOSPEED424.BF.EOM_DLL_FREQ_SEL_G20_LANE_2_0

// 0x0b84	AUTOSPEED425		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G20_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G20_LANE_2_0          : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G20_LANE         : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G20_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED425_t;
__xdata __at( 0x6b84 ) volatile AUTOSPEED425_t AUTOSPEED425;
#define reg_RXREG_SPEEDTRK_DATA_G20_LANE_2_0  AUTOSPEED425.BF.RXREG_SPEEDTRK_DATA_G20_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G20_LANE_2_0  AUTOSPEED425.BF.RXREG_SPEEDTRK_CLK_G20_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G20_LANE  AUTOSPEED425.BF.RXREG_SPEEDTRK_CLK_HALF_G20_LANE
#define reg_SELMUFI_G20_LANE_2_0  AUTOSPEED425.BF.SELMUFI_G20_LANE_2_0

// 0x0b88	AUTOSPEED426		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G20_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G20_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G20_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G20_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED426_t;
__xdata __at( 0x6b88 ) volatile AUTOSPEED426_t AUTOSPEED426;
#define reg_SELMUFF_G20_LANE_2_0  AUTOSPEED426.BF.SELMUFF_G20_LANE_2_0
#define reg_SELMUPI_G20_LANE_3_0  AUTOSPEED426.BF.SELMUPI_G20_LANE_3_0
#define reg_SELMUPF_G20_LANE_3_0  AUTOSPEED426.BF.SELMUPF_G20_LANE_3_0
#define reg_DTL_CLK_MODE_G20_LANE_1_0  AUTOSPEED426.BF.DTL_CLK_MODE_G20_LANE_1_0

// 0x0b8c	AUTOSPEED427		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G20_LANE_7_0          : 8;	/*  [7:0]     r/w 8'hb3*/
		uint8_t RX_FOFFSET_EXTRA_M_G20_LANE_13_8         : 6;	/* [13:8]     r/w 6'h15*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G20_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G20_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED427_t;
__xdata __at( 0x6b8c ) volatile AUTOSPEED427_t AUTOSPEED427;
#define reg_RX_FOFFSET_EXTRA_M_G20_LANE_7_0  AUTOSPEED427.BF.RX_FOFFSET_EXTRA_M_G20_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G20_LANE_13_8  AUTOSPEED427.BF.RX_FOFFSET_EXTRA_M_G20_LANE_13_8
#define reg_INIT_RXFOFFS_G20_LANE_7_0  AUTOSPEED427.BF.INIT_RXFOFFS_G20_LANE_7_0
#define reg_INIT_RXFOFFS_G20_LANE_12_8  AUTOSPEED427.BF.INIT_RXFOFFS_G20_LANE_12_8

// 0x0b90	AUTOSPEED428		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G20_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G20_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G20_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G20_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED428_t;
__xdata __at( 0x6b90 ) volatile AUTOSPEED428_t AUTOSPEED428;
#define reg_PU_SMPLR_D_P2_G20_LANE_2_0  AUTOSPEED428.BF.PU_SMPLR_D_P2_G20_LANE_2_0
#define reg_PU_SMPLR_S_P2_G20_LANE_2_0  AUTOSPEED428.BF.PU_SMPLR_S_P2_G20_LANE_2_0
#define reg_PU_SMPLR_D_P4_G20_LANE_2_0  AUTOSPEED428.BF.PU_SMPLR_D_P4_G20_LANE_2_0
#define reg_PU_SMPLR_S_P4_G20_LANE_2_0  AUTOSPEED428.BF.PU_SMPLR_S_P4_G20_LANE_2_0

// 0x0b94	AUTOSPEED429		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G20_LANE          : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G20_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G20_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G20_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED429_t;
__xdata __at( 0x6b94 ) volatile AUTOSPEED429_t AUTOSPEED429;
#define reg_PATH_DISABLE_EDGE_P2P4_G20_LANE  AUTOSPEED429.BF.PATH_DISABLE_EDGE_P2P4_G20_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G20_LANE  AUTOSPEED429.BF.PATH_DISABLE_EDGE_P1P3_G20_LANE
#define reg_PU_SMPLR_D_P1_G20_LANE_2_0  AUTOSPEED429.BF.PU_SMPLR_D_P1_G20_LANE_2_0
#define reg_PU_SMPLR_S_P1_G20_LANE_2_0  AUTOSPEED429.BF.PU_SMPLR_S_P1_G20_LANE_2_0

// 0x0b98	AUTOSPEED430		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G20_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G20_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G20_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G20_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED430_t;
__xdata __at( 0x6b98 ) volatile AUTOSPEED430_t AUTOSPEED430;
#define reg_PU_SMPLR_D_P3_G20_LANE_2_0  AUTOSPEED430.BF.PU_SMPLR_D_P3_G20_LANE_2_0
#define reg_PU_SMPLR_S_P3_G20_LANE_2_0  AUTOSPEED430.BF.PU_SMPLR_S_P3_G20_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G20_LANE  AUTOSPEED430.BF.PATH_DISABLE_D_P1P3_G20_LANE
#define reg_PATH_DISABLE_S_P1P3_G20_LANE  AUTOSPEED430.BF.PATH_DISABLE_S_P1P3_G20_LANE

// 0x0b9c	AUTOSPEED431		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G20_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G20_LANE             : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G20_LANE_7_0               : 8;	/*[23:16]     r/w 8'h89*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G20_LANE            : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED431_t;
__xdata __at( 0x6b9c ) volatile AUTOSPEED431_t AUTOSPEED431;
#define reg_RXCLK_25M_CTRL_G20_LANE_1_0  AUTOSPEED431.BF.RXCLK_25M_CTRL_G20_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G20_LANE  AUTOSPEED431.BF.RXCLK_25M_DIV1P5_EN_G20_LANE
#define reg_RXCLK_25M_DIV_G20_LANE_7_0  AUTOSPEED431.BF.RXCLK_25M_DIV_G20_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G20_LANE  AUTOSPEED431.BF.RXCLK_25M_FIX_DIV_EN_G20_LANE

// 0x0ba0	AUTOSPEED432		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G20_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G20_LANE                 : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G20_LANE                 : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G20_LANE_3_0           : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED432_t;
__xdata __at( 0x6ba0 ) volatile AUTOSPEED432_t AUTOSPEED432;
#define reg_CTLE_LOW_SPEED_SEL_G20_LANE_1_0  AUTOSPEED432.BF.CTLE_LOW_SPEED_SEL_G20_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G20_LANE  AUTOSPEED432.BF.CTLE_BYPASS1_EN_G20_LANE
#define reg_CTLE_BYPASS2_EN_G20_LANE  AUTOSPEED432.BF.CTLE_BYPASS2_EN_G20_LANE
#define reg_CTLE_CURRENT1_SEL_G20_LANE_3_0  AUTOSPEED432.BF.CTLE_CURRENT1_SEL_G20_LANE_3_0

// 0x0ba4	AUTOSPEED433		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G20_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G20_LANE_3_0                : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G20_LANE_3_0            : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G20_LANE_3_0       : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED433_t;
__xdata __at( 0x6ba4 ) volatile AUTOSPEED433_t AUTOSPEED433;
#define reg_CTLE_RL1_SEL_G20_LANE_3_0  AUTOSPEED433.BF.CTLE_RL1_SEL_G20_LANE_3_0
#define reg_CTLE_RF_CTRL_G20_LANE_3_0  AUTOSPEED433.BF.CTLE_RF_CTRL_G20_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G20_LANE_3_0  AUTOSPEED433.BF.CTLE_RL1_TIA_SEL_G20_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G20_LANE_3_0  AUTOSPEED433.BF.CTLE_CURRENT1_TIA_SEL_G20_LANE_3_0

// 0x0ba8	AUTOSPEED434		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G20_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G20_LANE_3_0      : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G20_LANE_3_0           : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G20_LANE_3_0      : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED434_t;
__xdata __at( 0x6ba8 ) volatile AUTOSPEED434_t AUTOSPEED434;
#define reg_CTLE_RL2_SEL_G_P2_G20_LANE_3_0  AUTOSPEED434.BF.CTLE_RL2_SEL_G_P2_G20_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G20_LANE_3_0  AUTOSPEED434.BF.CTLE_CURRENT2_SEL_G_P2_G20_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G20_LANE_3_0  AUTOSPEED434.BF.CTLE_RL2_SEL_G_P4_G20_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G20_LANE_3_0  AUTOSPEED434.BF.CTLE_CURRENT2_SEL_G_P4_G20_LANE_3_0

// 0x0bac	AUTOSPEED435		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G20_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G20_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G20_LANE                     : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G20_LANE_1_0    : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED435_t;
__xdata __at( 0x6bac ) volatile AUTOSPEED435_t AUTOSPEED435;
#define reg_DFE_CUR_SEL_G_G20_LANE_3_0  AUTOSPEED435.BF.DFE_CUR_SEL_G_G20_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G20_LANE_1_0  AUTOSPEED435.BF.REG_DFE_RATE_MODE_G20_LANE_1_0
#define reg_REG_DFE_DIS_G20_LANE  AUTOSPEED435.BF.REG_DFE_DIS_G20_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G20_LANE_1_0  AUTOSPEED435.BF.REG_DFE_TAP_SETTLE_SCALE_G20_LANE_1_0

// 0x0bb0	AUTOSPEED436		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G20_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G20_LANE_7_0                : 8;	/* [15:8]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G20_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G20_LANE                      : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED436_t;
__xdata __at( 0x6bb0 ) volatile AUTOSPEED436_t AUTOSPEED436;
#define reg_RXDLL_TEMP_A_G20_LANE_7_0  AUTOSPEED436.BF.RXDLL_TEMP_A_G20_LANE_7_0
#define reg_RXDLL_TEMP_B_G20_LANE_7_0  AUTOSPEED436.BF.RXDLL_TEMP_B_G20_LANE_7_0
#define reg_DFE_PAM2_MODE_G20_LANE  AUTOSPEED436.BF.DFE_PAM2_MODE_G20_LANE
#define reg_RX_PAM2_EN_G20_LANE  AUTOSPEED436.BF.RX_PAM2_EN_G20_LANE

// 0x0bb4	AUTOSPEED437		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G20_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED437_t;
__xdata __at( 0x6bb4 ) volatile AUTOSPEED437_t AUTOSPEED437;
#define reg_RX_HALFRATE_EN_G20_LANE  AUTOSPEED437.BF.RX_HALFRATE_EN_G20_LANE

// 0x0bb8	AUTOSPEED438		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G21_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G21_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G21_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h2*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G21_LANE_2_0          : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED438_t;
__xdata __at( 0x6bb8 ) volatile AUTOSPEED438_t AUTOSPEED438;
#define reg_PLL_RATE_SEL_TX_G21_LANE_3_0  AUTOSPEED438.BF.PLL_RATE_SEL_TX_G21_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G21_LANE  AUTOSPEED438.BF.TX_VDDCAL_RATE_EN_G21_LANE
#define reg_TX_SPEEDDIV_G21_LANE_2_0  AUTOSPEED438.BF.TX_SPEEDDIV_G21_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G21_LANE_2_0  AUTOSPEED438.BF.TXREG_SPEEDTRK_CLK_G21_LANE_2_0

// 0x0bbc	AUTOSPEED439		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G21_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G21_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G21_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G21_LANE_1_0            : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED439_t;
__xdata __at( 0x6bbc ) volatile AUTOSPEED439_t AUTOSPEED439;
#define reg_TXREG_SPEEDTRK_DATA_G21_LANE_2_0  AUTOSPEED439.BF.TXREG_SPEEDTRK_DATA_G21_LANE_2_0
#define reg_TX_PAM2_EN_G21_LANE  AUTOSPEED439.BF.TX_PAM2_EN_G21_LANE
#define reg_TX_HALFRATE_EN_G21_LANE  AUTOSPEED439.BF.TX_HALFRATE_EN_G21_LANE
#define reg_TX_TRAIN_PAT_SEL_G21_LANE_1_0  AUTOSPEED439.BF.TX_TRAIN_PAT_SEL_G21_LANE_1_0

// 0x0bc0	AUTOSPEED440		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G21_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G21_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G21_LANE_2_0                : 3;	/*[18:16]     r/w 3'h5*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G21_LANE_2_0             : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED440_t;
__xdata __at( 0x6bc0 ) volatile AUTOSPEED440_t AUTOSPEED440;
#define reg_PLL_RATE_SEL_RX_G21_LANE_3_0  AUTOSPEED440.BF.PLL_RATE_SEL_RX_G21_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G21_LANE  AUTOSPEED440.BF.RX_VDDCAL_RATE_EN_G21_LANE
#define reg_RX_SPEED_DIV_G21_LANE_2_0  AUTOSPEED440.BF.RX_SPEED_DIV_G21_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G21_LANE_2_0  AUTOSPEED440.BF.DTL_CLK_SPEEDUP_G21_LANE_2_0

// 0x0bc4	AUTOSPEED441		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G21_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G21_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G21_LANE_2_0                : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G21_LANE_2_0            : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED441_t;
__xdata __at( 0x6bc4 ) volatile AUTOSPEED441_t AUTOSPEED441;
#define reg_RXINTPI_G21_LANE_3_0  AUTOSPEED441.BF.RXINTPI_G21_LANE_3_0
#define reg_INTPR_G21_LANE_1_0  AUTOSPEED441.BF.INTPR_G21_LANE_1_0
#define reg_DLL_FREQ_SEL_G21_LANE_2_0  AUTOSPEED441.BF.DLL_FREQ_SEL_G21_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G21_LANE_2_0  AUTOSPEED441.BF.EOM_DLL_FREQ_SEL_G21_LANE_2_0

// 0x0bc8	AUTOSPEED442		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G21_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G21_LANE_2_0          : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G21_LANE         : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G21_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED442_t;
__xdata __at( 0x6bc8 ) volatile AUTOSPEED442_t AUTOSPEED442;
#define reg_RXREG_SPEEDTRK_DATA_G21_LANE_2_0  AUTOSPEED442.BF.RXREG_SPEEDTRK_DATA_G21_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G21_LANE_2_0  AUTOSPEED442.BF.RXREG_SPEEDTRK_CLK_G21_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G21_LANE  AUTOSPEED442.BF.RXREG_SPEEDTRK_CLK_HALF_G21_LANE
#define reg_SELMUFI_G21_LANE_2_0  AUTOSPEED442.BF.SELMUFI_G21_LANE_2_0

// 0x0bcc	AUTOSPEED443		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G21_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G21_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G21_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G21_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED443_t;
__xdata __at( 0x6bcc ) volatile AUTOSPEED443_t AUTOSPEED443;
#define reg_SELMUFF_G21_LANE_2_0  AUTOSPEED443.BF.SELMUFF_G21_LANE_2_0
#define reg_SELMUPI_G21_LANE_3_0  AUTOSPEED443.BF.SELMUPI_G21_LANE_3_0
#define reg_SELMUPF_G21_LANE_3_0  AUTOSPEED443.BF.SELMUPF_G21_LANE_3_0
#define reg_DTL_CLK_MODE_G21_LANE_1_0  AUTOSPEED443.BF.DTL_CLK_MODE_G21_LANE_1_0

// 0x0bd0	AUTOSPEED444		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G21_LANE_7_0          : 8;	/*  [7:0]     r/w 8'ha*/
		uint8_t RX_FOFFSET_EXTRA_M_G21_LANE_13_8         : 6;	/* [13:8]     r/w 6'h15*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G21_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G21_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED444_t;
__xdata __at( 0x6bd0 ) volatile AUTOSPEED444_t AUTOSPEED444;
#define reg_RX_FOFFSET_EXTRA_M_G21_LANE_7_0  AUTOSPEED444.BF.RX_FOFFSET_EXTRA_M_G21_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G21_LANE_13_8  AUTOSPEED444.BF.RX_FOFFSET_EXTRA_M_G21_LANE_13_8
#define reg_INIT_RXFOFFS_G21_LANE_7_0  AUTOSPEED444.BF.INIT_RXFOFFS_G21_LANE_7_0
#define reg_INIT_RXFOFFS_G21_LANE_12_8  AUTOSPEED444.BF.INIT_RXFOFFS_G21_LANE_12_8

// 0x0bd4	AUTOSPEED445		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G21_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G21_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G21_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G21_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED445_t;
__xdata __at( 0x6bd4 ) volatile AUTOSPEED445_t AUTOSPEED445;
#define reg_PU_SMPLR_D_P2_G21_LANE_2_0  AUTOSPEED445.BF.PU_SMPLR_D_P2_G21_LANE_2_0
#define reg_PU_SMPLR_S_P2_G21_LANE_2_0  AUTOSPEED445.BF.PU_SMPLR_S_P2_G21_LANE_2_0
#define reg_PU_SMPLR_D_P4_G21_LANE_2_0  AUTOSPEED445.BF.PU_SMPLR_D_P4_G21_LANE_2_0
#define reg_PU_SMPLR_S_P4_G21_LANE_2_0  AUTOSPEED445.BF.PU_SMPLR_S_P4_G21_LANE_2_0

// 0x0bd8	AUTOSPEED446		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G21_LANE          : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G21_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G21_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G21_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED446_t;
__xdata __at( 0x6bd8 ) volatile AUTOSPEED446_t AUTOSPEED446;
#define reg_PATH_DISABLE_EDGE_P2P4_G21_LANE  AUTOSPEED446.BF.PATH_DISABLE_EDGE_P2P4_G21_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G21_LANE  AUTOSPEED446.BF.PATH_DISABLE_EDGE_P1P3_G21_LANE
#define reg_PU_SMPLR_D_P1_G21_LANE_2_0  AUTOSPEED446.BF.PU_SMPLR_D_P1_G21_LANE_2_0
#define reg_PU_SMPLR_S_P1_G21_LANE_2_0  AUTOSPEED446.BF.PU_SMPLR_S_P1_G21_LANE_2_0

// 0x0bdc	AUTOSPEED447		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G21_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G21_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G21_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G21_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED447_t;
__xdata __at( 0x6bdc ) volatile AUTOSPEED447_t AUTOSPEED447;
#define reg_PU_SMPLR_D_P3_G21_LANE_2_0  AUTOSPEED447.BF.PU_SMPLR_D_P3_G21_LANE_2_0
#define reg_PU_SMPLR_S_P3_G21_LANE_2_0  AUTOSPEED447.BF.PU_SMPLR_S_P3_G21_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G21_LANE  AUTOSPEED447.BF.PATH_DISABLE_D_P1P3_G21_LANE
#define reg_PATH_DISABLE_S_P1P3_G21_LANE  AUTOSPEED447.BF.PATH_DISABLE_S_P1P3_G21_LANE

// 0x0be0	AUTOSPEED448		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G21_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G21_LANE             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G21_LANE_7_0               : 8;	/*[23:16]     r/w 8'h64*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G21_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED448_t;
__xdata __at( 0x6be0 ) volatile AUTOSPEED448_t AUTOSPEED448;
#define reg_RXCLK_25M_CTRL_G21_LANE_1_0  AUTOSPEED448.BF.RXCLK_25M_CTRL_G21_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G21_LANE  AUTOSPEED448.BF.RXCLK_25M_DIV1P5_EN_G21_LANE
#define reg_RXCLK_25M_DIV_G21_LANE_7_0  AUTOSPEED448.BF.RXCLK_25M_DIV_G21_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G21_LANE  AUTOSPEED448.BF.RXCLK_25M_FIX_DIV_EN_G21_LANE

// 0x0be4	AUTOSPEED449		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G21_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G21_LANE                 : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G21_LANE                 : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G21_LANE_3_0           : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED449_t;
__xdata __at( 0x6be4 ) volatile AUTOSPEED449_t AUTOSPEED449;
#define reg_CTLE_LOW_SPEED_SEL_G21_LANE_1_0  AUTOSPEED449.BF.CTLE_LOW_SPEED_SEL_G21_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G21_LANE  AUTOSPEED449.BF.CTLE_BYPASS1_EN_G21_LANE
#define reg_CTLE_BYPASS2_EN_G21_LANE  AUTOSPEED449.BF.CTLE_BYPASS2_EN_G21_LANE
#define reg_CTLE_CURRENT1_SEL_G21_LANE_3_0  AUTOSPEED449.BF.CTLE_CURRENT1_SEL_G21_LANE_3_0

// 0x0be8	AUTOSPEED450		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G21_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G21_LANE_3_0                : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G21_LANE_3_0            : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G21_LANE_3_0       : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED450_t;
__xdata __at( 0x6be8 ) volatile AUTOSPEED450_t AUTOSPEED450;
#define reg_CTLE_RL1_SEL_G21_LANE_3_0  AUTOSPEED450.BF.CTLE_RL1_SEL_G21_LANE_3_0
#define reg_CTLE_RF_CTRL_G21_LANE_3_0  AUTOSPEED450.BF.CTLE_RF_CTRL_G21_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G21_LANE_3_0  AUTOSPEED450.BF.CTLE_RL1_TIA_SEL_G21_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G21_LANE_3_0  AUTOSPEED450.BF.CTLE_CURRENT1_TIA_SEL_G21_LANE_3_0

// 0x0bec	AUTOSPEED451		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G21_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G21_LANE_3_0      : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G21_LANE_3_0           : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G21_LANE_3_0      : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED451_t;
__xdata __at( 0x6bec ) volatile AUTOSPEED451_t AUTOSPEED451;
#define reg_CTLE_RL2_SEL_G_P2_G21_LANE_3_0  AUTOSPEED451.BF.CTLE_RL2_SEL_G_P2_G21_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G21_LANE_3_0  AUTOSPEED451.BF.CTLE_CURRENT2_SEL_G_P2_G21_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G21_LANE_3_0  AUTOSPEED451.BF.CTLE_RL2_SEL_G_P4_G21_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G21_LANE_3_0  AUTOSPEED451.BF.CTLE_CURRENT2_SEL_G_P4_G21_LANE_3_0

// 0x0bf0	AUTOSPEED452		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G21_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G21_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G21_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G21_LANE_1_0    : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED452_t;
__xdata __at( 0x6bf0 ) volatile AUTOSPEED452_t AUTOSPEED452;
#define reg_DFE_CUR_SEL_G_G21_LANE_3_0  AUTOSPEED452.BF.DFE_CUR_SEL_G_G21_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G21_LANE_1_0  AUTOSPEED452.BF.REG_DFE_RATE_MODE_G21_LANE_1_0
#define reg_REG_DFE_DIS_G21_LANE  AUTOSPEED452.BF.REG_DFE_DIS_G21_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G21_LANE_1_0  AUTOSPEED452.BF.REG_DFE_TAP_SETTLE_SCALE_G21_LANE_1_0

// 0x0bf4	AUTOSPEED453		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G21_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G21_LANE_7_0                : 8;	/* [15:8]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G21_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G21_LANE                      : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED453_t;
__xdata __at( 0x6bf4 ) volatile AUTOSPEED453_t AUTOSPEED453;
#define reg_RXDLL_TEMP_A_G21_LANE_7_0  AUTOSPEED453.BF.RXDLL_TEMP_A_G21_LANE_7_0
#define reg_RXDLL_TEMP_B_G21_LANE_7_0  AUTOSPEED453.BF.RXDLL_TEMP_B_G21_LANE_7_0
#define reg_DFE_PAM2_MODE_G21_LANE  AUTOSPEED453.BF.DFE_PAM2_MODE_G21_LANE
#define reg_RX_PAM2_EN_G21_LANE  AUTOSPEED453.BF.RX_PAM2_EN_G21_LANE

// 0x0bf8	AUTOSPEED454		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G21_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED454_t;
__xdata __at( 0x6bf8 ) volatile AUTOSPEED454_t AUTOSPEED454;
#define reg_RX_HALFRATE_EN_G21_LANE  AUTOSPEED454.BF.RX_HALFRATE_EN_G21_LANE

// 0x0bfc	AUTOSPEED455		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G22_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G22_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G22_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G22_LANE_2_0          : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED455_t;
__xdata __at( 0x6bfc ) volatile AUTOSPEED455_t AUTOSPEED455;
#define reg_PLL_RATE_SEL_TX_G22_LANE_3_0  AUTOSPEED455.BF.PLL_RATE_SEL_TX_G22_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G22_LANE  AUTOSPEED455.BF.TX_VDDCAL_RATE_EN_G22_LANE
#define reg_TX_SPEEDDIV_G22_LANE_2_0  AUTOSPEED455.BF.TX_SPEEDDIV_G22_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G22_LANE_2_0  AUTOSPEED455.BF.TXREG_SPEEDTRK_CLK_G22_LANE_2_0

// 0x0c00	AUTOSPEED456		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G22_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G22_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G22_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G22_LANE_1_0            : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED456_t;
__xdata __at( 0x6c00 ) volatile AUTOSPEED456_t AUTOSPEED456;
#define reg_TXREG_SPEEDTRK_DATA_G22_LANE_2_0  AUTOSPEED456.BF.TXREG_SPEEDTRK_DATA_G22_LANE_2_0
#define reg_TX_PAM2_EN_G22_LANE  AUTOSPEED456.BF.TX_PAM2_EN_G22_LANE
#define reg_TX_HALFRATE_EN_G22_LANE  AUTOSPEED456.BF.TX_HALFRATE_EN_G22_LANE
#define reg_TX_TRAIN_PAT_SEL_G22_LANE_1_0  AUTOSPEED456.BF.TX_TRAIN_PAT_SEL_G22_LANE_1_0

// 0x0c04	AUTOSPEED457		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G22_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G22_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G22_LANE_2_0                : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G22_LANE_2_0             : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED457_t;
__xdata __at( 0x6c04 ) volatile AUTOSPEED457_t AUTOSPEED457;
#define reg_PLL_RATE_SEL_RX_G22_LANE_3_0  AUTOSPEED457.BF.PLL_RATE_SEL_RX_G22_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G22_LANE  AUTOSPEED457.BF.RX_VDDCAL_RATE_EN_G22_LANE
#define reg_RX_SPEED_DIV_G22_LANE_2_0  AUTOSPEED457.BF.RX_SPEED_DIV_G22_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G22_LANE_2_0  AUTOSPEED457.BF.DTL_CLK_SPEEDUP_G22_LANE_2_0

// 0x0c08	AUTOSPEED458		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G22_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G22_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G22_LANE_2_0                : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G22_LANE_2_0            : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED458_t;
__xdata __at( 0x6c08 ) volatile AUTOSPEED458_t AUTOSPEED458;
#define reg_RXINTPI_G22_LANE_3_0  AUTOSPEED458.BF.RXINTPI_G22_LANE_3_0
#define reg_INTPR_G22_LANE_1_0  AUTOSPEED458.BF.INTPR_G22_LANE_1_0
#define reg_DLL_FREQ_SEL_G22_LANE_2_0  AUTOSPEED458.BF.DLL_FREQ_SEL_G22_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G22_LANE_2_0  AUTOSPEED458.BF.EOM_DLL_FREQ_SEL_G22_LANE_2_0

// 0x0c0c	AUTOSPEED459		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G22_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G22_LANE_2_0          : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G22_LANE         : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G22_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED459_t;
__xdata __at( 0x6c0c ) volatile AUTOSPEED459_t AUTOSPEED459;
#define reg_RXREG_SPEEDTRK_DATA_G22_LANE_2_0  AUTOSPEED459.BF.RXREG_SPEEDTRK_DATA_G22_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G22_LANE_2_0  AUTOSPEED459.BF.RXREG_SPEEDTRK_CLK_G22_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G22_LANE  AUTOSPEED459.BF.RXREG_SPEEDTRK_CLK_HALF_G22_LANE
#define reg_SELMUFI_G22_LANE_2_0  AUTOSPEED459.BF.SELMUFI_G22_LANE_2_0

// 0x0c10	AUTOSPEED460		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G22_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G22_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G22_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G22_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED460_t;
__xdata __at( 0x6c10 ) volatile AUTOSPEED460_t AUTOSPEED460;
#define reg_SELMUFF_G22_LANE_2_0  AUTOSPEED460.BF.SELMUFF_G22_LANE_2_0
#define reg_SELMUPI_G22_LANE_3_0  AUTOSPEED460.BF.SELMUPI_G22_LANE_3_0
#define reg_SELMUPF_G22_LANE_3_0  AUTOSPEED460.BF.SELMUPF_G22_LANE_3_0
#define reg_DTL_CLK_MODE_G22_LANE_1_0  AUTOSPEED460.BF.DTL_CLK_MODE_G22_LANE_1_0

// 0x0c14	AUTOSPEED461		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G22_LANE_7_0          : 8;	/*  [7:0]     r/w 8'ha*/
		uint8_t RX_FOFFSET_EXTRA_M_G22_LANE_13_8         : 6;	/* [13:8]     r/w 6'h15*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G22_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G22_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED461_t;
__xdata __at( 0x6c14 ) volatile AUTOSPEED461_t AUTOSPEED461;
#define reg_RX_FOFFSET_EXTRA_M_G22_LANE_7_0  AUTOSPEED461.BF.RX_FOFFSET_EXTRA_M_G22_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G22_LANE_13_8  AUTOSPEED461.BF.RX_FOFFSET_EXTRA_M_G22_LANE_13_8
#define reg_INIT_RXFOFFS_G22_LANE_7_0  AUTOSPEED461.BF.INIT_RXFOFFS_G22_LANE_7_0
#define reg_INIT_RXFOFFS_G22_LANE_12_8  AUTOSPEED461.BF.INIT_RXFOFFS_G22_LANE_12_8

// 0x0c18	AUTOSPEED462		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G22_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G22_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G22_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G22_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED462_t;
__xdata __at( 0x6c18 ) volatile AUTOSPEED462_t AUTOSPEED462;
#define reg_PU_SMPLR_D_P2_G22_LANE_2_0  AUTOSPEED462.BF.PU_SMPLR_D_P2_G22_LANE_2_0
#define reg_PU_SMPLR_S_P2_G22_LANE_2_0  AUTOSPEED462.BF.PU_SMPLR_S_P2_G22_LANE_2_0
#define reg_PU_SMPLR_D_P4_G22_LANE_2_0  AUTOSPEED462.BF.PU_SMPLR_D_P4_G22_LANE_2_0
#define reg_PU_SMPLR_S_P4_G22_LANE_2_0  AUTOSPEED462.BF.PU_SMPLR_S_P4_G22_LANE_2_0

// 0x0c1c	AUTOSPEED463		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G22_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G22_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G22_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G22_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED463_t;
__xdata __at( 0x6c1c ) volatile AUTOSPEED463_t AUTOSPEED463;
#define reg_PATH_DISABLE_EDGE_P2P4_G22_LANE  AUTOSPEED463.BF.PATH_DISABLE_EDGE_P2P4_G22_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G22_LANE  AUTOSPEED463.BF.PATH_DISABLE_EDGE_P1P3_G22_LANE
#define reg_PU_SMPLR_D_P1_G22_LANE_2_0  AUTOSPEED463.BF.PU_SMPLR_D_P1_G22_LANE_2_0
#define reg_PU_SMPLR_S_P1_G22_LANE_2_0  AUTOSPEED463.BF.PU_SMPLR_S_P1_G22_LANE_2_0

// 0x0c20	AUTOSPEED464		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G22_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G22_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G22_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G22_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED464_t;
__xdata __at( 0x6c20 ) volatile AUTOSPEED464_t AUTOSPEED464;
#define reg_PU_SMPLR_D_P3_G22_LANE_2_0  AUTOSPEED464.BF.PU_SMPLR_D_P3_G22_LANE_2_0
#define reg_PU_SMPLR_S_P3_G22_LANE_2_0  AUTOSPEED464.BF.PU_SMPLR_S_P3_G22_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G22_LANE  AUTOSPEED464.BF.PATH_DISABLE_D_P1P3_G22_LANE
#define reg_PATH_DISABLE_S_P1P3_G22_LANE  AUTOSPEED464.BF.PATH_DISABLE_S_P1P3_G22_LANE

// 0x0c24	AUTOSPEED465		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G22_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G22_LANE             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G22_LANE_7_0               : 8;	/*[23:16]     r/w 8'h64*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G22_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED465_t;
__xdata __at( 0x6c24 ) volatile AUTOSPEED465_t AUTOSPEED465;
#define reg_RXCLK_25M_CTRL_G22_LANE_1_0  AUTOSPEED465.BF.RXCLK_25M_CTRL_G22_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G22_LANE  AUTOSPEED465.BF.RXCLK_25M_DIV1P5_EN_G22_LANE
#define reg_RXCLK_25M_DIV_G22_LANE_7_0  AUTOSPEED465.BF.RXCLK_25M_DIV_G22_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G22_LANE  AUTOSPEED465.BF.RXCLK_25M_FIX_DIV_EN_G22_LANE

// 0x0c28	AUTOSPEED466		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G22_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G22_LANE                 : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G22_LANE                 : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G22_LANE_3_0           : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED466_t;
__xdata __at( 0x6c28 ) volatile AUTOSPEED466_t AUTOSPEED466;
#define reg_CTLE_LOW_SPEED_SEL_G22_LANE_1_0  AUTOSPEED466.BF.CTLE_LOW_SPEED_SEL_G22_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G22_LANE  AUTOSPEED466.BF.CTLE_BYPASS1_EN_G22_LANE
#define reg_CTLE_BYPASS2_EN_G22_LANE  AUTOSPEED466.BF.CTLE_BYPASS2_EN_G22_LANE
#define reg_CTLE_CURRENT1_SEL_G22_LANE_3_0  AUTOSPEED466.BF.CTLE_CURRENT1_SEL_G22_LANE_3_0

// 0x0c2c	AUTOSPEED467		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G22_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hc*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G22_LANE_3_0                : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G22_LANE_3_0            : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G22_LANE_3_0       : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED467_t;
__xdata __at( 0x6c2c ) volatile AUTOSPEED467_t AUTOSPEED467;
#define reg_CTLE_RL1_SEL_G22_LANE_3_0  AUTOSPEED467.BF.CTLE_RL1_SEL_G22_LANE_3_0
#define reg_CTLE_RF_CTRL_G22_LANE_3_0  AUTOSPEED467.BF.CTLE_RF_CTRL_G22_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G22_LANE_3_0  AUTOSPEED467.BF.CTLE_RL1_TIA_SEL_G22_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G22_LANE_3_0  AUTOSPEED467.BF.CTLE_CURRENT1_TIA_SEL_G22_LANE_3_0

// 0x0c30	AUTOSPEED468		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G22_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G22_LANE_3_0      : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G22_LANE_3_0           : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G22_LANE_3_0      : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED468_t;
__xdata __at( 0x6c30 ) volatile AUTOSPEED468_t AUTOSPEED468;
#define reg_CTLE_RL2_SEL_G_P2_G22_LANE_3_0  AUTOSPEED468.BF.CTLE_RL2_SEL_G_P2_G22_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G22_LANE_3_0  AUTOSPEED468.BF.CTLE_CURRENT2_SEL_G_P2_G22_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G22_LANE_3_0  AUTOSPEED468.BF.CTLE_RL2_SEL_G_P4_G22_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G22_LANE_3_0  AUTOSPEED468.BF.CTLE_CURRENT2_SEL_G_P4_G22_LANE_3_0

// 0x0c34	AUTOSPEED469		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G22_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G22_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G22_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G22_LANE_1_0    : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED469_t;
__xdata __at( 0x6c34 ) volatile AUTOSPEED469_t AUTOSPEED469;
#define reg_DFE_CUR_SEL_G_G22_LANE_3_0  AUTOSPEED469.BF.DFE_CUR_SEL_G_G22_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G22_LANE_1_0  AUTOSPEED469.BF.REG_DFE_RATE_MODE_G22_LANE_1_0
#define reg_REG_DFE_DIS_G22_LANE  AUTOSPEED469.BF.REG_DFE_DIS_G22_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G22_LANE_1_0  AUTOSPEED469.BF.REG_DFE_TAP_SETTLE_SCALE_G22_LANE_1_0

// 0x0c38	AUTOSPEED470		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G22_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G22_LANE_7_0                : 8;	/* [15:8]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G22_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G22_LANE                      : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED470_t;
__xdata __at( 0x6c38 ) volatile AUTOSPEED470_t AUTOSPEED470;
#define reg_RXDLL_TEMP_A_G22_LANE_7_0  AUTOSPEED470.BF.RXDLL_TEMP_A_G22_LANE_7_0
#define reg_RXDLL_TEMP_B_G22_LANE_7_0  AUTOSPEED470.BF.RXDLL_TEMP_B_G22_LANE_7_0
#define reg_DFE_PAM2_MODE_G22_LANE  AUTOSPEED470.BF.DFE_PAM2_MODE_G22_LANE
#define reg_RX_PAM2_EN_G22_LANE  AUTOSPEED470.BF.RX_PAM2_EN_G22_LANE

// 0x0c3c	AUTOSPEED471		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G22_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED471_t;
__xdata __at( 0x6c3c ) volatile AUTOSPEED471_t AUTOSPEED471;
#define reg_RX_HALFRATE_EN_G22_LANE  AUTOSPEED471.BF.RX_HALFRATE_EN_G22_LANE

// 0x0c40	AUTOSPEED472		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G23_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G23_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_SPEEDDIV_G23_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_CLK_G23_LANE_2_0          : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED472_t;
__xdata __at( 0x6c40 ) volatile AUTOSPEED472_t AUTOSPEED472;
#define reg_PLL_RATE_SEL_TX_G23_LANE_3_0  AUTOSPEED472.BF.PLL_RATE_SEL_TX_G23_LANE_3_0
#define reg_TX_VDDCAL_RATE_EN_G23_LANE  AUTOSPEED472.BF.TX_VDDCAL_RATE_EN_G23_LANE
#define reg_TX_SPEEDDIV_G23_LANE_2_0  AUTOSPEED472.BF.TX_SPEEDDIV_G23_LANE_2_0
#define reg_TXREG_SPEEDTRK_CLK_G23_LANE_2_0  AUTOSPEED472.BF.TXREG_SPEEDTRK_CLK_G23_LANE_2_0

// 0x0c44	AUTOSPEED473		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_G23_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_PAM2_EN_G23_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G23_LANE                  : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G23_LANE_1_0            : 2;	/*[25:24]     r/w 2'h3*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED473_t;
__xdata __at( 0x6c44 ) volatile AUTOSPEED473_t AUTOSPEED473;
#define reg_TXREG_SPEEDTRK_DATA_G23_LANE_2_0  AUTOSPEED473.BF.TXREG_SPEEDTRK_DATA_G23_LANE_2_0
#define reg_TX_PAM2_EN_G23_LANE  AUTOSPEED473.BF.TX_PAM2_EN_G23_LANE
#define reg_TX_HALFRATE_EN_G23_LANE  AUTOSPEED473.BF.TX_HALFRATE_EN_G23_LANE
#define reg_TX_TRAIN_PAT_SEL_G23_LANE_1_0  AUTOSPEED473.BF.TX_TRAIN_PAT_SEL_G23_LANE_1_0

// 0x0c48	AUTOSPEED474		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_RX_G23_LANE_3_0             : 4;	/*  [3:0]     r/w 4'h7*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G23_LANE               : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_SPEED_DIV_G23_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G23_LANE_2_0             : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED474_t;
__xdata __at( 0x6c48 ) volatile AUTOSPEED474_t AUTOSPEED474;
#define reg_PLL_RATE_SEL_RX_G23_LANE_3_0  AUTOSPEED474.BF.PLL_RATE_SEL_RX_G23_LANE_3_0
#define reg_RX_VDDCAL_RATE_EN_G23_LANE  AUTOSPEED474.BF.RX_VDDCAL_RATE_EN_G23_LANE
#define reg_RX_SPEED_DIV_G23_LANE_2_0  AUTOSPEED474.BF.RX_SPEED_DIV_G23_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G23_LANE_2_0  AUTOSPEED474.BF.DTL_CLK_SPEEDUP_G23_LANE_2_0

// 0x0c4c	AUTOSPEED475		TBD
typedef union {
	struct {
		uint8_t RXINTPI_G23_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'he*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t INTPR_G23_LANE_1_0                       : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G23_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G23_LANE_2_0            : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED475_t;
__xdata __at( 0x6c4c ) volatile AUTOSPEED475_t AUTOSPEED475;
#define reg_RXINTPI_G23_LANE_3_0  AUTOSPEED475.BF.RXINTPI_G23_LANE_3_0
#define reg_INTPR_G23_LANE_1_0  AUTOSPEED475.BF.INTPR_G23_LANE_1_0
#define reg_DLL_FREQ_SEL_G23_LANE_2_0  AUTOSPEED475.BF.DLL_FREQ_SEL_G23_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G23_LANE_2_0  AUTOSPEED475.BF.EOM_DLL_FREQ_SEL_G23_LANE_2_0

// 0x0c50	AUTOSPEED476		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_DATA_G23_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_G23_LANE_2_0          : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G23_LANE         : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SELMUFI_G23_LANE_2_0                     : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED476_t;
__xdata __at( 0x6c50 ) volatile AUTOSPEED476_t AUTOSPEED476;
#define reg_RXREG_SPEEDTRK_DATA_G23_LANE_2_0  AUTOSPEED476.BF.RXREG_SPEEDTRK_DATA_G23_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_G23_LANE_2_0  AUTOSPEED476.BF.RXREG_SPEEDTRK_CLK_G23_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G23_LANE  AUTOSPEED476.BF.RXREG_SPEEDTRK_CLK_HALF_G23_LANE
#define reg_SELMUFI_G23_LANE_2_0  AUTOSPEED476.BF.SELMUFI_G23_LANE_2_0

// 0x0c54	AUTOSPEED477		TBD
typedef union {
	struct {
		uint8_t SELMUFF_G23_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SELMUPI_G23_LANE_3_0                     : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t SELMUPF_G23_LANE_3_0                     : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t DTL_CLK_MODE_G23_LANE_1_0                : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED477_t;
__xdata __at( 0x6c54 ) volatile AUTOSPEED477_t AUTOSPEED477;
#define reg_SELMUFF_G23_LANE_2_0  AUTOSPEED477.BF.SELMUFF_G23_LANE_2_0
#define reg_SELMUPI_G23_LANE_3_0  AUTOSPEED477.BF.SELMUPI_G23_LANE_3_0
#define reg_SELMUPF_G23_LANE_3_0  AUTOSPEED477.BF.SELMUPF_G23_LANE_3_0
#define reg_DTL_CLK_MODE_G23_LANE_1_0  AUTOSPEED477.BF.DTL_CLK_MODE_G23_LANE_1_0

// 0x0c58	AUTOSPEED478		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G23_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h97*/
		uint8_t RX_FOFFSET_EXTRA_M_G23_LANE_13_8         : 6;	/* [13:8]     r/w 6'h1d*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t INIT_RXFOFFS_G23_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G23_LANE_12_8               : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED478_t;
__xdata __at( 0x6c58 ) volatile AUTOSPEED478_t AUTOSPEED478;
#define reg_RX_FOFFSET_EXTRA_M_G23_LANE_7_0  AUTOSPEED478.BF.RX_FOFFSET_EXTRA_M_G23_LANE_7_0
#define reg_RX_FOFFSET_EXTRA_M_G23_LANE_13_8  AUTOSPEED478.BF.RX_FOFFSET_EXTRA_M_G23_LANE_13_8
#define reg_INIT_RXFOFFS_G23_LANE_7_0  AUTOSPEED478.BF.INIT_RXFOFFS_G23_LANE_7_0
#define reg_INIT_RXFOFFS_G23_LANE_12_8  AUTOSPEED478.BF.INIT_RXFOFFS_G23_LANE_12_8

// 0x0c5c	AUTOSPEED479		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P2_G23_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P2_G23_LANE_2_0               : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G23_LANE_2_0               : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G23_LANE_2_0               : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED479_t;
__xdata __at( 0x6c5c ) volatile AUTOSPEED479_t AUTOSPEED479;
#define reg_PU_SMPLR_D_P2_G23_LANE_2_0  AUTOSPEED479.BF.PU_SMPLR_D_P2_G23_LANE_2_0
#define reg_PU_SMPLR_S_P2_G23_LANE_2_0  AUTOSPEED479.BF.PU_SMPLR_S_P2_G23_LANE_2_0
#define reg_PU_SMPLR_D_P4_G23_LANE_2_0  AUTOSPEED479.BF.PU_SMPLR_D_P4_G23_LANE_2_0
#define reg_PU_SMPLR_S_P4_G23_LANE_2_0  AUTOSPEED479.BF.PU_SMPLR_S_P4_G23_LANE_2_0

// 0x0c60	AUTOSPEED480		TBD
typedef union {
	struct {
		uint8_t PATH_DISABLE_EDGE_P2P4_G23_LANE          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_P1P3_G23_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_SMPLR_D_P1_G23_LANE_2_0               : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G23_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED480_t;
__xdata __at( 0x6c60 ) volatile AUTOSPEED480_t AUTOSPEED480;
#define reg_PATH_DISABLE_EDGE_P2P4_G23_LANE  AUTOSPEED480.BF.PATH_DISABLE_EDGE_P2P4_G23_LANE
#define reg_PATH_DISABLE_EDGE_P1P3_G23_LANE  AUTOSPEED480.BF.PATH_DISABLE_EDGE_P1P3_G23_LANE
#define reg_PU_SMPLR_D_P1_G23_LANE_2_0  AUTOSPEED480.BF.PU_SMPLR_D_P1_G23_LANE_2_0
#define reg_PU_SMPLR_S_P1_G23_LANE_2_0  AUTOSPEED480.BF.PU_SMPLR_S_P1_G23_LANE_2_0

// 0x0c64	AUTOSPEED481		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P3_G23_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G23_LANE_2_0               : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PATH_DISABLE_D_P1P3_G23_LANE             : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_S_P1P3_G23_LANE             : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED481_t;
__xdata __at( 0x6c64 ) volatile AUTOSPEED481_t AUTOSPEED481;
#define reg_PU_SMPLR_D_P3_G23_LANE_2_0  AUTOSPEED481.BF.PU_SMPLR_D_P3_G23_LANE_2_0
#define reg_PU_SMPLR_S_P3_G23_LANE_2_0  AUTOSPEED481.BF.PU_SMPLR_S_P3_G23_LANE_2_0
#define reg_PATH_DISABLE_D_P1P3_G23_LANE  AUTOSPEED481.BF.PATH_DISABLE_D_P1P3_G23_LANE
#define reg_PATH_DISABLE_S_P1P3_G23_LANE  AUTOSPEED481.BF.PATH_DISABLE_S_P1P3_G23_LANE

// 0x0c68	AUTOSPEED482		TBD
typedef union {
	struct {
		uint8_t RXCLK_25M_CTRL_G23_LANE_1_0              : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RXCLK_25M_DIV1P5_EN_G23_LANE             : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RXCLK_25M_DIV_G23_LANE_7_0               : 8;	/*[23:16]     r/w 8'h46*/
		uint8_t RXCLK_25M_FIX_DIV_EN_G23_LANE            : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED482_t;
__xdata __at( 0x6c68 ) volatile AUTOSPEED482_t AUTOSPEED482;
#define reg_RXCLK_25M_CTRL_G23_LANE_1_0  AUTOSPEED482.BF.RXCLK_25M_CTRL_G23_LANE_1_0
#define reg_RXCLK_25M_DIV1P5_EN_G23_LANE  AUTOSPEED482.BF.RXCLK_25M_DIV1P5_EN_G23_LANE
#define reg_RXCLK_25M_DIV_G23_LANE_7_0  AUTOSPEED482.BF.RXCLK_25M_DIV_G23_LANE_7_0
#define reg_RXCLK_25M_FIX_DIV_EN_G23_LANE  AUTOSPEED482.BF.RXCLK_25M_FIX_DIV_EN_G23_LANE

// 0x0c6c	AUTOSPEED483		TBD
typedef union {
	struct {
		uint8_t CTLE_LOW_SPEED_SEL_G23_LANE_1_0          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t CTLE_BYPASS1_EN_G23_LANE                 : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t CTLE_BYPASS2_EN_G23_LANE                 : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CTLE_CURRENT1_SEL_G23_LANE_3_0           : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED483_t;
__xdata __at( 0x6c6c ) volatile AUTOSPEED483_t AUTOSPEED483;
#define reg_CTLE_LOW_SPEED_SEL_G23_LANE_1_0  AUTOSPEED483.BF.CTLE_LOW_SPEED_SEL_G23_LANE_1_0
#define reg_CTLE_BYPASS1_EN_G23_LANE  AUTOSPEED483.BF.CTLE_BYPASS1_EN_G23_LANE
#define reg_CTLE_BYPASS2_EN_G23_LANE  AUTOSPEED483.BF.CTLE_BYPASS2_EN_G23_LANE
#define reg_CTLE_CURRENT1_SEL_G23_LANE_3_0  AUTOSPEED483.BF.CTLE_CURRENT1_SEL_G23_LANE_3_0

// 0x0c70	AUTOSPEED484		TBD
typedef union {
	struct {
		uint8_t CTLE_RL1_SEL_G23_LANE_3_0                : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_RF_CTRL_G23_LANE_3_0                : 4;	/* [11:8]     r/w 4'h9*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL1_TIA_SEL_G23_LANE_3_0            : 4;	/*[19:16]     r/w 4'hc*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT1_TIA_SEL_G23_LANE_3_0       : 4;	/*[27:24]     r/w 4'hc*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED484_t;
__xdata __at( 0x6c70 ) volatile AUTOSPEED484_t AUTOSPEED484;
#define reg_CTLE_RL1_SEL_G23_LANE_3_0  AUTOSPEED484.BF.CTLE_RL1_SEL_G23_LANE_3_0
#define reg_CTLE_RF_CTRL_G23_LANE_3_0  AUTOSPEED484.BF.CTLE_RF_CTRL_G23_LANE_3_0
#define reg_CTLE_RL1_TIA_SEL_G23_LANE_3_0  AUTOSPEED484.BF.CTLE_RL1_TIA_SEL_G23_LANE_3_0
#define reg_CTLE_CURRENT1_TIA_SEL_G23_LANE_3_0  AUTOSPEED484.BF.CTLE_CURRENT1_TIA_SEL_G23_LANE_3_0

// 0x0c74	AUTOSPEED485		TBD
typedef union {
	struct {
		uint8_t CTLE_RL2_SEL_G_P2_G23_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P2_G23_LANE_3_0      : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t CTLE_RL2_SEL_G_P4_G23_LANE_3_0           : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t CTLE_CURRENT2_SEL_G_P4_G23_LANE_3_0      : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED485_t;
__xdata __at( 0x6c74 ) volatile AUTOSPEED485_t AUTOSPEED485;
#define reg_CTLE_RL2_SEL_G_P2_G23_LANE_3_0  AUTOSPEED485.BF.CTLE_RL2_SEL_G_P2_G23_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P2_G23_LANE_3_0  AUTOSPEED485.BF.CTLE_CURRENT2_SEL_G_P2_G23_LANE_3_0
#define reg_CTLE_RL2_SEL_G_P4_G23_LANE_3_0  AUTOSPEED485.BF.CTLE_RL2_SEL_G_P4_G23_LANE_3_0
#define reg_CTLE_CURRENT2_SEL_G_P4_G23_LANE_3_0  AUTOSPEED485.BF.CTLE_CURRENT2_SEL_G_P4_G23_LANE_3_0

// 0x0c78	AUTOSPEED486		TBD
typedef union {
	struct {
		uint8_t DFE_CUR_SEL_G_G23_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_DFE_RATE_MODE_G23_LANE_1_0           : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t REG_DFE_DIS_G23_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G23_LANE_1_0    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED486_t;
__xdata __at( 0x6c78 ) volatile AUTOSPEED486_t AUTOSPEED486;
#define reg_DFE_CUR_SEL_G_G23_LANE_3_0  AUTOSPEED486.BF.DFE_CUR_SEL_G_G23_LANE_3_0
#define reg_REG_DFE_RATE_MODE_G23_LANE_1_0  AUTOSPEED486.BF.REG_DFE_RATE_MODE_G23_LANE_1_0
#define reg_REG_DFE_DIS_G23_LANE  AUTOSPEED486.BF.REG_DFE_DIS_G23_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G23_LANE_1_0  AUTOSPEED486.BF.REG_DFE_TAP_SETTLE_SCALE_G23_LANE_1_0

// 0x0c7c	AUTOSPEED487		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G23_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_G23_LANE_7_0                : 8;	/* [15:8]     r/w 8'h9d*/
		uint8_t DFE_PAM2_MODE_G23_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_PAM2_EN_G23_LANE                      : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED487_t;
__xdata __at( 0x6c7c ) volatile AUTOSPEED487_t AUTOSPEED487;
#define reg_RXDLL_TEMP_A_G23_LANE_7_0  AUTOSPEED487.BF.RXDLL_TEMP_A_G23_LANE_7_0
#define reg_RXDLL_TEMP_B_G23_LANE_7_0  AUTOSPEED487.BF.RXDLL_TEMP_B_G23_LANE_7_0
#define reg_DFE_PAM2_MODE_G23_LANE  AUTOSPEED487.BF.DFE_PAM2_MODE_G23_LANE
#define reg_RX_PAM2_EN_G23_LANE  AUTOSPEED487.BF.RX_PAM2_EN_G23_LANE

// 0x0c80	AUTOSPEED488		TBD
typedef union {
	struct {
		uint8_t RX_HALFRATE_EN_G23_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED488_t;
__xdata __at( 0x6c80 ) volatile AUTOSPEED488_t AUTOSPEED488;
#define reg_RX_HALFRATE_EN_G23_LANE  AUTOSPEED488.BF.RX_HALFRATE_EN_G23_LANE

// 0x0c84	AUTOSPEED489		TBD
typedef union {
	struct {
		uint8_t CAL_PLL_AMP_RESULT_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLLDCC_RESULT_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_ALIGN90_RESULT_MSB_LANE_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_ALIGN90_RESULT_LSB_LANE_7_0       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED489_t;
__xdata __at( 0x6c84 ) volatile AUTOSPEED489_t AUTOSPEED489;
#define reg_CAL_PLL_AMP_RESULT_LANE_7_0  AUTOSPEED489.BF.CAL_PLL_AMP_RESULT_LANE_7_0
#define reg_CAL_PLLDCC_RESULT_LANE_7_0  AUTOSPEED489.BF.CAL_PLLDCC_RESULT_LANE_7_0
#define reg_CAL_TX_ALIGN90_RESULT_MSB_LANE_7_0  AUTOSPEED489.BF.CAL_TX_ALIGN90_RESULT_MSB_LANE_7_0
#define reg_CAL_TX_ALIGN90_RESULT_LSB_LANE_7_0  AUTOSPEED489.BF.CAL_TX_ALIGN90_RESULT_LSB_LANE_7_0

// 0x0c88	AUTOSPEED490		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC1_RESULT_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TXDCC2_RESULT_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_DLL_GM_RESULT_LANE_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_EOM_DLL_GM_RESULT_LANE_7_0           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED490_t;
__xdata __at( 0x6c88 ) volatile AUTOSPEED490_t AUTOSPEED490;
#define reg_CAL_TXDCC1_RESULT_LANE_7_0  AUTOSPEED490.BF.CAL_TXDCC1_RESULT_LANE_7_0
#define reg_CAL_TXDCC2_RESULT_LANE_7_0  AUTOSPEED490.BF.CAL_TXDCC2_RESULT_LANE_7_0
#define reg_CAL_DLL_GM_RESULT_LANE_7_0  AUTOSPEED490.BF.CAL_DLL_GM_RESULT_LANE_7_0
#define reg_CAL_EOM_DLL_GM_RESULT_LANE_7_0  AUTOSPEED490.BF.CAL_EOM_DLL_GM_RESULT_LANE_7_0

// 0x0c8c	AUTOSPEED491		TBD
typedef union {
	struct {
		uint8_t CAL_DLL_VDDA_RESULT_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_EOM_DLL_VDDA_RESULT_LANE_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_DLL_DCC_RESULT_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_DCC1_RESULT_LANE_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED491_t;
__xdata __at( 0x6c8c ) volatile AUTOSPEED491_t AUTOSPEED491;
#define reg_CAL_DLL_VDDA_RESULT_LANE_7_0  AUTOSPEED491.BF.CAL_DLL_VDDA_RESULT_LANE_7_0
#define reg_CAL_EOM_DLL_VDDA_RESULT_LANE_7_0  AUTOSPEED491.BF.CAL_EOM_DLL_VDDA_RESULT_LANE_7_0
#define reg_CAL_DLL_DCC_RESULT_LANE_7_0  AUTOSPEED491.BF.CAL_DLL_DCC_RESULT_LANE_7_0
#define reg_CAL_TX_DCC1_RESULT_LANE_7_0  AUTOSPEED491.BF.CAL_TX_DCC1_RESULT_LANE_7_0

// 0x0c90	AUTOSPEED492		TBD
typedef union {
	struct {
		uint8_t CAL_TX_DCC2_RESULT_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_DCC3_RESULT_MSB_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_DCC3_RESULT_LSB_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_DCC4_RESULT_MSB_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED492_t;
__xdata __at( 0x6c90 ) volatile AUTOSPEED492_t AUTOSPEED492;
#define reg_CAL_TX_DCC2_RESULT_LANE_7_0  AUTOSPEED492.BF.CAL_TX_DCC2_RESULT_LANE_7_0
#define reg_CAL_TX_DCC3_RESULT_MSB_LANE_7_0  AUTOSPEED492.BF.CAL_TX_DCC3_RESULT_MSB_LANE_7_0
#define reg_CAL_TX_DCC3_RESULT_LSB_LANE_7_0  AUTOSPEED492.BF.CAL_TX_DCC3_RESULT_LSB_LANE_7_0
#define reg_CAL_TX_DCC4_RESULT_MSB_LANE_7_0  AUTOSPEED492.BF.CAL_TX_DCC4_RESULT_MSB_LANE_7_0

// 0x0c94	AUTOSPEED493		TBD
typedef union {
	struct {
		uint8_t CAL_TX_DCC4_RESULT_LSB_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_IMP_N_RESULT_LANE_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_IMP_P_RESULT_LANE_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_DCC_RESULT_LANE_7_0           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED493_t;
__xdata __at( 0x6c94 ) volatile AUTOSPEED493_t AUTOSPEED493;
#define reg_CAL_TX_DCC4_RESULT_LSB_LANE_7_0  AUTOSPEED493.BF.CAL_TX_DCC4_RESULT_LSB_LANE_7_0
#define reg_CAL_TX_IMP_N_RESULT_LANE_7_0  AUTOSPEED493.BF.CAL_TX_IMP_N_RESULT_LANE_7_0
#define reg_CAL_TX_IMP_P_RESULT_LANE_7_0  AUTOSPEED493.BF.CAL_TX_IMP_P_RESULT_LANE_7_0
#define reg_CAL_RX_EOM_DCC_RESULT_LANE_7_0  AUTOSPEED493.BF.CAL_RX_EOM_DCC_RESULT_LANE_7_0

// 0x0c98	AUTOSPEED494		TBD
typedef union {
	struct {
		uint8_t CAL_RX_EOM_PI_RESULT_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_ALIGN90_RESULT_MSB_LANE_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_ALIGN90_RESULT_LSB_LANE_7_0   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_DD_RESULT_MSB_LANE_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED494_t;
__xdata __at( 0x6c98 ) volatile AUTOSPEED494_t AUTOSPEED494;
#define reg_CAL_RX_EOM_PI_RESULT_LANE_7_0  AUTOSPEED494.BF.CAL_RX_EOM_PI_RESULT_LANE_7_0
#define reg_CAL_RX_EOM_ALIGN90_RESULT_MSB_LANE_7_0  AUTOSPEED494.BF.CAL_RX_EOM_ALIGN90_RESULT_MSB_LANE_7_0
#define reg_CAL_RX_EOM_ALIGN90_RESULT_LSB_LANE_7_0  AUTOSPEED494.BF.CAL_RX_EOM_ALIGN90_RESULT_LSB_LANE_7_0
#define reg_CAL_RX_ALIGN90_DD_RESULT_MSB_LANE_7_0  AUTOSPEED494.BF.CAL_RX_ALIGN90_DD_RESULT_MSB_LANE_7_0

// 0x0c9c	AUTOSPEED495		TBD
typedef union {
	struct {
		uint8_t CAL_RX_ALIGN90_DD_RESULT_LSB_LANE_7_0    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_DE_RESULT_MSB_LANE_7_0    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_DE_RESULT_LSB_LANE_7_0    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_EE_RESULT_MSB_LANE_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED495_t;
__xdata __at( 0x6c9c ) volatile AUTOSPEED495_t AUTOSPEED495;
#define reg_CAL_RX_ALIGN90_DD_RESULT_LSB_LANE_7_0  AUTOSPEED495.BF.CAL_RX_ALIGN90_DD_RESULT_LSB_LANE_7_0
#define reg_CAL_RX_ALIGN90_DE_RESULT_MSB_LANE_7_0  AUTOSPEED495.BF.CAL_RX_ALIGN90_DE_RESULT_MSB_LANE_7_0
#define reg_CAL_RX_ALIGN90_DE_RESULT_LSB_LANE_7_0  AUTOSPEED495.BF.CAL_RX_ALIGN90_DE_RESULT_LSB_LANE_7_0
#define reg_CAL_RX_ALIGN90_EE_RESULT_MSB_LANE_7_0  AUTOSPEED495.BF.CAL_RX_ALIGN90_EE_RESULT_MSB_LANE_7_0

// 0x0ca0	AUTOSPEED496		TBD
typedef union {
	struct {
		uint8_t CAL_RX_ALIGN90_EE_RESULT_LSB_LANE_7_0    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_DCC1_RESULT_MSB_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_DCC1_RESULT_LSB_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_DCC2_RESULT_MSB_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED496_t;
__xdata __at( 0x6ca0 ) volatile AUTOSPEED496_t AUTOSPEED496;
#define reg_CAL_RX_ALIGN90_EE_RESULT_LSB_LANE_7_0  AUTOSPEED496.BF.CAL_RX_ALIGN90_EE_RESULT_LSB_LANE_7_0
#define reg_CAL_RX_DCC1_RESULT_MSB_LANE_7_0  AUTOSPEED496.BF.CAL_RX_DCC1_RESULT_MSB_LANE_7_0
#define reg_CAL_RX_DCC1_RESULT_LSB_LANE_7_0  AUTOSPEED496.BF.CAL_RX_DCC1_RESULT_LSB_LANE_7_0
#define reg_CAL_RX_DCC2_RESULT_MSB_LANE_7_0  AUTOSPEED496.BF.CAL_RX_DCC2_RESULT_MSB_LANE_7_0

// 0x0ca4	AUTOSPEED497		TBD
typedef union {
	struct {
		uint8_t CAL_RX_DCC2_RESULT_LSB_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_DCC3_RESULT_MSB_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_DCC3_RESULT_LSB_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_DCC4_RESULT_MSB_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED497_t;
__xdata __at( 0x6ca4 ) volatile AUTOSPEED497_t AUTOSPEED497;
#define reg_CAL_RX_DCC2_RESULT_LSB_LANE_7_0  AUTOSPEED497.BF.CAL_RX_DCC2_RESULT_LSB_LANE_7_0
#define reg_CAL_RX_DCC3_RESULT_MSB_LANE_7_0  AUTOSPEED497.BF.CAL_RX_DCC3_RESULT_MSB_LANE_7_0
#define reg_CAL_RX_DCC3_RESULT_LSB_LANE_7_0  AUTOSPEED497.BF.CAL_RX_DCC3_RESULT_LSB_LANE_7_0
#define reg_CAL_RX_DCC4_RESULT_MSB_LANE_7_0  AUTOSPEED497.BF.CAL_RX_DCC4_RESULT_MSB_LANE_7_0

// 0x0ca8	AUTOSPEED498		TBD
typedef union {
	struct {
		uint8_t CAL_RX_DCC4_RESULT_LSB_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_DCC5_RESULT_LANE_7_0              : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_IMP_RESULT_LANE_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SQ_RESULT_LANE_7_0                   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED498_t;
__xdata __at( 0x6ca8 ) volatile AUTOSPEED498_t AUTOSPEED498;
#define reg_CAL_RX_DCC4_RESULT_LSB_LANE_7_0  AUTOSPEED498.BF.CAL_RX_DCC4_RESULT_LSB_LANE_7_0
#define reg_CAL_RX_DCC5_RESULT_LANE_7_0  AUTOSPEED498.BF.CAL_RX_DCC5_RESULT_LANE_7_0
#define reg_CAL_RX_IMP_RESULT_LANE_7_0  AUTOSPEED498.BF.CAL_RX_IMP_RESULT_LANE_7_0
#define reg_CAL_SQ_RESULT_LANE_7_0  AUTOSPEED498.BF.CAL_SQ_RESULT_LANE_7_0

// 0x0cac	AUTOSPEED499		TBD
typedef union {
	struct {
		uint8_t CAL_SMPLR_D_TOP_P1_RESULT_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_MID_P1_RESULT_LANE_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_BOT_P1_RESULT_LANE_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_TOP_P3_RESULT_LANE_7_0       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED499_t;
__xdata __at( 0x6cac ) volatile AUTOSPEED499_t AUTOSPEED499;
#define reg_CAL_SMPLR_D_TOP_P1_RESULT_LANE_7_0  AUTOSPEED499.BF.CAL_SMPLR_D_TOP_P1_RESULT_LANE_7_0
#define reg_CAL_SMPLR_D_MID_P1_RESULT_LANE_7_0  AUTOSPEED499.BF.CAL_SMPLR_D_MID_P1_RESULT_LANE_7_0
#define reg_CAL_SMPLR_D_BOT_P1_RESULT_LANE_7_0  AUTOSPEED499.BF.CAL_SMPLR_D_BOT_P1_RESULT_LANE_7_0
#define reg_CAL_SMPLR_D_TOP_P3_RESULT_LANE_7_0  AUTOSPEED499.BF.CAL_SMPLR_D_TOP_P3_RESULT_LANE_7_0

// 0x0cb0	AUTOSPEED500		TBD
typedef union {
	struct {
		uint8_t CAL_SMPLR_D_MID_P3_RESULT_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_BOT_P3_RESULT_LANE_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_TOP_P1_RESULT_LANE_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_MID_P1_RESULT_LANE_7_0       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED500_t;
__xdata __at( 0x6cb0 ) volatile AUTOSPEED500_t AUTOSPEED500;
#define reg_CAL_SMPLR_D_MID_P3_RESULT_LANE_7_0  AUTOSPEED500.BF.CAL_SMPLR_D_MID_P3_RESULT_LANE_7_0
#define reg_CAL_SMPLR_D_BOT_P3_RESULT_LANE_7_0  AUTOSPEED500.BF.CAL_SMPLR_D_BOT_P3_RESULT_LANE_7_0
#define reg_CAL_SMPLR_S_TOP_P1_RESULT_LANE_7_0  AUTOSPEED500.BF.CAL_SMPLR_S_TOP_P1_RESULT_LANE_7_0
#define reg_CAL_SMPLR_S_MID_P1_RESULT_LANE_7_0  AUTOSPEED500.BF.CAL_SMPLR_S_MID_P1_RESULT_LANE_7_0

// 0x0cb4	AUTOSPEED501		TBD
typedef union {
	struct {
		uint8_t CAL_SMPLR_S_BOT_P1_RESULT_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_TOP_P3_RESULT_LANE_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_MID_P3_RESULT_LANE_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_BOT_P3_RESULT_LANE_7_0       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED501_t;
__xdata __at( 0x6cb4 ) volatile AUTOSPEED501_t AUTOSPEED501;
#define reg_CAL_SMPLR_S_BOT_P1_RESULT_LANE_7_0  AUTOSPEED501.BF.CAL_SMPLR_S_BOT_P1_RESULT_LANE_7_0
#define reg_CAL_SMPLR_S_TOP_P3_RESULT_LANE_7_0  AUTOSPEED501.BF.CAL_SMPLR_S_TOP_P3_RESULT_LANE_7_0
#define reg_CAL_SMPLR_S_MID_P3_RESULT_LANE_7_0  AUTOSPEED501.BF.CAL_SMPLR_S_MID_P3_RESULT_LANE_7_0
#define reg_CAL_SMPLR_S_BOT_P3_RESULT_LANE_7_0  AUTOSPEED501.BF.CAL_SMPLR_S_BOT_P3_RESULT_LANE_7_0

// 0x0cb8	AUTOSPEED502		TBD
typedef union {
	struct {
		uint8_t CAL_SMPLR_EDGE_P1_RESULT_PN_SIGN_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_P1_RESULT_P_SIGN_LANE_7_0 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_P1_RESULT_N_SIGN_LANE_7_0 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_P3_RESULT_PN_SIGN_LANE_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED502_t;
__xdata __at( 0x6cb8 ) volatile AUTOSPEED502_t AUTOSPEED502;
#define reg_CAL_SMPLR_EDGE_P1_RESULT_PN_SIGN_LANE_7_0  AUTOSPEED502.BF.CAL_SMPLR_EDGE_P1_RESULT_PN_SIGN_LANE_7_0
#define reg_CAL_SMPLR_EDGE_P1_RESULT_P_SIGN_LANE_7_0  AUTOSPEED502.BF.CAL_SMPLR_EDGE_P1_RESULT_P_SIGN_LANE_7_0
#define reg_CAL_SMPLR_EDGE_P1_RESULT_N_SIGN_LANE_7_0  AUTOSPEED502.BF.CAL_SMPLR_EDGE_P1_RESULT_N_SIGN_LANE_7_0
#define reg_CAL_SMPLR_EDGE_P3_RESULT_PN_SIGN_LANE_7_0  AUTOSPEED502.BF.CAL_SMPLR_EDGE_P3_RESULT_PN_SIGN_LANE_7_0

// 0x0cbc	AUTOSPEED503		TBD
typedef union {
	struct {
		uint8_t CAL_SMPLR_EDGE_P3_RESULT_P_SIGN_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_P3_RESULT_N_SIGN_LANE_7_0 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_TOP_P2_RESULT_LANE_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_MID_P2_RESULT_LANE_7_0       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED503_t;
__xdata __at( 0x6cbc ) volatile AUTOSPEED503_t AUTOSPEED503;
#define reg_CAL_SMPLR_EDGE_P3_RESULT_P_SIGN_LANE_7_0  AUTOSPEED503.BF.CAL_SMPLR_EDGE_P3_RESULT_P_SIGN_LANE_7_0
#define reg_CAL_SMPLR_EDGE_P3_RESULT_N_SIGN_LANE_7_0  AUTOSPEED503.BF.CAL_SMPLR_EDGE_P3_RESULT_N_SIGN_LANE_7_0
#define reg_CAL_SMPLR_D_TOP_P2_RESULT_LANE_7_0  AUTOSPEED503.BF.CAL_SMPLR_D_TOP_P2_RESULT_LANE_7_0
#define reg_CAL_SMPLR_D_MID_P2_RESULT_LANE_7_0  AUTOSPEED503.BF.CAL_SMPLR_D_MID_P2_RESULT_LANE_7_0

// 0x0cc0	AUTOSPEED504		TBD
typedef union {
	struct {
		uint8_t CAL_SMPLR_D_BOT_P2_RESULT_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_TOP_P4_RESULT_LANE_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_MID_P4_RESULT_LANE_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_BOT_P4_RESULT_LANE_7_0       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED504_t;
__xdata __at( 0x6cc0 ) volatile AUTOSPEED504_t AUTOSPEED504;
#define reg_CAL_SMPLR_D_BOT_P2_RESULT_LANE_7_0  AUTOSPEED504.BF.CAL_SMPLR_D_BOT_P2_RESULT_LANE_7_0
#define reg_CAL_SMPLR_D_TOP_P4_RESULT_LANE_7_0  AUTOSPEED504.BF.CAL_SMPLR_D_TOP_P4_RESULT_LANE_7_0
#define reg_CAL_SMPLR_D_MID_P4_RESULT_LANE_7_0  AUTOSPEED504.BF.CAL_SMPLR_D_MID_P4_RESULT_LANE_7_0
#define reg_CAL_SMPLR_D_BOT_P4_RESULT_LANE_7_0  AUTOSPEED504.BF.CAL_SMPLR_D_BOT_P4_RESULT_LANE_7_0

// 0x0cc4	AUTOSPEED505		TBD
typedef union {
	struct {
		uint8_t CAL_SMPLR_S_TOP_P2_RESULT_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_MID_P2_RESULT_LANE_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_BOT_P2_RESULT_LANE_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_TOP_P4_RESULT_LANE_7_0       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED505_t;
__xdata __at( 0x6cc4 ) volatile AUTOSPEED505_t AUTOSPEED505;
#define reg_CAL_SMPLR_S_TOP_P2_RESULT_LANE_7_0  AUTOSPEED505.BF.CAL_SMPLR_S_TOP_P2_RESULT_LANE_7_0
#define reg_CAL_SMPLR_S_MID_P2_RESULT_LANE_7_0  AUTOSPEED505.BF.CAL_SMPLR_S_MID_P2_RESULT_LANE_7_0
#define reg_CAL_SMPLR_S_BOT_P2_RESULT_LANE_7_0  AUTOSPEED505.BF.CAL_SMPLR_S_BOT_P2_RESULT_LANE_7_0
#define reg_CAL_SMPLR_S_TOP_P4_RESULT_LANE_7_0  AUTOSPEED505.BF.CAL_SMPLR_S_TOP_P4_RESULT_LANE_7_0

// 0x0cc8	AUTOSPEED506		TBD
typedef union {
	struct {
		uint8_t CAL_SMPLR_S_MID_P4_RESULT_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_BOT_P4_RESULT_LANE_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_P2_RESULT_PN_SIGN_LANE_7_0 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_P2_RESULT_P_SIGN_LANE_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED506_t;
__xdata __at( 0x6cc8 ) volatile AUTOSPEED506_t AUTOSPEED506;
#define reg_CAL_SMPLR_S_MID_P4_RESULT_LANE_7_0  AUTOSPEED506.BF.CAL_SMPLR_S_MID_P4_RESULT_LANE_7_0
#define reg_CAL_SMPLR_S_BOT_P4_RESULT_LANE_7_0  AUTOSPEED506.BF.CAL_SMPLR_S_BOT_P4_RESULT_LANE_7_0
#define reg_CAL_SMPLR_EDGE_P2_RESULT_PN_SIGN_LANE_7_0  AUTOSPEED506.BF.CAL_SMPLR_EDGE_P2_RESULT_PN_SIGN_LANE_7_0
#define reg_CAL_SMPLR_EDGE_P2_RESULT_P_SIGN_LANE_7_0  AUTOSPEED506.BF.CAL_SMPLR_EDGE_P2_RESULT_P_SIGN_LANE_7_0

// 0x0ccc	AUTOSPEED507		TBD
typedef union {
	struct {
		uint8_t CAL_SMPLR_EDGE_P2_RESULT_N_SIGN_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_P4_RESULT_PN_SIGN_LANE_7_0 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_P4_RESULT_P_SIGN_LANE_7_0 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_P4_RESULT_N_SIGN_LANE_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED507_t;
__xdata __at( 0x6ccc ) volatile AUTOSPEED507_t AUTOSPEED507;
#define reg_CAL_SMPLR_EDGE_P2_RESULT_N_SIGN_LANE_7_0  AUTOSPEED507.BF.CAL_SMPLR_EDGE_P2_RESULT_N_SIGN_LANE_7_0
#define reg_CAL_SMPLR_EDGE_P4_RESULT_PN_SIGN_LANE_7_0  AUTOSPEED507.BF.CAL_SMPLR_EDGE_P4_RESULT_PN_SIGN_LANE_7_0
#define reg_CAL_SMPLR_EDGE_P4_RESULT_P_SIGN_LANE_7_0  AUTOSPEED507.BF.CAL_SMPLR_EDGE_P4_RESULT_P_SIGN_LANE_7_0
#define reg_CAL_SMPLR_EDGE_P4_RESULT_N_SIGN_LANE_7_0  AUTOSPEED507.BF.CAL_SMPLR_EDGE_P4_RESULT_N_SIGN_LANE_7_0

#endif
