#ifndef PHY_REG_C_ANA_CMN_CMN_H
#define PHY_REG_C_ANA_CMN_CMN_H



// 0x0	CMN_REG_1		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t BG_CHOPPER_EN                            : 1;	/*      1     r/w   1*/
		uint8_t BG_DIV_SEL_1_0                           : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t BG_CLKBYPASS_EN                          : 1;	/*      4     r/w   0*/
		uint8_t BG_CLKEN                                 : 1;	/*      5     r/w   1*/
		uint8_t BG_RING_SPEED_1_0                        : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_1_t;
__xdata __at( 0x8000 ) volatile CMN_REG_1_t CMN_REG_1;
#define reg_BG_CHOPPER_EN  CMN_REG_1.BF.BG_CHOPPER_EN
#define reg_BG_DIV_SEL_1_0  CMN_REG_1.BF.BG_DIV_SEL_1_0
#define reg_BG_CLKBYPASS_EN  CMN_REG_1.BF.BG_CLKBYPASS_EN
#define reg_BG_CLKEN  CMN_REG_1.BF.BG_CLKEN
#define reg_BG_RING_SPEED_1_0  CMN_REG_1.BF.BG_RING_SPEED_1_0

// 0x1	CMN_REG_2		
typedef union {
	struct {
		uint8_t VREF_PROCESSMON_SEL_2_0                  : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t BG_VBG_SEL_1_0                           : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t BG_RES_TRIM_SEL_2_0                      : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_2_t;
__xdata __at( 0x8004 ) volatile CMN_REG_2_t CMN_REG_2;
#define reg_VREF_PROCESSMON_SEL_2_0  CMN_REG_2.BF.VREF_PROCESSMON_SEL_2_0
#define reg_BG_VBG_SEL_1_0  CMN_REG_2.BF.BG_VBG_SEL_1_0
#define reg_BG_RES_TRIM_SEL_2_0  CMN_REG_2.BF.BG_RES_TRIM_SEL_2_0

// 0x2	CMN_REG_3		
typedef union {
	struct {
		uint8_t REG_CP_BRCH_SEL_1_0                      : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t REGDVDD_STDBY_SEL                        : 1;	/*      2     r/w   1*/
		uint8_t VREF_VDDA_CP_SEL_2_0                     : 3;	/*  [5:3]     r/w 3'h3*/
		uint8_t REG_RING_I_1_0                           : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_3_t;
__xdata __at( 0x8008 ) volatile CMN_REG_3_t CMN_REG_3;
#define reg_REG_CP_BRCH_SEL_1_0  CMN_REG_3.BF.REG_CP_BRCH_SEL_1_0
#define reg_REGDVDD_STDBY_SEL  CMN_REG_3.BF.REGDVDD_STDBY_SEL
#define reg_VREF_VDDA_CP_SEL_2_0  CMN_REG_3.BF.VREF_VDDA_CP_SEL_2_0
#define reg_REG_RING_I_1_0  CMN_REG_3.BF.REG_RING_I_1_0

// 0x3	CMN_REG_4		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t VREF_0P48V_VDDVCO_SEL_1_0                : 2;	/*  [4:3]     r/w 2'h2*/
		uint8_t AVDDR12_SEL                              : 1;	/*      5     r/w   1*/
		uint8_t VDDR1P2_SEL_1_0                          : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_4_t;
__xdata __at( 0x800c ) volatile CMN_REG_4_t CMN_REG_4;
#define reg_VREF_0P48V_VDDVCO_SEL_1_0  CMN_REG_4.BF.VREF_0P48V_VDDVCO_SEL_1_0
#define reg_AVDDR12_SEL  CMN_REG_4.BF.AVDDR12_SEL
#define reg_VDDR1P2_SEL_1_0  CMN_REG_4.BF.VDDR1P2_SEL_1_0

// 0x4	CMN_REG_5		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t ISEL_VGMASTER_RXTX_BUF                   : 1;	/*      2     r/w 1'h1*/
		uint8_t VREF_0P7V_SQ_SEL_1_0                     : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t VTHVCOCAL_2_0                            : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_5_t;
__xdata __at( 0x8010 ) volatile CMN_REG_5_t CMN_REG_5;
#define reg_ISEL_VGMASTER_RXTX_BUF  CMN_REG_5.BF.ISEL_VGMASTER_RXTX_BUF
#define reg_VREF_0P7V_SQ_SEL_1_0  CMN_REG_5.BF.VREF_0P7V_SQ_SEL_1_0
#define reg_VTHVCOCAL_2_0  CMN_REG_5.BF.VTHVCOCAL_2_0

// 0x5	CMN_REG_6		
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH1_3_0                     : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t SELLV_RXINTP_CH0_3_0                     : 4;	/*  [7:4]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_6_t;
__xdata __at( 0x8014 ) volatile CMN_REG_6_t CMN_REG_6;
#define reg_SELLV_RXINTP_CH1_3_0  CMN_REG_6.BF.SELLV_RXINTP_CH1_3_0
#define reg_SELLV_RXINTP_CH0_3_0  CMN_REG_6.BF.SELLV_RXINTP_CH0_3_0

// 0x6	CMN_REG_7		
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH3_3_0                     : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t SELLV_RXINTP_CH2_3_0                     : 4;	/*  [7:4]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_7_t;
__xdata __at( 0x8018 ) volatile CMN_REG_7_t CMN_REG_7;
#define reg_SELLV_RXINTP_CH3_3_0  CMN_REG_7.BF.SELLV_RXINTP_CH3_3_0
#define reg_SELLV_RXINTP_CH2_3_0  CMN_REG_7.BF.SELLV_RXINTP_CH2_3_0

// 0x7	CMN_REG_8		
typedef union {
	struct {
		uint8_t SELLV_RXDATACLK_CH1_3_0                  : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t SELLV_RXDATACLK_CH0_3_0                  : 4;	/*  [7:4]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_8_t;
__xdata __at( 0x801c ) volatile CMN_REG_8_t CMN_REG_8;
#define reg_SELLV_RXDATACLK_CH1_3_0  CMN_REG_8.BF.SELLV_RXDATACLK_CH1_3_0
#define reg_SELLV_RXDATACLK_CH0_3_0  CMN_REG_8.BF.SELLV_RXDATACLK_CH0_3_0

// 0x8	CMN_REG_9		
typedef union {
	struct {
		uint8_t SELLV_RXDATACLK_CH3_3_0                  : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t SELLV_RXDATACLK_CH2_3_0                  : 4;	/*  [7:4]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_9_t;
__xdata __at( 0x8020 ) volatile CMN_REG_9_t CMN_REG_9;
#define reg_SELLV_RXDATACLK_CH3_3_0  CMN_REG_9.BF.SELLV_RXDATACLK_CH3_3_0
#define reg_SELLV_RXDATACLK_CH2_3_0  CMN_REG_9.BF.SELLV_RXDATACLK_CH2_3_0

// 0x9	CMN_REG_10		
typedef union {
	struct {
		uint8_t SELLV_RXEOMCLK_CH1_3_0                   : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t SELLV_RXEOMCLK_CH0_3_0                   : 4;	/*  [7:4]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_10_t;
__xdata __at( 0x8024 ) volatile CMN_REG_10_t CMN_REG_10;
#define reg_SELLV_RXEOMCLK_CH1_3_0  CMN_REG_10.BF.SELLV_RXEOMCLK_CH1_3_0
#define reg_SELLV_RXEOMCLK_CH0_3_0  CMN_REG_10.BF.SELLV_RXEOMCLK_CH0_3_0

// 0xa	CMN_REG_11		
typedef union {
	struct {
		uint8_t SELLV_RXEOMCLK_CH3_3_0                   : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t SELLV_RXEOMCLK_CH2_3_0                   : 4;	/*  [7:4]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_11_t;
__xdata __at( 0x8028 ) volatile CMN_REG_11_t CMN_REG_11;
#define reg_SELLV_RXEOMCLK_CH3_3_0  CMN_REG_11.BF.SELLV_RXEOMCLK_CH3_3_0
#define reg_SELLV_RXEOMCLK_CH2_3_0  CMN_REG_11.BF.SELLV_RXEOMCLK_CH2_3_0

// 0xb	CMN_REG_12		
typedef union {
	struct {
		uint8_t SELLV_RXSAMPELR_CH1_3_0                  : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t SELLV_RXSAMPELR_CH0_3_0                  : 4;	/*  [7:4]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_12_t;
__xdata __at( 0x802c ) volatile CMN_REG_12_t CMN_REG_12;
#define reg_SELLV_RXSAMPELR_CH1_3_0  CMN_REG_12.BF.SELLV_RXSAMPELR_CH1_3_0
#define reg_SELLV_RXSAMPELR_CH0_3_0  CMN_REG_12.BF.SELLV_RXSAMPELR_CH0_3_0

// 0xc	CMN_REG_13		
typedef union {
	struct {
		uint8_t SELLV_RXSAMPELR_CH3_3_0                  : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t SELLV_RXSAMPELR_CH2_3_0                  : 4;	/*  [7:4]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_13_t;
__xdata __at( 0x8030 ) volatile CMN_REG_13_t CMN_REG_13;
#define reg_SELLV_RXSAMPELR_CH3_3_0  CMN_REG_13.BF.SELLV_RXSAMPELR_CH3_3_0
#define reg_SELLV_RXSAMPELR_CH2_3_0  CMN_REG_13.BF.SELLV_RXSAMPELR_CH2_3_0

// 0xd	CMN_REG_14		
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH1_3_0                      : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t SELLV_TXCLK_CH0_3_0                      : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_14_t;
__xdata __at( 0x8034 ) volatile CMN_REG_14_t CMN_REG_14;
#define reg_SELLV_TXCLK_CH1_3_0  CMN_REG_14.BF.SELLV_TXCLK_CH1_3_0
#define reg_SELLV_TXCLK_CH0_3_0  CMN_REG_14.BF.SELLV_TXCLK_CH0_3_0

// 0xe	CMN_REG_15		
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH3_3_0                      : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t SELLV_TXCLK_CH2_3_0                      : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_15_t;
__xdata __at( 0x8038 ) volatile CMN_REG_15_t CMN_REG_15;
#define reg_SELLV_TXCLK_CH3_3_0  CMN_REG_15.BF.SELLV_TXCLK_CH3_3_0
#define reg_SELLV_TXCLK_CH2_3_0  CMN_REG_15.BF.SELLV_TXCLK_CH2_3_0

// 0xf	CMN_REG_16		
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH1_3_0                     : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t SELLV_TXDATA_CH0_3_0                     : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_16_t;
__xdata __at( 0x803c ) volatile CMN_REG_16_t CMN_REG_16;
#define reg_SELLV_TXDATA_CH1_3_0  CMN_REG_16.BF.SELLV_TXDATA_CH1_3_0
#define reg_SELLV_TXDATA_CH0_3_0  CMN_REG_16.BF.SELLV_TXDATA_CH0_3_0

// 0x10	CMN_REG_17		
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH3_3_0                     : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t SELLV_TXDATA_CH2_3_0                     : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_17_t;
__xdata __at( 0x8040 ) volatile CMN_REG_17_t CMN_REG_17;
#define reg_SELLV_TXDATA_CH3_3_0  CMN_REG_17.BF.SELLV_TXDATA_CH3_3_0
#define reg_SELLV_TXDATA_CH2_3_0  CMN_REG_17.BF.SELLV_TXDATA_CH2_3_0

// 0x11	CMN_REG_18		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t SELHV_VGMAST_2_0                         : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_18_t;
__xdata __at( 0x8044 ) volatile CMN_REG_18_t CMN_REG_18;
#define reg_SELHV_VGMAST_2_0  CMN_REG_18.BF.SELHV_VGMAST_2_0

// 0x12	CMN_REG_19		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t SELLV_CLK_INTP_2_0                       : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t SELLV_FBDIV_2_0                          : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_19_t;
__xdata __at( 0x8048 ) volatile CMN_REG_19_t CMN_REG_19;
#define reg_SELLV_CLK_INTP_2_0  CMN_REG_19.BF.SELLV_CLK_INTP_2_0
#define reg_SELLV_FBDIV_2_0  CMN_REG_19.BF.SELLV_FBDIV_2_0

// 0x13	CMN_REG_20		
typedef union {
	struct {
		uint8_t REG_CP_EXTRA_BRCH_SEL_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t IVREF_MASTREG_CUR_SEL_2_0                : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t SELHV_VGFFE_DFE_2_0                      : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_20_t;
__xdata __at( 0x804c ) volatile CMN_REG_20_t CMN_REG_20;
#define reg_REG_CP_EXTRA_BRCH_SEL_1_0  CMN_REG_20.BF.REG_CP_EXTRA_BRCH_SEL_1_0
#define reg_IVREF_MASTREG_CUR_SEL_2_0  CMN_REG_20.BF.IVREF_MASTREG_CUR_SEL_2_0
#define reg_SELHV_VGFFE_DFE_2_0  CMN_REG_20.BF.SELHV_VGFFE_DFE_2_0

// 0x14	CMN_REG_21		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t DRO_SEL_3_0                              : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t DRO_EN                                   : 1;	/*      5     r/w 1'h0*/
		uint8_t TSEN_ADC_MODE_1_0                        : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_21_t;
__xdata __at( 0x8050 ) volatile CMN_REG_21_t CMN_REG_21;
#define reg_DRO_SEL_3_0  CMN_REG_21.BF.DRO_SEL_3_0
#define reg_DRO_EN  CMN_REG_21.BF.DRO_EN
#define reg_TSEN_ADC_MODE_1_0  CMN_REG_21.BF.TSEN_ADC_MODE_1_0

// 0x15	CMN_REG_22		
typedef union {
	struct {
		uint8_t TSEN_ADC_OSR_1_0                         : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t ADC_CH_SEL_2_0                           : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TSEN_CH_SEL_2_0                          : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_22_t;
__xdata __at( 0x8054 ) volatile CMN_REG_22_t CMN_REG_22;
#define reg_TSEN_ADC_OSR_1_0  CMN_REG_22.BF.TSEN_ADC_OSR_1_0
#define reg_ADC_CH_SEL_2_0  CMN_REG_22.BF.ADC_CH_SEL_2_0
#define reg_TSEN_CH_SEL_2_0  CMN_REG_22.BF.TSEN_CH_SEL_2_0

// 0x16	CMN_REG_23		
typedef union {
	struct {
		uint8_t TSEN_BIAS                                : 1;	/*      0     r/w 1'h0*/
		uint8_t TSEN_ADC_CAL_1_0                         : 2;	/*  [2:1]     r/w 2'h2*/
		uint8_t TSEN_ADC_AVG_BYPASS                      : 1;	/*      3     r/w 1'h0*/
		uint8_t TSEN_ADC_CHOP_SEL_1_0                    : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TSEN_ADC_CHOP_EN_1_0                     : 2;	/*  [7:6]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_23_t;
__xdata __at( 0x8058 ) volatile CMN_REG_23_t CMN_REG_23;
#define reg_TSEN_BIAS  CMN_REG_23.BF.TSEN_BIAS
#define reg_TSEN_ADC_CAL_1_0  CMN_REG_23.BF.TSEN_ADC_CAL_1_0
#define reg_TSEN_ADC_AVG_BYPASS  CMN_REG_23.BF.TSEN_ADC_AVG_BYPASS
#define reg_TSEN_ADC_CHOP_SEL_1_0  CMN_REG_23.BF.TSEN_ADC_CHOP_SEL_1_0
#define reg_TSEN_ADC_CHOP_EN_1_0  CMN_REG_23.BF.TSEN_ADC_CHOP_EN_1_0

// 0x17	CMN_REG_24		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t TSEN_ADC_ATEST_SEL_1_0                   : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t BG_TRIM_3_0                              : 4;	/*  [6:3]     r/w 4'h8*/
		uint8_t TSEN_DEM_EN                              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_24_t;
__xdata __at( 0x805c ) volatile CMN_REG_24_t CMN_REG_24;
#define reg_TSEN_ADC_ATEST_SEL_1_0  CMN_REG_24.BF.TSEN_ADC_ATEST_SEL_1_0
#define reg_BG_TRIM_3_0  CMN_REG_24.BF.BG_TRIM_3_0
#define reg_TSEN_DEM_EN  CMN_REG_24.BF.TSEN_DEM_EN

// 0x18	CMN_REG_25		
typedef union {
	struct {
		uint8_t PCM_CTRL_4_0                             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t PCM_EN                                   : 1;	/*      5     r/w 1'h0*/
		uint8_t TSEN_ADC_RAW_SEL_1_0                     : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_25_t;
__xdata __at( 0x8060 ) volatile CMN_REG_25_t CMN_REG_25;
#define reg_PCM_CTRL_4_0  CMN_REG_25.BF.PCM_CTRL_4_0
#define reg_PCM_EN  CMN_REG_25.BF.PCM_EN
#define reg_TSEN_ADC_RAW_SEL_1_0  CMN_REG_25.BF.TSEN_ADC_RAW_SEL_1_0

// 0x19	CMN_REG_26		
typedef union {
	struct {
		uint8_t TEST_7_0                                 : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_26_t;
__xdata __at( 0x8064 ) volatile CMN_REG_26_t CMN_REG_26;
#define reg_TEST_7_0  CMN_REG_26.BF.TEST_7_0

// 0x1a	CMN_REG_27		
typedef union {
	struct {
		uint8_t SELHV_LCPLL_CP_2_0                       : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t PULUP                                    : 1;	/*      3     r/w 1'h0*/
		uint8_t PULLUP_RXTX_SEL_1_0                      : 2;	/*  [5:4]     r/w 2'h3*/
		uint8_t AVDDR12_SEL_MAST_REG                     : 1;	/*      6     r/w 1'h0*/
		uint8_t TP_EN                                    : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_27_t;
__xdata __at( 0x8068 ) volatile CMN_REG_27_t CMN_REG_27;
#define reg_SELHV_LCPLL_CP_2_0  CMN_REG_27.BF.SELHV_LCPLL_CP_2_0
#define reg_PULUP  CMN_REG_27.BF.PULUP
#define reg_PULLUP_RXTX_SEL_1_0  CMN_REG_27.BF.PULLUP_RXTX_SEL_1_0
#define reg_AVDDR12_SEL_MAST_REG  CMN_REG_27.BF.AVDDR12_SEL_MAST_REG
#define reg_TP_EN  CMN_REG_27.BF.TP_EN

// 0x1b	CMN_REG_28		
typedef union {
	struct {
		uint8_t VREF_VDDADLL_HALF_SEL_3_0                : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t VCON_REF_SEL_RING_1_0                    : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t SHRTR_FORCE                              : 1;	/*      6     r/w 1'h0*/
		uint8_t SHRTR                                    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_28_t;
__xdata __at( 0x806c ) volatile CMN_REG_28_t CMN_REG_28;
#define reg_VREF_VDDADLL_HALF_SEL_3_0  CMN_REG_28.BF.VREF_VDDADLL_HALF_SEL_3_0
#define reg_VCON_REF_SEL_RING_1_0  CMN_REG_28.BF.VCON_REF_SEL_RING_1_0
#define reg_SHRTR_FORCE  CMN_REG_28.BF.SHRTR_FORCE
#define reg_SHRTR  CMN_REG_28.BF.SHRTR

// 0x1c	CMN_REG_29		
typedef union {
	struct {
		uint8_t TXIMPCAL_EN                              : 1;	/*      0     r/w 1'h0*/
		uint8_t RXIMPCAL_EN                              : 1;	/*      1     r/w 1'h0*/
		uint8_t VREF_VDDACAL_SEL_2_0                     : 3;	/*  [4:2]     r/w 3'h6*/
		uint8_t VREF_SAMPLER_VCM_SEL_2_0                 : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_29_t;
__xdata __at( 0x8070 ) volatile CMN_REG_29_t CMN_REG_29;
#define reg_TXIMPCAL_EN  CMN_REG_29.BF.TXIMPCAL_EN
#define reg_RXIMPCAL_EN  CMN_REG_29.BF.RXIMPCAL_EN
#define reg_VREF_VDDACAL_SEL_2_0  CMN_REG_29.BF.VREF_VDDACAL_SEL_2_0
#define reg_VREF_SAMPLER_VCM_SEL_2_0  CMN_REG_29.BF.VREF_SAMPLER_VCM_SEL_2_0

// 0x1d	CMN_REG_30		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t VTH_TXIMPCAL_2_0                         : 3;	/*  [4:2]     r/w 3'h2*/
		uint8_t TXIMPCAL_DRVAMP_2_0                      : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_30_t;
__xdata __at( 0x8074 ) volatile CMN_REG_30_t CMN_REG_30;
#define reg_VTH_TXIMPCAL_2_0  CMN_REG_30.BF.VTH_TXIMPCAL_2_0
#define reg_TXIMPCAL_DRVAMP_2_0  CMN_REG_30.BF.TXIMPCAL_DRVAMP_2_0

// 0x1e	CMN_REG_31		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SELLV_PFD_2_0                            : 3;	/*  [3:1]     r/w 3'h3*/
		uint8_t VTH_RXIMPCAL_3_0                         : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_31_t;
__xdata __at( 0x8078 ) volatile CMN_REG_31_t CMN_REG_31;
#define reg_SELLV_PFD_2_0  CMN_REG_31.BF.SELLV_PFD_2_0
#define reg_VTH_RXIMPCAL_3_0  CMN_REG_31.BF.VTH_RXIMPCAL_3_0

// 0x1f	CMN_REG_32		
typedef union {
	struct {
		uint8_t ANA_RSVDA_7_0                            : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_32_t;
__xdata __at( 0x807c ) volatile CMN_REG_32_t CMN_REG_32;
#define reg_ANA_RSVDA_7_0  CMN_REG_32.BF.ANA_RSVDA_7_0

// 0x20	CMN_REG_33		
typedef union {
	struct {
		uint8_t ANA_RSVDB_7_0                            : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_33_t;
__xdata __at( 0x8080 ) volatile CMN_REG_33_t CMN_REG_33;
#define reg_ANA_RSVDB_7_0  CMN_REG_33.BF.ANA_RSVDB_7_0

// 0x21	CMN_REG_34		
typedef union {
	struct {
		uint8_t ANA_RSVDC_7_0                            : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_34_t;
__xdata __at( 0x8084 ) volatile CMN_REG_34_t CMN_REG_34;
#define reg_ANA_RSVDC_7_0  CMN_REG_34.BF.ANA_RSVDC_7_0

// 0x22	CMN_REG_35		
typedef union {
	struct {
		uint8_t ANA_RSVDD_7_0                            : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_35_t;
__xdata __at( 0x8088 ) volatile CMN_REG_35_t CMN_REG_35;
#define reg_ANA_RSVDD_7_0  CMN_REG_35.BF.ANA_RSVDD_7_0

// 0x23	CMN_REG_36		
typedef union {
	struct {
		uint8_t UNUSED_8                                 : 1;	/*      0     r/w 1'h1*/
		uint8_t UNUSED_7                                 : 1;	/*      1     r/w 1'h1*/
		uint8_t UNUSED_6                                 : 1;	/*      2     r/w 1'h1*/
		uint8_t UNUSED_5                                 : 1;	/*      3     r/w 1'h1*/
		uint8_t UNUSED_4                                 : 1;	/*      4     r/w 1'h1*/
		uint8_t UNUSED_3                                 : 1;	/*      5     r/w 1'h1*/
		uint8_t UNUSED_2                                 : 1;	/*      6     r/w 1'h1*/
		uint8_t UNUSED_1                                 : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_36_t;
__xdata __at( 0x808c ) volatile CMN_REG_36_t CMN_REG_36;
#define reg_UNUSED_8  CMN_REG_36.BF.UNUSED_8
#define reg_UNUSED_7  CMN_REG_36.BF.UNUSED_7
#define reg_UNUSED_6  CMN_REG_36.BF.UNUSED_6
#define reg_UNUSED_5  CMN_REG_36.BF.UNUSED_5
#define reg_UNUSED_4  CMN_REG_36.BF.UNUSED_4
#define reg_UNUSED_3  CMN_REG_36.BF.UNUSED_3
#define reg_UNUSED_2  CMN_REG_36.BF.UNUSED_2
#define reg_UNUSED_1  CMN_REG_36.BF.UNUSED_1

// 0x24	CMN_REG_37		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t UNUSED_10                                : 1;	/*      6     r/w 1'h1*/
		uint8_t UNUSED_9                                 : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_37_t;
__xdata __at( 0x8090 ) volatile CMN_REG_37_t CMN_REG_37;
#define reg_UNUSED_10  CMN_REG_37.BF.UNUSED_10
#define reg_UNUSED_9  CMN_REG_37.BF.UNUSED_9

// 0x25	CMN_REG_38		Digital Common Calibration Register 0
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
} CMN_REG_38_t;
__xdata __at( 0x8094 ) volatile CMN_REG_38_t CMN_REG_38;
#define reg_CMN_DIG_TESTBUS_SEL_3_0  CMN_REG_38.BF.CMN_DIG_TESTBUS_SEL_3_0
#define reg_CMN_DIG_CAL_CLK_RST  CMN_REG_38.BF.CMN_DIG_CAL_CLK_RST
#define reg_CMN_DIG_CAL_CLK_EN  CMN_REG_38.BF.CMN_DIG_CAL_CLK_EN

// 0x26	CMN_REG_39		Digital Common Calibration Register 1
typedef union {
	struct {
		uint8_t CMN_DIG_CAL2M_DIV_7_0                    : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMN_REG_39_t;
__xdata __at( 0x8098 ) volatile CMN_REG_39_t CMN_REG_39;
#define reg_CMN_DIG_CAL2M_DIV_7_0  CMN_REG_39.BF.CMN_DIG_CAL2M_DIV_7_0

#endif
