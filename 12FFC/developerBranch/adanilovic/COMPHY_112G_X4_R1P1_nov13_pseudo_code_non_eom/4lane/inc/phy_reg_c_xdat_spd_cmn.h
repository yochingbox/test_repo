#ifndef PHY_REG_C_XDAT_SPD_CMN_H
#define PHY_REG_C_XDAT_SPD_CMN_H



// 0x0000	AUTOSPEED0		TBD
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
} AUTOSPEED0_t;
__xdata __at( 0xe000 ) volatile AUTOSPEED0_t AUTOSPEED0;
#define reg_USE_RING_REFCLK_250M  AUTOSPEED0.BF.USE_RING_REFCLK_250M
#define reg_CAL_LCVCO_DAC_LSB_RATE0_7_0  AUTOSPEED0.BF.CAL_LCVCO_DAC_LSB_RATE0_7_0
#define reg_CAL_LCVCO_DAC_LSB_RATE1_7_0  AUTOSPEED0.BF.CAL_LCVCO_DAC_LSB_RATE1_7_0
#define reg_CAL_LCVCO_DAC_LSB_CONT_RATE1_7_0  AUTOSPEED0.BF.CAL_LCVCO_DAC_LSB_CONT_RATE1_7_0

// 0x0004	AUTOSPEED1		TBD
typedef union {
	struct {
		uint8_t CAL_LCVCO_DAC_MSB_RATE0_7_0              : 8;	/*  [7:0]     r/w 8'h21*/
		uint8_t CAL_LCVCO_DAC_MSB_RATE1_7_0              : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_LCVCO_DAC_MSB_CONT_RATE0_7_0         : 8;	/*[23:16]     r/w 8'h21*/
		uint8_t CAL_LCVCO_DAC_MSB_CONT_RATE1_7_0         : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED1_t;
__xdata __at( 0xe004 ) volatile AUTOSPEED1_t AUTOSPEED1;
#define reg_CAL_LCVCO_DAC_MSB_RATE0_7_0  AUTOSPEED1.BF.CAL_LCVCO_DAC_MSB_RATE0_7_0
#define reg_CAL_LCVCO_DAC_MSB_RATE1_7_0  AUTOSPEED1.BF.CAL_LCVCO_DAC_MSB_RATE1_7_0
#define reg_CAL_LCVCO_DAC_MSB_CONT_RATE0_7_0  AUTOSPEED1.BF.CAL_LCVCO_DAC_MSB_CONT_RATE0_7_0
#define reg_CAL_LCVCO_DAC_MSB_CONT_RATE1_7_0  AUTOSPEED1.BF.CAL_LCVCO_DAC_MSB_CONT_RATE1_7_0

// 0x0008	AUTOSPEED2		TBD
typedef union {
	struct {
		uint8_t CAL_LCCAP_LSB_RATE0_7_0                  : 8;	/*  [7:0]     r/w 8'h10*/
		uint8_t CAL_LCCAP_LSB_RATE1_7_0                  : 8;	/* [15:8]     r/w 8'h10*/
		uint8_t CAL_LCCAP_MSB_RATE0_7_0                  : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t CAL_LCCAP_MSB_RATE1_7_0                  : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED2_t;
__xdata __at( 0xe008 ) volatile AUTOSPEED2_t AUTOSPEED2;
#define reg_CAL_LCCAP_LSB_RATE0_7_0  AUTOSPEED2.BF.CAL_LCCAP_LSB_RATE0_7_0
#define reg_CAL_LCCAP_LSB_RATE1_7_0  AUTOSPEED2.BF.CAL_LCCAP_LSB_RATE1_7_0
#define reg_CAL_LCCAP_MSB_RATE0_7_0  AUTOSPEED2.BF.CAL_LCCAP_MSB_RATE0_7_0
#define reg_CAL_LCCAP_MSB_RATE1_7_0  AUTOSPEED2.BF.CAL_LCCAP_MSB_RATE1_7_0

// 0x000c	AUTOSPEED3		TBD
typedef union {
	struct {
		uint8_t CAL_PLLDCC_CNT_RATE0_7_0                 : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_PLLDCC_CNT_RATE1_7_0                 : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_PLLDCC_CNT_CONT_RATE0_7_0            : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_PLLDCC_CNT_CONT_RATE1_7_0            : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED3_t;
__xdata __at( 0xe00c ) volatile AUTOSPEED3_t AUTOSPEED3;
#define reg_CAL_PLLDCC_CNT_RATE0_7_0  AUTOSPEED3.BF.CAL_PLLDCC_CNT_RATE0_7_0
#define reg_CAL_PLLDCC_CNT_RATE1_7_0  AUTOSPEED3.BF.CAL_PLLDCC_CNT_RATE1_7_0
#define reg_CAL_PLLDCC_CNT_CONT_RATE0_7_0  AUTOSPEED3.BF.CAL_PLLDCC_CNT_CONT_RATE0_7_0
#define reg_CAL_PLLDCC_CNT_CONT_RATE1_7_0  AUTOSPEED3.BF.CAL_PLLDCC_CNT_CONT_RATE1_7_0

// 0x0010	AUTOSPEED4		TBD
typedef union {
	struct {
		uint8_t CAL_PLL_SPEED_RING_RATE0_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_RATE1_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_CONT_RATE0_7_0        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_CONT_RATE1_7_0        : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED4_t;
__xdata __at( 0xe010 ) volatile AUTOSPEED4_t AUTOSPEED4;
#define reg_CAL_PLL_SPEED_RING_RATE0_7_0  AUTOSPEED4.BF.CAL_PLL_SPEED_RING_RATE0_7_0
#define reg_CAL_PLL_SPEED_RING_RATE1_7_0  AUTOSPEED4.BF.CAL_PLL_SPEED_RING_RATE1_7_0
#define reg_CAL_PLL_SPEED_RING_CONT_RATE0_7_0  AUTOSPEED4.BF.CAL_PLL_SPEED_RING_CONT_RATE0_7_0
#define reg_CAL_PLL_SPEED_RING_CONT_RATE1_7_0  AUTOSPEED4.BF.CAL_PLL_SPEED_RING_CONT_RATE1_7_0

// 0x0014	AUTOSPEED5		TBD
typedef union {
	struct {
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_7_0   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_7_0 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED5_t;
__xdata __at( 0xe014 ) volatile AUTOSPEED5_t AUTOSPEED5;
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_7_0  AUTOSPEED5.BF.CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_7_0  AUTOSPEED5.BF.CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_7_0  AUTOSPEED5.BF.CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_7_0  AUTOSPEED5.BF.CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_7_0

// 0x0018	AUTOSPEED6		TBD
typedef union {
	struct {
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE0_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE0_15_8        : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE1_7_0         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE1_15_8        : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED6_t;
__xdata __at( 0xe018 ) volatile AUTOSPEED6_t AUTOSPEED6;
#define reg_CAL_SLLP_DAC_FINE_RING_RATE0_7_0  AUTOSPEED6.BF.CAL_SLLP_DAC_FINE_RING_RATE0_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_RATE0_15_8  AUTOSPEED6.BF.CAL_SLLP_DAC_FINE_RING_RATE0_15_8
#define reg_CAL_SLLP_DAC_FINE_RING_RATE1_7_0  AUTOSPEED6.BF.CAL_SLLP_DAC_FINE_RING_RATE1_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_RATE1_15_8  AUTOSPEED6.BF.CAL_SLLP_DAC_FINE_RING_RATE1_15_8

// 0x001c	AUTOSPEED7		TBD
typedef union {
	struct {
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE0_7_0    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE0_15_8   : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE1_7_0    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE1_15_8   : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED7_t;
__xdata __at( 0xe01c ) volatile AUTOSPEED7_t AUTOSPEED7;
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE0_7_0  AUTOSPEED7.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE0_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE0_15_8  AUTOSPEED7.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE0_15_8
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE1_7_0  AUTOSPEED7.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE1_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE1_15_8  AUTOSPEED7.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE1_15_8

#endif
