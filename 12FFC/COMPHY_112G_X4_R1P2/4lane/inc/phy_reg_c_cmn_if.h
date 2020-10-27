#ifndef PHY_REG_C_CMN_IF_H
#define PHY_REG_C_CMN_IF_H



// 0x0000	INPUT_PIN_CMN_DEBUG_REG0		PHY Isolation Debug Register0
typedef union {
	struct {
		uint8_t PIN_RESERVED_INPUT_RD_15_8               : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 3;	/* [10:8]     r/w   0*/
		uint8_t PIN_REFCLK_SEL_RD                        : 1;	/*     11       r   0*/
		uint8_t PIN_PU_IVREF_RD                          : 1;	/*     12       r   0*/
		uint8_t PIN_PHY_MODE_RD_2_0                      : 3;	/*[15:13]       r   0*/
		uint8_t PIN_GPI_CMN_RD_7_0                       : 8;	/*[23:16]       r   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w   0*/
		uint8_t PIN_REF_FREF_SEL_RD_4_0                  : 5;	/*[30:26]       r   0*/
		uint8_t PIN_BG_RDY_RD                            : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_CMN_DEBUG_REG0_t;
__xdata __at( 0xa400 ) volatile INPUT_PIN_CMN_DEBUG_REG0_t INPUT_PIN_CMN_DEBUG_REG0;
#define reg_PIN_RESERVED_INPUT_RD_15_8  INPUT_PIN_CMN_DEBUG_REG0.BF.PIN_RESERVED_INPUT_RD_15_8
#define reg_PIN_REFCLK_SEL_RD  INPUT_PIN_CMN_DEBUG_REG0.BF.PIN_REFCLK_SEL_RD
#define reg_PIN_PU_IVREF_RD  INPUT_PIN_CMN_DEBUG_REG0.BF.PIN_PU_IVREF_RD
#define reg_PIN_PHY_MODE_RD_2_0  INPUT_PIN_CMN_DEBUG_REG0.BF.PIN_PHY_MODE_RD_2_0
#define reg_PIN_GPI_CMN_RD_7_0  INPUT_PIN_CMN_DEBUG_REG0.BF.PIN_GPI_CMN_RD_7_0
#define reg_PIN_REF_FREF_SEL_RD_4_0  INPUT_PIN_CMN_DEBUG_REG0.BF.PIN_REF_FREF_SEL_RD_4_0
#define reg_PIN_BG_RDY_RD  INPUT_PIN_CMN_DEBUG_REG0.BF.PIN_BG_RDY_RD

// 0x0004	INPUT_PIN_CMN_DEBUG_REG1		PHY Isolation Debug Register1
typedef union {
	struct {
		uint8_t ANA_CMN_ANA_RSVD_OUT_RD_15_0_b0          : 8;	/* [15:0]       r   0*/
		uint8_t ANA_CMN_ANA_RSVD_OUT_RD_15_0_b1          : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 7;	/*[22:16]     r/w   0*/
		uint8_t PIN_REFCLK_DIS_RD                        : 1;	/*     23       r   0*/
		uint8_t PIN_RESERVED_INPUT_RD_7_0                : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_CMN_DEBUG_REG1_t;
__xdata __at( 0xa404 ) volatile INPUT_PIN_CMN_DEBUG_REG1_t INPUT_PIN_CMN_DEBUG_REG1;
#define reg_ANA_CMN_ANA_RSVD_OUT_RD_15_0_b0  INPUT_PIN_CMN_DEBUG_REG1.BF.ANA_CMN_ANA_RSVD_OUT_RD_15_0_b0
#define reg_ANA_CMN_ANA_RSVD_OUT_RD_15_0_b1  INPUT_PIN_CMN_DEBUG_REG1.BF.ANA_CMN_ANA_RSVD_OUT_RD_15_0_b1
#define reg_PIN_REFCLK_DIS_RD  INPUT_PIN_CMN_DEBUG_REG1.BF.PIN_REFCLK_DIS_RD
#define reg_PIN_RESERVED_INPUT_RD_7_0  INPUT_PIN_CMN_DEBUG_REG1.BF.PIN_RESERVED_INPUT_RD_7_0
#define reg_ANA_CMN_ANA_RSVD_OUT_RD_15_0  INPUT_PIN_CMN_DEBUG_REG1.WT.W0

// 0x0008	INPUT_PIN_CMN_DEBUG_REG2		PHY Isolation Debug Register2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [14:0]     r/w   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:0]     r/w   0*/
		uint8_t ANA_CMN_TSEN_ADC_RDY_RD                  : 1;	/*     15       r   0*/
		uint8_t ANA_CMN_TSEN_ADC_DATA_RD_9_0_b0          : 8;	/*[25:16]       r   0*/
		uint8_t ANA_CMN_TSEN_ADC_DATA_RD_9_0_b1          : 2;	/*[25:16]       r   0*/
		uint8_t RESERVED_26                              : 5;	/*[30:26]     r/w   0*/
		uint8_t ANA_CMN_PROCESSMON_FCLK_RDY_RD           : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_CMN_DEBUG_REG2_t;
__xdata __at( 0xa408 ) volatile INPUT_PIN_CMN_DEBUG_REG2_t INPUT_PIN_CMN_DEBUG_REG2;
#define reg_ANA_CMN_TSEN_ADC_RDY_RD  INPUT_PIN_CMN_DEBUG_REG2.BF.ANA_CMN_TSEN_ADC_RDY_RD
#define reg_ANA_CMN_TSEN_ADC_DATA_RD_9_0_b0  INPUT_PIN_CMN_DEBUG_REG2.BF.ANA_CMN_TSEN_ADC_DATA_RD_9_0_b0
#define reg_ANA_CMN_TSEN_ADC_DATA_RD_9_0_b1  INPUT_PIN_CMN_DEBUG_REG2.BF.ANA_CMN_TSEN_ADC_DATA_RD_9_0_b1
#define reg_ANA_CMN_PROCESSMON_FCLK_RDY_RD  INPUT_PIN_CMN_DEBUG_REG2.BF.ANA_CMN_PROCESSMON_FCLK_RDY_RD

#endif
