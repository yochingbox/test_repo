#ifndef PHY_REG_C_XDAT_CMN_H
#define PHY_REG_C_XDAT_CMN_H



// 0x0400	FW_REV		Firmware Revision
typedef union {
	struct {
		uint8_t FW_BUILD_VER_7_0                         : 8;	/*  [7:0]     r/w   0*/
		uint8_t FW_PATCH_VER_7_0                         : 8;	/* [15:8]     r/w   0*/
		uint8_t FW_MINOR_VER_7_0                         : 8;	/*[23:16]     r/w   0*/
		uint8_t FW_MAJOR_VER_7_0                         : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FW_REV_t;
__xdata __at( 0xe400 ) volatile FW_REV_t FW_REV;
#define cmx_FW_BUILD_VER_7_0  FW_REV.BF.FW_BUILD_VER_7_0
#define cmx_FW_PATCH_VER_7_0  FW_REV.BF.FW_PATCH_VER_7_0
#define cmx_FW_MINOR_VER_7_0  FW_REV.BF.FW_MINOR_VER_7_0
#define cmx_FW_MAJOR_VER_7_0  FW_REV.BF.FW_MAJOR_VER_7_0

// 0x0404	CONTROL_CONFIG0		Calibration enable control
typedef union {
	struct {
		uint8_t MCU_INIT_DONE                            : 1;	/*      0       r   0*/
		uint8_t RESERVED_1                               : 5;	/*  [5:1]     r/w 5'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t REF_CLK_RING_SEL                         : 1;	/*      8       r   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t EXT_FORCE_CAL_DONE                       : 1;	/*     17     r/w   0*/
		uint8_t BYPASS_DELAY_4_2                         : 3;	/*[20:18]     r/w 3'h0*/
		uint8_t BYPASS_POWER_ON_DELAY                    : 1;	/*     21     r/w   0*/
		uint8_t BYPASS_XDAT_INIT                         : 1;	/*     22     r/w   0*/
		uint8_t BYPASS_SPEED_TABLE_LOAD                  : 1;	/*     23     r/w   0*/
		uint8_t MASTER_MCU_SEL_7_0                       : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG0_t;
__xdata __at( 0xe404 ) volatile CONTROL_CONFIG0_t CONTROL_CONFIG0;
#define cmx_MCU_INIT_DONE  CONTROL_CONFIG0.BF.MCU_INIT_DONE
#define cmx_REF_CLK_RING_SEL  CONTROL_CONFIG0.BF.REF_CLK_RING_SEL
#define cmx_EXT_FORCE_CAL_DONE  CONTROL_CONFIG0.BF.EXT_FORCE_CAL_DONE
#define cmx_BYPASS_DELAY_4_2  CONTROL_CONFIG0.BF.BYPASS_DELAY_4_2
#define cmx_BYPASS_POWER_ON_DELAY  CONTROL_CONFIG0.BF.BYPASS_POWER_ON_DELAY
#define cmx_BYPASS_XDAT_INIT  CONTROL_CONFIG0.BF.BYPASS_XDAT_INIT
#define cmx_BYPASS_SPEED_TABLE_LOAD  CONTROL_CONFIG0.BF.BYPASS_SPEED_TABLE_LOAD
#define cmx_MASTER_MCU_SEL_7_0  CONTROL_CONFIG0.BF.MASTER_MCU_SEL_7_0

// 0x0408	CONTROL_CONFIG1		Calibration Configuration 1
typedef union {
	struct {
		uint8_t CAL_DONE                                 : 1;	/*      0       r   0*/
		uint8_t CAL_START                                : 1;	/*      1     r/w   0*/
		uint8_t PLL_CAL_DONE                             : 1;	/*      2       r   0*/
		uint8_t PLL_TEMP_CAL_DONE                        : 1;	/*      3       r   0*/
		uint8_t PLL_AMP_CAL_DONE                         : 1;	/*      4       r   0*/
		uint8_t PLL_CAL_PASS                             : 1;	/*      5       r   0*/
		uint8_t PLL_TEMP_CAL_PASS                        : 1;	/*      6       r   0*/
		uint8_t PLL_AMP_CAL_PASS                         : 1;	/*      7       r   0*/
		uint8_t PROCESS_CAL_PASS                         : 1;	/*      8       r   0*/
		uint8_t PROCESS_CAL_DONE                         : 1;	/*      9       r   0*/
		uint8_t PLLDCC_CAL_PASS                          : 1;	/*     10       r   0*/
		uint8_t PLLDCC_CAL_DONE                          : 1;	/*     11       r   0*/
		uint8_t PLL_CAL_RING_PASS                        : 1;	/*     12       r   0*/
		uint8_t PLL_CAL_RING_DONE                        : 1;	/*     13       r   0*/
		uint8_t RING_PLL_CAL_EN                          : 1;	/*     14     r/w   1*/
		uint8_t PLLDCC_CAL_EN                            : 1;	/*     15     r/w   1*/
		uint8_t PLL_CAL_EN                               : 1;	/*     16     r/w   1*/
		uint8_t PLL_TEMP_CAL_EN                          : 1;	/*     17     r/w   1*/
		uint8_t DLL_CAL_EN                               : 1;	/*     18     r/w   1*/
		uint8_t TXDETECT_CAL_EN                          : 1;	/*     19     r/w   0*/
		uint8_t RXDCC_DLL_CAL_EN                         : 1;	/*     20     r/w   1*/
		uint8_t RXDCC_C_CAL_EN                           : 1;	/*     21     r/w   1*/
		uint8_t RXDCC_EOM_CAL_EN                         : 1;	/*     22     r/w   1*/
		uint8_t RXALIGN90_CAL_EN                         : 1;	/*     23     r/w   1*/
		uint8_t EOM_ALIGN_CAL_EN                         : 1;	/*     24     r/w   1*/
		uint8_t SAMPLER_CAL_EN                           : 1;	/*     25     r/w   1*/
		uint8_t TXIMP_CAL_EN                             : 1;	/*     26     r/w   1*/
		uint8_t RXIMP_CAL_EN                             : 1;	/*     27     r/w   1*/
		uint8_t VDD_CAL_EN                               : 1;	/*     28     r/w   1*/
		uint8_t TXDCC_CAL_EN                             : 1;	/*     29     r/w   1*/
		uint8_t PROCESS_CAL_EN                           : 1;	/*     30     r/w   1*/
		uint8_t SQ_CAL_EN                                : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG1_t;
__xdata __at( 0xe408 ) volatile CONTROL_CONFIG1_t CONTROL_CONFIG1;
#define cmx_CAL_DONE  CONTROL_CONFIG1.BF.CAL_DONE
#define cmx_CAL_START  CONTROL_CONFIG1.BF.CAL_START
#define cmx_PLL_CAL_DONE  CONTROL_CONFIG1.BF.PLL_CAL_DONE
#define cmx_PLL_TEMP_CAL_DONE  CONTROL_CONFIG1.BF.PLL_TEMP_CAL_DONE
#define cmx_PLL_AMP_CAL_DONE  CONTROL_CONFIG1.BF.PLL_AMP_CAL_DONE
#define cmx_PLL_CAL_PASS  CONTROL_CONFIG1.BF.PLL_CAL_PASS
#define cmx_PLL_TEMP_CAL_PASS  CONTROL_CONFIG1.BF.PLL_TEMP_CAL_PASS
#define cmx_PLL_AMP_CAL_PASS  CONTROL_CONFIG1.BF.PLL_AMP_CAL_PASS
#define cmx_PROCESS_CAL_PASS  CONTROL_CONFIG1.BF.PROCESS_CAL_PASS
#define cmx_PROCESS_CAL_DONE  CONTROL_CONFIG1.BF.PROCESS_CAL_DONE
#define cmx_PLLDCC_CAL_PASS  CONTROL_CONFIG1.BF.PLLDCC_CAL_PASS
#define cmx_PLLDCC_CAL_DONE  CONTROL_CONFIG1.BF.PLLDCC_CAL_DONE
#define cmx_PLL_CAL_RING_PASS  CONTROL_CONFIG1.BF.PLL_CAL_RING_PASS
#define cmx_PLL_CAL_RING_DONE  CONTROL_CONFIG1.BF.PLL_CAL_RING_DONE
#define cmx_RING_PLL_CAL_EN  CONTROL_CONFIG1.BF.RING_PLL_CAL_EN
#define cmx_PLLDCC_CAL_EN  CONTROL_CONFIG1.BF.PLLDCC_CAL_EN
#define cmx_PLL_CAL_EN  CONTROL_CONFIG1.BF.PLL_CAL_EN
#define cmx_PLL_TEMP_CAL_EN  CONTROL_CONFIG1.BF.PLL_TEMP_CAL_EN
#define cmx_DLL_CAL_EN  CONTROL_CONFIG1.BF.DLL_CAL_EN
#define cmx_TXDETECT_CAL_EN  CONTROL_CONFIG1.BF.TXDETECT_CAL_EN
#define cmx_RXDCC_DLL_CAL_EN  CONTROL_CONFIG1.BF.RXDCC_DLL_CAL_EN
#define cmx_RXDCC_C_CAL_EN  CONTROL_CONFIG1.BF.RXDCC_C_CAL_EN
#define cmx_RXDCC_EOM_CAL_EN  CONTROL_CONFIG1.BF.RXDCC_EOM_CAL_EN
#define cmx_RXALIGN90_CAL_EN  CONTROL_CONFIG1.BF.RXALIGN90_CAL_EN
#define cmx_EOM_ALIGN_CAL_EN  CONTROL_CONFIG1.BF.EOM_ALIGN_CAL_EN
#define cmx_SAMPLER_CAL_EN  CONTROL_CONFIG1.BF.SAMPLER_CAL_EN
#define cmx_TXIMP_CAL_EN  CONTROL_CONFIG1.BF.TXIMP_CAL_EN
#define cmx_RXIMP_CAL_EN  CONTROL_CONFIG1.BF.RXIMP_CAL_EN
#define cmx_VDD_CAL_EN  CONTROL_CONFIG1.BF.VDD_CAL_EN
#define cmx_TXDCC_CAL_EN  CONTROL_CONFIG1.BF.TXDCC_CAL_EN
#define cmx_PROCESS_CAL_EN  CONTROL_CONFIG1.BF.PROCESS_CAL_EN
#define cmx_SQ_CAL_EN  CONTROL_CONFIG1.BF.SQ_CAL_EN

// 0x040c	CONTROL_CONFIG2		Calibration Configuration 2
typedef union {
	struct {
		uint8_t TSHRTR_7_0                               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t THOLD_SEL2_7_0                           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TEMPC_DAC_MODE_1_0                       : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t TEMPC_STEP_CTRL_2_0                      : 3;	/*[20:18]     r/w 3'h0*/
		uint8_t SPDCHG_FAST_PLL_MODE_1_0                 : 2;	/*[22:21]     r/w 2'h0*/
		uint8_t FAST_PLL_MODE                            : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t PLLAMP_CAL_SPEEDUP_DISABLE               : 1;	/*     26     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t FORCE_CONT_CAL_SKIP                      : 1;	/*     28     r/w   0*/
		uint8_t TXDCC_PDIV_CAL_EN                        : 1;	/*     29     r/w   1*/
		uint8_t TXDETECT_CAL_CONT_EN                     : 1;	/*     30     r/w   0*/
		uint8_t PROCESS_TRACK_EN                         : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG2_t;
__xdata __at( 0xe40c ) volatile CONTROL_CONFIG2_t CONTROL_CONFIG2;
#define cmx_TSHRTR_7_0  CONTROL_CONFIG2.BF.TSHRTR_7_0
#define cmx_THOLD_SEL2_7_0  CONTROL_CONFIG2.BF.THOLD_SEL2_7_0
#define cmx_TEMPC_DAC_MODE_1_0  CONTROL_CONFIG2.BF.TEMPC_DAC_MODE_1_0
#define cmx_TEMPC_STEP_CTRL_2_0  CONTROL_CONFIG2.BF.TEMPC_STEP_CTRL_2_0
#define cmx_SPDCHG_FAST_PLL_MODE_1_0  CONTROL_CONFIG2.BF.SPDCHG_FAST_PLL_MODE_1_0
#define cmx_FAST_PLL_MODE  CONTROL_CONFIG2.BF.FAST_PLL_MODE
#define cmx_PLLAMP_CAL_SPEEDUP_DISABLE  CONTROL_CONFIG2.BF.PLLAMP_CAL_SPEEDUP_DISABLE
#define cmx_FORCE_CONT_CAL_SKIP  CONTROL_CONFIG2.BF.FORCE_CONT_CAL_SKIP
#define cmx_TXDCC_PDIV_CAL_EN  CONTROL_CONFIG2.BF.TXDCC_PDIV_CAL_EN
#define cmx_TXDETECT_CAL_CONT_EN  CONTROL_CONFIG2.BF.TXDETECT_CAL_CONT_EN
#define cmx_PROCESS_TRACK_EN  CONTROL_CONFIG2.BF.PROCESS_TRACK_EN

// 0x0410	CONTROL_CONFIG3		Calibration Configuration 3
typedef union {
	struct {
		uint8_t FBC_RATIO_7_0                            : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t VCOAMP_VTH_NORMAL_7_0                    : 8;	/* [15:8]     r/w 8'hC*/
		uint8_t VCOAMP_VTH_AMP_7_0                       : 8;	/*[23:16]     r/w 8'hF*/
		uint8_t VCOAMP_VTH_FREQ_7_0                      : 8;	/*[31:24]     r/w 8'hE*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG3_t;
__xdata __at( 0xe410 ) volatile CONTROL_CONFIG3_t CONTROL_CONFIG3;
#define cmx_FBC_RATIO_7_0  CONTROL_CONFIG3.BF.FBC_RATIO_7_0
#define cmx_VCOAMP_VTH_NORMAL_7_0  CONTROL_CONFIG3.BF.VCOAMP_VTH_NORMAL_7_0
#define cmx_VCOAMP_VTH_AMP_7_0  CONTROL_CONFIG3.BF.VCOAMP_VTH_AMP_7_0
#define cmx_VCOAMP_VTH_FREQ_7_0  CONTROL_CONFIG3.BF.VCOAMP_VTH_FREQ_7_0

// 0x0414	CONTROL_CONFIG4		Calibration Configuration 4
typedef union {
	struct {
		uint8_t PLL_SPEED_THRESH_RING_15_0_b0            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_SPEED_THRESH_RING_15_0_b1            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TPLLAMP1_1_0                             : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t TPLLAMP0_1_0                             : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t TPLLFREQ0_1_0                            : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t TPLLFREQ1_1_0                            : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t TPLLFREQ2_1_0                            : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t TPLLFREQ3_1_0                            : 2;	/*[27:26]     r/w 2'h0*/
		uint8_t TPLLFREQ4                                : 1;	/*     28     r/w 1'h0*/
		uint8_t PLLDCC_CAL_CONT_EN                       : 1;	/*     29     r/w 1'h1*/
		uint8_t PLLAMP_CAL_CONT_EN                       : 1;	/*     30     r/w 1'h1*/
		uint8_t SKIP_CDR_DFE_SCHEME                      : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CONTROL_CONFIG4_t;
__xdata __at( 0xe414 ) volatile CONTROL_CONFIG4_t CONTROL_CONFIG4;
#define cmx_PLL_SPEED_THRESH_RING_15_0_b0  CONTROL_CONFIG4.BF.PLL_SPEED_THRESH_RING_15_0_b0
#define cmx_PLL_SPEED_THRESH_RING_15_0_b1  CONTROL_CONFIG4.BF.PLL_SPEED_THRESH_RING_15_0_b1
#define cmx_TPLLAMP1_1_0  CONTROL_CONFIG4.BF.TPLLAMP1_1_0
#define cmx_TPLLAMP0_1_0  CONTROL_CONFIG4.BF.TPLLAMP0_1_0
#define cmx_TPLLFREQ0_1_0  CONTROL_CONFIG4.BF.TPLLFREQ0_1_0
#define cmx_TPLLFREQ1_1_0  CONTROL_CONFIG4.BF.TPLLFREQ1_1_0
#define cmx_TPLLFREQ2_1_0  CONTROL_CONFIG4.BF.TPLLFREQ2_1_0
#define cmx_TPLLFREQ3_1_0  CONTROL_CONFIG4.BF.TPLLFREQ3_1_0
#define cmx_TPLLFREQ4  CONTROL_CONFIG4.BF.TPLLFREQ4
#define cmx_PLLDCC_CAL_CONT_EN  CONTROL_CONFIG4.BF.PLLDCC_CAL_CONT_EN
#define cmx_PLLAMP_CAL_CONT_EN  CONTROL_CONFIG4.BF.PLLAMP_CAL_CONT_EN
#define cmx_SKIP_CDR_DFE_SCHEME  CONTROL_CONFIG4.BF.SKIP_CDR_DFE_SCHEME
#define cmx_PLL_SPEED_THRESH_RING_15_0  CONTROL_CONFIG4.WT.W0

// 0x0418	CONTROL_CONFIG5		Calibration Configuration 5
typedef union {
	struct {
		uint8_t SPEED_THRESH_15_0_b0                     : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t SPEED_THRESH_15_0_b1                     : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_RATE_SEL_7_0                         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_RATE_SEL_RING_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CONTROL_CONFIG5_t;
__xdata __at( 0xe418 ) volatile CONTROL_CONFIG5_t CONTROL_CONFIG5;
#define cmx_SPEED_THRESH_15_0_b0  CONTROL_CONFIG5.BF.SPEED_THRESH_15_0_b0
#define cmx_SPEED_THRESH_15_0_b1  CONTROL_CONFIG5.BF.SPEED_THRESH_15_0_b1
#define cmx_PLL_RATE_SEL_7_0  CONTROL_CONFIG5.BF.PLL_RATE_SEL_7_0
#define cmx_PLL_RATE_SEL_RING_7_0  CONTROL_CONFIG5.BF.PLL_RATE_SEL_RING_7_0
#define cmx_SPEED_THRESH_15_0  CONTROL_CONFIG5.WT.W0

// 0x041C	CONTROL_CONFIG7		Calibration Threshold 1
typedef union {
	struct {
		uint8_t CAL_PROC_TT2FF_7_0                       : 8;	/*  [7:0]     r/w 8'h15*/
		uint8_t CAL_PROC_SS2TT_7_0                       : 8;	/* [15:8]     r/w 8'h10*/
		uint8_t CAL_PROC_SUBSS_7_0                       : 8;	/*[23:16]     r/w 8'h13*/
		uint8_t CAL_SQ_THRESH_IN_7_0                     : 8;	/*[31:24]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG7_t;
__xdata __at( 0xe41c ) volatile CONTROL_CONFIG7_t CONTROL_CONFIG7;
#define cmx_CAL_PROC_TT2FF_7_0  CONTROL_CONFIG7.BF.CAL_PROC_TT2FF_7_0
#define cmx_CAL_PROC_SS2TT_7_0  CONTROL_CONFIG7.BF.CAL_PROC_SS2TT_7_0
#define cmx_CAL_PROC_SUBSS_7_0  CONTROL_CONFIG7.BF.CAL_PROC_SUBSS_7_0
#define cmx_CAL_SQ_THRESH_IN_7_0  CONTROL_CONFIG7.BF.CAL_SQ_THRESH_IN_7_0

// 0x0420	CAL_DATA0		Calibration Result 0
typedef union {
	struct {
		uint8_t CAL_LCVCO_DAC_LSB_R0_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_LCVCO_DAC_LSB_R1_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TEMPC_MUX_SEL_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TEMPC_MUX_HOLD_SEL_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_DATA0_t;
__xdata __at( 0xe420 ) volatile CAL_DATA0_t CAL_DATA0;
#define cmx_CAL_LCVCO_DAC_LSB_R0_7_0  CAL_DATA0.BF.CAL_LCVCO_DAC_LSB_R0_7_0
#define cmx_CAL_LCVCO_DAC_LSB_R1_7_0  CAL_DATA0.BF.CAL_LCVCO_DAC_LSB_R1_7_0
#define cmx_CAL_TEMPC_MUX_SEL_7_0  CAL_DATA0.BF.CAL_TEMPC_MUX_SEL_7_0
#define cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0  CAL_DATA0.BF.CAL_TEMPC_MUX_HOLD_SEL_7_0

// 0x0424	CAL_DATA1		Calibration Result 1
typedef union {
	struct {
		uint8_t CAL_LCVCO_DAC_MSB_R0_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_LCVCO_DAC_MSB_R1_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TEMPC_DAC_SEL_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_DATA1_t;
__xdata __at( 0xe424 ) volatile CAL_DATA1_t CAL_DATA1;
#define cmx_CAL_LCVCO_DAC_MSB_R0_7_0  CAL_DATA1.BF.CAL_LCVCO_DAC_MSB_R0_7_0
#define cmx_CAL_LCVCO_DAC_MSB_R1_7_0  CAL_DATA1.BF.CAL_LCVCO_DAC_MSB_R1_7_0
#define cmx_CAL_TEMPC_DAC_SEL_7_0  CAL_DATA1.BF.CAL_TEMPC_DAC_SEL_7_0

// 0x0428	CAL_DATA2		Calibration Result 2
typedef union {
	struct {
		uint8_t CAL_LCCAP_LSB_R0_7_0                     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_LCCAP_LSB_R1_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_LCCAP_MSB_R0_7_0                     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_LCCAP_MSB_R1_7_0                     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_DATA2_t;
__xdata __at( 0xe428 ) volatile CAL_DATA2_t CAL_DATA2;
#define cmx_CAL_LCCAP_LSB_R0_7_0  CAL_DATA2.BF.CAL_LCCAP_LSB_R0_7_0
#define cmx_CAL_LCCAP_LSB_R1_7_0  CAL_DATA2.BF.CAL_LCCAP_LSB_R1_7_0
#define cmx_CAL_LCCAP_MSB_R0_7_0  CAL_DATA2.BF.CAL_LCCAP_MSB_R0_7_0
#define cmx_CAL_LCCAP_MSB_R1_7_0  CAL_DATA2.BF.CAL_LCCAP_MSB_R1_7_0

// 0x042C	CAL_DATA3		Calibration Result 3
typedef union {
	struct {
		uint8_t CAL_PLLDCC_CNT_R0_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLLDCC_CNT_R1_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PROCESS_VALUE_ULVT_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_PROCESS_VALUE_LVT_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_DATA3_t;
__xdata __at( 0xe42c ) volatile CAL_DATA3_t CAL_DATA3;
#define cmx_CAL_PLLDCC_CNT_R0_7_0  CAL_DATA3.BF.CAL_PLLDCC_CNT_R0_7_0
#define cmx_CAL_PLLDCC_CNT_R1_7_0  CAL_DATA3.BF.CAL_PLLDCC_CNT_R1_7_0
#define cmx_CAL_PROCESS_VALUE_ULVT_7_0  CAL_DATA3.BF.CAL_PROCESS_VALUE_ULVT_7_0
#define cmx_CAL_PROCESS_VALUE_LVT_7_0  CAL_DATA3.BF.CAL_PROCESS_VALUE_LVT_7_0

// 0x0430	CAL_DATA5		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_DATA5_t;
__xdata __at( 0xe430 ) volatile CAL_DATA5_t CAL_DATA5;
#define cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0  CAL_DATA5.BF.CAL_PLL_SLLP_DAC_COARSE_RING_R0_7_0
#define cmx_CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0  CAL_DATA5.BF.CAL_PLL_SLLP_DAC_COARSE_RING_R1_7_0

// 0x0434	CAL_DATA6		
typedef union {
	struct {
		uint8_t CAL_SLLP_DAC_FINE_RING_R0_15_0_b0        : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_R0_15_0_b1        : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_R1_15_0_b0        : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_R1_15_0_b1        : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_DATA6_t;
__xdata __at( 0xe434 ) volatile CAL_DATA6_t CAL_DATA6;
#define cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0_b0  CAL_DATA6.BF.CAL_SLLP_DAC_FINE_RING_R0_15_0_b0
#define cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0_b1  CAL_DATA6.BF.CAL_SLLP_DAC_FINE_RING_R0_15_0_b1
#define cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0_b0  CAL_DATA6.BF.CAL_SLLP_DAC_FINE_RING_R1_15_0_b0
#define cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0_b1  CAL_DATA6.BF.CAL_SLLP_DAC_FINE_RING_R1_15_0_b1
#define cmx_CAL_SLLP_DAC_FINE_RING_R0_15_0  CAL_DATA6.WT.W0
#define cmx_CAL_SLLP_DAC_FINE_RING_R1_15_0  CAL_DATA6.WT.W1

// 0x0438	CAL_DATA7		
typedef union {
	struct {
		uint8_t CAL_PLL_SPEED_RING_R0_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_R1_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_DATA7_t;
__xdata __at( 0xe438 ) volatile CAL_DATA7_t CAL_DATA7;
#define cmx_CAL_PLL_SPEED_RING_R0_7_0  CAL_DATA7.BF.CAL_PLL_SPEED_RING_R0_7_0
#define cmx_CAL_PLL_SPEED_RING_R1_7_0  CAL_DATA7.BF.CAL_PLL_SPEED_RING_R1_7_0

// 0x043c	TRAIN_IF_CONFIG		Train Interface Config
typedef union {
	struct {
		uint8_t PIPE4_EN                                 : 1;	/*      0     r/w 1'b0*/
		uint8_t RESERVED_1                               : 7;	/* [31:1]     r/w 31'h0*/
		uint8_t RESERVED_8                               : 8;	/* [31:1]     r/w 31'h0*/
		uint8_t RESERVED_16                              : 8;	/* [31:1]     r/w 31'h0*/
		uint8_t RESERVED_24                              : 8;	/* [31:1]     r/w 31'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_IF_CONFIG_t;
__xdata __at( 0xe43c ) volatile TRAIN_IF_CONFIG_t TRAIN_IF_CONFIG;
#define cmx_PIPE4_EN  TRAIN_IF_CONFIG.BF.PIPE4_EN

// 0x0440	CONTROL_CONFIG6		Config control
typedef union {
	struct {
		uint8_t PHY_GEN_MAX_3_0                          : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t MCUCLK_SEL_7_0                           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t AUTO_RX_INIT_EN                          : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t REFCLK_FREQ_7_0                          : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG6_t;
__xdata __at( 0xe440 ) volatile CONTROL_CONFIG6_t CONTROL_CONFIG6;
#define cmx_PHY_GEN_MAX_3_0  CONTROL_CONFIG6.BF.PHY_GEN_MAX_3_0
#define cmx_MCUCLK_SEL_7_0  CONTROL_CONFIG6.BF.MCUCLK_SEL_7_0
#define cmx_AUTO_RX_INIT_EN  CONTROL_CONFIG6.BF.AUTO_RX_INIT_EN
#define cmx_REFCLK_FREQ_7_0  CONTROL_CONFIG6.BF.REFCLK_FREQ_7_0

// 0x0444	CONTROL_CONFIG8		Calibration Configuration 
typedef union {
	struct {
		uint8_t PLL_VDDVCO_POLARITY_INV                  : 1;	/*      0     r/w   0*/
		uint8_t PLL_VCON_POLARITY_INV                    : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RINGPLL_CAL_STEP_SIZE_7_0                : 8;	/*[23:16]     r/w 8'h08*/
		uint8_t RXDCC_DLL_CAL_STEP_SIZE_7_0              : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG8_t;
__xdata __at( 0xe444 ) volatile CONTROL_CONFIG8_t CONTROL_CONFIG8;
#define cmx_PLL_VDDVCO_POLARITY_INV  CONTROL_CONFIG8.BF.PLL_VDDVCO_POLARITY_INV
#define cmx_PLL_VCON_POLARITY_INV  CONTROL_CONFIG8.BF.PLL_VCON_POLARITY_INV
#define cmx_RINGPLL_CAL_STEP_SIZE_7_0  CONTROL_CONFIG8.BF.RINGPLL_CAL_STEP_SIZE_7_0
#define cmx_RXDCC_DLL_CAL_STEP_SIZE_7_0  CONTROL_CONFIG8.BF.RXDCC_DLL_CAL_STEP_SIZE_7_0

#endif
