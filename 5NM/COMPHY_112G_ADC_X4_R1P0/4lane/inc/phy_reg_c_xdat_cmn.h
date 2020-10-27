#ifndef PHY_REG_C_XDAT_CMN_H
#define PHY_REG_C_XDAT_CMN_H



// 0x0600	FW_REV		Firmware Revision
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
__xdata __at( 0xe600 ) volatile FW_REV_t FW_REV;
#define cmx_FW_BUILD_VER_7_0  FW_REV.BF.FW_BUILD_VER_7_0
#define cmx_FW_PATCH_VER_7_0  FW_REV.BF.FW_PATCH_VER_7_0
#define cmx_FW_MINOR_VER_7_0  FW_REV.BF.FW_MINOR_VER_7_0
#define cmx_FW_MAJOR_VER_7_0  FW_REV.BF.FW_MAJOR_VER_7_0

// 0x0604	CONTROL_CONFIG0		Calibration enable control
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t AVDD_VOL_SEL                             : 1;	/*      2     r/w   1*/
		uint8_t ANA_CLK100M_125M_EN                      : 1;	/*      3     r/w   0*/
		uint8_t ANA_CLK100M_125M_SEL                     : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t TX_CAL_DONE                              : 1;	/*      6       r   0*/
		uint8_t RX_CAL_DONE                              : 1;	/*      7       r   0*/
		uint8_t CAL_DONE                                 : 1;	/*      8       r   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t FAST_POWER_ON_EN                         : 1;	/*     10     r/w   0*/
		uint8_t EXT_FORCE_CAL_DONE                       : 1;	/*     11     r/w   0*/
		uint8_t FAST_DFE_TIMER_EN                        : 1;	/*     12     r/w   0*/
		uint8_t TRAIN_SIM_EN                             : 1;	/*     13     r/w   0*/
		uint8_t HW_DRV_SPD_UP                            : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t POWER_UP_SIMPLE_EN                       : 1;	/*     17     r/w   0*/
		uint8_t BYPASS_DELAY_2_0                         : 3;	/*[20:18]     r/w 3'h0*/
		uint8_t BYPASS_POWER_ON_DELAY                    : 1;	/*     21     r/w   0*/
		uint8_t BYPASS_XDAT_INIT                         : 1;	/*     22     r/w   0*/
		uint8_t BYPASS_SPEED_TABLE_LOAD                  : 1;	/*     23     r/w   0*/
		uint8_t FORCE_CONT_CAL_SKIP                      : 1;	/*     24     r/w   0*/
		uint8_t SKIP_CDR_DFE_SCHEME                      : 1;	/*     25     r/w   0*/
		uint8_t BYPASS_RX_INIT                           : 1;	/*     26     r/w   0*/
		uint8_t BYPASS_SPEED_TABLE_LOAD_DIS              : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG0_t;
__xdata __at( 0xe604 ) volatile CONTROL_CONFIG0_t CONTROL_CONFIG0;
#define cmx_AVDD_VOL_SEL  CONTROL_CONFIG0.BF.AVDD_VOL_SEL
#define cmx_ANA_CLK100M_125M_EN  CONTROL_CONFIG0.BF.ANA_CLK100M_125M_EN
#define cmx_ANA_CLK100M_125M_SEL  CONTROL_CONFIG0.BF.ANA_CLK100M_125M_SEL
#define cmx_TX_CAL_DONE  CONTROL_CONFIG0.BF.TX_CAL_DONE
#define cmx_RX_CAL_DONE  CONTROL_CONFIG0.BF.RX_CAL_DONE
#define cmx_CAL_DONE  CONTROL_CONFIG0.BF.CAL_DONE
#define cmx_FAST_POWER_ON_EN  CONTROL_CONFIG0.BF.FAST_POWER_ON_EN
#define cmx_EXT_FORCE_CAL_DONE  CONTROL_CONFIG0.BF.EXT_FORCE_CAL_DONE
#define cmx_FAST_DFE_TIMER_EN  CONTROL_CONFIG0.BF.FAST_DFE_TIMER_EN
#define cmx_TRAIN_SIM_EN  CONTROL_CONFIG0.BF.TRAIN_SIM_EN
#define cmx_HW_DRV_SPD_UP  CONTROL_CONFIG0.BF.HW_DRV_SPD_UP
#define cmx_POWER_UP_SIMPLE_EN  CONTROL_CONFIG0.BF.POWER_UP_SIMPLE_EN
#define cmx_BYPASS_DELAY_2_0  CONTROL_CONFIG0.BF.BYPASS_DELAY_2_0
#define cmx_BYPASS_POWER_ON_DELAY  CONTROL_CONFIG0.BF.BYPASS_POWER_ON_DELAY
#define cmx_BYPASS_XDAT_INIT  CONTROL_CONFIG0.BF.BYPASS_XDAT_INIT
#define cmx_BYPASS_SPEED_TABLE_LOAD  CONTROL_CONFIG0.BF.BYPASS_SPEED_TABLE_LOAD
#define cmx_FORCE_CONT_CAL_SKIP  CONTROL_CONFIG0.BF.FORCE_CONT_CAL_SKIP
#define cmx_SKIP_CDR_DFE_SCHEME  CONTROL_CONFIG0.BF.SKIP_CDR_DFE_SCHEME
#define cmx_BYPASS_RX_INIT  CONTROL_CONFIG0.BF.BYPASS_RX_INIT
#define cmx_BYPASS_SPEED_TABLE_LOAD_DIS  CONTROL_CONFIG0.BF.BYPASS_SPEED_TABLE_LOAD_DIS

// 0x0608	CONTROL_CONFIG1		Calibration Configuration 1
typedef union {
	struct {
		uint8_t CAL_START                                : 1;	/*      0     r/w   0*/
		uint8_t RXSMPLR_VDD_CAL_EXT_EN                   : 1;	/*      1     r/w   1*/
		uint8_t RXEOMCLK_VDD_CAL_EXT_EN                  : 1;	/*      2     r/w   1*/
		uint8_t RXDCLK_VDD_CAL_EXT_EN                    : 1;	/*      3     r/w   1*/
		uint8_t TXPRE_VDD_CAL_EXT_EN                     : 1;	/*      4     r/w   1*/
		uint8_t TXDATA_VDD_CAL_EXT_EN                    : 1;	/*      5     r/w   1*/
		uint8_t TXCLK_VDD_CAL_EXT_EN                     : 1;	/*      6     r/w   1*/
		uint8_t RING_PLL_CAL_EXT_EN                      : 1;	/*      7     r/w   0*/
		uint8_t RX_PLLDCC_CAL_EXT_EN                     : 1;	/*      8     r/w   0*/
		uint8_t TX_PLLDCC_CAL_EXT_EN                     : 1;	/*      9     r/w   0*/
		uint8_t PLL_CAL_EXT_EN                           : 1;	/*     10     r/w   0*/
		uint8_t PLL_TEMP_CAL_EXT_EN                      : 1;	/*     11     r/w   0*/
		uint8_t RXDLL_CAL_EXT_EN                         : 1;	/*     12     r/w   0*/
		uint8_t EOM_DLL_CAL_EXT_EN                       : 1;	/*     13     r/w   0*/
		uint8_t TXDETECT_CAL_EXT_EN                      : 1;	/*     14     r/w   0*/
		uint8_t RXDCC_DLL_CAL_EXT_EN                     : 1;	/*     15     r/w   0*/
		uint8_t RXDCC_DATA_CAL_EXT_EN                    : 1;	/*     16     r/w   0*/
		uint8_t RXDCC_EOM_CAL_EXT_EN                     : 1;	/*     17     r/w   0*/
		uint8_t RXALIGN90_CAL_EXT_EN                     : 1;	/*     18     r/w   0*/
		uint8_t EOM_ALIGN_CAL_EXT_EN                     : 1;	/*     19     r/w   0*/
		uint8_t SAMPLER_CAL_EXT_EN                       : 1;	/*     20     r/w   0*/
		uint8_t TXIMP_CAL_EXT_EN                         : 1;	/*     21     r/w   0*/
		uint8_t RXIMP_CAL_EXT_EN                         : 1;	/*     22     r/w   0*/
		uint8_t VDD_CAL_EXT_EN                           : 1;	/*     23     r/w   1*/
		uint8_t TXDCC_PDIV_CAL_EXT_EN                    : 1;	/*     24     r/w   0*/
		uint8_t TXDCC_CAL_EXT_EN                         : 1;	/*     25     r/w   0*/
		uint8_t PROCESS_CAL_EXT_EN                       : 1;	/*     26     r/w   0*/
		uint8_t SQ_CAL_EXT_EN                            : 1;	/*     27     r/w   0*/
		uint8_t RX_PLL_CAL_EXT_EN                        : 1;	/*     28     r/w   0*/
		uint8_t TX_PLL_CAL_EXT_EN                        : 1;	/*     29     r/w   0*/
		uint8_t TXALIGN90_CAL_EXT_EN                     : 1;	/*     30     r/w   0*/
		uint8_t RX_CLK_CAL_EXT_EN                        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG1_t;
__xdata __at( 0xe608 ) volatile CONTROL_CONFIG1_t CONTROL_CONFIG1;
#define cmx_CAL_START  CONTROL_CONFIG1.BF.CAL_START
#define cmx_RXSMPLR_VDD_CAL_EXT_EN  CONTROL_CONFIG1.BF.RXSMPLR_VDD_CAL_EXT_EN
#define cmx_RXEOMCLK_VDD_CAL_EXT_EN  CONTROL_CONFIG1.BF.RXEOMCLK_VDD_CAL_EXT_EN
#define cmx_RXDCLK_VDD_CAL_EXT_EN  CONTROL_CONFIG1.BF.RXDCLK_VDD_CAL_EXT_EN
#define cmx_TXPRE_VDD_CAL_EXT_EN  CONTROL_CONFIG1.BF.TXPRE_VDD_CAL_EXT_EN
#define cmx_TXDATA_VDD_CAL_EXT_EN  CONTROL_CONFIG1.BF.TXDATA_VDD_CAL_EXT_EN
#define cmx_TXCLK_VDD_CAL_EXT_EN  CONTROL_CONFIG1.BF.TXCLK_VDD_CAL_EXT_EN
#define cmx_RING_PLL_CAL_EXT_EN  CONTROL_CONFIG1.BF.RING_PLL_CAL_EXT_EN
#define cmx_RX_PLLDCC_CAL_EXT_EN  CONTROL_CONFIG1.BF.RX_PLLDCC_CAL_EXT_EN
#define cmx_TX_PLLDCC_CAL_EXT_EN  CONTROL_CONFIG1.BF.TX_PLLDCC_CAL_EXT_EN
#define cmx_PLL_CAL_EXT_EN  CONTROL_CONFIG1.BF.PLL_CAL_EXT_EN
#define cmx_PLL_TEMP_CAL_EXT_EN  CONTROL_CONFIG1.BF.PLL_TEMP_CAL_EXT_EN
#define cmx_RXDLL_CAL_EXT_EN  CONTROL_CONFIG1.BF.RXDLL_CAL_EXT_EN
#define cmx_EOM_DLL_CAL_EXT_EN  CONTROL_CONFIG1.BF.EOM_DLL_CAL_EXT_EN
#define cmx_TXDETECT_CAL_EXT_EN  CONTROL_CONFIG1.BF.TXDETECT_CAL_EXT_EN
#define cmx_RXDCC_DLL_CAL_EXT_EN  CONTROL_CONFIG1.BF.RXDCC_DLL_CAL_EXT_EN
#define cmx_RXDCC_DATA_CAL_EXT_EN  CONTROL_CONFIG1.BF.RXDCC_DATA_CAL_EXT_EN
#define cmx_RXDCC_EOM_CAL_EXT_EN  CONTROL_CONFIG1.BF.RXDCC_EOM_CAL_EXT_EN
#define cmx_RXALIGN90_CAL_EXT_EN  CONTROL_CONFIG1.BF.RXALIGN90_CAL_EXT_EN
#define cmx_EOM_ALIGN_CAL_EXT_EN  CONTROL_CONFIG1.BF.EOM_ALIGN_CAL_EXT_EN
#define cmx_SAMPLER_CAL_EXT_EN  CONTROL_CONFIG1.BF.SAMPLER_CAL_EXT_EN
#define cmx_TXIMP_CAL_EXT_EN  CONTROL_CONFIG1.BF.TXIMP_CAL_EXT_EN
#define cmx_RXIMP_CAL_EXT_EN  CONTROL_CONFIG1.BF.RXIMP_CAL_EXT_EN
#define cmx_VDD_CAL_EXT_EN  CONTROL_CONFIG1.BF.VDD_CAL_EXT_EN
#define cmx_TXDCC_PDIV_CAL_EXT_EN  CONTROL_CONFIG1.BF.TXDCC_PDIV_CAL_EXT_EN
#define cmx_TXDCC_CAL_EXT_EN  CONTROL_CONFIG1.BF.TXDCC_CAL_EXT_EN
#define cmx_PROCESS_CAL_EXT_EN  CONTROL_CONFIG1.BF.PROCESS_CAL_EXT_EN
#define cmx_SQ_CAL_EXT_EN  CONTROL_CONFIG1.BF.SQ_CAL_EXT_EN
#define cmx_RX_PLL_CAL_EXT_EN  CONTROL_CONFIG1.BF.RX_PLL_CAL_EXT_EN
#define cmx_TX_PLL_CAL_EXT_EN  CONTROL_CONFIG1.BF.TX_PLL_CAL_EXT_EN
#define cmx_TXALIGN90_CAL_EXT_EN  CONTROL_CONFIG1.BF.TXALIGN90_CAL_EXT_EN
#define cmx_RX_CLK_CAL_EXT_EN  CONTROL_CONFIG1.BF.RX_CLK_CAL_EXT_EN

// 0x060c	CONTROL_CONFIG2		Calibration Configuration 1
typedef union {
	struct {
		uint8_t RX_PLLVDDA_CAL_EXT_EN                    : 1;	/*      0     r/w   0*/
		uint8_t TX_PLLVDDA_CAL_EXT_EN                    : 1;	/*      1     r/w   0*/
		uint8_t ADC_CAL_EXT_EN                           : 1;	/*      2     r/w   0*/
		uint8_t ADC_CMN_MODE_CAL_EXT_EN                  : 1;	/*      3     r/w   1*/
		uint8_t ADC_VDDR_CAL_EXT_EN                      : 1;	/*      4     r/w   1*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t ADC_CAL_CONT_EN                          : 1;	/*     11     r/w   0*/
		uint8_t RX_PLLAMP_CAL_CONT_EN                    : 1;	/*     12     r/w   1*/
		uint8_t TX_PLLAMP_CAL_CONT_EN                    : 1;	/*     13     r/w   1*/
		uint8_t PLL_TEMP_CAL_CONT_EN                     : 1;	/*     14     r/w   0*/
		uint8_t RXDCC_DLL_CAL_CONT_EN                    : 1;	/*     15     r/w   1*/
		uint8_t TXDETECT_CAL_CONT_EN                     : 1;	/*     16     r/w   0*/
		uint8_t RXDLL_CAL_CONT_EN                        : 1;	/*     17     r/w   1*/
		uint8_t EOM_DLL_CAL_CONT_EN                      : 1;	/*     18     r/w   1*/
		uint8_t ALIGN90_CAL_CONT_EN                      : 1;	/*     19     r/w   1*/
		uint8_t RX_PLLDCC_CAL_CONT_EN                    : 1;	/*     20     r/w   1*/
		uint8_t TX_PLLDCC_CAL_CONT_EN                    : 1;	/*     21     r/w   1*/
		uint8_t TXDCC_PDIV_CAL_CONT_EN                   : 1;	/*     22     r/w   1*/
		uint8_t TXDCC_CAL_CONT_EN                        : 1;	/*     23     r/w   1*/
		uint8_t RXDCC_EOM_CAL_CONT_EN                    : 1;	/*     24     r/w   1*/
		uint8_t RXDCC_DATA_CAL_CONT_EN                   : 1;	/*     25     r/w   1*/
		uint8_t RXSMPLR_VDD_CAL_CONT_EN                  : 1;	/*     26     r/w   0*/
		uint8_t RXEOMCLK_VDD_CAL_CONT_EN                 : 1;	/*     27     r/w   0*/
		uint8_t RXDCLK_VDD_CAL_CONT_EN                   : 1;	/*     28     r/w   0*/
		uint8_t TXPRE_VDD_CAL_CONT_EN                    : 1;	/*     29     r/w   0*/
		uint8_t TXDATA_VDD_CAL_CONT_EN                   : 1;	/*     30     r/w   0*/
		uint8_t TXCLK_VDD_CAL_CONT_EN                    : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG2_t;
__xdata __at( 0xe60c ) volatile CONTROL_CONFIG2_t CONTROL_CONFIG2;
#define cmx_RX_PLLVDDA_CAL_EXT_EN  CONTROL_CONFIG2.BF.RX_PLLVDDA_CAL_EXT_EN
#define cmx_TX_PLLVDDA_CAL_EXT_EN  CONTROL_CONFIG2.BF.TX_PLLVDDA_CAL_EXT_EN
#define cmx_ADC_CAL_EXT_EN  CONTROL_CONFIG2.BF.ADC_CAL_EXT_EN
#define cmx_ADC_CMN_MODE_CAL_EXT_EN  CONTROL_CONFIG2.BF.ADC_CMN_MODE_CAL_EXT_EN
#define cmx_ADC_VDDR_CAL_EXT_EN  CONTROL_CONFIG2.BF.ADC_VDDR_CAL_EXT_EN
#define cmx_ADC_CAL_CONT_EN  CONTROL_CONFIG2.BF.ADC_CAL_CONT_EN
#define cmx_RX_PLLAMP_CAL_CONT_EN  CONTROL_CONFIG2.BF.RX_PLLAMP_CAL_CONT_EN
#define cmx_TX_PLLAMP_CAL_CONT_EN  CONTROL_CONFIG2.BF.TX_PLLAMP_CAL_CONT_EN
#define cmx_PLL_TEMP_CAL_CONT_EN  CONTROL_CONFIG2.BF.PLL_TEMP_CAL_CONT_EN
#define cmx_RXDCC_DLL_CAL_CONT_EN  CONTROL_CONFIG2.BF.RXDCC_DLL_CAL_CONT_EN
#define cmx_TXDETECT_CAL_CONT_EN  CONTROL_CONFIG2.BF.TXDETECT_CAL_CONT_EN
#define cmx_RXDLL_CAL_CONT_EN  CONTROL_CONFIG2.BF.RXDLL_CAL_CONT_EN
#define cmx_EOM_DLL_CAL_CONT_EN  CONTROL_CONFIG2.BF.EOM_DLL_CAL_CONT_EN
#define cmx_ALIGN90_CAL_CONT_EN  CONTROL_CONFIG2.BF.ALIGN90_CAL_CONT_EN
#define cmx_RX_PLLDCC_CAL_CONT_EN  CONTROL_CONFIG2.BF.RX_PLLDCC_CAL_CONT_EN
#define cmx_TX_PLLDCC_CAL_CONT_EN  CONTROL_CONFIG2.BF.TX_PLLDCC_CAL_CONT_EN
#define cmx_TXDCC_PDIV_CAL_CONT_EN  CONTROL_CONFIG2.BF.TXDCC_PDIV_CAL_CONT_EN
#define cmx_TXDCC_CAL_CONT_EN  CONTROL_CONFIG2.BF.TXDCC_CAL_CONT_EN
#define cmx_RXDCC_EOM_CAL_CONT_EN  CONTROL_CONFIG2.BF.RXDCC_EOM_CAL_CONT_EN
#define cmx_RXDCC_DATA_CAL_CONT_EN  CONTROL_CONFIG2.BF.RXDCC_DATA_CAL_CONT_EN
#define cmx_RXSMPLR_VDD_CAL_CONT_EN  CONTROL_CONFIG2.BF.RXSMPLR_VDD_CAL_CONT_EN
#define cmx_RXEOMCLK_VDD_CAL_CONT_EN  CONTROL_CONFIG2.BF.RXEOMCLK_VDD_CAL_CONT_EN
#define cmx_RXDCLK_VDD_CAL_CONT_EN  CONTROL_CONFIG2.BF.RXDCLK_VDD_CAL_CONT_EN
#define cmx_TXPRE_VDD_CAL_CONT_EN  CONTROL_CONFIG2.BF.TXPRE_VDD_CAL_CONT_EN
#define cmx_TXDATA_VDD_CAL_CONT_EN  CONTROL_CONFIG2.BF.TXDATA_VDD_CAL_CONT_EN
#define cmx_TXCLK_VDD_CAL_CONT_EN  CONTROL_CONFIG2.BF.TXCLK_VDD_CAL_CONT_EN

// 0x0610	CONTROL_CONFIG3		Calibration Configuration 2
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
		uint8_t CAL_PROCESS_RESULT_SEL                   : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG3_t;
__xdata __at( 0xe610 ) volatile CONTROL_CONFIG3_t CONTROL_CONFIG3;
#define cmx_TSHRTR_7_0  CONTROL_CONFIG3.BF.TSHRTR_7_0
#define cmx_THOLD_SEL2_7_0  CONTROL_CONFIG3.BF.THOLD_SEL2_7_0
#define cmx_TEMPC_DAC_MODE_1_0  CONTROL_CONFIG3.BF.TEMPC_DAC_MODE_1_0
#define cmx_TEMPC_STEP_CTRL_2_0  CONTROL_CONFIG3.BF.TEMPC_STEP_CTRL_2_0
#define cmx_SPDCHG_FAST_PLL_MODE_1_0  CONTROL_CONFIG3.BF.SPDCHG_FAST_PLL_MODE_1_0
#define cmx_FAST_PLL_MODE  CONTROL_CONFIG3.BF.FAST_PLL_MODE
#define cmx_PLLAMP_CAL_SPEEDUP_DISABLE  CONTROL_CONFIG3.BF.PLLAMP_CAL_SPEEDUP_DISABLE
#define cmx_CAL_PROCESS_RESULT_SEL  CONTROL_CONFIG3.BF.CAL_PROCESS_RESULT_SEL

// 0x0614	CONTROL_CONFIG4		Calibration Configuration 3
typedef union {
	struct {
		uint8_t FBC_RATIO_7_0                            : 8;	/*  [7:0]     r/w 8'h2*/
		uint8_t VCOAMP_VTH_NORMAL_7_0                    : 8;	/* [15:8]     r/w 8'h0c*/
		uint8_t VCOAMP_VTH_AMP_7_0                       : 8;	/*[23:16]     r/w 8'h0f*/
		uint8_t VCOAMP_VTH_FREQ_7_0                      : 8;	/*[31:24]     r/w 8'h0e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG4_t;
__xdata __at( 0xe614 ) volatile CONTROL_CONFIG4_t CONTROL_CONFIG4;
#define cmx_FBC_RATIO_7_0  CONTROL_CONFIG4.BF.FBC_RATIO_7_0
#define cmx_VCOAMP_VTH_NORMAL_7_0  CONTROL_CONFIG4.BF.VCOAMP_VTH_NORMAL_7_0
#define cmx_VCOAMP_VTH_AMP_7_0  CONTROL_CONFIG4.BF.VCOAMP_VTH_AMP_7_0
#define cmx_VCOAMP_VTH_FREQ_7_0  CONTROL_CONFIG4.BF.VCOAMP_VTH_FREQ_7_0

// 0x0618	CONTROL_CONFIG5		Calibration Configuration 4
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TPLLAMP1_1_0                             : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t TPLLAMP0_1_0                             : 2;	/*[19:18]     r/w 2'h0*/
		uint8_t TPLLFREQ0_1_0                            : 2;	/*[21:20]     r/w 2'h0*/
		uint8_t TPLLFREQ1_1_0                            : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t TPLLFREQ2_1_0                            : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t TPLLFREQ3_1_0                            : 2;	/*[27:26]     r/w 2'h0*/
		uint8_t TPLLFREQ4                                : 1;	/*     28     r/w 1'h0*/
		uint8_t PLL_TXVCO_SF_ICPTAT_SEL_2_0              : 3;	/*[31:29]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CONTROL_CONFIG5_t;
__xdata __at( 0xe618 ) volatile CONTROL_CONFIG5_t CONTROL_CONFIG5;
#define cmx_TPLLAMP1_1_0  CONTROL_CONFIG5.BF.TPLLAMP1_1_0
#define cmx_TPLLAMP0_1_0  CONTROL_CONFIG5.BF.TPLLAMP0_1_0
#define cmx_TPLLFREQ0_1_0  CONTROL_CONFIG5.BF.TPLLFREQ0_1_0
#define cmx_TPLLFREQ1_1_0  CONTROL_CONFIG5.BF.TPLLFREQ1_1_0
#define cmx_TPLLFREQ2_1_0  CONTROL_CONFIG5.BF.TPLLFREQ2_1_0
#define cmx_TPLLFREQ3_1_0  CONTROL_CONFIG5.BF.TPLLFREQ3_1_0
#define cmx_TPLLFREQ4  CONTROL_CONFIG5.BF.TPLLFREQ4
#define cmx_PLL_TXVCO_SF_ICPTAT_SEL_2_0  CONTROL_CONFIG5.BF.PLL_TXVCO_SF_ICPTAT_SEL_2_0

// 0x061c	CONTROL_CONFIG6		Calibration Configuration 5
typedef union {
	struct {
		uint8_t MCU_INIT_DONE_LANE0_RD                   : 1;	/*      0       r   0*/
		uint8_t CAL_DONE_LANE0_RD                        : 1;	/*      1       r   0*/
		uint8_t RXIMP_CAL_DONE_LANE0_RD                  : 1;	/*      2       r   0*/
		uint8_t MCU_EN_LANE0_RD                          : 1;	/*      3       r   0*/
		uint8_t POWER_ON_SEQ_LANE0_RD                    : 1;	/*      4       r   0*/
		uint8_t TXIMP_CAL_DONE_LANE0_RD                  : 1;	/*      5       r   0*/
		uint8_t MCU_SYNC_LANE0_RD                        : 1;	/*      6       r   0*/
		uint8_t VDD_CAL_DONE_LANE0_RD                    : 1;	/*      7       r   0*/
		uint8_t MCU_INIT_DONE_LANE1_RD                   : 1;	/*      8       r   0*/
		uint8_t CAL_DONE_LANE1_RD                        : 1;	/*      9       r   0*/
		uint8_t RXIMP_CAL_DONE_LANE1_RD                  : 1;	/*     10       r   0*/
		uint8_t MCU_EN_LANE1_RD                          : 1;	/*     11       r   0*/
		uint8_t POWER_ON_SEQ_LANE1_RD                    : 1;	/*     12       r   0*/
		uint8_t TXIMP_CAL_DONE_LANE1_RD                  : 1;	/*     13       r   0*/
		uint8_t MCU_SYNC_LANE1_RD                        : 1;	/*     14       r   0*/
		uint8_t VDD_CAL_DONE_LANE1_RD                    : 1;	/*     15       r   0*/
		uint8_t MCU_INIT_DONE_LANE2_RD                   : 1;	/*     16       r   0*/
		uint8_t CAL_DONE_LANE2_RD                        : 1;	/*     17       r   0*/
		uint8_t RXIMP_CAL_DONE_LANE2_RD                  : 1;	/*     18       r   0*/
		uint8_t MCU_EN_LANE2_RD                          : 1;	/*     19       r   0*/
		uint8_t POWER_ON_SEQ_LANE2_RD                    : 1;	/*     20       r   0*/
		uint8_t TXIMP_CAL_DONE_LANE2_RD                  : 1;	/*     21       r   0*/
		uint8_t MCU_SYNC_LANE2_RD                        : 1;	/*     22       r   0*/
		uint8_t VDD_CAL_DONE_LANE2_RD                    : 1;	/*     23       r   0*/
		uint8_t MCU_INIT_DONE_LANE3_RD                   : 1;	/*     24       r   0*/
		uint8_t CAL_DONE_LANE3_RD                        : 1;	/*     25       r   0*/
		uint8_t RXIMP_CAL_DONE_LANE3_RD                  : 1;	/*     26       r   0*/
		uint8_t MCU_EN_LANE3_RD                          : 1;	/*     27       r   0*/
		uint8_t POWER_ON_SEQ_LANE3_RD                    : 1;	/*     28       r   0*/
		uint8_t TXIMP_CAL_DONE_LANE3_RD                  : 1;	/*     29       r   0*/
		uint8_t MCU_SYNC_LANE3_RD                        : 1;	/*     30       r   0*/
		uint8_t VDD_CAL_DONE_LANE3_RD                    : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG6_t;
__xdata __at( 0xe61c ) volatile CONTROL_CONFIG6_t CONTROL_CONFIG6;
#define cmx_MCU_INIT_DONE_LANE0_RD  CONTROL_CONFIG6.BF.MCU_INIT_DONE_LANE0_RD
#define cmx_CAL_DONE_LANE0_RD  CONTROL_CONFIG6.BF.CAL_DONE_LANE0_RD
#define cmx_RXIMP_CAL_DONE_LANE0_RD  CONTROL_CONFIG6.BF.RXIMP_CAL_DONE_LANE0_RD
#define cmx_MCU_EN_LANE0_RD  CONTROL_CONFIG6.BF.MCU_EN_LANE0_RD
#define cmx_POWER_ON_SEQ_LANE0_RD  CONTROL_CONFIG6.BF.POWER_ON_SEQ_LANE0_RD
#define cmx_TXIMP_CAL_DONE_LANE0_RD  CONTROL_CONFIG6.BF.TXIMP_CAL_DONE_LANE0_RD
#define cmx_MCU_SYNC_LANE0_RD  CONTROL_CONFIG6.BF.MCU_SYNC_LANE0_RD
#define cmx_VDD_CAL_DONE_LANE0_RD  CONTROL_CONFIG6.BF.VDD_CAL_DONE_LANE0_RD
#define cmx_MCU_INIT_DONE_LANE1_RD  CONTROL_CONFIG6.BF.MCU_INIT_DONE_LANE1_RD
#define cmx_CAL_DONE_LANE1_RD  CONTROL_CONFIG6.BF.CAL_DONE_LANE1_RD
#define cmx_RXIMP_CAL_DONE_LANE1_RD  CONTROL_CONFIG6.BF.RXIMP_CAL_DONE_LANE1_RD
#define cmx_MCU_EN_LANE1_RD  CONTROL_CONFIG6.BF.MCU_EN_LANE1_RD
#define cmx_POWER_ON_SEQ_LANE1_RD  CONTROL_CONFIG6.BF.POWER_ON_SEQ_LANE1_RD
#define cmx_TXIMP_CAL_DONE_LANE1_RD  CONTROL_CONFIG6.BF.TXIMP_CAL_DONE_LANE1_RD
#define cmx_MCU_SYNC_LANE1_RD  CONTROL_CONFIG6.BF.MCU_SYNC_LANE1_RD
#define cmx_VDD_CAL_DONE_LANE1_RD  CONTROL_CONFIG6.BF.VDD_CAL_DONE_LANE1_RD
#define cmx_MCU_INIT_DONE_LANE2_RD  CONTROL_CONFIG6.BF.MCU_INIT_DONE_LANE2_RD
#define cmx_CAL_DONE_LANE2_RD  CONTROL_CONFIG6.BF.CAL_DONE_LANE2_RD
#define cmx_RXIMP_CAL_DONE_LANE2_RD  CONTROL_CONFIG6.BF.RXIMP_CAL_DONE_LANE2_RD
#define cmx_MCU_EN_LANE2_RD  CONTROL_CONFIG6.BF.MCU_EN_LANE2_RD
#define cmx_POWER_ON_SEQ_LANE2_RD  CONTROL_CONFIG6.BF.POWER_ON_SEQ_LANE2_RD
#define cmx_TXIMP_CAL_DONE_LANE2_RD  CONTROL_CONFIG6.BF.TXIMP_CAL_DONE_LANE2_RD
#define cmx_MCU_SYNC_LANE2_RD  CONTROL_CONFIG6.BF.MCU_SYNC_LANE2_RD
#define cmx_VDD_CAL_DONE_LANE2_RD  CONTROL_CONFIG6.BF.VDD_CAL_DONE_LANE2_RD
#define cmx_MCU_INIT_DONE_LANE3_RD  CONTROL_CONFIG6.BF.MCU_INIT_DONE_LANE3_RD
#define cmx_CAL_DONE_LANE3_RD  CONTROL_CONFIG6.BF.CAL_DONE_LANE3_RD
#define cmx_RXIMP_CAL_DONE_LANE3_RD  CONTROL_CONFIG6.BF.RXIMP_CAL_DONE_LANE3_RD
#define cmx_MCU_EN_LANE3_RD  CONTROL_CONFIG6.BF.MCU_EN_LANE3_RD
#define cmx_POWER_ON_SEQ_LANE3_RD  CONTROL_CONFIG6.BF.POWER_ON_SEQ_LANE3_RD
#define cmx_TXIMP_CAL_DONE_LANE3_RD  CONTROL_CONFIG6.BF.TXIMP_CAL_DONE_LANE3_RD
#define cmx_MCU_SYNC_LANE3_RD  CONTROL_CONFIG6.BF.MCU_SYNC_LANE3_RD
#define cmx_VDD_CAL_DONE_LANE3_RD  CONTROL_CONFIG6.BF.VDD_CAL_DONE_LANE3_RD

// 0x0620	CONTROL_CONFIG7		Calibration Threshold 1
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
__xdata __at( 0xe620 ) volatile CONTROL_CONFIG7_t CONTROL_CONFIG7;
#define cmx_CAL_PROC_TT2FF_7_0  CONTROL_CONFIG7.BF.CAL_PROC_TT2FF_7_0
#define cmx_CAL_PROC_SS2TT_7_0  CONTROL_CONFIG7.BF.CAL_PROC_SS2TT_7_0
#define cmx_CAL_PROC_SUBSS_7_0  CONTROL_CONFIG7.BF.CAL_PROC_SUBSS_7_0
#define cmx_CAL_SQ_THRESH_IN_7_0  CONTROL_CONFIG7.BF.CAL_SQ_THRESH_IN_7_0

// 0x0624	CAL_DATA0		Calibration Result 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TEMPC_DAC_SEL_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TEMPC_MUX_SEL_R0_7_0                 : 8;	/*[23:16]     r/w 8'h5*/
		uint8_t CAL_TEMPC_MUX_HOLD_SEL_R0_7_0            : 8;	/*[31:24]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_DATA0_t;
__xdata __at( 0xe624 ) volatile CAL_DATA0_t CAL_DATA0;
#define cmx_CAL_TEMPC_DAC_SEL_7_0  CAL_DATA0.BF.CAL_TEMPC_DAC_SEL_7_0
#define cmx_CAL_TEMPC_MUX_SEL_R0_7_0  CAL_DATA0.BF.CAL_TEMPC_MUX_SEL_R0_7_0
#define cmx_CAL_TEMPC_MUX_HOLD_SEL_R0_7_0  CAL_DATA0.BF.CAL_TEMPC_MUX_HOLD_SEL_R0_7_0

// 0x0628	TRAIN_IF_CONFIG		Train Interface Config
typedef union {
	struct {
		uint8_t PIPE4_EN                                 : 1;	/*      0     r/w   1*/
		uint8_t RESERVED_1                               : 7;	/* [31:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:1]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:1]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:1]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_IF_CONFIG_t;
__xdata __at( 0xe628 ) volatile TRAIN_IF_CONFIG_t TRAIN_IF_CONFIG;
#define cmx_PIPE4_EN  TRAIN_IF_CONFIG.BF.PIPE4_EN

// 0x062c	CONTROL_CONFIG8		Config control
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t AUTO_RX_INIT_EN                          : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG8_t;
__xdata __at( 0xe62c ) volatile CONTROL_CONFIG8_t CONTROL_CONFIG8;
#define cmx_AUTO_RX_INIT_EN  CONTROL_CONFIG8.BF.AUTO_RX_INIT_EN

// 0x0630	CONTROL_CONFIG9		Config control
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
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
		uint8_t RXDCC_DLL_CAL_CONT_CUR_LOAD_EN           : 1;	/*     15     r/w   0*/
		uint8_t TXDETECT_CAL_CONT_CUR_LOAD_EN            : 1;	/*     16     r/w   0*/
		uint8_t RXDLL_CAL_CONT_CUR_LOAD_EN               : 1;	/*     17     r/w   0*/
		uint8_t EOM_DLL_CAL_CONT_CUR_LOAD_EN             : 1;	/*     18     r/w   0*/
		uint8_t ALIGN90_CAL_CONT_CUR_LOAD_EN             : 1;	/*     19     r/w   0*/
		uint8_t PLLDCC_CAL_CONT_CUR_LOAD_EN              : 1;	/*     20     r/w   0*/
		uint8_t PLLAMP_CAL_CONT_CUR_LOAD_EN              : 1;	/*     21     r/w   0*/
		uint8_t TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN          : 1;	/*     22     r/w   0*/
		uint8_t TXDCC_CAL_CONT_CUR_LOAD_EN               : 1;	/*     23     r/w   0*/
		uint8_t RXDCC_EOM_CAL_CONT_CUR_LOAD_EN           : 1;	/*     24     r/w   0*/
		uint8_t RXDCC_DATA_CAL_CONT_CUR_LOAD_EN          : 1;	/*     25     r/w   0*/
		uint8_t RXSMPLR_VDD_CAL_CONT_CUR_LOAD_EN         : 1;	/*     26     r/w   0*/
		uint8_t RXEOMCLK_VDD_CAL_CONT_CUR_LOAD_EN        : 1;	/*     27     r/w   0*/
		uint8_t RXDCLK_VDD_CAL_CONT_CUR_LOAD_EN          : 1;	/*     28     r/w   0*/
		uint8_t TXPRE_VDD_CAL_CONT_CUR_LOAD_EN           : 1;	/*     29     r/w   0*/
		uint8_t TXDATA_VDD_CAL_CONT_CUR_LOAD_EN          : 1;	/*     30     r/w   0*/
		uint8_t TXCLK_VDD_CAL_CONT_CUR_LOAD_EN           : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG9_t;
__xdata __at( 0xe630 ) volatile CONTROL_CONFIG9_t CONTROL_CONFIG9;
#define cmx_RXDCC_DLL_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.RXDCC_DLL_CAL_CONT_CUR_LOAD_EN
#define cmx_TXDETECT_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.TXDETECT_CAL_CONT_CUR_LOAD_EN
#define cmx_RXDLL_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.RXDLL_CAL_CONT_CUR_LOAD_EN
#define cmx_EOM_DLL_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.EOM_DLL_CAL_CONT_CUR_LOAD_EN
#define cmx_ALIGN90_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.ALIGN90_CAL_CONT_CUR_LOAD_EN
#define cmx_PLLDCC_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.PLLDCC_CAL_CONT_CUR_LOAD_EN
#define cmx_PLLAMP_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.PLLAMP_CAL_CONT_CUR_LOAD_EN
#define cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN
#define cmx_TXDCC_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.TXDCC_CAL_CONT_CUR_LOAD_EN
#define cmx_RXDCC_EOM_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.RXDCC_EOM_CAL_CONT_CUR_LOAD_EN
#define cmx_RXDCC_DATA_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.RXDCC_DATA_CAL_CONT_CUR_LOAD_EN
#define cmx_RXSMPLR_VDD_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.RXSMPLR_VDD_CAL_CONT_CUR_LOAD_EN
#define cmx_RXEOMCLK_VDD_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.RXEOMCLK_VDD_CAL_CONT_CUR_LOAD_EN
#define cmx_RXDCLK_VDD_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.RXDCLK_VDD_CAL_CONT_CUR_LOAD_EN
#define cmx_TXPRE_VDD_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.TXPRE_VDD_CAL_CONT_CUR_LOAD_EN
#define cmx_TXDATA_VDD_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.TXDATA_VDD_CAL_CONT_CUR_LOAD_EN
#define cmx_TXCLK_VDD_CAL_CONT_CUR_LOAD_EN  CONTROL_CONFIG9.BF.TXCLK_VDD_CAL_CONT_CUR_LOAD_EN

// 0x0634	CON_CAL_STEP_SIZE1		Calibration Configuration 
typedef union {
	struct {
		uint8_t RXDCLK_VDD_CAL_STEP_SIZE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t TXPRE_VDD_CAL_STEP_SIZE_7_0              : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t TXDATA_VDD_CAL_STEP_SIZE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t TXCLK_VDD_CAL_STEP_SIZE_7_0              : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CON_CAL_STEP_SIZE1_t;
__xdata __at( 0xe634 ) volatile CON_CAL_STEP_SIZE1_t CON_CAL_STEP_SIZE1;
#define cmx_RXDCLK_VDD_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE1.BF.RXDCLK_VDD_CAL_STEP_SIZE_7_0
#define cmx_TXPRE_VDD_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE1.BF.TXPRE_VDD_CAL_STEP_SIZE_7_0
#define cmx_TXDATA_VDD_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE1.BF.TXDATA_VDD_CAL_STEP_SIZE_7_0
#define cmx_TXCLK_VDD_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE1.BF.TXCLK_VDD_CAL_STEP_SIZE_7_0

// 0x0638	CON_CAL_STEP_SIZE2		Calibration Configuration 
typedef union {
	struct {
		uint8_t RXDCC_EOM_CAL_STEP_SIZE_7_0              : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t RXDCC_DATA_CAL_STEP_SIZE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t RXSMPLR_VDD_CAL_STEP_SIZE_7_0            : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t RXEOMCLK_VDD_CAL_STEP_SIZE_7_0           : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CON_CAL_STEP_SIZE2_t;
__xdata __at( 0xe638 ) volatile CON_CAL_STEP_SIZE2_t CON_CAL_STEP_SIZE2;
#define cmx_RXDCC_EOM_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE2.BF.RXDCC_EOM_CAL_STEP_SIZE_7_0
#define cmx_RXDCC_DATA_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE2.BF.RXDCC_DATA_CAL_STEP_SIZE_7_0
#define cmx_RXSMPLR_VDD_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE2.BF.RXSMPLR_VDD_CAL_STEP_SIZE_7_0
#define cmx_RXEOMCLK_VDD_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE2.BF.RXEOMCLK_VDD_CAL_STEP_SIZE_7_0

// 0x063c	CON_CAL_STEP_SIZE3		Calibration Configuration 
typedef union {
	struct {
		uint8_t PLLDCC_CAL_STEP_SIZE_7_0                 : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t PLLAMP_CAL_STEP_SIZE_7_0                 : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t TXDCC_PDIV_CAL_STEP_SIZE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t TXDCC_CAL_STEP_SIZE_7_0                  : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CON_CAL_STEP_SIZE3_t;
__xdata __at( 0xe63c ) volatile CON_CAL_STEP_SIZE3_t CON_CAL_STEP_SIZE3;
#define cmx_PLLDCC_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE3.BF.PLLDCC_CAL_STEP_SIZE_7_0
#define cmx_PLLAMP_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE3.BF.PLLAMP_CAL_STEP_SIZE_7_0
#define cmx_TXDCC_PDIV_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE3.BF.TXDCC_PDIV_CAL_STEP_SIZE_7_0
#define cmx_TXDCC_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE3.BF.TXDCC_CAL_STEP_SIZE_7_0

// 0x0640	CON_CAL_STEP_SIZE4		Calibration Configuration 
typedef union {
	struct {
		uint8_t TXDETECT_CAL_STEP_SIZE_7_0               : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t RXDLL_CAL_STEP_SIZE_7_0                  : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t EOM_DLL_CAL_STEP_SIZE_7_0                : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t ALIGN90_CAL_STEP_SIZE_7_0                : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CON_CAL_STEP_SIZE4_t;
__xdata __at( 0xe640 ) volatile CON_CAL_STEP_SIZE4_t CON_CAL_STEP_SIZE4;
#define cmx_TXDETECT_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE4.BF.TXDETECT_CAL_STEP_SIZE_7_0
#define cmx_RXDLL_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE4.BF.RXDLL_CAL_STEP_SIZE_7_0
#define cmx_EOM_DLL_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE4.BF.EOM_DLL_CAL_STEP_SIZE_7_0
#define cmx_ALIGN90_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE4.BF.ALIGN90_CAL_STEP_SIZE_7_0

// 0x0644	CON_CAL_STEP_SIZE5		Calibration Configuration 
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
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
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CON_CAL_STEP_SIZE5_t;
__xdata __at( 0xe644 ) volatile CON_CAL_STEP_SIZE5_t CON_CAL_STEP_SIZE5;

// 0x0648	CAL_TIME_OUT_AND_DIS		Calibration Configuration 
typedef union {
	struct {
		uint8_t RXDCC_EOM_CAL_TIMEOUT_DIS                : 1;	/*      0     r/w   0*/
		uint8_t RXDCC_DATA_CAL_TIMEOUT_DIS               : 1;	/*      1     r/w   0*/
		uint8_t RXDCC_DLL_CAL_TIMEOUT_DIS                : 1;	/*      2     r/w   0*/
		uint8_t TXDCC_PDIV_CAL_TIMEOUT_DIS               : 1;	/*      3     r/w   0*/
		uint8_t TXDCC_CAL_TIMEOUT_DIS                    : 1;	/*      4     r/w   0*/
		uint8_t PLLDCC_CAL_TIMEOUT_DIS                   : 1;	/*      5     r/w   0*/
		uint8_t TXIMP_CAL_TIMEOUT_DIS                    : 1;	/*      6     r/w   0*/
		uint8_t RXIMP_CAL_TIMEOUT_DIS                    : 1;	/*      7     r/w   0*/
		uint8_t ALIGN90_CAL_TIMEOUT_DIS                  : 1;	/*      8     r/w   0*/
		uint8_t TX_PLL_CAL_TIMEOUT_DIS                   : 1;	/*      9     r/w   0*/
		uint8_t RX_PLL_CAL_TIMEOUT_DIS                   : 1;	/*     10     r/w   0*/
		uint8_t PLLDCC_CAL_TIMEOUT                       : 1;	/*     11     r/w   0*/
		uint8_t EOM_ALIGN_CAL_TIMEOUT_DIS                : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w   0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_TIME_OUT_AND_DIS_t;
__xdata __at( 0xe648 ) volatile CAL_TIME_OUT_AND_DIS_t CAL_TIME_OUT_AND_DIS;
#define cmx_RXDCC_EOM_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.RXDCC_EOM_CAL_TIMEOUT_DIS
#define cmx_RXDCC_DATA_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.RXDCC_DATA_CAL_TIMEOUT_DIS
#define cmx_RXDCC_DLL_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.RXDCC_DLL_CAL_TIMEOUT_DIS
#define cmx_TXDCC_PDIV_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.TXDCC_PDIV_CAL_TIMEOUT_DIS
#define cmx_TXDCC_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.TXDCC_CAL_TIMEOUT_DIS
#define cmx_PLLDCC_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.PLLDCC_CAL_TIMEOUT_DIS
#define cmx_TXIMP_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.TXIMP_CAL_TIMEOUT_DIS
#define cmx_RXIMP_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.RXIMP_CAL_TIMEOUT_DIS
#define cmx_ALIGN90_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.ALIGN90_CAL_TIMEOUT_DIS
#define cmx_TX_PLL_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.TX_PLL_CAL_TIMEOUT_DIS
#define cmx_RX_PLL_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.RX_PLL_CAL_TIMEOUT_DIS
#define cmx_PLLDCC_CAL_TIMEOUT  CAL_TIME_OUT_AND_DIS.BF.PLLDCC_CAL_TIMEOUT
#define cmx_EOM_ALIGN_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.EOM_ALIGN_CAL_TIMEOUT_DIS

// 0x064c	MCU_CONFIG		MCU Configuration 
typedef union {
	struct {
		uint8_t MASTER_MCU_SEL_7_0                       : 8;	/*  [7:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_CONFIG_t;
__xdata __at( 0xe64c ) volatile MCU_CONFIG_t MCU_CONFIG;
#define cmx_MASTER_MCU_SEL_7_0  MCU_CONFIG.BF.MASTER_MCU_SEL_7_0

// 0x0650	CAL_DATA1		Calibration Result 1
typedef union {
	struct {
		uint8_t CAL_PROCESS_VALUE_ULVT_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PROCESS_VALUE_LVT_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TEMPC_MUX_SEL_R1_7_0                 : 8;	/*[23:16]     r/w 8'h5*/
		uint8_t CAL_TEMPC_MUX_HOLD_SEL_R1_7_0            : 8;	/*[31:24]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_DATA1_t;
__xdata __at( 0xe650 ) volatile CAL_DATA1_t CAL_DATA1;
#define cmx_CAL_PROCESS_VALUE_ULVT_7_0  CAL_DATA1.BF.CAL_PROCESS_VALUE_ULVT_7_0
#define cmx_CAL_PROCESS_VALUE_LVT_7_0  CAL_DATA1.BF.CAL_PROCESS_VALUE_LVT_7_0
#define cmx_CAL_TEMPC_MUX_SEL_R1_7_0  CAL_DATA1.BF.CAL_TEMPC_MUX_SEL_R1_7_0
#define cmx_CAL_TEMPC_MUX_HOLD_SEL_R1_7_0  CAL_DATA1.BF.CAL_TEMPC_MUX_HOLD_SEL_R1_7_0

// 0x0654	CAL_STATUS_READ_CMN		Calibration Status
typedef union {
	struct {
		uint8_t PROCESS_CAL_DONE                         : 1;	/*      0       r   0*/
		uint8_t PROCESS_CAL_PASS                         : 1;	/*      1       r   0*/
		uint8_t VDD_CAL_DONE                             : 1;	/*      2       r   0*/
		uint8_t RESERVED_3                               : 5;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:3]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:3]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_STATUS_READ_CMN_t;
__xdata __at( 0xe654 ) volatile CAL_STATUS_READ_CMN_t CAL_STATUS_READ_CMN;
#define cmx_PROCESS_CAL_DONE  CAL_STATUS_READ_CMN.BF.PROCESS_CAL_DONE
#define cmx_PROCESS_CAL_PASS  CAL_STATUS_READ_CMN.BF.PROCESS_CAL_PASS
#define cmx_VDD_CAL_DONE  CAL_STATUS_READ_CMN.BF.VDD_CAL_DONE

// 0x0658	CAL_STATUS_READ_CMN1		Calibration Status
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH0_PASS                     : 1;	/*      0       r   0*/
		uint8_t SELLV_TXDATA_CH0_PASS                    : 1;	/*      1       r   0*/
		uint8_t SELLV_RXINTP_CH0_PASS                    : 1;	/*      2       r   0*/
		uint8_t SELLV_RXDLL_CH0_PASS                     : 1;	/*      3       r   0*/
		uint8_t SELLV_RX_A90_DATACLK_CH0_PASS            : 1;	/*      4       r   0*/
		uint8_t SELLV_RX_SKEW_EOMCLK_CH0_PASS            : 1;	/*      5       r   0*/
		uint8_t SELLV_RX_THCLK_SAMPLER_CH0_PASS          : 1;	/*      6       r   0*/
		uint8_t SELLV_RX_THDRV_CH0_PASS                  : 1;	/*      7       r   0*/
		uint8_t SELLV_RX_CLKTOPVDDL_CH0_PASS             : 1;	/*      8       r   0*/
		uint8_t SELLV_RX_INTPEOM_DLLEOM_CH0_PASS         : 1;	/*      9       r   0*/
		uint8_t SELLV_RX_DIV2_CH0_PASS                   : 1;	/*     10       r   0*/
		uint8_t SELLV_RX_CTLE_CH0_PASS                   : 1;	/*     11       r   0*/
		uint8_t SELLV_TXCLK_CH1_PASS                     : 1;	/*     12       r   0*/
		uint8_t SELLV_TXDATA_CH1_PASS                    : 1;	/*     13       r   0*/
		uint8_t SELLV_RXINTP_CH1_PASS                    : 1;	/*     14       r   0*/
		uint8_t SELLV_RXDLL_CH1_PASS                     : 1;	/*     15       r   0*/
		uint8_t SELLV_RX_A90_DATACLK_CH1_PASS            : 1;	/*     16       r   0*/
		uint8_t SELLV_RX_SKEW_EOMCLK_CH1_PASS            : 1;	/*     17       r   0*/
		uint8_t SELLV_RX_THCLK_SAMPLER_CH1_PASS          : 1;	/*     18       r   0*/
		uint8_t SELLV_RX_THDRV_CH1_PASS                  : 1;	/*     19       r   0*/
		uint8_t SELLV_RX_CLKTOPVDDL_CH1_PASS             : 1;	/*     20       r   0*/
		uint8_t SELLV_RX_INTPEOM_DLLEOM_CH1_PASS         : 1;	/*     21       r   0*/
		uint8_t SELLV_RX_DIV2_CH1_PASS                   : 1;	/*     22       r   0*/
		uint8_t SELLV_RX_CTLE_CH1_PASS                   : 1;	/*     23       r   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_STATUS_READ_CMN1_t;
__xdata __at( 0xe658 ) volatile CAL_STATUS_READ_CMN1_t CAL_STATUS_READ_CMN1;
#define cmx_SELLV_TXCLK_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_TXCLK_CH0_PASS
#define cmx_SELLV_TXDATA_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_TXDATA_CH0_PASS
#define cmx_SELLV_RXINTP_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RXINTP_CH0_PASS
#define cmx_SELLV_RXDLL_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RXDLL_CH0_PASS
#define cmx_SELLV_RX_A90_DATACLK_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_A90_DATACLK_CH0_PASS
#define cmx_SELLV_RX_SKEW_EOMCLK_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_SKEW_EOMCLK_CH0_PASS
#define cmx_SELLV_RX_THCLK_SAMPLER_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_THCLK_SAMPLER_CH0_PASS
#define cmx_SELLV_RX_THDRV_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_THDRV_CH0_PASS
#define cmx_SELLV_RX_CLKTOPVDDL_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_CLKTOPVDDL_CH0_PASS
#define cmx_SELLV_RX_INTPEOM_DLLEOM_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_INTPEOM_DLLEOM_CH0_PASS
#define cmx_SELLV_RX_DIV2_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_DIV2_CH0_PASS
#define cmx_SELLV_RX_CTLE_CH0_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_CTLE_CH0_PASS
#define cmx_SELLV_TXCLK_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_TXCLK_CH1_PASS
#define cmx_SELLV_TXDATA_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_TXDATA_CH1_PASS
#define cmx_SELLV_RXINTP_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RXINTP_CH1_PASS
#define cmx_SELLV_RXDLL_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RXDLL_CH1_PASS
#define cmx_SELLV_RX_A90_DATACLK_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_A90_DATACLK_CH1_PASS
#define cmx_SELLV_RX_SKEW_EOMCLK_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_SKEW_EOMCLK_CH1_PASS
#define cmx_SELLV_RX_THCLK_SAMPLER_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_THCLK_SAMPLER_CH1_PASS
#define cmx_SELLV_RX_THDRV_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_THDRV_CH1_PASS
#define cmx_SELLV_RX_CLKTOPVDDL_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_CLKTOPVDDL_CH1_PASS
#define cmx_SELLV_RX_INTPEOM_DLLEOM_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_INTPEOM_DLLEOM_CH1_PASS
#define cmx_SELLV_RX_DIV2_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_DIV2_CH1_PASS
#define cmx_SELLV_RX_CTLE_CH1_PASS  CAL_STATUS_READ_CMN1.BF.SELLV_RX_CTLE_CH1_PASS

// 0x065c	CAL_STATUS_READ_CMN2		Calibration Status
typedef union {
	struct {
		uint8_t SELLV_TXCLK_CH2_PASS                     : 1;	/*      0       r   0*/
		uint8_t SELLV_TXDATA_CH2_PASS                    : 1;	/*      1       r   0*/
		uint8_t SELLV_RXINTP_CH2_PASS                    : 1;	/*      2       r   0*/
		uint8_t SELLV_RXDLL_CH2_PASS                     : 1;	/*      3       r   0*/
		uint8_t SELLV_RX_A90_DATACLK_CH2_PASS            : 1;	/*      4       r   0*/
		uint8_t SELLV_RX_SKEW_EOMCLK_CH2_PASS            : 1;	/*      5       r   0*/
		uint8_t SELLV_RX_THCLK_SAMPLER_CH2_PASS          : 1;	/*      6       r   0*/
		uint8_t SELLV_RX_THDRV_CH2_PASS                  : 1;	/*      7       r   0*/
		uint8_t SELLV_RX_CLKTOPVDDL_CH2_PASS             : 1;	/*      8       r   0*/
		uint8_t SELLV_RX_INTPEOM_DLLEOM_CH2_PASS         : 1;	/*      9       r   0*/
		uint8_t SELLV_RX_DIV2_CH2_PASS                   : 1;	/*     10       r   0*/
		uint8_t SELLV_RX_CTLE_CH2_PASS                   : 1;	/*     11       r   0*/
		uint8_t SELLV_TXCLK_CH3_PASS                     : 1;	/*     12       r   0*/
		uint8_t SELLV_TXDATA_CH3_PASS                    : 1;	/*     13       r   0*/
		uint8_t SELLV_RXINTP_CH3_PASS                    : 1;	/*     14       r   0*/
		uint8_t SELLV_RXDLL_CH3_PASS                     : 1;	/*     15       r   0*/
		uint8_t SELLV_RX_A90_DATACLK_CH3_PASS            : 1;	/*     16       r   0*/
		uint8_t SELLV_RX_SKEW_EOMCLK_CH3_PASS            : 1;	/*     17       r   0*/
		uint8_t SELLV_RX_THCLK_SAMPLER_CH3_PASS          : 1;	/*     18       r   0*/
		uint8_t SELLV_RX_THDRV_CH3_PASS                  : 1;	/*     19       r   0*/
		uint8_t SELLV_RX_CLKTOPVDDL_CH3_PASS             : 1;	/*     20       r   0*/
		uint8_t SELLV_RX_INTPEOM_DLLEOM_CH3_PASS         : 1;	/*     21       r   0*/
		uint8_t SELLV_RX_DIV2_CH3_PASS                   : 1;	/*     22       r   0*/
		uint8_t SELLV_RX_CTLE_CH3_PASS                   : 1;	/*     23       r   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_STATUS_READ_CMN2_t;
__xdata __at( 0xe65c ) volatile CAL_STATUS_READ_CMN2_t CAL_STATUS_READ_CMN2;
#define cmx_SELLV_TXCLK_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_TXCLK_CH2_PASS
#define cmx_SELLV_TXDATA_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_TXDATA_CH2_PASS
#define cmx_SELLV_RXINTP_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RXINTP_CH2_PASS
#define cmx_SELLV_RXDLL_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RXDLL_CH2_PASS
#define cmx_SELLV_RX_A90_DATACLK_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_A90_DATACLK_CH2_PASS
#define cmx_SELLV_RX_SKEW_EOMCLK_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_SKEW_EOMCLK_CH2_PASS
#define cmx_SELLV_RX_THCLK_SAMPLER_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_THCLK_SAMPLER_CH2_PASS
#define cmx_SELLV_RX_THDRV_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_THDRV_CH2_PASS
#define cmx_SELLV_RX_CLKTOPVDDL_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_CLKTOPVDDL_CH2_PASS
#define cmx_SELLV_RX_INTPEOM_DLLEOM_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_INTPEOM_DLLEOM_CH2_PASS
#define cmx_SELLV_RX_DIV2_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_DIV2_CH2_PASS
#define cmx_SELLV_RX_CTLE_CH2_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_CTLE_CH2_PASS
#define cmx_SELLV_TXCLK_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_TXCLK_CH3_PASS
#define cmx_SELLV_TXDATA_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_TXDATA_CH3_PASS
#define cmx_SELLV_RXINTP_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RXINTP_CH3_PASS
#define cmx_SELLV_RXDLL_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RXDLL_CH3_PASS
#define cmx_SELLV_RX_A90_DATACLK_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_A90_DATACLK_CH3_PASS
#define cmx_SELLV_RX_SKEW_EOMCLK_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_SKEW_EOMCLK_CH3_PASS
#define cmx_SELLV_RX_THCLK_SAMPLER_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_THCLK_SAMPLER_CH3_PASS
#define cmx_SELLV_RX_THDRV_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_THDRV_CH3_PASS
#define cmx_SELLV_RX_CLKTOPVDDL_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_CLKTOPVDDL_CH3_PASS
#define cmx_SELLV_RX_INTPEOM_DLLEOM_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_INTPEOM_DLLEOM_CH3_PASS
#define cmx_SELLV_RX_DIV2_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_DIV2_CH3_PASS
#define cmx_SELLV_RX_CTLE_CH3_PASS  CAL_STATUS_READ_CMN2.BF.SELLV_RX_CTLE_CH3_PASS

// 0x0660	LOOP_CNTS		Loop Count Control
typedef union {
	struct {
		uint8_t PHASE_TRACKING_LOOP_CNTS_7_0             : 8;	/*  [7:0]     r/w 8'h10*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LOOP_CNTS_t;
__xdata __at( 0xe660 ) volatile LOOP_CNTS_t LOOP_CNTS;
#define cmx_PHASE_TRACKING_LOOP_CNTS_7_0  LOOP_CNTS.BF.PHASE_TRACKING_LOOP_CNTS_7_0

// 0x0664	MCU_CONFIG1		MCU Configuration
typedef union {
	struct {
		uint8_t MCU_FREQ_15_0_b0                         : 8;	/* [15:0]     r/w 16'h190*/
		uint8_t MCU_FREQ_15_0_b1                         : 8;	/* [15:0]     r/w 16'h190*/
		uint8_t MCUCLK_MC_7_0                            : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MCU_CONFIG1_t;
__xdata __at( 0xe664 ) volatile MCU_CONFIG1_t MCU_CONFIG1;
#define cmx_MCU_FREQ_15_0_b0  MCU_CONFIG1.BF.MCU_FREQ_15_0_b0
#define cmx_MCU_FREQ_15_0_b1  MCU_CONFIG1.BF.MCU_FREQ_15_0_b1
#define cmx_MCUCLK_MC_7_0  MCU_CONFIG1.BF.MCUCLK_MC_7_0
#define cmx_MCU_FREQ_15_0  MCU_CONFIG1.WT.W0

// 0x0668	PROCESS_THRESHOLD1		Calibration Threshold 1
typedef union {
	struct {
		uint8_t CAL_PROC_TT2FF_RING1_7_0                 : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t CAL_PROC_SS2TT_RING1_7_0                 : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_PROC_SUBSS_RING1_7_0                 : 8;	/*[23:16]     r/w 8'hd*/
		uint8_t CAL_PROC_TT2FF_RING2_7_0                 : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PROCESS_THRESHOLD1_t;
__xdata __at( 0xe668 ) volatile PROCESS_THRESHOLD1_t PROCESS_THRESHOLD1;
#define cmx_CAL_PROC_TT2FF_RING1_7_0  PROCESS_THRESHOLD1.BF.CAL_PROC_TT2FF_RING1_7_0
#define cmx_CAL_PROC_SS2TT_RING1_7_0  PROCESS_THRESHOLD1.BF.CAL_PROC_SS2TT_RING1_7_0
#define cmx_CAL_PROC_SUBSS_RING1_7_0  PROCESS_THRESHOLD1.BF.CAL_PROC_SUBSS_RING1_7_0
#define cmx_CAL_PROC_TT2FF_RING2_7_0  PROCESS_THRESHOLD1.BF.CAL_PROC_TT2FF_RING2_7_0

// 0x066c	PROCESS_THRESHOLD2		Calibration Threshold 1
typedef union {
	struct {
		uint8_t CAL_PROC_SS2TT_RING2_7_0                 : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t CAL_PROC_SUBSS_RING2_7_0                 : 8;	/* [15:8]     r/w 8'hc*/
		uint8_t CAL_PROC_TT2FF_RING3_7_0                 : 8;	/*[23:16]     r/w 8'h3*/
		uint8_t CAL_PROC_SS2TT_RING3_7_0                 : 8;	/*[31:24]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PROCESS_THRESHOLD2_t;
__xdata __at( 0xe66c ) volatile PROCESS_THRESHOLD2_t PROCESS_THRESHOLD2;
#define cmx_CAL_PROC_SS2TT_RING2_7_0  PROCESS_THRESHOLD2.BF.CAL_PROC_SS2TT_RING2_7_0
#define cmx_CAL_PROC_SUBSS_RING2_7_0  PROCESS_THRESHOLD2.BF.CAL_PROC_SUBSS_RING2_7_0
#define cmx_CAL_PROC_TT2FF_RING3_7_0  PROCESS_THRESHOLD2.BF.CAL_PROC_TT2FF_RING3_7_0
#define cmx_CAL_PROC_SS2TT_RING3_7_0  PROCESS_THRESHOLD2.BF.CAL_PROC_SS2TT_RING3_7_0

// 0x0670	PROCESS_THRESHOLD3		Calibration Threshold 1
typedef union {
	struct {
		uint8_t CAL_PROC_SUBSS_RING3_7_0                 : 8;	/*  [7:0]     r/w 8'hb*/
		uint8_t CAL_PROC_TT2FF_RING4_7_0                 : 8;	/* [15:8]     r/w 8'h2*/
		uint8_t CAL_PROC_SS2TT_RING4_7_0                 : 8;	/*[23:16]     r/w 8'h2*/
		uint8_t CAL_PROC_SUBSS_RING4_7_0                 : 8;	/*[31:24]     r/w 8'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PROCESS_THRESHOLD3_t;
__xdata __at( 0xe670 ) volatile PROCESS_THRESHOLD3_t PROCESS_THRESHOLD3;
#define cmx_CAL_PROC_SUBSS_RING3_7_0  PROCESS_THRESHOLD3.BF.CAL_PROC_SUBSS_RING3_7_0
#define cmx_CAL_PROC_TT2FF_RING4_7_0  PROCESS_THRESHOLD3.BF.CAL_PROC_TT2FF_RING4_7_0
#define cmx_CAL_PROC_SS2TT_RING4_7_0  PROCESS_THRESHOLD3.BF.CAL_PROC_SS2TT_RING4_7_0
#define cmx_CAL_PROC_SUBSS_RING4_7_0  PROCESS_THRESHOLD3.BF.CAL_PROC_SUBSS_RING4_7_0

// 0x0674	PROCESS_THRESHOLD4		Calibration Threshold 1
typedef union {
	struct {
		uint8_t CAL_PROC_TT2FF_RING5_7_0                 : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t CAL_PROC_SS2TT_RING5_7_0                 : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_PROC_SUBSS_RING5_7_0                 : 8;	/*[23:16]     r/w 8'hb*/
		uint8_t CAL_PROC_TT2FF_RING6_7_0                 : 8;	/*[31:24]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PROCESS_THRESHOLD4_t;
__xdata __at( 0xe674 ) volatile PROCESS_THRESHOLD4_t PROCESS_THRESHOLD4;
#define cmx_CAL_PROC_TT2FF_RING5_7_0  PROCESS_THRESHOLD4.BF.CAL_PROC_TT2FF_RING5_7_0
#define cmx_CAL_PROC_SS2TT_RING5_7_0  PROCESS_THRESHOLD4.BF.CAL_PROC_SS2TT_RING5_7_0
#define cmx_CAL_PROC_SUBSS_RING5_7_0  PROCESS_THRESHOLD4.BF.CAL_PROC_SUBSS_RING5_7_0
#define cmx_CAL_PROC_TT2FF_RING6_7_0  PROCESS_THRESHOLD4.BF.CAL_PROC_TT2FF_RING6_7_0

// 0x0678	PROCESS_THRESHOLD5		Calibration Threshold 1
typedef union {
	struct {
		uint8_t CAL_PROC_SS2TT_RING6_7_0                 : 8;	/*  [7:0]     r/w 8'h6*/
		uint8_t CAL_PROC_SUBSS_RING6_7_0                 : 8;	/* [15:8]     r/w 8'hc*/
		uint8_t CAL_PROC_TT2FF_RING7_7_0                 : 8;	/*[23:16]     r/w 8'h5*/
		uint8_t CAL_PROC_SS2TT_RING7_7_0                 : 8;	/*[31:24]     r/w 8'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PROCESS_THRESHOLD5_t;
__xdata __at( 0xe678 ) volatile PROCESS_THRESHOLD5_t PROCESS_THRESHOLD5;
#define cmx_CAL_PROC_SS2TT_RING6_7_0  PROCESS_THRESHOLD5.BF.CAL_PROC_SS2TT_RING6_7_0
#define cmx_CAL_PROC_SUBSS_RING6_7_0  PROCESS_THRESHOLD5.BF.CAL_PROC_SUBSS_RING6_7_0
#define cmx_CAL_PROC_TT2FF_RING7_7_0  PROCESS_THRESHOLD5.BF.CAL_PROC_TT2FF_RING7_7_0
#define cmx_CAL_PROC_SS2TT_RING7_7_0  PROCESS_THRESHOLD5.BF.CAL_PROC_SS2TT_RING7_7_0

// 0x067c	PROCESS_THRESHOLD6		Calibration Threshold 1
typedef union {
	struct {
		uint8_t CAL_PROC_SUBSS_RING7_7_0                 : 8;	/*  [7:0]     r/w 8'hc*/
		uint8_t CAL_PROC_TT2FF_RING8_7_0                 : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_PROC_SS2TT_RING8_7_0                 : 8;	/*[23:16]     r/w 8'h4*/
		uint8_t CAL_PROC_SUBSS_RING8_7_0                 : 8;	/*[31:24]     r/w 8'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PROCESS_THRESHOLD6_t;
__xdata __at( 0xe67c ) volatile PROCESS_THRESHOLD6_t PROCESS_THRESHOLD6;
#define cmx_CAL_PROC_SUBSS_RING7_7_0  PROCESS_THRESHOLD6.BF.CAL_PROC_SUBSS_RING7_7_0
#define cmx_CAL_PROC_TT2FF_RING8_7_0  PROCESS_THRESHOLD6.BF.CAL_PROC_TT2FF_RING8_7_0
#define cmx_CAL_PROC_SS2TT_RING8_7_0  PROCESS_THRESHOLD6.BF.CAL_PROC_SS2TT_RING8_7_0
#define cmx_CAL_PROC_SUBSS_RING8_7_0  PROCESS_THRESHOLD6.BF.CAL_PROC_SUBSS_RING8_7_0

// 0x0680	PROCESS_THRESHOLD7		Calibration Threshold 1
typedef union {
	struct {
		uint8_t CAL_PROC_TT2FF_RING9_7_0                 : 8;	/*  [7:0]     r/w 8'h5*/
		uint8_t CAL_PROC_SS2TT_RING9_7_0                 : 8;	/* [15:8]     r/w 8'h5*/
		uint8_t CAL_PROC_SUBSS_RING9_7_0                 : 8;	/*[23:16]     r/w 8'he*/
		uint8_t CAL_PROC_TT2FF_RING10_7_0                : 8;	/*[31:24]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PROCESS_THRESHOLD7_t;
__xdata __at( 0xe680 ) volatile PROCESS_THRESHOLD7_t PROCESS_THRESHOLD7;
#define cmx_CAL_PROC_TT2FF_RING9_7_0  PROCESS_THRESHOLD7.BF.CAL_PROC_TT2FF_RING9_7_0
#define cmx_CAL_PROC_SS2TT_RING9_7_0  PROCESS_THRESHOLD7.BF.CAL_PROC_SS2TT_RING9_7_0
#define cmx_CAL_PROC_SUBSS_RING9_7_0  PROCESS_THRESHOLD7.BF.CAL_PROC_SUBSS_RING9_7_0
#define cmx_CAL_PROC_TT2FF_RING10_7_0  PROCESS_THRESHOLD7.BF.CAL_PROC_TT2FF_RING10_7_0

// 0x0684	PROCESS_THRESHOLD8		Calibration Threshold 1
typedef union {
	struct {
		uint8_t CAL_PROC_SS2TT_RING10_7_0                : 8;	/*  [7:0]     r/w 8'h6*/
		uint8_t CAL_PROC_SUBSS_RING10_7_0                : 8;	/* [15:8]     r/w 8'hc*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PROCESS_THRESHOLD8_t;
__xdata __at( 0xe684 ) volatile PROCESS_THRESHOLD8_t PROCESS_THRESHOLD8;
#define cmx_CAL_PROC_SS2TT_RING10_7_0  PROCESS_THRESHOLD8.BF.CAL_PROC_SS2TT_RING10_7_0
#define cmx_CAL_PROC_SUBSS_RING10_7_0  PROCESS_THRESHOLD8.BF.CAL_PROC_SUBSS_RING10_7_0

// 0x0688	END_XDAT_CMN		
typedef union {
	struct {
		uint8_t END_XDAT_CMN_7_0                         : 8;	/*  [7:0]     r/w 8'haa*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} END_XDAT_CMN_t;
__xdata __at( 0xe688 ) volatile END_XDAT_CMN_t END_XDAT_CMN;
#define cmx_END_XDAT_CMN_7_0  END_XDAT_CMN.BF.END_XDAT_CMN_7_0

#endif
