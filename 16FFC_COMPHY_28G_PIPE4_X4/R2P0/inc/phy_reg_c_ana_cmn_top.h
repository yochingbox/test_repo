#ifndef PHY_REG_C_ANA_CMN_TOP_H
#define PHY_REG_C_ANA_CMN_TOP_H



// 0x80	UPHY14_CMN_ANAREG_TOP_128		Analog Register 128
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
__xdata __at( 0x8200 ) volatile UPHY14_CMN_ANAREG_TOP_128_t UPHY14_CMN_ANAREG_TOP_128;
#define reg_RXIMPCAL_EN  UPHY14_CMN_ANAREG_TOP_128.BF.RXIMPCAL_EN
#define reg_TXIMPCAL_EN  UPHY14_CMN_ANAREG_TOP_128.BF.TXIMPCAL_EN
#define reg_VDDR12_IGEN_SEL_1_0  UPHY14_CMN_ANAREG_TOP_128.BF.VDDR12_IGEN_SEL_1_0
#define reg_BG_RING_SPEED_1_0  UPHY14_CMN_ANAREG_TOP_128.BF.BG_RING_SPEED_1_0

// 0x81	UPHY14_CMN_ANAREG_TOP_129		Analog Register 129
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
__xdata __at( 0x8204 ) volatile UPHY14_CMN_ANAREG_TOP_129_t UPHY14_CMN_ANAREG_TOP_129;
#define reg_VTH_TXIMPCAL_2_0  UPHY14_CMN_ANAREG_TOP_129.BF.VTH_TXIMPCAL_2_0
#define reg_TXIMPCAL_DRVAMP_2_0  UPHY14_CMN_ANAREG_TOP_129.BF.TXIMPCAL_DRVAMP_2_0

// 0x82	UPHY14_CMN_ANAREG_TOP_130		Analog Register 130
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
__xdata __at( 0x8208 ) volatile UPHY14_CMN_ANAREG_TOP_130_t UPHY14_CMN_ANAREG_TOP_130;
#define reg_RXIMP_IVREF_4_0  UPHY14_CMN_ANAREG_TOP_130.BF.RXIMP_IVREF_4_0

// 0x83	UPHY14_CMN_ANAREG_TOP_131		Analog Register 131
typedef union {
	struct {
		uint8_t INTPI_RING_3_0                           : 4;	/*  [3:0]     r/w 4'h9*/
		uint8_t INTPI_LCPLL_3_0                          : 4;	/*  [7:4]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_131_t;
__xdata __at( 0x820c ) volatile UPHY14_CMN_ANAREG_TOP_131_t UPHY14_CMN_ANAREG_TOP_131;
#define reg_INTPI_RING_3_0  UPHY14_CMN_ANAREG_TOP_131.BF.INTPI_RING_3_0
#define reg_INTPI_LCPLL_3_0  UPHY14_CMN_ANAREG_TOP_131.BF.INTPI_LCPLL_3_0

// 0x84	UPHY14_CMN_ANAREG_TOP_132		Analog Register 132
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
__xdata __at( 0x8210 ) volatile UPHY14_CMN_ANAREG_TOP_132_t UPHY14_CMN_ANAREG_TOP_132;
#define reg_BG_CHOPPER_EN  UPHY14_CMN_ANAREG_TOP_132.BF.BG_CHOPPER_EN
#define reg_BG_DIV_SEL_1_0  UPHY14_CMN_ANAREG_TOP_132.BF.BG_DIV_SEL_1_0
#define reg_BG_CLKBYPASS_EN  UPHY14_CMN_ANAREG_TOP_132.BF.BG_CLKBYPASS_EN
#define reg_BG_CLKEN  UPHY14_CMN_ANAREG_TOP_132.BF.BG_CLKEN
#define reg_LCVCO_SF_ICPTAT_SEL_2_0  UPHY14_CMN_ANAREG_TOP_132.BF.LCVCO_SF_ICPTAT_SEL_2_0

// 0x85	UPHY14_CMN_ANAREG_TOP_133		Analog Register 133
typedef union {
	struct {
		uint8_t VREF_PROCESSMON_SEL_2_0                  : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t BG_VBG_SEL_1_0                           : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t BG_RES_TRIM_SEL_2_0                      : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_133_t;
__xdata __at( 0x8214 ) volatile UPHY14_CMN_ANAREG_TOP_133_t UPHY14_CMN_ANAREG_TOP_133;
#define reg_VREF_PROCESSMON_SEL_2_0  UPHY14_CMN_ANAREG_TOP_133.BF.VREF_PROCESSMON_SEL_2_0
#define reg_BG_VBG_SEL_1_0  UPHY14_CMN_ANAREG_TOP_133.BF.BG_VBG_SEL_1_0
#define reg_BG_RES_TRIM_SEL_2_0  UPHY14_CMN_ANAREG_TOP_133.BF.BG_RES_TRIM_SEL_2_0

// 0x86	UPHY14_CMN_ANAREG_TOP_134		Analog Register 134
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
__xdata __at( 0x8218 ) volatile UPHY14_CMN_ANAREG_TOP_134_t UPHY14_CMN_ANAREG_TOP_134;
#define reg_REG_CP_BRCH_SEL_1_0  UPHY14_CMN_ANAREG_TOP_134.BF.REG_CP_BRCH_SEL_1_0
#define reg_REGDVDD_STDBY_SEL  UPHY14_CMN_ANAREG_TOP_134.BF.REGDVDD_STDBY_SEL
#define reg_VREF_VDDA_CP_SEL_2_0  UPHY14_CMN_ANAREG_TOP_134.BF.VREF_VDDA_CP_SEL_2_0
#define reg_REG_RING_I_1_0  UPHY14_CMN_ANAREG_TOP_134.BF.REG_RING_I_1_0

// 0x87	UPHY14_CMN_ANAREG_TOP_135		Analog Register 135
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
__xdata __at( 0x821c ) volatile UPHY14_CMN_ANAREG_TOP_135_t UPHY14_CMN_ANAREG_TOP_135;
#define reg_VREF_0P6V_LCVCO_SEL_1_0  UPHY14_CMN_ANAREG_TOP_135.BF.VREF_0P6V_LCVCO_SEL_1_0
#define reg_AVDDR12_SEL  UPHY14_CMN_ANAREG_TOP_135.BF.AVDDR12_SEL
#define reg_VDDR1P2_SEL_1_0  UPHY14_CMN_ANAREG_TOP_135.BF.VDDR1P2_SEL_1_0

// 0x88	UPHY14_CMN_ANAREG_TOP_136		Analog Register 136
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t VTHVCOCAL_2_0                            : 3;	/*  [3:1]     r/w 3'h3*/
		uint8_t VREF_VDDADLL_HALF_SEL_3_0                : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_136_t;
__xdata __at( 0x8220 ) volatile UPHY14_CMN_ANAREG_TOP_136_t UPHY14_CMN_ANAREG_TOP_136;
#define reg_VTHVCOCAL_2_0  UPHY14_CMN_ANAREG_TOP_136.BF.VTHVCOCAL_2_0
#define reg_VREF_VDDADLL_HALF_SEL_3_0  UPHY14_CMN_ANAREG_TOP_136.BF.VREF_VDDADLL_HALF_SEL_3_0

// 0x89	UPHY14_CMN_ANAREG_TOP_137		Analog Register 137
typedef union {
	struct {
		uint8_t VCON_REF_SEL_RING_1_0                    : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t VREF_VDDACAL_SEL_2_0                     : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t VTHVCOPTAT_2_0                           : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_137_t;
__xdata __at( 0x8224 ) volatile UPHY14_CMN_ANAREG_TOP_137_t UPHY14_CMN_ANAREG_TOP_137;
#define reg_VCON_REF_SEL_RING_1_0  UPHY14_CMN_ANAREG_TOP_137.BF.VCON_REF_SEL_RING_1_0
#define reg_VREF_VDDACAL_SEL_2_0  UPHY14_CMN_ANAREG_TOP_137.BF.VREF_VDDACAL_SEL_2_0
#define reg_VTHVCOPTAT_2_0  UPHY14_CMN_ANAREG_TOP_137.BF.VTHVCOPTAT_2_0

// 0x8a	UPHY14_CMN_ANAREG_TOP_138		Analog Register 138
typedef union {
	struct {
		uint8_t VREF_0P7V_SQ_SEL_1_0                     : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t VTH_RXIMPCAL_2_0                         : 3;	/*  [4:2]     r/w 3'h2*/
		uint8_t VREF_SAMPLER_VCM_SEL_2_0                 : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_138_t;
__xdata __at( 0x8228 ) volatile UPHY14_CMN_ANAREG_TOP_138_t UPHY14_CMN_ANAREG_TOP_138;
#define reg_VREF_0P7V_SQ_SEL_1_0  UPHY14_CMN_ANAREG_TOP_138.BF.VREF_0P7V_SQ_SEL_1_0
#define reg_VTH_RXIMPCAL_2_0  UPHY14_CMN_ANAREG_TOP_138.BF.VTH_RXIMPCAL_2_0
#define reg_VREF_SAMPLER_VCM_SEL_2_0  UPHY14_CMN_ANAREG_TOP_138.BF.VREF_SAMPLER_VCM_SEL_2_0

// 0x8b	UPHY14_CMN_ANAREG_TOP_139		Analog Register 139
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t ISEL_VGMASTER_RXTX_BUF                   : 1;	/*      1     r/w 1'h1*/
		uint8_t PULLUP_RXTX_SEL_1_0                      : 2;	/*  [3:2]     r/w 2'h3*/
		uint8_t SHRTR                                    : 1;	/*      4     r/w 1'h0*/
		uint8_t PULUP                                    : 1;	/*      5     r/w 1'h0*/
		uint8_t SHRTR_FORCE                              : 1;	/*      6     r/w 1'h0*/
		uint8_t TRX_IMPCAL_CLK                           : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_139_t;
__xdata __at( 0x822c ) volatile UPHY14_CMN_ANAREG_TOP_139_t UPHY14_CMN_ANAREG_TOP_139;
#define reg_ISEL_VGMASTER_RXTX_BUF  UPHY14_CMN_ANAREG_TOP_139.BF.ISEL_VGMASTER_RXTX_BUF
#define reg_PULLUP_RXTX_SEL_1_0  UPHY14_CMN_ANAREG_TOP_139.BF.PULLUP_RXTX_SEL_1_0
#define reg_SHRTR  UPHY14_CMN_ANAREG_TOP_139.BF.SHRTR
#define reg_PULUP  UPHY14_CMN_ANAREG_TOP_139.BF.PULUP
#define reg_SHRTR_FORCE  UPHY14_CMN_ANAREG_TOP_139.BF.SHRTR_FORCE
#define reg_TRX_IMPCAL_CLK  UPHY14_CMN_ANAREG_TOP_139.BF.TRX_IMPCAL_CLK

// 0x8c	UPHY14_CMN_ANAREG_TOP_140		Analog Register 140
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH1_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXINTP_CH0_3_0                     : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_140_t;
__xdata __at( 0x8230 ) volatile UPHY14_CMN_ANAREG_TOP_140_t UPHY14_CMN_ANAREG_TOP_140;
#define reg_SELLV_RXINTP_CH1_3_0  UPHY14_CMN_ANAREG_TOP_140.BF.SELLV_RXINTP_CH1_3_0
#define reg_SELLV_RXINTP_CH0_3_0  UPHY14_CMN_ANAREG_TOP_140.BF.SELLV_RXINTP_CH0_3_0

// 0x8d	UPHY14_CMN_ANAREG_TOP_141		Analog Register 141
typedef union {
	struct {
		uint8_t SELLV_RXINTP_CH3_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXINTP_CH2_3_0                     : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_141_t;
__xdata __at( 0x8234 ) volatile UPHY14_CMN_ANAREG_TOP_141_t UPHY14_CMN_ANAREG_TOP_141;
#define reg_SELLV_RXINTP_CH3_3_0  UPHY14_CMN_ANAREG_TOP_141.BF.SELLV_RXINTP_CH3_3_0
#define reg_SELLV_RXINTP_CH2_3_0  UPHY14_CMN_ANAREG_TOP_141.BF.SELLV_RXINTP_CH2_3_0

// 0x8e	UPHY14_CMN_ANAREG_TOP_142		Analog Register 142
typedef union {
	struct {
		uint8_t SELLV_RXDATACLK_CH1_3_0                  : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXDATACLK_CH0_3_0                  : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_142_t;
__xdata __at( 0x8238 ) volatile UPHY14_CMN_ANAREG_TOP_142_t UPHY14_CMN_ANAREG_TOP_142;
#define reg_SELLV_RXDATACLK_CH1_3_0  UPHY14_CMN_ANAREG_TOP_142.BF.SELLV_RXDATACLK_CH1_3_0
#define reg_SELLV_RXDATACLK_CH0_3_0  UPHY14_CMN_ANAREG_TOP_142.BF.SELLV_RXDATACLK_CH0_3_0

// 0x8f	UPHY14_CMN_ANAREG_TOP_143		Analog Register 143
typedef union {
	struct {
		uint8_t SELLV_RXDATACLK_CH3_3_0                  : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXDATACLK_CH2_3_0                  : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_143_t;
__xdata __at( 0x823c ) volatile UPHY14_CMN_ANAREG_TOP_143_t UPHY14_CMN_ANAREG_TOP_143;
#define reg_SELLV_RXDATACLK_CH3_3_0  UPHY14_CMN_ANAREG_TOP_143.BF.SELLV_RXDATACLK_CH3_3_0
#define reg_SELLV_RXDATACLK_CH2_3_0  UPHY14_CMN_ANAREG_TOP_143.BF.SELLV_RXDATACLK_CH2_3_0

// 0x90	UPHY14_CMN_ANAREG_TOP_144		Analog Register 144
typedef union {
	struct {
		uint8_t SELLV_RXEOMCLK_CH1_3_0                   : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXEOMCLK_CH0_3_0                   : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_144_t;
__xdata __at( 0x8240 ) volatile UPHY14_CMN_ANAREG_TOP_144_t UPHY14_CMN_ANAREG_TOP_144;
#define reg_SELLV_RXEOMCLK_CH1_3_0  UPHY14_CMN_ANAREG_TOP_144.BF.SELLV_RXEOMCLK_CH1_3_0
#define reg_SELLV_RXEOMCLK_CH0_3_0  UPHY14_CMN_ANAREG_TOP_144.BF.SELLV_RXEOMCLK_CH0_3_0

// 0x91	UPHY14_CMN_ANAREG_TOP_145		Analog Register 145
typedef union {
	struct {
		uint8_t SELLV_RXEOMCLK_CH3_3_0                   : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXEOMCLK_CH2_3_0                   : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_145_t;
__xdata __at( 0x8244 ) volatile UPHY14_CMN_ANAREG_TOP_145_t UPHY14_CMN_ANAREG_TOP_145;
#define reg_SELLV_RXEOMCLK_CH3_3_0  UPHY14_CMN_ANAREG_TOP_145.BF.SELLV_RXEOMCLK_CH3_3_0
#define reg_SELLV_RXEOMCLK_CH2_3_0  UPHY14_CMN_ANAREG_TOP_145.BF.SELLV_RXEOMCLK_CH2_3_0

// 0x92	UPHY14_CMN_ANAREG_TOP_146		Analog Register 146
typedef union {
	struct {
		uint8_t SELLV_RXSAMPELR_CH1_3_0                  : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXSAMPELR_CH0_3_0                  : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_146_t;
__xdata __at( 0x8248 ) volatile UPHY14_CMN_ANAREG_TOP_146_t UPHY14_CMN_ANAREG_TOP_146;
#define reg_SELLV_RXSAMPELR_CH1_3_0  UPHY14_CMN_ANAREG_TOP_146.BF.SELLV_RXSAMPELR_CH1_3_0
#define reg_SELLV_RXSAMPELR_CH0_3_0  UPHY14_CMN_ANAREG_TOP_146.BF.SELLV_RXSAMPELR_CH0_3_0

// 0x93	UPHY14_CMN_ANAREG_TOP_147		Analog Register 147
typedef union {
	struct {
		uint8_t SELLV_RXSAMPELR_CH3_3_0                  : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_RXSAMPELR_CH2_3_0                  : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_147_t;
__xdata __at( 0x824c ) volatile UPHY14_CMN_ANAREG_TOP_147_t UPHY14_CMN_ANAREG_TOP_147;
#define reg_SELLV_RXSAMPELR_CH3_3_0  UPHY14_CMN_ANAREG_TOP_147.BF.SELLV_RXSAMPELR_CH3_3_0
#define reg_SELLV_RXSAMPELR_CH2_3_0  UPHY14_CMN_ANAREG_TOP_147.BF.SELLV_RXSAMPELR_CH2_3_0

// 0x94	UPHY14_CMN_ANAREG_TOP_148		Analog Register 148
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXDLL_CH0_5_0                      : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_148_t;
__xdata __at( 0x8250 ) volatile UPHY14_CMN_ANAREG_TOP_148_t UPHY14_CMN_ANAREG_TOP_148;
#define reg_SELLV_RXDLL_CH0_5_0  UPHY14_CMN_ANAREG_TOP_148.BF.SELLV_RXDLL_CH0_5_0

// 0x95	UPHY14_CMN_ANAREG_TOP_149		Analog Register 149
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXDLL_CH1_5_0                      : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_149_t;
__xdata __at( 0x8254 ) volatile UPHY14_CMN_ANAREG_TOP_149_t UPHY14_CMN_ANAREG_TOP_149;
#define reg_SELLV_RXDLL_CH1_5_0  UPHY14_CMN_ANAREG_TOP_149.BF.SELLV_RXDLL_CH1_5_0

// 0x96	UPHY14_CMN_ANAREG_TOP_150		Analog Register 150
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXDLL_CH2_5_0                      : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_150_t;
__xdata __at( 0x8258 ) volatile UPHY14_CMN_ANAREG_TOP_150_t UPHY14_CMN_ANAREG_TOP_150;
#define reg_SELLV_RXDLL_CH2_5_0  UPHY14_CMN_ANAREG_TOP_150.BF.SELLV_RXDLL_CH2_5_0

// 0x97	UPHY14_CMN_ANAREG_TOP_151		Analog Register 151
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXDLL_CH3_5_0                      : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_151_t;
__xdata __at( 0x825c ) volatile UPHY14_CMN_ANAREG_TOP_151_t UPHY14_CMN_ANAREG_TOP_151;
#define reg_SELLV_RXDLL_CH3_5_0  UPHY14_CMN_ANAREG_TOP_151.BF.SELLV_RXDLL_CH3_5_0

// 0x98	UPHY14_CMN_ANAREG_TOP_152		Analog Register 152
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXEOMDLL_CH0_5_0                   : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_152_t;
__xdata __at( 0x8260 ) volatile UPHY14_CMN_ANAREG_TOP_152_t UPHY14_CMN_ANAREG_TOP_152;
#define reg_SELLV_RXEOMDLL_CH0_5_0  UPHY14_CMN_ANAREG_TOP_152.BF.SELLV_RXEOMDLL_CH0_5_0

// 0x99	UPHY14_CMN_ANAREG_TOP_153		Analog Register 153
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXEOMDLL_CH1_5_0                   : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_153_t;
__xdata __at( 0x8264 ) volatile UPHY14_CMN_ANAREG_TOP_153_t UPHY14_CMN_ANAREG_TOP_153;
#define reg_SELLV_RXEOMDLL_CH1_5_0  UPHY14_CMN_ANAREG_TOP_153.BF.SELLV_RXEOMDLL_CH1_5_0

// 0x9a	UPHY14_CMN_ANAREG_TOP_154		Analog Register 154
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXEOMDLL_CH2_5_0                   : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_154_t;
__xdata __at( 0x8268 ) volatile UPHY14_CMN_ANAREG_TOP_154_t UPHY14_CMN_ANAREG_TOP_154;
#define reg_SELLV_RXEOMDLL_CH2_5_0  UPHY14_CMN_ANAREG_TOP_154.BF.SELLV_RXEOMDLL_CH2_5_0

// 0x9b	UPHY14_CMN_ANAREG_TOP_155		Analog Register 155
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_RXEOMDLL_CH3_5_0                   : 6;	/*  [7:2]     r/w 6'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_155_t;
__xdata __at( 0x826c ) volatile UPHY14_CMN_ANAREG_TOP_155_t UPHY14_CMN_ANAREG_TOP_155;
#define reg_SELLV_RXEOMDLL_CH3_5_0  UPHY14_CMN_ANAREG_TOP_155.BF.SELLV_RXEOMDLL_CH3_5_0

// 0x9c	UPHY14_CMN_ANAREG_TOP_156		Analog Register 156
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH1_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXCLK_CH0_3_0                      : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_156_t;
__xdata __at( 0x8270 ) volatile UPHY14_CMN_ANAREG_TOP_156_t UPHY14_CMN_ANAREG_TOP_156;
#define reg_SELLV_TXCLK_CH1_3_0  UPHY14_CMN_ANAREG_TOP_156.BF.SELLV_TXCLK_CH1_3_0
#define reg_SELLV_TXCLK_CH0_3_0  UPHY14_CMN_ANAREG_TOP_156.BF.SELLV_TXCLK_CH0_3_0

// 0x9d	UPHY14_CMN_ANAREG_TOP_157		Analog Register 157
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH3_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXCLK_CH2_3_0                      : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_157_t;
__xdata __at( 0x8274 ) volatile UPHY14_CMN_ANAREG_TOP_157_t UPHY14_CMN_ANAREG_TOP_157;
#define reg_SELLV_TXCLK_CH3_3_0  UPHY14_CMN_ANAREG_TOP_157.BF.SELLV_TXCLK_CH3_3_0
#define reg_SELLV_TXCLK_CH2_3_0  UPHY14_CMN_ANAREG_TOP_157.BF.SELLV_TXCLK_CH2_3_0

// 0x9e	UPHY14_CMN_ANAREG_TOP_158		Analog Register 158
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH1_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXDATA_CH0_3_0                     : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_158_t;
__xdata __at( 0x8278 ) volatile UPHY14_CMN_ANAREG_TOP_158_t UPHY14_CMN_ANAREG_TOP_158;
#define reg_SELLV_TXDATA_CH1_3_0  UPHY14_CMN_ANAREG_TOP_158.BF.SELLV_TXDATA_CH1_3_0
#define reg_SELLV_TXDATA_CH0_3_0  UPHY14_CMN_ANAREG_TOP_158.BF.SELLV_TXDATA_CH0_3_0

// 0x9f	UPHY14_CMN_ANAREG_TOP_159		Analog Register 159
typedef union {
	struct {
		uint8_t SELLV_TXDATA_CH3_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXDATA_CH2_3_0                     : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_159_t;
__xdata __at( 0x827c ) volatile UPHY14_CMN_ANAREG_TOP_159_t UPHY14_CMN_ANAREG_TOP_159;
#define reg_SELLV_TXDATA_CH3_3_0  UPHY14_CMN_ANAREG_TOP_159.BF.SELLV_TXDATA_CH3_3_0
#define reg_SELLV_TXDATA_CH2_3_0  UPHY14_CMN_ANAREG_TOP_159.BF.SELLV_TXDATA_CH2_3_0

// 0xa0	UPHY14_CMN_ANAREG_TOP_160		Analog Register 160
typedef union {
	struct {
		uint8_t SELLV_TXPRE_CH1_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXPRE_CH0_3_0                      : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_160_t;
__xdata __at( 0x8280 ) volatile UPHY14_CMN_ANAREG_TOP_160_t UPHY14_CMN_ANAREG_TOP_160;
#define reg_SELLV_TXPRE_CH1_3_0  UPHY14_CMN_ANAREG_TOP_160.BF.SELLV_TXPRE_CH1_3_0
#define reg_SELLV_TXPRE_CH0_3_0  UPHY14_CMN_ANAREG_TOP_160.BF.SELLV_TXPRE_CH0_3_0

// 0xa1	UPHY14_CMN_ANAREG_TOP_161		Analog Register 161
typedef union {
	struct {
		uint8_t SELLV_TXPRE_CH3_3_0                      : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t SELLV_TXPRE_CH2_3_0                      : 4;	/*  [7:4]     r/w 4'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_161_t;
__xdata __at( 0x8284 ) volatile UPHY14_CMN_ANAREG_TOP_161_t UPHY14_CMN_ANAREG_TOP_161;
#define reg_SELLV_TXPRE_CH3_3_0  UPHY14_CMN_ANAREG_TOP_161.BF.SELLV_TXPRE_CH3_3_0
#define reg_SELLV_TXPRE_CH2_3_0  UPHY14_CMN_ANAREG_TOP_161.BF.SELLV_TXPRE_CH2_3_0

// 0xa2	UPHY14_CMN_ANAREG_TOP_162		Analog Register 162
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
__xdata __at( 0x8288 ) volatile UPHY14_CMN_ANAREG_TOP_162_t UPHY14_CMN_ANAREG_TOP_162;
#define reg_SELHV_CP_SLLP_2_0  UPHY14_CMN_ANAREG_TOP_162.BF.SELHV_CP_SLLP_2_0
#define reg_SELHV_VGMAST_2_0  UPHY14_CMN_ANAREG_TOP_162.BF.SELHV_VGMAST_2_0

// 0xa3	UPHY14_CMN_ANAREG_TOP_163		Analog Register 163
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
__xdata __at( 0x828c ) volatile UPHY14_CMN_ANAREG_TOP_163_t UPHY14_CMN_ANAREG_TOP_163;
#define reg_SELLV_CLK_INTP_2_0  UPHY14_CMN_ANAREG_TOP_163.BF.SELLV_CLK_INTP_2_0
#define reg_SELLV_FBDIV_2_0  UPHY14_CMN_ANAREG_TOP_163.BF.SELLV_FBDIV_2_0

// 0xa4	UPHY14_CMN_ANAREG_TOP_164		Analog Register 164
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_VCAP_RING_2_0                      : 3;	/*  [4:2]     r/w 3'h2*/
		uint8_t SELLV_PFD_RING_2_0                       : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_164_t;
__xdata __at( 0x8290 ) volatile UPHY14_CMN_ANAREG_TOP_164_t UPHY14_CMN_ANAREG_TOP_164;
#define reg_SELLV_VCAP_RING_2_0  UPHY14_CMN_ANAREG_TOP_164.BF.SELLV_VCAP_RING_2_0
#define reg_SELLV_PFD_RING_2_0  UPHY14_CMN_ANAREG_TOP_164.BF.SELLV_PFD_RING_2_0

// 0xa5	UPHY14_CMN_ANAREG_TOP_165		Analog Register 165
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
__xdata __at( 0x8294 ) volatile UPHY14_CMN_ANAREG_TOP_165_t UPHY14_CMN_ANAREG_TOP_165;
#define reg_IVREF_MASTREG_CUR_SEL_2_0  UPHY14_CMN_ANAREG_TOP_165.BF.IVREF_MASTREG_CUR_SEL_2_0
#define reg_SELHV_VGFFE_DFE_2_0  UPHY14_CMN_ANAREG_TOP_165.BF.SELHV_VGFFE_DFE_2_0

// 0xa6	UPHY14_CMN_ANAREG_TOP_166		Analog Register 166
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t SELLV_VGATE_LCPLLCLK_2_0                 : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t SELLV_VGATE_1GCLK_2_0                    : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_166_t;
__xdata __at( 0x8298 ) volatile UPHY14_CMN_ANAREG_TOP_166_t UPHY14_CMN_ANAREG_TOP_166;
#define reg_SELLV_VGATE_LCPLLCLK_2_0  UPHY14_CMN_ANAREG_TOP_166.BF.SELLV_VGATE_LCPLLCLK_2_0
#define reg_SELLV_VGATE_1GCLK_2_0  UPHY14_CMN_ANAREG_TOP_166.BF.SELLV_VGATE_1GCLK_2_0

// 0xa7	UPHY14_CMN_ANAREG_TOP_167		Analog Register 167
typedef union {
	struct {
		uint8_t FORCE_NO_DLL_RST                         : 1;	/*      0     r/w   0*/
		uint8_t VIND_BAND_SEL                            : 1;	/*      1     r/w 1'h1*/
		uint8_t SELHV_LCPLL_CP_2_0                       : 3;	/*  [4:2]     r/w 3'h3*/
		uint8_t SELLV_VGATE_RINGPLLCLK_2_0               : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_167_t;
__xdata __at( 0x829c ) volatile UPHY14_CMN_ANAREG_TOP_167_t UPHY14_CMN_ANAREG_TOP_167;
#define reg_FORCE_NO_DLL_RST  UPHY14_CMN_ANAREG_TOP_167.BF.FORCE_NO_DLL_RST
#define reg_VIND_BAND_SEL  UPHY14_CMN_ANAREG_TOP_167.BF.VIND_BAND_SEL
#define reg_SELHV_LCPLL_CP_2_0  UPHY14_CMN_ANAREG_TOP_167.BF.SELHV_LCPLL_CP_2_0
#define reg_SELLV_VGATE_RINGPLLCLK_2_0  UPHY14_CMN_ANAREG_TOP_167.BF.SELLV_VGATE_RINGPLLCLK_2_0

// 0xa8	UPHY14_CMN_ANAREG_TOP_168		Analog Register 168
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t FBDIV_9_8                                : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t PLLAMPCAL_EN                             : 1;	/*      6     r/w 1'h0*/
		uint8_t PLLCAL_EN                                : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_168_t;
__xdata __at( 0x82a0 ) volatile UPHY14_CMN_ANAREG_TOP_168_t UPHY14_CMN_ANAREG_TOP_168;
#define reg_FBDIV_9_8  UPHY14_CMN_ANAREG_TOP_168.BF.FBDIV_9_8
#define reg_PLLAMPCAL_EN  UPHY14_CMN_ANAREG_TOP_168.BF.PLLAMPCAL_EN
#define reg_PLLCAL_EN  UPHY14_CMN_ANAREG_TOP_168.BF.PLLCAL_EN

// 0xa9	UPHY14_CMN_ANAREG_TOP_169		Analog Register 169
typedef union {
	struct {
		uint8_t FBDIV_7_0                                : 8;	/*  [7:0]     r/w 8'h18*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_169_t;
__xdata __at( 0x82a4 ) volatile UPHY14_CMN_ANAREG_TOP_169_t UPHY14_CMN_ANAREG_TOP_169;
#define reg_FBDIV_7_0  UPHY14_CMN_ANAREG_TOP_169.BF.FBDIV_7_0

// 0xaa	UPHY14_CMN_ANAREG_TOP_170		Analog Register 170
typedef union {
	struct {
		uint8_t PLL_LPFR_1_0                             : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t PLL_LPFC_1_0                             : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t REFDIV_3_0                               : 4;	/*  [7:4]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_170_t;
__xdata __at( 0x82a8 ) volatile UPHY14_CMN_ANAREG_TOP_170_t UPHY14_CMN_ANAREG_TOP_170;
#define reg_PLL_LPFR_1_0  UPHY14_CMN_ANAREG_TOP_170.BF.PLL_LPFR_1_0
#define reg_PLL_LPFC_1_0  UPHY14_CMN_ANAREG_TOP_170.BF.PLL_LPFC_1_0
#define reg_REFDIV_3_0  UPHY14_CMN_ANAREG_TOP_170.BF.REFDIV_3_0

// 0xab	UPHY14_CMN_ANAREG_TOP_171		Analog Register 171
typedef union {
	struct {
		uint8_t VIND_BIAS_SEL_1_0                        : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t PWEXP_DIS_DIV1G                          : 1;	/*      2     r/w 1'h0*/
		uint8_t PWEXP_DIS                                : 1;	/*      3     r/w 1'h0*/
		uint8_t ICP_3_0                                  : 4;	/*  [7:4]     r/w 4'hF*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_171_t;
__xdata __at( 0x82ac ) volatile UPHY14_CMN_ANAREG_TOP_171_t UPHY14_CMN_ANAREG_TOP_171;
#define reg_VIND_BIAS_SEL_1_0  UPHY14_CMN_ANAREG_TOP_171.BF.VIND_BIAS_SEL_1_0
#define reg_PWEXP_DIS_DIV1G  UPHY14_CMN_ANAREG_TOP_171.BF.PWEXP_DIS_DIV1G
#define reg_PWEXP_DIS  UPHY14_CMN_ANAREG_TOP_171.BF.PWEXP_DIS
#define reg_ICP_3_0  UPHY14_CMN_ANAREG_TOP_171.BF.ICP_3_0

// 0xac	UPHY14_CMN_ANAREG_TOP_172		Analog Register 172
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t VCAP_OFF_SEL_1_0                         : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t VCON_REF_SEL_2_0                         : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_172_t;
__xdata __at( 0x82b0 ) volatile UPHY14_CMN_ANAREG_TOP_172_t UPHY14_CMN_ANAREG_TOP_172;
#define reg_VCAP_OFF_SEL_1_0  UPHY14_CMN_ANAREG_TOP_172.BF.VCAP_OFF_SEL_1_0
#define reg_VCON_REF_SEL_2_0  UPHY14_CMN_ANAREG_TOP_172.BF.VCON_REF_SEL_2_0

// 0xad	UPHY14_CMN_ANAREG_TOP_173		Analog Register 173
typedef union {
	struct {
		uint8_t LCVCO_DAC_MSB_2_0                        : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t LCVCO_DAC_LSB_4_0                        : 5;	/*  [7:3]     r/w 5'h1F*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_173_t;
__xdata __at( 0x82b4 ) volatile UPHY14_CMN_ANAREG_TOP_173_t UPHY14_CMN_ANAREG_TOP_173;
#define reg_LCVCO_DAC_MSB_2_0  UPHY14_CMN_ANAREG_TOP_173.BF.LCVCO_DAC_MSB_2_0
#define reg_LCVCO_DAC_LSB_4_0  UPHY14_CMN_ANAREG_TOP_173.BF.LCVCO_DAC_LSB_4_0

// 0xae	UPHY14_CMN_ANAREG_TOP_174		Analog Register 174
typedef union {
	struct {
		uint8_t TEMPC_DAC_SEL_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_174_t;
__xdata __at( 0x82b8 ) volatile UPHY14_CMN_ANAREG_TOP_174_t UPHY14_CMN_ANAREG_TOP_174;
#define reg_TEMPC_DAC_SEL_7_0  UPHY14_CMN_ANAREG_TOP_174.BF.TEMPC_DAC_SEL_7_0

// 0xaf	UPHY14_CMN_ANAREG_TOP_175		Analog Register 175
typedef union {
	struct {
		uint8_t TEMPC_MUX_HOLD_SEL_3_0                   : 4;	/*  [3:0]     r/w 4'h2*/
		uint8_t TEMPC_MUX_SEL_3_0                        : 4;	/*  [7:4]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_175_t;
__xdata __at( 0x82bc ) volatile UPHY14_CMN_ANAREG_TOP_175_t UPHY14_CMN_ANAREG_TOP_175;
#define reg_TEMPC_MUX_HOLD_SEL_3_0  UPHY14_CMN_ANAREG_TOP_175.BF.TEMPC_MUX_HOLD_SEL_3_0
#define reg_TEMPC_MUX_SEL_3_0  UPHY14_CMN_ANAREG_TOP_175.BF.TEMPC_MUX_SEL_3_0

// 0xb0	UPHY14_CMN_ANAREG_TOP_176		Analog Register 176
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t LCCAP_USB                                : 1;	/*      4     r/w 1'h0*/
		uint8_t TEMPC_RSHRT_SEL                          : 1;	/*      5     r/w 1'h0*/
		uint8_t TEMPC_RSHRT_EN                           : 1;	/*      6     r/w 1'h0*/
		uint8_t TEMPC_DAC_VALID                          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_176_t;
__xdata __at( 0x82c0 ) volatile UPHY14_CMN_ANAREG_TOP_176_t UPHY14_CMN_ANAREG_TOP_176;
#define reg_LCCAP_USB  UPHY14_CMN_ANAREG_TOP_176.BF.LCCAP_USB
#define reg_TEMPC_RSHRT_SEL  UPHY14_CMN_ANAREG_TOP_176.BF.TEMPC_RSHRT_SEL
#define reg_TEMPC_RSHRT_EN  UPHY14_CMN_ANAREG_TOP_176.BF.TEMPC_RSHRT_EN
#define reg_TEMPC_DAC_VALID  UPHY14_CMN_ANAREG_TOP_176.BF.TEMPC_DAC_VALID

// 0xb1	UPHY14_CMN_ANAREG_TOP_177		Analog Register 177
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t LCCAP_LSB_4_0                            : 5;	/*  [7:3]     r/w 5'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_177_t;
__xdata __at( 0x82c4 ) volatile UPHY14_CMN_ANAREG_TOP_177_t UPHY14_CMN_ANAREG_TOP_177;
#define reg_LCCAP_LSB_4_0  UPHY14_CMN_ANAREG_TOP_177.BF.LCCAP_LSB_4_0

// 0xb2	UPHY14_CMN_ANAREG_TOP_178		Analog Register 178
typedef union {
	struct {
		uint8_t VCOAMP_VTH_SEL_3_0                       : 4;	/*  [3:0]     r/w 4'hC*/
		uint8_t LCCAP_MSB_3_0                            : 4;	/*  [7:4]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_178_t;
__xdata __at( 0x82c8 ) volatile UPHY14_CMN_ANAREG_TOP_178_t UPHY14_CMN_ANAREG_TOP_178;
#define reg_VCOAMP_VTH_SEL_3_0  UPHY14_CMN_ANAREG_TOP_178.BF.VCOAMP_VTH_SEL_3_0
#define reg_LCCAP_MSB_3_0  UPHY14_CMN_ANAREG_TOP_178.BF.LCCAP_MSB_3_0

// 0xb3	UPHY14_CMN_ANAREG_TOP_179		Analog Register 179
typedef union {
	struct {
		uint8_t IND_SW_DAC_SEL_1_0                       : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t VCON_MIN_SEL_2_0                         : 3;	/*  [4:2]     r/w 3'h5*/
		uint8_t VCON_MAX_SEL_2_0                         : 3;	/*  [7:5]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_179_t;
__xdata __at( 0x82cc ) volatile UPHY14_CMN_ANAREG_TOP_179_t UPHY14_CMN_ANAREG_TOP_179;
#define reg_IND_SW_DAC_SEL_1_0  UPHY14_CMN_ANAREG_TOP_179.BF.IND_SW_DAC_SEL_1_0
#define reg_VCON_MIN_SEL_2_0  UPHY14_CMN_ANAREG_TOP_179.BF.VCON_MIN_SEL_2_0
#define reg_VCON_MAX_SEL_2_0  UPHY14_CMN_ANAREG_TOP_179.BF.VCON_MAX_SEL_2_0

// 0xb4	UPHY14_CMN_ANAREG_TOP_180		Analog Register 180
typedef union {
	struct {
		uint8_t LCVCO_NSF_IPTAT_EN                       : 1;	/*      0     r/w 1'h1*/
		uint8_t LCVCOCAL_BUF_EN                          : 1;	/*      1     r/w 1'h0*/
		uint8_t IND_GATE_MODE                            : 1;	/*      2     r/w 1'h0*/
		uint8_t VIND_BIAS_EN                             : 1;	/*      3     r/w 1'h1*/
		uint8_t IND_SW_MODE                              : 1;	/*      4     r/w 1'h0*/
		uint8_t VARAC_BIAS_SEL_2_0                       : 3;	/*  [7:5]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_180_t;
__xdata __at( 0x82d0 ) volatile UPHY14_CMN_ANAREG_TOP_180_t UPHY14_CMN_ANAREG_TOP_180;
#define reg_LCVCO_NSF_IPTAT_EN  UPHY14_CMN_ANAREG_TOP_180.BF.LCVCO_NSF_IPTAT_EN
#define reg_LCVCOCAL_BUF_EN  UPHY14_CMN_ANAREG_TOP_180.BF.LCVCOCAL_BUF_EN
#define reg_IND_GATE_MODE  UPHY14_CMN_ANAREG_TOP_180.BF.IND_GATE_MODE
#define reg_VIND_BIAS_EN  UPHY14_CMN_ANAREG_TOP_180.BF.VIND_BIAS_EN
#define reg_IND_SW_MODE  UPHY14_CMN_ANAREG_TOP_180.BF.IND_SW_MODE
#define reg_VARAC_BIAS_SEL_2_0  UPHY14_CMN_ANAREG_TOP_180.BF.VARAC_BIAS_SEL_2_0

// 0xb5	UPHY14_CMN_ANAREG_TOP_181		Analog Register 181
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t LCPLL_DCC_EN                             : 1;	/*      5     r/w 1'h1*/
		uint8_t CLK1G_REFCLK_SEL                         : 1;	/*      6     r/w 1'h0*/
		uint8_t RING_REF_DIV_SEL                         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_181_t;
__xdata __at( 0x82d4 ) volatile UPHY14_CMN_ANAREG_TOP_181_t UPHY14_CMN_ANAREG_TOP_181;
#define reg_LCPLL_DCC_EN  UPHY14_CMN_ANAREG_TOP_181.BF.LCPLL_DCC_EN
#define reg_CLK1G_REFCLK_SEL  UPHY14_CMN_ANAREG_TOP_181.BF.CLK1G_REFCLK_SEL
#define reg_RING_REF_DIV_SEL  UPHY14_CMN_ANAREG_TOP_181.BF.RING_REF_DIV_SEL

// 0xb6	UPHY14_CMN_ANAREG_TOP_182		Analog Register 182
typedef union {
	struct {
		uint8_t LCPLL_DCC_CLK                            : 1;	/*      0     r/w 1'h0*/
		uint8_t LCPLL_DCC_HG                             : 1;	/*      1     r/w 1'h0*/
		uint8_t LCPLL_DCC_5_0                            : 6;	/*  [7:2]     r/w 6'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_182_t;
__xdata __at( 0x82d8 ) volatile UPHY14_CMN_ANAREG_TOP_182_t UPHY14_CMN_ANAREG_TOP_182;
#define reg_LCPLL_DCC_CLK  UPHY14_CMN_ANAREG_TOP_182.BF.LCPLL_DCC_CLK
#define reg_LCPLL_DCC_HG  UPHY14_CMN_ANAREG_TOP_182.BF.LCPLL_DCC_HG
#define reg_LCPLL_DCC_5_0  UPHY14_CMN_ANAREG_TOP_182.BF.LCPLL_DCC_5_0

// 0xb7	UPHY14_CMN_ANAREG_TOP_183		Analog Register 183
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t VCO_SLAVE_ADJ_2_0                        : 3;	/*  [3:1]     r/w 3'h3*/
		uint8_t PLL_REG_SEL_2_0                          : 3;	/*  [6:4]     r/w 3'h4*/
		uint8_t LCPLL_DCC_CAL_EN                         : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_183_t;
__xdata __at( 0x82dc ) volatile UPHY14_CMN_ANAREG_TOP_183_t UPHY14_CMN_ANAREG_TOP_183;
#define reg_VCO_SLAVE_ADJ_2_0  UPHY14_CMN_ANAREG_TOP_183.BF.VCO_SLAVE_ADJ_2_0
#define reg_PLL_REG_SEL_2_0  UPHY14_CMN_ANAREG_TOP_183.BF.PLL_REG_SEL_2_0
#define reg_LCPLL_DCC_CAL_EN  UPHY14_CMN_ANAREG_TOP_183.BF.LCPLL_DCC_CAL_EN

// 0xb8	UPHY14_CMN_ANAREG_TOP_184		Analog Register 184
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DIV_1G_EN                                : 1;	/*      1     r/w 1'h1*/
		uint8_t VCO_REG_MID_SEL_2_0                      : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t VDDR_DAC_ADJ_2_0                         : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_184_t;
__xdata __at( 0x82e0 ) volatile UPHY14_CMN_ANAREG_TOP_184_t UPHY14_CMN_ANAREG_TOP_184;
#define reg_DIV_1G_EN  UPHY14_CMN_ANAREG_TOP_184.BF.DIV_1G_EN
#define reg_VCO_REG_MID_SEL_2_0  UPHY14_CMN_ANAREG_TOP_184.BF.VCO_REG_MID_SEL_2_0
#define reg_VDDR_DAC_ADJ_2_0  UPHY14_CMN_ANAREG_TOP_184.BF.VDDR_DAC_ADJ_2_0

// 0xb9	UPHY14_CMN_ANAREG_TOP_185		Analog Register 185
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t DIV_1G_9_8                               : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_185_t;
__xdata __at( 0x82e4 ) volatile UPHY14_CMN_ANAREG_TOP_185_t UPHY14_CMN_ANAREG_TOP_185;
#define reg_DIV_1G_9_8  UPHY14_CMN_ANAREG_TOP_185.BF.DIV_1G_9_8

// 0xba	UPHY14_CMN_ANAREG_TOP_186		Analog Register 186
typedef union {
	struct {
		uint8_t DIV_1G_7_0                               : 8;	/*  [7:0]     r/w 8'h38*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_186_t;
__xdata __at( 0x82e8 ) volatile UPHY14_CMN_ANAREG_TOP_186_t UPHY14_CMN_ANAREG_TOP_186;
#define reg_DIV_1G_7_0  UPHY14_CMN_ANAREG_TOP_186.BF.DIV_1G_7_0

// 0xbb	UPHY14_CMN_ANAREG_TOP_187		Analog Register 187
typedef union {
	struct {
		uint8_t PLL_OPENLOOP_EN                          : 1;	/*      0     r/w 1'h0*/
		uint8_t SSC_CLK_EN                               : 1;	/*      1     r/w 1'h1*/
		uint8_t CLK_DET_EN                               : 1;	/*      2     r/w 1'h1*/
		uint8_t DPHERCK_DLY_SEL_1_0                      : 2;	/*  [4:3]     r/w 2'h1*/
		uint8_t TX_INTPRESET_EXT                         : 1;	/*      5     r/w 1'h0*/
		uint8_t TX_INTPR_1_0                             : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_187_t;
__xdata __at( 0x82ec ) volatile UPHY14_CMN_ANAREG_TOP_187_t UPHY14_CMN_ANAREG_TOP_187;
#define reg_PLL_OPENLOOP_EN  UPHY14_CMN_ANAREG_TOP_187.BF.PLL_OPENLOOP_EN
#define reg_SSC_CLK_EN  UPHY14_CMN_ANAREG_TOP_187.BF.SSC_CLK_EN
#define reg_CLK_DET_EN  UPHY14_CMN_ANAREG_TOP_187.BF.CLK_DET_EN
#define reg_DPHERCK_DLY_SEL_1_0  UPHY14_CMN_ANAREG_TOP_187.BF.DPHERCK_DLY_SEL_1_0
#define reg_TX_INTPRESET_EXT  UPHY14_CMN_ANAREG_TOP_187.BF.TX_INTPRESET_EXT
#define reg_TX_INTPR_1_0  UPHY14_CMN_ANAREG_TOP_187.BF.TX_INTPR_1_0

// 0xbc	UPHY14_CMN_ANAREG_TOP_188		Analog Register 188
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_FBDIV_RING_9_8                       : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t PLL_REFDIV_RING_3_0                      : 4;	/*  [6:3]     r/w 4'h1*/
		uint8_t PLL_PFD_PW_DLY_RING                      : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_188_t;
__xdata __at( 0x82f0 ) volatile UPHY14_CMN_ANAREG_TOP_188_t UPHY14_CMN_ANAREG_TOP_188;
#define reg_PLL_FBDIV_RING_9_8  UPHY14_CMN_ANAREG_TOP_188.BF.PLL_FBDIV_RING_9_8
#define reg_PLL_REFDIV_RING_3_0  UPHY14_CMN_ANAREG_TOP_188.BF.PLL_REFDIV_RING_3_0
#define reg_PLL_PFD_PW_DLY_RING  UPHY14_CMN_ANAREG_TOP_188.BF.PLL_PFD_PW_DLY_RING

// 0xbd	UPHY14_CMN_ANAREG_TOP_189		Analog Register 189
typedef union {
	struct {
		uint8_t PLL_FBDIV_RING_7_0                       : 8;	/*  [7:0]     r/w 8'h28*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_189_t;
__xdata __at( 0x82f4 ) volatile UPHY14_CMN_ANAREG_TOP_189_t UPHY14_CMN_ANAREG_TOP_189;
#define reg_PLL_FBDIV_RING_7_0  UPHY14_CMN_ANAREG_TOP_189.BF.PLL_FBDIV_RING_7_0

// 0xbe	UPHY14_CMN_ANAREG_TOP_190		Analog Register 190
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t PLL_LPF_R1_SEL_RING_2_0                  : 3;	/*  [3:1]     r/w 3'h1*/
		uint8_t ICP_RING_3_0                             : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_190_t;
__xdata __at( 0x82f8 ) volatile UPHY14_CMN_ANAREG_TOP_190_t UPHY14_CMN_ANAREG_TOP_190;
#define reg_PLL_LPF_R1_SEL_RING_2_0  UPHY14_CMN_ANAREG_TOP_190.BF.PLL_LPF_R1_SEL_RING_2_0
#define reg_ICP_RING_3_0  UPHY14_CMN_ANAREG_TOP_190.BF.ICP_RING_3_0

// 0xbf	UPHY14_CMN_ANAREG_TOP_191		Analog Register 191
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t PLL_LPF_C2_SEL_RING_1_0                  : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t PLL_LPF_C1_SEL_RING_1_0                  : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_191_t;
__xdata __at( 0x82fc ) volatile UPHY14_CMN_ANAREG_TOP_191_t UPHY14_CMN_ANAREG_TOP_191;
#define reg_PLL_LPF_C2_SEL_RING_1_0  UPHY14_CMN_ANAREG_TOP_191.BF.PLL_LPF_C2_SEL_RING_1_0
#define reg_PLL_LPF_C1_SEL_RING_1_0  UPHY14_CMN_ANAREG_TOP_191.BF.PLL_LPF_C1_SEL_RING_1_0

// 0xc0	UPHY14_CMN_ANAREG_TOP_192		Analog Register 192
typedef union {
	struct {
		uint8_t PLL_SLLP_DIS_RING                        : 1;	/*      0     r/w 1'h0*/
		uint8_t PLL_SLLP_DAC_BYPASS_EN_RING              : 1;	/*      1     r/w 1'h0*/
		uint8_t PLL_BAND_SEL_RING                        : 1;	/*      2     r/w 1'h0*/
		uint8_t PLL_SPEED_RING_4_0                       : 5;	/*  [7:3]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_192_t;
__xdata __at( 0x8300 ) volatile UPHY14_CMN_ANAREG_TOP_192_t UPHY14_CMN_ANAREG_TOP_192;
#define reg_PLL_SLLP_DIS_RING  UPHY14_CMN_ANAREG_TOP_192.BF.PLL_SLLP_DIS_RING
#define reg_PLL_SLLP_DAC_BYPASS_EN_RING  UPHY14_CMN_ANAREG_TOP_192.BF.PLL_SLLP_DAC_BYPASS_EN_RING
#define reg_PLL_BAND_SEL_RING  UPHY14_CMN_ANAREG_TOP_192.BF.PLL_BAND_SEL_RING
#define reg_PLL_SPEED_RING_4_0  UPHY14_CMN_ANAREG_TOP_192.BF.PLL_SPEED_RING_4_0

// 0xc1	UPHY14_CMN_ANAREG_TOP_193		Analog Register 193
typedef union {
	struct {
		uint8_t PLL_SLLP_DAC_COARSE_RING_3_0             : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0        : 2;	/*  [5:4]     r/w 2'h2*/
		uint8_t PLL_SLLP_DAC_VALID_RING                  : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_PWEXP_DIS_RING                       : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_193_t;
__xdata __at( 0x8304 ) volatile UPHY14_CMN_ANAREG_TOP_193_t UPHY14_CMN_ANAREG_TOP_193;
#define reg_PLL_SLLP_DAC_COARSE_RING_3_0  UPHY14_CMN_ANAREG_TOP_193.BF.PLL_SLLP_DAC_COARSE_RING_3_0
#define reg_PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0  UPHY14_CMN_ANAREG_TOP_193.BF.PLL_SLLP_DAC_RANGE_SHIFT_RING_1_0
#define reg_PLL_SLLP_DAC_VALID_RING  UPHY14_CMN_ANAREG_TOP_193.BF.PLL_SLLP_DAC_VALID_RING
#define reg_PLL_PWEXP_DIS_RING  UPHY14_CMN_ANAREG_TOP_193.BF.PLL_PWEXP_DIS_RING

// 0xc2	UPHY14_CMN_ANAREG_TOP_194		Analog Register 194
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t PLL_SLLP_DAC_FINE_RING_10_8              : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_194_t;
__xdata __at( 0x8308 ) volatile UPHY14_CMN_ANAREG_TOP_194_t UPHY14_CMN_ANAREG_TOP_194;
#define reg_PLL_SLLP_DAC_FINE_RING_10_8  UPHY14_CMN_ANAREG_TOP_194.BF.PLL_SLLP_DAC_FINE_RING_10_8

// 0xc3	UPHY14_CMN_ANAREG_TOP_195		Analog Register 195
typedef union {
	struct {
		uint8_t PLL_SLLP_DAC_FINE_RING_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_195_t;
__xdata __at( 0x830c ) volatile UPHY14_CMN_ANAREG_TOP_195_t UPHY14_CMN_ANAREG_TOP_195;
#define reg_PLL_SLLP_DAC_FINE_RING_7_0  UPHY14_CMN_ANAREG_TOP_195.BF.PLL_SLLP_DAC_FINE_RING_7_0

// 0xc4	UPHY14_CMN_ANAREG_TOP_196		Analog Register 196
typedef union {
	struct {
		uint8_t CLK_DET_EN_RING                          : 1;	/*      0     r/w 1'h1*/
		uint8_t SSC_CLK_EN_RING                          : 1;	/*      1     r/w 1'h1*/
		uint8_t DPHERCK_DLY_SEL_RING_1_0                 : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t TX_INTPR_RING_1_0                        : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t PLL_SHRTR_RING                           : 1;	/*      6     r/w 1'h0*/
		uint8_t PLL_CAL_EN_RING                          : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_196_t;
__xdata __at( 0x8310 ) volatile UPHY14_CMN_ANAREG_TOP_196_t UPHY14_CMN_ANAREG_TOP_196;
#define reg_CLK_DET_EN_RING  UPHY14_CMN_ANAREG_TOP_196.BF.CLK_DET_EN_RING
#define reg_SSC_CLK_EN_RING  UPHY14_CMN_ANAREG_TOP_196.BF.SSC_CLK_EN_RING
#define reg_DPHERCK_DLY_SEL_RING_1_0  UPHY14_CMN_ANAREG_TOP_196.BF.DPHERCK_DLY_SEL_RING_1_0
#define reg_TX_INTPR_RING_1_0  UPHY14_CMN_ANAREG_TOP_196.BF.TX_INTPR_RING_1_0
#define reg_PLL_SHRTR_RING  UPHY14_CMN_ANAREG_TOP_196.BF.PLL_SHRTR_RING
#define reg_PLL_CAL_EN_RING  UPHY14_CMN_ANAREG_TOP_196.BF.PLL_CAL_EN_RING

// 0xc5	UPHY14_CMN_ANAREG_TOP_197		Analog Register 197
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TSEN_ADC_MODE_1_0                        : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t PLL_SLLP_DAC1P2X_EN_RING                 : 1;	/*      3     r/w 1'h1*/
		uint8_t SEL_IPP_IPTAT_SLLP_RING_1_0              : 2;	/*  [5:4]     r/w 2'h3*/
		uint8_t SEL_VTHVCO_RING                          : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_INTPRESET_EXT_RING                    : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_197_t;
__xdata __at( 0x8314 ) volatile UPHY14_CMN_ANAREG_TOP_197_t UPHY14_CMN_ANAREG_TOP_197;
#define reg_TSEN_ADC_MODE_1_0  UPHY14_CMN_ANAREG_TOP_197.BF.TSEN_ADC_MODE_1_0
#define reg_PLL_SLLP_DAC1P2X_EN_RING  UPHY14_CMN_ANAREG_TOP_197.BF.PLL_SLLP_DAC1P2X_EN_RING
#define reg_SEL_IPP_IPTAT_SLLP_RING_1_0  UPHY14_CMN_ANAREG_TOP_197.BF.SEL_IPP_IPTAT_SLLP_RING_1_0
#define reg_SEL_VTHVCO_RING  UPHY14_CMN_ANAREG_TOP_197.BF.SEL_VTHVCO_RING
#define reg_TX_INTPRESET_EXT_RING  UPHY14_CMN_ANAREG_TOP_197.BF.TX_INTPRESET_EXT_RING

// 0xc6	UPHY14_CMN_ANAREG_TOP_198		Analog Register 198
typedef union {
	struct {
		uint8_t TSEN_ADC_OSR_1_0                         : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t ADC_CH_SEL_2_0                           : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t TSEN_CH_SEL_2_0                          : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_198_t;
__xdata __at( 0x8318 ) volatile UPHY14_CMN_ANAREG_TOP_198_t UPHY14_CMN_ANAREG_TOP_198;
#define reg_TSEN_ADC_OSR_1_0  UPHY14_CMN_ANAREG_TOP_198.BF.TSEN_ADC_OSR_1_0
#define reg_ADC_CH_SEL_2_0  UPHY14_CMN_ANAREG_TOP_198.BF.ADC_CH_SEL_2_0
#define reg_TSEN_CH_SEL_2_0  UPHY14_CMN_ANAREG_TOP_198.BF.TSEN_CH_SEL_2_0

// 0xc7	UPHY14_CMN_ANAREG_TOP_199		Analog Register 199
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
__xdata __at( 0x831c ) volatile UPHY14_CMN_ANAREG_TOP_199_t UPHY14_CMN_ANAREG_TOP_199;
#define reg_TSEN_BIAS  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_BIAS
#define reg_TSEN_ADC_CAL_1_0  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_ADC_CAL_1_0
#define reg_TSEN_ADC_AVG_BYPASS  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_ADC_AVG_BYPASS
#define reg_TSEN_ADC_CHOP_SEL_1_0  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_ADC_CHOP_SEL_1_0
#define reg_TSEN_ADC_CHOP_EN_1_0  UPHY14_CMN_ANAREG_TOP_199.BF.TSEN_ADC_CHOP_EN_1_0

// 0xc8	UPHY14_CMN_ANAREG_TOP_200		Analog Register 200
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
__xdata __at( 0x8320 ) volatile UPHY14_CMN_ANAREG_TOP_200_t UPHY14_CMN_ANAREG_TOP_200;
#define reg_TSEN_ADC_ATEST_SEL_1_0  UPHY14_CMN_ANAREG_TOP_200.BF.TSEN_ADC_ATEST_SEL_1_0
#define reg_BG_TRIM_3_0  UPHY14_CMN_ANAREG_TOP_200.BF.BG_TRIM_3_0
#define reg_TSEN_DEM_EN  UPHY14_CMN_ANAREG_TOP_200.BF.TSEN_DEM_EN

// 0xc9	UPHY14_CMN_ANAREG_TOP_201		Analog Register 201
typedef union {
	struct {
		uint8_t PCM_CTRL_4_0                             : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t PCM_EN                                   : 1;	/*      5     r/w 1'h0*/
		uint8_t TSEN_ADC_RAW_SEL_1_0                     : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_201_t;
__xdata __at( 0x8324 ) volatile UPHY14_CMN_ANAREG_TOP_201_t UPHY14_CMN_ANAREG_TOP_201;
#define reg_PCM_CTRL_4_0  UPHY14_CMN_ANAREG_TOP_201.BF.PCM_CTRL_4_0
#define reg_PCM_EN  UPHY14_CMN_ANAREG_TOP_201.BF.PCM_EN
#define reg_TSEN_ADC_RAW_SEL_1_0  UPHY14_CMN_ANAREG_TOP_201.BF.TSEN_ADC_RAW_SEL_1_0

// 0xca	UPHY14_CMN_ANAREG_TOP_202		Analog Register 202
typedef union {
	struct {
		uint8_t CLK_DIRECTION_REFCLK                     : 1;	/*      0     r/w   1*/
		uint8_t CLK_DIRECTION_RINGPLL                    : 1;	/*      1     r/w   1*/
		uint8_t CLK_DIRECTION_LCPLL                      : 1;	/*      2     r/w   1*/
		uint8_t DRO_SEL_3_0                              : 4;	/*  [6:3]     r/w 4'h0*/
		uint8_t DRO_EN                                   : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_202_t;
__xdata __at( 0x8328 ) volatile UPHY14_CMN_ANAREG_TOP_202_t UPHY14_CMN_ANAREG_TOP_202;
#define reg_CLK_DIRECTION_REFCLK  UPHY14_CMN_ANAREG_TOP_202.BF.CLK_DIRECTION_REFCLK
#define reg_CLK_DIRECTION_RINGPLL  UPHY14_CMN_ANAREG_TOP_202.BF.CLK_DIRECTION_RINGPLL
#define reg_CLK_DIRECTION_LCPLL  UPHY14_CMN_ANAREG_TOP_202.BF.CLK_DIRECTION_LCPLL
#define reg_DRO_SEL_3_0  UPHY14_CMN_ANAREG_TOP_202.BF.DRO_SEL_3_0
#define reg_DRO_EN  UPHY14_CMN_ANAREG_TOP_202.BF.DRO_EN

// 0xcb	UPHY14_CMN_ANAREG_TOP_203		Analog Register 203
typedef union {
	struct {
		uint8_t TEST_7_0                                 : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_203_t;
__xdata __at( 0x832c ) volatile UPHY14_CMN_ANAREG_TOP_203_t UPHY14_CMN_ANAREG_TOP_203;
#define reg_TEST_7_0  UPHY14_CMN_ANAREG_TOP_203.BF.TEST_7_0

// 0xcc	UPHY14_CMN_ANAREG_TOP_204		Analog Register 204
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t AVDD1815_SEL                             : 1;	/*      6     r/w   1*/
		uint8_t TP_EN                                    : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_204_t;
__xdata __at( 0x8330 ) volatile UPHY14_CMN_ANAREG_TOP_204_t UPHY14_CMN_ANAREG_TOP_204;
#define reg_AVDD1815_SEL  UPHY14_CMN_ANAREG_TOP_204.BF.AVDD1815_SEL
#define reg_TP_EN  UPHY14_CMN_ANAREG_TOP_204.BF.TP_EN

// 0xcd	UPHY14_CMN_ANAREG_TOP_205		Analog Register 205
typedef union {
	struct {
		uint8_t ICP_LC_4_0                               : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t LCPLL_PFD_PW_DLY                         : 1;	/*      5     r/w 1'b1*/
		uint8_t CLK500M_DIG_EN                           : 1;	/*      6     r/w 1'b1*/
		uint8_t REF_CLK_RING_SEL                         : 1;	/*      7     r/w 1'b1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_205_t;
__xdata __at( 0x8334 ) volatile UPHY14_CMN_ANAREG_TOP_205_t UPHY14_CMN_ANAREG_TOP_205;
#define reg_ICP_LC_4_0  UPHY14_CMN_ANAREG_TOP_205.BF.ICP_LC_4_0
#define reg_LCPLL_PFD_PW_DLY  UPHY14_CMN_ANAREG_TOP_205.BF.LCPLL_PFD_PW_DLY
#define reg_CLK500M_DIG_EN  UPHY14_CMN_ANAREG_TOP_205.BF.CLK500M_DIG_EN
#define reg_REF_CLK_RING_SEL  UPHY14_CMN_ANAREG_TOP_205.BF.REF_CLK_RING_SEL

// 0xce	UPHY14_CMN_ANAREG_TOP_206		Analog Register 206
typedef union {
	struct {
		uint8_t ANA_RSVD4_7_0                            : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_206_t;
__xdata __at( 0x8338 ) volatile UPHY14_CMN_ANAREG_TOP_206_t UPHY14_CMN_ANAREG_TOP_206;
#define reg_ANA_RSVD4_7_0  UPHY14_CMN_ANAREG_TOP_206.BF.ANA_RSVD4_7_0

// 0xcf	UPHY14_CMN_ANAREG_TOP_207		Analog Register 207
typedef union {
	struct {
		uint8_t ANA_RSVD3_7_0                            : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_207_t;
__xdata __at( 0x833c ) volatile UPHY14_CMN_ANAREG_TOP_207_t UPHY14_CMN_ANAREG_TOP_207;
#define reg_ANA_RSVD3_7_0  UPHY14_CMN_ANAREG_TOP_207.BF.ANA_RSVD3_7_0

// 0xd0	UPHY14_CMN_ANAREG_TOP_208		Analog Register 208
typedef union {
	struct {
		uint8_t INTPI_PLL5_2_0                           : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h1*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w 1'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_208_t;
__xdata __at( 0x8340 ) volatile UPHY14_CMN_ANAREG_TOP_208_t UPHY14_CMN_ANAREG_TOP_208;
#define reg_INTPI_PLL5_2_0  UPHY14_CMN_ANAREG_TOP_208.BF.INTPI_PLL5_2_0

// 0xd1	UPHY14_CMN_ANAREG_TOP_209		Analog Register 209
typedef union {
	struct {
		uint8_t INTPI_PLL3_2_0                           : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t INTPI_PLL2_2_0                           : 3;	/*  [5:3]     r/w 3'h6*/
		uint8_t AVDDR12_SEL_MAST_REG                     : 1;	/*      6     r/w 1'h1*/
		uint8_t VDD_CP_SELB                              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_209_t;
__xdata __at( 0x8344 ) volatile UPHY14_CMN_ANAREG_TOP_209_t UPHY14_CMN_ANAREG_TOP_209;
#define reg_INTPI_PLL3_2_0  UPHY14_CMN_ANAREG_TOP_209.BF.INTPI_PLL3_2_0
#define reg_INTPI_PLL2_2_0  UPHY14_CMN_ANAREG_TOP_209.BF.INTPI_PLL2_2_0
#define reg_AVDDR12_SEL_MAST_REG  UPHY14_CMN_ANAREG_TOP_209.BF.AVDDR12_SEL_MAST_REG
#define reg_VDD_CP_SELB  UPHY14_CMN_ANAREG_TOP_209.BF.VDD_CP_SELB

// 0xd2	UPHY14_CMN_ANAREG_TOP_210		Analog Register 210
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t LCPLL_IND_RANGE_SEL                      : 1;	/*      1     r/w 1'h0*/
		uint8_t CMN_IPP_SLLP_CUR_SEL_2_0                 : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t INTPI_PLL4_2_0                           : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_CMN_ANAREG_TOP_210_t;
__xdata __at( 0x8348 ) volatile UPHY14_CMN_ANAREG_TOP_210_t UPHY14_CMN_ANAREG_TOP_210;
#define reg_LCPLL_IND_RANGE_SEL  UPHY14_CMN_ANAREG_TOP_210.BF.LCPLL_IND_RANGE_SEL
#define reg_CMN_IPP_SLLP_CUR_SEL_2_0  UPHY14_CMN_ANAREG_TOP_210.BF.CMN_IPP_SLLP_CUR_SEL_2_0
#define reg_INTPI_PLL4_2_0  UPHY14_CMN_ANAREG_TOP_210.BF.INTPI_PLL4_2_0

#endif
