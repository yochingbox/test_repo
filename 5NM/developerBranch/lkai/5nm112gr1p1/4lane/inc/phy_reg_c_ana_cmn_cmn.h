#ifndef PHY_REG_C_ANA_CMN_CMN_H
#define PHY_REG_C_ANA_CMN_CMN_H



// 0x0	CMN_REG_1		
typedef union {
	struct {
		uint8_t EN_BG_NOTCH                              : 1;	/*      0     r/w 1'h1*/
		uint8_t EN_BG_CLK                                : 1;	/*      1     r/w 1'h1*/
		uint8_t EN_BG_CHOPPER_CLK                        : 1;	/*      2     r/w 1'h1*/
		uint8_t AVDD_SEL_CMN_2_0                         : 3;	/*  [5:3]     r/w 3'h7*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_1_t;
__xdata __at( 0x8000 ) volatile CMN_REG_1_t CMN_REG_1;
#define reg_EN_BG_NOTCH  CMN_REG_1.BF.EN_BG_NOTCH
#define reg_EN_BG_CLK  CMN_REG_1.BF.EN_BG_CLK
#define reg_EN_BG_CHOPPER_CLK  CMN_REG_1.BF.EN_BG_CHOPPER_CLK
#define reg_AVDD_SEL_CMN_2_0  CMN_REG_1.BF.AVDD_SEL_CMN_2_0

// 0x1	CMN_REG_2		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t BG_CHOPPER_EN                            : 1;	/*      2     r/w 1'h1*/
		uint8_t EN_BG_RIPC                               : 1;	/*      3     r/w 1'h1*/
		uint8_t VBG_SEL_3_0                              : 4;	/*  [7:4]     r/w 4'hC*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_2_t;
__xdata __at( 0x8004 ) volatile CMN_REG_2_t CMN_REG_2;
#define reg_BG_CHOPPER_EN  CMN_REG_2.BF.BG_CHOPPER_EN
#define reg_EN_BG_RIPC  CMN_REG_2.BF.EN_BG_RIPC
#define reg_VBG_SEL_3_0  CMN_REG_2.BF.VBG_SEL_3_0

// 0x2	CMN_REG_3		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t BG_RES_TRIM_SEL_4_0                      : 5;	/*  [7:3]     r/w 5'hD*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_3_t;
__xdata __at( 0x8008 ) volatile CMN_REG_3_t CMN_REG_3;
#define reg_BG_RES_TRIM_SEL_4_0  CMN_REG_3.BF.BG_RES_TRIM_SEL_4_0

// 0x3	CMN_REG_4		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t EN_CHGPUMP_HVOP                          : 1;	/*      1     r/w 1'h0*/
		uint8_t EN_CHGPUMP_CLP                           : 1;	/*      2     r/w 1'h1*/
		uint8_t EN_CHGPUMP_BGREF                         : 1;	/*      3     r/w 1'h1*/
		uint8_t EN_CHGPUMP2VDDRS                         : 1;	/*      4     r/w 1'h0*/
		uint8_t VREF_CHGPUMP_SEL_2_0                     : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_4_t;
__xdata __at( 0x800c ) volatile CMN_REG_4_t CMN_REG_4;
#define reg_EN_CHGPUMP_HVOP  CMN_REG_4.BF.EN_CHGPUMP_HVOP
#define reg_EN_CHGPUMP_CLP  CMN_REG_4.BF.EN_CHGPUMP_CLP
#define reg_EN_CHGPUMP_BGREF  CMN_REG_4.BF.EN_CHGPUMP_BGREF
#define reg_EN_CHGPUMP2VDDRS  CMN_REG_4.BF.EN_CHGPUMP2VDDRS
#define reg_VREF_CHGPUMP_SEL_2_0  CMN_REG_4.BF.VREF_CHGPUMP_SEL_2_0

// 0x4	CMN_REG_5		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t IOSC_CHGPUMP_SEL_3_0                     : 4;	/*  [4:1]     r/w 4'h7*/
		uint8_t IOP_CHGPUMP_SEL_2_0                      : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_5_t;
__xdata __at( 0x8010 ) volatile CMN_REG_5_t CMN_REG_5;
#define reg_IOSC_CHGPUMP_SEL_3_0  CMN_REG_5.BF.IOSC_CHGPUMP_SEL_3_0
#define reg_IOP_CHGPUMP_SEL_2_0  CMN_REG_5.BF.IOP_CHGPUMP_SEL_2_0

// 0x5	CMN_REG_6		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t BRCH_CHGPUMP_SEL_3_0                     : 4;	/*  [4:1]     r/w 4'hF*/
		uint8_t OSC_CHGPUMP_CTUNE_2_0                    : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_6_t;
__xdata __at( 0x8014 ) volatile CMN_REG_6_t CMN_REG_6;
#define reg_BRCH_CHGPUMP_SEL_3_0  CMN_REG_6.BF.BRCH_CHGPUMP_SEL_3_0
#define reg_OSC_CHGPUMP_CTUNE_2_0  CMN_REG_6.BF.OSC_CHGPUMP_CTUNE_2_0

// 0x6	CMN_REG_7		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t ANA_TMON_1_0                             : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t SEL_DIV_CLKANA                           : 1;	/*      4     r/w 1'h0*/
		uint8_t EN_ANA_TST                               : 1;	/*      5     r/w 1'h0*/
		uint8_t SEL_DIV_CLKBG_1_0                        : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_7_t;
__xdata __at( 0x8018 ) volatile CMN_REG_7_t CMN_REG_7;
#define reg_ANA_TMON_1_0  CMN_REG_7.BF.ANA_TMON_1_0
#define reg_SEL_DIV_CLKANA  CMN_REG_7.BF.SEL_DIV_CLKANA
#define reg_EN_ANA_TST  CMN_REG_7.BF.EN_ANA_TST
#define reg_SEL_DIV_CLKBG_1_0  CMN_REG_7.BF.SEL_DIV_CLKBG_1_0

// 0x7	CMN_REG_8		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t VREF_VDDA_CP_SEL_2_0                     : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_8_t;
__xdata __at( 0x801c ) volatile CMN_REG_8_t CMN_REG_8;
#define reg_VREF_VDDA_CP_SEL_2_0  CMN_REG_8.BF.VREF_VDDA_CP_SEL_2_0

// 0x8	CMN_REG_9		
typedef union {
	struct {
		uint8_t VREF_0P6V_VDDVCO_RXPLL_CH0_3_0           : 4;	/*  [3:0]     r/w 4'hC*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t AVDDR12_SEL                              : 1;	/*      5     r/w 1'h1*/
		uint8_t VDDR1P2_SEL_1_0                          : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_9_t;
__xdata __at( 0x8020 ) volatile CMN_REG_9_t CMN_REG_9;
#define reg_VREF_0P6V_VDDVCO_RXPLL_CH0_3_0  CMN_REG_9.BF.VREF_0P6V_VDDVCO_RXPLL_CH0_3_0
#define reg_AVDDR12_SEL  CMN_REG_9.BF.AVDDR12_SEL
#define reg_VDDR1P2_SEL_1_0  CMN_REG_9.BF.VDDR1P2_SEL_1_0

// 0x9	CMN_REG_10		
typedef union {
	struct {
		uint8_t VREF_0P6V_VDDVCO_RXPLL_CH1_3_0           : 4;	/*  [3:0]     r/w 4'hC*/
		uint8_t VREF_0P7V_SQ_SEL_1_0                     : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_10_t;
__xdata __at( 0x8024 ) volatile CMN_REG_10_t CMN_REG_10;
#define reg_VREF_0P6V_VDDVCO_RXPLL_CH1_3_0  CMN_REG_10.BF.VREF_0P6V_VDDVCO_RXPLL_CH1_3_0
#define reg_VREF_0P7V_SQ_SEL_1_0  CMN_REG_10.BF.VREF_0P7V_SQ_SEL_1_0

// 0xa	CMN_REG_11		
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH0_4_0                     : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t SELLV_CMP_V0P9V_2_0                      : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_11_t;
__xdata __at( 0x8028 ) volatile CMN_REG_11_t CMN_REG_11;
#define reg_SELLV_RXINTP_CH0_4_0  CMN_REG_11.BF.SELLV_RXINTP_CH0_4_0
#define reg_SELLV_CMP_V0P9V_2_0  CMN_REG_11.BF.SELLV_CMP_V0P9V_2_0

// 0xb	CMN_REG_12		
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH1_4_0                     : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_12_t;
__xdata __at( 0x802c ) volatile CMN_REG_12_t CMN_REG_12;
#define reg_SELLV_RXINTP_CH1_4_0  CMN_REG_12.BF.SELLV_RXINTP_CH1_4_0

// 0xc	CMN_REG_13		
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH2_4_0                     : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_13_t;
__xdata __at( 0x8030 ) volatile CMN_REG_13_t CMN_REG_13;
#define reg_SELLV_RXINTP_CH2_4_0  CMN_REG_13.BF.SELLV_RXINTP_CH2_4_0

// 0xd	CMN_REG_14		
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH3_4_0                     : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_14_t;
__xdata __at( 0x8034 ) volatile CMN_REG_14_t CMN_REG_14;
#define reg_SELLV_RXINTP_CH3_4_0  CMN_REG_14.BF.SELLV_RXINTP_CH3_4_0

// 0xe	CMN_REG_15		
typedef union {
	struct {
		uint8_t SELLV_RXDLL_CH0_4_0                      : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_15_t;
__xdata __at( 0x8038 ) volatile CMN_REG_15_t CMN_REG_15;
#define reg_SELLV_RXDLL_CH0_4_0  CMN_REG_15.BF.SELLV_RXDLL_CH0_4_0

// 0xf	CMN_REG_16		
typedef union {
	struct {
		uint8_t SELLV_RXDLL_CH1_4_0                      : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_16_t;
__xdata __at( 0x803c ) volatile CMN_REG_16_t CMN_REG_16;
#define reg_SELLV_RXDLL_CH1_4_0  CMN_REG_16.BF.SELLV_RXDLL_CH1_4_0

// 0x10	CMN_REG_17		
typedef union {
	struct {
		uint8_t SELLV_RXDLL_CH2_4_0                      : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_17_t;
__xdata __at( 0x8040 ) volatile CMN_REG_17_t CMN_REG_17;
#define reg_SELLV_RXDLL_CH2_4_0  CMN_REG_17.BF.SELLV_RXDLL_CH2_4_0

// 0x11	CMN_REG_18		
typedef union {
	struct {
		uint8_t SELLV_RXDLL_CH3_4_0                      : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_18_t;
__xdata __at( 0x8044 ) volatile CMN_REG_18_t CMN_REG_18;
#define reg_SELLV_RXDLL_CH3_4_0  CMN_REG_18.BF.SELLV_RXDLL_CH3_4_0

// 0x12	CMN_REG_19		
typedef union {
	struct {
		uint8_t SELLV_RX_A90_DATACLK_CH0_4_0             : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_19_t;
__xdata __at( 0x8048 ) volatile CMN_REG_19_t CMN_REG_19;
#define reg_SELLV_RX_A90_DATACLK_CH0_4_0  CMN_REG_19.BF.SELLV_RX_A90_DATACLK_CH0_4_0

// 0x13	CMN_REG_20		
typedef union {
	struct {
		uint8_t SELLV_RX_A90_DATACLK_CH1_4_0             : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_20_t;
__xdata __at( 0x804c ) volatile CMN_REG_20_t CMN_REG_20;
#define reg_SELLV_RX_A90_DATACLK_CH1_4_0  CMN_REG_20.BF.SELLV_RX_A90_DATACLK_CH1_4_0

// 0x14	CMN_REG_21		
typedef union {
	struct {
		uint8_t SELLV_RX_A90_DATACLK_CH2_4_0             : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_21_t;
__xdata __at( 0x8050 ) volatile CMN_REG_21_t CMN_REG_21;
#define reg_SELLV_RX_A90_DATACLK_CH2_4_0  CMN_REG_21.BF.SELLV_RX_A90_DATACLK_CH2_4_0

// 0x15	CMN_REG_22		
typedef union {
	struct {
		uint8_t SELLV_RX_A90_DATACLK_CH3_4_0             : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_22_t;
__xdata __at( 0x8054 ) volatile CMN_REG_22_t CMN_REG_22;
#define reg_SELLV_RX_A90_DATACLK_CH3_4_0  CMN_REG_22.BF.SELLV_RX_A90_DATACLK_CH3_4_0

// 0x16	CMN_REG_23		
typedef union {
	struct {
		uint8_t SELLV_RX_SKEW_EOMCLK_CH0_4_0             : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_23_t;
__xdata __at( 0x8058 ) volatile CMN_REG_23_t CMN_REG_23;
#define reg_SELLV_RX_SKEW_EOMCLK_CH0_4_0  CMN_REG_23.BF.SELLV_RX_SKEW_EOMCLK_CH0_4_0

// 0x17	CMN_REG_24		
typedef union {
	struct {
		uint8_t SELLV_RX_SKEW_EOMCLK_CH1_4_0             : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_24_t;
__xdata __at( 0x805c ) volatile CMN_REG_24_t CMN_REG_24;
#define reg_SELLV_RX_SKEW_EOMCLK_CH1_4_0  CMN_REG_24.BF.SELLV_RX_SKEW_EOMCLK_CH1_4_0

// 0x18	CMN_REG_25		
typedef union {
	struct {
		uint8_t SELLV_RX_SKEW_EOMCLK_CH2_4_0             : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_25_t;
__xdata __at( 0x8060 ) volatile CMN_REG_25_t CMN_REG_25;
#define reg_SELLV_RX_SKEW_EOMCLK_CH2_4_0  CMN_REG_25.BF.SELLV_RX_SKEW_EOMCLK_CH2_4_0

// 0x19	CMN_REG_26		
typedef union {
	struct {
		uint8_t SELLV_RX_SKEW_EOMCLK_CH3_4_0             : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_26_t;
__xdata __at( 0x8064 ) volatile CMN_REG_26_t CMN_REG_26;
#define reg_SELLV_RX_SKEW_EOMCLK_CH3_4_0  CMN_REG_26.BF.SELLV_RX_SKEW_EOMCLK_CH3_4_0

// 0x1a	CMN_REG_27		
typedef union {
	struct {
		uint8_t SELLV_RX_THCLK_SAMPLER_CH0_4_0           : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_27_t;
__xdata __at( 0x8068 ) volatile CMN_REG_27_t CMN_REG_27;
#define reg_SELLV_RX_THCLK_SAMPLER_CH0_4_0  CMN_REG_27.BF.SELLV_RX_THCLK_SAMPLER_CH0_4_0

// 0x1b	CMN_REG_28		
typedef union {
	struct {
		uint8_t SELLV_RX_THCLK_SAMPLER_CH1_4_0           : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_28_t;
__xdata __at( 0x806c ) volatile CMN_REG_28_t CMN_REG_28;
#define reg_SELLV_RX_THCLK_SAMPLER_CH1_4_0  CMN_REG_28.BF.SELLV_RX_THCLK_SAMPLER_CH1_4_0

// 0x1c	CMN_REG_29		
typedef union {
	struct {
		uint8_t SELLV_RX_THCLK_SAMPLER_CH2_4_0           : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_29_t;
__xdata __at( 0x8070 ) volatile CMN_REG_29_t CMN_REG_29;
#define reg_SELLV_RX_THCLK_SAMPLER_CH2_4_0  CMN_REG_29.BF.SELLV_RX_THCLK_SAMPLER_CH2_4_0

// 0x1d	CMN_REG_30		
typedef union {
	struct {
		uint8_t SELLV_RX_THCLK_SAMPLER_CH3_4_0           : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_30_t;
__xdata __at( 0x8074 ) volatile CMN_REG_30_t CMN_REG_30;
#define reg_SELLV_RX_THCLK_SAMPLER_CH3_4_0  CMN_REG_30.BF.SELLV_RX_THCLK_SAMPLER_CH3_4_0

// 0x1e	CMN_REG_31		
typedef union {
	struct {
		uint8_t SELLV_RX_THDRV_CH0_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_31_t;
__xdata __at( 0x8078 ) volatile CMN_REG_31_t CMN_REG_31;
#define reg_SELLV_RX_THDRV_CH0_4_0  CMN_REG_31.BF.SELLV_RX_THDRV_CH0_4_0

// 0x1f	CMN_REG_32		
typedef union {
	struct {
		uint8_t SELLV_RX_THDRV_CH1_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_32_t;
__xdata __at( 0x807c ) volatile CMN_REG_32_t CMN_REG_32;
#define reg_SELLV_RX_THDRV_CH1_4_0  CMN_REG_32.BF.SELLV_RX_THDRV_CH1_4_0

// 0x20	CMN_REG_33		
typedef union {
	struct {
		uint8_t SELLV_RX_THDRV_CH2_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_33_t;
__xdata __at( 0x8080 ) volatile CMN_REG_33_t CMN_REG_33;
#define reg_SELLV_RX_THDRV_CH2_4_0  CMN_REG_33.BF.SELLV_RX_THDRV_CH2_4_0

// 0x21	CMN_REG_34		
typedef union {
	struct {
		uint8_t SELLV_RX_THDRV_CH3_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_34_t;
__xdata __at( 0x8084 ) volatile CMN_REG_34_t CMN_REG_34;
#define reg_SELLV_RX_THDRV_CH3_4_0  CMN_REG_34.BF.SELLV_RX_THDRV_CH3_4_0

// 0x22	CMN_REG_35		
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH0_4_0                     : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_35_t;
__xdata __at( 0x8088 ) volatile CMN_REG_35_t CMN_REG_35;
#define reg_SELLV_TXDATA_CH0_4_0  CMN_REG_35.BF.SELLV_TXDATA_CH0_4_0

// 0x23	CMN_REG_36		
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH1_4_0                     : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_36_t;
__xdata __at( 0x808c ) volatile CMN_REG_36_t CMN_REG_36;
#define reg_SELLV_TXDATA_CH1_4_0  CMN_REG_36.BF.SELLV_TXDATA_CH1_4_0

// 0x24	CMN_REG_37		
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH2_4_0                     : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_37_t;
__xdata __at( 0x8090 ) volatile CMN_REG_37_t CMN_REG_37;
#define reg_SELLV_TXDATA_CH2_4_0  CMN_REG_37.BF.SELLV_TXDATA_CH2_4_0

// 0x25	CMN_REG_38		
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH3_4_0                     : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_38_t;
__xdata __at( 0x8094 ) volatile CMN_REG_38_t CMN_REG_38;
#define reg_SELLV_TXDATA_CH3_4_0  CMN_REG_38.BF.SELLV_TXDATA_CH3_4_0

// 0x26	CMN_REG_39		
typedef union {
	struct {
		uint8_t SELLV_TXLBDATA_CH0_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_39_t;
__xdata __at( 0x8098 ) volatile CMN_REG_39_t CMN_REG_39;
#define reg_SELLV_TXLBDATA_CH0_4_0  CMN_REG_39.BF.SELLV_TXLBDATA_CH0_4_0

// 0x27	CMN_REG_40		
typedef union {
	struct {
		uint8_t SELLV_TXLBDATA_CH1_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_40_t;
__xdata __at( 0x809c ) volatile CMN_REG_40_t CMN_REG_40;
#define reg_SELLV_TXLBDATA_CH1_4_0  CMN_REG_40.BF.SELLV_TXLBDATA_CH1_4_0

// 0x28	CMN_REG_41		
typedef union {
	struct {
		uint8_t SELLV_TXLBDATA_CH2_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_41_t;
__xdata __at( 0x80a0 ) volatile CMN_REG_41_t CMN_REG_41;
#define reg_SELLV_TXLBDATA_CH2_4_0  CMN_REG_41.BF.SELLV_TXLBDATA_CH2_4_0

// 0x29	CMN_REG_42		
typedef union {
	struct {
		uint8_t SELLV_TXLBDATA_CH3_4_0                   : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_42_t;
__xdata __at( 0x80a4 ) volatile CMN_REG_42_t CMN_REG_42;
#define reg_SELLV_TXLBDATA_CH3_4_0  CMN_REG_42.BF.SELLV_TXLBDATA_CH3_4_0

// 0x2a	CMN_REG_43		
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH0_4_0                      : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_43_t;
__xdata __at( 0x80a8 ) volatile CMN_REG_43_t CMN_REG_43;
#define reg_SELLV_TXCLK_CH0_4_0  CMN_REG_43.BF.SELLV_TXCLK_CH0_4_0

// 0x2b	CMN_REG_44		
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH1_4_0                      : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_44_t;
__xdata __at( 0x80ac ) volatile CMN_REG_44_t CMN_REG_44;
#define reg_SELLV_TXCLK_CH1_4_0  CMN_REG_44.BF.SELLV_TXCLK_CH1_4_0

// 0x2c	CMN_REG_45		
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH2_4_0                      : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_45_t;
__xdata __at( 0x80b0 ) volatile CMN_REG_45_t CMN_REG_45;
#define reg_SELLV_TXCLK_CH2_4_0  CMN_REG_45.BF.SELLV_TXCLK_CH2_4_0

// 0x2d	CMN_REG_46		
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH3_4_0                      : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_46_t;
__xdata __at( 0x80b4 ) volatile CMN_REG_46_t CMN_REG_46;
#define reg_SELLV_TXCLK_CH3_4_0  CMN_REG_46.BF.SELLV_TXCLK_CH3_4_0

// 0x2e	CMN_REG_47		
typedef union {
	struct {
		uint8_t VREF_0P6V_VDDVCO_RXPLL_CH3_3_0           : 4;	/*  [3:0]     r/w 4'hC*/
		uint8_t VREF_0P6V_VDDVCO_RXPLL_CH2_3_0           : 4;	/*  [7:4]     r/w 4'hC*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_47_t;
__xdata __at( 0x80b8 ) volatile CMN_REG_47_t CMN_REG_47;
#define reg_VREF_0P6V_VDDVCO_RXPLL_CH3_3_0  CMN_REG_47.BF.VREF_0P6V_VDDVCO_RXPLL_CH3_3_0
#define reg_VREF_0P6V_VDDVCO_RXPLL_CH2_3_0  CMN_REG_47.BF.VREF_0P6V_VDDVCO_RXPLL_CH2_3_0

// 0x2f	CMN_REG_48		
typedef union {
	struct {
		uint8_t VREF_0P6V_VDDVCO_TXPLL_CH1_3_0           : 4;	/*  [3:0]     r/w 4'hC*/
		uint8_t VREF_0P6V_VDDVCO_TXPLL_CH0_3_0           : 4;	/*  [7:4]     r/w 4'hC*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_48_t;
__xdata __at( 0x80bc ) volatile CMN_REG_48_t CMN_REG_48;
#define reg_VREF_0P6V_VDDVCO_TXPLL_CH1_3_0  CMN_REG_48.BF.VREF_0P6V_VDDVCO_TXPLL_CH1_3_0
#define reg_VREF_0P6V_VDDVCO_TXPLL_CH0_3_0  CMN_REG_48.BF.VREF_0P6V_VDDVCO_TXPLL_CH0_3_0

// 0x30	CMN_REG_49		
typedef union {
	struct {
		uint8_t IVREF_MASTREG_VOUT_SEL_1_0               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t IVREF_MASTREG_CUR_SEL_2_0                : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_49_t;
__xdata __at( 0x80c0 ) volatile CMN_REG_49_t CMN_REG_49;
#define reg_IVREF_MASTREG_VOUT_SEL_1_0  CMN_REG_49.BF.IVREF_MASTREG_VOUT_SEL_1_0
#define reg_IVREF_MASTREG_CUR_SEL_2_0  CMN_REG_49.BF.IVREF_MASTREG_CUR_SEL_2_0

// 0x31	CMN_REG_50		
typedef union {
	struct {
		uint8_t VREF_0P6V_VDDVCO_TXPLL_CH3_3_0           : 4;	/*  [3:0]     r/w 4'hC*/
		uint8_t VREF_0P6V_VDDVCO_TXPLL_CH2_3_0           : 4;	/*  [7:4]     r/w 4'hC*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_50_t;
__xdata __at( 0x80c4 ) volatile CMN_REG_50_t CMN_REG_50;
#define reg_VREF_0P6V_VDDVCO_TXPLL_CH3_3_0  CMN_REG_50.BF.VREF_0P6V_VDDVCO_TXPLL_CH3_3_0
#define reg_VREF_0P6V_VDDVCO_TXPLL_CH2_3_0  CMN_REG_50.BF.VREF_0P6V_VDDVCO_TXPLL_CH2_3_0

// 0x32	CMN_REG_51		
typedef union {
	struct {
		uint8_t SELLV_TXLBCLK_CH0_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_51_t;
__xdata __at( 0x80c8 ) volatile CMN_REG_51_t CMN_REG_51;
#define reg_SELLV_TXLBCLK_CH0_4_0  CMN_REG_51.BF.SELLV_TXLBCLK_CH0_4_0

// 0x33	CMN_REG_52		
typedef union {
	struct {
		uint8_t SELLV_TXLBCLK_CH1_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_52_t;
__xdata __at( 0x80cc ) volatile CMN_REG_52_t CMN_REG_52;
#define reg_SELLV_TXLBCLK_CH1_4_0  CMN_REG_52.BF.SELLV_TXLBCLK_CH1_4_0

// 0x34	CMN_REG_53		
typedef union {
	struct {
		uint8_t SELLV_TXLBCLK_CH2_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_53_t;
__xdata __at( 0x80d0 ) volatile CMN_REG_53_t CMN_REG_53;
#define reg_SELLV_TXLBCLK_CH2_4_0  CMN_REG_53.BF.SELLV_TXLBCLK_CH2_4_0

// 0x35	CMN_REG_54		
typedef union {
	struct {
		uint8_t SELLV_TXLBCLK_CH3_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_54_t;
__xdata __at( 0x80d4 ) volatile CMN_REG_54_t CMN_REG_54;
#define reg_SELLV_TXLBCLK_CH3_4_0  CMN_REG_54.BF.SELLV_TXLBCLK_CH3_4_0

// 0x36	CMN_REG_55		
typedef union {
	struct {
		uint8_t VREF_VDDACAL_PLL_CLK_SEL_3_0             : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t VREF_VDDACAL_PLL_PFD_SEL_3_0             : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_55_t;
__xdata __at( 0x80d8 ) volatile CMN_REG_55_t CMN_REG_55;
#define reg_VREF_VDDACAL_PLL_CLK_SEL_3_0  CMN_REG_55.BF.VREF_VDDACAL_PLL_CLK_SEL_3_0
#define reg_VREF_VDDACAL_PLL_PFD_SEL_3_0  CMN_REG_55.BF.VREF_VDDACAL_PLL_PFD_SEL_3_0

// 0x37	CMN_REG_56		
typedef union {
	struct {
		uint8_t SELLV_RX_CLKTOPVDDL_CH0_4_0              : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_56_t;
__xdata __at( 0x80dc ) volatile CMN_REG_56_t CMN_REG_56;
#define reg_SELLV_RX_CLKTOPVDDL_CH0_4_0  CMN_REG_56.BF.SELLV_RX_CLKTOPVDDL_CH0_4_0

// 0x38	CMN_REG_57		
typedef union {
	struct {
		uint8_t SELLV_RX_CLKTOPVDDL_CH1_4_0              : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_57_t;
__xdata __at( 0x80e0 ) volatile CMN_REG_57_t CMN_REG_57;
#define reg_SELLV_RX_CLKTOPVDDL_CH1_4_0  CMN_REG_57.BF.SELLV_RX_CLKTOPVDDL_CH1_4_0

// 0x39	CMN_REG_58		
typedef union {
	struct {
		uint8_t SELLV_RX_CLKTOPVDDL_CH2_4_0              : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_58_t;
__xdata __at( 0x80e4 ) volatile CMN_REG_58_t CMN_REG_58;
#define reg_SELLV_RX_CLKTOPVDDL_CH2_4_0  CMN_REG_58.BF.SELLV_RX_CLKTOPVDDL_CH2_4_0

// 0x3a	CMN_REG_59		
typedef union {
	struct {
		uint8_t SELLV_RX_CLKTOPVDDL_CH3_4_0              : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_59_t;
__xdata __at( 0x80e8 ) volatile CMN_REG_59_t CMN_REG_59;
#define reg_SELLV_RX_CLKTOPVDDL_CH3_4_0  CMN_REG_59.BF.SELLV_RX_CLKTOPVDDL_CH3_4_0

// 0x3b	CMN_REG_60		
typedef union {
	struct {
		uint8_t SELLV_RX_INTPEOM_DLLEOM_CH0_4_0          : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_60_t;
__xdata __at( 0x80ec ) volatile CMN_REG_60_t CMN_REG_60;
#define reg_SELLV_RX_INTPEOM_DLLEOM_CH0_4_0  CMN_REG_60.BF.SELLV_RX_INTPEOM_DLLEOM_CH0_4_0

// 0x3c	CMN_REG_61		
typedef union {
	struct {
		uint8_t SELLV_RX_INTPEOM_DLLEOM_CH1_4_0          : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_61_t;
__xdata __at( 0x80f0 ) volatile CMN_REG_61_t CMN_REG_61;
#define reg_SELLV_RX_INTPEOM_DLLEOM_CH1_4_0  CMN_REG_61.BF.SELLV_RX_INTPEOM_DLLEOM_CH1_4_0

// 0x3d	CMN_REG_62		
typedef union {
	struct {
		uint8_t SELLV_RX_INTPEOM_DLLEOM_CH2_4_0          : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_62_t;
__xdata __at( 0x80f4 ) volatile CMN_REG_62_t CMN_REG_62;
#define reg_SELLV_RX_INTPEOM_DLLEOM_CH2_4_0  CMN_REG_62.BF.SELLV_RX_INTPEOM_DLLEOM_CH2_4_0

// 0x3e	CMN_REG_63		
typedef union {
	struct {
		uint8_t SELLV_RX_INTPEOM_DLLEOM_CH3_4_0          : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_63_t;
__xdata __at( 0x80f8 ) volatile CMN_REG_63_t CMN_REG_63;
#define reg_SELLV_RX_INTPEOM_DLLEOM_CH3_4_0  CMN_REG_63.BF.SELLV_RX_INTPEOM_DLLEOM_CH3_4_0

// 0x3f	CMN_REG_64		
typedef union {
	struct {
		uint8_t SELLV_RX_DIV2_CH0_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_64_t;
__xdata __at( 0x80fc ) volatile CMN_REG_64_t CMN_REG_64;
#define reg_SELLV_RX_DIV2_CH0_4_0  CMN_REG_64.BF.SELLV_RX_DIV2_CH0_4_0

// 0x40	CMN_REG_65		
typedef union {
	struct {
		uint8_t SELLV_RX_DIV2_CH1_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_65_t;
__xdata __at( 0x8100 ) volatile CMN_REG_65_t CMN_REG_65;
#define reg_SELLV_RX_DIV2_CH1_4_0  CMN_REG_65.BF.SELLV_RX_DIV2_CH1_4_0

// 0x41	CMN_REG_66		
typedef union {
	struct {
		uint8_t SELLV_RX_DIV2_CH2_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_66_t;
__xdata __at( 0x8104 ) volatile CMN_REG_66_t CMN_REG_66;
#define reg_SELLV_RX_DIV2_CH2_4_0  CMN_REG_66.BF.SELLV_RX_DIV2_CH2_4_0

// 0x42	CMN_REG_67		
typedef union {
	struct {
		uint8_t SELLV_RX_DIV2_CH3_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_67_t;
__xdata __at( 0x8108 ) volatile CMN_REG_67_t CMN_REG_67;
#define reg_SELLV_RX_DIV2_CH3_4_0  CMN_REG_67.BF.SELLV_RX_DIV2_CH3_4_0

// 0x43	CMN_REG_68		
typedef union {
	struct {
		uint8_t SELLV_RX_CTLE_CH0_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_68_t;
__xdata __at( 0x810c ) volatile CMN_REG_68_t CMN_REG_68;
#define reg_SELLV_RX_CTLE_CH0_4_0  CMN_REG_68.BF.SELLV_RX_CTLE_CH0_4_0

// 0x44	CMN_REG_69		
typedef union {
	struct {
		uint8_t SELLV_RX_CTLE_CH1_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_69_t;
__xdata __at( 0x8110 ) volatile CMN_REG_69_t CMN_REG_69;
#define reg_SELLV_RX_CTLE_CH1_4_0  CMN_REG_69.BF.SELLV_RX_CTLE_CH1_4_0

// 0x45	CMN_REG_70		
typedef union {
	struct {
		uint8_t SELLV_RX_CTLE_CH2_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_70_t;
__xdata __at( 0x8114 ) volatile CMN_REG_70_t CMN_REG_70;
#define reg_SELLV_RX_CTLE_CH2_4_0  CMN_REG_70.BF.SELLV_RX_CTLE_CH2_4_0

// 0x46	CMN_REG_71		
typedef union {
	struct {
		uint8_t SELLV_RX_CTLE_CH3_4_0                    : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_71_t;
__xdata __at( 0x8118 ) volatile CMN_REG_71_t CMN_REG_71;
#define reg_SELLV_RX_CTLE_CH3_4_0  CMN_REG_71.BF.SELLV_RX_CTLE_CH3_4_0

// 0x47	CMN_REG_72		
typedef union {
	struct {
		uint8_t VREF_VDDACAL_SEL_3_0                     : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t VREF_VDDADLL_HALF_SEL_3_0                : 4;	/*  [7:4]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_72_t;
__xdata __at( 0x811c ) volatile CMN_REG_72_t CMN_REG_72;
#define reg_VREF_VDDACAL_SEL_3_0  CMN_REG_72.BF.VREF_VDDACAL_SEL_3_0
#define reg_VREF_VDDADLL_HALF_SEL_3_0  CMN_REG_72.BF.VREF_VDDADLL_HALF_SEL_3_0

// 0x48	CMN_REG_73		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t VREF_TRX_0P6V_SEL_2_0                    : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_73_t;
__xdata __at( 0x8120 ) volatile CMN_REG_73_t CMN_REG_73;
#define reg_VREF_TRX_0P6V_SEL_2_0  CMN_REG_73.BF.VREF_TRX_0P6V_SEL_2_0

// 0x49	CMN_REG_74		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_74_t;
__xdata __at( 0x8124 ) volatile CMN_REG_74_t CMN_REG_74;

// 0x4a	CMN_REG_75		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t REG_TXRX_CORE_BL_EN12                    : 1;	/*      2     r/w 1'h0*/
		uint8_t VREF_SAMPLER_VCM_SEL_2_0                 : 3;	/*  [5:3]     r/w 3'h2*/
		uint8_t VREF_0P85V_SEL_1_0                       : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_75_t;
__xdata __at( 0x8128 ) volatile CMN_REG_75_t CMN_REG_75;
#define reg_REG_TXRX_CORE_BL_EN12  CMN_REG_75.BF.REG_TXRX_CORE_BL_EN12
#define reg_VREF_SAMPLER_VCM_SEL_2_0  CMN_REG_75.BF.VREF_SAMPLER_VCM_SEL_2_0
#define reg_VREF_0P85V_SEL_1_0  CMN_REG_75.BF.VREF_0P85V_SEL_1_0

// 0x4b	CMN_REG_76		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t TSEN_ADC_OSR_1_0                         : 2;	/*  [2:1]     r/w 2'h3*/
		uint8_t TSEN_ADC_MODE_1_0                        : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w 1'h0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_76_t;
__xdata __at( 0x812c ) volatile CMN_REG_76_t CMN_REG_76;
#define reg_TSEN_ADC_OSR_1_0  CMN_REG_76.BF.TSEN_ADC_OSR_1_0
#define reg_TSEN_ADC_MODE_1_0  CMN_REG_76.BF.TSEN_ADC_MODE_1_0

// 0x4c	CMN_REG_77		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t BG_TRIM_3_0                              : 4;	/*  [5:2]     r/w 4'h8*/
		uint8_t TSEN_ADC_CHOP_EN_1_0                     : 2;	/*  [7:6]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_77_t;
__xdata __at( 0x8130 ) volatile CMN_REG_77_t CMN_REG_77;
#define reg_BG_TRIM_3_0  CMN_REG_77.BF.BG_TRIM_3_0
#define reg_TSEN_ADC_CHOP_EN_1_0  CMN_REG_77.BF.TSEN_ADC_CHOP_EN_1_0

// 0x4d	CMN_REG_78		
typedef union {
	struct {
		uint8_t CAPSWP_EN                                : 1;	/*      0     r/w 1'h1*/
		uint8_t BG_RPC_EN                                : 1;	/*      1     r/w 1'h1*/
		uint8_t TSEN_ADC_CAL_1_0                         : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t TSEN_ADC_AVG_BYPASS                      : 1;	/*      4     r/w 1'h0*/
		uint8_t TSEN_ADC_ATEST_2_0                       : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_78_t;
__xdata __at( 0x8134 ) volatile CMN_REG_78_t CMN_REG_78;
#define reg_CAPSWP_EN  CMN_REG_78.BF.CAPSWP_EN
#define reg_BG_RPC_EN  CMN_REG_78.BF.BG_RPC_EN
#define reg_TSEN_ADC_CAL_1_0  CMN_REG_78.BF.TSEN_ADC_CAL_1_0
#define reg_TSEN_ADC_AVG_BYPASS  CMN_REG_78.BF.TSEN_ADC_AVG_BYPASS
#define reg_TSEN_ADC_ATEST_2_0  CMN_REG_78.BF.TSEN_ADC_ATEST_2_0

// 0x4e	CMN_REG_79		
typedef union {
	struct {
		uint8_t TSEN_ADC_RAW_SEL_1_0                     : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t TSEN_DEM_EN                              : 1;	/*      2     r/w 1'h1*/
		uint8_t TSEN_BIAS                                : 1;	/*      3     r/w 1'h0*/
		uint8_t TSEN_ADC_CHOP_SEL_1_0                    : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t ADC_CH_SEL_1_0                           : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_79_t;
__xdata __at( 0x8138 ) volatile CMN_REG_79_t CMN_REG_79;
#define reg_TSEN_ADC_RAW_SEL_1_0  CMN_REG_79.BF.TSEN_ADC_RAW_SEL_1_0
#define reg_TSEN_DEM_EN  CMN_REG_79.BF.TSEN_DEM_EN
#define reg_TSEN_BIAS  CMN_REG_79.BF.TSEN_BIAS
#define reg_TSEN_ADC_CHOP_SEL_1_0  CMN_REG_79.BF.TSEN_ADC_CHOP_SEL_1_0
#define reg_ADC_CH_SEL_1_0  CMN_REG_79.BF.ADC_CH_SEL_1_0

// 0x4f	CMN_REG_80		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t TSEN_CH_SEL_2_0                          : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_80_t;
__xdata __at( 0x813c ) volatile CMN_REG_80_t CMN_REG_80;
#define reg_TSEN_CH_SEL_2_0  CMN_REG_80.BF.TSEN_CH_SEL_2_0

// 0x50	CMN_REG_81		
typedef union {
	struct {
		uint8_t TEST_7_0                                 : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_81_t;
__xdata __at( 0x8140 ) volatile CMN_REG_81_t CMN_REG_81;
#define reg_TEST_7_0  CMN_REG_81.BF.TEST_7_0

// 0x51	CMN_REG_82		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t TP_EN                                    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_82_t;
__xdata __at( 0x8144 ) volatile CMN_REG_82_t CMN_REG_82;
#define reg_TP_EN  CMN_REG_82.BF.TP_EN

// 0x52	CMN_REG_83		
typedef union {
	struct {
		uint8_t TSEN_ADC_RSVD_15_8                       : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_83_t;
__xdata __at( 0x8148 ) volatile CMN_REG_83_t CMN_REG_83;
#define reg_TSEN_ADC_RSVD_15_8  CMN_REG_83.BF.TSEN_ADC_RSVD_15_8

// 0x53	CMN_REG_84		
typedef union {
	struct {
		uint8_t TSEN_ADC_RSVD_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_84_t;
__xdata __at( 0x814c ) volatile CMN_REG_84_t CMN_REG_84;
#define reg_TSEN_ADC_RSVD_7_0  CMN_REG_84.BF.TSEN_ADC_RSVD_7_0

// 0x54	CMN_REG_85		
typedef union {
	struct {
		uint8_t PCM_CTRL_4_0                             : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t VREF_PROCESSMON_SEL_2_0                  : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_85_t;
__xdata __at( 0x8150 ) volatile CMN_REG_85_t CMN_REG_85;
#define reg_PCM_CTRL_4_0  CMN_REG_85.BF.PCM_CTRL_4_0
#define reg_VREF_PROCESSMON_SEL_2_0  CMN_REG_85.BF.VREF_PROCESSMON_SEL_2_0

// 0x55	CMN_REG_86		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t DRO_EN                                   : 1;	/*      2     r/w 1'h1*/
		uint8_t DRO_SEL_3_0                              : 4;	/*  [6:3]     r/w 4'h1*/
		uint8_t PCM_EN                                   : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_86_t;
__xdata __at( 0x8154 ) volatile CMN_REG_86_t CMN_REG_86;
#define reg_DRO_EN  CMN_REG_86.BF.DRO_EN
#define reg_DRO_SEL_3_0  CMN_REG_86.BF.DRO_SEL_3_0
#define reg_PCM_EN  CMN_REG_86.BF.PCM_EN

// 0x56	CMN_REG_87		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t PCM_SEL_VREF_2_0                         : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_87_t;
__xdata __at( 0x8158 ) volatile CMN_REG_87_t CMN_REG_87;
#define reg_PCM_SEL_VREF_2_0  CMN_REG_87.BF.PCM_SEL_VREF_2_0

// 0x57	CMN_REG_88		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t PULLUP_RXTX_SEL_1_0                      : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t SHRTR                                    : 1;	/*      6     r/w 1'h1*/
		uint8_t PULUP                                    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_88_t;
__xdata __at( 0x815c ) volatile CMN_REG_88_t CMN_REG_88;
#define reg_PULLUP_RXTX_SEL_1_0  CMN_REG_88.BF.PULLUP_RXTX_SEL_1_0
#define reg_SHRTR  CMN_REG_88.BF.SHRTR
#define reg_PULUP  CMN_REG_88.BF.PULUP

// 0x58	CMN_REG_89		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t TXIMPCAL_DRVAMP_3_0                      : 4;	/*  [4:1]     r/w 4'h4*/
		uint8_t TXIMPCAL_EN                              : 1;	/*      5     r/w 1'h0*/
		uint8_t RXIMPCAL_EN                              : 1;	/*      6     r/w 1'h0*/
		uint8_t SHRTR_FORCE                              : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_89_t;
__xdata __at( 0x8160 ) volatile CMN_REG_89_t CMN_REG_89;
#define reg_TXIMPCAL_DRVAMP_3_0  CMN_REG_89.BF.TXIMPCAL_DRVAMP_3_0
#define reg_TXIMPCAL_EN  CMN_REG_89.BF.TXIMPCAL_EN
#define reg_RXIMPCAL_EN  CMN_REG_89.BF.RXIMPCAL_EN
#define reg_SHRTR_FORCE  CMN_REG_89.BF.SHRTR_FORCE

// 0x59	CMN_REG_90		
typedef union {
	struct {
		uint8_t VDDACAL_COMP_EN                          : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 3;	/*  [3:1]     r/w 3'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_90_t;
__xdata __at( 0x8164 ) volatile CMN_REG_90_t CMN_REG_90;
#define reg_VDDACAL_COMP_EN  CMN_REG_90.BF.VDDACAL_COMP_EN

// 0x5a	CMN_REG_91		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t VTH_RXIMPCAL_3_0                         : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_91_t;
__xdata __at( 0x8168 ) volatile CMN_REG_91_t CMN_REG_91;
#define reg_VTH_RXIMPCAL_3_0  CMN_REG_91.BF.VTH_RXIMPCAL_3_0

// 0x5b	CMN_REG_92		
typedef union {
	struct {
		uint8_t CMN_DIG_TESTBUS_SEL_3_0                  : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t CMN_DIG_CAL_CLK_RST                      : 1;	/*      6     r/w 1'h0*/
		uint8_t CMN_DIG_CAL_CLK_EN                       : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_92_t;
__xdata __at( 0x816c ) volatile CMN_REG_92_t CMN_REG_92;
#define reg_CMN_DIG_TESTBUS_SEL_3_0  CMN_REG_92.BF.CMN_DIG_TESTBUS_SEL_3_0
#define reg_CMN_DIG_CAL_CLK_RST  CMN_REG_92.BF.CMN_DIG_CAL_CLK_RST
#define reg_CMN_DIG_CAL_CLK_EN  CMN_REG_92.BF.CMN_DIG_CAL_CLK_EN

// 0x5c	CMN_REG_93		
typedef union {
	struct {
		uint8_t CMN_DIG_CAL2M_DIV_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_93_t;
__xdata __at( 0x8170 ) volatile CMN_REG_93_t CMN_REG_93;
#define reg_CMN_DIG_CAL2M_DIV_7_0  CMN_REG_93.BF.CMN_DIG_CAL2M_DIV_7_0

// 0x5d	CMN_REG_94		
typedef union {
	struct {
		uint8_t VDD_CAL_EN_TRX0                          : 1;	/*      0     r/w 1'h0*/
		uint8_t VDD_CAL_EN_TRX1                          : 1;	/*      1     r/w 1'h0*/
		uint8_t VDD_CAL_EN_TRX2                          : 1;	/*      2     r/w 1'h0*/
		uint8_t VDD_CAL_EN_TRX3                          : 1;	/*      3     r/w 1'h0*/
		uint8_t VDD_CAL_SEL_3_0                          : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_94_t;
__xdata __at( 0x8174 ) volatile CMN_REG_94_t CMN_REG_94;
#define reg_VDD_CAL_EN_TRX0  CMN_REG_94.BF.VDD_CAL_EN_TRX0
#define reg_VDD_CAL_EN_TRX1  CMN_REG_94.BF.VDD_CAL_EN_TRX1
#define reg_VDD_CAL_EN_TRX2  CMN_REG_94.BF.VDD_CAL_EN_TRX2
#define reg_VDD_CAL_EN_TRX3  CMN_REG_94.BF.VDD_CAL_EN_TRX3
#define reg_VDD_CAL_SEL_3_0  CMN_REG_94.BF.VDD_CAL_SEL_3_0

// 0x5e	CMN_REG_95		
typedef union {
	struct {
		uint8_t ANA_RSVDA_7_0                            : 8;	/*  [7:0]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_95_t;
__xdata __at( 0x8178 ) volatile CMN_REG_95_t CMN_REG_95;
#define reg_ANA_RSVDA_7_0  CMN_REG_95.BF.ANA_RSVDA_7_0

// 0x5f	CMN_REG_96		
typedef union {
	struct {
		uint8_t ANA_RSVDB_7_0                            : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_96_t;
__xdata __at( 0x817c ) volatile CMN_REG_96_t CMN_REG_96;
#define reg_ANA_RSVDB_7_0  CMN_REG_96.BF.ANA_RSVDB_7_0

// 0x60	CMN_REG_97		
typedef union {
	struct {
		uint8_t ANA_RSVDC_7_0                            : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_97_t;
__xdata __at( 0x8180 ) volatile CMN_REG_97_t CMN_REG_97;
#define reg_ANA_RSVDC_7_0  CMN_REG_97.BF.ANA_RSVDC_7_0

// 0x61	CMN_REG_98		
typedef union {
	struct {
		uint8_t ANA_RSVDD_7_0                            : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_98_t;
__xdata __at( 0x8184 ) volatile CMN_REG_98_t CMN_REG_98;
#define reg_ANA_RSVDD_7_0  CMN_REG_98.BF.ANA_RSVDD_7_0

// 0x62	CMN_REG_99		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_99_t;
__xdata __at( 0x8188 ) volatile CMN_REG_99_t CMN_REG_99;

// 0x63	CMN_REG_100		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RX_ADC_VREF_0P5V_SEL_1_0                 : 2;	/*  [4:3]     r/w 2'h2*/
		uint8_t SEL_AVDD_0P9V                            : 1;	/*      5     r/w 1'h0*/
		uint8_t IPP_ADJ_1_0                              : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_100_t;
__xdata __at( 0x818c ) volatile CMN_REG_100_t CMN_REG_100;
#define reg_RX_ADC_VREF_0P5V_SEL_1_0  CMN_REG_100.BF.RX_ADC_VREF_0P5V_SEL_1_0
#define reg_SEL_AVDD_0P9V  CMN_REG_100.BF.SEL_AVDD_0P9V
#define reg_IPP_ADJ_1_0  CMN_REG_100.BF.IPP_ADJ_1_0

// 0x64	CMN_REG_101		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_101_t;
__xdata __at( 0x8190 ) volatile CMN_REG_101_t CMN_REG_101;

// 0x65	CMN_REG_102		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w 6'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_102_t;
__xdata __at( 0x8194 ) volatile CMN_REG_102_t CMN_REG_102;

// 0x66	CMN_REG_103		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t TXIMPCAL_ICCPMOS_CHOP                    : 1;	/*      1     r/w 1'h0*/
		uint8_t TXIMPCAL_ICCPMOS_EN                      : 1;	/*      2     r/w 1'h0*/
		uint8_t VTH_TXIMPCAL_2_0                         : 3;	/*  [5:3]     r/w 3'h4*/
		uint8_t RESERV_RES                               : 1;	/*      6     r/w 1'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_103_t;
__xdata __at( 0x8198 ) volatile CMN_REG_103_t CMN_REG_103;
#define reg_TXIMPCAL_ICCPMOS_CHOP  CMN_REG_103.BF.TXIMPCAL_ICCPMOS_CHOP
#define reg_TXIMPCAL_ICCPMOS_EN  CMN_REG_103.BF.TXIMPCAL_ICCPMOS_EN
#define reg_VTH_TXIMPCAL_2_0  CMN_REG_103.BF.VTH_TXIMPCAL_2_0
#define reg_RESERV_RES  CMN_REG_103.BF.RESERV_RES

// 0x67	CMN_REG_104		
typedef union {
	struct {
		uint8_t CMN_DIG_SCAN_FF_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_104_t;
__xdata __at( 0x819c ) volatile CMN_REG_104_t CMN_REG_104;
#define reg_CMN_DIG_SCAN_FF_7_0  CMN_REG_104.BF.CMN_DIG_SCAN_FF_7_0

#endif
