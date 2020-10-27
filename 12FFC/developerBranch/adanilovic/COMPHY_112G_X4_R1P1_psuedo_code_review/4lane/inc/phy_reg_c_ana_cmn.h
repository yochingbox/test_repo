#ifndef PHY_REG_C_ANA_CMN_H
#define PHY_REG_C_ANA_CMN_H



// 0x0	UPHY14_CMN_ANAREG_TOP_128		Analog Register 128
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RXIMPCAL_EN                              : 1;	/*      2     r/w   0*/
		uint8_t TXIMPCAL_EN                              : 1;	/*      3     r/w   0*/
		uint8_t VDDR12_IGEN_SEL_1_0                      : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t BG_RING_SPEED_1_0                        : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_128_t;
__xdata __at( 0x8000 ) volatile UPHY14_CMN_ANAREG_TOP_128_t UPHY14_CMN_ANAREG_TOP_128;
#define reg_RXIMPCAL_EN  UPHY14_CMN_ANAREG_TOP_128.BF.RXIMPCAL_EN
#define reg_TXIMPCAL_EN  UPHY14_CMN_ANAREG_TOP_128.BF.TXIMPCAL_EN
#define reg_VDDR12_IGEN_SEL_1_0  UPHY14_CMN_ANAREG_TOP_128.BF.VDDR12_IGEN_SEL_1_0
#define reg_BG_RING_SPEED_1_0  UPHY14_CMN_ANAREG_TOP_128.BF.BG_RING_SPEED_1_0

// 0x1	UPHY14_CMN_ANAREG_TOP_129		Analog Register 129
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t VTH_TXIMPCAL_2_0                         : 3;	/*  [4:2]     r/w 3'h2*/
		uint8_t TXIMPCAL_DRVAMP_2_0                      : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_129_t;
__xdata __at( 0x8004 ) volatile UPHY14_CMN_ANAREG_TOP_129_t UPHY14_CMN_ANAREG_TOP_129;
#define reg_VTH_TXIMPCAL_2_0  UPHY14_CMN_ANAREG_TOP_129.BF.VTH_TXIMPCAL_2_0
#define reg_TXIMPCAL_DRVAMP_2_0  UPHY14_CMN_ANAREG_TOP_129.BF.TXIMPCAL_DRVAMP_2_0

// 0x2	UPHY14_CMN_ANAREG_TOP_130		Analog Register 130
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RXIMP_IVREF_4_0                          : 5;	/*  [7:3]     r/w 5'h0C */
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_130_t;
__xdata __at( 0x8008 ) volatile UPHY14_CMN_ANAREG_TOP_130_t UPHY14_CMN_ANAREG_TOP_130;
#define reg_RXIMP_IVREF_4_0  UPHY14_CMN_ANAREG_TOP_130.BF.RXIMP_IVREF_4_0

// 0x4	UPHY14_CMN_ANAREG_TOP_132		Analog Register 132
typedef union {
	struct {
		uint8_t BG_CHOPPER_EN                            : 1;	/*      0     r/w   1*/
		uint8_t BG_DIV_SEL_1_0                           : 2;	/*  [2:1]     r/w 2'h2*/
		uint8_t BG_CLKBYPASS_EN                          : 1;	/*      3     r/w   0*/
		uint8_t BG_CLKEN                                 : 1;	/*      4     r/w   1*/
		uint8_t LCVCO_SF_ICPTAT_SEL_2_0                  : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_132_t;
__xdata __at( 0x8010 ) volatile UPHY14_CMN_ANAREG_TOP_132_t UPHY14_CMN_ANAREG_TOP_132;
#define reg_BG_CHOPPER_EN  UPHY14_CMN_ANAREG_TOP_132.BF.BG_CHOPPER_EN
#define reg_BG_DIV_SEL_1_0  UPHY14_CMN_ANAREG_TOP_132.BF.BG_DIV_SEL_1_0
#define reg_BG_CLKBYPASS_EN  UPHY14_CMN_ANAREG_TOP_132.BF.BG_CLKBYPASS_EN
#define reg_BG_CLKEN  UPHY14_CMN_ANAREG_TOP_132.BF.BG_CLKEN
#define reg_LCVCO_SF_ICPTAT_SEL_2_0  UPHY14_CMN_ANAREG_TOP_132.BF.LCVCO_SF_ICPTAT_SEL_2_0

// 0x5	UPHY14_CMN_ANAREG_TOP_133		Analog Register 133
typedef union {
	struct {
		uint8_t VREF_PROCESSMON_SEL_2_0                  : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t BG_VBG_SEL_1_0                           : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t BG_RES_TRIM_SEL_2_0                      : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_133_t;
__xdata __at( 0x8014 ) volatile UPHY14_CMN_ANAREG_TOP_133_t UPHY14_CMN_ANAREG_TOP_133;
#define reg_VREF_PROCESSMON_SEL_2_0  UPHY14_CMN_ANAREG_TOP_133.BF.VREF_PROCESSMON_SEL_2_0
#define reg_BG_VBG_SEL_1_0  UPHY14_CMN_ANAREG_TOP_133.BF.BG_VBG_SEL_1_0
#define reg_BG_RES_TRIM_SEL_2_0  UPHY14_CMN_ANAREG_TOP_133.BF.BG_RES_TRIM_SEL_2_0

// 0x6	UPHY14_CMN_ANAREG_TOP_134		Analog Register 134
typedef union {
	struct {
		uint8_t REG_CP_BRCH_SEL_1_0                      : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t REGDVDD_STDBY_SEL                        : 1;	/*      2     r/w   1*/
		uint8_t VREF_VDDA_CP_SEL_2_0                     : 3;	/*  [5:3]     r/w 3'h3*/
		uint8_t REG_RING_I_1_0                           : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_134_t;
__xdata __at( 0x8018 ) volatile UPHY14_CMN_ANAREG_TOP_134_t UPHY14_CMN_ANAREG_TOP_134;
#define reg_REG_CP_BRCH_SEL_1_0  UPHY14_CMN_ANAREG_TOP_134.BF.REG_CP_BRCH_SEL_1_0
#define reg_REGDVDD_STDBY_SEL  UPHY14_CMN_ANAREG_TOP_134.BF.REGDVDD_STDBY_SEL
#define reg_VREF_VDDA_CP_SEL_2_0  UPHY14_CMN_ANAREG_TOP_134.BF.VREF_VDDA_CP_SEL_2_0
#define reg_REG_RING_I_1_0  UPHY14_CMN_ANAREG_TOP_134.BF.REG_RING_I_1_0

// 0x7	UPHY14_CMN_ANAREG_TOP_135		Analog Register 135
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t VREF_0P6V_LCVCO_SEL_1_0                  : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t AVDDR12_SEL                              : 1;	/*      5     r/w   1*/
		uint8_t VDDR1P2_SEL_1_0                          : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_135_t;
__xdata __at( 0x801c ) volatile UPHY14_CMN_ANAREG_TOP_135_t UPHY14_CMN_ANAREG_TOP_135;
#define reg_VREF_0P6V_LCVCO_SEL_1_0  UPHY14_CMN_ANAREG_TOP_135.BF.VREF_0P6V_LCVCO_SEL_1_0
#define reg_AVDDR12_SEL  UPHY14_CMN_ANAREG_TOP_135.BF.AVDDR12_SEL
#define reg_VDDR1P2_SEL_1_0  UPHY14_CMN_ANAREG_TOP_135.BF.VDDR1P2_SEL_1_0

// 0x8	UPHY14_CMN_ANAREG_TOP_136		Analog Register 136
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t VTHVCOCAL_2_0                            : 3;	/*  [3:1]     r/w 3'h3*/
		uint8_t VREF_VDDADLL_HALF_SEL_3_0                : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_136_t;
__xdata __at( 0x8020 ) volatile UPHY14_CMN_ANAREG_TOP_136_t UPHY14_CMN_ANAREG_TOP_136;
#define reg_VTHVCOCAL_2_0  UPHY14_CMN_ANAREG_TOP_136.BF.VTHVCOCAL_2_0
#define reg_VREF_VDDADLL_HALF_SEL_3_0  UPHY14_CMN_ANAREG_TOP_136.BF.VREF_VDDADLL_HALF_SEL_3_0

// 0x9	UPHY14_CMN_ANAREG_TOP_137		Analog Register 137
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t VREF_VDDACAL_SEL_2_0                     : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t VTHVCOPTAT_2_0                           : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_137_t;
__xdata __at( 0x8024 ) volatile UPHY14_CMN_ANAREG_TOP_137_t UPHY14_CMN_ANAREG_TOP_137;
#define reg_VREF_VDDACAL_SEL_2_0  UPHY14_CMN_ANAREG_TOP_137.BF.VREF_VDDACAL_SEL_2_0
#define reg_VTHVCOPTAT_2_0  UPHY14_CMN_ANAREG_TOP_137.BF.VTHVCOPTAT_2_0

// 0xa	UPHY14_CMN_ANAREG_TOP_138		Analog Register 138
typedef union {
	struct {
		uint8_t VREF_0P7V_SQ_SEL_1_0                     : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t VTH_RXIMPCAL_2_0                         : 3;	/*  [4:2]     r/w 3'h2*/
		uint8_t VREF_SAMPLER_VCM_SEL_2_0                 : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_138_t;
__xdata __at( 0x8028 ) volatile UPHY14_CMN_ANAREG_TOP_138_t UPHY14_CMN_ANAREG_TOP_138;
#define reg_VREF_0P7V_SQ_SEL_1_0  UPHY14_CMN_ANAREG_TOP_138.BF.VREF_0P7V_SQ_SEL_1_0
#define reg_VTH_RXIMPCAL_2_0  UPHY14_CMN_ANAREG_TOP_138.BF.VTH_RXIMPCAL_2_0
#define reg_VREF_SAMPLER_VCM_SEL_2_0  UPHY14_CMN_ANAREG_TOP_138.BF.VREF_SAMPLER_VCM_SEL_2_0

// 0xb	UPHY14_CMN_ANAREG_TOP_139		Analog Register 139
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t ISEL_VGMASTER_RXTX_BUF                   : 1;	/*      1     r/w 1'h1*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t TRX_IMPCAL_CLK                           : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_139_t;
__xdata __at( 0x802c ) volatile UPHY14_CMN_ANAREG_TOP_139_t UPHY14_CMN_ANAREG_TOP_139;
#define reg_ISEL_VGMASTER_RXTX_BUF  UPHY14_CMN_ANAREG_TOP_139.BF.ISEL_VGMASTER_RXTX_BUF
#define reg_TRX_IMPCAL_CLK  UPHY14_CMN_ANAREG_TOP_139.BF.TRX_IMPCAL_CLK

// 0xc	UPHY14_CMN_ANAREG_TOP_140		Analog Register 140
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH1_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXINTP_CH0_3_0                     : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_140_t;
__xdata __at( 0x8030 ) volatile UPHY14_CMN_ANAREG_TOP_140_t UPHY14_CMN_ANAREG_TOP_140;
#define reg_SELLV_RXINTP_CH1_3_0  UPHY14_CMN_ANAREG_TOP_140.BF.SELLV_RXINTP_CH1_3_0
#define reg_SELLV_RXINTP_CH0_3_0  UPHY14_CMN_ANAREG_TOP_140.BF.SELLV_RXINTP_CH0_3_0

// 0xd	UPHY14_CMN_ANAREG_TOP_141		Analog Register 141
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH3_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXINTP_CH2_3_0                     : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_141_t;
__xdata __at( 0x8034 ) volatile UPHY14_CMN_ANAREG_TOP_141_t UPHY14_CMN_ANAREG_TOP_141;
#define reg_SELLV_RXINTP_CH3_3_0  UPHY14_CMN_ANAREG_TOP_141.BF.SELLV_RXINTP_CH3_3_0
#define reg_SELLV_RXINTP_CH2_3_0  UPHY14_CMN_ANAREG_TOP_141.BF.SELLV_RXINTP_CH2_3_0

// 0xe	UPHY14_CMN_ANAREG_TOP_142		Analog Register 142
typedef union {
	struct {
		uint8_t SELLV_RXDATACLK_CH1_3_0                  : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXDATACLK_CH0_3_0                  : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_142_t;
__xdata __at( 0x8038 ) volatile UPHY14_CMN_ANAREG_TOP_142_t UPHY14_CMN_ANAREG_TOP_142;
#define reg_SELLV_RXDATACLK_CH1_3_0  UPHY14_CMN_ANAREG_TOP_142.BF.SELLV_RXDATACLK_CH1_3_0
#define reg_SELLV_RXDATACLK_CH0_3_0  UPHY14_CMN_ANAREG_TOP_142.BF.SELLV_RXDATACLK_CH0_3_0

// 0xf	UPHY14_CMN_ANAREG_TOP_143		Analog Register 143
typedef union {
	struct {
		uint8_t SELLV_RXDATACLK_CH3_3_0                  : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXDATACLK_CH2_3_0                  : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_143_t;
__xdata __at( 0x803c ) volatile UPHY14_CMN_ANAREG_TOP_143_t UPHY14_CMN_ANAREG_TOP_143;
#define reg_SELLV_RXDATACLK_CH3_3_0  UPHY14_CMN_ANAREG_TOP_143.BF.SELLV_RXDATACLK_CH3_3_0
#define reg_SELLV_RXDATACLK_CH2_3_0  UPHY14_CMN_ANAREG_TOP_143.BF.SELLV_RXDATACLK_CH2_3_0

// 0x10	UPHY14_CMN_ANAREG_TOP_144		Analog Register 144
typedef union {
	struct {
		uint8_t SELLV_RXEOMCLK_CH1_3_0                   : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXEOMCLK_CH0_3_0                   : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_144_t;
__xdata __at( 0x8040 ) volatile UPHY14_CMN_ANAREG_TOP_144_t UPHY14_CMN_ANAREG_TOP_144;
#define reg_SELLV_RXEOMCLK_CH1_3_0  UPHY14_CMN_ANAREG_TOP_144.BF.SELLV_RXEOMCLK_CH1_3_0
#define reg_SELLV_RXEOMCLK_CH0_3_0  UPHY14_CMN_ANAREG_TOP_144.BF.SELLV_RXEOMCLK_CH0_3_0

// 0x11	UPHY14_CMN_ANAREG_TOP_145		Analog Register 145
typedef union {
	struct {
		uint8_t SELLV_RXEOMCLK_CH3_3_0                   : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXEOMCLK_CH2_3_0                   : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_145_t;
__xdata __at( 0x8044 ) volatile UPHY14_CMN_ANAREG_TOP_145_t UPHY14_CMN_ANAREG_TOP_145;
#define reg_SELLV_RXEOMCLK_CH3_3_0  UPHY14_CMN_ANAREG_TOP_145.BF.SELLV_RXEOMCLK_CH3_3_0
#define reg_SELLV_RXEOMCLK_CH2_3_0  UPHY14_CMN_ANAREG_TOP_145.BF.SELLV_RXEOMCLK_CH2_3_0

// 0x12	UPHY14_CMN_ANAREG_TOP_146		Analog Register 146
typedef union {
	struct {
		uint8_t SELLV_RXSAMPELR_CH1_3_0                  : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXSAMPELR_CH0_3_0                  : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_146_t;
__xdata __at( 0x8048 ) volatile UPHY14_CMN_ANAREG_TOP_146_t UPHY14_CMN_ANAREG_TOP_146;
#define reg_SELLV_RXSAMPELR_CH1_3_0  UPHY14_CMN_ANAREG_TOP_146.BF.SELLV_RXSAMPELR_CH1_3_0
#define reg_SELLV_RXSAMPELR_CH0_3_0  UPHY14_CMN_ANAREG_TOP_146.BF.SELLV_RXSAMPELR_CH0_3_0

// 0x13	UPHY14_CMN_ANAREG_TOP_147		Analog Register 147
typedef union {
	struct {
		uint8_t SELLV_RXSAMPELR_CH3_3_0                  : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXSAMPELR_CH2_3_0                  : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_147_t;
__xdata __at( 0x804c ) volatile UPHY14_CMN_ANAREG_TOP_147_t UPHY14_CMN_ANAREG_TOP_147;
#define reg_SELLV_RXSAMPELR_CH3_3_0  UPHY14_CMN_ANAREG_TOP_147.BF.SELLV_RXSAMPELR_CH3_3_0
#define reg_SELLV_RXSAMPELR_CH2_3_0  UPHY14_CMN_ANAREG_TOP_147.BF.SELLV_RXSAMPELR_CH2_3_0

// 0x14	UPHY14_CMN_ANAREG_TOP_148		Analog Register 148
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXDLL_CH0_5_0                      : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_148_t;
__xdata __at( 0x8050 ) volatile UPHY14_CMN_ANAREG_TOP_148_t UPHY14_CMN_ANAREG_TOP_148;
#define reg_SELLV_RXDLL_CH0_5_0  UPHY14_CMN_ANAREG_TOP_148.BF.SELLV_RXDLL_CH0_5_0

// 0x15	UPHY14_CMN_ANAREG_TOP_149		Analog Register 149
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXDLL_CH1_5_0                      : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_149_t;
__xdata __at( 0x8054 ) volatile UPHY14_CMN_ANAREG_TOP_149_t UPHY14_CMN_ANAREG_TOP_149;
#define reg_SELLV_RXDLL_CH1_5_0  UPHY14_CMN_ANAREG_TOP_149.BF.SELLV_RXDLL_CH1_5_0

// 0x16	UPHY14_CMN_ANAREG_TOP_150		Analog Register 150
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXDLL_CH2_5_0                      : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_150_t;
__xdata __at( 0x8058 ) volatile UPHY14_CMN_ANAREG_TOP_150_t UPHY14_CMN_ANAREG_TOP_150;
#define reg_SELLV_RXDLL_CH2_5_0  UPHY14_CMN_ANAREG_TOP_150.BF.SELLV_RXDLL_CH2_5_0

// 0x17	UPHY14_CMN_ANAREG_TOP_151		Analog Register 151
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXDLL_CH3_5_0                      : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_151_t;
__xdata __at( 0x805c ) volatile UPHY14_CMN_ANAREG_TOP_151_t UPHY14_CMN_ANAREG_TOP_151;
#define reg_SELLV_RXDLL_CH3_5_0  UPHY14_CMN_ANAREG_TOP_151.BF.SELLV_RXDLL_CH3_5_0

// 0x18	UPHY14_CMN_ANAREG_TOP_152		Analog Register 152
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXEOMDLL_CH0_5_0                   : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_152_t;
__xdata __at( 0x8060 ) volatile UPHY14_CMN_ANAREG_TOP_152_t UPHY14_CMN_ANAREG_TOP_152;
#define reg_SELLV_RXEOMDLL_CH0_5_0  UPHY14_CMN_ANAREG_TOP_152.BF.SELLV_RXEOMDLL_CH0_5_0

// 0x19	UPHY14_CMN_ANAREG_TOP_153		Analog Register 153
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXEOMDLL_CH1_5_0                   : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_153_t;
__xdata __at( 0x8064 ) volatile UPHY14_CMN_ANAREG_TOP_153_t UPHY14_CMN_ANAREG_TOP_153;
#define reg_SELLV_RXEOMDLL_CH1_5_0  UPHY14_CMN_ANAREG_TOP_153.BF.SELLV_RXEOMDLL_CH1_5_0

// 0x1a	UPHY14_CMN_ANAREG_TOP_154		Analog Register 154
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXEOMDLL_CH2_5_0                   : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_154_t;
__xdata __at( 0x8068 ) volatile UPHY14_CMN_ANAREG_TOP_154_t UPHY14_CMN_ANAREG_TOP_154;
#define reg_SELLV_RXEOMDLL_CH2_5_0  UPHY14_CMN_ANAREG_TOP_154.BF.SELLV_RXEOMDLL_CH2_5_0

// 0x1b	UPHY14_CMN_ANAREG_TOP_155		Analog Register 155
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXEOMDLL_CH3_5_0                   : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_155_t;
__xdata __at( 0x806c ) volatile UPHY14_CMN_ANAREG_TOP_155_t UPHY14_CMN_ANAREG_TOP_155;
#define reg_SELLV_RXEOMDLL_CH3_5_0  UPHY14_CMN_ANAREG_TOP_155.BF.SELLV_RXEOMDLL_CH3_5_0

// 0x1c	UPHY14_CMN_ANAREG_TOP_156		Analog Register 156
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH1_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXCLK_CH0_3_0                      : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_156_t;
__xdata __at( 0x8070 ) volatile UPHY14_CMN_ANAREG_TOP_156_t UPHY14_CMN_ANAREG_TOP_156;
#define reg_SELLV_TXCLK_CH1_3_0  UPHY14_CMN_ANAREG_TOP_156.BF.SELLV_TXCLK_CH1_3_0
#define reg_SELLV_TXCLK_CH0_3_0  UPHY14_CMN_ANAREG_TOP_156.BF.SELLV_TXCLK_CH0_3_0

// 0x1d	UPHY14_CMN_ANAREG_TOP_157		Analog Register 157
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH3_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXCLK_CH2_3_0                      : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_157_t;
__xdata __at( 0x8074 ) volatile UPHY14_CMN_ANAREG_TOP_157_t UPHY14_CMN_ANAREG_TOP_157;
#define reg_SELLV_TXCLK_CH3_3_0  UPHY14_CMN_ANAREG_TOP_157.BF.SELLV_TXCLK_CH3_3_0
#define reg_SELLV_TXCLK_CH2_3_0  UPHY14_CMN_ANAREG_TOP_157.BF.SELLV_TXCLK_CH2_3_0

// 0x1e	UPHY14_CMN_ANAREG_TOP_158		Analog Register 158
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH1_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXDATA_CH0_3_0                     : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_158_t;
__xdata __at( 0x8078 ) volatile UPHY14_CMN_ANAREG_TOP_158_t UPHY14_CMN_ANAREG_TOP_158;
#define reg_SELLV_TXDATA_CH1_3_0  UPHY14_CMN_ANAREG_TOP_158.BF.SELLV_TXDATA_CH1_3_0
#define reg_SELLV_TXDATA_CH0_3_0  UPHY14_CMN_ANAREG_TOP_158.BF.SELLV_TXDATA_CH0_3_0

// 0x1f	UPHY14_CMN_ANAREG_TOP_159		Analog Register 159
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH3_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXDATA_CH2_3_0                     : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_159_t;
__xdata __at( 0x807c ) volatile UPHY14_CMN_ANAREG_TOP_159_t UPHY14_CMN_ANAREG_TOP_159;
#define reg_SELLV_TXDATA_CH3_3_0  UPHY14_CMN_ANAREG_TOP_159.BF.SELLV_TXDATA_CH3_3_0
#define reg_SELLV_TXDATA_CH2_3_0  UPHY14_CMN_ANAREG_TOP_159.BF.SELLV_TXDATA_CH2_3_0

// 0x20	UPHY14_CMN_ANAREG_TOP_160		Analog Register 160
typedef union {
	struct {
		uint8_t SELLV_TXPRE_CH1_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXPRE_CH0_3_0                      : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_160_t;
__xdata __at( 0x8080 ) volatile UPHY14_CMN_ANAREG_TOP_160_t UPHY14_CMN_ANAREG_TOP_160;
#define reg_SELLV_TXPRE_CH1_3_0  UPHY14_CMN_ANAREG_TOP_160.BF.SELLV_TXPRE_CH1_3_0
#define reg_SELLV_TXPRE_CH0_3_0  UPHY14_CMN_ANAREG_TOP_160.BF.SELLV_TXPRE_CH0_3_0

// 0x21	UPHY14_CMN_ANAREG_TOP_161		Analog Register 161
typedef union {
	struct {
		uint8_t SELLV_TXPRE_CH3_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXPRE_CH2_3_0                      : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_161_t;
__xdata __at( 0x8084 ) volatile UPHY14_CMN_ANAREG_TOP_161_t UPHY14_CMN_ANAREG_TOP_161;
#define reg_SELLV_TXPRE_CH3_3_0  UPHY14_CMN_ANAREG_TOP_161.BF.SELLV_TXPRE_CH3_3_0
#define reg_SELLV_TXPRE_CH2_3_0  UPHY14_CMN_ANAREG_TOP_161.BF.SELLV_TXPRE_CH2_3_0

// 0x22	UPHY14_CMN_ANAREG_TOP_162		Analog Register 162
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELHV_CP_SLLP_2_0                        : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t SELHV_VGMAST_2_0                         : 3;	/*  [7:5]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_162_t;
__xdata __at( 0x8088 ) volatile UPHY14_CMN_ANAREG_TOP_162_t UPHY14_CMN_ANAREG_TOP_162;
#define reg_SELHV_CP_SLLP_2_0  UPHY14_CMN_ANAREG_TOP_162.BF.SELHV_CP_SLLP_2_0
#define reg_SELHV_VGMAST_2_0  UPHY14_CMN_ANAREG_TOP_162.BF.SELHV_VGMAST_2_0

// 0x23	UPHY14_CMN_ANAREG_TOP_163		Analog Register 163
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_CLK_INTP_2_0                       : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t SELLV_FBDIV_2_0                          : 3;	/*  [7:5]     r/w 3'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_163_t;
__xdata __at( 0x808c ) volatile UPHY14_CMN_ANAREG_TOP_163_t UPHY14_CMN_ANAREG_TOP_163;
#define reg_SELLV_CLK_INTP_2_0  UPHY14_CMN_ANAREG_TOP_163.BF.SELLV_CLK_INTP_2_0
#define reg_SELLV_FBDIV_2_0  UPHY14_CMN_ANAREG_TOP_163.BF.SELLV_FBDIV_2_0

// 0x25	UPHY14_CMN_ANAREG_TOP_165		Analog Register 165
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t IVREF_MASTREG_CUR_SEL_2_0                : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t SELHV_VGFFE_DFE_2_0                      : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_165_t;
__xdata __at( 0x8094 ) volatile UPHY14_CMN_ANAREG_TOP_165_t UPHY14_CMN_ANAREG_TOP_165;
#define reg_IVREF_MASTREG_CUR_SEL_2_0  UPHY14_CMN_ANAREG_TOP_165.BF.IVREF_MASTREG_CUR_SEL_2_0
#define reg_SELHV_VGFFE_DFE_2_0  UPHY14_CMN_ANAREG_TOP_165.BF.SELHV_VGFFE_DFE_2_0

// 0x27	UPHY14_CMN_ANAREG_TOP_181		Analog Register 181
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TSEN_ADC_MODE_1_0                        : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t LCPLL_DCC_EN                             : 1;	/*      5     r/w 1'h1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_181_t;
__xdata __at( 0x809c ) volatile UPHY14_CMN_ANAREG_TOP_181_t UPHY14_CMN_ANAREG_TOP_181;
#define reg_TSEN_ADC_MODE_1_0  UPHY14_CMN_ANAREG_TOP_181.BF.TSEN_ADC_MODE_1_0
#define reg_LCPLL_DCC_EN  UPHY14_CMN_ANAREG_TOP_181.BF.LCPLL_DCC_EN

// 0x28	UPHY14_CMN_ANAREG_TOP_182		Analog Register 182
typedef union {
	struct {
		uint8_t LCPLL_DCC_CLK                            : 1;	/*      0     r/w 1'h0*/
		uint8_t LCPLL_DCC_HG                             : 1;	/*      1     r/w 1'h0*/
		uint8_t LCPLL_DCC_5_0                            : 6;	/*  [7:2]     r/w 6'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_182_t;
__xdata __at( 0x80a0 ) volatile UPHY14_CMN_ANAREG_TOP_182_t UPHY14_CMN_ANAREG_TOP_182;
#define reg_LCPLL_DCC_CLK  UPHY14_CMN_ANAREG_TOP_182.BF.LCPLL_DCC_CLK
#define reg_LCPLL_DCC_HG  UPHY14_CMN_ANAREG_TOP_182.BF.LCPLL_DCC_HG
#define reg_LCPLL_DCC_5_0  UPHY14_CMN_ANAREG_TOP_182.BF.LCPLL_DCC_5_0

// 0x29	UPHY14_CMN_ANAREG_TOP_183		Analog Register 183
typedef union {
	struct {
		uint8_t DRO_SEL_3_0                              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t DRO_EN                                   : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t LCPLL_DCC_CAL_EN                         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_183_t;
__xdata __at( 0x80a4 ) volatile UPHY14_CMN_ANAREG_TOP_183_t UPHY14_CMN_ANAREG_TOP_183;
#define reg_DRO_SEL_3_0  UPHY14_CMN_ANAREG_TOP_183.BF.DRO_SEL_3_0
#define reg_DRO_EN  UPHY14_CMN_ANAREG_TOP_183.BF.DRO_EN
#define reg_LCPLL_DCC_CAL_EN  UPHY14_CMN_ANAREG_TOP_183.BF.LCPLL_DCC_CAL_EN

// 0x46	UPHY14_CMN_ANAREG_TOP_198		Analog Register 198
typedef union {
	struct {
		uint8_t TSEN_ADC_OSR_1_0                         : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t ADC_CH_SEL_2_0                           : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TSEN_CH_SEL_2_0                          : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_198_t;
__xdata __at( 0x8118 ) volatile UPHY14_CMN_ANAREG_TOP_198_t UPHY14_CMN_ANAREG_TOP_198;
#define reg_TSEN_ADC_OSR_1_0  UPHY14_CMN_ANAREG_TOP_198.BF.TSEN_ADC_OSR_1_0
#define reg_ADC_CH_SEL_2_0  UPHY14_CMN_ANAREG_TOP_198.BF.ADC_CH_SEL_2_0
#define reg_TSEN_CH_SEL_2_0  UPHY14_CMN_ANAREG_TOP_198.BF.TSEN_CH_SEL_2_0

// 0x47	UPHY14_CMN_ANAREG_TOP_199		Analog Register 199
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
} UPHY14_CMN_ANAREG_TOP_199_t;
__xdata __at( 0x811c ) volatile UPHY14_CMN_ANAREG_TOP_199_t UPHY14_CMN_ANAREG_TOP_199;
#define reg_TSEN_BIAS  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_BIAS
#define reg_TSEN_ADC_CAL_1_0  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_ADC_CAL_1_0
#define reg_TSEN_ADC_AVG_BYPASS  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_ADC_AVG_BYPASS
#define reg_TSEN_ADC_CHOP_SEL_1_0  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_ADC_CHOP_SEL_1_0
#define reg_TSEN_ADC_CHOP_EN_1_0  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_ADC_CHOP_EN_1_0

// 0x48	UPHY14_CMN_ANAREG_TOP_200		Analog Register 200
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TSEN_ADC_ATEST_SEL_1_0                   : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t BG_TRIM_3_0                              : 4;	/*  [6:3]     r/w 4'h8*/
		uint8_t TSEN_DEM_EN                              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_200_t;
__xdata __at( 0x8120 ) volatile UPHY14_CMN_ANAREG_TOP_200_t UPHY14_CMN_ANAREG_TOP_200;
#define reg_TSEN_ADC_ATEST_SEL_1_0  UPHY14_CMN_ANAREG_TOP_200.BF.TSEN_ADC_ATEST_SEL_1_0
#define reg_BG_TRIM_3_0  UPHY14_CMN_ANAREG_TOP_200.BF.BG_TRIM_3_0
#define reg_TSEN_DEM_EN  UPHY14_CMN_ANAREG_TOP_200.BF.TSEN_DEM_EN

// 0x49	UPHY14_CMN_ANAREG_TOP_201		Analog Register 201
typedef union {
	struct {
		uint8_t PCM_CTRL_4_0                             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t PCM_EN                                   : 1;	/*      5     r/w 1'h0*/
		uint8_t TSEN_ADC_RAW_SEL_1_0                     : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_201_t;
__xdata __at( 0x8124 ) volatile UPHY14_CMN_ANAREG_TOP_201_t UPHY14_CMN_ANAREG_TOP_201;
#define reg_PCM_CTRL_4_0  UPHY14_CMN_ANAREG_TOP_201.BF.PCM_CTRL_4_0
#define reg_PCM_EN  UPHY14_CMN_ANAREG_TOP_201.BF.PCM_EN
#define reg_TSEN_ADC_RAW_SEL_1_0  UPHY14_CMN_ANAREG_TOP_201.BF.TSEN_ADC_RAW_SEL_1_0

// 0x4b	UPHY14_CMN_ANAREG_TOP_203		Analog Register 203
typedef union {
	struct {
		uint8_t TEST_7_0                                 : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_203_t;
__xdata __at( 0x812c ) volatile UPHY14_CMN_ANAREG_TOP_203_t UPHY14_CMN_ANAREG_TOP_203;
#define reg_TEST_7_0  UPHY14_CMN_ANAREG_TOP_203.BF.TEST_7_0

// 0x4c	UPHY14_CMN_ANAREG_TOP_204		Analog Register 204
typedef union {
	struct {
		uint8_t VCO_REG_MID_SEL_2_0                      : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t VDDR_DAC_ADJ_2_0                         : 3;	/*  [5:3]     r/w 3'h4*/
		uint8_t AVDD1815_SEL                             : 1;	/*      6     r/w   1*/
		uint8_t TP_EN                                    : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_204_t;
__xdata __at( 0x8130 ) volatile UPHY14_CMN_ANAREG_TOP_204_t UPHY14_CMN_ANAREG_TOP_204;
#define reg_VCO_REG_MID_SEL_2_0  UPHY14_CMN_ANAREG_TOP_204.BF.VCO_REG_MID_SEL_2_0
#define reg_VDDR_DAC_ADJ_2_0  UPHY14_CMN_ANAREG_TOP_204.BF.VDDR_DAC_ADJ_2_0
#define reg_AVDD1815_SEL  UPHY14_CMN_ANAREG_TOP_204.BF.AVDD1815_SEL
#define reg_TP_EN  UPHY14_CMN_ANAREG_TOP_204.BF.TP_EN

// 0x4e	UPHY14_CMN_ANAREG_TOP_206		Analog Register 206
typedef union {
	struct {
		uint8_t ANA_RSVD4_7_0                            : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_206_t;
__xdata __at( 0x8138 ) volatile UPHY14_CMN_ANAREG_TOP_206_t UPHY14_CMN_ANAREG_TOP_206;
#define reg_ANA_RSVD4_7_0  UPHY14_CMN_ANAREG_TOP_206.BF.ANA_RSVD4_7_0

// 0x4f	UPHY14_CMN_ANAREG_TOP_207		Analog Register 207
typedef union {
	struct {
		uint8_t ANA_RSVD3_7_0                            : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_207_t;
__xdata __at( 0x813c ) volatile UPHY14_CMN_ANAREG_TOP_207_t UPHY14_CMN_ANAREG_TOP_207;
#define reg_ANA_RSVD3_7_0  UPHY14_CMN_ANAREG_TOP_207.BF.ANA_RSVD3_7_0

// 0x50	UPHY14_CMN_ANAREG_TOP_208		Analog Register 208
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t CMN_IPP_SLLP_CUR_SEL_2_0                 : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t AVDDR12_SEL_MAST_REG                     : 1;	/*      6     r/w 1'h1*/
		uint8_t VDD_CP_SELB                              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_208_t;
__xdata __at( 0x8140 ) volatile UPHY14_CMN_ANAREG_TOP_208_t UPHY14_CMN_ANAREG_TOP_208;
#define reg_CMN_IPP_SLLP_CUR_SEL_2_0  UPHY14_CMN_ANAREG_TOP_208.BF.CMN_IPP_SLLP_CUR_SEL_2_0
#define reg_AVDDR12_SEL_MAST_REG  UPHY14_CMN_ANAREG_TOP_208.BF.AVDDR12_SEL_MAST_REG
#define reg_VDD_CP_SELB  UPHY14_CMN_ANAREG_TOP_208.BF.VDD_CP_SELB

#endif
