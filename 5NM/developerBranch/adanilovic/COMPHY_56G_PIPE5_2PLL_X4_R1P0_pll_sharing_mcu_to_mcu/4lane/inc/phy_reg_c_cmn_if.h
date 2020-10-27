#ifndef PHY_REG_C_CMN_IF_H
#define PHY_REG_C_CMN_IF_H



// 0x0000	INPUT_PIN_DEBUG_CMN_REG0		PHY Isolation Debug Register0
typedef union {
	struct {
		uint8_t PIN_GPI_CMN_RD_7_0                       : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
		uint8_t PIN_DIRECT_ACCESS_EN_RD                  : 1;	/*     15       r   0*/
		uint8_t PIN_CID_REV_RD_7_0                       : 8;	/*[23:16]       r   0*/
		uint8_t RESERVED_24                              : 4;	/*[27:24]     r/w   0*/
		uint8_t PIN_BG_RDY_RD                            : 1;	/*     28       r   0*/
		uint8_t PIN_AVDD_SEL_RD_2_0                      : 3;	/*[31:29]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG0_t;
__xdata __at( 0xa400 ) volatile INPUT_PIN_DEBUG_CMN_REG0_t INPUT_PIN_DEBUG_CMN_REG0;
#define reg_PIN_GPI_CMN_RD_7_0  INPUT_PIN_DEBUG_CMN_REG0.BF.PIN_GPI_CMN_RD_7_0
#define reg_PIN_DIRECT_ACCESS_EN_RD  INPUT_PIN_DEBUG_CMN_REG0.BF.PIN_DIRECT_ACCESS_EN_RD
#define reg_PIN_CID_REV_RD_7_0  INPUT_PIN_DEBUG_CMN_REG0.BF.PIN_CID_REV_RD_7_0
#define reg_PIN_BG_RDY_RD  INPUT_PIN_DEBUG_CMN_REG0.BF.PIN_BG_RDY_RD
#define reg_PIN_AVDD_SEL_RD_2_0  INPUT_PIN_DEBUG_CMN_REG0.BF.PIN_AVDD_SEL_RD_2_0

// 0x0004	INPUT_PIN_DEBUG_CMN_REG1		PHY Isolation Debug Register1
typedef union {
	struct {
		uint8_t PIN_SPD_CFG_RD_3_0                       : 4;	/*  [3:0]       r   0*/
		uint8_t PIN_PHY_MODE_RD_2_0                      : 3;	/*  [6:4]       r   0*/
		uint8_t PIN_PENABLE_RD                           : 1;	/*      7       r   0*/
		uint8_t PIN_PADDR_RD_16_0_b0                     : 8;	/* [24:8]       r   0*/
		uint8_t PIN_PADDR_RD_16_0_b1                     : 8;	/* [24:8]       r   0*/
		uint8_t PIN_PADDR_RD_16_0_b2                     : 1;	/* [24:8]       r   0*/
		uint8_t RESERVED_25                              : 6;	/*[30:25]     r/w   0*/
		uint8_t PIN_UART_RX_CMN_RD                       : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG1_t;
__xdata __at( 0xa404 ) volatile INPUT_PIN_DEBUG_CMN_REG1_t INPUT_PIN_DEBUG_CMN_REG1;
#define reg_PIN_SPD_CFG_RD_3_0  INPUT_PIN_DEBUG_CMN_REG1.BF.PIN_SPD_CFG_RD_3_0
#define reg_PIN_PHY_MODE_RD_2_0  INPUT_PIN_DEBUG_CMN_REG1.BF.PIN_PHY_MODE_RD_2_0
#define reg_PIN_PENABLE_RD  INPUT_PIN_DEBUG_CMN_REG1.BF.PIN_PENABLE_RD
#define reg_PIN_PADDR_RD_16_0_b0  INPUT_PIN_DEBUG_CMN_REG1.BF.PIN_PADDR_RD_16_0_b0
#define reg_PIN_PADDR_RD_16_0_b1  INPUT_PIN_DEBUG_CMN_REG1.BF.PIN_PADDR_RD_16_0_b1
#define reg_PIN_PADDR_RD_16_0_b2  INPUT_PIN_DEBUG_CMN_REG1.BF.PIN_PADDR_RD_16_0_b2
#define reg_PIN_UART_RX_CMN_RD  INPUT_PIN_DEBUG_CMN_REG1.BF.PIN_UART_RX_CMN_RD

// 0x0008	INPUT_PIN_DEBUG_CMN_REG2		PHY Isolation Debug Register2
typedef union {
	struct {
		uint8_t PIN_PWDATA_RD_31_8_b0                    : 8;	/* [23:0]       r   0*/
		uint8_t PIN_PWDATA_RD_31_8_b1                    : 8;	/* [23:0]       r   0*/
		uint8_t PIN_PWDATA_RD_31_8_b2                    : 8;	/* [23:0]       r   0*/
		uint8_t RESERVED_24                              : 5;	/*[28:24]     r/w   0*/
		uint8_t PIN_PU_IVREF_RD                          : 1;	/*     29       r   0*/
		uint8_t PIN_PIPE_SEL_RD                          : 1;	/*     30       r   0*/
		uint8_t PIN_PSEL_RD                              : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG2_t;
__xdata __at( 0xa408 ) volatile INPUT_PIN_DEBUG_CMN_REG2_t INPUT_PIN_DEBUG_CMN_REG2;
#define reg_PIN_PWDATA_RD_31_8_b0  INPUT_PIN_DEBUG_CMN_REG2.BF.PIN_PWDATA_RD_31_8_b0
#define reg_PIN_PWDATA_RD_31_8_b1  INPUT_PIN_DEBUG_CMN_REG2.BF.PIN_PWDATA_RD_31_8_b1
#define reg_PIN_PWDATA_RD_31_8_b2  INPUT_PIN_DEBUG_CMN_REG2.BF.PIN_PWDATA_RD_31_8_b2
#define reg_PIN_PU_IVREF_RD  INPUT_PIN_DEBUG_CMN_REG2.BF.PIN_PU_IVREF_RD
#define reg_PIN_PIPE_SEL_RD  INPUT_PIN_DEBUG_CMN_REG2.BF.PIN_PIPE_SEL_RD
#define reg_PIN_PSEL_RD  INPUT_PIN_DEBUG_CMN_REG2.BF.PIN_PSEL_RD

// 0x000c	INPUT_PIN_DEBUG_CMN_REG3		PHY Isolation Debug Register3
typedef union {
	struct {
		uint8_t PIN_RESERVED_INPUT_RD_15_0_b0            : 8;	/* [15:0]       r   0*/
		uint8_t PIN_RESERVED_INPUT_RD_15_0_b1            : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 6;	/*[21:16]     r/w   0*/
		uint8_t PIN_PBURST_EN_RD                         : 1;	/*     22       r   0*/
		uint8_t PIN_PWRITE_RD                            : 1;	/*     23       r   0*/
		uint8_t PIN_PWDATA_RD_7_0                        : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG3_t;
__xdata __at( 0xa40c ) volatile INPUT_PIN_DEBUG_CMN_REG3_t INPUT_PIN_DEBUG_CMN_REG3;
#define reg_PIN_RESERVED_INPUT_RD_15_0_b0  INPUT_PIN_DEBUG_CMN_REG3.BF.PIN_RESERVED_INPUT_RD_15_0_b0
#define reg_PIN_RESERVED_INPUT_RD_15_0_b1  INPUT_PIN_DEBUG_CMN_REG3.BF.PIN_RESERVED_INPUT_RD_15_0_b1
#define reg_PIN_PBURST_EN_RD  INPUT_PIN_DEBUG_CMN_REG3.BF.PIN_PBURST_EN_RD
#define reg_PIN_PWRITE_RD  INPUT_PIN_DEBUG_CMN_REG3.BF.PIN_PWRITE_RD
#define reg_PIN_PWDATA_RD_7_0  INPUT_PIN_DEBUG_CMN_REG3.BF.PIN_PWDATA_RD_7_0
#define reg_PIN_RESERVED_INPUT_RD_15_0  INPUT_PIN_DEBUG_CMN_REG3.WT.W0

// 0x0010	INPUT_PIN_DEBUG_CMN_REG4		PHY Isolation Debug Register4
typedef union {
	struct {
		uint8_t PIN_CACHE_DATA_CMN_RD_31_8_b0            : 8;	/* [23:0]       r   0*/
		uint8_t PIN_CACHE_DATA_CMN_RD_31_8_b1            : 8;	/* [23:0]       r   0*/
		uint8_t PIN_CACHE_DATA_CMN_RD_31_8_b2            : 8;	/* [23:0]       r   0*/
		uint8_t RESERVED_24                              : 5;	/*[28:24]     r/w   0*/
		uint8_t PIN_SIF_SEL_RD                           : 1;	/*     29       r   0*/
		uint8_t PIN_SIF_DEN_N_RD                         : 1;	/*     30       r   0*/
		uint8_t PIN_SIF_DATA_IN_RD                       : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG4_t;
__xdata __at( 0xa410 ) volatile INPUT_PIN_DEBUG_CMN_REG4_t INPUT_PIN_DEBUG_CMN_REG4;
#define reg_PIN_CACHE_DATA_CMN_RD_31_8_b0  INPUT_PIN_DEBUG_CMN_REG4.BF.PIN_CACHE_DATA_CMN_RD_31_8_b0
#define reg_PIN_CACHE_DATA_CMN_RD_31_8_b1  INPUT_PIN_DEBUG_CMN_REG4.BF.PIN_CACHE_DATA_CMN_RD_31_8_b1
#define reg_PIN_CACHE_DATA_CMN_RD_31_8_b2  INPUT_PIN_DEBUG_CMN_REG4.BF.PIN_CACHE_DATA_CMN_RD_31_8_b2
#define reg_PIN_SIF_SEL_RD  INPUT_PIN_DEBUG_CMN_REG4.BF.PIN_SIF_SEL_RD
#define reg_PIN_SIF_DEN_N_RD  INPUT_PIN_DEBUG_CMN_REG4.BF.PIN_SIF_DEN_N_RD
#define reg_PIN_SIF_DATA_IN_RD  INPUT_PIN_DEBUG_CMN_REG4.BF.PIN_SIF_DATA_IN_RD

// 0x0014	INPUT_PIN_DEBUG_CMN_REG5		PHY Isolation Debug Register5
typedef union {
	struct {
		uint8_t GPI_CMN_7_0                              : 8;	/*  [7:0]     r/w   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
		uint8_t BG_RDY_FM_REG                            : 1;	/*     15     r/w   0*/
		uint8_t BG_RDY                                   : 1;	/*     16     r/w   0*/
		uint8_t AVDD_SEL_FM_REG                          : 1;	/*     17     r/w   0*/
		uint8_t AVDD_SEL_2_0                             : 3;	/*[20:18]     r/w   0*/
		uint8_t PIN_MCU_ONEWIRE_IN_CMN_RD                : 1;	/*     21       r   0*/
		uint8_t PIN_FW_READY_RD                          : 1;	/*     22       r   0*/
		uint8_t PIN_CACHE_DATA_VALID_CMN_RD              : 1;	/*     23       r   0*/
		uint8_t PIN_CACHE_DATA_CMN_RD_7_0                : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG5_t;
__xdata __at( 0xa414 ) volatile INPUT_PIN_DEBUG_CMN_REG5_t INPUT_PIN_DEBUG_CMN_REG5;
#define reg_GPI_CMN_7_0  INPUT_PIN_DEBUG_CMN_REG5.BF.GPI_CMN_7_0
#define reg_BG_RDY_FM_REG  INPUT_PIN_DEBUG_CMN_REG5.BF.BG_RDY_FM_REG
#define reg_BG_RDY  INPUT_PIN_DEBUG_CMN_REG5.BF.BG_RDY
#define reg_AVDD_SEL_FM_REG  INPUT_PIN_DEBUG_CMN_REG5.BF.AVDD_SEL_FM_REG
#define reg_AVDD_SEL_2_0  INPUT_PIN_DEBUG_CMN_REG5.BF.AVDD_SEL_2_0
#define reg_PIN_MCU_ONEWIRE_IN_CMN_RD  INPUT_PIN_DEBUG_CMN_REG5.BF.PIN_MCU_ONEWIRE_IN_CMN_RD
#define reg_PIN_FW_READY_RD  INPUT_PIN_DEBUG_CMN_REG5.BF.PIN_FW_READY_RD
#define reg_PIN_CACHE_DATA_VALID_CMN_RD  INPUT_PIN_DEBUG_CMN_REG5.BF.PIN_CACHE_DATA_VALID_CMN_RD
#define reg_PIN_CACHE_DATA_CMN_RD_7_0  INPUT_PIN_DEBUG_CMN_REG5.BF.PIN_CACHE_DATA_CMN_RD_7_0

// 0x0018	INPUT_PIN_DEBUG_CMN_REG6		PHY Isolation Debug Register6
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t PU_IVREF_FM_REG                          : 1;	/*     17     r/w   0*/
		uint8_t PU_IVREF                                 : 1;	/*     18     r/w   0*/
		uint8_t SPD_CFG_FM_REG                           : 1;	/*     19     r/w   0*/
		uint8_t SPD_CFG_3_0                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:24]     r/w   0*/
		uint8_t PHY_MODE_FM_REG                          : 1;	/*     27     r/w   0*/
		uint8_t PHY_MODE_2_0                             : 3;	/*[30:28]     r/w   0*/
		uint8_t GPI_CMN_FM_REG                           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG6_t;
__xdata __at( 0xa418 ) volatile INPUT_PIN_DEBUG_CMN_REG6_t INPUT_PIN_DEBUG_CMN_REG6;
#define reg_PU_IVREF_FM_REG  INPUT_PIN_DEBUG_CMN_REG6.BF.PU_IVREF_FM_REG
#define reg_PU_IVREF  INPUT_PIN_DEBUG_CMN_REG6.BF.PU_IVREF
#define reg_SPD_CFG_FM_REG  INPUT_PIN_DEBUG_CMN_REG6.BF.SPD_CFG_FM_REG
#define reg_SPD_CFG_3_0  INPUT_PIN_DEBUG_CMN_REG6.BF.SPD_CFG_3_0
#define reg_PHY_MODE_FM_REG  INPUT_PIN_DEBUG_CMN_REG6.BF.PHY_MODE_FM_REG
#define reg_PHY_MODE_2_0  INPUT_PIN_DEBUG_CMN_REG6.BF.PHY_MODE_2_0
#define reg_GPI_CMN_FM_REG  INPUT_PIN_DEBUG_CMN_REG6.BF.GPI_CMN_FM_REG

// 0x001c	INPUT_PIN_DEBUG_CMN_REG7		PHY Isolation Debug Register7
typedef union {
	struct {
		uint8_t ANA_CMN_ID_RD_15_8                       : 8;	/*  [7:0]       r   0*/
		uint8_t ANA_CMN_ANA_RSVD_OUT_RD_15_0_b0          : 8;	/* [23:8]       r   0*/
		uint8_t ANA_CMN_ANA_RSVD_OUT_RD_15_0_b1          : 8;	/* [23:8]       r   0*/
		uint8_t RESERVED_24                              : 5;	/*[28:24]     r/w   0*/
		uint8_t FW_READY_FM_REG                          : 1;	/*     29     r/w   0*/
		uint8_t FW_READY                                 : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG7_t;
__xdata __at( 0xa41c ) volatile INPUT_PIN_DEBUG_CMN_REG7_t INPUT_PIN_DEBUG_CMN_REG7;
#define reg_ANA_CMN_ID_RD_15_8  INPUT_PIN_DEBUG_CMN_REG7.BF.ANA_CMN_ID_RD_15_8
#define reg_ANA_CMN_ANA_RSVD_OUT_RD_15_0_b0  INPUT_PIN_DEBUG_CMN_REG7.BF.ANA_CMN_ANA_RSVD_OUT_RD_15_0_b0
#define reg_ANA_CMN_ANA_RSVD_OUT_RD_15_0_b1  INPUT_PIN_DEBUG_CMN_REG7.BF.ANA_CMN_ANA_RSVD_OUT_RD_15_0_b1
#define reg_FW_READY_FM_REG  INPUT_PIN_DEBUG_CMN_REG7.BF.FW_READY_FM_REG
#define reg_FW_READY  INPUT_PIN_DEBUG_CMN_REG7.BF.FW_READY
#define reg_ANA_CMN_ANA_RSVD_OUT_RD_15_0  INPUT_PIN_DEBUG_CMN_REG7.WT.W1

// 0x0020	INPUT_PIN_DEBUG_CMN_REG8		PHY Isolation Debug Register8
typedef union {
	struct {
		uint8_t ANA_CMN_TSEN_ADC_DATA_RD_15_0_b0         : 8;	/* [15:0]       r   0*/
		uint8_t ANA_CMN_TSEN_ADC_DATA_RD_15_0_b1         : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 6;	/*[21:16]     r/w   0*/
		uint8_t ANA_CMN_PROCESSMON_FCLK_RDY_RD           : 1;	/*     22       r   0*/
		uint8_t ANA_CMN_PROCESSMON_FCLK_RD               : 1;	/*     23       r   0*/
		uint8_t ANA_CMN_ID_RD_7_0                        : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG8_t;
__xdata __at( 0xa420 ) volatile INPUT_PIN_DEBUG_CMN_REG8_t INPUT_PIN_DEBUG_CMN_REG8;
#define reg_ANA_CMN_TSEN_ADC_DATA_RD_15_0_b0  INPUT_PIN_DEBUG_CMN_REG8.BF.ANA_CMN_TSEN_ADC_DATA_RD_15_0_b0
#define reg_ANA_CMN_TSEN_ADC_DATA_RD_15_0_b1  INPUT_PIN_DEBUG_CMN_REG8.BF.ANA_CMN_TSEN_ADC_DATA_RD_15_0_b1
#define reg_ANA_CMN_PROCESSMON_FCLK_RDY_RD  INPUT_PIN_DEBUG_CMN_REG8.BF.ANA_CMN_PROCESSMON_FCLK_RDY_RD
#define reg_ANA_CMN_PROCESSMON_FCLK_RD  INPUT_PIN_DEBUG_CMN_REG8.BF.ANA_CMN_PROCESSMON_FCLK_RD
#define reg_ANA_CMN_ID_RD_7_0  INPUT_PIN_DEBUG_CMN_REG8.BF.ANA_CMN_ID_RD_7_0
#define reg_ANA_CMN_TSEN_ADC_DATA_RD_15_0  INPUT_PIN_DEBUG_CMN_REG8.WT.W0

// 0x0024	INPUT_PIN_DEBUG_CMN_REG9		PHY Isolation Debug Register9
typedef union {
	struct {
		uint8_t ANA_CMN_ANA_RSVD_OUT_15_8                : 8;	/*  [7:0]     r/w   0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w   0*/
		uint8_t ANA_CMN_TSEN_ADC_RDY_RD                  : 1;	/*     15       r   0*/
		uint8_t ANA_CMN_TSEN_ADC_DATA_RAW_RD_15_0_b0     : 8;	/*[31:16]       r   0*/
		uint8_t ANA_CMN_TSEN_ADC_DATA_RAW_RD_15_0_b1     : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG9_t;
__xdata __at( 0xa424 ) volatile INPUT_PIN_DEBUG_CMN_REG9_t INPUT_PIN_DEBUG_CMN_REG9;
#define reg_ANA_CMN_ANA_RSVD_OUT_15_8  INPUT_PIN_DEBUG_CMN_REG9.BF.ANA_CMN_ANA_RSVD_OUT_15_8
#define reg_ANA_CMN_TSEN_ADC_RDY_RD  INPUT_PIN_DEBUG_CMN_REG9.BF.ANA_CMN_TSEN_ADC_RDY_RD
#define reg_ANA_CMN_TSEN_ADC_DATA_RAW_RD_15_0_b0  INPUT_PIN_DEBUG_CMN_REG9.BF.ANA_CMN_TSEN_ADC_DATA_RAW_RD_15_0_b0
#define reg_ANA_CMN_TSEN_ADC_DATA_RAW_RD_15_0_b1  INPUT_PIN_DEBUG_CMN_REG9.BF.ANA_CMN_TSEN_ADC_DATA_RAW_RD_15_0_b1
#define reg_ANA_CMN_TSEN_ADC_DATA_RAW_RD_15_0  INPUT_PIN_DEBUG_CMN_REG9.WT.W1

// 0x0028	INPUT_PIN_DEBUG_CMN_REG10		PHY Isolation Debug Register10
typedef union {
	struct {
		uint8_t ANA_CMN_TSEN_ADC_DATA_15_0_b0            : 8;	/* [15:0]     r/w   0*/
		uint8_t ANA_CMN_TSEN_ADC_DATA_15_0_b1            : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_16                              : 5;	/*[20:16]     r/w   0*/
		uint8_t ANA_CMN_PROCESSMON_FCLK_RDY_FM_REG       : 1;	/*     21     r/w   0*/
		uint8_t ANA_CMN_PROCESSMON_FCLK_RDY              : 1;	/*     22     r/w   0*/
		uint8_t ANA_CMN_ANA_RSVD_OUT_FM_REG              : 1;	/*     23     r/w   0*/
		uint8_t ANA_CMN_ANA_RSVD_OUT_7_0                 : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG10_t;
__xdata __at( 0xa428 ) volatile INPUT_PIN_DEBUG_CMN_REG10_t INPUT_PIN_DEBUG_CMN_REG10;
#define reg_ANA_CMN_TSEN_ADC_DATA_15_0_b0  INPUT_PIN_DEBUG_CMN_REG10.BF.ANA_CMN_TSEN_ADC_DATA_15_0_b0
#define reg_ANA_CMN_TSEN_ADC_DATA_15_0_b1  INPUT_PIN_DEBUG_CMN_REG10.BF.ANA_CMN_TSEN_ADC_DATA_15_0_b1
#define reg_ANA_CMN_PROCESSMON_FCLK_RDY_FM_REG  INPUT_PIN_DEBUG_CMN_REG10.BF.ANA_CMN_PROCESSMON_FCLK_RDY_FM_REG
#define reg_ANA_CMN_PROCESSMON_FCLK_RDY  INPUT_PIN_DEBUG_CMN_REG10.BF.ANA_CMN_PROCESSMON_FCLK_RDY
#define reg_ANA_CMN_ANA_RSVD_OUT_FM_REG  INPUT_PIN_DEBUG_CMN_REG10.BF.ANA_CMN_ANA_RSVD_OUT_FM_REG
#define reg_ANA_CMN_ANA_RSVD_OUT_7_0  INPUT_PIN_DEBUG_CMN_REG10.BF.ANA_CMN_ANA_RSVD_OUT_7_0
#define reg_ANA_CMN_TSEN_ADC_DATA_15_0  INPUT_PIN_DEBUG_CMN_REG10.WT.W0

// 0x002c	INPUT_PIN_DEBUG_CMN_REG11		PHY Isolation Debug Register11
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [28:0]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/* [28:0]     r/w   0*/
		uint8_t ANA_CMN_TSEN_ADC_RDY_FM_REG              : 1;	/*     29     r/w   0*/
		uint8_t ANA_CMN_TSEN_ADC_RDY                     : 1;	/*     30     r/w   0*/
		uint8_t ANA_CMN_TSEN_ADC_DATA_FM_REG             : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_CMN_REG11_t;
__xdata __at( 0xa42c ) volatile INPUT_PIN_DEBUG_CMN_REG11_t INPUT_PIN_DEBUG_CMN_REG11;
#define reg_ANA_CMN_TSEN_ADC_RDY_FM_REG  INPUT_PIN_DEBUG_CMN_REG11.BF.ANA_CMN_TSEN_ADC_RDY_FM_REG
#define reg_ANA_CMN_TSEN_ADC_RDY  INPUT_PIN_DEBUG_CMN_REG11.BF.ANA_CMN_TSEN_ADC_RDY
#define reg_ANA_CMN_TSEN_ADC_DATA_FM_REG  INPUT_PIN_DEBUG_CMN_REG11.BF.ANA_CMN_TSEN_ADC_DATA_FM_REG

#endif
