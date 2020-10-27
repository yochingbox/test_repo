#ifndef PHY_REG_C_PLL_TS_IF_LANE_H
#define PHY_REG_C_PLL_TS_IF_LANE_H



// 0x0000	INPUT_PIN_DEBUG_PLL_TS_REG0		PHY Isolation Debug Register0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t ANA_PLL_TS_TEMPC_LEVEL_TODIG_RD_LANE_1_0 : 2;	/*  [5:4]       r   0*/
		uint8_t ANA_PLL_TS_LOCK_RD_LANE                  : 1;	/*      6       r   0*/
		uint8_t ANA_PLL_TS_FBC_PLLCAL_RD_LANE            : 1;	/*      7       r   0*/
		uint8_t ANA_PLL_TS_CDR_DPLL_DCO_DAC_RD_LANE_6_0  : 7;	/* [14:8]       r   0*/
		uint8_t ANA_PLL_TS_CDR_DCO_READY_RD_LANE         : 1;	/*     15       r   0*/
		uint8_t ANA_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b0  : 8;	/*[31:16]       r   0*/
		uint8_t ANA_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b1  : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PLL_TS_REG0_t;
__xdata __at( 0x5700 ) volatile INPUT_PIN_DEBUG_PLL_TS_REG0_t INPUT_PIN_DEBUG_PLL_TS_REG0;
#define reg_ANA_PLL_TS_TEMPC_LEVEL_TODIG_RD_LANE_1_0  INPUT_PIN_DEBUG_PLL_TS_REG0.BF.ANA_PLL_TS_TEMPC_LEVEL_TODIG_RD_LANE_1_0
#define reg_ANA_PLL_TS_LOCK_RD_LANE  INPUT_PIN_DEBUG_PLL_TS_REG0.BF.ANA_PLL_TS_LOCK_RD_LANE
#define reg_ANA_PLL_TS_FBC_PLLCAL_RD_LANE  INPUT_PIN_DEBUG_PLL_TS_REG0.BF.ANA_PLL_TS_FBC_PLLCAL_RD_LANE
#define reg_ANA_PLL_TS_CDR_DPLL_DCO_DAC_RD_LANE_6_0  INPUT_PIN_DEBUG_PLL_TS_REG0.BF.ANA_PLL_TS_CDR_DPLL_DCO_DAC_RD_LANE_6_0
#define reg_ANA_PLL_TS_CDR_DCO_READY_RD_LANE  INPUT_PIN_DEBUG_PLL_TS_REG0.BF.ANA_PLL_TS_CDR_DCO_READY_RD_LANE
#define reg_ANA_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b0  INPUT_PIN_DEBUG_PLL_TS_REG0.BF.ANA_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b0
#define reg_ANA_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b1  INPUT_PIN_DEBUG_PLL_TS_REG0.BF.ANA_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0_b1
#define reg_ANA_PLL_TS_RSVD_PLL_OUT_RD_LANE_15_0  INPUT_PIN_DEBUG_PLL_TS_REG0.WT.W1

// 0x0004	INPUT_PIN_DEBUG_PLL_TS_REG1		PHY Isolation Debug Register1
typedef union {
	struct {
		uint8_t ANA_PLL_TS_CDR_DPLL_DCO_DAC_FM_REG_LANE  : 1;	/*      0     r/w   0*/
		uint8_t ANA_PLL_TS_CDR_DPLL_DCO_DAC_LANE_6_0     : 7;	/*  [7:1]     r/w   0*/
		uint8_t RESERVED_8                               : 5;	/* [12:8]     r/w   0*/
		uint8_t ANA_PLL_TS_CDR_DCO_READY_FM_REG_LANE     : 1;	/*     13     r/w   0*/
		uint8_t ANA_PLL_TS_CDR_DCO_READY_LANE            : 1;	/*     14     r/w   0*/
		uint8_t ANA_PLL_TS_RSVD_PLL_OUT_FM_REG_LANE      : 1;	/*     15     r/w   0*/
		uint8_t ANA_PLL_TS_RSVD_PLL_OUT_LANE_15_0_b0     : 8;	/*[31:16]     r/w   0*/
		uint8_t ANA_PLL_TS_RSVD_PLL_OUT_LANE_15_0_b1     : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PLL_TS_REG1_t;
__xdata __at( 0x5704 ) volatile INPUT_PIN_DEBUG_PLL_TS_REG1_t INPUT_PIN_DEBUG_PLL_TS_REG1;
#define reg_ANA_PLL_TS_CDR_DPLL_DCO_DAC_FM_REG_LANE  INPUT_PIN_DEBUG_PLL_TS_REG1.BF.ANA_PLL_TS_CDR_DPLL_DCO_DAC_FM_REG_LANE
#define reg_ANA_PLL_TS_CDR_DPLL_DCO_DAC_LANE_6_0  INPUT_PIN_DEBUG_PLL_TS_REG1.BF.ANA_PLL_TS_CDR_DPLL_DCO_DAC_LANE_6_0
#define reg_ANA_PLL_TS_CDR_DCO_READY_FM_REG_LANE  INPUT_PIN_DEBUG_PLL_TS_REG1.BF.ANA_PLL_TS_CDR_DCO_READY_FM_REG_LANE
#define reg_ANA_PLL_TS_CDR_DCO_READY_LANE  INPUT_PIN_DEBUG_PLL_TS_REG1.BF.ANA_PLL_TS_CDR_DCO_READY_LANE
#define reg_ANA_PLL_TS_RSVD_PLL_OUT_FM_REG_LANE  INPUT_PIN_DEBUG_PLL_TS_REG1.BF.ANA_PLL_TS_RSVD_PLL_OUT_FM_REG_LANE
#define reg_ANA_PLL_TS_RSVD_PLL_OUT_LANE_15_0_b0  INPUT_PIN_DEBUG_PLL_TS_REG1.BF.ANA_PLL_TS_RSVD_PLL_OUT_LANE_15_0_b0
#define reg_ANA_PLL_TS_RSVD_PLL_OUT_LANE_15_0_b1  INPUT_PIN_DEBUG_PLL_TS_REG1.BF.ANA_PLL_TS_RSVD_PLL_OUT_LANE_15_0_b1
#define reg_ANA_PLL_TS_RSVD_PLL_OUT_LANE_15_0  INPUT_PIN_DEBUG_PLL_TS_REG1.WT.W1

// 0x0008	INPUT_PIN_DEBUG_PLL_TS_REG2		PHY Isolation Debug Register2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [26:0]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/* [26:0]     r/w   0*/
		uint8_t ANA_PLL_TS_TEMPC_LEVEL_TODIG_FM_REG_LANE : 1;	/*     27     r/w   0*/
		uint8_t ANA_PLL_TS_TEMPC_LEVEL_TODIG_LANE_1_0    : 2;	/*[29:28]     r/w   0*/
		uint8_t ANA_PLL_TS_LOCK_FM_REG_LANE              : 1;	/*     30     r/w   0*/
		uint8_t ANA_PLL_TS_LOCK_LANE                     : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INPUT_PIN_DEBUG_PLL_TS_REG2_t;
__xdata __at( 0x5708 ) volatile INPUT_PIN_DEBUG_PLL_TS_REG2_t INPUT_PIN_DEBUG_PLL_TS_REG2;
#define reg_ANA_PLL_TS_TEMPC_LEVEL_TODIG_FM_REG_LANE  INPUT_PIN_DEBUG_PLL_TS_REG2.BF.ANA_PLL_TS_TEMPC_LEVEL_TODIG_FM_REG_LANE
#define reg_ANA_PLL_TS_TEMPC_LEVEL_TODIG_LANE_1_0  INPUT_PIN_DEBUG_PLL_TS_REG2.BF.ANA_PLL_TS_TEMPC_LEVEL_TODIG_LANE_1_0
#define reg_ANA_PLL_TS_LOCK_FM_REG_LANE  INPUT_PIN_DEBUG_PLL_TS_REG2.BF.ANA_PLL_TS_LOCK_FM_REG_LANE
#define reg_ANA_PLL_TS_LOCK_LANE  INPUT_PIN_DEBUG_PLL_TS_REG2.BF.ANA_PLL_TS_LOCK_LANE

#endif
