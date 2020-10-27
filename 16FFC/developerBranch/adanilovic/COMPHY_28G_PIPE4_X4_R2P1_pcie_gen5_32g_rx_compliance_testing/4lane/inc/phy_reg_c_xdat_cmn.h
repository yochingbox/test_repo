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
		uint8_t ETHERNET_CFG_1_0                         : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t LCPLL_LANE_SEL                           : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 3;	/*  [5:3]     r/w   0*/
		uint8_t RINGPLL_IND_EN                           : 1;	/*      6     r/w   1*/
		uint8_t FORCE_PARTIAL_PU_RX_ON                   : 1;	/*      7     r/w   0*/
		uint8_t CAL_DONE                                 : 1;	/*      8       r   0*/
		uint8_t MCU_INIT_DONE                            : 1;	/*      9       r   0*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t EXT_FORCE_CAL_DONE                       : 1;	/*     17     r/w   0*/
		uint8_t BYPASS_DELAY_2_0                         : 3;	/*[20:18]     r/w 3'h0*/
		uint8_t BYPASS_POWER_ON_DELAY                    : 1;	/*     21     r/w   0*/
		uint8_t BYPASS_XDAT_INIT                         : 1;	/*     22     r/w   0*/
		uint8_t BYPASS_SPEED_TABLE_LOAD                  : 1;	/*     23     r/w   0*/
		uint8_t FORCE_CONT_CAL_SKIP                      : 1;	/*     24     r/w   0*/
		uint8_t SKIP_CDR_DFE_SCHEME                      : 1;	/*     25     r/w   0*/
		uint8_t TRAIN_SIM_EN                             : 1;	/*     26     r/w   0*/
		uint8_t BYPASS_MCU_STOP                          : 1;	/*     27     r/w   0*/
		uint8_t FAST_POWER_ON_EN                         : 1;	/*     28     r/w   0*/
		uint8_t APTA_TRAIN_SIM_EN                        : 1;	/*     29     r/w   0*/
		uint8_t APTA_TRAIN_CMD_IF_EN                     : 1;	/*     30     r/w   0*/
		uint8_t VIRTUAL_TDR_SIM_EN                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG0_t;
__xdata __at( 0xe604 ) volatile CONTROL_CONFIG0_t CONTROL_CONFIG0;
#define cmx_ETHERNET_CFG_1_0  CONTROL_CONFIG0.BF.ETHERNET_CFG_1_0
#define cmx_LCPLL_LANE_SEL  CONTROL_CONFIG0.BF.LCPLL_LANE_SEL
#define cmx_RINGPLL_IND_EN  CONTROL_CONFIG0.BF.RINGPLL_IND_EN
#define cmx_FORCE_PARTIAL_PU_RX_ON  CONTROL_CONFIG0.BF.FORCE_PARTIAL_PU_RX_ON
#define cmx_CAL_DONE  CONTROL_CONFIG0.BF.CAL_DONE
#define cmx_MCU_INIT_DONE  CONTROL_CONFIG0.BF.MCU_INIT_DONE
#define cmx_EXT_FORCE_CAL_DONE  CONTROL_CONFIG0.BF.EXT_FORCE_CAL_DONE
#define cmx_BYPASS_DELAY_2_0  CONTROL_CONFIG0.BF.BYPASS_DELAY_2_0
#define cmx_BYPASS_POWER_ON_DELAY  CONTROL_CONFIG0.BF.BYPASS_POWER_ON_DELAY
#define cmx_BYPASS_XDAT_INIT  CONTROL_CONFIG0.BF.BYPASS_XDAT_INIT
#define cmx_BYPASS_SPEED_TABLE_LOAD  CONTROL_CONFIG0.BF.BYPASS_SPEED_TABLE_LOAD
#define cmx_FORCE_CONT_CAL_SKIP  CONTROL_CONFIG0.BF.FORCE_CONT_CAL_SKIP
#define cmx_SKIP_CDR_DFE_SCHEME  CONTROL_CONFIG0.BF.SKIP_CDR_DFE_SCHEME
#define cmx_TRAIN_SIM_EN  CONTROL_CONFIG0.BF.TRAIN_SIM_EN
#define cmx_BYPASS_MCU_STOP  CONTROL_CONFIG0.BF.BYPASS_MCU_STOP
#define cmx_FAST_POWER_ON_EN  CONTROL_CONFIG0.BF.FAST_POWER_ON_EN
#define cmx_APTA_TRAIN_SIM_EN  CONTROL_CONFIG0.BF.APTA_TRAIN_SIM_EN
#define cmx_APTA_TRAIN_CMD_IF_EN  CONTROL_CONFIG0.BF.APTA_TRAIN_CMD_IF_EN
#define cmx_VIRTUAL_TDR_SIM_EN  CONTROL_CONFIG0.BF.VIRTUAL_TDR_SIM_EN

// 0x0608	CONTROL_CONFIG1		Calibration Configuration 1
typedef union {
	struct {
		uint8_t CAL_START                                : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RXSMPLR_VDD_CAL_EXT_EN                   : 1;	/*      2     r/w   1*/
		uint8_t RXEOMCLK_VDD_CAL_EXT_EN                  : 1;	/*      3     r/w   1*/
		uint8_t RXDCLK_VDD_CAL_EXT_EN                    : 1;	/*      4     r/w   1*/
		uint8_t TXPRE_VDD_CAL_EXT_EN                     : 1;	/*      5     r/w   1*/
		uint8_t TXDATA_VDD_CAL_EXT_EN                    : 1;	/*      6     r/w   1*/
		uint8_t TXCLK_VDD_CAL_EXT_EN                     : 1;	/*      7     r/w   1*/
		uint8_t RING_PLL_CAL_EXT_EN                      : 1;	/*      8     r/w   0*/
		uint8_t PLLDCC_CAL_EXT_EN                        : 1;	/*      9     r/w   0*/
		uint8_t PLL_CAL_EXT_EN                           : 1;	/*     10     r/w   0*/
		uint8_t PLL_TEMP_CAL_EXT_EN                      : 1;	/*     11     r/w   0*/
		uint8_t RXDLL_CAL_EXT_EN                         : 1;	/*     12     r/w   0*/
		uint8_t EOM_DLL_CAL_EXT_EN                       : 1;	/*     13     r/w   0*/
		uint8_t TXDETECT_CAL_EXT_EN                      : 1;	/*     14     r/w   1*/
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
		uint8_t RESERVED_28                              : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
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
#define cmx_PLLDCC_CAL_EXT_EN  CONTROL_CONFIG1.BF.PLLDCC_CAL_EXT_EN
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

// 0x060c	CONTROL_CONFIG2		Calibration Configuration 1
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
		uint8_t RINGPLL_CAL_CONT_EN                      : 1;	/*     13     r/w   1*/
		uint8_t PLL_TEMP_CAL_CONT_EN                     : 1;	/*     14     r/w   1*/
		uint8_t RXDCC_DLL_CAL_CONT_EN                    : 1;	/*     15     r/w   1*/
		uint8_t TXDETECT_CAL_CONT_EN                     : 1;	/*     16     r/w   0*/
		uint8_t RXDLL_CAL_CONT_EN                        : 1;	/*     17     r/w   1*/
		uint8_t EOM_DLL_CAL_CONT_EN                      : 1;	/*     18     r/w   1*/
		uint8_t ALIGN90_CAL_CONT_EN                      : 1;	/*     19     r/w   1*/
		uint8_t PLLDCC_CAL_CONT_EN                       : 1;	/*     20     r/w   1*/
		uint8_t PLLAMP_CAL_CONT_EN                       : 1;	/*     21     r/w   1*/
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
#define cmx_RINGPLL_CAL_CONT_EN  CONTROL_CONFIG2.BF.RINGPLL_CAL_CONT_EN
#define cmx_PLL_TEMP_CAL_CONT_EN  CONTROL_CONFIG2.BF.PLL_TEMP_CAL_CONT_EN
#define cmx_RXDCC_DLL_CAL_CONT_EN  CONTROL_CONFIG2.BF.RXDCC_DLL_CAL_CONT_EN
#define cmx_TXDETECT_CAL_CONT_EN  CONTROL_CONFIG2.BF.TXDETECT_CAL_CONT_EN
#define cmx_RXDLL_CAL_CONT_EN  CONTROL_CONFIG2.BF.RXDLL_CAL_CONT_EN
#define cmx_EOM_DLL_CAL_CONT_EN  CONTROL_CONFIG2.BF.EOM_DLL_CAL_CONT_EN
#define cmx_ALIGN90_CAL_CONT_EN  CONTROL_CONFIG2.BF.ALIGN90_CAL_CONT_EN
#define cmx_PLLDCC_CAL_CONT_EN  CONTROL_CONFIG2.BF.PLLDCC_CAL_CONT_EN
#define cmx_PLLAMP_CAL_CONT_EN  CONTROL_CONFIG2.BF.PLLAMP_CAL_CONT_EN
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
		uint8_t TSHRTR_7_0                               : 8;	/*  [7:0]     r/w 8'ha0*/
		uint8_t THOLD_SEL2_7_0                           : 8;	/* [15:8]     r/w 8'h14*/
		uint8_t TEMPC_DAC_MODE_1_0                       : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t TEMPC_STEP_CTRL_2_0                      : 3;	/*[20:18]     r/w 3'h2*/
		uint8_t SPDCHG_FAST_PLL_MODE_1_0                 : 2;	/*[22:21]     r/w 2'h0*/
		uint8_t FAST_PLL_MODE                            : 1;	/*     23     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t VCON_FORCE_DISABLE                       : 1;	/*     25     r/w   0*/
		uint8_t PLLAMP_CAL_SPEEDUP_DISABLE               : 1;	/*     26     r/w   0*/
		uint8_t CAL_PROCESS_RESULT_SEL                   : 1;	/*     27     r/w   0*/
		uint8_t TX_SSC_CTRL_SEL                          : 1;	/*     28     r/w   0*/
		uint8_t DIS_SHRT_PCIE_GAIN_TRAIN                 : 1;	/*     29     r/w   0*/
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
#define cmx_VCON_FORCE_DISABLE  CONTROL_CONFIG3.BF.VCON_FORCE_DISABLE
#define cmx_PLLAMP_CAL_SPEEDUP_DISABLE  CONTROL_CONFIG3.BF.PLLAMP_CAL_SPEEDUP_DISABLE
#define cmx_CAL_PROCESS_RESULT_SEL  CONTROL_CONFIG3.BF.CAL_PROCESS_RESULT_SEL
#define cmx_TX_SSC_CTRL_SEL  CONTROL_CONFIG3.BF.TX_SSC_CTRL_SEL
#define cmx_DIS_SHRT_PCIE_GAIN_TRAIN  CONTROL_CONFIG3.BF.DIS_SHRT_PCIE_GAIN_TRAIN

// 0x0614	CONTROL_CONFIG4		Calibration Configuration 3
typedef union {
	struct {
		uint8_t FBC_RATIO_7_0                            : 8;	/*  [7:0]     r/w 8'h0*/
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
		uint8_t PLL_SPEED_THRESH_RING_15_0_b0            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_SPEED_THRESH_RING_15_0_b1            : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RINGPLL_DAC_FINE_CODE_RATIO_7_0          : 8;	/*[23:16]     r/w 8'h05*/
		uint8_t RINGPLL_DAC_MAX_STEP_NUM_7_0             : 8;	/*[31:24]     r/w 8'h03*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CONTROL_CONFIG5_t;
__xdata __at( 0xe618 ) volatile CONTROL_CONFIG5_t CONTROL_CONFIG5;
#define cmx_PLL_SPEED_THRESH_RING_15_0_b0  CONTROL_CONFIG5.BF.PLL_SPEED_THRESH_RING_15_0_b0
#define cmx_PLL_SPEED_THRESH_RING_15_0_b1  CONTROL_CONFIG5.BF.PLL_SPEED_THRESH_RING_15_0_b1
#define cmx_RINGPLL_DAC_FINE_CODE_RATIO_7_0  CONTROL_CONFIG5.BF.RINGPLL_DAC_FINE_CODE_RATIO_7_0
#define cmx_RINGPLL_DAC_MAX_STEP_NUM_7_0  CONTROL_CONFIG5.BF.RINGPLL_DAC_MAX_STEP_NUM_7_0
#define cmx_PLL_SPEED_THRESH_RING_15_0  CONTROL_CONFIG5.WT.W0

// 0x061c	CONTROL_CONFIG6		Calibration Configuration 5
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
} CONTROL_CONFIG6_t;
__xdata __at( 0xe61c ) volatile CONTROL_CONFIG6_t CONTROL_CONFIG6;
#define cmx_SPEED_THRESH_15_0_b0  CONTROL_CONFIG6.BF.SPEED_THRESH_15_0_b0
#define cmx_SPEED_THRESH_15_0_b1  CONTROL_CONFIG6.BF.SPEED_THRESH_15_0_b1
#define cmx_PLL_RATE_SEL_7_0  CONTROL_CONFIG6.BF.PLL_RATE_SEL_7_0
#define cmx_PLL_RATE_SEL_RING_7_0  CONTROL_CONFIG6.BF.PLL_RATE_SEL_RING_7_0
#define cmx_SPEED_THRESH_15_0  CONTROL_CONFIG6.WT.W0

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
		uint8_t CAL_PROCESS_VALUE_LVT_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TEMPC_DAC_SEL_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TEMPC_MUX_SEL_7_0                    : 8;	/*[23:16]     r/w 8'h5*/
		uint8_t CAL_TEMPC_MUX_HOLD_SEL_7_0               : 8;	/*[31:24]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_DATA0_t;
__xdata __at( 0xe624 ) volatile CAL_DATA0_t CAL_DATA0;
#define cmx_CAL_PROCESS_VALUE_LVT_7_0  CAL_DATA0.BF.CAL_PROCESS_VALUE_LVT_7_0
#define cmx_CAL_TEMPC_DAC_SEL_7_0  CAL_DATA0.BF.CAL_TEMPC_DAC_SEL_7_0
#define cmx_CAL_TEMPC_MUX_SEL_7_0  CAL_DATA0.BF.CAL_TEMPC_MUX_SEL_7_0
#define cmx_CAL_TEMPC_MUX_HOLD_SEL_7_0  CAL_DATA0.BF.CAL_TEMPC_MUX_HOLD_SEL_7_0

// 0x0628	TRAIN_IF_CONFIG		Train Interface Config
typedef union {
	struct {
		uint8_t PIPE4_EN                                 : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/* [15:1]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:1]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t LOCAL_TX_PRESET_INDEX_3_0                : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t LOCAL_TX_PRESET_EN                       : 1;	/*     28     r/w   1*/
		uint8_t BYPASS_P4_JUMP_GN1_TRAIN_GEN3            : 1;	/*     29     r/w   0*/
		uint8_t BYPASS_P4_JUMP_G1_TRAIN_GEN3             : 1;	/*     30     r/w   0*/
		uint8_t FFE_RES_R0_ADJ_EN                        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_IF_CONFIG_t;
__xdata __at( 0xe628 ) volatile TRAIN_IF_CONFIG_t TRAIN_IF_CONFIG;
#define cmx_PIPE4_EN  TRAIN_IF_CONFIG.BF.PIPE4_EN
#define cmx_LOCAL_TX_PRESET_INDEX_3_0  TRAIN_IF_CONFIG.BF.LOCAL_TX_PRESET_INDEX_3_0
#define cmx_LOCAL_TX_PRESET_EN  TRAIN_IF_CONFIG.BF.LOCAL_TX_PRESET_EN
#define cmx_BYPASS_P4_JUMP_GN1_TRAIN_GEN3  TRAIN_IF_CONFIG.BF.BYPASS_P4_JUMP_GN1_TRAIN_GEN3
#define cmx_BYPASS_P4_JUMP_G1_TRAIN_GEN3  TRAIN_IF_CONFIG.BF.BYPASS_P4_JUMP_G1_TRAIN_GEN3
#define cmx_FFE_RES_R0_ADJ_EN  TRAIN_IF_CONFIG.BF.FFE_RES_R0_ADJ_EN

// 0x062c	CONTROL_CONFIG8		Config control
typedef union {
	struct {
		uint8_t PHY_GEN_MAX_3_0                          : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RESERVED_8                               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w   0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t AUTO_RX_INIT_EN                          : 1;	/*     16     r/w   0*/
		uint8_t PCIE_G1_OPT_TRAIN_EN_GEN3                : 1;	/*     17     r/w   0*/
		uint8_t PCIE_TRAIN_NEW_EN                        : 1;	/*     18     r/w   0*/
		uint8_t BYPASS_P4_JUMP_GN1_TRAIN_GEN4            : 1;	/*     19     r/w   0*/
		uint8_t BYPASS_P4_JUMP_G1_TRAIN_GEN4             : 1;	/*     20     r/w   0*/
		uint8_t PCIE_G1_OPT_TRAIN_EN_GEN4                : 1;	/*     21     r/w   0*/
		uint8_t LOAD_CTLE_SPDTBL_CORE_RESET_EN           : 1;	/*     22     r/w   0*/
		uint8_t LOAD_CTLE_SPDTBL_TXDETRX_EN              : 1;	/*     23     r/w   0*/
		uint8_t REFCLK_FREQ_7_0                          : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CONTROL_CONFIG8_t;
__xdata __at( 0xe62c ) volatile CONTROL_CONFIG8_t CONTROL_CONFIG8;
#define cmx_PHY_GEN_MAX_3_0  CONTROL_CONFIG8.BF.PHY_GEN_MAX_3_0
#define cmx_AUTO_RX_INIT_EN  CONTROL_CONFIG8.BF.AUTO_RX_INIT_EN
#define cmx_PCIE_G1_OPT_TRAIN_EN_GEN3  CONTROL_CONFIG8.BF.PCIE_G1_OPT_TRAIN_EN_GEN3
#define cmx_PCIE_TRAIN_NEW_EN  CONTROL_CONFIG8.BF.PCIE_TRAIN_NEW_EN
#define cmx_BYPASS_P4_JUMP_GN1_TRAIN_GEN4  CONTROL_CONFIG8.BF.BYPASS_P4_JUMP_GN1_TRAIN_GEN4
#define cmx_BYPASS_P4_JUMP_G1_TRAIN_GEN4  CONTROL_CONFIG8.BF.BYPASS_P4_JUMP_G1_TRAIN_GEN4
#define cmx_PCIE_G1_OPT_TRAIN_EN_GEN4  CONTROL_CONFIG8.BF.PCIE_G1_OPT_TRAIN_EN_GEN4
#define cmx_LOAD_CTLE_SPDTBL_CORE_RESET_EN  CONTROL_CONFIG8.BF.LOAD_CTLE_SPDTBL_CORE_RESET_EN
#define cmx_LOAD_CTLE_SPDTBL_TXDETRX_EN  CONTROL_CONFIG8.BF.LOAD_CTLE_SPDTBL_TXDETRX_EN
#define cmx_REFCLK_FREQ_7_0  CONTROL_CONFIG8.BF.REFCLK_FREQ_7_0

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
		uint8_t PLL_VDDVCO_POLARITY_INV                  : 1;	/*      0     r/w   0*/
		uint8_t PLL_VCON_POLARITY_INV                    : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RINGPLL_CAL_FINE_STEP_7_0                : 8;	/* [15:8]     r/w 8'h16*/
		uint8_t RINGPLL_CAL_COUNTER_SIZE_7_0             : 8;	/*[23:16]     r/w 8'h04*/
		uint8_t RXDCC_DLL_CAL_STEP_SIZE_7_0              : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CON_CAL_STEP_SIZE5_t;
__xdata __at( 0xe644 ) volatile CON_CAL_STEP_SIZE5_t CON_CAL_STEP_SIZE5;
#define cmx_PLL_VDDVCO_POLARITY_INV  CON_CAL_STEP_SIZE5.BF.PLL_VDDVCO_POLARITY_INV
#define cmx_PLL_VCON_POLARITY_INV  CON_CAL_STEP_SIZE5.BF.PLL_VCON_POLARITY_INV
#define cmx_RINGPLL_CAL_FINE_STEP_7_0  CON_CAL_STEP_SIZE5.BF.RINGPLL_CAL_FINE_STEP_7_0
#define cmx_RINGPLL_CAL_COUNTER_SIZE_7_0  CON_CAL_STEP_SIZE5.BF.RINGPLL_CAL_COUNTER_SIZE_7_0
#define cmx_RXDCC_DLL_CAL_STEP_SIZE_7_0  CON_CAL_STEP_SIZE5.BF.RXDCC_DLL_CAL_STEP_SIZE_7_0

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
		uint8_t PLL_CAL_TIMEOUT_DIS                      : 1;	/*      9     r/w   0*/
		uint8_t RINGPLL_CAL_TIMEOUT_DIS                  : 1;	/*     10     r/w   0*/
		uint8_t EOM_ALIGN_CAL_TIMEOUT_DIS                : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
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
#define cmx_PLL_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.PLL_CAL_TIMEOUT_DIS
#define cmx_RINGPLL_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.RINGPLL_CAL_TIMEOUT_DIS
#define cmx_EOM_ALIGN_CAL_TIMEOUT_DIS  CAL_TIME_OUT_AND_DIS.BF.EOM_ALIGN_CAL_TIMEOUT_DIS

// 0x064c	CAL_STATUS_READ		Calibration Status
typedef union {
	struct {
		uint8_t PLL_CAL_RING_DONE                        : 1;	/*      0       r   0*/
		uint8_t PLLDCC_CAL_DONE                          : 1;	/*      1       r   0*/
		uint8_t PLL_CAL_DONE                             : 1;	/*      2       r   0*/
		uint8_t PLL_TEMP_CAL_DONE                        : 1;	/*      3       r   0*/
		uint8_t PLL_AMP_CAL_DONE                         : 1;	/*      4       r   0*/
		uint8_t PROCESS_CAL_DONE                         : 1;	/*      5       r   0*/
		uint8_t PLL_CAL_PASS                             : 1;	/*      6       r   0*/
		uint8_t PLL_TEMP_CAL_PASS                        : 1;	/*      7       r   0*/
		uint8_t PLL_AMP_CAL_PASS                         : 1;	/*      8       r   0*/
		uint8_t PROCESS_CAL_PASS                         : 1;	/*      9       r   0*/
		uint8_t PLLDCC_CAL_PASS                          : 1;	/*     10       r   0*/
		uint8_t PLL_CAL_RING_PASS                        : 1;	/*     11       r   0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w   0*/
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
} CAL_STATUS_READ_t;
__xdata __at( 0xe64c ) volatile CAL_STATUS_READ_t CAL_STATUS_READ;
#define cmx_PLL_CAL_RING_DONE  CAL_STATUS_READ.BF.PLL_CAL_RING_DONE
#define cmx_PLLDCC_CAL_DONE  CAL_STATUS_READ.BF.PLLDCC_CAL_DONE
#define cmx_PLL_CAL_DONE  CAL_STATUS_READ.BF.PLL_CAL_DONE
#define cmx_PLL_TEMP_CAL_DONE  CAL_STATUS_READ.BF.PLL_TEMP_CAL_DONE
#define cmx_PLL_AMP_CAL_DONE  CAL_STATUS_READ.BF.PLL_AMP_CAL_DONE
#define cmx_PROCESS_CAL_DONE  CAL_STATUS_READ.BF.PROCESS_CAL_DONE
#define cmx_PLL_CAL_PASS  CAL_STATUS_READ.BF.PLL_CAL_PASS
#define cmx_PLL_TEMP_CAL_PASS  CAL_STATUS_READ.BF.PLL_TEMP_CAL_PASS
#define cmx_PLL_AMP_CAL_PASS  CAL_STATUS_READ.BF.PLL_AMP_CAL_PASS
#define cmx_PROCESS_CAL_PASS  CAL_STATUS_READ.BF.PROCESS_CAL_PASS
#define cmx_PLLDCC_CAL_PASS  CAL_STATUS_READ.BF.PLLDCC_CAL_PASS
#define cmx_PLL_CAL_RING_PASS  CAL_STATUS_READ.BF.PLL_CAL_RING_PASS

// 0x0650	MCU_CONFIG		MCU Configuration 
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
__xdata __at( 0xe650 ) volatile MCU_CONFIG_t MCU_CONFIG;
#define cmx_MASTER_MCU_SEL_7_0  MCU_CONFIG.BF.MASTER_MCU_SEL_7_0

// 0x0654	CAL_DATA1		Calibration Result 1
typedef union {
	struct {
		uint8_t CAL_PROCESS_VALUE_ULVT_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w   0*/
		uint8_t CDR_PHASE_MAX_PHASE_OS_MODE01_2C_7_0     : 8;	/*[23:16]     r/w 8'h12*/
		uint8_t CDR_PHASE_MIN_PHASE_OS_MODE01_2C_7_0     : 8;	/*[31:24]     r/w 8'he4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_DATA1_t;
__xdata __at( 0xe654 ) volatile CAL_DATA1_t CAL_DATA1;
#define cmx_CAL_PROCESS_VALUE_ULVT_7_0  CAL_DATA1.BF.CAL_PROCESS_VALUE_ULVT_7_0
#define cmx_CDR_PHASE_MAX_PHASE_OS_MODE01_2C_7_0  CAL_DATA1.BF.CDR_PHASE_MAX_PHASE_OS_MODE01_2C_7_0
#define cmx_CDR_PHASE_MIN_PHASE_OS_MODE01_2C_7_0  CAL_DATA1.BF.CDR_PHASE_MIN_PHASE_OS_MODE01_2C_7_0

// 0x0658	LOOP_CNTS		Loop Count Control
typedef union {
	struct {
		uint8_t PHASE_TRACKING_LOOP_CNTS_7_0             : 8;	/*  [7:0]     r/w 8'h10*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w   0*/
		uint8_t CDR_PHASE_MAX_PHASE_OS_MODE23_2C_7_0     : 8;	/*[23:16]     r/w 8'h3c*/
		uint8_t CDR_PHASE_MIN_PHASE_OS_MODE23_2C_7_0     : 8;	/*[31:24]     r/w 8'hc4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LOOP_CNTS_t;
__xdata __at( 0xe658 ) volatile LOOP_CNTS_t LOOP_CNTS;
#define cmx_PHASE_TRACKING_LOOP_CNTS_7_0  LOOP_CNTS.BF.PHASE_TRACKING_LOOP_CNTS_7_0
#define cmx_CDR_PHASE_MAX_PHASE_OS_MODE23_2C_7_0  LOOP_CNTS.BF.CDR_PHASE_MAX_PHASE_OS_MODE23_2C_7_0
#define cmx_CDR_PHASE_MIN_PHASE_OS_MODE23_2C_7_0  LOOP_CNTS.BF.CDR_PHASE_MIN_PHASE_OS_MODE23_2C_7_0

// 0x065c	MCU_CONFIG1		MCU Configuration 
typedef union {
	struct {
		uint8_t MCU_FREQ_15_0_b0                         : 8;	/* [15:0]     r/w 16'h0190*/
		uint8_t MCU_FREQ_15_0_b1                         : 8;	/* [15:0]     r/w 16'h0190*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} MCU_CONFIG1_t;
__xdata __at( 0xe65c ) volatile MCU_CONFIG1_t MCU_CONFIG1;
#define cmx_MCU_FREQ_15_0_b0  MCU_CONFIG1.BF.MCU_FREQ_15_0_b0
#define cmx_MCU_FREQ_15_0_b1  MCU_CONFIG1.BF.MCU_FREQ_15_0_b1
#define cmx_MCU_FREQ_15_0  MCU_CONFIG1.WT.W0

// 0x0660	TIMER_SEL1		
typedef union {
	struct {
		uint8_t TPLLAMP0_15_0_b0                         : 8;	/* [15:0]     r/w 16'hfa*/
		uint8_t TPLLAMP0_15_0_b1                         : 8;	/* [15:0]     r/w 16'hfa*/
		uint8_t TPLLFREQ2_7_0                            : 8;	/*[23:16]     r/w 8'h64*/
		uint8_t TPLLFREQ3_7_0                            : 8;	/*[31:24]     r/w 8'h4b*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TIMER_SEL1_t;
__xdata __at( 0xe660 ) volatile TIMER_SEL1_t TIMER_SEL1;
#define cmx_TPLLAMP0_15_0_b0  TIMER_SEL1.BF.TPLLAMP0_15_0_b0
#define cmx_TPLLAMP0_15_0_b1  TIMER_SEL1.BF.TPLLAMP0_15_0_b1
#define cmx_TPLLFREQ2_7_0  TIMER_SEL1.BF.TPLLFREQ2_7_0
#define cmx_TPLLFREQ3_7_0  TIMER_SEL1.BF.TPLLFREQ3_7_0
#define cmx_TPLLAMP0_15_0  TIMER_SEL1.WT.W0

// 0x0664	TIMER_SEL2		
typedef union {
	struct {
		uint8_t TPLLFREQ4_15_0_b0                        : 8;	/* [15:0]     r/w 16'h1f4*/
		uint8_t TPLLFREQ4_15_0_b1                        : 8;	/* [15:0]     r/w 16'h1f4*/
		uint8_t TPLLFREQ0_7_0                            : 8;	/*[23:16]     r/w 8'h4b*/
		uint8_t TPLLFREQ1_7_0                            : 8;	/*[31:24]     r/w 8'h7d*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TIMER_SEL2_t;
__xdata __at( 0xe664 ) volatile TIMER_SEL2_t TIMER_SEL2;
#define cmx_TPLLFREQ4_15_0_b0  TIMER_SEL2.BF.TPLLFREQ4_15_0_b0
#define cmx_TPLLFREQ4_15_0_b1  TIMER_SEL2.BF.TPLLFREQ4_15_0_b1
#define cmx_TPLLFREQ0_7_0  TIMER_SEL2.BF.TPLLFREQ0_7_0
#define cmx_TPLLFREQ1_7_0  TIMER_SEL2.BF.TPLLFREQ1_7_0
#define cmx_TPLLFREQ4_15_0  TIMER_SEL2.WT.W0

// 0x0668	TIMER_SEL3		
typedef union {
	struct {
		uint8_t TPLLAMP1_SLOW_15_0_b0                    : 8;	/* [15:0]     r/w 16'hfa*/
		uint8_t TPLLAMP1_SLOW_15_0_b1                    : 8;	/* [15:0]     r/w 16'hfa*/
		uint8_t TPLLAMP1_FAST_7_0                        : 8;	/*[23:16]     r/w 8'h19*/
		uint8_t TPLLPULUP_7_0                            : 8;	/*[31:24]     r/w 8'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TIMER_SEL3_t;
__xdata __at( 0xe668 ) volatile TIMER_SEL3_t TIMER_SEL3;
#define cmx_TPLLAMP1_SLOW_15_0_b0  TIMER_SEL3.BF.TPLLAMP1_SLOW_15_0_b0
#define cmx_TPLLAMP1_SLOW_15_0_b1  TIMER_SEL3.BF.TPLLAMP1_SLOW_15_0_b1
#define cmx_TPLLAMP1_FAST_7_0  TIMER_SEL3.BF.TPLLAMP1_FAST_7_0
#define cmx_TPLLPULUP_7_0  TIMER_SEL3.BF.TPLLPULUP_7_0
#define cmx_TPLLAMP1_SLOW_15_0  TIMER_SEL3.WT.W0

// 0x066c	G_SELLV_TXCLK		
typedef union {
	struct {
		uint8_t G_SELLV_TXCLK_CH3_7_0                    : 8;	/*  [7:0]     r/w 8'h9*/
		uint8_t G_SELLV_TXCLK_CH2_7_0                    : 8;	/* [15:8]     r/w 8'h9*/
		uint8_t G_SELLV_TXCLK_CH1_7_0                    : 8;	/*[23:16]     r/w 8'h9*/
		uint8_t G_SELLV_TXCLK_CH0_7_0                    : 8;	/*[31:24]     r/w 8'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G_SELLV_TXCLK_t;
__xdata __at( 0xe66c ) volatile G_SELLV_TXCLK_t G_SELLV_TXCLK;
#define cmx_G_SELLV_TXCLK_CH3_7_0  G_SELLV_TXCLK.BF.G_SELLV_TXCLK_CH3_7_0
#define cmx_G_SELLV_TXCLK_CH2_7_0  G_SELLV_TXCLK.BF.G_SELLV_TXCLK_CH2_7_0
#define cmx_G_SELLV_TXCLK_CH1_7_0  G_SELLV_TXCLK.BF.G_SELLV_TXCLK_CH1_7_0
#define cmx_G_SELLV_TXCLK_CH0_7_0  G_SELLV_TXCLK.BF.G_SELLV_TXCLK_CH0_7_0

// 0x0670	G_SELLV_TXDATA		
typedef union {
	struct {
		uint8_t G_SELLV_TXDATA_CH3_7_0                   : 8;	/*  [7:0]     r/w 8'h9*/
		uint8_t G_SELLV_TXDATA_CH2_7_0                   : 8;	/* [15:8]     r/w 8'h9*/
		uint8_t G_SELLV_TXDATA_CH1_7_0                   : 8;	/*[23:16]     r/w 8'h9*/
		uint8_t G_SELLV_TXDATA_CH0_7_0                   : 8;	/*[31:24]     r/w 8'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G_SELLV_TXDATA_t;
__xdata __at( 0xe670 ) volatile G_SELLV_TXDATA_t G_SELLV_TXDATA;
#define cmx_G_SELLV_TXDATA_CH3_7_0  G_SELLV_TXDATA.BF.G_SELLV_TXDATA_CH3_7_0
#define cmx_G_SELLV_TXDATA_CH2_7_0  G_SELLV_TXDATA.BF.G_SELLV_TXDATA_CH2_7_0
#define cmx_G_SELLV_TXDATA_CH1_7_0  G_SELLV_TXDATA.BF.G_SELLV_TXDATA_CH1_7_0
#define cmx_G_SELLV_TXDATA_CH0_7_0  G_SELLV_TXDATA.BF.G_SELLV_TXDATA_CH0_7_0

// 0x0674	G_SELLV_TXPRE		
typedef union {
	struct {
		uint8_t G_SELLV_TXPRE_CH3_7_0                    : 8;	/*  [7:0]     r/w 8'h9*/
		uint8_t G_SELLV_TXPRE_CH2_7_0                    : 8;	/* [15:8]     r/w 8'h9*/
		uint8_t G_SELLV_TXPRE_CH1_7_0                    : 8;	/*[23:16]     r/w 8'h9*/
		uint8_t G_SELLV_TXPRE_CH0_7_0                    : 8;	/*[31:24]     r/w 8'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G_SELLV_TXPRE_t;
__xdata __at( 0xe674 ) volatile G_SELLV_TXPRE_t G_SELLV_TXPRE;
#define cmx_G_SELLV_TXPRE_CH3_7_0  G_SELLV_TXPRE.BF.G_SELLV_TXPRE_CH3_7_0
#define cmx_G_SELLV_TXPRE_CH2_7_0  G_SELLV_TXPRE.BF.G_SELLV_TXPRE_CH2_7_0
#define cmx_G_SELLV_TXPRE_CH1_7_0  G_SELLV_TXPRE.BF.G_SELLV_TXPRE_CH1_7_0
#define cmx_G_SELLV_TXPRE_CH0_7_0  G_SELLV_TXPRE.BF.G_SELLV_TXPRE_CH0_7_0

// 0x0678	G_SELLV_RXEOMCLK		
typedef union {
	struct {
		uint8_t G_SELLV_RXEOMCLK_CH3_7_0                 : 8;	/*  [7:0]     r/w 8'h9*/
		uint8_t G_SELLV_RXEOMCLK_CH2_7_0                 : 8;	/* [15:8]     r/w 8'h9*/
		uint8_t G_SELLV_RXEOMCLK_CH1_7_0                 : 8;	/*[23:16]     r/w 8'h9*/
		uint8_t G_SELLV_RXEOMCLK_CH0_7_0                 : 8;	/*[31:24]     r/w 8'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G_SELLV_RXEOMCLK_t;
__xdata __at( 0xe678 ) volatile G_SELLV_RXEOMCLK_t G_SELLV_RXEOMCLK;
#define cmx_G_SELLV_RXEOMCLK_CH3_7_0  G_SELLV_RXEOMCLK.BF.G_SELLV_RXEOMCLK_CH3_7_0
#define cmx_G_SELLV_RXEOMCLK_CH2_7_0  G_SELLV_RXEOMCLK.BF.G_SELLV_RXEOMCLK_CH2_7_0
#define cmx_G_SELLV_RXEOMCLK_CH1_7_0  G_SELLV_RXEOMCLK.BF.G_SELLV_RXEOMCLK_CH1_7_0
#define cmx_G_SELLV_RXEOMCLK_CH0_7_0  G_SELLV_RXEOMCLK.BF.G_SELLV_RXEOMCLK_CH0_7_0

// 0x067c	G_SELLV_RXDATACLK		
typedef union {
	struct {
		uint8_t G_SELLV_RXDATACLK_CH3_7_0                : 8;	/*  [7:0]     r/w 8'h9*/
		uint8_t G_SELLV_RXDATACLK_CH2_7_0                : 8;	/* [15:8]     r/w 8'h9*/
		uint8_t G_SELLV_RXDATACLK_CH1_7_0                : 8;	/*[23:16]     r/w 8'h9*/
		uint8_t G_SELLV_RXDATACLK_CH0_7_0                : 8;	/*[31:24]     r/w 8'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G_SELLV_RXDATACLK_t;
__xdata __at( 0xe67c ) volatile G_SELLV_RXDATACLK_t G_SELLV_RXDATACLK;
#define cmx_G_SELLV_RXDATACLK_CH3_7_0  G_SELLV_RXDATACLK.BF.G_SELLV_RXDATACLK_CH3_7_0
#define cmx_G_SELLV_RXDATACLK_CH2_7_0  G_SELLV_RXDATACLK.BF.G_SELLV_RXDATACLK_CH2_7_0
#define cmx_G_SELLV_RXDATACLK_CH1_7_0  G_SELLV_RXDATACLK.BF.G_SELLV_RXDATACLK_CH1_7_0
#define cmx_G_SELLV_RXDATACLK_CH0_7_0  G_SELLV_RXDATACLK.BF.G_SELLV_RXDATACLK_CH0_7_0

// 0x0680	G_SELLV_RXSAMPLER		
typedef union {
	struct {
		uint8_t G_SELLV_RXSAMPELR_CH3_7_0                : 8;	/*  [7:0]     r/w 8'h9*/
		uint8_t G_SELLV_RXSAMPELR_CH2_7_0                : 8;	/* [15:8]     r/w 8'h9*/
		uint8_t G_SELLV_RXSAMPELR_CH1_7_0                : 8;	/*[23:16]     r/w 8'h9*/
		uint8_t G_SELLV_RXSAMPELR_CH0_7_0                : 8;	/*[31:24]     r/w 8'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} G_SELLV_RXSAMPLER_t;
__xdata __at( 0xe680 ) volatile G_SELLV_RXSAMPLER_t G_SELLV_RXSAMPLER;
#define cmx_G_SELLV_RXSAMPELR_CH3_7_0  G_SELLV_RXSAMPLER.BF.G_SELLV_RXSAMPELR_CH3_7_0
#define cmx_G_SELLV_RXSAMPELR_CH2_7_0  G_SELLV_RXSAMPLER.BF.G_SELLV_RXSAMPELR_CH2_7_0
#define cmx_G_SELLV_RXSAMPELR_CH1_7_0  G_SELLV_RXSAMPLER.BF.G_SELLV_RXSAMPELR_CH1_7_0
#define cmx_G_SELLV_RXSAMPELR_CH0_7_0  G_SELLV_RXSAMPLER.BF.G_SELLV_RXSAMPELR_CH0_7_0

// 0x0684	SAS_PRESET0_TB		
typedef union {
	struct {
		uint8_t SAS_PRESET1_PRE_7_0                      : 8;	/*  [7:0]     r/w 8'h7*/
		uint8_t SAS_PRESET1_PEAK_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SAS_PRESET1_POST_7_0                     : 8;	/*[23:16]     r/w 8'hb*/
		uint8_t TX_SSC_AMP_G0_6_0                        : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t TX_DSPREAD_G0                            : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SAS_PRESET0_TB_t;
__xdata __at( 0xe684 ) volatile SAS_PRESET0_TB_t SAS_PRESET0_TB;
#define cmx_SAS_PRESET1_PRE_7_0  SAS_PRESET0_TB.BF.SAS_PRESET1_PRE_7_0
#define cmx_SAS_PRESET1_PEAK_7_0  SAS_PRESET0_TB.BF.SAS_PRESET1_PEAK_7_0
#define cmx_SAS_PRESET1_POST_7_0  SAS_PRESET0_TB.BF.SAS_PRESET1_POST_7_0
#define cmx_TX_SSC_AMP_G0_6_0  SAS_PRESET0_TB.BF.TX_SSC_AMP_G0_6_0
#define cmx_TX_DSPREAD_G0  SAS_PRESET0_TB.BF.TX_DSPREAD_G0

// 0x0688	SAS_PRESET1_TB		
typedef union {
	struct {
		uint8_t SAS_PRESET2_PRE_7_0                      : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t SAS_PRESET2_PEAK_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SAS_PRESET2_POST_7_0                     : 8;	/*[23:16]     r/w 8'h6*/
		uint8_t TX_SSC_AMP_G1_6_0                        : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t TX_DSPREAD_G1                            : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SAS_PRESET1_TB_t;
__xdata __at( 0xe688 ) volatile SAS_PRESET1_TB_t SAS_PRESET1_TB;
#define cmx_SAS_PRESET2_PRE_7_0  SAS_PRESET1_TB.BF.SAS_PRESET2_PRE_7_0
#define cmx_SAS_PRESET2_PEAK_7_0  SAS_PRESET1_TB.BF.SAS_PRESET2_PEAK_7_0
#define cmx_SAS_PRESET2_POST_7_0  SAS_PRESET1_TB.BF.SAS_PRESET2_POST_7_0
#define cmx_TX_SSC_AMP_G1_6_0  SAS_PRESET1_TB.BF.TX_SSC_AMP_G1_6_0
#define cmx_TX_DSPREAD_G1  SAS_PRESET1_TB.BF.TX_DSPREAD_G1

// 0x068c	SAS_PRESET2_TB		
typedef union {
	struct {
		uint8_t SAS_PRESET3_PRE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SAS_PRESET3_PEAK_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SAS_PRESET3_POST_7_0                     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TX_SSC_AMP_G2_6_0                        : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t TX_DSPREAD_G2                            : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SAS_PRESET2_TB_t;
__xdata __at( 0xe68c ) volatile SAS_PRESET2_TB_t SAS_PRESET2_TB;
#define cmx_SAS_PRESET3_PRE_7_0  SAS_PRESET2_TB.BF.SAS_PRESET3_PRE_7_0
#define cmx_SAS_PRESET3_PEAK_7_0  SAS_PRESET2_TB.BF.SAS_PRESET3_PEAK_7_0
#define cmx_SAS_PRESET3_POST_7_0  SAS_PRESET2_TB.BF.SAS_PRESET3_POST_7_0
#define cmx_TX_SSC_AMP_G2_6_0  SAS_PRESET2_TB.BF.TX_SSC_AMP_G2_6_0
#define cmx_TX_DSPREAD_G2  SAS_PRESET2_TB.BF.TX_DSPREAD_G2

// 0x0690	ETH_PRESET0_TB		
typedef union {
	struct {
		uint8_t ETH_PRESET1_PRE_7_0                      : 8;	/*  [7:0]     r/w 8'h2*/
		uint8_t ETH_PRESET1_PEAK_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t ETH_PRESET1_POST_7_0                     : 8;	/*[23:16]     r/w 8'hb*/
		uint8_t TX_SSC_AMP_G3_6_0                        : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t TX_DSPREAD_G3                            : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ETH_PRESET0_TB_t;
__xdata __at( 0xe690 ) volatile ETH_PRESET0_TB_t ETH_PRESET0_TB;
#define cmx_ETH_PRESET1_PRE_7_0  ETH_PRESET0_TB.BF.ETH_PRESET1_PRE_7_0
#define cmx_ETH_PRESET1_PEAK_7_0  ETH_PRESET0_TB.BF.ETH_PRESET1_PEAK_7_0
#define cmx_ETH_PRESET1_POST_7_0  ETH_PRESET0_TB.BF.ETH_PRESET1_POST_7_0
#define cmx_TX_SSC_AMP_G3_6_0  ETH_PRESET0_TB.BF.TX_SSC_AMP_G3_6_0
#define cmx_TX_DSPREAD_G3  ETH_PRESET0_TB.BF.TX_DSPREAD_G3

// 0x0694	ETH_PRESET1_TB		
typedef union {
	struct {
		uint8_t ETH_PRESET2_PRE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t ETH_PRESET2_PEAK_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t ETH_PRESET2_POST_7_0                     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TX_SSC_AMP_G4_6_0                        : 7;	/*[30:24]     r/w 7'h0*/
		uint8_t TX_DSPREAD_G4                            : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ETH_PRESET1_TB_t;
__xdata __at( 0xe694 ) volatile ETH_PRESET1_TB_t ETH_PRESET1_TB;
#define cmx_ETH_PRESET2_PRE_7_0  ETH_PRESET1_TB.BF.ETH_PRESET2_PRE_7_0
#define cmx_ETH_PRESET2_PEAK_7_0  ETH_PRESET1_TB.BF.ETH_PRESET2_PEAK_7_0
#define cmx_ETH_PRESET2_POST_7_0  ETH_PRESET1_TB.BF.ETH_PRESET2_POST_7_0
#define cmx_TX_SSC_AMP_G4_6_0  ETH_PRESET1_TB.BF.TX_SSC_AMP_G4_6_0
#define cmx_TX_DSPREAD_G4  ETH_PRESET1_TB.BF.TX_DSPREAD_G4

// 0x0698	TX_SAVE_0		
typedef union {
	struct {
		uint8_t TX_SSC_EN_G0                             : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SSC_STEP_G0_10_0_b0                      : 8;	/*[26:16]     r/w 11'h0*/
		uint8_t SSC_STEP_G0_10_0_b1                      : 3;	/*[26:16]     r/w 11'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SAVE_0_t;
__xdata __at( 0xe698 ) volatile TX_SAVE_0_t TX_SAVE_0;
#define cmx_TX_SSC_EN_G0  TX_SAVE_0.BF.TX_SSC_EN_G0
#define cmx_SSC_STEP_G0_10_0_b0  TX_SAVE_0.BF.SSC_STEP_G0_10_0_b0
#define cmx_SSC_STEP_G0_10_0_b1  TX_SAVE_0.BF.SSC_STEP_G0_10_0_b1

// 0x069c	TX_SAVE_1		
typedef union {
	struct {
		uint8_t TX_SSC_EN_G1                             : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SSC_STEP_G1_10_0_b0                      : 8;	/*[26:16]     r/w 11'h0*/
		uint8_t SSC_STEP_G1_10_0_b1                      : 3;	/*[26:16]     r/w 11'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SAVE_1_t;
__xdata __at( 0xe69c ) volatile TX_SAVE_1_t TX_SAVE_1;
#define cmx_TX_SSC_EN_G1  TX_SAVE_1.BF.TX_SSC_EN_G1
#define cmx_SSC_STEP_G1_10_0_b0  TX_SAVE_1.BF.SSC_STEP_G1_10_0_b0
#define cmx_SSC_STEP_G1_10_0_b1  TX_SAVE_1.BF.SSC_STEP_G1_10_0_b1

// 0x06a0	TX_SAVE_2		
typedef union {
	struct {
		uint8_t TX_SSC_EN_G2                             : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SSC_STEP_G2_10_0_b0                      : 8;	/*[26:16]     r/w 11'h0*/
		uint8_t SSC_STEP_G2_10_0_b1                      : 3;	/*[26:16]     r/w 11'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SAVE_2_t;
__xdata __at( 0xe6a0 ) volatile TX_SAVE_2_t TX_SAVE_2;
#define cmx_TX_SSC_EN_G2  TX_SAVE_2.BF.TX_SSC_EN_G2
#define cmx_SSC_STEP_G2_10_0_b0  TX_SAVE_2.BF.SSC_STEP_G2_10_0_b0
#define cmx_SSC_STEP_G2_10_0_b1  TX_SAVE_2.BF.SSC_STEP_G2_10_0_b1

// 0x06a4	TX_SAVE_3		
typedef union {
	struct {
		uint8_t TX_SSC_EN_G3                             : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SSC_STEP_G3_10_0_b0                      : 8;	/*[26:16]     r/w 11'h0*/
		uint8_t SSC_STEP_G3_10_0_b1                      : 3;	/*[26:16]     r/w 11'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SAVE_3_t;
__xdata __at( 0xe6a4 ) volatile TX_SAVE_3_t TX_SAVE_3;
#define cmx_TX_SSC_EN_G3  TX_SAVE_3.BF.TX_SSC_EN_G3
#define cmx_SSC_STEP_G3_10_0_b0  TX_SAVE_3.BF.SSC_STEP_G3_10_0_b0
#define cmx_SSC_STEP_G3_10_0_b1  TX_SAVE_3.BF.SSC_STEP_G3_10_0_b1

// 0x06a8	TX_SAVE_4		
typedef union {
	struct {
		uint8_t TX_SSC_EN_G4                             : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SSC_STEP_G4_10_0_b0                      : 8;	/*[26:16]     r/w 11'h0*/
		uint8_t SSC_STEP_G4_10_0_b1                      : 3;	/*[26:16]     r/w 11'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SAVE_4_t;
__xdata __at( 0xe6a8 ) volatile TX_SAVE_4_t TX_SAVE_4;
#define cmx_TX_SSC_EN_G4  TX_SAVE_4.BF.TX_SSC_EN_G4
#define cmx_SSC_STEP_G4_10_0_b0  TX_SAVE_4.BF.SSC_STEP_G4_10_0_b0
#define cmx_SSC_STEP_G4_10_0_b1  TX_SAVE_4.BF.SSC_STEP_G4_10_0_b1

// 0x06ac	CDS_EYE_CLK_THR		
typedef union {
	struct {
		uint8_t EYE_CHK_THRESH_ERR_15_0_b0               : 8;	/* [15:0]     r/w 16'h400*/
		uint8_t EYE_CHK_THRESH_ERR_15_0_b1               : 8;	/* [15:0]     r/w 16'h400*/
		uint8_t EYE_CHK_THRESH_VLD_7_0                   : 8;	/*[23:16]     r/w 8'h64*/
		uint8_t EYE_CHK_THRESH_C_3_0                     : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t EYE_CHK_THRESH_K_3_0                     : 4;	/*[31:28]     r/w 4'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_EYE_CLK_THR_t;
__xdata __at( 0xe6ac ) volatile CDS_EYE_CLK_THR_t CDS_EYE_CLK_THR;
#define cmx_EYE_CHK_THRESH_ERR_15_0_b0  CDS_EYE_CLK_THR.BF.EYE_CHK_THRESH_ERR_15_0_b0
#define cmx_EYE_CHK_THRESH_ERR_15_0_b1  CDS_EYE_CLK_THR.BF.EYE_CHK_THRESH_ERR_15_0_b1
#define cmx_EYE_CHK_THRESH_VLD_7_0  CDS_EYE_CLK_THR.BF.EYE_CHK_THRESH_VLD_7_0
#define cmx_EYE_CHK_THRESH_C_3_0  CDS_EYE_CLK_THR.BF.EYE_CHK_THRESH_C_3_0
#define cmx_EYE_CHK_THRESH_K_3_0  CDS_EYE_CLK_THR.BF.EYE_CHK_THRESH_K_3_0
#define cmx_EYE_CHK_THRESH_ERR_15_0  CDS_EYE_CLK_THR.WT.W0

// 0x06b0	LOCAL_TX_PRESET_TB0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t LOCAL_TX_PRESET0_POST_3_0                : 4;	/*  [7:4]     r/w 4'hb*/
		uint8_t LOCAL_TX_PRESET0_PRE_3_0                 : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t LOCAL_TX_PRESET0_PEAK_3_0                : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t RESERVED_16                              : 4;	/*[19:16]     r/w   0*/
		uint8_t LOCAL_TX_PRESET1_POST_3_0                : 4;	/*[23:20]     r/w 4'hb*/
		uint8_t LOCAL_TX_PRESET1_PRE_3_0                 : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t LOCAL_TX_PRESET1_PEAK_3_0                : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LOCAL_TX_PRESET_TB0_t;
__xdata __at( 0xe6b0 ) volatile LOCAL_TX_PRESET_TB0_t LOCAL_TX_PRESET_TB0;
#define cmx_LOCAL_TX_PRESET0_POST_3_0  LOCAL_TX_PRESET_TB0.BF.LOCAL_TX_PRESET0_POST_3_0
#define cmx_LOCAL_TX_PRESET0_PRE_3_0  LOCAL_TX_PRESET_TB0.BF.LOCAL_TX_PRESET0_PRE_3_0
#define cmx_LOCAL_TX_PRESET0_PEAK_3_0  LOCAL_TX_PRESET_TB0.BF.LOCAL_TX_PRESET0_PEAK_3_0
#define cmx_LOCAL_TX_PRESET1_POST_3_0  LOCAL_TX_PRESET_TB0.BF.LOCAL_TX_PRESET1_POST_3_0
#define cmx_LOCAL_TX_PRESET1_PRE_3_0  LOCAL_TX_PRESET_TB0.BF.LOCAL_TX_PRESET1_PRE_3_0
#define cmx_LOCAL_TX_PRESET1_PEAK_3_0  LOCAL_TX_PRESET_TB0.BF.LOCAL_TX_PRESET1_PEAK_3_0

// 0x06b4	LOCAL_TX_PRESET_TB1		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t LOCAL_TX_PRESET2_POST_3_0                : 4;	/*  [7:4]     r/w 4'h6*/
		uint8_t LOCAL_TX_PRESET2_PRE_3_0                 : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t LOCAL_TX_PRESET2_PEAK_3_0                : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t RESERVED_16                              : 4;	/*[19:16]     r/w   0*/
		uint8_t LOCAL_TX_PRESET3_POST_3_0                : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t LOCAL_TX_PRESET3_PRE_3_0                 : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t LOCAL_TX_PRESET3_PEAK_3_0                : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LOCAL_TX_PRESET_TB1_t;
__xdata __at( 0xe6b4 ) volatile LOCAL_TX_PRESET_TB1_t LOCAL_TX_PRESET_TB1;
#define cmx_LOCAL_TX_PRESET2_POST_3_0  LOCAL_TX_PRESET_TB1.BF.LOCAL_TX_PRESET2_POST_3_0
#define cmx_LOCAL_TX_PRESET2_PRE_3_0  LOCAL_TX_PRESET_TB1.BF.LOCAL_TX_PRESET2_PRE_3_0
#define cmx_LOCAL_TX_PRESET2_PEAK_3_0  LOCAL_TX_PRESET_TB1.BF.LOCAL_TX_PRESET2_PEAK_3_0
#define cmx_LOCAL_TX_PRESET3_POST_3_0  LOCAL_TX_PRESET_TB1.BF.LOCAL_TX_PRESET3_POST_3_0
#define cmx_LOCAL_TX_PRESET3_PRE_3_0  LOCAL_TX_PRESET_TB1.BF.LOCAL_TX_PRESET3_PRE_3_0
#define cmx_LOCAL_TX_PRESET3_PEAK_3_0  LOCAL_TX_PRESET_TB1.BF.LOCAL_TX_PRESET3_PEAK_3_0

// 0x06b8	LOCAL_TX_PRESET_TB2		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t LOCAL_TX_PRESET4_POST_3_0                : 4;	/*  [7:4]     r/w 4'hb*/
		uint8_t LOCAL_TX_PRESET4_PRE_3_0                 : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t LOCAL_TX_PRESET4_PEAK_3_0                : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t RESERVED_16                              : 4;	/*[19:16]     r/w   0*/
		uint8_t LOCAL_TX_PRESET5_POST_3_0                : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t LOCAL_TX_PRESET5_PRE_3_0                 : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t LOCAL_TX_PRESET5_PEAK_3_0                : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LOCAL_TX_PRESET_TB2_t;
__xdata __at( 0xe6b8 ) volatile LOCAL_TX_PRESET_TB2_t LOCAL_TX_PRESET_TB2;
#define cmx_LOCAL_TX_PRESET4_POST_3_0  LOCAL_TX_PRESET_TB2.BF.LOCAL_TX_PRESET4_POST_3_0
#define cmx_LOCAL_TX_PRESET4_PRE_3_0  LOCAL_TX_PRESET_TB2.BF.LOCAL_TX_PRESET4_PRE_3_0
#define cmx_LOCAL_TX_PRESET4_PEAK_3_0  LOCAL_TX_PRESET_TB2.BF.LOCAL_TX_PRESET4_PEAK_3_0
#define cmx_LOCAL_TX_PRESET5_POST_3_0  LOCAL_TX_PRESET_TB2.BF.LOCAL_TX_PRESET5_POST_3_0
#define cmx_LOCAL_TX_PRESET5_PRE_3_0  LOCAL_TX_PRESET_TB2.BF.LOCAL_TX_PRESET5_PRE_3_0
#define cmx_LOCAL_TX_PRESET5_PEAK_3_0  LOCAL_TX_PRESET_TB2.BF.LOCAL_TX_PRESET5_PEAK_3_0

// 0x06c0	LOCAL_TX_PRESET_TB3		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t LOCAL_TX_PRESET6_POST_3_0                : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t LOCAL_TX_PRESET6_PRE_3_0                 : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t LOCAL_TX_PRESET6_PEAK_3_0                : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t RESERVED_16                              : 4;	/*[19:16]     r/w   0*/
		uint8_t LOCAL_TX_PRESET7_POST_3_0                : 4;	/*[23:20]     r/w 4'h5*/
		uint8_t LOCAL_TX_PRESET7_PRE_3_0                 : 4;	/*[27:24]     r/w 4'h9*/
		uint8_t LOCAL_TX_PRESET7_PEAK_3_0                : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LOCAL_TX_PRESET_TB3_t;
__xdata __at( 0xe6c0 ) volatile LOCAL_TX_PRESET_TB3_t LOCAL_TX_PRESET_TB3;
#define cmx_LOCAL_TX_PRESET6_POST_3_0  LOCAL_TX_PRESET_TB3.BF.LOCAL_TX_PRESET6_POST_3_0
#define cmx_LOCAL_TX_PRESET6_PRE_3_0  LOCAL_TX_PRESET_TB3.BF.LOCAL_TX_PRESET6_PRE_3_0
#define cmx_LOCAL_TX_PRESET6_PEAK_3_0  LOCAL_TX_PRESET_TB3.BF.LOCAL_TX_PRESET6_PEAK_3_0
#define cmx_LOCAL_TX_PRESET7_POST_3_0  LOCAL_TX_PRESET_TB3.BF.LOCAL_TX_PRESET7_POST_3_0
#define cmx_LOCAL_TX_PRESET7_PRE_3_0  LOCAL_TX_PRESET_TB3.BF.LOCAL_TX_PRESET7_PRE_3_0
#define cmx_LOCAL_TX_PRESET7_PEAK_3_0  LOCAL_TX_PRESET_TB3.BF.LOCAL_TX_PRESET7_PEAK_3_0

// 0x06c4	LOCAL_TX_PRESET_TB4		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t LOCAL_TX_PRESET8_POST_3_0                : 4;	/*  [7:4]     r/w 4'h6*/
		uint8_t LOCAL_TX_PRESET8_PRE_3_0                 : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t LOCAL_TX_PRESET8_PEAK_3_0                : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t RESERVED_16                              : 4;	/*[19:16]     r/w   0*/
		uint8_t LOCAL_TX_PRESET9_POST_3_0                : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t LOCAL_TX_PRESET9_PRE_3_0                 : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t LOCAL_TX_PRESET9_PEAK_3_0                : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LOCAL_TX_PRESET_TB4_t;
__xdata __at( 0xe6c4 ) volatile LOCAL_TX_PRESET_TB4_t LOCAL_TX_PRESET_TB4;
#define cmx_LOCAL_TX_PRESET8_POST_3_0  LOCAL_TX_PRESET_TB4.BF.LOCAL_TX_PRESET8_POST_3_0
#define cmx_LOCAL_TX_PRESET8_PRE_3_0  LOCAL_TX_PRESET_TB4.BF.LOCAL_TX_PRESET8_PRE_3_0
#define cmx_LOCAL_TX_PRESET8_PEAK_3_0  LOCAL_TX_PRESET_TB4.BF.LOCAL_TX_PRESET8_PEAK_3_0
#define cmx_LOCAL_TX_PRESET9_POST_3_0  LOCAL_TX_PRESET_TB4.BF.LOCAL_TX_PRESET9_POST_3_0
#define cmx_LOCAL_TX_PRESET9_PRE_3_0  LOCAL_TX_PRESET_TB4.BF.LOCAL_TX_PRESET9_PRE_3_0
#define cmx_LOCAL_TX_PRESET9_PEAK_3_0  LOCAL_TX_PRESET_TB4.BF.LOCAL_TX_PRESET9_PEAK_3_0

// 0x06c8	LOCAL_TX_PRESET_TB5		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w   0*/
		uint8_t LOCAL_TX_PRESET10_POST_3_0               : 4;	/*  [7:4]     r/w 4'hf*/
		uint8_t LOCAL_TX_PRESET10_PRE_3_0                : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t LOCAL_TX_PRESET10_PEAK_3_0               : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} LOCAL_TX_PRESET_TB5_t;
__xdata __at( 0xe6c8 ) volatile LOCAL_TX_PRESET_TB5_t LOCAL_TX_PRESET_TB5;
#define cmx_LOCAL_TX_PRESET10_POST_3_0  LOCAL_TX_PRESET_TB5.BF.LOCAL_TX_PRESET10_POST_3_0
#define cmx_LOCAL_TX_PRESET10_PRE_3_0  LOCAL_TX_PRESET_TB5.BF.LOCAL_TX_PRESET10_PRE_3_0
#define cmx_LOCAL_TX_PRESET10_PEAK_3_0  LOCAL_TX_PRESET_TB5.BF.LOCAL_TX_PRESET10_PEAK_3_0

// 0x06d0	RX_INIT_TIMER0		
typedef union {
	struct {
		uint8_t RXINIT_TDFE_15_0_b0                      : 8;	/* [15:0]     r/w 16'h14*/
		uint8_t RXINIT_TDFE_15_0_b1                      : 8;	/* [15:0]     r/w 16'h14*/
		uint8_t RXINIT_TACQ_15_0_b0                      : 8;	/*[31:16]     r/w 16'h28*/
		uint8_t RXINIT_TACQ_15_0_b1                      : 8;	/*[31:16]     r/w 16'h28*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_INIT_TIMER0_t;
__xdata __at( 0xe6d0 ) volatile RX_INIT_TIMER0_t RX_INIT_TIMER0;
#define cmx_RXINIT_TDFE_15_0_b0  RX_INIT_TIMER0.BF.RXINIT_TDFE_15_0_b0
#define cmx_RXINIT_TDFE_15_0_b1  RX_INIT_TIMER0.BF.RXINIT_TDFE_15_0_b1
#define cmx_RXINIT_TACQ_15_0_b0  RX_INIT_TIMER0.BF.RXINIT_TACQ_15_0_b0
#define cmx_RXINIT_TACQ_15_0_b1  RX_INIT_TIMER0.BF.RXINIT_TACQ_15_0_b1
#define cmx_RXINIT_TDFE_15_0  RX_INIT_TIMER0.WT.W0
#define cmx_RXINIT_TACQ_15_0  RX_INIT_TIMER0.WT.W1

// 0x06d4	END_XDAT_CMN		
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
__xdata __at( 0xe6d4 ) volatile END_XDAT_CMN_t END_XDAT_CMN;
#define cmx_END_XDAT_CMN_7_0  END_XDAT_CMN.BF.END_XDAT_CMN_7_0

#endif
