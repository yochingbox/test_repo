#ifndef PHY_REG_C_XDAT_LANE_H
#define PHY_REG_C_XDAT_LANE_H



// 0x0000	CAL_CTRL1_LANE		Calibration Control Lane 1
typedef union {
	struct {
		uint8_t DLL_COMP_CAL_DONE_LANE                   : 1;	/*      0       r   0*/
		uint8_t DLL_GM_CAL_DONE_LANE                     : 1;	/*      1       r   0*/
		uint8_t SQ_THRESH_CAL_DONE_LANE                  : 1;	/*      2       r   0*/
		uint8_t DLL_CAL_DONE_LANE                        : 1;	/*      3       r   0*/
		uint8_t DLL_EOM_VDATA_CAL_DONE_LANE              : 1;	/*      4       r   0*/
		uint8_t TXDETECT_CAL_DONE_LANE                   : 1;	/*      5       r   0*/
		uint8_t RX_CLK_CAL_DONE_LANE                     : 1;	/*      6       r   0*/
		uint8_t RXDCC_DATA_CAL_DONE_LANE                 : 1;	/*      7       r   0*/
		uint8_t RX_EOM_CAL_DONE_LANE                     : 1;	/*      8       r   0*/
		uint8_t RXALIGN90_CAL_DONE_LANE                  : 1;	/*      9       r   0*/
		uint8_t EOM_ALIGN_CAL_DONE_LANE                  : 1;	/*     10       r   0*/
		uint8_t SAMPLER_CAL_DONE_LANE                    : 1;	/*     11       r   0*/
		uint8_t SAMPLER_RES_CAL_DONE_LANE                : 1;	/*     12       r   0*/
		uint8_t TXIMP_CAL_DONE_LANE                      : 1;	/*     13       r   0*/
		uint8_t RXIMP_CAL_DONE_LANE                      : 1;	/*     14       r   0*/
		uint8_t VDD_CAL_DONE_LANE                        : 1;	/*     15       r   0*/
		uint8_t TXDCC_CAL_DONE_LANE                      : 1;	/*     16       r   0*/
		uint8_t TXDCC_PDIV_CAL_DONE_LANE                 : 1;	/*     17       r   0*/
		uint8_t SQ_OFST_CAL_DONE_LANE                    : 1;	/*     18       r   0*/
		uint8_t ALIGN90_COMP_CAL_DONE_LANE               : 1;	/*     19       r   0*/
		uint8_t ADC_CAL_DONE_LANE                        : 1;	/*     20       r   0*/
		uint8_t ADC_CMN_MODE_CAL_DONE_LANE               : 1;	/*     21       r   0*/
		uint8_t ADC_VDDR_CAL_DONE_LANE                   : 1;	/*     22       r   0*/
		uint8_t RESERVED_23                              : 1;	/*[24:23]     r/w   0*/
		uint8_t RESERVED_24                              : 1;	/*[24:23]     r/w   0*/
		uint8_t RX_CAL_DONE_LANE                         : 1;	/*     25       r   0*/
		uint8_t TX_CAL_DONE_LANE                         : 1;	/*     26       r   0*/
		uint8_t CAL_DONE_LANE                            : 1;	/*     27       r   0*/
		uint8_t LOAD_SPEEDTBL_DONE_LANE                  : 1;	/*     28       r   0*/
		uint8_t LOAD_TX_SPEEDTBL_DONE_LANE               : 1;	/*     29       r   0*/
		uint8_t LOAD_RX_SPEEDTBL_DONE_LANE               : 1;	/*     30       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL1_LANE_t;
__xdata __at( 0x6000 ) volatile CAL_CTRL1_LANE_t CAL_CTRL1_LANE;
#define lnx_DLL_COMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.DLL_COMP_CAL_DONE_LANE
#define lnx_DLL_GM_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.DLL_GM_CAL_DONE_LANE
#define lnx_SQ_THRESH_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SQ_THRESH_CAL_DONE_LANE
#define lnx_DLL_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.DLL_CAL_DONE_LANE
#define lnx_DLL_EOM_VDATA_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.DLL_EOM_VDATA_CAL_DONE_LANE
#define lnx_TXDETECT_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXDETECT_CAL_DONE_LANE
#define lnx_RX_CLK_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RX_CLK_CAL_DONE_LANE
#define lnx_RXDCC_DATA_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXDCC_DATA_CAL_DONE_LANE
#define lnx_RX_EOM_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RX_EOM_CAL_DONE_LANE
#define lnx_RXALIGN90_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXALIGN90_CAL_DONE_LANE
#define lnx_EOM_ALIGN_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.EOM_ALIGN_CAL_DONE_LANE
#define lnx_SAMPLER_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SAMPLER_CAL_DONE_LANE
#define lnx_SAMPLER_RES_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SAMPLER_RES_CAL_DONE_LANE
#define lnx_TXIMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXIMP_CAL_DONE_LANE
#define lnx_RXIMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXIMP_CAL_DONE_LANE
#define lnx_VDD_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.VDD_CAL_DONE_LANE
#define lnx_TXDCC_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXDCC_CAL_DONE_LANE
#define lnx_TXDCC_PDIV_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXDCC_PDIV_CAL_DONE_LANE
#define lnx_SQ_OFST_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SQ_OFST_CAL_DONE_LANE
#define lnx_ALIGN90_COMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.ALIGN90_COMP_CAL_DONE_LANE
#define lnx_ADC_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.ADC_CAL_DONE_LANE
#define lnx_ADC_CMN_MODE_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.ADC_CMN_MODE_CAL_DONE_LANE
#define lnx_ADC_VDDR_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.ADC_VDDR_CAL_DONE_LANE
#define lnx_RX_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RX_CAL_DONE_LANE
#define lnx_TX_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TX_CAL_DONE_LANE
#define lnx_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.CAL_DONE_LANE
#define lnx_LOAD_SPEEDTBL_DONE_LANE  CAL_CTRL1_LANE.BF.LOAD_SPEEDTBL_DONE_LANE
#define lnx_LOAD_TX_SPEEDTBL_DONE_LANE  CAL_CTRL1_LANE.BF.LOAD_TX_SPEEDTBL_DONE_LANE
#define lnx_LOAD_RX_SPEEDTBL_DONE_LANE  CAL_CTRL1_LANE.BF.LOAD_RX_SPEEDTBL_DONE_LANE

// 0x0004	CAL_CTRL2_LANE		Calibration Control Lane 2
typedef union {
	struct {
		uint8_t DLL_COMP_CAL_PASS_LANE                   : 1;	/*      0       r   0*/
		uint8_t DLL_GM_CAL_PASS_LANE                     : 1;	/*      1       r   0*/
		uint8_t SQ_THRESH_CAL_PASS_LANE                  : 1;	/*      2       r   0*/
		uint8_t DLL_CAL_PASS_LANE                        : 1;	/*      3       r   0*/
		uint8_t DLL_EOM_VDATA_CAL_PASS_LANE              : 1;	/*      4       r   0*/
		uint8_t TXDETECT_CAL_PASS_LANE                   : 1;	/*      5       r   0*/
		uint8_t RX_CLK_CAL_PASS_LANE                     : 1;	/*      6       r   0*/
		uint8_t RXDCC_DATA_CAL_PASS_LANE                 : 1;	/*      7       r   0*/
		uint8_t RX_EOM_CAL_PASS_LANE                     : 1;	/*      8       r   0*/
		uint8_t RXALIGN90_CAL_PASS_LANE                  : 1;	/*      9       r   0*/
		uint8_t EOM_DAC_CAL_PASS_LANE                    : 1;	/*     10       r   0*/
		uint8_t EOM_EOMEDG_COARSE_CAL_PASS_LANE          : 1;	/*     11       r   0*/
		uint8_t EOM_EOMEDG_FINE_CAL_PASS_LANE            : 1;	/*     12       r   0*/
		uint8_t EOM_EOMDAT_CAL_PASS_LANE                 : 1;	/*     13       r   0*/
		uint8_t SAMPLER_CAL_PASS_LANE                    : 1;	/*     14       r   0*/
		uint8_t TXIMP_CAL_PASS_LANE                      : 1;	/*     15       r   0*/
		uint8_t RXIMP_CAL_PASS_LANE                      : 1;	/*     16       r   0*/
		uint8_t VDD_CAL_PASS_LANE                        : 1;	/*     17       r   0*/
		uint8_t ALIGN90_COMP_PASS_LANE                   : 1;	/*     18       r   0*/
		uint8_t ALIGN90_TRACKING_PASS_LANE               : 1;	/*     19       r   0*/
		uint8_t TXDCC_CAL_PASS_LANE                      : 1;	/*     20       r   0*/
		uint8_t SQ_OFST_CAL_PASS_LANE                    : 1;	/*     21       r   0*/
		uint8_t SELLV_TXCLK_PASS_LANE                    : 1;	/*     22       r   0*/
		uint8_t SELLV_TXDATA_PASS_LANE                   : 1;	/*     23       r   0*/
		uint8_t SELLV_RXDLL_PASS_LANE                    : 1;	/*     24       r   0*/
		uint8_t SELLV_RXINTP_PASS_LANE                   : 1;	/*     25       r   0*/
		uint8_t SELLV_RX_A90_DATACLK_PASS_LANE           : 1;	/*     26       r   0*/
		uint8_t SELLV_RX_SKEW_EOMCLK_PASS_LANE           : 1;	/*     27       r   0*/
		uint8_t SELLV_RX_THCLK_SAMPLER_PASS_LANE         : 1;	/*     28       r   0*/
		uint8_t TXDCC_PDIV_CAL_PASS_LANE                 : 1;	/*     29       r   0*/
		uint8_t SELLV_RX_THDRV_PASS_LANE                 : 1;	/*     30       r   0*/
		uint8_t SELLV_RX_CLKTOPVDDL_PASS_LANE            : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL2_LANE_t;
__xdata __at( 0x6004 ) volatile CAL_CTRL2_LANE_t CAL_CTRL2_LANE;
#define lnx_DLL_COMP_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_COMP_CAL_PASS_LANE
#define lnx_DLL_GM_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_GM_CAL_PASS_LANE
#define lnx_SQ_THRESH_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.SQ_THRESH_CAL_PASS_LANE
#define lnx_DLL_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_CAL_PASS_LANE
#define lnx_DLL_EOM_VDATA_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_EOM_VDATA_CAL_PASS_LANE
#define lnx_TXDETECT_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXDETECT_CAL_PASS_LANE
#define lnx_RX_CLK_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RX_CLK_CAL_PASS_LANE
#define lnx_RXDCC_DATA_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RXDCC_DATA_CAL_PASS_LANE
#define lnx_RX_EOM_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RX_EOM_CAL_PASS_LANE
#define lnx_RXALIGN90_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RXALIGN90_CAL_PASS_LANE
#define lnx_EOM_DAC_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.EOM_DAC_CAL_PASS_LANE
#define lnx_EOM_EOMEDG_COARSE_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.EOM_EOMEDG_COARSE_CAL_PASS_LANE
#define lnx_EOM_EOMEDG_FINE_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.EOM_EOMEDG_FINE_CAL_PASS_LANE
#define lnx_EOM_EOMDAT_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.EOM_EOMDAT_CAL_PASS_LANE
#define lnx_SAMPLER_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.SAMPLER_CAL_PASS_LANE
#define lnx_TXIMP_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXIMP_CAL_PASS_LANE
#define lnx_RXIMP_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RXIMP_CAL_PASS_LANE
#define lnx_VDD_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.VDD_CAL_PASS_LANE
#define lnx_ALIGN90_COMP_PASS_LANE  CAL_CTRL2_LANE.BF.ALIGN90_COMP_PASS_LANE
#define lnx_ALIGN90_TRACKING_PASS_LANE  CAL_CTRL2_LANE.BF.ALIGN90_TRACKING_PASS_LANE
#define lnx_TXDCC_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXDCC_CAL_PASS_LANE
#define lnx_SQ_OFST_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.SQ_OFST_CAL_PASS_LANE
#define lnx_SELLV_TXCLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_TXCLK_PASS_LANE
#define lnx_SELLV_TXDATA_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_TXDATA_PASS_LANE
#define lnx_SELLV_RXDLL_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXDLL_PASS_LANE
#define lnx_SELLV_RXINTP_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXINTP_PASS_LANE
#define lnx_SELLV_RX_A90_DATACLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RX_A90_DATACLK_PASS_LANE
#define lnx_SELLV_RX_SKEW_EOMCLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RX_SKEW_EOMCLK_PASS_LANE
#define lnx_SELLV_RX_THCLK_SAMPLER_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RX_THCLK_SAMPLER_PASS_LANE
#define lnx_TXDCC_PDIV_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXDCC_PDIV_CAL_PASS_LANE
#define lnx_SELLV_RX_THDRV_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RX_THDRV_PASS_LANE
#define lnx_SELLV_RX_CLKTOPVDDL_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RX_CLKTOPVDDL_PASS_LANE

// 0x0008	CAL_CTRL3_LANE		Calibration Control Lane 3
typedef union {
	struct {
		uint8_t LOAD_CAL_ON_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
		uint8_t PLLCAL_ON_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t RXDCC_DLL_CAL_STOP_SEL_LANE              : 1;	/*     16     r/w   0*/
		uint8_t RXDCC_EOM_CAL_STOP_SEL_LANE              : 1;	/*     17     r/w   0*/
		uint8_t RXDCC_DATA_CAL_STOP_SEL_LANE             : 1;	/*     18     r/w   0*/
		uint8_t CAL_VDD_CONTINUOUS_MODE_EN_LANE          : 1;	/*     19     r/w   0*/
		uint8_t TXDCC_CAL_STOP_SEL_LANE                  : 1;	/*     20     r/w   0*/
		uint8_t DLL_VDDA_TRACKING_ON_LANE                : 1;	/*     21     r/w   0*/
		uint8_t TXIMP_CAL_TIMEOUT_LANE                   : 1;	/*     22       r   0*/
		uint8_t RXIMP_CAL_TIMEOUT_LANE                   : 1;	/*     23       r   0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w   0*/
		uint8_t ADC_VDDR_CAL_PASS_LANE                   : 1;	/*     26       r   0*/
		uint8_t ADC_CMN_MODE_CAL_PASS_LANE               : 1;	/*     27       r   0*/
		uint8_t ADC_CAL_PASS_LANE                        : 1;	/*     28       r   0*/
		uint8_t SELLV_RX_INTPEOM_DLLEOM_PASS_LANE        : 1;	/*     29       r   0*/
		uint8_t SELLV_RX_DIV2_PASS_LANE                  : 1;	/*     30       r   0*/
		uint8_t SELLV_RX_CTLE_PASS_LANE                  : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL3_LANE_t;
__xdata __at( 0x6008 ) volatile CAL_CTRL3_LANE_t CAL_CTRL3_LANE;
#define lnx_LOAD_CAL_ON_LANE_7_0  CAL_CTRL3_LANE.BF.LOAD_CAL_ON_LANE_7_0
#define lnx_PLLCAL_ON_LANE_7_0  CAL_CTRL3_LANE.BF.PLLCAL_ON_LANE_7_0
#define lnx_RXDCC_DLL_CAL_STOP_SEL_LANE  CAL_CTRL3_LANE.BF.RXDCC_DLL_CAL_STOP_SEL_LANE
#define lnx_RXDCC_EOM_CAL_STOP_SEL_LANE  CAL_CTRL3_LANE.BF.RXDCC_EOM_CAL_STOP_SEL_LANE
#define lnx_RXDCC_DATA_CAL_STOP_SEL_LANE  CAL_CTRL3_LANE.BF.RXDCC_DATA_CAL_STOP_SEL_LANE
#define lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE  CAL_CTRL3_LANE.BF.CAL_VDD_CONTINUOUS_MODE_EN_LANE
#define lnx_TXDCC_CAL_STOP_SEL_LANE  CAL_CTRL3_LANE.BF.TXDCC_CAL_STOP_SEL_LANE
#define lnx_DLL_VDDA_TRACKING_ON_LANE  CAL_CTRL3_LANE.BF.DLL_VDDA_TRACKING_ON_LANE
#define lnx_TXIMP_CAL_TIMEOUT_LANE  CAL_CTRL3_LANE.BF.TXIMP_CAL_TIMEOUT_LANE
#define lnx_RXIMP_CAL_TIMEOUT_LANE  CAL_CTRL3_LANE.BF.RXIMP_CAL_TIMEOUT_LANE
#define lnx_ADC_VDDR_CAL_PASS_LANE  CAL_CTRL3_LANE.BF.ADC_VDDR_CAL_PASS_LANE
#define lnx_ADC_CMN_MODE_CAL_PASS_LANE  CAL_CTRL3_LANE.BF.ADC_CMN_MODE_CAL_PASS_LANE
#define lnx_ADC_CAL_PASS_LANE  CAL_CTRL3_LANE.BF.ADC_CAL_PASS_LANE
#define lnx_SELLV_RX_INTPEOM_DLLEOM_PASS_LANE  CAL_CTRL3_LANE.BF.SELLV_RX_INTPEOM_DLLEOM_PASS_LANE
#define lnx_SELLV_RX_DIV2_PASS_LANE  CAL_CTRL3_LANE.BF.SELLV_RX_DIV2_PASS_LANE
#define lnx_SELLV_RX_CTLE_PASS_LANE  CAL_CTRL3_LANE.BF.SELLV_RX_CTLE_PASS_LANE

// 0x000c	CAL_CTRL4_LANE		Calibration Control Lane 4
typedef union {
	struct {
		uint8_t SAMPLER_CAL_AVG_MODE_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SAMPLER_SAMPLE_SIZE_LANE_7_0             : 8;	/* [15:8]     r/w 8'h3*/
		uint8_t RX_PLL_RATE_LANE_7_0                     : 8;	/*[23:16]       r 8'h0*/
		uint8_t TX_PLL_RATE_LANE_7_0                     : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL4_LANE_t;
__xdata __at( 0x600c ) volatile CAL_CTRL4_LANE_t CAL_CTRL4_LANE;
#define lnx_SAMPLER_CAL_AVG_MODE_LANE_7_0  CAL_CTRL4_LANE.BF.SAMPLER_CAL_AVG_MODE_LANE_7_0
#define lnx_SAMPLER_SAMPLE_SIZE_LANE_7_0  CAL_CTRL4_LANE.BF.SAMPLER_SAMPLE_SIZE_LANE_7_0
#define lnx_RX_PLL_RATE_LANE_7_0  CAL_CTRL4_LANE.BF.RX_PLL_RATE_LANE_7_0
#define lnx_TX_PLL_RATE_LANE_7_0  CAL_CTRL4_LANE.BF.TX_PLL_RATE_LANE_7_0

// 0x0010	PLL_RS_CAL_CTRL_LANE		Calibration Control Lane 5
typedef union {
	struct {
		uint8_t PLL_RS_SPEED_THRESH_LANE_15_0_b0         : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_RS_SPEED_THRESH_LANE_15_0_b1         : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_RS_VCO_AMP_VTH_LOW_LANE_3_0          : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t PLL_RS_VCO_AMP_VTH_MID_LANE_3_0          : 4;	/*[23:20]     r/w 4'h5*/
		uint8_t PLL_RS_VCO_AMP_VTH_HIGH_LANE_3_0         : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLL_RS_CAL_CTRL_LANE_t;
__xdata __at( 0x6010 ) volatile PLL_RS_CAL_CTRL_LANE_t PLL_RS_CAL_CTRL_LANE;
#define lnx_PLL_RS_SPEED_THRESH_LANE_15_0_b0  PLL_RS_CAL_CTRL_LANE.BF.PLL_RS_SPEED_THRESH_LANE_15_0_b0
#define lnx_PLL_RS_SPEED_THRESH_LANE_15_0_b1  PLL_RS_CAL_CTRL_LANE.BF.PLL_RS_SPEED_THRESH_LANE_15_0_b1
#define lnx_PLL_RS_VCO_AMP_VTH_LOW_LANE_3_0  PLL_RS_CAL_CTRL_LANE.BF.PLL_RS_VCO_AMP_VTH_LOW_LANE_3_0
#define lnx_PLL_RS_VCO_AMP_VTH_MID_LANE_3_0  PLL_RS_CAL_CTRL_LANE.BF.PLL_RS_VCO_AMP_VTH_MID_LANE_3_0
#define lnx_PLL_RS_VCO_AMP_VTH_HIGH_LANE_3_0  PLL_RS_CAL_CTRL_LANE.BF.PLL_RS_VCO_AMP_VTH_HIGH_LANE_3_0
#define lnx_PLL_RS_SPEED_THRESH_LANE_15_0  PLL_RS_CAL_CTRL_LANE.WT.W0

// 0x0014	CAL_SAVE_DATA1_LANE		Calibration Result 1
typedef union {
	struct {
		uint8_t CAL_DLL_CMP_OFFSET_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SQ_OFFSET_LANE_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SQ_THRESH_LANE_7_0                   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA1_LANE_t;
__xdata __at( 0x6014 ) volatile CAL_SAVE_DATA1_LANE_t CAL_SAVE_DATA1_LANE;
#define lnx_CAL_DLL_CMP_OFFSET_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_DLL_CMP_OFFSET_LANE_7_0
#define lnx_CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0
#define lnx_CAL_SQ_OFFSET_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_SQ_OFFSET_LANE_7_0
#define lnx_CAL_SQ_THRESH_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_SQ_THRESH_LANE_7_0

// 0x0018	CAL_SAVE_DATA2_LANE		Calibration Result 4
typedef union {
	struct {
		uint8_t CAL_ALIGN90_CMP_OFFSET_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_IMP_LANE_7_0                      : 8;	/* [15:8]     r/w 8'hc*/
		uint8_t CAL_TXIMP_TUNEN_TOP_LANE_7_0             : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_TXIMP_TUNEP_TOP_LANE_7_0             : 8;	/*[31:24]     r/w 8'h37*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA2_LANE_t;
__xdata __at( 0x6018 ) volatile CAL_SAVE_DATA2_LANE_t CAL_SAVE_DATA2_LANE;
#define lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_ALIGN90_CMP_OFFSET_LANE_7_0
#define lnx_CAL_RX_IMP_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_RX_IMP_LANE_7_0
#define lnx_CAL_TXIMP_TUNEN_TOP_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_TXIMP_TUNEN_TOP_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP_TOP_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_TXIMP_TUNEP_TOP_LANE_7_0

// 0x001c	CAL_SAVE_DATA3_LANE		Calibration Result 5
typedef union {
	struct {
		uint8_t CAL_TXIMP_TUNEN_MID_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_TXIMP_TUNEP_MID_LANE_7_0             : 8;	/* [15:8]     r/w 8'h37*/
		uint8_t CAL_TXIMP_TUNEN_BOT_LANE_7_0             : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_TXIMP_TUNEP_BOT_LANE_7_0             : 8;	/*[31:24]     r/w 8'h37*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA3_LANE_t;
__xdata __at( 0x601c ) volatile CAL_SAVE_DATA3_LANE_t CAL_SAVE_DATA3_LANE;
#define lnx_CAL_TXIMP_TUNEN_MID_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEN_MID_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP_MID_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEP_MID_LANE_7_0
#define lnx_CAL_TXIMP_TUNEN_BOT_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEN_BOT_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP_BOT_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEP_BOT_LANE_7_0

// 0x0020	CAL_SAVE_DATA4_LANE		Calibration Result 6
typedef union {
	struct {
		uint8_t CAL_OFST_D_TOP_E_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_OFST_D_MID_E_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_OFST_D_BOT_E_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_OFST_D_TOP_O_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA4_LANE_t;
__xdata __at( 0x6020 ) volatile CAL_SAVE_DATA4_LANE_t CAL_SAVE_DATA4_LANE;
#define lnx_CAL_OFST_D_TOP_E_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_OFST_D_TOP_E_LANE_7_0
#define lnx_CAL_OFST_D_MID_E_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_OFST_D_MID_E_LANE_7_0
#define lnx_CAL_OFST_D_BOT_E_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_OFST_D_BOT_E_LANE_7_0
#define lnx_CAL_OFST_D_TOP_O_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_OFST_D_TOP_O_LANE_7_0

// 0x0024	CAL_SAVE_DATA5_LANE		Calibration Result 7
typedef union {
	struct {
		uint8_t CAL_OFST_D_MID_O_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_OFST_D_BOT_O_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_OFST_S_TOP_E_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_OFST_S_MID_E_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA5_LANE_t;
__xdata __at( 0x6024 ) volatile CAL_SAVE_DATA5_LANE_t CAL_SAVE_DATA5_LANE;
#define lnx_CAL_OFST_D_MID_O_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_OFST_D_MID_O_LANE_7_0
#define lnx_CAL_OFST_D_BOT_O_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_OFST_D_BOT_O_LANE_7_0
#define lnx_CAL_OFST_S_TOP_E_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_OFST_S_TOP_E_LANE_7_0
#define lnx_CAL_OFST_S_MID_E_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_OFST_S_MID_E_LANE_7_0

// 0x0028	CAL_SAVE_DATA6_LANE		Calibration Result 8
typedef union {
	struct {
		uint8_t CAL_OFST_S_BOT_E_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_OFST_S_TOP_O_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_OFST_S_MID_O_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_OFST_S_BOT_O_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA6_LANE_t;
__xdata __at( 0x6028 ) volatile CAL_SAVE_DATA6_LANE_t CAL_SAVE_DATA6_LANE;
#define lnx_CAL_OFST_S_BOT_E_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_OFST_S_BOT_E_LANE_7_0
#define lnx_CAL_OFST_S_TOP_O_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_OFST_S_TOP_O_LANE_7_0
#define lnx_CAL_OFST_S_MID_O_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_OFST_S_MID_O_LANE_7_0
#define lnx_CAL_OFST_S_BOT_O_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_OFST_S_BOT_O_LANE_7_0

// 0x002c	CAL_SAVE_DATA7_LANE		Calibration Result 9
typedef union {
	struct {
		uint8_t CAL_OFST_EDGE_E_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_OFST_EDGE_O_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SAMPLER_RES_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_AMP_CAL_VAL_MAX_LANE_7_0             : 8;	/*[31:24]     r/w 8'he0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA7_LANE_t;
__xdata __at( 0x602c ) volatile CAL_SAVE_DATA7_LANE_t CAL_SAVE_DATA7_LANE;
#define lnx_CAL_OFST_EDGE_E_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_OFST_EDGE_E_LANE_7_0
#define lnx_CAL_OFST_EDGE_O_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_OFST_EDGE_O_LANE_7_0
#define lnx_CAL_SAMPLER_RES_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_SAMPLER_RES_LANE_7_0
#define lnx_PLL_AMP_CAL_VAL_MAX_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.PLL_AMP_CAL_VAL_MAX_LANE_7_0

// 0x0030	MCU_COMMAND0_LANE		Lane MCU Command Register 0
typedef union {
	struct {
		uint8_t MCU_COMMAND0_LANE_31_0_b0                : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_COMMAND0_LANE_31_0_b1                : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_COMMAND0_LANE_31_0_b2                : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t MCU_COMMAND0_LANE_31_0_b3                : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_COMMAND0_LANE_t;
__xdata __at( 0x6030 ) volatile MCU_COMMAND0_LANE_t MCU_COMMAND0_LANE;
#define lnx_MCU_COMMAND0_LANE_31_0_b0  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b0
#define lnx_MCU_COMMAND0_LANE_31_0_b1  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b1
#define lnx_MCU_COMMAND0_LANE_31_0_b2  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b2
#define lnx_MCU_COMMAND0_LANE_31_0_b3  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b3

// 0x0034	TRX_TRAIN_IF_TIMERS_ENABLE_LANE		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [25:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [25:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [25:0]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/* [25:0]     r/w   0*/
		uint8_t TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE     : 1;	/*     26       r   0*/
		uint8_t FRAME_LOCK_SEL_TIMEOUT_LANE              : 1;	/*     27     r/w 1'b0*/
		uint8_t TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE     : 1;	/*     28     r/w 1'b1*/
		uint8_t TX_TRAIN_TIMER_ENABLE_LANE               : 1;	/*     29     r/w 1'b1*/
		uint8_t RX_TRAIN_TIMER_ENABLE_LANE               : 1;	/*     30     r/w 1'b1*/
		uint8_t TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE    : 1;	/*     31     r/w 1'b1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_IF_TIMERS_ENABLE_LANE_t;
__xdata __at( 0x6034 ) volatile TRX_TRAIN_IF_TIMERS_ENABLE_LANE_t TRX_TRAIN_IF_TIMERS_ENABLE_LANE;
#define lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE
#define lnx_FRAME_LOCK_SEL_TIMEOUT_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.FRAME_LOCK_SEL_TIMEOUT_LANE
#define lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE
#define lnx_TX_TRAIN_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_TIMER_ENABLE_LANE
#define lnx_RX_TRAIN_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.RX_TRAIN_TIMER_ENABLE_LANE
#define lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE

// 0x0038	TRX_TRAINING_TOP_CTRL_0		
typedef union {
	struct {
		uint8_t TRX_TRAIN_SAT_CHECK_BYPASS_EN_LANE       : 1;	/*      0     r/w   0*/
		uint8_t RX_TRAIN_BLIND_BYPASS_EN_LANE            : 1;	/*      1     r/w   0*/
		uint8_t TX_TRAIN_FFE_DET_PRE_BYPASS_EN_LANE      : 1;	/*      2     r/w   0*/
		uint8_t TRX_TRAIN_LOCK_CDR_BYPASS_EN_LANE        : 1;	/*      3     r/w   0*/
		uint8_t TRX_TRAIN_SWEEP_COARSE_CTLE_BYPASS_EN_LANE : 1;	/*      4     r/w   0*/
		uint8_t TX_TRAIN_TXFFE_SET_PRE_BYPASS_EN_LANE    : 1;	/*      5     r/w   0*/
		uint8_t TRX_TRAIN_OPT_BYPASS_EN_LANE             : 1;	/*      6     r/w   0*/
		uint8_t TRX_TRAIN_FINAL_TUNING_BYPASS_EN_LANE    : 1;	/*      7     r/w   0*/
		uint8_t TRX_TRAIN_INIT_BYPASS_EN_LANE            : 1;	/*      8     r/w   0*/
		uint8_t TRX_FINAL_TUNE_BYPASS_EN_LANE            : 1;	/*      9     r/w   0*/
		uint8_t TRX_TRAIN_EXIT_BYPASS_EN_LANE            : 1;	/*     10     r/w   0*/
		uint8_t TRX_TRAIN_ADC_CAL_BYPASS_EN_LANE         : 1;	/*     11     r/w   0*/
		uint8_t TRX_TRAIN_MINI_SCHEDULER_BYPASS_EN_LANE  : 1;	/*     12     r/w   0*/
		uint8_t TRX_TRAIN_OPT_FINE_BYPASS_EN_LANE        : 1;	/*     13     r/w   0*/
		uint8_t TX_TRAIN_SHAPE_BASED_TRAIN_BYPASS_EN_LANE : 1;	/*     14     r/w   0*/
		uint8_t TX_TRAIN_SHAPE_BASED_TRAIN_EN_LANE       : 1;	/*     15     r/w   1*/
		uint8_t TRX_TRAIN_TRX_OPT_FINE_EN_LANE           : 1;	/*     16     r/w 1'h1*/
		uint8_t TX_TRAIN_P2P_HOLD_LANE                   : 1;	/*     17     r/w 1'h1*/
		uint8_t TRX_TRAIN_ADC_CAL_SKEW_EN_LANE           : 1;	/*     18     r/w 1'b1*/
		uint8_t TRX_TRAIN_ADC_CAL_GAO_EN_LANE            : 1;	/*     19     r/w 1'b1*/
		uint8_t TRX_TRAIN_AGC_EN_LANE                    : 1;	/*     20     r/w 1'b1*/
		uint8_t TRX_TRAIN_FLT_OPT_EN_LANE                : 1;	/*     21     r/w 1'b1*/
		uint8_t TRX_TRAIN_DFE_OPT_EN_LANE                : 1;	/*     22     r/w 1'b1*/
		uint8_t TRX_TRAIN_TRX_OPT_EN_LANE                : 1;	/*     23     r/w 1'b1*/
		uint8_t TX_TRAIN_ONLY_START_LANE                 : 1;	/*     24     r/w   0*/
		uint8_t TRX_TRAIN_TXFFE_PRESET_EXT_LANE_2_0      : 3;	/*[27:25]     r/w 3'h3*/
		uint8_t TRX_TRAIN_TX_TRAIN_EN_LANE               : 1;	/*     28     r/w 1'b0*/
		uint8_t TRX_TRAIN_TXFFE_PRESET_EXT_EN_LANE       : 1;	/*     29     r/w   0*/
		uint8_t TRX_TRAIN_DTL_PHASE_OPT_EN_LANE          : 1;	/*     30     r/w 1'b1*/
		uint8_t TRX_TRAIN_DP_PST1_FZ_DFE_EN_LANE         : 1;	/*     31     r/w 1'b1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAINING_TOP_CTRL_0_t;
__xdata __at( 0x6038 ) volatile TRX_TRAINING_TOP_CTRL_0_t TRX_TRAINING_TOP_CTRL_0;
#define lnx_TRX_TRAIN_SAT_CHECK_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_SAT_CHECK_BYPASS_EN_LANE
#define lnx_RX_TRAIN_BLIND_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.RX_TRAIN_BLIND_BYPASS_EN_LANE
#define lnx_TX_TRAIN_FFE_DET_PRE_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TX_TRAIN_FFE_DET_PRE_BYPASS_EN_LANE
#define lnx_TRX_TRAIN_LOCK_CDR_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_LOCK_CDR_BYPASS_EN_LANE
#define lnx_TRX_TRAIN_SWEEP_COARSE_CTLE_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_SWEEP_COARSE_CTLE_BYPASS_EN_LANE
#define lnx_TX_TRAIN_TXFFE_SET_PRE_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TX_TRAIN_TXFFE_SET_PRE_BYPASS_EN_LANE
#define lnx_TRX_TRAIN_OPT_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_OPT_BYPASS_EN_LANE
#define lnx_TRX_TRAIN_FINAL_TUNING_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_FINAL_TUNING_BYPASS_EN_LANE
#define lnx_TRX_TRAIN_INIT_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_INIT_BYPASS_EN_LANE
#define lnx_TRX_FINAL_TUNE_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_FINAL_TUNE_BYPASS_EN_LANE
#define lnx_TRX_TRAIN_EXIT_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_EXIT_BYPASS_EN_LANE
#define lnx_TRX_TRAIN_ADC_CAL_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_ADC_CAL_BYPASS_EN_LANE
#define lnx_TRX_TRAIN_MINI_SCHEDULER_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_MINI_SCHEDULER_BYPASS_EN_LANE
#define lnx_TRX_TRAIN_OPT_FINE_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_OPT_FINE_BYPASS_EN_LANE
#define lnx_TX_TRAIN_SHAPE_BASED_TRAIN_BYPASS_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TX_TRAIN_SHAPE_BASED_TRAIN_BYPASS_EN_LANE
#define lnx_TX_TRAIN_SHAPE_BASED_TRAIN_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TX_TRAIN_SHAPE_BASED_TRAIN_EN_LANE
#define lnx_TRX_TRAIN_TRX_OPT_FINE_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_TRX_OPT_FINE_EN_LANE
#define lnx_TX_TRAIN_P2P_HOLD_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TX_TRAIN_P2P_HOLD_LANE
#define lnx_TRX_TRAIN_ADC_CAL_SKEW_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_ADC_CAL_SKEW_EN_LANE
#define lnx_TRX_TRAIN_ADC_CAL_GAO_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_ADC_CAL_GAO_EN_LANE
#define lnx_TRX_TRAIN_AGC_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_AGC_EN_LANE
#define lnx_TRX_TRAIN_FLT_OPT_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_FLT_OPT_EN_LANE
#define lnx_TRX_TRAIN_DFE_OPT_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_DFE_OPT_EN_LANE
#define lnx_TRX_TRAIN_TRX_OPT_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_TRX_OPT_EN_LANE
#define lnx_TX_TRAIN_ONLY_START_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TX_TRAIN_ONLY_START_LANE
#define lnx_TRX_TRAIN_TXFFE_PRESET_EXT_LANE_2_0  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_TXFFE_PRESET_EXT_LANE_2_0
#define lnx_TRX_TRAIN_TX_TRAIN_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_TX_TRAIN_EN_LANE
#define lnx_TRX_TRAIN_TXFFE_PRESET_EXT_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_TXFFE_PRESET_EXT_EN_LANE
#define lnx_TRX_TRAIN_DTL_PHASE_OPT_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_DTL_PHASE_OPT_EN_LANE
#define lnx_TRX_TRAIN_DP_PST1_FZ_DFE_EN_LANE  TRX_TRAINING_TOP_CTRL_0.BF.TRX_TRAIN_DP_PST1_FZ_DFE_EN_LANE

// 0x003c	TRX_TRAINING_TOP_CTRL_1		
typedef union {
	struct {
		uint8_t TRX_TRAIN_CTLE_C_MAX_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h64*/
		uint8_t TRX_TRAIN_CTLE_C_MIN_LANE_7_0            : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRX_TRAIN_CTLE_R_MAX_LANE_4_0            : 5;	/*[20:16]     r/w 5'h7*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t TRX_TRAIN_CTLE_R_MIN_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t TRX_TRAIN_PAT_PROT_EN_LANE               : 1;	/*     29     r/w   1*/
		uint8_t TRX_TRAIN_END_DTL_PST1_EN_LANE           : 1;	/*     30     r/w   1*/
		uint8_t TRX_TRAIN_END_SKEW_PROT_EN_LANE          : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAINING_TOP_CTRL_1_t;
__xdata __at( 0x603c ) volatile TRX_TRAINING_TOP_CTRL_1_t TRX_TRAINING_TOP_CTRL_1;
#define lnx_TRX_TRAIN_CTLE_C_MAX_LANE_7_0  TRX_TRAINING_TOP_CTRL_1.BF.TRX_TRAIN_CTLE_C_MAX_LANE_7_0
#define lnx_TRX_TRAIN_CTLE_C_MIN_LANE_7_0  TRX_TRAINING_TOP_CTRL_1.BF.TRX_TRAIN_CTLE_C_MIN_LANE_7_0
#define lnx_TRX_TRAIN_CTLE_R_MAX_LANE_4_0  TRX_TRAINING_TOP_CTRL_1.BF.TRX_TRAIN_CTLE_R_MAX_LANE_4_0
#define lnx_TRX_TRAIN_CTLE_R_MIN_LANE_4_0  TRX_TRAINING_TOP_CTRL_1.BF.TRX_TRAIN_CTLE_R_MIN_LANE_4_0
#define lnx_TRX_TRAIN_PAT_PROT_EN_LANE  TRX_TRAINING_TOP_CTRL_1.BF.TRX_TRAIN_PAT_PROT_EN_LANE
#define lnx_TRX_TRAIN_END_DTL_PST1_EN_LANE  TRX_TRAINING_TOP_CTRL_1.BF.TRX_TRAIN_END_DTL_PST1_EN_LANE
#define lnx_TRX_TRAIN_END_SKEW_PROT_EN_LANE  TRX_TRAINING_TOP_CTRL_1.BF.TRX_TRAIN_END_SKEW_PROT_EN_LANE

// 0x0040	TRX_TRAINING_TOP_CTRL_2		
typedef union {
	struct {
		uint8_t TRX_TRAIN_DFE_STOP_VAL_LANE_5_0          : 6;	/*  [5:0]     r/w 6'h19*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t TRX_TRAIN_DFE_START_VAL_LANE_5_0         : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RX_TRAIN_CTLE_TUNE_RL1_EXTRA_EN_LANE     : 1;	/*     14     r/w 1'b0*/
		uint8_t RX_TRAIN_CTLE_TUNE_CUR2_EN_LANE          : 1;	/*     15     r/w 1'b0*/
		uint8_t TRX_TRAIN_CTLE_GC_MAX_LANE_4_0           : 5;	/*[20:16]     r/w 5'h5*/
		uint8_t RX_TRAIN_CTLE_TUNE_CUR1_EN_LANE          : 1;	/*     21     r/w 1'b0*/
		uint8_t RX_TRAIN_CTLE_TUNE_CURTIA_EN_LANE        : 1;	/*     22     r/w 1'b1*/
		uint8_t RX_TRAIN_CTLE_TUNE_RL1_EN_LANE           : 1;	/*     23     r/w 1'b1*/
		uint8_t TRX_TRAIN_CTLE_GC_MIN_LANE_4_0           : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RX_TRAIN_MID_FREQ_TUNE_EN_LANE           : 1;	/*     29     r/w 1'b1*/
		uint8_t RX_TRAIN_COARSE_GAIN_TUNE_EN_LANE        : 1;	/*     30     r/w 1'b1*/
		uint8_t RX_TRAIN_CTLE_TUNE_EN_LANE               : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAINING_TOP_CTRL_2_t;
__xdata __at( 0x6040 ) volatile TRX_TRAINING_TOP_CTRL_2_t TRX_TRAINING_TOP_CTRL_2;
#define lnx_TRX_TRAIN_DFE_STOP_VAL_LANE_5_0  TRX_TRAINING_TOP_CTRL_2.BF.TRX_TRAIN_DFE_STOP_VAL_LANE_5_0
#define lnx_TRX_TRAIN_DFE_START_VAL_LANE_5_0  TRX_TRAINING_TOP_CTRL_2.BF.TRX_TRAIN_DFE_START_VAL_LANE_5_0
#define lnx_RX_TRAIN_CTLE_TUNE_RL1_EXTRA_EN_LANE  TRX_TRAINING_TOP_CTRL_2.BF.RX_TRAIN_CTLE_TUNE_RL1_EXTRA_EN_LANE
#define lnx_RX_TRAIN_CTLE_TUNE_CUR2_EN_LANE  TRX_TRAINING_TOP_CTRL_2.BF.RX_TRAIN_CTLE_TUNE_CUR2_EN_LANE
#define lnx_TRX_TRAIN_CTLE_GC_MAX_LANE_4_0  TRX_TRAINING_TOP_CTRL_2.BF.TRX_TRAIN_CTLE_GC_MAX_LANE_4_0
#define lnx_RX_TRAIN_CTLE_TUNE_CUR1_EN_LANE  TRX_TRAINING_TOP_CTRL_2.BF.RX_TRAIN_CTLE_TUNE_CUR1_EN_LANE
#define lnx_RX_TRAIN_CTLE_TUNE_CURTIA_EN_LANE  TRX_TRAINING_TOP_CTRL_2.BF.RX_TRAIN_CTLE_TUNE_CURTIA_EN_LANE
#define lnx_RX_TRAIN_CTLE_TUNE_RL1_EN_LANE  TRX_TRAINING_TOP_CTRL_2.BF.RX_TRAIN_CTLE_TUNE_RL1_EN_LANE
#define lnx_TRX_TRAIN_CTLE_GC_MIN_LANE_4_0  TRX_TRAINING_TOP_CTRL_2.BF.TRX_TRAIN_CTLE_GC_MIN_LANE_4_0
#define lnx_RX_TRAIN_MID_FREQ_TUNE_EN_LANE  TRX_TRAINING_TOP_CTRL_2.BF.RX_TRAIN_MID_FREQ_TUNE_EN_LANE
#define lnx_RX_TRAIN_COARSE_GAIN_TUNE_EN_LANE  TRX_TRAINING_TOP_CTRL_2.BF.RX_TRAIN_COARSE_GAIN_TUNE_EN_LANE
#define lnx_RX_TRAIN_CTLE_TUNE_EN_LANE  TRX_TRAINING_TOP_CTRL_2.BF.RX_TRAIN_CTLE_TUNE_EN_LANE

// 0x0044	TRX_TRAINING_TOP_CTRL_3		
typedef union {
	struct {
		uint8_t TRX_TRAIN_SNR_DTL_CHECK_LANE_15_0_b0     : 8;	/* [15:0]     r/w 16'he0*/
		uint8_t TRX_TRAIN_SNR_DTL_CHECK_LANE_15_0_b1     : 8;	/* [15:0]     r/w 16'he0*/
		uint8_t TRX_TRAIN_SNR_LEN_LANE_3_0               : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t RX_TRAIN_CTLE_TUNE_GC_EN_LANE            : 1;	/*     20     r/w   0*/
		uint8_t RX_TRAIN_CTLE_TUNE_C_EN_LANE             : 1;	/*     21     r/w   0*/
		uint8_t RX_TRAIN_CTLE_TUNE_R_EN_LANE             : 1;	/*     22     r/w   0*/
		uint8_t PAUSE_LANE                               : 1;	/*     23     r/w   0*/
		uint8_t TRX_TRAIN_DEBUG_EN_LANE_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TRAINING_TOP_CTRL_3_t;
__xdata __at( 0x6044 ) volatile TRX_TRAINING_TOP_CTRL_3_t TRX_TRAINING_TOP_CTRL_3;
#define lnx_TRX_TRAIN_SNR_DTL_CHECK_LANE_15_0_b0  TRX_TRAINING_TOP_CTRL_3.BF.TRX_TRAIN_SNR_DTL_CHECK_LANE_15_0_b0
#define lnx_TRX_TRAIN_SNR_DTL_CHECK_LANE_15_0_b1  TRX_TRAINING_TOP_CTRL_3.BF.TRX_TRAIN_SNR_DTL_CHECK_LANE_15_0_b1
#define lnx_TRX_TRAIN_SNR_LEN_LANE_3_0  TRX_TRAINING_TOP_CTRL_3.BF.TRX_TRAIN_SNR_LEN_LANE_3_0
#define lnx_RX_TRAIN_CTLE_TUNE_GC_EN_LANE  TRX_TRAINING_TOP_CTRL_3.BF.RX_TRAIN_CTLE_TUNE_GC_EN_LANE
#define lnx_RX_TRAIN_CTLE_TUNE_C_EN_LANE  TRX_TRAINING_TOP_CTRL_3.BF.RX_TRAIN_CTLE_TUNE_C_EN_LANE
#define lnx_RX_TRAIN_CTLE_TUNE_R_EN_LANE  TRX_TRAINING_TOP_CTRL_3.BF.RX_TRAIN_CTLE_TUNE_R_EN_LANE
#define lnx_PAUSE_LANE  TRX_TRAINING_TOP_CTRL_3.BF.PAUSE_LANE
#define lnx_TRX_TRAIN_DEBUG_EN_LANE_7_0  TRX_TRAINING_TOP_CTRL_3.BF.TRX_TRAIN_DEBUG_EN_LANE_7_0
#define lnx_TRX_TRAIN_SNR_DTL_CHECK_LANE_15_0  TRX_TRAINING_TOP_CTRL_3.WT.W0

// 0x0048	TRAIN_INITIALIZATION		
typedef union {
	struct {
		uint8_t TRX_TRAIN_INIT_ADC_CAL_SKEW_RESET_LANE   : 1;	/*      0     r/w 1'b1*/
		uint8_t TRX_TRAIN_INIT_ADC_CAL_GAO_RESET_LANE    : 1;	/*      1     r/w 1'b1*/
		uint8_t TRX_TRAIN_ADC_REF_SEL_LANE_2_0           : 3;	/*  [4:2]     r/w 3'h4*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TRX_TRAIN_BG_BLIND_SKEW_FORCE_TH_LANE_7_0 : 8;	/* [15:8]     r/w 8'h18*/
		uint8_t TRAIN_CONT_MODE_TIMER_LEN_LANE_7_0       : 8;	/*[23:16]     r/w 8'h64*/
		uint8_t RX_TRAIN_CTLE_TUNE_RL1_STEP_DN_LANE_3_0  : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t RX_TRAIN_COARSE_GAIN_TUNE_STEP_LANE_1_0  : 2;	/*[29:28]     r/w 2'h1*/
		uint8_t TRAIN_CONT_MODE_DTL_PH_OPT_EN_LANE       : 1;	/*     30     r/w   0*/
		uint8_t TRX_TRAIN_FFE_LEN_OPT_EN_LANE            : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_INITIALIZATION_t;
__xdata __at( 0x6048 ) volatile TRAIN_INITIALIZATION_t TRAIN_INITIALIZATION;
#define lnx_TRX_TRAIN_INIT_ADC_CAL_SKEW_RESET_LANE  TRAIN_INITIALIZATION.BF.TRX_TRAIN_INIT_ADC_CAL_SKEW_RESET_LANE
#define lnx_TRX_TRAIN_INIT_ADC_CAL_GAO_RESET_LANE  TRAIN_INITIALIZATION.BF.TRX_TRAIN_INIT_ADC_CAL_GAO_RESET_LANE
#define lnx_TRX_TRAIN_ADC_REF_SEL_LANE_2_0  TRAIN_INITIALIZATION.BF.TRX_TRAIN_ADC_REF_SEL_LANE_2_0
#define lnx_TRX_TRAIN_BG_BLIND_SKEW_FORCE_TH_LANE_7_0  TRAIN_INITIALIZATION.BF.TRX_TRAIN_BG_BLIND_SKEW_FORCE_TH_LANE_7_0
#define lnx_TRAIN_CONT_MODE_TIMER_LEN_LANE_7_0  TRAIN_INITIALIZATION.BF.TRAIN_CONT_MODE_TIMER_LEN_LANE_7_0
#define lnx_RX_TRAIN_CTLE_TUNE_RL1_STEP_DN_LANE_3_0  TRAIN_INITIALIZATION.BF.RX_TRAIN_CTLE_TUNE_RL1_STEP_DN_LANE_3_0
#define lnx_RX_TRAIN_COARSE_GAIN_TUNE_STEP_LANE_1_0  TRAIN_INITIALIZATION.BF.RX_TRAIN_COARSE_GAIN_TUNE_STEP_LANE_1_0
#define lnx_TRAIN_CONT_MODE_DTL_PH_OPT_EN_LANE  TRAIN_INITIALIZATION.BF.TRAIN_CONT_MODE_DTL_PH_OPT_EN_LANE
#define lnx_TRX_TRAIN_FFE_LEN_OPT_EN_LANE  TRAIN_INITIALIZATION.BF.TRX_TRAIN_FFE_LEN_OPT_EN_LANE

// 0x004c	TRAIN_CONTROL_0		
typedef union {
	struct {
		uint8_t MIDPOINT_SMALL_THRES_C_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MIDPOINT_SMALL_THRES_K_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MIDPOINT_LARGE_THRES_C_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MIDPOINT_LARGE_THRES_K_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_0_t;
__xdata __at( 0x604c ) volatile TRAIN_CONTROL_0_t TRAIN_CONTROL_0;
#define lnx_MIDPOINT_SMALL_THRES_C_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_SMALL_THRES_C_LANE_7_0
#define lnx_MIDPOINT_SMALL_THRES_K_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_SMALL_THRES_K_LANE_7_0
#define lnx_MIDPOINT_LARGE_THRES_C_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_LARGE_THRES_C_LANE_7_0
#define lnx_MIDPOINT_LARGE_THRES_K_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_LARGE_THRES_K_LANE_7_0

// 0x0050	TRAIN_CONTROL_1		
typedef union {
	struct {
		uint8_t INI_PHASE_OFFSET_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MIDPOINT_PHASE_OS_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SUMF_BOOST_TARGET_C_LANE_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SUMF_BOOST_TARGET_K_LANE_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_1_t;
__xdata __at( 0x6050 ) volatile TRAIN_CONTROL_1_t TRAIN_CONTROL_1;
#define lnx_INI_PHASE_OFFSET_LANE_7_0  TRAIN_CONTROL_1.BF.INI_PHASE_OFFSET_LANE_7_0
#define lnx_MIDPOINT_PHASE_OS_LANE_7_0  TRAIN_CONTROL_1.BF.MIDPOINT_PHASE_OS_LANE_7_0
#define lnx_SUMF_BOOST_TARGET_C_LANE_7_0  TRAIN_CONTROL_1.BF.SUMF_BOOST_TARGET_C_LANE_7_0
#define lnx_SUMF_BOOST_TARGET_K_LANE_7_0  TRAIN_CONTROL_1.BF.SUMF_BOOST_TARGET_K_LANE_7_0

// 0x0054	TRAIN_CONTROL_2		
typedef union {
	struct {
		uint8_t ESM_PHASE_LANE_9_0_b0                    : 8;	/*  [9:0]     r/w 10'h0*/
		uint8_t ESM_PHASE_LANE_9_0_b1                    : 2;	/*  [9:0]     r/w 10'h0*/
		uint8_t ESM_DFE_ADAPT_SPLR_EN_LANE_3_0           : 4;	/*[13:10]     r/w 4'h0*/
		uint8_t TX_TRAIN_COMPLETE_INT_LANE               : 1;	/*     14       r 1'b1*/
		uint8_t TX_TRAIN_FAIL_INT_LANE                   : 1;	/*     15       r 1'b1*/
		uint8_t ESM_PATH_SEL_LANE                        : 1;	/*     16     r/w 1'b0*/
		uint8_t TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE    : 1;	/*     17       r 1'h0*/
		uint8_t ESM_EN_LANE                              : 1;	/*     18     r/w 1'h0*/
		uint8_t TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE   : 1;	/*     19       r 1'h0*/
		uint8_t REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE    : 1;	/*     20       r 1'h0*/
		uint8_t TX_ADAPT_G1_EN_LANE                      : 1;	/*     21     r/w 1'h0*/
		uint8_t TX_ADAPT_GN1_EN_LANE                     : 1;	/*     22     r/w 1'h0*/
		uint8_t TX_ADAPT_G0_EN_LANE                      : 1;	/*     23     r/w 1'h0*/
		uint8_t RXFFE_R_GAIN_TRAIN_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RX_RXFFE_R_INI_LANE_3_0                  : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_2_t;
__xdata __at( 0x6054 ) volatile TRAIN_CONTROL_2_t TRAIN_CONTROL_2;
#define lnx_ESM_PHASE_LANE_9_0_b0  TRAIN_CONTROL_2.BF.ESM_PHASE_LANE_9_0_b0
#define lnx_ESM_PHASE_LANE_9_0_b1  TRAIN_CONTROL_2.BF.ESM_PHASE_LANE_9_0_b1
#define lnx_ESM_DFE_ADAPT_SPLR_EN_LANE_3_0  TRAIN_CONTROL_2.BF.ESM_DFE_ADAPT_SPLR_EN_LANE_3_0
#define lnx_TX_TRAIN_COMPLETE_INT_LANE  TRAIN_CONTROL_2.BF.TX_TRAIN_COMPLETE_INT_LANE
#define lnx_TX_TRAIN_FAIL_INT_LANE  TRAIN_CONTROL_2.BF.TX_TRAIN_FAIL_INT_LANE
#define lnx_ESM_PATH_SEL_LANE  TRAIN_CONTROL_2.BF.ESM_PATH_SEL_LANE
#define lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE  TRAIN_CONTROL_2.BF.TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE
#define lnx_ESM_EN_LANE  TRAIN_CONTROL_2.BF.ESM_EN_LANE
#define lnx_TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE  TRAIN_CONTROL_2.BF.TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE
#define lnx_REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE  TRAIN_CONTROL_2.BF.REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE
#define lnx_TX_ADAPT_G1_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_G1_EN_LANE
#define lnx_TX_ADAPT_GN1_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_GN1_EN_LANE
#define lnx_TX_ADAPT_G0_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_G0_EN_LANE
#define lnx_RXFFE_R_GAIN_TRAIN_LANE_3_0  TRAIN_CONTROL_2.BF.RXFFE_R_GAIN_TRAIN_LANE_3_0
#define lnx_RX_RXFFE_R_INI_LANE_3_0  TRAIN_CONTROL_2.BF.RX_RXFFE_R_INI_LANE_3_0

// 0x0058	CTLE_TUNE_CONTROL		CTLE Tune Control Registers
typedef union {
	struct {
		uint8_t RX_TRAIN_CTLE_TUNE_RC_SNR_TH_LANE_7_0    : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0        : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RX_TRAIN_CTLE_TUNE_R_STEP_UP_LANE_3_0    : 4;	/*[15:12]     r/w 4'h2*/
		uint8_t RX_TRAIN_CTLE_TUNE_CUR_SNR_TH_LANE_7_0   : 8;	/*[23:16]     r/w 8'h10*/
		uint8_t RX_TRAIN_CTLE_TUNE_SNR_TH_LANE_7_0       : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CTLE_TUNE_CONTROL_t;
__xdata __at( 0x6058 ) volatile CTLE_TUNE_CONTROL_t CTLE_TUNE_CONTROL;
#define lnx_RX_TRAIN_CTLE_TUNE_RC_SNR_TH_LANE_7_0  CTLE_TUNE_CONTROL.BF.RX_TRAIN_CTLE_TUNE_RC_SNR_TH_LANE_7_0
#define lnx_RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0  CTLE_TUNE_CONTROL.BF.RX_TRAIN_CTLE_TUNE_TIMER_LANE_3_0
#define lnx_RX_TRAIN_CTLE_TUNE_R_STEP_UP_LANE_3_0  CTLE_TUNE_CONTROL.BF.RX_TRAIN_CTLE_TUNE_R_STEP_UP_LANE_3_0
#define lnx_RX_TRAIN_CTLE_TUNE_CUR_SNR_TH_LANE_7_0  CTLE_TUNE_CONTROL.BF.RX_TRAIN_CTLE_TUNE_CUR_SNR_TH_LANE_7_0
#define lnx_RX_TRAIN_CTLE_TUNE_SNR_TH_LANE_7_0  CTLE_TUNE_CONTROL.BF.RX_TRAIN_CTLE_TUNE_SNR_TH_LANE_7_0

// 0x005c	TIME_DURATION_READ		
typedef union {
	struct {
		uint8_t TIME_DURATION_INFO_LANE_31_0_b0          : 8;	/* [31:0]       r 32'h0*/
		uint8_t TIME_DURATION_INFO_LANE_31_0_b1          : 8;	/* [31:0]       r 32'h0*/
		uint8_t TIME_DURATION_INFO_LANE_31_0_b2          : 8;	/* [31:0]       r 32'h0*/
		uint8_t TIME_DURATION_INFO_LANE_31_0_b3          : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TIME_DURATION_READ_t;
__xdata __at( 0x605c ) volatile TIME_DURATION_READ_t TIME_DURATION_READ;
#define lnx_TIME_DURATION_INFO_LANE_31_0_b0  TIME_DURATION_READ.BF.TIME_DURATION_INFO_LANE_31_0_b0
#define lnx_TIME_DURATION_INFO_LANE_31_0_b1  TIME_DURATION_READ.BF.TIME_DURATION_INFO_LANE_31_0_b1
#define lnx_TIME_DURATION_INFO_LANE_31_0_b2  TIME_DURATION_READ.BF.TIME_DURATION_INFO_LANE_31_0_b2
#define lnx_TIME_DURATION_INFO_LANE_31_0_b3  TIME_DURATION_READ.BF.TIME_DURATION_INFO_LANE_31_0_b3

// 0x0060	CLI_ARG0		CLI Argument 0
typedef union {
	struct {
		uint8_t CLI_CMD_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CLI_START_LANE                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w 7'h0*/
		uint8_t CLI_ARGS_LANE_15_0_b0                    : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CLI_ARGS_LANE_15_0_b1                    : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CLI_ARG0_t;
__xdata __at( 0x6060 ) volatile CLI_ARG0_t CLI_ARG0;
#define lnx_CLI_CMD_LANE_7_0  CLI_ARG0.BF.CLI_CMD_LANE_7_0
#define lnx_CLI_START_LANE  CLI_ARG0.BF.CLI_START_LANE
#define lnx_CLI_ARGS_LANE_15_0_b0  CLI_ARG0.BF.CLI_ARGS_LANE_15_0_b0
#define lnx_CLI_ARGS_LANE_15_0_b1  CLI_ARG0.BF.CLI_ARGS_LANE_15_0_b1
#define lnx_CLI_ARGS_LANE_15_0  CLI_ARG0.WT.W1

// 0x0064	CLI_ARG1		CLI Argument 1
typedef union {
	struct {
		uint8_t CLI_RETURN_LANE_15_0_b0                  : 8;	/* [15:0]       r 16'h0*/
		uint8_t CLI_RETURN_LANE_15_0_b1                  : 8;	/* [15:0]       r 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CLI_ARG1_t;
__xdata __at( 0x6064 ) volatile CLI_ARG1_t CLI_ARG1;
#define lnx_CLI_RETURN_LANE_15_0_b0  CLI_ARG1.BF.CLI_RETURN_LANE_15_0_b0
#define lnx_CLI_RETURN_LANE_15_0_b1  CLI_ARG1.BF.CLI_RETURN_LANE_15_0_b1
#define lnx_CLI_RETURN_LANE_15_0  CLI_ARG1.WT.W0

// 0x0068	CAL_STATUS_READ		Calibration Status
typedef union {
	struct {
		uint8_t TX_PLLDCC_CAL_DONE_LANE                  : 1;	/*      0       r   0*/
		uint8_t RX_PLLDCC_CAL_DONE_LANE                  : 1;	/*      1       r   0*/
		uint8_t TX_PLL_CAL_DONE_LANE                     : 1;	/*      2       r   0*/
		uint8_t RX_PLL_CAL_DONE_LANE                     : 1;	/*      3       r   0*/
		uint8_t TX_PLL_TEMP_CAL_DONE_LANE                : 1;	/*      4       r   0*/
		uint8_t RX_PLL_TEMP_CAL_DONE_LANE                : 1;	/*      5       r   0*/
		uint8_t TX_PLL_AMP_CAL_DONE_LANE                 : 1;	/*      6       r   0*/
		uint8_t RX_PLL_AMP_CAL_DONE_LANE                 : 1;	/*      7       r   0*/
		uint8_t PROCESS_CAL_DONE_LANE                    : 1;	/*      8       r   0*/
		uint8_t TX_PLLVDDA_CAL_DONE_LANE                 : 1;	/*      9       r   0*/
		uint8_t RX_PLLVDDA_CAL_DONE_LANE                 : 1;	/*     10       r   0*/
		uint8_t TX_PLL_CAL_PASS_LANE                     : 1;	/*     11       r   0*/
		uint8_t RX_PLL_CAL_PASS_LANE                     : 1;	/*     12       r   0*/
		uint8_t TX_PLL_TEMP_CAL_PASS_LANE                : 1;	/*     13       r   0*/
		uint8_t RX_PLL_TEMP_CAL_PASS_LANE                : 1;	/*     14       r   0*/
		uint8_t TX_PLL_AMP_CAL_PASS_LANE                 : 1;	/*     15       r   0*/
		uint8_t RX_PLL_AMP_CAL_PASS_LANE                 : 1;	/*     16       r   0*/
		uint8_t PROCESS_CAL_PASS_LANE                    : 1;	/*     17       r   0*/
		uint8_t TX_PLLDCC_CAL_PASS_LANE                  : 1;	/*     18       r   0*/
		uint8_t RX_PLLDCC_CAL_PASS_LANE                  : 1;	/*     19       r   0*/
		uint8_t TX_PLLVDDA_CAL_PASS_LANE                 : 1;	/*     20       r   0*/
		uint8_t RX_PLLVDDA_CAL_PASS_LANE                 : 1;	/*     21       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w 10'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w 10'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_STATUS_READ_t;
__xdata __at( 0x6068 ) volatile CAL_STATUS_READ_t CAL_STATUS_READ;
#define lnx_TX_PLLDCC_CAL_DONE_LANE  CAL_STATUS_READ.BF.TX_PLLDCC_CAL_DONE_LANE
#define lnx_RX_PLLDCC_CAL_DONE_LANE  CAL_STATUS_READ.BF.RX_PLLDCC_CAL_DONE_LANE
#define lnx_TX_PLL_CAL_DONE_LANE  CAL_STATUS_READ.BF.TX_PLL_CAL_DONE_LANE
#define lnx_RX_PLL_CAL_DONE_LANE  CAL_STATUS_READ.BF.RX_PLL_CAL_DONE_LANE
#define lnx_TX_PLL_TEMP_CAL_DONE_LANE  CAL_STATUS_READ.BF.TX_PLL_TEMP_CAL_DONE_LANE
#define lnx_RX_PLL_TEMP_CAL_DONE_LANE  CAL_STATUS_READ.BF.RX_PLL_TEMP_CAL_DONE_LANE
#define lnx_TX_PLL_AMP_CAL_DONE_LANE  CAL_STATUS_READ.BF.TX_PLL_AMP_CAL_DONE_LANE
#define lnx_RX_PLL_AMP_CAL_DONE_LANE  CAL_STATUS_READ.BF.RX_PLL_AMP_CAL_DONE_LANE
#define lnx_PROCESS_CAL_DONE_LANE  CAL_STATUS_READ.BF.PROCESS_CAL_DONE_LANE
#define lnx_TX_PLLVDDA_CAL_DONE_LANE  CAL_STATUS_READ.BF.TX_PLLVDDA_CAL_DONE_LANE
#define lnx_RX_PLLVDDA_CAL_DONE_LANE  CAL_STATUS_READ.BF.RX_PLLVDDA_CAL_DONE_LANE
#define lnx_TX_PLL_CAL_PASS_LANE  CAL_STATUS_READ.BF.TX_PLL_CAL_PASS_LANE
#define lnx_RX_PLL_CAL_PASS_LANE  CAL_STATUS_READ.BF.RX_PLL_CAL_PASS_LANE
#define lnx_TX_PLL_TEMP_CAL_PASS_LANE  CAL_STATUS_READ.BF.TX_PLL_TEMP_CAL_PASS_LANE
#define lnx_RX_PLL_TEMP_CAL_PASS_LANE  CAL_STATUS_READ.BF.RX_PLL_TEMP_CAL_PASS_LANE
#define lnx_TX_PLL_AMP_CAL_PASS_LANE  CAL_STATUS_READ.BF.TX_PLL_AMP_CAL_PASS_LANE
#define lnx_RX_PLL_AMP_CAL_PASS_LANE  CAL_STATUS_READ.BF.RX_PLL_AMP_CAL_PASS_LANE
#define lnx_PROCESS_CAL_PASS_LANE  CAL_STATUS_READ.BF.PROCESS_CAL_PASS_LANE
#define lnx_TX_PLLDCC_CAL_PASS_LANE  CAL_STATUS_READ.BF.TX_PLLDCC_CAL_PASS_LANE
#define lnx_RX_PLLDCC_CAL_PASS_LANE  CAL_STATUS_READ.BF.RX_PLLDCC_CAL_PASS_LANE
#define lnx_TX_PLLVDDA_CAL_PASS_LANE  CAL_STATUS_READ.BF.TX_PLLVDDA_CAL_PASS_LANE
#define lnx_RX_PLLVDDA_CAL_PASS_LANE  CAL_STATUS_READ.BF.RX_PLLVDDA_CAL_PASS_LANE

// 0x006c	CHEST_LANE		
typedef union {
	struct {
		uint8_t CHEST_VAL_OUT_LANE_7_0                   : 8;	/*  [7:0]     r/w   0*/
		uint8_t CHEST_VAL_OUT_LANE_15_8                  : 8;	/* [15:8]     r/w   0*/
		uint8_t RX_TRAIN_CTLE_TUNE_RL1_SNR_TH_LANE_7_0   : 8;	/*[23:16]     r/w 8'h10*/
		uint8_t RX_TRAIN_CTLE_TUNE_C_STEP_DN_LANE_7_0    : 8;	/*[31:24]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CHEST_LANE_t;
__xdata __at( 0x606c ) volatile CHEST_LANE_t CHEST_LANE;
#define lnx_CHEST_VAL_OUT_LANE_7_0  CHEST_LANE.BF.CHEST_VAL_OUT_LANE_7_0
#define lnx_CHEST_VAL_OUT_LANE_15_8  CHEST_LANE.BF.CHEST_VAL_OUT_LANE_15_8
#define lnx_RX_TRAIN_CTLE_TUNE_RL1_SNR_TH_LANE_7_0  CHEST_LANE.BF.RX_TRAIN_CTLE_TUNE_RL1_SNR_TH_LANE_7_0
#define lnx_RX_TRAIN_CTLE_TUNE_C_STEP_DN_LANE_7_0  CHEST_LANE.BF.RX_TRAIN_CTLE_TUNE_C_STEP_DN_LANE_7_0

// 0x0070	TXTRAIN_IF_REG0		
typedef union {
	struct {
		uint8_t TXTRAIN_CTRL_PAT_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_CN2_LANE_1_0                : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_CN1_LANE_1_0                : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_C0_LANE_1_0                 : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_C1_LANE_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t TXTRAIN_CTRL_PRESET_LANE_3_0             : 4;	/*[13:10]     r/w 4'h0*/
		uint8_t TXTRAIN_FAIL_LANE                        : 1;	/*     14     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t TXTRAIN_STATUS_CN2_LANE_2_0              : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t TXTRAIN_STATUS_CN1_LANE_2_0              : 3;	/*[21:19]     r/w 3'h0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t TXTRAIN_STATUS_C0_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t TXTRAIN_STATUS_C1_LANE_2_0               : 3;	/*[29:27]     r/w 3'h0*/
		uint8_t TXTRAIN_STATUS_VALID_LANE                : 1;	/*     30     r/w   0*/
		uint8_t TXTRAIN_PATTERN_LOCK_LOST_EN_LANE        : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TXTRAIN_IF_REG0_t;
__xdata __at( 0x6070 ) volatile TXTRAIN_IF_REG0_t TXTRAIN_IF_REG0;
#define lnx_TXTRAIN_CTRL_PAT_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_PAT_LANE_1_0
#define lnx_TXTRAIN_CTRL_CN2_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_CN2_LANE_1_0
#define lnx_TXTRAIN_CTRL_CN1_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_CN1_LANE_1_0
#define lnx_TXTRAIN_CTRL_C0_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_C0_LANE_1_0
#define lnx_TXTRAIN_CTRL_C1_LANE_1_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_C1_LANE_1_0
#define lnx_TXTRAIN_CTRL_PRESET_LANE_3_0  TXTRAIN_IF_REG0.BF.TXTRAIN_CTRL_PRESET_LANE_3_0
#define lnx_TXTRAIN_FAIL_LANE  TXTRAIN_IF_REG0.BF.TXTRAIN_FAIL_LANE
#define lnx_TXTRAIN_STATUS_CN2_LANE_2_0  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_CN2_LANE_2_0
#define lnx_TXTRAIN_STATUS_CN1_LANE_2_0  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_CN1_LANE_2_0
#define lnx_TXTRAIN_STATUS_C0_LANE_2_0  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_C0_LANE_2_0
#define lnx_TXTRAIN_STATUS_C1_LANE_2_0  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_C1_LANE_2_0
#define lnx_TXTRAIN_STATUS_VALID_LANE  TXTRAIN_IF_REG0.BF.TXTRAIN_STATUS_VALID_LANE
#define lnx_TXTRAIN_PATTERN_LOCK_LOST_EN_LANE  TXTRAIN_IF_REG0.BF.TXTRAIN_PATTERN_LOCK_LOST_EN_LANE

// 0x0074	SYSTEM_CONFIG_0		
typedef union {
	struct {
		uint8_t REFCLK_FREQ_RD_LANE_15_0_b0              : 8;	/* [15:0]       r   0*/
		uint8_t REFCLK_FREQ_RD_LANE_15_0_b1              : 8;	/* [15:0]       r   0*/
		uint8_t MCU_CTRL_PLL_LANE_1_0                    : 2;	/*[17:16]     r/w   0*/
		uint8_t PLL_SEL_LANE_1_0                         : 2;	/*[19:18]     r/w   0*/
		uint8_t PLL_TSRS_SWITCH_XDAT_LANE                : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t RX_RATE_2_PLL_RATIO_X8_LANE_7_0          : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} SYSTEM_CONFIG_0_t;
__xdata __at( 0x6074 ) volatile SYSTEM_CONFIG_0_t SYSTEM_CONFIG_0;
#define lnx_REFCLK_FREQ_RD_LANE_15_0_b0  SYSTEM_CONFIG_0.BF.REFCLK_FREQ_RD_LANE_15_0_b0
#define lnx_REFCLK_FREQ_RD_LANE_15_0_b1  SYSTEM_CONFIG_0.BF.REFCLK_FREQ_RD_LANE_15_0_b1
#define lnx_MCU_CTRL_PLL_LANE_1_0  SYSTEM_CONFIG_0.BF.MCU_CTRL_PLL_LANE_1_0
#define lnx_PLL_SEL_LANE_1_0  SYSTEM_CONFIG_0.BF.PLL_SEL_LANE_1_0
#define lnx_PLL_TSRS_SWITCH_XDAT_LANE  SYSTEM_CONFIG_0.BF.PLL_TSRS_SWITCH_XDAT_LANE
#define lnx_RX_RATE_2_PLL_RATIO_X8_LANE_7_0  SYSTEM_CONFIG_0.BF.RX_RATE_2_PLL_RATIO_X8_LANE_7_0
#define lnx_REFCLK_FREQ_RD_LANE_15_0  SYSTEM_CONFIG_0.WT.W0

// 0x0078	PLL_TS_CAL_CTRL_LANE		Calibration Control Lane5
typedef union {
	struct {
		uint8_t PLL_TS_SPEED_THRESH_LANE_15_0_b0         : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_TS_SPEED_THRESH_LANE_15_0_b1         : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_TS_VCO_AMP_VTH_LOW_LANE_3_0          : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t PLL_TS_VCO_AMP_VTH_MID_LANE_3_0          : 4;	/*[23:20]     r/w 4'h5*/
		uint8_t PLL_TS_VCO_AMP_VTH_HIGH_LANE_3_0         : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PLL_TS_CAL_CTRL_LANE_t;
__xdata __at( 0x6078 ) volatile PLL_TS_CAL_CTRL_LANE_t PLL_TS_CAL_CTRL_LANE;
#define lnx_PLL_TS_SPEED_THRESH_LANE_15_0_b0  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_SPEED_THRESH_LANE_15_0_b0
#define lnx_PLL_TS_SPEED_THRESH_LANE_15_0_b1  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_SPEED_THRESH_LANE_15_0_b1
#define lnx_PLL_TS_VCO_AMP_VTH_LOW_LANE_3_0  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_VCO_AMP_VTH_LOW_LANE_3_0
#define lnx_PLL_TS_VCO_AMP_VTH_MID_LANE_3_0  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_VCO_AMP_VTH_MID_LANE_3_0
#define lnx_PLL_TS_VCO_AMP_VTH_HIGH_LANE_3_0  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_VCO_AMP_VTH_HIGH_LANE_3_0
#define lnx_PLL_TS_SPEED_THRESH_LANE_15_0  PLL_TS_CAL_CTRL_LANE.WT.W0

// 0x007c	RX_TRAIN_SAT_CHK_CTRL_0		
typedef union {
	struct {
		uint8_t RX_TRAIN_ADC_SAT_CHECK_TH2_LANE_5_0      : 6;	/*  [5:0]     r/w 6'h38*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_EN_LANE : 1;	/*      7     r/w 1'b1*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_TH1_LANE_5_0      : 6;	/* [13:8]     r/w 6'h20*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_LARGE_SIG_TH_LANE_7_0 : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_SMALL_SIG_TH_LANE_7_0 : 8;	/*[31:24]     r/w 8'h40*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TRAIN_SAT_CHK_CTRL_0_t;
__xdata __at( 0x607c ) volatile RX_TRAIN_SAT_CHK_CTRL_0_t RX_TRAIN_SAT_CHK_CTRL_0;
#define lnx_RX_TRAIN_ADC_SAT_CHECK_TH2_LANE_5_0  RX_TRAIN_SAT_CHK_CTRL_0.BF.RX_TRAIN_ADC_SAT_CHECK_TH2_LANE_5_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_EN_LANE  RX_TRAIN_SAT_CHK_CTRL_0.BF.RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_EN_LANE
#define lnx_RX_TRAIN_ADC_SAT_CHECK_TH1_LANE_5_0  RX_TRAIN_SAT_CHK_CTRL_0.BF.RX_TRAIN_ADC_SAT_CHECK_TH1_LANE_5_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIG_TH_LANE_7_0  RX_TRAIN_SAT_CHK_CTRL_0.BF.RX_TRAIN_ADC_SAT_CHECK_LARGE_SIG_TH_LANE_7_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIG_TH_LANE_7_0  RX_TRAIN_SAT_CHK_CTRL_0.BF.RX_TRAIN_ADC_SAT_CHECK_SMALL_SIG_TH_LANE_7_0

// 0x0080	RX_TRAIN_SAT_CHK_CTRL_1		
typedef union {
	struct {
		uint8_t RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_PPM_LANE_15_0_b0 : 8;	/* [15:0]     r/w 16'h8000*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_PPM_LANE_15_0_b1 : 8;	/* [15:0]     r/w 16'h8000*/
		uint8_t RESERVED_16                              : 8;	/*[27:16]     r/w   0*/
		uint8_t RESERVED_24                              : 4;	/*[27:16]     r/w   0*/
		uint8_t TRX_TRAIN_FINE_CLTE_TUNE_R_STEP_LANE_3_0 : 4;	/*[31:28]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_TRAIN_SAT_CHK_CTRL_1_t;
__xdata __at( 0x6080 ) volatile RX_TRAIN_SAT_CHK_CTRL_1_t RX_TRAIN_SAT_CHK_CTRL_1;
#define lnx_RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_PPM_LANE_15_0_b0  RX_TRAIN_SAT_CHK_CTRL_1.BF.RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_PPM_LANE_15_0_b0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_PPM_LANE_15_0_b1  RX_TRAIN_SAT_CHK_CTRL_1.BF.RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_PPM_LANE_15_0_b1
#define lnx_TRX_TRAIN_FINE_CLTE_TUNE_R_STEP_LANE_3_0  RX_TRAIN_SAT_CHK_CTRL_1.BF.TRX_TRAIN_FINE_CLTE_TUNE_R_STEP_LANE_3_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_PHASE_SCAN_PPM_LANE_15_0  RX_TRAIN_SAT_CHK_CTRL_1.WT.W0

// 0x0084	RX_TRAIN_SAT_CHK_CTRL_2		
typedef union {
	struct {
		uint8_t RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_C_LANE_6_0 : 7;	/*  [6:0]     r/w 7'h46*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_COARSE_GAIN_LANE_4_0 : 5;	/* [12:8]     r/w   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RX_TRAIN_CTLE_TUNE_R_STEP_DN_LANE_3_0    : 4;	/*[19:16]     r/w 4'h2*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_R_LANE_3_0 : 4;	/*[23:20]     r/w 4'h3*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_R_LANE_3_0 : 4;	/*[27:24]     r/w 4'h1*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_R_LANE_3_0 : 4;	/*[31:28]     r/w 4'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TRAIN_SAT_CHK_CTRL_2_t;
__xdata __at( 0x6084 ) volatile RX_TRAIN_SAT_CHK_CTRL_2_t RX_TRAIN_SAT_CHK_CTRL_2;
#define lnx_RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_C_LANE_6_0  RX_TRAIN_SAT_CHK_CTRL_2.BF.RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_C_LANE_6_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_COARSE_GAIN_LANE_4_0  RX_TRAIN_SAT_CHK_CTRL_2.BF.RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_COARSE_GAIN_LANE_4_0
#define lnx_RX_TRAIN_CTLE_TUNE_R_STEP_DN_LANE_3_0  RX_TRAIN_SAT_CHK_CTRL_2.BF.RX_TRAIN_CTLE_TUNE_R_STEP_DN_LANE_3_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_R_LANE_3_0  RX_TRAIN_SAT_CHK_CTRL_2.BF.RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_R_LANE_3_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_R_LANE_3_0  RX_TRAIN_SAT_CHK_CTRL_2.BF.RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_R_LANE_3_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_R_LANE_3_0  RX_TRAIN_SAT_CHK_CTRL_2.BF.RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_R_LANE_3_0

// 0x0088	RX_TRAIN_SAT_CHK_CTRL_3		
typedef union {
	struct {
		uint8_t RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_COARSE_GAIN_LANE_4_0 : 5;	/*  [4:0]     r/w 5'h2*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_COARSE_GAIN_LANE_4_0 : 5;	/* [12:8]     r/w 5'h1*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_C_LANE_6_0 : 7;	/*[22:16]     r/w 7'h3c*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_C_LANE_6_0 : 7;	/*[30:24]     r/w 7'h50*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_TRAIN_SAT_CHK_CTRL_3_t;
__xdata __at( 0x6088 ) volatile RX_TRAIN_SAT_CHK_CTRL_3_t RX_TRAIN_SAT_CHK_CTRL_3;
#define lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_COARSE_GAIN_LANE_4_0  RX_TRAIN_SAT_CHK_CTRL_3.BF.RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_COARSE_GAIN_LANE_4_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_COARSE_GAIN_LANE_4_0  RX_TRAIN_SAT_CHK_CTRL_3.BF.RX_TRAIN_ADC_SAT_CHECK_NOMINAL_SIGNAL_COARSE_GAIN_LANE_4_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_C_LANE_6_0  RX_TRAIN_SAT_CHK_CTRL_3.BF.RX_TRAIN_ADC_SAT_CHECK_LARGE_SIGNAL_C_LANE_6_0
#define lnx_RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_C_LANE_6_0  RX_TRAIN_SAT_CHK_CTRL_3.BF.RX_TRAIN_ADC_SAT_CHECK_SMALL_SIGNAL_C_LANE_6_0

// 0x008c	RX_BLIND_TRAIN_CTRL_0		RX Blind Training Control Register 0
typedef union {
	struct {
		uint8_t RX_TRAIN_BLIND_CTLE_R_MAX_LANE_4_0       : 5;	/*  [4:0]     r/w 5'h4*/
		uint8_t RESERVED_5                               : 3;	/*  [9:5]     r/w   0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:5]     r/w   0*/
		uint8_t RX_TRAIN_BLIND_GAIN_COARSE_STEP_LANE_1_0 : 2;	/*[11:10]     r/w 2'b1*/
		uint8_t RX_TRAIN_BLIND_CTLE_R_STEP_LANE_1_0      : 2;	/*[13:12]     r/w 2'b1*/
		uint8_t RX_TRAIN_BLIND_CTLE_C_STEP_LANE_1_0      : 2;	/*[15:14]     r/w 2'b1*/
		uint8_t RX_TRAIN_BLIND_ADC_TH1_LANE_5_0          : 6;	/*[21:16]     r/w 6'h3c*/
		uint8_t RX_TRAIN_BLIND_PHASE_SCAN_EN_LANE        : 1;	/*     22     r/w 1'b1*/
		uint8_t RX_TRAIN_BLIND_ALT_SEARCH_EN_LANE        : 1;	/*     23     r/w   0*/
		uint8_t RX_TRAIN_BLIND_MAX_TRIAL_LANE_7_0        : 8;	/*[31:24]     r/w 8'h1e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_BLIND_TRAIN_CTRL_0_t;
__xdata __at( 0x608c ) volatile RX_BLIND_TRAIN_CTRL_0_t RX_BLIND_TRAIN_CTRL_0;
#define lnx_RX_TRAIN_BLIND_CTLE_R_MAX_LANE_4_0  RX_BLIND_TRAIN_CTRL_0.BF.RX_TRAIN_BLIND_CTLE_R_MAX_LANE_4_0
#define lnx_RX_TRAIN_BLIND_GAIN_COARSE_STEP_LANE_1_0  RX_BLIND_TRAIN_CTRL_0.BF.RX_TRAIN_BLIND_GAIN_COARSE_STEP_LANE_1_0
#define lnx_RX_TRAIN_BLIND_CTLE_R_STEP_LANE_1_0  RX_BLIND_TRAIN_CTRL_0.BF.RX_TRAIN_BLIND_CTLE_R_STEP_LANE_1_0
#define lnx_RX_TRAIN_BLIND_CTLE_C_STEP_LANE_1_0  RX_BLIND_TRAIN_CTRL_0.BF.RX_TRAIN_BLIND_CTLE_C_STEP_LANE_1_0
#define lnx_RX_TRAIN_BLIND_ADC_TH1_LANE_5_0  RX_BLIND_TRAIN_CTRL_0.BF.RX_TRAIN_BLIND_ADC_TH1_LANE_5_0
#define lnx_RX_TRAIN_BLIND_PHASE_SCAN_EN_LANE  RX_BLIND_TRAIN_CTRL_0.BF.RX_TRAIN_BLIND_PHASE_SCAN_EN_LANE
#define lnx_RX_TRAIN_BLIND_ALT_SEARCH_EN_LANE  RX_BLIND_TRAIN_CTRL_0.BF.RX_TRAIN_BLIND_ALT_SEARCH_EN_LANE
#define lnx_RX_TRAIN_BLIND_MAX_TRIAL_LANE_7_0  RX_BLIND_TRAIN_CTRL_0.BF.RX_TRAIN_BLIND_MAX_TRIAL_LANE_7_0

// 0x0090	RX_BLIND_TRAIN_CTRL_1		RX Blind Training Control Register 1
typedef union {
	struct {
		uint8_t RX_TRAIN_BLIND_PHASE_SCAN_PPM_LANE_15_0_b0 : 8;	/* [15:0]     r/w 16'h8000*/
		uint8_t RX_TRAIN_BLIND_PHASE_SCAN_PPM_LANE_15_0_b1 : 8;	/* [15:0]     r/w 16'h8000*/
		uint8_t RX_TRAIN_BLIND_ADC_SAT_TH_LANE_15_0_b0   : 8;	/*[31:16]     r/w 16'h7*/
		uint8_t RX_TRAIN_BLIND_ADC_SAT_TH_LANE_15_0_b1   : 8;	/*[31:16]     r/w 16'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_BLIND_TRAIN_CTRL_1_t;
__xdata __at( 0x6090 ) volatile RX_BLIND_TRAIN_CTRL_1_t RX_BLIND_TRAIN_CTRL_1;
#define lnx_RX_TRAIN_BLIND_PHASE_SCAN_PPM_LANE_15_0_b0  RX_BLIND_TRAIN_CTRL_1.BF.RX_TRAIN_BLIND_PHASE_SCAN_PPM_LANE_15_0_b0
#define lnx_RX_TRAIN_BLIND_PHASE_SCAN_PPM_LANE_15_0_b1  RX_BLIND_TRAIN_CTRL_1.BF.RX_TRAIN_BLIND_PHASE_SCAN_PPM_LANE_15_0_b1
#define lnx_RX_TRAIN_BLIND_ADC_SAT_TH_LANE_15_0_b0  RX_BLIND_TRAIN_CTRL_1.BF.RX_TRAIN_BLIND_ADC_SAT_TH_LANE_15_0_b0
#define lnx_RX_TRAIN_BLIND_ADC_SAT_TH_LANE_15_0_b1  RX_BLIND_TRAIN_CTRL_1.BF.RX_TRAIN_BLIND_ADC_SAT_TH_LANE_15_0_b1
#define lnx_RX_TRAIN_BLIND_PHASE_SCAN_PPM_LANE_15_0  RX_BLIND_TRAIN_CTRL_1.WT.W0
#define lnx_RX_TRAIN_BLIND_ADC_SAT_TH_LANE_15_0  RX_BLIND_TRAIN_CTRL_1.WT.W1

// 0x0094	EOM_HIST_REG0		
typedef union {
	struct {
		uint8_t EOM_HIST_N_BOT_H_CNT_LANE_31_0_b0        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_BOT_H_CNT_LANE_31_0_b1        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_BOT_H_CNT_LANE_31_0_b2        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_BOT_H_CNT_LANE_31_0_b3        : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG0_t;
__xdata __at( 0x6094 ) volatile EOM_HIST_REG0_t EOM_HIST_REG0;
#define lnx_EOM_HIST_N_BOT_H_CNT_LANE_31_0_b0  EOM_HIST_REG0.BF.EOM_HIST_N_BOT_H_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_BOT_H_CNT_LANE_31_0_b1  EOM_HIST_REG0.BF.EOM_HIST_N_BOT_H_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_BOT_H_CNT_LANE_31_0_b2  EOM_HIST_REG0.BF.EOM_HIST_N_BOT_H_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_BOT_H_CNT_LANE_31_0_b3  EOM_HIST_REG0.BF.EOM_HIST_N_BOT_H_CNT_LANE_31_0_b3

// 0x0098	EOM_HIST_REG1		
typedef union {
	struct {
		uint8_t EOM_HIST_N_BOT_L_CNT_LANE_31_0_b0        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_BOT_L_CNT_LANE_31_0_b1        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_BOT_L_CNT_LANE_31_0_b2        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_BOT_L_CNT_LANE_31_0_b3        : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG1_t;
__xdata __at( 0x6098 ) volatile EOM_HIST_REG1_t EOM_HIST_REG1;
#define lnx_EOM_HIST_N_BOT_L_CNT_LANE_31_0_b0  EOM_HIST_REG1.BF.EOM_HIST_N_BOT_L_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_BOT_L_CNT_LANE_31_0_b1  EOM_HIST_REG1.BF.EOM_HIST_N_BOT_L_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_BOT_L_CNT_LANE_31_0_b2  EOM_HIST_REG1.BF.EOM_HIST_N_BOT_L_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_BOT_L_CNT_LANE_31_0_b3  EOM_HIST_REG1.BF.EOM_HIST_N_BOT_L_CNT_LANE_31_0_b3

// 0x009c	EOM_HIST_REG2		
typedef union {
	struct {
		uint8_t EOM_HIST_N_MID_H_CNT_LANE_31_0_b0        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_MID_H_CNT_LANE_31_0_b1        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_MID_H_CNT_LANE_31_0_b2        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_MID_H_CNT_LANE_31_0_b3        : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG2_t;
__xdata __at( 0x609c ) volatile EOM_HIST_REG2_t EOM_HIST_REG2;
#define lnx_EOM_HIST_N_MID_H_CNT_LANE_31_0_b0  EOM_HIST_REG2.BF.EOM_HIST_N_MID_H_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_MID_H_CNT_LANE_31_0_b1  EOM_HIST_REG2.BF.EOM_HIST_N_MID_H_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_MID_H_CNT_LANE_31_0_b2  EOM_HIST_REG2.BF.EOM_HIST_N_MID_H_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_MID_H_CNT_LANE_31_0_b3  EOM_HIST_REG2.BF.EOM_HIST_N_MID_H_CNT_LANE_31_0_b3

// 0x00a0	EOM_HIST_REG3		
typedef union {
	struct {
		uint8_t EOM_HIST_N_MID_L_CNT_LANE_31_0_b0        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_MID_L_CNT_LANE_31_0_b1        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_MID_L_CNT_LANE_31_0_b2        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_MID_L_CNT_LANE_31_0_b3        : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG3_t;
__xdata __at( 0x60a0 ) volatile EOM_HIST_REG3_t EOM_HIST_REG3;
#define lnx_EOM_HIST_N_MID_L_CNT_LANE_31_0_b0  EOM_HIST_REG3.BF.EOM_HIST_N_MID_L_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_MID_L_CNT_LANE_31_0_b1  EOM_HIST_REG3.BF.EOM_HIST_N_MID_L_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_MID_L_CNT_LANE_31_0_b2  EOM_HIST_REG3.BF.EOM_HIST_N_MID_L_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_MID_L_CNT_LANE_31_0_b3  EOM_HIST_REG3.BF.EOM_HIST_N_MID_L_CNT_LANE_31_0_b3

// 0x00a4	EOM_HIST_REG4		
typedef union {
	struct {
		uint8_t EOM_HIST_N_TOP_H_CNT_LANE_31_0_b0        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_TOP_H_CNT_LANE_31_0_b1        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_TOP_H_CNT_LANE_31_0_b2        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_TOP_H_CNT_LANE_31_0_b3        : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG4_t;
__xdata __at( 0x60a4 ) volatile EOM_HIST_REG4_t EOM_HIST_REG4;
#define lnx_EOM_HIST_N_TOP_H_CNT_LANE_31_0_b0  EOM_HIST_REG4.BF.EOM_HIST_N_TOP_H_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_TOP_H_CNT_LANE_31_0_b1  EOM_HIST_REG4.BF.EOM_HIST_N_TOP_H_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_TOP_H_CNT_LANE_31_0_b2  EOM_HIST_REG4.BF.EOM_HIST_N_TOP_H_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_TOP_H_CNT_LANE_31_0_b3  EOM_HIST_REG4.BF.EOM_HIST_N_TOP_H_CNT_LANE_31_0_b3

// 0x00a8	EOM_HIST_REG5		
typedef union {
	struct {
		uint8_t EOM_HIST_N_TOP_L_CNT_LANE_31_0_b0        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_TOP_L_CNT_LANE_31_0_b1        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_TOP_L_CNT_LANE_31_0_b2        : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_TOP_L_CNT_LANE_31_0_b3        : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG5_t;
__xdata __at( 0x60a8 ) volatile EOM_HIST_REG5_t EOM_HIST_REG5;
#define lnx_EOM_HIST_N_TOP_L_CNT_LANE_31_0_b0  EOM_HIST_REG5.BF.EOM_HIST_N_TOP_L_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_TOP_L_CNT_LANE_31_0_b1  EOM_HIST_REG5.BF.EOM_HIST_N_TOP_L_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_TOP_L_CNT_LANE_31_0_b2  EOM_HIST_REG5.BF.EOM_HIST_N_TOP_L_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_TOP_L_CNT_LANE_31_0_b3  EOM_HIST_REG5.BF.EOM_HIST_N_TOP_L_CNT_LANE_31_0_b3

// 0x00ac	EOM_HIST_REG6		
typedef union {
	struct {
		uint8_t EOM_HIST_N_D00_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D00_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D00_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D00_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG6_t;
__xdata __at( 0x60ac ) volatile EOM_HIST_REG6_t EOM_HIST_REG6;
#define lnx_EOM_HIST_N_D00_CNT_LANE_31_0_b0  EOM_HIST_REG6.BF.EOM_HIST_N_D00_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_D00_CNT_LANE_31_0_b1  EOM_HIST_REG6.BF.EOM_HIST_N_D00_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_D00_CNT_LANE_31_0_b2  EOM_HIST_REG6.BF.EOM_HIST_N_D00_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_D00_CNT_LANE_31_0_b3  EOM_HIST_REG6.BF.EOM_HIST_N_D00_CNT_LANE_31_0_b3

// 0x00b0	EOM_HIST_REG7		
typedef union {
	struct {
		uint8_t EOM_HIST_N_D01_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D01_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D01_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D01_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG7_t;
__xdata __at( 0x60b0 ) volatile EOM_HIST_REG7_t EOM_HIST_REG7;
#define lnx_EOM_HIST_N_D01_CNT_LANE_31_0_b0  EOM_HIST_REG7.BF.EOM_HIST_N_D01_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_D01_CNT_LANE_31_0_b1  EOM_HIST_REG7.BF.EOM_HIST_N_D01_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_D01_CNT_LANE_31_0_b2  EOM_HIST_REG7.BF.EOM_HIST_N_D01_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_D01_CNT_LANE_31_0_b3  EOM_HIST_REG7.BF.EOM_HIST_N_D01_CNT_LANE_31_0_b3

// 0x00b4	EOM_HIST_REG8		
typedef union {
	struct {
		uint8_t EOM_HIST_N_D10_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D10_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D10_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D10_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG8_t;
__xdata __at( 0x60b4 ) volatile EOM_HIST_REG8_t EOM_HIST_REG8;
#define lnx_EOM_HIST_N_D10_CNT_LANE_31_0_b0  EOM_HIST_REG8.BF.EOM_HIST_N_D10_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_D10_CNT_LANE_31_0_b1  EOM_HIST_REG8.BF.EOM_HIST_N_D10_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_D10_CNT_LANE_31_0_b2  EOM_HIST_REG8.BF.EOM_HIST_N_D10_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_D10_CNT_LANE_31_0_b3  EOM_HIST_REG8.BF.EOM_HIST_N_D10_CNT_LANE_31_0_b3

// 0x00b8	EOM_HIST_REG9		
typedef union {
	struct {
		uint8_t EOM_HIST_N_D11_CNT_LANE_31_0_b0          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D11_CNT_LANE_31_0_b1          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D11_CNT_LANE_31_0_b2          : 8;	/* [31:0]       r 32'h0*/
		uint8_t EOM_HIST_N_D11_CNT_LANE_31_0_b3          : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_HIST_REG9_t;
__xdata __at( 0x60b8 ) volatile EOM_HIST_REG9_t EOM_HIST_REG9;
#define lnx_EOM_HIST_N_D11_CNT_LANE_31_0_b0  EOM_HIST_REG9.BF.EOM_HIST_N_D11_CNT_LANE_31_0_b0
#define lnx_EOM_HIST_N_D11_CNT_LANE_31_0_b1  EOM_HIST_REG9.BF.EOM_HIST_N_D11_CNT_LANE_31_0_b1
#define lnx_EOM_HIST_N_D11_CNT_LANE_31_0_b2  EOM_HIST_REG9.BF.EOM_HIST_N_D11_CNT_LANE_31_0_b2
#define lnx_EOM_HIST_N_D11_CNT_LANE_31_0_b3  EOM_HIST_REG9.BF.EOM_HIST_N_D11_CNT_LANE_31_0_b3

// 0x00bc	TX_SHAPED_BASED_TRAIN_CTRL_0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [11:0]     r/w   0*/
		uint8_t RESERVED_8                               : 4;	/* [11:0]     r/w   0*/
		uint8_t TX_TRAIN_GN3_ADAPT_EN_LANE               : 1;	/*     12     r/w 1'b0*/
		uint8_t TX_TRAIN_GN2_ADAPT_EN_LANE               : 1;	/*     13     r/w 1'b0*/
		uint8_t TX_TRAIN_GN1_ADAPT_EN_LANE               : 1;	/*     14     r/w 1'b1*/
		uint8_t TX_TRAIN_G1_ADAPT_EN_LANE                : 1;	/*     15     r/w 1'b0*/
		uint8_t TX_TRAIN_MAX_TRIAL_LANE_7_0              : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t TX_TRAIN_MIN_TRIAL_LANE_7_0              : 8;	/*[31:24]     r/w 8'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SHAPED_BASED_TRAIN_CTRL_0_t;
__xdata __at( 0x60bc ) volatile TX_SHAPED_BASED_TRAIN_CTRL_0_t TX_SHAPED_BASED_TRAIN_CTRL_0;
#define lnx_TX_TRAIN_GN3_ADAPT_EN_LANE  TX_SHAPED_BASED_TRAIN_CTRL_0.BF.TX_TRAIN_GN3_ADAPT_EN_LANE
#define lnx_TX_TRAIN_GN2_ADAPT_EN_LANE  TX_SHAPED_BASED_TRAIN_CTRL_0.BF.TX_TRAIN_GN2_ADAPT_EN_LANE
#define lnx_TX_TRAIN_GN1_ADAPT_EN_LANE  TX_SHAPED_BASED_TRAIN_CTRL_0.BF.TX_TRAIN_GN1_ADAPT_EN_LANE
#define lnx_TX_TRAIN_G1_ADAPT_EN_LANE  TX_SHAPED_BASED_TRAIN_CTRL_0.BF.TX_TRAIN_G1_ADAPT_EN_LANE
#define lnx_TX_TRAIN_MAX_TRIAL_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_0.BF.TX_TRAIN_MAX_TRIAL_LANE_7_0
#define lnx_TX_TRAIN_MIN_TRIAL_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_0.BF.TX_TRAIN_MIN_TRIAL_LANE_7_0

// 0x00c0	TX_SHAPED_BASED_TRAIN_CTRL_1		
typedef union {
	struct {
		uint8_t TX_TRAIN_GN1_LOW_TH_LANE_7_0             : 8;	/*  [7:0]     r/w 8'hf1*/
		uint8_t TX_TRAIN_GN1_HIGH_TH_LANE_7_0            : 8;	/* [15:8]     r/w 8'hf*/
		uint8_t TX_TRAIN_G1_LOW_TH_LANE_7_0              : 8;	/*[23:16]     r/w 8'hf6*/
		uint8_t TX_TRAIN_G1_HIGH_TH_LANE_7_0             : 8;	/*[31:24]     r/w 8'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SHAPED_BASED_TRAIN_CTRL_1_t;
__xdata __at( 0x60c0 ) volatile TX_SHAPED_BASED_TRAIN_CTRL_1_t TX_SHAPED_BASED_TRAIN_CTRL_1;
#define lnx_TX_TRAIN_GN1_LOW_TH_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_1.BF.TX_TRAIN_GN1_LOW_TH_LANE_7_0
#define lnx_TX_TRAIN_GN1_HIGH_TH_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_1.BF.TX_TRAIN_GN1_HIGH_TH_LANE_7_0
#define lnx_TX_TRAIN_G1_LOW_TH_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_1.BF.TX_TRAIN_G1_LOW_TH_LANE_7_0
#define lnx_TX_TRAIN_G1_HIGH_TH_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_1.BF.TX_TRAIN_G1_HIGH_TH_LANE_7_0

// 0x00c4	TX_SHAPED_BASED_TRAIN_CTRL_2		
typedef union {
	struct {
		uint8_t TX_TRAIN_GN3_LOW_TH_LANE_7_0             : 8;	/*  [7:0]     r/w 8'hf9*/
		uint8_t TX_TRAIN_GN3_HIGH_TH_LANE_7_0            : 8;	/* [15:8]     r/w 8'h7*/
		uint8_t TX_TRAIN_GN2_LOW_TH_LANE_7_0             : 8;	/*[23:16]     r/w 8'hf9*/
		uint8_t TX_TRAIN_GN2_HIGH_TH_LANE_7_0            : 8;	/*[31:24]     r/w 8'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_SHAPED_BASED_TRAIN_CTRL_2_t;
__xdata __at( 0x60c4 ) volatile TX_SHAPED_BASED_TRAIN_CTRL_2_t TX_SHAPED_BASED_TRAIN_CTRL_2;
#define lnx_TX_TRAIN_GN3_LOW_TH_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_2.BF.TX_TRAIN_GN3_LOW_TH_LANE_7_0
#define lnx_TX_TRAIN_GN3_HIGH_TH_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_2.BF.TX_TRAIN_GN3_HIGH_TH_LANE_7_0
#define lnx_TX_TRAIN_GN2_LOW_TH_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_2.BF.TX_TRAIN_GN2_LOW_TH_LANE_7_0
#define lnx_TX_TRAIN_GN2_HIGH_TH_LANE_7_0  TX_SHAPED_BASED_TRAIN_CTRL_2.BF.TX_TRAIN_GN2_HIGH_TH_LANE_7_0

// 0x00c8	SIGMNT_AVE		
typedef union {
	struct {
		uint8_t SIGMNT_SHARED_VAL_AVE_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SIGMNT_SHARED_VAL_AVE_LANE_15_8          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_VAL_AVE_LANE_7_0        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_VAL_AVE_LANE_15_8       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SIGMNT_AVE_t;
__xdata __at( 0x60c8 ) volatile SIGMNT_AVE_t SIGMNT_AVE;
#define lnx_SIGMNT_SHARED_VAL_AVE_LANE_7_0  SIGMNT_AVE.BF.SIGMNT_SHARED_VAL_AVE_LANE_7_0
#define lnx_SIGMNT_SHARED_VAL_AVE_LANE_15_8  SIGMNT_AVE.BF.SIGMNT_SHARED_VAL_AVE_LANE_15_8
#define lnx_SIGMNT_ADC_TO_DP_VAL_AVE_LANE_7_0  SIGMNT_AVE.BF.SIGMNT_ADC_TO_DP_VAL_AVE_LANE_7_0
#define lnx_SIGMNT_ADC_TO_DP_VAL_AVE_LANE_15_8  SIGMNT_AVE.BF.SIGMNT_ADC_TO_DP_VAL_AVE_LANE_15_8

// 0x00cc	ADC_TO_DP_SIGMNT_CDF		
typedef union {
	struct {
		uint8_t SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_15_8      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_7_0       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_15_8      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ADC_TO_DP_SIGMNT_CDF_t;
__xdata __at( 0x60cc ) volatile ADC_TO_DP_SIGMNT_CDF_t ADC_TO_DP_SIGMNT_CDF;
#define lnx_SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_7_0  ADC_TO_DP_SIGMNT_CDF.BF.SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_7_0
#define lnx_SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_15_8  ADC_TO_DP_SIGMNT_CDF.BF.SIGMNT_ADC_TO_DP_VAL_CDF2_LANE_15_8
#define lnx_SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_7_0  ADC_TO_DP_SIGMNT_CDF.BF.SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_7_0
#define lnx_SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_15_8  ADC_TO_DP_SIGMNT_CDF.BF.SIGMNT_ADC_TO_DP_VAL_CDF1_LANE_15_8

// 0x00d0	SHARED_SIGMNT_CDF		
typedef union {
	struct {
		uint8_t SIGMNT_SHARED_VAL_CDF2_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SIGMNT_SHARED_VAL_CDF2_LANE_15_8         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SIGMNT_SHARED_VAL_CDF1_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SIGMNT_SHARED_VAL_CDF1_LANE_15_8         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SHARED_SIGMNT_CDF_t;
__xdata __at( 0x60d0 ) volatile SHARED_SIGMNT_CDF_t SHARED_SIGMNT_CDF;
#define lnx_SIGMNT_SHARED_VAL_CDF2_LANE_7_0  SHARED_SIGMNT_CDF.BF.SIGMNT_SHARED_VAL_CDF2_LANE_7_0
#define lnx_SIGMNT_SHARED_VAL_CDF2_LANE_15_8  SHARED_SIGMNT_CDF.BF.SIGMNT_SHARED_VAL_CDF2_LANE_15_8
#define lnx_SIGMNT_SHARED_VAL_CDF1_LANE_7_0  SHARED_SIGMNT_CDF.BF.SIGMNT_SHARED_VAL_CDF1_LANE_7_0
#define lnx_SIGMNT_SHARED_VAL_CDF1_LANE_15_8  SHARED_SIGMNT_CDF.BF.SIGMNT_SHARED_VAL_CDF1_LANE_15_8

// 0x00d4	TRX_TRAINING_OPT_CTRL_0		
typedef union {
	struct {
		uint8_t TX_TRAIN_OPT_GRADIENT_TIMER_LANE_3_0     : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RX_TRAIN_CTLE_TUNE_GC_STEP_UP_LANE_3_0   : 4;	/*  [7:4]     r/w 4'h1*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w   0*/
		uint8_t TRX_TRAIN_CTLE_C_INC_LANE_2_0            : 3;	/* [11:9]     r/w 3'h2*/
		uint8_t TRX_TRAIN_CTLE_R_INC_LANE_2_0            : 3;	/*[14:12]     r/w 3'h1*/
		uint8_t TRX_TRAIN_CTLE_GRID_INC_EN_LANE          : 1;	/*     15     r/w 1'b0*/
		uint8_t TRX_TRAIN_ITER_MIN_LANE_7_0              : 8;	/*[23:16]     r/w 8'h2*/
		uint8_t TRX_TRAIN_ITER_MAX_LANE_7_0              : 8;	/*[31:24]     r/w 8'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAINING_OPT_CTRL_0_t;
__xdata __at( 0x60d4 ) volatile TRX_TRAINING_OPT_CTRL_0_t TRX_TRAINING_OPT_CTRL_0;
#define lnx_TX_TRAIN_OPT_GRADIENT_TIMER_LANE_3_0  TRX_TRAINING_OPT_CTRL_0.BF.TX_TRAIN_OPT_GRADIENT_TIMER_LANE_3_0
#define lnx_RX_TRAIN_CTLE_TUNE_GC_STEP_UP_LANE_3_0  TRX_TRAINING_OPT_CTRL_0.BF.RX_TRAIN_CTLE_TUNE_GC_STEP_UP_LANE_3_0
#define lnx_TRX_TRAIN_CTLE_C_INC_LANE_2_0  TRX_TRAINING_OPT_CTRL_0.BF.TRX_TRAIN_CTLE_C_INC_LANE_2_0
#define lnx_TRX_TRAIN_CTLE_R_INC_LANE_2_0  TRX_TRAINING_OPT_CTRL_0.BF.TRX_TRAIN_CTLE_R_INC_LANE_2_0
#define lnx_TRX_TRAIN_CTLE_GRID_INC_EN_LANE  TRX_TRAINING_OPT_CTRL_0.BF.TRX_TRAIN_CTLE_GRID_INC_EN_LANE
#define lnx_TRX_TRAIN_ITER_MIN_LANE_7_0  TRX_TRAINING_OPT_CTRL_0.BF.TRX_TRAIN_ITER_MIN_LANE_7_0
#define lnx_TRX_TRAIN_ITER_MAX_LANE_7_0  TRX_TRAINING_OPT_CTRL_0.BF.TRX_TRAIN_ITER_MAX_LANE_7_0

// 0x00d8	TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0		
typedef union {
	struct {
		uint8_t TX_TRAIN_OPT_EXT_ITER_MAX_LANE_4_0       : 5;	/*  [4:0]     r/w 5'h1*/
		uint8_t TX_TRAIN_PHASE_OPT_STEP_LANE_2_0         : 3;	/*  [7:5]     r/w 3'h2*/
		uint8_t TX_TRAIN_OPT_INT_ITER_MAX_LANE_4_0       : 5;	/* [12:8]     r/w 5'h2*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_TRAIN_OPT_SNR_TH_LANE_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TX_TRAIN_OPT_ADC_TH1_LANE_5_0            : 6;	/*[29:24]     r/w 6'h38*/
		uint8_t TRX_TRAIN_FINE_CTLE_C_EN_LANE            : 1;	/*     30     r/w   1*/
		uint8_t TRX_TRAIN_FINE_CTLE_R_EN_LANE            : 1;	/*     31     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0_t;
__xdata __at( 0x60d8 ) volatile TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0_t TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0;
#define lnx_TX_TRAIN_OPT_EXT_ITER_MAX_LANE_4_0  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BF.TX_TRAIN_OPT_EXT_ITER_MAX_LANE_4_0
#define lnx_TX_TRAIN_PHASE_OPT_STEP_LANE_2_0  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BF.TX_TRAIN_PHASE_OPT_STEP_LANE_2_0
#define lnx_TX_TRAIN_OPT_INT_ITER_MAX_LANE_4_0  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BF.TX_TRAIN_OPT_INT_ITER_MAX_LANE_4_0
#define lnx_TX_TRAIN_OPT_SNR_TH_LANE_7_0  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BF.TX_TRAIN_OPT_SNR_TH_LANE_7_0
#define lnx_TX_TRAIN_OPT_ADC_TH1_LANE_5_0  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BF.TX_TRAIN_OPT_ADC_TH1_LANE_5_0
#define lnx_TRX_TRAIN_FINE_CTLE_C_EN_LANE  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BF.TRX_TRAIN_FINE_CTLE_C_EN_LANE
#define lnx_TRX_TRAIN_FINE_CTLE_R_EN_LANE  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_0.BF.TRX_TRAIN_FINE_CTLE_R_EN_LANE

// 0x00dc	TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1		
typedef union {
	struct {
		uint8_t TX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b0     : 8;	/* [15:0]     r/w 16'h7*/
		uint8_t TX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b1     : 8;	/* [15:0]     r/w 16'h7*/
		uint8_t TX_TRAIN_OPT_GN3_ADAPT_EN_LANE           : 1;	/*     16     r/w   0*/
		uint8_t TX_TRAIN_OPT_GN2_ADAPT_EN_LANE           : 1;	/*     17     r/w 1'b1*/
		uint8_t TX_TRAIN_OPT_GN1_ADAPT_EN_LANE           : 1;	/*     18     r/w 1'b1*/
		uint8_t TX_TRAIN_OPT_G0_ADAPT_EN_LANE            : 1;	/*     19     r/w   0*/
		uint8_t TX_TRAIN_OPT_G1_ADAPT_EN_LANE            : 1;	/*     20     r/w 1'b1*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t TRX_TRAIN_FINE_ITER_NUM_LANE_7_0         : 8;	/*[31:24]     r/w 8'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1_t;
__xdata __at( 0x60dc ) volatile TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1_t TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1;
#define lnx_TX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b0  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BF.TX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b0
#define lnx_TX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b1  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BF.TX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b1
#define lnx_TX_TRAIN_OPT_GN3_ADAPT_EN_LANE  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BF.TX_TRAIN_OPT_GN3_ADAPT_EN_LANE
#define lnx_TX_TRAIN_OPT_GN2_ADAPT_EN_LANE  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BF.TX_TRAIN_OPT_GN2_ADAPT_EN_LANE
#define lnx_TX_TRAIN_OPT_GN1_ADAPT_EN_LANE  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BF.TX_TRAIN_OPT_GN1_ADAPT_EN_LANE
#define lnx_TX_TRAIN_OPT_G0_ADAPT_EN_LANE  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BF.TX_TRAIN_OPT_G0_ADAPT_EN_LANE
#define lnx_TX_TRAIN_OPT_G1_ADAPT_EN_LANE  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BF.TX_TRAIN_OPT_G1_ADAPT_EN_LANE
#define lnx_TRX_TRAIN_FINE_ITER_NUM_LANE_7_0  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.BF.TRX_TRAIN_FINE_ITER_NUM_LANE_7_0
#define lnx_TX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0  TX_FFE_GRADIENT_BASED_ADAPTATION_CTRL_1.WT.W0

// 0x00e0	TX_FFE_PRESET_SELECTION_CTRL		
typedef union {
	struct {
		uint8_t TX_TRAIN_PRESET_CTLE_COMP_R_STEP_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t TX_TRAIN_PRESET_CTLE_COMP_ITER_MAX_LANE_3_0 : 4;	/*  [5:2]     r/w 4'h3*/
		uint8_t TX_TRAIN_PRESET_CTLE_COMP_EN_LANE        : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TRX_TRAIN_DTL_HL_RATIO_TH_LANE_7_0       : 8;	/* [15:8]     r/w 8'h80*/
		uint8_t TRX_TRAIN_FINE_CTLE_TUNE_RC_SNR_TH_LANE_7_0 : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t TRX_TRAIN_FINE_CTLE_TUNE_C_STEP_LANE_7_0 : 8;	/*[31:24]     r/w 8'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_FFE_PRESET_SELECTION_CTRL_t;
__xdata __at( 0x60e0 ) volatile TX_FFE_PRESET_SELECTION_CTRL_t TX_FFE_PRESET_SELECTION_CTRL;
#define lnx_TX_TRAIN_PRESET_CTLE_COMP_R_STEP_LANE_1_0  TX_FFE_PRESET_SELECTION_CTRL.BF.TX_TRAIN_PRESET_CTLE_COMP_R_STEP_LANE_1_0
#define lnx_TX_TRAIN_PRESET_CTLE_COMP_ITER_MAX_LANE_3_0  TX_FFE_PRESET_SELECTION_CTRL.BF.TX_TRAIN_PRESET_CTLE_COMP_ITER_MAX_LANE_3_0
#define lnx_TX_TRAIN_PRESET_CTLE_COMP_EN_LANE  TX_FFE_PRESET_SELECTION_CTRL.BF.TX_TRAIN_PRESET_CTLE_COMP_EN_LANE
#define lnx_TRX_TRAIN_DTL_HL_RATIO_TH_LANE_7_0  TX_FFE_PRESET_SELECTION_CTRL.BF.TRX_TRAIN_DTL_HL_RATIO_TH_LANE_7_0
#define lnx_TRX_TRAIN_FINE_CTLE_TUNE_RC_SNR_TH_LANE_7_0  TX_FFE_PRESET_SELECTION_CTRL.BF.TRX_TRAIN_FINE_CTLE_TUNE_RC_SNR_TH_LANE_7_0
#define lnx_TRX_TRAIN_FINE_CTLE_TUNE_C_STEP_LANE_7_0  TX_FFE_PRESET_SELECTION_CTRL.BF.TRX_TRAIN_FINE_CTLE_TUNE_C_STEP_LANE_7_0

// 0x00e4	CTLE_GRID_SEARCH_CTRL_0		
typedef union {
	struct {
		uint8_t RX_TRAIN_OPT_CTLE_WALK_TIMER_LANE_3_0    : 4;	/*  [3:0]     r/w 4'h4*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t RX_TRAIN_OPT_GC_STEP_LANE_4_0            : 5;	/* [12:8]     r/w 5'h1*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RX_TRAIN_OPT_C_STEP_LANE_4_0             : 5;	/*[20:16]     r/w 5'h2*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t RX_TRAIN_OPT_R_STEP_LANE_4_0             : 5;	/*[28:24]     r/w 5'h1*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CTLE_GRID_SEARCH_CTRL_0_t;
__xdata __at( 0x60e4 ) volatile CTLE_GRID_SEARCH_CTRL_0_t CTLE_GRID_SEARCH_CTRL_0;
#define lnx_RX_TRAIN_OPT_CTLE_WALK_TIMER_LANE_3_0  CTLE_GRID_SEARCH_CTRL_0.BF.RX_TRAIN_OPT_CTLE_WALK_TIMER_LANE_3_0
#define lnx_RX_TRAIN_OPT_GC_STEP_LANE_4_0  CTLE_GRID_SEARCH_CTRL_0.BF.RX_TRAIN_OPT_GC_STEP_LANE_4_0
#define lnx_RX_TRAIN_OPT_C_STEP_LANE_4_0  CTLE_GRID_SEARCH_CTRL_0.BF.RX_TRAIN_OPT_C_STEP_LANE_4_0
#define lnx_RX_TRAIN_OPT_R_STEP_LANE_4_0  CTLE_GRID_SEARCH_CTRL_0.BF.RX_TRAIN_OPT_R_STEP_LANE_4_0

// 0x00e8	CTLE_GRID_SEARCH_CTRL_1		
typedef union {
	struct {
		uint8_t RX_TRAIN_OPT_SNR_NAVE_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h10*/
		uint8_t RX_TRAIN_OPT_GC_ITER_MAX_LANE_4_0        : 5;	/* [12:8]     r/w 5'h1*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RX_TRAIN_OPT_C_ITER_MAX_LANE_4_0         : 5;	/*[20:16]     r/w 5'h6*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t RX_TRAIN_OPT_R_ITER_MAX_LANE_4_0         : 5;	/*[28:24]     r/w 5'h2*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CTLE_GRID_SEARCH_CTRL_1_t;
__xdata __at( 0x60e8 ) volatile CTLE_GRID_SEARCH_CTRL_1_t CTLE_GRID_SEARCH_CTRL_1;
#define lnx_RX_TRAIN_OPT_SNR_NAVE_LANE_7_0  CTLE_GRID_SEARCH_CTRL_1.BF.RX_TRAIN_OPT_SNR_NAVE_LANE_7_0
#define lnx_RX_TRAIN_OPT_GC_ITER_MAX_LANE_4_0  CTLE_GRID_SEARCH_CTRL_1.BF.RX_TRAIN_OPT_GC_ITER_MAX_LANE_4_0
#define lnx_RX_TRAIN_OPT_C_ITER_MAX_LANE_4_0  CTLE_GRID_SEARCH_CTRL_1.BF.RX_TRAIN_OPT_C_ITER_MAX_LANE_4_0
#define lnx_RX_TRAIN_OPT_R_ITER_MAX_LANE_4_0  CTLE_GRID_SEARCH_CTRL_1.BF.RX_TRAIN_OPT_R_ITER_MAX_LANE_4_0

// 0x00ec	CTLE_GRID_SEARCH_CTRL_2		
typedef union {
	struct {
		uint8_t RX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b0     : 8;	/* [15:0]     r/w 16'h7*/
		uint8_t RX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b1     : 8;	/* [15:0]     r/w 16'h7*/
		uint8_t RX_TRAIN_OPT_SNR_TH_LANE_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RX_TRAIN_OPT_ADC_TH1_LANE_5_0            : 6;	/*[29:24]     r/w 6'h3c*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CTLE_GRID_SEARCH_CTRL_2_t;
__xdata __at( 0x60ec ) volatile CTLE_GRID_SEARCH_CTRL_2_t CTLE_GRID_SEARCH_CTRL_2;
#define lnx_RX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b0  CTLE_GRID_SEARCH_CTRL_2.BF.RX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b0
#define lnx_RX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b1  CTLE_GRID_SEARCH_CTRL_2.BF.RX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0_b1
#define lnx_RX_TRAIN_OPT_SNR_TH_LANE_7_0  CTLE_GRID_SEARCH_CTRL_2.BF.RX_TRAIN_OPT_SNR_TH_LANE_7_0
#define lnx_RX_TRAIN_OPT_ADC_TH1_LANE_5_0  CTLE_GRID_SEARCH_CTRL_2.BF.RX_TRAIN_OPT_ADC_TH1_LANE_5_0
#define lnx_RX_TRAIN_OPT_ADC_SAT_TH_LANE_15_0  CTLE_GRID_SEARCH_CTRL_2.WT.W0

// 0x00f0	TRAIN_STATUS_LANE		Training Status Lane
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [25:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [25:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [25:0]     r/w   0*/
		uint8_t RESERVED_24                              : 2;	/* [25:0]     r/w   0*/
		uint8_t RX_TRAIN_ABORT_LANE                      : 1;	/*     26     r/w   0*/
		uint8_t RX_TRAIN_PASS_LANE                       : 1;	/*     27     r/w   0*/
		uint8_t RX_TRAIN_DONE_LANE                       : 1;	/*     28     r/w   0*/
		uint8_t TX_TRAIN_ABORT_LANE                      : 1;	/*     29     r/w   0*/
		uint8_t TX_TRAIN_PASS_LANE                       : 1;	/*     30     r/w   0*/
		uint8_t TX_TRAIN_DONE_LANE                       : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_STATUS_LANE_t;
__xdata __at( 0x60f0 ) volatile TRAIN_STATUS_LANE_t TRAIN_STATUS_LANE;
#define lnx_RX_TRAIN_ABORT_LANE  TRAIN_STATUS_LANE.BF.RX_TRAIN_ABORT_LANE
#define lnx_RX_TRAIN_PASS_LANE  TRAIN_STATUS_LANE.BF.RX_TRAIN_PASS_LANE
#define lnx_RX_TRAIN_DONE_LANE  TRAIN_STATUS_LANE.BF.RX_TRAIN_DONE_LANE
#define lnx_TX_TRAIN_ABORT_LANE  TRAIN_STATUS_LANE.BF.TX_TRAIN_ABORT_LANE
#define lnx_TX_TRAIN_PASS_LANE  TRAIN_STATUS_LANE.BF.TX_TRAIN_PASS_LANE
#define lnx_TX_TRAIN_DONE_LANE  TRAIN_STATUS_LANE.BF.TX_TRAIN_DONE_LANE

// 0x00f4	EOM_IF		EOM Interface Lane
typedef union {
	struct {
		uint8_t ESM_VOLTAGE_LANE_7_0                     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t EOM_READY_LANE                           : 1;	/*      8     r/w 1'b0*/
		uint8_t EOM_CALL_CONV_LANE                       : 1;	/*      9     r/w 1'b0*/
		uint8_t EOM_CALL_LANE                            : 1;	/*     10     r/w 1'b0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TRX_TRAIN_PASS_CHECK_RX_SNR_LANE_7_0     : 8;	/*[23:16]     r/w 8'h68*/
		uint8_t TRX_TRAIN_PASS_CHECK_TRX_SNR_LANE_7_0    : 8;	/*[31:24]     r/w 8'h50*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_IF_t;
__xdata __at( 0x60f4 ) volatile EOM_IF_t EOM_IF;
#define lnx_ESM_VOLTAGE_LANE_7_0  EOM_IF.BF.ESM_VOLTAGE_LANE_7_0
#define lnx_EOM_READY_LANE  EOM_IF.BF.EOM_READY_LANE
#define lnx_EOM_CALL_CONV_LANE  EOM_IF.BF.EOM_CALL_CONV_LANE
#define lnx_EOM_CALL_LANE  EOM_IF.BF.EOM_CALL_LANE
#define lnx_TRX_TRAIN_PASS_CHECK_RX_SNR_LANE_7_0  EOM_IF.BF.TRX_TRAIN_PASS_CHECK_RX_SNR_LANE_7_0
#define lnx_TRX_TRAIN_PASS_CHECK_TRX_SNR_LANE_7_0  EOM_IF.BF.TRX_TRAIN_PASS_CHECK_TRX_SNR_LANE_7_0

// 0x00f8	TS_PLL_VCO_AMP		
typedef union {
	struct {
		uint8_t TS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h06*/
		uint8_t TS_TEMPC_MUX_SEL_2C_LANE_7_0             : 8;	/* [15:8]     r/w 8'h05*/
		uint8_t TS_TEMPC_DAC_SEL_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TS_VCOAMP_VTH_AMP_LANE_7_0               : 8;	/*[31:24]     r/w 8'h05*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TS_PLL_VCO_AMP_t;
__xdata __at( 0x60f8 ) volatile TS_PLL_VCO_AMP_t TS_PLL_VCO_AMP;
#define lnx_TS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0  TS_PLL_VCO_AMP.BF.TS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0
#define lnx_TS_TEMPC_MUX_SEL_2C_LANE_7_0  TS_PLL_VCO_AMP.BF.TS_TEMPC_MUX_SEL_2C_LANE_7_0
#define lnx_TS_TEMPC_DAC_SEL_LANE_7_0  TS_PLL_VCO_AMP.BF.TS_TEMPC_DAC_SEL_LANE_7_0
#define lnx_TS_VCOAMP_VTH_AMP_LANE_7_0  TS_PLL_VCO_AMP.BF.TS_VCOAMP_VTH_AMP_LANE_7_0

// 0x00fc	RS_PLL_VCO_AMP		
typedef union {
	struct {
		uint8_t RS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h06*/
		uint8_t RS_TEMPC_MUX_SEL_2C_LANE_7_0             : 8;	/* [15:8]     r/w 8'h05*/
		uint8_t RS_TEMPC_DAC_SEL_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RS_VCOAMP_VTH_AMP_LANE_7_0               : 8;	/*[31:24]     r/w 8'h05*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RS_PLL_VCO_AMP_t;
__xdata __at( 0x60fc ) volatile RS_PLL_VCO_AMP_t RS_PLL_VCO_AMP;
#define lnx_RS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0  RS_PLL_VCO_AMP.BF.RS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0
#define lnx_RS_TEMPC_MUX_SEL_2C_LANE_7_0  RS_PLL_VCO_AMP.BF.RS_TEMPC_MUX_SEL_2C_LANE_7_0
#define lnx_RS_TEMPC_DAC_SEL_LANE_7_0  RS_PLL_VCO_AMP.BF.RS_TEMPC_DAC_SEL_LANE_7_0
#define lnx_RS_VCOAMP_VTH_AMP_LANE_7_0  RS_PLL_VCO_AMP.BF.RS_VCOAMP_VTH_AMP_LANE_7_0

// 0x0100	RX_TRAIN_SAT_CHK_CTRL_4		
typedef union {
	struct {
		uint8_t RX_TRAIN_ADC_IN_TH2_LANE_15_0_b0         : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RX_TRAIN_ADC_IN_TH2_LANE_15_0_b1         : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RX_TRAIN_ADC_IN_TH1_LANE_15_0_b0         : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t RX_TRAIN_ADC_IN_TH1_LANE_15_0_b1         : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_TRAIN_SAT_CHK_CTRL_4_t;
__xdata __at( 0x6100 ) volatile RX_TRAIN_SAT_CHK_CTRL_4_t RX_TRAIN_SAT_CHK_CTRL_4;
#define lnx_RX_TRAIN_ADC_IN_TH2_LANE_15_0_b0  RX_TRAIN_SAT_CHK_CTRL_4.BF.RX_TRAIN_ADC_IN_TH2_LANE_15_0_b0
#define lnx_RX_TRAIN_ADC_IN_TH2_LANE_15_0_b1  RX_TRAIN_SAT_CHK_CTRL_4.BF.RX_TRAIN_ADC_IN_TH2_LANE_15_0_b1
#define lnx_RX_TRAIN_ADC_IN_TH1_LANE_15_0_b0  RX_TRAIN_SAT_CHK_CTRL_4.BF.RX_TRAIN_ADC_IN_TH1_LANE_15_0_b0
#define lnx_RX_TRAIN_ADC_IN_TH1_LANE_15_0_b1  RX_TRAIN_SAT_CHK_CTRL_4.BF.RX_TRAIN_ADC_IN_TH1_LANE_15_0_b1
#define lnx_RX_TRAIN_ADC_IN_TH2_LANE_15_0  RX_TRAIN_SAT_CHK_CTRL_4.WT.W0
#define lnx_RX_TRAIN_ADC_IN_TH1_LANE_15_0  RX_TRAIN_SAT_CHK_CTRL_4.WT.W1

// 0x0104	RX_BLIND_TRAIN_CTRL_2		RX Blind Training Control Register 2
typedef union {
	struct {
		uint8_t RX_TRAIN_BLIND_ADC_OVERFLOW_SAT_TH_LANE_15_0_b0 : 8;	/* [15:0]     r/w 16'h2bc*/
		uint8_t RX_TRAIN_BLIND_ADC_OVERFLOW_SAT_TH_LANE_15_0_b1 : 8;	/* [15:0]     r/w 16'h2bc*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_BLIND_TRAIN_CTRL_2_t;
__xdata __at( 0x6104 ) volatile RX_BLIND_TRAIN_CTRL_2_t RX_BLIND_TRAIN_CTRL_2;
#define lnx_RX_TRAIN_BLIND_ADC_OVERFLOW_SAT_TH_LANE_15_0_b0  RX_BLIND_TRAIN_CTRL_2.BF.RX_TRAIN_BLIND_ADC_OVERFLOW_SAT_TH_LANE_15_0_b0
#define lnx_RX_TRAIN_BLIND_ADC_OVERFLOW_SAT_TH_LANE_15_0_b1  RX_BLIND_TRAIN_CTRL_2.BF.RX_TRAIN_BLIND_ADC_OVERFLOW_SAT_TH_LANE_15_0_b1
#define lnx_RX_TRAIN_BLIND_ADC_OVERFLOW_SAT_TH_LANE_15_0  RX_BLIND_TRAIN_CTRL_2.WT.W0

// 0x0108	RX_BLIND_TRAIN_CTRL_3		RX Blind Training Control Register 3
typedef union {
	struct {
		uint8_t RX_TRAIN_BLIND_ADC_SAT_TH2_LANE_15_0_b0  : 8;	/* [15:0]     r/w 16'h7*/
		uint8_t RX_TRAIN_BLIND_ADC_SAT_TH2_LANE_15_0_b1  : 8;	/* [15:0]     r/w 16'h7*/
		uint8_t RX_TRAIN_BLIND_ADC_TH2_LANE_5_0          : 6;	/*[21:16]     r/w 6'h28*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_BLIND_TRAIN_CTRL_3_t;
__xdata __at( 0x6108 ) volatile RX_BLIND_TRAIN_CTRL_3_t RX_BLIND_TRAIN_CTRL_3;
#define lnx_RX_TRAIN_BLIND_ADC_SAT_TH2_LANE_15_0_b0  RX_BLIND_TRAIN_CTRL_3.BF.RX_TRAIN_BLIND_ADC_SAT_TH2_LANE_15_0_b0
#define lnx_RX_TRAIN_BLIND_ADC_SAT_TH2_LANE_15_0_b1  RX_BLIND_TRAIN_CTRL_3.BF.RX_TRAIN_BLIND_ADC_SAT_TH2_LANE_15_0_b1
#define lnx_RX_TRAIN_BLIND_ADC_TH2_LANE_5_0  RX_BLIND_TRAIN_CTRL_3.BF.RX_TRAIN_BLIND_ADC_TH2_LANE_5_0
#define lnx_RX_TRAIN_BLIND_ADC_SAT_TH2_LANE_15_0  RX_BLIND_TRAIN_CTRL_3.WT.W0

// 0x010c	TRX_TRAINING_TOP_CTRL_4		
typedef union {
	struct {
		uint8_t TRX_TRAIN_DTL_SNR_AF_CDS_TH_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h38*/
		uint8_t CDS_FAULT_TRIGGERED_LANE                 : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:9]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:9]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAINING_TOP_CTRL_4_t;
__xdata __at( 0x610c ) volatile TRX_TRAINING_TOP_CTRL_4_t TRX_TRAINING_TOP_CTRL_4;
#define lnx_TRX_TRAIN_DTL_SNR_AF_CDS_TH_LANE_7_0  TRX_TRAINING_TOP_CTRL_4.BF.TRX_TRAIN_DTL_SNR_AF_CDS_TH_LANE_7_0
#define lnx_CDS_FAULT_TRIGGERED_LANE  TRX_TRAINING_TOP_CTRL_4.BF.CDS_FAULT_TRIGGERED_LANE

// 0x0110	SKEW_PROTECTION_CTRL		Skew Protection Control Registers
typedef union {
	struct {
		uint8_t TRX_TRAIN_DTL_SNR_AF_CAL_TH_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h3c*/
		uint8_t SKEW_PROT_TRIGGERED_LANE_1_0             : 2;	/*  [9:8]     r/w   0*/
		uint8_t RESERVED_10                              : 6;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:10]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:10]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SKEW_PROTECTION_CTRL_t;
__xdata __at( 0x6110 ) volatile SKEW_PROTECTION_CTRL_t SKEW_PROTECTION_CTRL;
#define lnx_TRX_TRAIN_DTL_SNR_AF_CAL_TH_LANE_7_0  SKEW_PROTECTION_CTRL.BF.TRX_TRAIN_DTL_SNR_AF_CAL_TH_LANE_7_0
#define lnx_SKEW_PROT_TRIGGERED_LANE_1_0  SKEW_PROTECTION_CTRL.BF.SKEW_PROT_TRIGGERED_LANE_1_0

// 0x0114	CAL_CTRL0		Calibration Control
typedef union {
	struct {
		uint8_t TS_TEMPC_DBG_STEP_MODE_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h00*/
		uint8_t RS_TEMPC_DBG_STEP_MODE_LANE_7_0          : 8;	/* [15:8]     r/w 8'h00*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_CTRL0_t;
__xdata __at( 0x6114 ) volatile CAL_CTRL0_t CAL_CTRL0;
#define lnx_TS_TEMPC_DBG_STEP_MODE_LANE_7_0  CAL_CTRL0.BF.TS_TEMPC_DBG_STEP_MODE_LANE_7_0
#define lnx_RS_TEMPC_DBG_STEP_MODE_LANE_7_0  CAL_CTRL0.BF.RS_TEMPC_DBG_STEP_MODE_LANE_7_0

// 0x0118	CAL_CTRL1		Calibration Control
typedef union {
	struct {
		uint8_t TS_TEMPC_DBG_STEP_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h00*/
		uint8_t RS_TEMPC_DBG_STEP_LANE_7_0               : 8;	/* [15:8]     r/w 8'h00*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_CTRL1_t;
__xdata __at( 0x6118 ) volatile CAL_CTRL1_t CAL_CTRL1;
#define lnx_TS_TEMPC_DBG_STEP_LANE_7_0  CAL_CTRL1.BF.TS_TEMPC_DBG_STEP_LANE_7_0
#define lnx_RS_TEMPC_DBG_STEP_LANE_7_0  CAL_CTRL1.BF.RS_TEMPC_DBG_STEP_LANE_7_0

// 0x011c	TX_FFE_PRESET_SELECTION_CTRL1		
typedef union {
	struct {
		uint8_t TX_TRAIN_DET_PRESET_HP_MULTIPLIER_LANE_4_0 : 5;	/*  [4:0]     r/w 5'h10*/
		uint8_t TX_TRAIN_DET_PRESET_PHASE_SCAN_EN_LANE   : 1;	/*      5     r/w   1*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t TX_TRAIN_DET_PRESET_LP_MULTIPLIER_LANE_4_0 : 5;	/* [12:8]     r/w 5'hf*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_TRAIN_DET_PRESET_SCAN_PPM_LANE_15_0_b0 : 8;	/*[31:16]     r/w 16'h8000*/
		uint8_t TX_TRAIN_DET_PRESET_SCAN_PPM_LANE_15_0_b1 : 8;	/*[31:16]     r/w 16'h8000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TX_FFE_PRESET_SELECTION_CTRL1_t;
__xdata __at( 0x611c ) volatile TX_FFE_PRESET_SELECTION_CTRL1_t TX_FFE_PRESET_SELECTION_CTRL1;
#define lnx_TX_TRAIN_DET_PRESET_HP_MULTIPLIER_LANE_4_0  TX_FFE_PRESET_SELECTION_CTRL1.BF.TX_TRAIN_DET_PRESET_HP_MULTIPLIER_LANE_4_0
#define lnx_TX_TRAIN_DET_PRESET_PHASE_SCAN_EN_LANE  TX_FFE_PRESET_SELECTION_CTRL1.BF.TX_TRAIN_DET_PRESET_PHASE_SCAN_EN_LANE
#define lnx_TX_TRAIN_DET_PRESET_LP_MULTIPLIER_LANE_4_0  TX_FFE_PRESET_SELECTION_CTRL1.BF.TX_TRAIN_DET_PRESET_LP_MULTIPLIER_LANE_4_0
#define lnx_TX_TRAIN_DET_PRESET_SCAN_PPM_LANE_15_0_b0  TX_FFE_PRESET_SELECTION_CTRL1.BF.TX_TRAIN_DET_PRESET_SCAN_PPM_LANE_15_0_b0
#define lnx_TX_TRAIN_DET_PRESET_SCAN_PPM_LANE_15_0_b1  TX_FFE_PRESET_SELECTION_CTRL1.BF.TX_TRAIN_DET_PRESET_SCAN_PPM_LANE_15_0_b1
#define lnx_TX_TRAIN_DET_PRESET_SCAN_PPM_LANE_15_0  TX_FFE_PRESET_SELECTION_CTRL1.WT.W1

// 0x0120	TRX_TP_SNR_DTL0		TRX Test Point SNR DTL Register
typedef union {
	struct {
		uint8_t TRX_TP_SNR_DTL_BF_PH_OPT_LANE_15_0_b0    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_BF_PH_OPT_LANE_15_0_b1    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_BF_SKEW_PROT_LANE_15_0_b0 : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_BF_SKEW_PROT_LANE_15_0_b1 : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TP_SNR_DTL0_t;
__xdata __at( 0x6120 ) volatile TRX_TP_SNR_DTL0_t TRX_TP_SNR_DTL0;
#define lnx_TRX_TP_SNR_DTL_BF_PH_OPT_LANE_15_0_b0  TRX_TP_SNR_DTL0.BF.TRX_TP_SNR_DTL_BF_PH_OPT_LANE_15_0_b0
#define lnx_TRX_TP_SNR_DTL_BF_PH_OPT_LANE_15_0_b1  TRX_TP_SNR_DTL0.BF.TRX_TP_SNR_DTL_BF_PH_OPT_LANE_15_0_b1
#define lnx_TRX_TP_SNR_DTL_BF_SKEW_PROT_LANE_15_0_b0  TRX_TP_SNR_DTL0.BF.TRX_TP_SNR_DTL_BF_SKEW_PROT_LANE_15_0_b0
#define lnx_TRX_TP_SNR_DTL_BF_SKEW_PROT_LANE_15_0_b1  TRX_TP_SNR_DTL0.BF.TRX_TP_SNR_DTL_BF_SKEW_PROT_LANE_15_0_b1
#define lnx_TRX_TP_SNR_DTL_BF_PH_OPT_LANE_15_0  TRX_TP_SNR_DTL0.WT.W0
#define lnx_TRX_TP_SNR_DTL_BF_SKEW_PROT_LANE_15_0  TRX_TP_SNR_DTL0.WT.W1

// 0x0124	TRX_TP_SNR_DTL1		TRX Test Point SNR DTL Register
typedef union {
	struct {
		uint8_t TRX_TP_SNR_DTL_AF_GAO_BG_LANE_15_0_b0    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_AF_GAO_BG_LANE_15_0_b1    : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_AF_PH_OPT_LANE_15_0_b0    : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_AF_PH_OPT_LANE_15_0_b1    : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TP_SNR_DTL1_t;
__xdata __at( 0x6124 ) volatile TRX_TP_SNR_DTL1_t TRX_TP_SNR_DTL1;
#define lnx_TRX_TP_SNR_DTL_AF_GAO_BG_LANE_15_0_b0  TRX_TP_SNR_DTL1.BF.TRX_TP_SNR_DTL_AF_GAO_BG_LANE_15_0_b0
#define lnx_TRX_TP_SNR_DTL_AF_GAO_BG_LANE_15_0_b1  TRX_TP_SNR_DTL1.BF.TRX_TP_SNR_DTL_AF_GAO_BG_LANE_15_0_b1
#define lnx_TRX_TP_SNR_DTL_AF_PH_OPT_LANE_15_0_b0  TRX_TP_SNR_DTL1.BF.TRX_TP_SNR_DTL_AF_PH_OPT_LANE_15_0_b0
#define lnx_TRX_TP_SNR_DTL_AF_PH_OPT_LANE_15_0_b1  TRX_TP_SNR_DTL1.BF.TRX_TP_SNR_DTL_AF_PH_OPT_LANE_15_0_b1
#define lnx_TRX_TP_SNR_DTL_AF_GAO_BG_LANE_15_0  TRX_TP_SNR_DTL1.WT.W0
#define lnx_TRX_TP_SNR_DTL_AF_PH_OPT_LANE_15_0  TRX_TP_SNR_DTL1.WT.W1

// 0x0128	TRX_TP_SNR_DTL2		TRX Test Point SNR DTL Register
typedef union {
	struct {
		uint8_t TRX_TP_SNR_DTL_AF_LMS_CONT_LANE_15_0_b0  : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_AF_LMS_CONT_LANE_15_0_b1  : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_AF_SKEW_BG_LANE_15_0_b0   : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_AF_SKEW_BG_LANE_15_0_b1   : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TP_SNR_DTL2_t;
__xdata __at( 0x6128 ) volatile TRX_TP_SNR_DTL2_t TRX_TP_SNR_DTL2;
#define lnx_TRX_TP_SNR_DTL_AF_LMS_CONT_LANE_15_0_b0  TRX_TP_SNR_DTL2.BF.TRX_TP_SNR_DTL_AF_LMS_CONT_LANE_15_0_b0
#define lnx_TRX_TP_SNR_DTL_AF_LMS_CONT_LANE_15_0_b1  TRX_TP_SNR_DTL2.BF.TRX_TP_SNR_DTL_AF_LMS_CONT_LANE_15_0_b1
#define lnx_TRX_TP_SNR_DTL_AF_SKEW_BG_LANE_15_0_b0  TRX_TP_SNR_DTL2.BF.TRX_TP_SNR_DTL_AF_SKEW_BG_LANE_15_0_b0
#define lnx_TRX_TP_SNR_DTL_AF_SKEW_BG_LANE_15_0_b1  TRX_TP_SNR_DTL2.BF.TRX_TP_SNR_DTL_AF_SKEW_BG_LANE_15_0_b1
#define lnx_TRX_TP_SNR_DTL_AF_LMS_CONT_LANE_15_0  TRX_TP_SNR_DTL2.WT.W0
#define lnx_TRX_TP_SNR_DTL_AF_SKEW_BG_LANE_15_0  TRX_TP_SNR_DTL2.WT.W1

// 0x012c	TRX_TP_SNR_DTL3		TRX Test Point SNR DTL Register
typedef union {
	struct {
		uint8_t TRX_TP_SNR_DTL_AF_CLK_TOG_LANE_15_0_b0   : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TRX_TP_SNR_DTL_AF_CLK_TOG_LANE_15_0_b1   : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TP_SNR_DTL3_t;
__xdata __at( 0x612c ) volatile TRX_TP_SNR_DTL3_t TRX_TP_SNR_DTL3;
#define lnx_TRX_TP_SNR_DTL_AF_CLK_TOG_LANE_15_0_b0  TRX_TP_SNR_DTL3.BF.TRX_TP_SNR_DTL_AF_CLK_TOG_LANE_15_0_b0
#define lnx_TRX_TP_SNR_DTL_AF_CLK_TOG_LANE_15_0_b1  TRX_TP_SNR_DTL3.BF.TRX_TP_SNR_DTL_AF_CLK_TOG_LANE_15_0_b1
#define lnx_TRX_TP_SNR_DTL_AF_CLK_TOG_LANE_15_0  TRX_TP_SNR_DTL3.WT.W0

#endif
