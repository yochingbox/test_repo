#ifndef PHY_REG_C_XDAT_LANE_H
#define PHY_REG_C_XDAT_LANE_H



// 0x0000	CAL_CTRL1_LANE		Calibration Control Lane 1
typedef union {
	struct {
		uint8_t RX_PLLVDDA_CAL_DONE_LANE                 : 1;	/*      0       r   0*/
		uint8_t TX_PLLVDDA_CAL_DONE_LANE                 : 1;	/*      1       r   0*/
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
		uint8_t TX_PLLDCC_CAL_DONE_LANE                  : 1;	/*     20       r   0*/
		uint8_t RX_PLLDCC_CAL_DONE_LANE                  : 1;	/*     21       r   0*/
		uint8_t TX_PLL_CAL_DONE_LANE                     : 1;	/*     22       r   0*/
		uint8_t RX_PLL_CAL_DONE_LANE                     : 1;	/*     23       r   0*/
		uint8_t RESERVED_24                              : 1;	/*     24     r/w   0*/
		uint8_t RX_CAL_DONE_LANE                         : 1;	/*     25       r   0*/
		uint8_t TX_CAL_DONE_LANE                         : 1;	/*     26       r   0*/
		uint8_t CAL_DONE_LANE                            : 1;	/*     27       r   0*/
		uint8_t RX_LOAD_SPEEDTBL_DONE_LANE               : 1;	/*     28       r   0*/
		uint8_t TX_LOAD_SPEEDTBL_DONE_LANE               : 1;	/*     29       r   0*/
		uint8_t TX_PLL_AMP_CAL_DONE_LANE                 : 1;	/*     30       r   0*/
		uint8_t RX_PLL_AMP_CAL_DONE_LANE                 : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL1_LANE_t;
__xdata __at( 0x6000 ) volatile CAL_CTRL1_LANE_t CAL_CTRL1_LANE;
#define lnx_RX_PLLVDDA_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RX_PLLVDDA_CAL_DONE_LANE
#define lnx_TX_PLLVDDA_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TX_PLLVDDA_CAL_DONE_LANE
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
#define lnx_TX_PLLDCC_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TX_PLLDCC_CAL_DONE_LANE
#define lnx_RX_PLLDCC_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RX_PLLDCC_CAL_DONE_LANE
#define lnx_TX_PLL_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TX_PLL_CAL_DONE_LANE
#define lnx_RX_PLL_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RX_PLL_CAL_DONE_LANE
#define lnx_RX_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RX_CAL_DONE_LANE
#define lnx_TX_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TX_CAL_DONE_LANE
#define lnx_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.CAL_DONE_LANE
#define lnx_RX_LOAD_SPEEDTBL_DONE_LANE  CAL_CTRL1_LANE.BF.RX_LOAD_SPEEDTBL_DONE_LANE
#define lnx_TX_LOAD_SPEEDTBL_DONE_LANE  CAL_CTRL1_LANE.BF.TX_LOAD_SPEEDTBL_DONE_LANE
#define lnx_TX_PLL_AMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TX_PLL_AMP_CAL_DONE_LANE
#define lnx_RX_PLL_AMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RX_PLL_AMP_CAL_DONE_LANE

// 0x0004	CAL_CTRL2_LANE		Calibration Control Lane 2
typedef union {
	struct {
		uint8_t TX_PLL_AMP_CAL_PASS_LANE                 : 1;	/*      0       r   0*/
		uint8_t RX_PLL_AMP_CAL_PASS_LANE                 : 1;	/*      1       r   0*/
		uint8_t SQ_THRESH_CAL_PASS_LANE                  : 1;	/*      2       r   0*/
		uint8_t RX_PLLVDDA_CAL_PASS_LANE                 : 1;	/*      3       r   0*/
		uint8_t TX_PLLVDDA_CAL_PASS_LANE                 : 1;	/*      4       r   0*/
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
		uint8_t TX_PLLDCC_CAL_PASS_LANE                  : 1;	/*     18       r   0*/
		uint8_t RX_PLLDCC_CAL_PASS_LANE                  : 1;	/*     19       r   0*/
		uint8_t TXDCC_CAL_PASS_LANE                      : 1;	/*     20       r   0*/
		uint8_t SQ_OFST_CAL_PASS_LANE                    : 1;	/*     21       r   0*/
		uint8_t SELLV_TXCLK_PASS_LANE                    : 1;	/*     22       r   0*/
		uint8_t SELLV_TXDATA_PASS_LANE                   : 1;	/*     23       r   0*/
		uint8_t SELLV_RXDLL_PASS_LANE                    : 1;	/*     24       r   0*/
		uint8_t SELLV_RXDLL_EOM_PASS_LANE                : 1;	/*     25       r   0*/
		uint8_t SELLV_RXCLK_PASS_LANE                    : 1;	/*     26       r   0*/
		uint8_t SELLV_RXCLK_EOM_PASS_LANE                : 1;	/*     27       r   0*/
		uint8_t SELLV_RXSAMPLER_PASS_LANE                : 1;	/*     28       r   0*/
		uint8_t TX_PLL_CAL_PASS_LANE                     : 1;	/*     29       r   0*/
		uint8_t RX_PLL_CAL_PASS_LANE                     : 1;	/*     30       r   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL2_LANE_t;
__xdata __at( 0x6004 ) volatile CAL_CTRL2_LANE_t CAL_CTRL2_LANE;
#define lnx_TX_PLL_AMP_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TX_PLL_AMP_CAL_PASS_LANE
#define lnx_RX_PLL_AMP_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RX_PLL_AMP_CAL_PASS_LANE
#define lnx_SQ_THRESH_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.SQ_THRESH_CAL_PASS_LANE
#define lnx_RX_PLLVDDA_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RX_PLLVDDA_CAL_PASS_LANE
#define lnx_TX_PLLVDDA_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TX_PLLVDDA_CAL_PASS_LANE
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
#define lnx_TX_PLLDCC_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TX_PLLDCC_CAL_PASS_LANE
#define lnx_RX_PLLDCC_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RX_PLLDCC_CAL_PASS_LANE
#define lnx_TXDCC_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXDCC_CAL_PASS_LANE
#define lnx_SQ_OFST_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.SQ_OFST_CAL_PASS_LANE
#define lnx_SELLV_TXCLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_TXCLK_PASS_LANE
#define lnx_SELLV_TXDATA_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_TXDATA_PASS_LANE
#define lnx_SELLV_RXDLL_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXDLL_PASS_LANE
#define lnx_SELLV_RXDLL_EOM_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXDLL_EOM_PASS_LANE
#define lnx_SELLV_RXCLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXCLK_PASS_LANE
#define lnx_SELLV_RXCLK_EOM_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXCLK_EOM_PASS_LANE
#define lnx_SELLV_RXSAMPLER_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXSAMPLER_PASS_LANE
#define lnx_TX_PLL_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TX_PLL_CAL_PASS_LANE
#define lnx_RX_PLL_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RX_PLL_CAL_PASS_LANE

// 0x0008	CAL_CTRL3_LANE		Calibration Control Lane 3
typedef union {
	struct {
		uint8_t LOAD_CAL_ON_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
		uint8_t UART_EN_LANE                             : 1;	/*      8     r/w   0*/
		uint8_t PCIE_RXTRAIN_ON_BEFORE_DIR_LANE          : 1;	/*      9     r/w   0*/
		uint8_t DIS_BYPASS_RXTRAIN_IN_FOM_LANE           : 1;	/*     10     r/w   0*/
		uint8_t TRAIN_DB_EN_LANE                         : 1;	/*     11     r/w   0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RXDCC_DLL_CAL_STOP_SEL_LANE              : 1;	/*     16     r/w   0*/
		uint8_t RXDCC_EOM_CAL_STOP_SEL_LANE              : 1;	/*     17     r/w   0*/
		uint8_t RXDCC_DATA_CAL_STOP_SEL_LANE             : 1;	/*     18     r/w   0*/
		uint8_t CAL_VDD_CONTINUOUS_MODE_EN_LANE          : 1;	/*     19     r/w   0*/
		uint8_t TXDCC_CAL_STOP_SEL_LANE                  : 1;	/*     20     r/w   0*/
		uint8_t DLL_VDDA_TRACKING_ON_LANE                : 1;	/*     21     r/w   0*/
		uint8_t TXIMP_CAL_TIMEOUT_LANE                   : 1;	/*     22       r   0*/
		uint8_t RXIMP_CAL_TIMEOUT_LANE                   : 1;	/*     23       r   0*/
		uint8_t TX_PLL_TEMP_CAL_DONE_LANE                : 1;	/*     24       r   0*/
		uint8_t RX_PLL_TEMP_CAL_DONE_LANE                : 1;	/*     25       r   0*/
		uint8_t TX_PLL_TEMP_CAL_PASS_LANE                : 1;	/*     26       r   0*/
		uint8_t RX_PLL_TEMP_CAL_PASS_LANE                : 1;	/*     27       r   0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL3_LANE_t;
__xdata __at( 0x6008 ) volatile CAL_CTRL3_LANE_t CAL_CTRL3_LANE;
#define lnx_LOAD_CAL_ON_LANE_7_0  CAL_CTRL3_LANE.BF.LOAD_CAL_ON_LANE_7_0
#define lnx_UART_EN_LANE  CAL_CTRL3_LANE.BF.UART_EN_LANE
#define lnx_PCIE_RXTRAIN_ON_BEFORE_DIR_LANE  CAL_CTRL3_LANE.BF.PCIE_RXTRAIN_ON_BEFORE_DIR_LANE
#define lnx_DIS_BYPASS_RXTRAIN_IN_FOM_LANE  CAL_CTRL3_LANE.BF.DIS_BYPASS_RXTRAIN_IN_FOM_LANE
#define lnx_TRAIN_DB_EN_LANE  CAL_CTRL3_LANE.BF.TRAIN_DB_EN_LANE
#define lnx_RXDCC_DLL_CAL_STOP_SEL_LANE  CAL_CTRL3_LANE.BF.RXDCC_DLL_CAL_STOP_SEL_LANE
#define lnx_RXDCC_EOM_CAL_STOP_SEL_LANE  CAL_CTRL3_LANE.BF.RXDCC_EOM_CAL_STOP_SEL_LANE
#define lnx_RXDCC_DATA_CAL_STOP_SEL_LANE  CAL_CTRL3_LANE.BF.RXDCC_DATA_CAL_STOP_SEL_LANE
#define lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE  CAL_CTRL3_LANE.BF.CAL_VDD_CONTINUOUS_MODE_EN_LANE
#define lnx_TXDCC_CAL_STOP_SEL_LANE  CAL_CTRL3_LANE.BF.TXDCC_CAL_STOP_SEL_LANE
#define lnx_DLL_VDDA_TRACKING_ON_LANE  CAL_CTRL3_LANE.BF.DLL_VDDA_TRACKING_ON_LANE
#define lnx_TXIMP_CAL_TIMEOUT_LANE  CAL_CTRL3_LANE.BF.TXIMP_CAL_TIMEOUT_LANE
#define lnx_RXIMP_CAL_TIMEOUT_LANE  CAL_CTRL3_LANE.BF.RXIMP_CAL_TIMEOUT_LANE
#define lnx_TX_PLL_TEMP_CAL_DONE_LANE  CAL_CTRL3_LANE.BF.TX_PLL_TEMP_CAL_DONE_LANE
#define lnx_RX_PLL_TEMP_CAL_DONE_LANE  CAL_CTRL3_LANE.BF.RX_PLL_TEMP_CAL_DONE_LANE
#define lnx_TX_PLL_TEMP_CAL_PASS_LANE  CAL_CTRL3_LANE.BF.TX_PLL_TEMP_CAL_PASS_LANE
#define lnx_RX_PLL_TEMP_CAL_PASS_LANE  CAL_CTRL3_LANE.BF.RX_PLL_TEMP_CAL_PASS_LANE

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
		uint8_t CAL_SMPLR_D_TOP_E_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_MID_E_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_BOT_E_LANE_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_TOP_O_LANE_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA4_LANE_t;
__xdata __at( 0x6020 ) volatile CAL_SAVE_DATA4_LANE_t CAL_SAVE_DATA4_LANE;
#define lnx_CAL_SMPLR_D_TOP_E_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_SMPLR_D_TOP_E_LANE_7_0
#define lnx_CAL_SMPLR_D_MID_E_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_SMPLR_D_MID_E_LANE_7_0
#define lnx_CAL_SMPLR_D_BOT_E_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_SMPLR_D_BOT_E_LANE_7_0
#define lnx_CAL_SMPLR_D_TOP_O_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_SMPLR_D_TOP_O_LANE_7_0

// 0x0024	CAL_SAVE_DATA5_LANE		Calibration Result 7
typedef union {
	struct {
		uint8_t CAL_SMPLR_D_MID_O_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_D_BOT_O_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_TOP_E_LANE_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_MID_E_LANE_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA5_LANE_t;
__xdata __at( 0x6024 ) volatile CAL_SAVE_DATA5_LANE_t CAL_SAVE_DATA5_LANE;
#define lnx_CAL_SMPLR_D_MID_O_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_SMPLR_D_MID_O_LANE_7_0
#define lnx_CAL_SMPLR_D_BOT_O_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_SMPLR_D_BOT_O_LANE_7_0
#define lnx_CAL_SMPLR_S_TOP_E_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_SMPLR_S_TOP_E_LANE_7_0
#define lnx_CAL_SMPLR_S_MID_E_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_SMPLR_S_MID_E_LANE_7_0

// 0x0028	CAL_SAVE_DATA6_LANE		Calibration Result 8
typedef union {
	struct {
		uint8_t CAL_SMPLR_S_BOT_E_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_TOP_O_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_MID_O_LANE_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SMPLR_S_BOT_O_LANE_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA6_LANE_t;
__xdata __at( 0x6028 ) volatile CAL_SAVE_DATA6_LANE_t CAL_SAVE_DATA6_LANE;
#define lnx_CAL_SMPLR_S_BOT_E_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_SMPLR_S_BOT_E_LANE_7_0
#define lnx_CAL_SMPLR_S_TOP_O_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_SMPLR_S_TOP_O_LANE_7_0
#define lnx_CAL_SMPLR_S_MID_O_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_SMPLR_S_MID_O_LANE_7_0
#define lnx_CAL_SMPLR_S_BOT_O_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_SMPLR_S_BOT_O_LANE_7_0

// 0x002c	CAL_SAVE_DATA7_LANE		Calibration Result 9
typedef union {
	struct {
		uint8_t CAL_SMPLR_EDGE_E_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SMPLR_EDGE_O_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SAMPLER_RES_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PLL_AMP_CAL_VAL_MAX_LANE_7_0             : 8;	/*[31:24]     r/w 8'he0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA7_LANE_t;
__xdata __at( 0x602c ) volatile CAL_SAVE_DATA7_LANE_t CAL_SAVE_DATA7_LANE;
#define lnx_CAL_SMPLR_EDGE_E_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_SMPLR_EDGE_E_LANE_7_0
#define lnx_CAL_SMPLR_EDGE_O_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_SMPLR_EDGE_O_LANE_7_0
#define lnx_CAL_SAMPLER_RES_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_SAMPLER_RES_LANE_7_0
#define lnx_PLL_AMP_CAL_VAL_MAX_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.PLL_AMP_CAL_VAL_MAX_LANE_7_0

// 0x0030	CDS_TB		
typedef union {
	struct {
		uint8_t CDS_CALL_FORCE_LANE_31_0_b0              : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CDS_CALL_FORCE_LANE_31_0_b1              : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CDS_CALL_FORCE_LANE_31_0_b2              : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CDS_CALL_FORCE_LANE_31_0_b3              : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_TB_t;
__xdata __at( 0x6030 ) volatile CDS_TB_t CDS_TB;
#define lnx_CDS_CALL_FORCE_LANE_31_0_b0  CDS_TB.BF.CDS_CALL_FORCE_LANE_31_0_b0
#define lnx_CDS_CALL_FORCE_LANE_31_0_b1  CDS_TB.BF.CDS_CALL_FORCE_LANE_31_0_b1
#define lnx_CDS_CALL_FORCE_LANE_31_0_b2  CDS_TB.BF.CDS_CALL_FORCE_LANE_31_0_b2
#define lnx_CDS_CALL_FORCE_LANE_31_0_b3  CDS_TB.BF.CDS_CALL_FORCE_LANE_31_0_b3

// 0x0034	TRX_TRAIN_IF_TIMERS_ENABLE_LANE		
typedef union {
	struct {
		uint8_t REFCLK_FREQ_RD_LANE_15_0_b0              : 8;	/* [15:0]       r 16'h0*/
		uint8_t REFCLK_FREQ_RD_LANE_15_0_b1              : 8;	/* [15:0]       r 16'h0*/
		uint8_t TRAIN_DB_STEP_LANE_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 2;	/*[25:24]     r/w   0*/
		uint8_t TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE     : 1;	/*     26       r   0*/
		uint8_t FRAME_LOCK_SEL_TIMEOUT_LANE              : 1;	/*     27     r/w 1'b0*/
		uint8_t TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE     : 1;	/*     28     r/w 1'b1*/
		uint8_t TX_TRAIN_TIMER_ENABLE_LANE               : 1;	/*     29     r/w 1'b1*/
		uint8_t RX_TRAIN_TIMER_ENABLE_LANE               : 1;	/*     30     r/w 1'b1*/
		uint8_t TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE    : 1;	/*     31     r/w 1'b1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TRAIN_IF_TIMERS_ENABLE_LANE_t;
__xdata __at( 0x6034 ) volatile TRX_TRAIN_IF_TIMERS_ENABLE_LANE_t TRX_TRAIN_IF_TIMERS_ENABLE_LANE;
#define lnx_REFCLK_FREQ_RD_LANE_15_0_b0  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.REFCLK_FREQ_RD_LANE_15_0_b0
#define lnx_REFCLK_FREQ_RD_LANE_15_0_b1  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.REFCLK_FREQ_RD_LANE_15_0_b1
#define lnx_TRAIN_DB_STEP_LANE_7_0  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TRAIN_DB_STEP_LANE_7_0
#define lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE
#define lnx_FRAME_LOCK_SEL_TIMEOUT_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.FRAME_LOCK_SEL_TIMEOUT_LANE
#define lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE
#define lnx_TX_TRAIN_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_TIMER_ENABLE_LANE
#define lnx_RX_TRAIN_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.RX_TRAIN_TIMER_ENABLE_LANE
#define lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE
#define lnx_REFCLK_FREQ_RD_LANE_15_0  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.WT.W0

// 0x0038	DFE_CONTROL_0		
typedef union {
	struct {
		uint8_t DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b0      : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b1      : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t DFE_FORCE_ZERO_LANE_7_0                  : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t DFE_DBG_STEP_MODE_LANE_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_CONTROL_0_t;
__xdata __at( 0x6038 ) volatile DFE_CONTROL_0_t DFE_CONTROL_0;
#define lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b0  DFE_CONTROL_0.BF.DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b0
#define lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b1  DFE_CONTROL_0.BF.DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b1
#define lnx_DFE_FORCE_ZERO_LANE_7_0  DFE_CONTROL_0.BF.DFE_FORCE_ZERO_LANE_7_0
#define lnx_DFE_DBG_STEP_MODE_LANE_7_0  DFE_CONTROL_0.BF.DFE_DBG_STEP_MODE_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0  DFE_CONTROL_0.WT.W0

// 0x003c	DFE_CONTROL_1		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'b0*/
		uint8_t EOM_READY_LANE                           : 1;	/*      3     r/w 1'b0*/
		uint8_t EOM_DFE_CALL_LANE                        : 1;	/*      4     r/w 1'b0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'b0*/
		uint8_t DFE_F1P5_EN_LANE                         : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_CAL_DONE_LANE                        : 1;	/*      7       r 1'b0*/
		uint8_t ESM_VOLTAGE_LANE_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t CDS_CALL_FORCE_EN_LANE                   : 1;	/*     18     r/w 1'h0*/
		uint8_t SQ_FW_FILTER_EN_LANE                     : 1;	/*     19     r/w 1'h0*/
		uint8_t PHASE_ADAPT_SAT_DETECT_LANE              : 1;	/*     20       r 1'h0*/
		uint8_t PHASE_ADAPT_TEMP_AUTO_EN_LANE            : 1;	/*     21     r/w 1'h0*/
		uint8_t SQ_AUTO_TRAIN_LANE                       : 1;	/*     22     r/w 1'h0*/
		uint8_t RX_TRAIN_ONLY_DFE_LANE                   : 1;	/*     23     r/w 1'b0*/
		uint8_t PHASE_ADAPT_TEMP_THR_LANE_7_0            : 8;	/*[31:24]     r/w 8'hc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_1_t;
__xdata __at( 0x603c ) volatile DFE_CONTROL_1_t DFE_CONTROL_1;
#define lnx_EOM_READY_LANE  DFE_CONTROL_1.BF.EOM_READY_LANE
#define lnx_EOM_DFE_CALL_LANE  DFE_CONTROL_1.BF.EOM_DFE_CALL_LANE
#define lnx_DFE_F1P5_EN_LANE  DFE_CONTROL_1.BF.DFE_F1P5_EN_LANE
#define lnx_DFE_CAL_DONE_LANE  DFE_CONTROL_1.BF.DFE_CAL_DONE_LANE
#define lnx_ESM_VOLTAGE_LANE_7_0  DFE_CONTROL_1.BF.ESM_VOLTAGE_LANE_7_0
#define lnx_CDS_CALL_FORCE_EN_LANE  DFE_CONTROL_1.BF.CDS_CALL_FORCE_EN_LANE
#define lnx_SQ_FW_FILTER_EN_LANE  DFE_CONTROL_1.BF.SQ_FW_FILTER_EN_LANE
#define lnx_PHASE_ADAPT_SAT_DETECT_LANE  DFE_CONTROL_1.BF.PHASE_ADAPT_SAT_DETECT_LANE
#define lnx_PHASE_ADAPT_TEMP_AUTO_EN_LANE  DFE_CONTROL_1.BF.PHASE_ADAPT_TEMP_AUTO_EN_LANE
#define lnx_SQ_AUTO_TRAIN_LANE  DFE_CONTROL_1.BF.SQ_AUTO_TRAIN_LANE
#define lnx_RX_TRAIN_ONLY_DFE_LANE  DFE_CONTROL_1.BF.RX_TRAIN_ONLY_DFE_LANE
#define lnx_PHASE_ADAPT_TEMP_THR_LANE_7_0  DFE_CONTROL_1.BF.PHASE_ADAPT_TEMP_THR_LANE_7_0

// 0x0040	DFE_CONTROL_2		
typedef union {
	struct {
		uint8_t DFE_DBG_STEP_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t ADAPTED_PHASE_OFFSET_DATA_LANE_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TEMP_CDEGREE_LANE_15_0_b0                : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t TEMP_CDEGREE_LANE_15_0_b1                : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_CONTROL_2_t;
__xdata __at( 0x6040 ) volatile DFE_CONTROL_2_t DFE_CONTROL_2;
#define lnx_DFE_DBG_STEP_LANE_7_0  DFE_CONTROL_2.BF.DFE_DBG_STEP_LANE_7_0
#define lnx_ADAPTED_PHASE_OFFSET_DATA_LANE_7_0  DFE_CONTROL_2.BF.ADAPTED_PHASE_OFFSET_DATA_LANE_7_0
#define lnx_TEMP_CDEGREE_LANE_15_0_b0  DFE_CONTROL_2.BF.TEMP_CDEGREE_LANE_15_0_b0
#define lnx_TEMP_CDEGREE_LANE_15_0_b1  DFE_CONTROL_2.BF.TEMP_CDEGREE_LANE_15_0_b1
#define lnx_TEMP_CDEGREE_LANE_15_0  DFE_CONTROL_2.WT.W1

// 0x0044	DFE_CONTROL_3		
typedef union {
	struct {
		uint8_t FINAL_GAIN_ADJUST_EN_LANE                : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 2;	/*  [2:1]     r/w   0*/
		uint8_t TX_TRAIN_P2P_HOLD_LANE                   : 1;	/*      3     r/w 1'h1*/
		uint8_t TRAIN_PH_CONTROL_MODE_LANE_1_0           : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TRAIN_USE_D_LANE                         : 1;	/*      6     r/w 1'h1*/
		uint8_t TRAIN_USE_S_LANE                         : 1;	/*      7     r/w 1'h1*/
		uint8_t CAL_EOM_DPHER_LANE_7_0                   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PHASE_LANE_7_0                       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t OPT_PHASE_OFFSET_NORMAL_LANE_7_0         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_3_t;
__xdata __at( 0x6044 ) volatile DFE_CONTROL_3_t DFE_CONTROL_3;
#define lnx_FINAL_GAIN_ADJUST_EN_LANE  DFE_CONTROL_3.BF.FINAL_GAIN_ADJUST_EN_LANE
#define lnx_TX_TRAIN_P2P_HOLD_LANE  DFE_CONTROL_3.BF.TX_TRAIN_P2P_HOLD_LANE
#define lnx_TRAIN_PH_CONTROL_MODE_LANE_1_0  DFE_CONTROL_3.BF.TRAIN_PH_CONTROL_MODE_LANE_1_0
#define lnx_TRAIN_USE_D_LANE  DFE_CONTROL_3.BF.TRAIN_USE_D_LANE
#define lnx_TRAIN_USE_S_LANE  DFE_CONTROL_3.BF.TRAIN_USE_S_LANE
#define lnx_CAL_EOM_DPHER_LANE_7_0  DFE_CONTROL_3.BF.CAL_EOM_DPHER_LANE_7_0
#define lnx_CAL_PHASE_LANE_7_0  DFE_CONTROL_3.BF.CAL_PHASE_LANE_7_0
#define lnx_OPT_PHASE_OFFSET_NORMAL_LANE_7_0  DFE_CONTROL_3.BF.OPT_PHASE_OFFSET_NORMAL_LANE_7_0

// 0x0048	DFE_CONTROL_4		
typedef union {
	struct {
		uint8_t TRAIN_F0D_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_F0A_LANE_7_0                       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_F0A_MAX_LANE_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_F0B_LANE_7_0                       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_4_t;
__xdata __at( 0x6048 ) volatile DFE_CONTROL_4_t DFE_CONTROL_4;
#define lnx_TRAIN_F0D_LANE_7_0  DFE_CONTROL_4.BF.TRAIN_F0D_LANE_7_0
#define lnx_TRAIN_F0A_LANE_7_0  DFE_CONTROL_4.BF.TRAIN_F0A_LANE_7_0
#define lnx_TRAIN_F0A_MAX_LANE_7_0  DFE_CONTROL_4.BF.TRAIN_F0A_MAX_LANE_7_0
#define lnx_TRAIN_F0B_LANE_7_0  DFE_CONTROL_4.BF.TRAIN_F0B_LANE_7_0

// 0x004c	DFE_CONTROL_5		
typedef union {
	struct {
		uint8_t CDR_PHASE_OPT_FIRST_EN_LANE              : 1;	/*      0     r/w 1'b0*/
		uint8_t RX_NO_INIT_LANE                          : 1;	/*      1     r/w 1'b0*/
		uint8_t TX_NO_INIT_LANE                          : 1;	/*      2     r/w 1'b0*/
		uint8_t DFE_ADAPT_NORMAL_FORCE_SKIP_LANE         : 1;	/*      3     r/w 1'b0*/
		uint8_t DFE_ADAPT_NORMAL_SOFT_CONT_EN_LANE       : 1;	/*      4     r/w 1'b0*/
		uint8_t PHASE_ADAPT_ENABLE_LANE                  : 1;	/*      5     r/w 1'b0*/
		uint8_t PHASE_ADAPT_MODE_LANE                    : 1;	/*      6     r/w 1'b0*/
		uint8_t F1_ALIGN_SKIP_LANE                       : 1;	/*      7     r/w 1'h0*/
		uint8_t THRE_GOOD_LANE_4_0                       : 5;	/* [12:8]     r/w 5'h2*/
		uint8_t EDGE_SAMPLER_NORMAL_EN_LANE              : 1;	/*     13     r/w 1'b1*/
		uint8_t SATURATE_DISABLE_LANE                    : 1;	/*     14     r/w 1'b0*/
		uint8_t CDRPHASE_OPT_EN_LANE                     : 1;	/*     15     r/w 1'b1*/
		uint8_t THRE_POOR_LANE_2_0                       : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t PHASE_ADAPT_UI_ALIGN_SKIP_LANE           : 1;	/*     19     r/w 1'h0*/
		uint8_t INIT_PHASE_TRAIN_EN_LANE                 : 1;	/*     20     r/w 1'h0*/
		uint8_t EOM_PHASE_UI_ALIGN_FAILED_LANE           : 1;	/*     21       r 1'h0*/
		uint8_t PATTERN_PROTECT_EN_LANE                  : 1;	/*     22     r/w 1'h0*/
		uint8_t MAXEO_ADAPT_NORMAL_MODE_EN_LANE          : 1;	/*     23     r/w 1'b0*/
		uint8_t THRE_EXCELLENT_LANE_5_0                  : 6;	/*[29:24]     r/w 6'h3f*/
		uint8_t EYE_CHECK_BYPASS_LANE                    : 1;	/*     30     r/w 1'b1*/
		uint8_t FAST_DFE_TIMER_EN_LANE                   : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_5_t;
__xdata __at( 0x604c ) volatile DFE_CONTROL_5_t DFE_CONTROL_5;
#define lnx_CDR_PHASE_OPT_FIRST_EN_LANE  DFE_CONTROL_5.BF.CDR_PHASE_OPT_FIRST_EN_LANE
#define lnx_RX_NO_INIT_LANE  DFE_CONTROL_5.BF.RX_NO_INIT_LANE
#define lnx_TX_NO_INIT_LANE  DFE_CONTROL_5.BF.TX_NO_INIT_LANE
#define lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE  DFE_CONTROL_5.BF.DFE_ADAPT_NORMAL_FORCE_SKIP_LANE
#define lnx_DFE_ADAPT_NORMAL_SOFT_CONT_EN_LANE  DFE_CONTROL_5.BF.DFE_ADAPT_NORMAL_SOFT_CONT_EN_LANE
#define lnx_PHASE_ADAPT_ENABLE_LANE  DFE_CONTROL_5.BF.PHASE_ADAPT_ENABLE_LANE
#define lnx_PHASE_ADAPT_MODE_LANE  DFE_CONTROL_5.BF.PHASE_ADAPT_MODE_LANE
#define lnx_F1_ALIGN_SKIP_LANE  DFE_CONTROL_5.BF.F1_ALIGN_SKIP_LANE
#define lnx_THRE_GOOD_LANE_4_0  DFE_CONTROL_5.BF.THRE_GOOD_LANE_4_0
#define lnx_EDGE_SAMPLER_NORMAL_EN_LANE  DFE_CONTROL_5.BF.EDGE_SAMPLER_NORMAL_EN_LANE
#define lnx_SATURATE_DISABLE_LANE  DFE_CONTROL_5.BF.SATURATE_DISABLE_LANE
#define lnx_CDRPHASE_OPT_EN_LANE  DFE_CONTROL_5.BF.CDRPHASE_OPT_EN_LANE
#define lnx_THRE_POOR_LANE_2_0  DFE_CONTROL_5.BF.THRE_POOR_LANE_2_0
#define lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE  DFE_CONTROL_5.BF.PHASE_ADAPT_UI_ALIGN_SKIP_LANE
#define lnx_INIT_PHASE_TRAIN_EN_LANE  DFE_CONTROL_5.BF.INIT_PHASE_TRAIN_EN_LANE
#define lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE  DFE_CONTROL_5.BF.EOM_PHASE_UI_ALIGN_FAILED_LANE
#define lnx_PATTERN_PROTECT_EN_LANE  DFE_CONTROL_5.BF.PATTERN_PROTECT_EN_LANE
#define lnx_MAXEO_ADAPT_NORMAL_MODE_EN_LANE  DFE_CONTROL_5.BF.MAXEO_ADAPT_NORMAL_MODE_EN_LANE
#define lnx_THRE_EXCELLENT_LANE_5_0  DFE_CONTROL_5.BF.THRE_EXCELLENT_LANE_5_0
#define lnx_EYE_CHECK_BYPASS_LANE  DFE_CONTROL_5.BF.EYE_CHECK_BYPASS_LANE
#define lnx_FAST_DFE_TIMER_EN_LANE  DFE_CONTROL_5.BF.FAST_DFE_TIMER_EN_LANE

// 0x0050	TRAIN_CONTROL_0		
typedef union {
	struct {
		uint8_t MIDPOINT_SMALL_THRES_C_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MIDPOINT_SMALL_THRES_K_LANE_7_0          : 8;	/* [15:8]     r/w 8'hc*/
		uint8_t MIDPOINT_LARGE_THRES_C_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MIDPOINT_LARGE_THRES_K_LANE_7_0          : 8;	/*[31:24]     r/w 8'hc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_0_t;
__xdata __at( 0x6050 ) volatile TRAIN_CONTROL_0_t TRAIN_CONTROL_0;
#define lnx_MIDPOINT_SMALL_THRES_C_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_SMALL_THRES_C_LANE_7_0
#define lnx_MIDPOINT_SMALL_THRES_K_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_SMALL_THRES_K_LANE_7_0
#define lnx_MIDPOINT_LARGE_THRES_C_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_LARGE_THRES_C_LANE_7_0
#define lnx_MIDPOINT_LARGE_THRES_K_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_LARGE_THRES_K_LANE_7_0

// 0x0054	TRAIN_CONTROL_1		
typedef union {
	struct {
		uint8_t INI_PHASE_OFFSET_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MIDPOINT_PHASE_OS_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SUMF_BOOST_TARGET_C_LANE_7_0             : 8;	/*[23:16]     r/w 8'h60*/
		uint8_t SUMF_BOOST_TARGET_K_LANE_7_0             : 8;	/*[31:24]     r/w 8'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_1_t;
__xdata __at( 0x6054 ) volatile TRAIN_CONTROL_1_t TRAIN_CONTROL_1;
#define lnx_INI_PHASE_OFFSET_LANE_7_0  TRAIN_CONTROL_1.BF.INI_PHASE_OFFSET_LANE_7_0
#define lnx_MIDPOINT_PHASE_OS_LANE_7_0  TRAIN_CONTROL_1.BF.MIDPOINT_PHASE_OS_LANE_7_0
#define lnx_SUMF_BOOST_TARGET_C_LANE_7_0  TRAIN_CONTROL_1.BF.SUMF_BOOST_TARGET_C_LANE_7_0
#define lnx_SUMF_BOOST_TARGET_K_LANE_7_0  TRAIN_CONTROL_1.BF.SUMF_BOOST_TARGET_K_LANE_7_0

// 0x0058	TRAIN_CONTROL_2		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [9:0]     r/w 10'h0*/
		uint8_t RESERVED_8                               : 2;	/*  [9:0]     r/w 10'h0*/
		uint8_t ESM_DFE_ADAPT_SPLR_EN_LANE_3_0           : 4;	/*[13:10]     r/w 4'h0*/
		uint8_t TX_TRAIN_COMPLETE_INT_LANE               : 1;	/*     14       r 1'b1*/
		uint8_t TX_TRAIN_FAIL_INT_LANE                   : 1;	/*     15       r 1'b1*/
		uint8_t ESM_PATH_SEL_LANE                        : 1;	/*     16     r/w 1'b0*/
		uint8_t TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE    : 1;	/*     17       r 1'h0*/
		uint8_t ESM_EN_LANE                              : 1;	/*     18     r/w 1'h0*/
		uint8_t TX_TRAIN_ALG_SEL_LANE                    : 1;	/*     19     r/w 1'h0*/
		uint8_t TX_ADAPT_GN2_EN_LANE                     : 1;	/*     20     r/w 1'h0*/
		uint8_t TX_ADAPT_G1_EN_LANE                      : 1;	/*     21     r/w 1'h0*/
		uint8_t TX_ADAPT_GN1_EN_LANE                     : 1;	/*     22     r/w 1'h0*/
		uint8_t TX_ADAPT_G0_EN_LANE                      : 1;	/*     23     r/w 1'h0*/
		uint8_t RXFFE_R_GAIN_TRAIN_LANE_3_0              : 4;	/*[27:24]     r/w 4'h3*/
		uint8_t RX_RXFFE_R_INI_LANE_3_0                  : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_2_t;
__xdata __at( 0x6058 ) volatile TRAIN_CONTROL_2_t TRAIN_CONTROL_2;
#define lnx_ESM_DFE_ADAPT_SPLR_EN_LANE_3_0  TRAIN_CONTROL_2.BF.ESM_DFE_ADAPT_SPLR_EN_LANE_3_0
#define lnx_TX_TRAIN_COMPLETE_INT_LANE  TRAIN_CONTROL_2.BF.TX_TRAIN_COMPLETE_INT_LANE
#define lnx_TX_TRAIN_FAIL_INT_LANE  TRAIN_CONTROL_2.BF.TX_TRAIN_FAIL_INT_LANE
#define lnx_ESM_PATH_SEL_LANE  TRAIN_CONTROL_2.BF.ESM_PATH_SEL_LANE
#define lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE  TRAIN_CONTROL_2.BF.TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE
#define lnx_ESM_EN_LANE  TRAIN_CONTROL_2.BF.ESM_EN_LANE
#define lnx_TX_TRAIN_ALG_SEL_LANE  TRAIN_CONTROL_2.BF.TX_TRAIN_ALG_SEL_LANE
#define lnx_TX_ADAPT_GN2_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_GN2_EN_LANE
#define lnx_TX_ADAPT_G1_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_G1_EN_LANE
#define lnx_TX_ADAPT_GN1_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_GN1_EN_LANE
#define lnx_TX_ADAPT_G0_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_G0_EN_LANE
#define lnx_RXFFE_R_GAIN_TRAIN_LANE_3_0  TRAIN_CONTROL_2.BF.RXFFE_R_GAIN_TRAIN_LANE_3_0
#define lnx_RX_RXFFE_R_INI_LANE_3_0  TRAIN_CONTROL_2.BF.RX_RXFFE_R_INI_LANE_3_0

// 0x005c	RPTA_CONFIG_0		
typedef union {
	struct {
		uint8_t EOM_CONV_NUM_LANE_15_0_b0                : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t EOM_CONV_NUM_LANE_15_0_b1                : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t EOM_ADAPT_STEP_SIZE_LANE_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t EOM_CLK_OFFSET_2C_LANE_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RPTA_CONFIG_0_t;
__xdata __at( 0x605c ) volatile RPTA_CONFIG_0_t RPTA_CONFIG_0;
#define lnx_EOM_CONV_NUM_LANE_15_0_b0  RPTA_CONFIG_0.BF.EOM_CONV_NUM_LANE_15_0_b0
#define lnx_EOM_CONV_NUM_LANE_15_0_b1  RPTA_CONFIG_0.BF.EOM_CONV_NUM_LANE_15_0_b1
#define lnx_EOM_ADAPT_STEP_SIZE_LANE_7_0  RPTA_CONFIG_0.BF.EOM_ADAPT_STEP_SIZE_LANE_7_0
#define lnx_EOM_CLK_OFFSET_2C_LANE_7_0  RPTA_CONFIG_0.BF.EOM_CLK_OFFSET_2C_LANE_7_0
#define lnx_EOM_CONV_NUM_LANE_15_0  RPTA_CONFIG_0.WT.W0

// 0x0060	RPTA_CONFIG_1		
typedef union {
	struct {
		uint8_t DATA_CLK_OFFSET_2C_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t F0D_THRE_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t PH_ADAPT_STEP_SIZE_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PH_CONV_NUM_LANE_7_0                     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RPTA_CONFIG_1_t;
__xdata __at( 0x6060 ) volatile RPTA_CONFIG_1_t RPTA_CONFIG_1;
#define lnx_DATA_CLK_OFFSET_2C_LANE_7_0  RPTA_CONFIG_1.BF.DATA_CLK_OFFSET_2C_LANE_7_0
#define lnx_F0D_THRE_LANE_7_0  RPTA_CONFIG_1.BF.F0D_THRE_LANE_7_0
#define lnx_PH_ADAPT_STEP_SIZE_LANE_7_0  RPTA_CONFIG_1.BF.PH_ADAPT_STEP_SIZE_LANE_7_0
#define lnx_PH_CONV_NUM_LANE_7_0  RPTA_CONFIG_1.BF.PH_CONV_NUM_LANE_7_0

// 0x0064	DLL_CAL		DLL Calibration
typedef union {
	struct {
		uint8_t DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0 : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0 : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t DLL_EOM_GMSEL_MIN_LANE_3_0               : 4;	/*  [7:4]     r/w 4'h3*/
		uint8_t DLL_GMSEL_MIN_LANE_3_0                   : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_PLL_RATE_INDEX_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t RESERVED_24                              : 4;	/*[27:24]     r/w   0*/
		uint8_t RX_RXFFE_C_INI_LANE_3_0                  : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_t;
__xdata __at( 0x6064 ) volatile DLL_CAL_t DLL_CAL;
#define lnx_DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0  DLL_CAL.BF.DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0
#define lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0  DLL_CAL.BF.DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0
#define lnx_DLL_EOM_GMSEL_MIN_LANE_3_0  DLL_CAL.BF.DLL_EOM_GMSEL_MIN_LANE_3_0
#define lnx_DLL_GMSEL_MIN_LANE_3_0  DLL_CAL.BF.DLL_GMSEL_MIN_LANE_3_0
#define lnx_RX_PLL_RATE_INDEX_LANE_7_0  DLL_CAL.BF.RX_PLL_RATE_INDEX_LANE_7_0
#define lnx_RX_RXFFE_C_INI_LANE_3_0  DLL_CAL.BF.RX_RXFFE_C_INI_LANE_3_0

// 0x0068	CLI_ARG		CLI Argument
typedef union {
	struct {
		uint8_t CLI_CMD_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CLI_START_LANE                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w 7'h0*/
		uint8_t CLI_RETURN_LANE_15_0_b0                  : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t CLI_RETURN_LANE_15_0_b1                  : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CLI_ARG_t;
__xdata __at( 0x6068 ) volatile CLI_ARG_t CLI_ARG;
#define lnx_CLI_CMD_LANE_7_0  CLI_ARG.BF.CLI_CMD_LANE_7_0
#define lnx_CLI_START_LANE  CLI_ARG.BF.CLI_START_LANE
#define lnx_CLI_RETURN_LANE_15_0_b0  CLI_ARG.BF.CLI_RETURN_LANE_15_0_b0
#define lnx_CLI_RETURN_LANE_15_0_b1  CLI_ARG.BF.CLI_RETURN_LANE_15_0_b1
#define lnx_CLI_RETURN_LANE_15_0  CLI_ARG.WT.W1

// 0x006c	CLI_REG1		Command Line Interface
typedef union {
	struct {
		uint8_t CLI_ARGS_LANE_31_0_b0                    : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CLI_ARGS_LANE_31_0_b1                    : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CLI_ARGS_LANE_31_0_b2                    : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t CLI_ARGS_LANE_31_0_b3                    : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLI_REG1_t;
__xdata __at( 0x606c ) volatile CLI_REG1_t CLI_REG1;
#define lnx_CLI_ARGS_LANE_31_0_b0  CLI_REG1.BF.CLI_ARGS_LANE_31_0_b0
#define lnx_CLI_ARGS_LANE_31_0_b1  CLI_REG1.BF.CLI_ARGS_LANE_31_0_b1
#define lnx_CLI_ARGS_LANE_31_0_b2  CLI_REG1.BF.CLI_ARGS_LANE_31_0_b2
#define lnx_CLI_ARGS_LANE_31_0_b3  CLI_REG1.BF.CLI_ARGS_LANE_31_0_b3

// 0x0070	MCU_COMMAND0_LANE		Lane MCU Command Register 0
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
__xdata __at( 0x6070 ) volatile MCU_COMMAND0_LANE_t MCU_COMMAND0_LANE;
#define lnx_MCU_COMMAND0_LANE_31_0_b0  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b0
#define lnx_MCU_COMMAND0_LANE_31_0_b1  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b1
#define lnx_MCU_COMMAND0_LANE_31_0_b2  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b2
#define lnx_MCU_COMMAND0_LANE_31_0_b3  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b3

// 0x0074	PLL_TS_CAL_CTRL_LANE		Calibration Control Lane 7
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
__xdata __at( 0x6074 ) volatile PLL_TS_CAL_CTRL_LANE_t PLL_TS_CAL_CTRL_LANE;
#define lnx_PLL_TS_SPEED_THRESH_LANE_15_0_b0  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_SPEED_THRESH_LANE_15_0_b0
#define lnx_PLL_TS_SPEED_THRESH_LANE_15_0_b1  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_SPEED_THRESH_LANE_15_0_b1
#define lnx_PLL_TS_VCO_AMP_VTH_LOW_LANE_3_0  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_VCO_AMP_VTH_LOW_LANE_3_0
#define lnx_PLL_TS_VCO_AMP_VTH_MID_LANE_3_0  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_VCO_AMP_VTH_MID_LANE_3_0
#define lnx_PLL_TS_VCO_AMP_VTH_HIGH_LANE_3_0  PLL_TS_CAL_CTRL_LANE.BF.PLL_TS_VCO_AMP_VTH_HIGH_LANE_3_0
#define lnx_PLL_TS_SPEED_THRESH_LANE_15_0  PLL_TS_CAL_CTRL_LANE.WT.W0

// 0x0078	ESM_REG0		ESM Register 0
typedef union {
	struct {
		uint8_t ESM_LPNUM_LANE_15_0_b0                   : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t ESM_LPNUM_LANE_15_0_b1                   : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t ESM_PHASE_LANE_10_0_b0                   : 8;	/*[26:16]     r/w 11'h0*/
		uint8_t ESM_PHASE_LANE_10_0_b1                   : 3;	/*[26:16]     r/w 11'h0*/
		uint8_t ESM_PHASE_RESERVED_LANE_4_0              : 5;	/*[31:27]     r/w 5'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} ESM_REG0_t;
__xdata __at( 0x6078 ) volatile ESM_REG0_t ESM_REG0;
#define lnx_ESM_LPNUM_LANE_15_0_b0  ESM_REG0.BF.ESM_LPNUM_LANE_15_0_b0
#define lnx_ESM_LPNUM_LANE_15_0_b1  ESM_REG0.BF.ESM_LPNUM_LANE_15_0_b1
#define lnx_ESM_PHASE_LANE_10_0_b0  ESM_REG0.BF.ESM_PHASE_LANE_10_0_b0
#define lnx_ESM_PHASE_LANE_10_0_b1  ESM_REG0.BF.ESM_PHASE_LANE_10_0_b1
#define lnx_ESM_PHASE_RESERVED_LANE_4_0  ESM_REG0.BF.ESM_PHASE_RESERVED_LANE_4_0
#define lnx_ESM_LPNUM_LANE_15_0  ESM_REG0.WT.W0

// 0x007c	SYSTEM_CONFIG_0		
typedef union {
	struct {
		uint8_t MCU_CTRL_PLL_LANE_1_0                    : 2;	/*  [1:0]     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t PLL_SEL_LANE_1_0                         : 2;	/*  [9:8]     r/w   0*/
		uint8_t PLL_TSRS_SWITCH_XDAT_LANE                : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t FN2_THRE_LANE_7_0                        : 8;	/*[23:16]     r/w   0*/
		uint8_t FN1_THRE_LANE_7_0                        : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SYSTEM_CONFIG_0_t;
__xdata __at( 0x607c ) volatile SYSTEM_CONFIG_0_t SYSTEM_CONFIG_0;
#define lnx_MCU_CTRL_PLL_LANE_1_0  SYSTEM_CONFIG_0.BF.MCU_CTRL_PLL_LANE_1_0
#define lnx_PLL_SEL_LANE_1_0  SYSTEM_CONFIG_0.BF.PLL_SEL_LANE_1_0
#define lnx_PLL_TSRS_SWITCH_XDAT_LANE  SYSTEM_CONFIG_0.BF.PLL_TSRS_SWITCH_XDAT_LANE
#define lnx_FN2_THRE_LANE_7_0  SYSTEM_CONFIG_0.BF.FN2_THRE_LANE_7_0
#define lnx_FN1_THRE_LANE_7_0  SYSTEM_CONFIG_0.BF.FN1_THRE_LANE_7_0

// 0x0080	TRAIN_CONTROL_3		
typedef union {
	struct {
		uint8_t TRAIN_F1_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_F2_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_F0X_LANE_7_0                       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TX_PLL_RATE_INDEX_LANE_7_0               : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_3_t;
__xdata __at( 0x6080 ) volatile TRAIN_CONTROL_3_t TRAIN_CONTROL_3;
#define lnx_TRAIN_F1_LANE_7_0  TRAIN_CONTROL_3.BF.TRAIN_F1_LANE_7_0
#define lnx_TRAIN_F2_LANE_7_0  TRAIN_CONTROL_3.BF.TRAIN_F2_LANE_7_0
#define lnx_TRAIN_F0X_LANE_7_0  TRAIN_CONTROL_3.BF.TRAIN_F0X_LANE_7_0
#define lnx_TX_PLL_RATE_INDEX_LANE_7_0  TRAIN_CONTROL_3.BF.TX_PLL_RATE_INDEX_LANE_7_0

// 0x0084	TRAIN_CONTROL_4		
typedef union {
	struct {
		uint8_t TRAIN_FN1_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_F7_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_F6_LANE_7_0                        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_F5_LANE_7_0                        : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_4_t;
__xdata __at( 0x6084 ) volatile TRAIN_CONTROL_4_t TRAIN_CONTROL_4;
#define lnx_TRAIN_FN1_LANE_7_0  TRAIN_CONTROL_4.BF.TRAIN_FN1_LANE_7_0
#define lnx_TRAIN_F7_LANE_7_0  TRAIN_CONTROL_4.BF.TRAIN_F7_LANE_7_0
#define lnx_TRAIN_F6_LANE_7_0  TRAIN_CONTROL_4.BF.TRAIN_F6_LANE_7_0
#define lnx_TRAIN_F5_LANE_7_0  TRAIN_CONTROL_4.BF.TRAIN_F5_LANE_7_0

// 0x008c	TRAIN_CONTROL_5		
typedef union {
	struct {
		uint8_t TRAIN_DONE_LANE                          : 1;	/*      0     r/w 1'h0*/
		uint8_t TRAIN_PASS_LANE                          : 1;	/*      1     r/w 1'h0*/
		uint8_t TX_RESET_LANE                            : 1;	/*      2     r/w 1'h0*/
		uint8_t EYE_CHECK_PASS_LANE                      : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t G0_INDEX_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t G1_INDEX_LANE_7_0                        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t GN1_INDEX_LANE_7_0                       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_5_t;
__xdata __at( 0x608c ) volatile TRAIN_CONTROL_5_t TRAIN_CONTROL_5;
#define lnx_TRAIN_DONE_LANE  TRAIN_CONTROL_5.BF.TRAIN_DONE_LANE
#define lnx_TRAIN_PASS_LANE  TRAIN_CONTROL_5.BF.TRAIN_PASS_LANE
#define lnx_TX_RESET_LANE  TRAIN_CONTROL_5.BF.TX_RESET_LANE
#define lnx_EYE_CHECK_PASS_LANE  TRAIN_CONTROL_5.BF.EYE_CHECK_PASS_LANE
#define lnx_G0_INDEX_LANE_7_0  TRAIN_CONTROL_5.BF.G0_INDEX_LANE_7_0
#define lnx_G1_INDEX_LANE_7_0  TRAIN_CONTROL_5.BF.G1_INDEX_LANE_7_0
#define lnx_GN1_INDEX_LANE_7_0  TRAIN_CONTROL_5.BF.GN1_INDEX_LANE_7_0

// 0x0090	TRAIN_CONTROL_6		
typedef union {
	struct {
		uint8_t GN2_INDEX_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_F4_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_F3_LANE_7_0                        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_FN2_LANE_7_0                       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_6_t;
__xdata __at( 0x6090 ) volatile TRAIN_CONTROL_6_t TRAIN_CONTROL_6;
#define lnx_GN2_INDEX_LANE_7_0  TRAIN_CONTROL_6.BF.GN2_INDEX_LANE_7_0
#define lnx_TRAIN_F4_LANE_7_0  TRAIN_CONTROL_6.BF.TRAIN_F4_LANE_7_0
#define lnx_TRAIN_F3_LANE_7_0  TRAIN_CONTROL_6.BF.TRAIN_F3_LANE_7_0
#define lnx_TRAIN_FN2_LANE_7_0  TRAIN_CONTROL_6.BF.TRAIN_FN2_LANE_7_0

// 0x0094	RL2_CONTROL_0		
typedef union {
	struct {
		uint8_t RL2_TEMP_DELTA_THRS_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h7*/
		uint8_t INI_RL2_TRAIN_LANE_2_0                   : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t TRAIN_RL2_TUNE_LANE_2_0                  : 3;	/*[13:11]       r 3'h0*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w   0*/
		uint8_t RL2_ADAPT_EN_LANE                        : 1;	/*     15     r/w   0*/
		uint8_t RL2_ADAPT_TIME_LANE_15_0_b0              : 8;	/*[31:16]     r/w 16'hc8*/
		uint8_t RL2_ADAPT_TIME_LANE_15_0_b1              : 8;	/*[31:16]     r/w 16'hc8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RL2_CONTROL_0_t;
__xdata __at( 0x6094 ) volatile RL2_CONTROL_0_t RL2_CONTROL_0;
#define lnx_RL2_TEMP_DELTA_THRS_LANE_7_0  RL2_CONTROL_0.BF.RL2_TEMP_DELTA_THRS_LANE_7_0
#define lnx_INI_RL2_TRAIN_LANE_2_0  RL2_CONTROL_0.BF.INI_RL2_TRAIN_LANE_2_0
#define lnx_TRAIN_RL2_TUNE_LANE_2_0  RL2_CONTROL_0.BF.TRAIN_RL2_TUNE_LANE_2_0
#define lnx_RL2_ADAPT_EN_LANE  RL2_CONTROL_0.BF.RL2_ADAPT_EN_LANE
#define lnx_RL2_ADAPT_TIME_LANE_15_0_b0  RL2_CONTROL_0.BF.RL2_ADAPT_TIME_LANE_15_0_b0
#define lnx_RL2_ADAPT_TIME_LANE_15_0_b1  RL2_CONTROL_0.BF.RL2_ADAPT_TIME_LANE_15_0_b1
#define lnx_RL2_ADAPT_TIME_LANE_15_0  RL2_CONTROL_0.WT.W1

// 0x0098	RL2_CONTROL_1		
typedef union {
	struct {
		uint8_t NORM_RL2_TUNE_LANE_2_0                   : 3;	/*  [2:0]       r 3'h0*/
		uint8_t TRAIN_LEVEL_LANE_2_0                     : 3;	/*  [5:3]       r 3'h0*/
		uint8_t CTRL_CDR_PHASE_ON_LANE                   : 1;	/*      6       r   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t TRAIN_DBG_STEP_LANE_7_0                  : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_BOOST_LANE_15_0_b0                 : 8;	/*[31:16]       r 16'h0*/
		uint8_t TRAIN_BOOST_LANE_15_0_b1                 : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RL2_CONTROL_1_t;
__xdata __at( 0x6098 ) volatile RL2_CONTROL_1_t RL2_CONTROL_1;
#define lnx_NORM_RL2_TUNE_LANE_2_0  RL2_CONTROL_1.BF.NORM_RL2_TUNE_LANE_2_0
#define lnx_TRAIN_LEVEL_LANE_2_0  RL2_CONTROL_1.BF.TRAIN_LEVEL_LANE_2_0
#define lnx_CTRL_CDR_PHASE_ON_LANE  RL2_CONTROL_1.BF.CTRL_CDR_PHASE_ON_LANE
#define lnx_TRAIN_DBG_STEP_LANE_7_0  RL2_CONTROL_1.BF.TRAIN_DBG_STEP_LANE_7_0
#define lnx_TRAIN_BOOST_LANE_15_0_b0  RL2_CONTROL_1.BF.TRAIN_BOOST_LANE_15_0_b0
#define lnx_TRAIN_BOOST_LANE_15_0_b1  RL2_CONTROL_1.BF.TRAIN_BOOST_LANE_15_0_b1
#define lnx_TRAIN_BOOST_LANE_15_0  RL2_CONTROL_1.WT.W1

// 0x009c	TRAIN_CONTROL_8		
typedef union {
	struct {
		uint8_t PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b0      : 8;	/* [15:0]     r/w 16'h3e8*/
		uint8_t PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b1      : 8;	/* [15:0]     r/w 16'h3e8*/
		uint8_t RESERVED_16                              : 1;	/*     16     r/w   0*/
		uint8_t TX_TRAIN_CODING_MODE_LANE                : 1;	/*     17     r/w   1*/
		uint8_t RESERVED_18                              : 6;	/*[31:18]     r/w 14'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:18]     r/w 14'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRAIN_CONTROL_8_t;
__xdata __at( 0x609c ) volatile TRAIN_CONTROL_8_t TRAIN_CONTROL_8;
#define lnx_PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b0  TRAIN_CONTROL_8.BF.PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b0
#define lnx_PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b1  TRAIN_CONTROL_8.BF.PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b1
#define lnx_TX_TRAIN_CODING_MODE_LANE  TRAIN_CONTROL_8.BF.TX_TRAIN_CODING_MODE_LANE
#define lnx_PT_OUT_TIME_TRAIN_COMP_LANE_15_0  TRAIN_CONTROL_8.WT.W0

// 0x00a0	DFE_POWER_SAVING		
typedef union {
	struct {
		uint8_t DFE_POWER_SAVING_TEMP_DFE_ON_TIME_LANE_7_0 : 8;	/*  [7:0]     r/w 8'hff*/
		uint8_t DFE_POWER_SAVING_CLKOFF_TIME_LANE_7_0    : 8;	/* [15:8]     r/w 8'h00*/
		uint8_t DFE_POWER_SAVING_TEMP_PREVIOUS_LANE_7_0  : 8;	/*[23:16]       r 8'h00*/
		uint8_t DFE_POWER_SAVING_TEMP_DELTA_LANE_5_0     : 6;	/*[29:24]     r/w 6'h00*/
		uint8_t DFE_POWER_SAVING_TEMP_CHANGED_FLAG_LANE  : 1;	/*     30       r   0*/
		uint8_t DFE_POWER_SAVING_DFE_OFF_FLAG_LANE       : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_POWER_SAVING_t;
__xdata __at( 0x60a0 ) volatile DFE_POWER_SAVING_t DFE_POWER_SAVING;
#define lnx_DFE_POWER_SAVING_TEMP_DFE_ON_TIME_LANE_7_0  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_TEMP_DFE_ON_TIME_LANE_7_0
#define lnx_DFE_POWER_SAVING_CLKOFF_TIME_LANE_7_0  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_CLKOFF_TIME_LANE_7_0
#define lnx_DFE_POWER_SAVING_TEMP_PREVIOUS_LANE_7_0  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_TEMP_PREVIOUS_LANE_7_0
#define lnx_DFE_POWER_SAVING_TEMP_DELTA_LANE_5_0  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_TEMP_DELTA_LANE_5_0
#define lnx_DFE_POWER_SAVING_TEMP_CHANGED_FLAG_LANE  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_TEMP_CHANGED_FLAG_LANE
#define lnx_DFE_POWER_SAVING_DFE_OFF_FLAG_LANE  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_DFE_OFF_FLAG_LANE

// 0x00a4	ESM_REG1		ESM Register 1
typedef union {
	struct {
		uint8_t ESM_ESTIMATED_WIDTH_LANE_15_0_b0         : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t ESM_ESTIMATED_WIDTH_LANE_15_0_b1         : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t ESM_DEBUG_LANE_15_0_b0                   : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t ESM_DEBUG_LANE_15_0_b1                   : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} ESM_REG1_t;
__xdata __at( 0x60a4 ) volatile ESM_REG1_t ESM_REG1;
#define lnx_ESM_ESTIMATED_WIDTH_LANE_15_0_b0  ESM_REG1.BF.ESM_ESTIMATED_WIDTH_LANE_15_0_b0
#define lnx_ESM_ESTIMATED_WIDTH_LANE_15_0_b1  ESM_REG1.BF.ESM_ESTIMATED_WIDTH_LANE_15_0_b1
#define lnx_ESM_DEBUG_LANE_15_0_b0  ESM_REG1.BF.ESM_DEBUG_LANE_15_0_b0
#define lnx_ESM_DEBUG_LANE_15_0_b1  ESM_REG1.BF.ESM_DEBUG_LANE_15_0_b1
#define lnx_ESM_ESTIMATED_WIDTH_LANE_15_0  ESM_REG1.WT.W0
#define lnx_ESM_DEBUG_LANE_15_0  ESM_REG1.WT.W1

// 0x00a8	TRAIN_DEBUG_0		
typedef union {
	struct {
		uint8_t SPEED_CHANGE_DEBUG0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_VREF_TOP_LANE_7_0                  : 8;	/* [15:8]       r 8'h0*/
		uint8_t TRAIN_VREF_BOT_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t TRAIN_DBG_STEP_MODE_LANE_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_DEBUG_0_t;
__xdata __at( 0x60a8 ) volatile TRAIN_DEBUG_0_t TRAIN_DEBUG_0;
#define lnx_SPEED_CHANGE_DEBUG0_LANE_7_0  TRAIN_DEBUG_0.BF.SPEED_CHANGE_DEBUG0_LANE_7_0
#define lnx_TRAIN_VREF_TOP_LANE_7_0  TRAIN_DEBUG_0.BF.TRAIN_VREF_TOP_LANE_7_0
#define lnx_TRAIN_VREF_BOT_LANE_7_0  TRAIN_DEBUG_0.BF.TRAIN_VREF_BOT_LANE_7_0
#define lnx_TRAIN_DBG_STEP_MODE_LANE_7_0  TRAIN_DEBUG_0.BF.TRAIN_DBG_STEP_MODE_LANE_7_0

// 0x00ac	CAL_TIME_0		
typedef union {
	struct {
		uint8_t CAL_TIME_LANE_31_0_b0                    : 8;	/* [31:0]       r 32'h0*/
		uint8_t CAL_TIME_LANE_31_0_b1                    : 8;	/* [31:0]       r 32'h0*/
		uint8_t CAL_TIME_LANE_31_0_b2                    : 8;	/* [31:0]       r 32'h0*/
		uint8_t CAL_TIME_LANE_31_0_b3                    : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_TIME_0_t;
__xdata __at( 0x60ac ) volatile CAL_TIME_0_t CAL_TIME_0;
#define lnx_CAL_TIME_LANE_31_0_b0  CAL_TIME_0.BF.CAL_TIME_LANE_31_0_b0
#define lnx_CAL_TIME_LANE_31_0_b1  CAL_TIME_0.BF.CAL_TIME_LANE_31_0_b1
#define lnx_CAL_TIME_LANE_31_0_b2  CAL_TIME_0.BF.CAL_TIME_LANE_31_0_b2
#define lnx_CAL_TIME_LANE_31_0_b3  CAL_TIME_0.BF.CAL_TIME_LANE_31_0_b3

// 0x00b0	CAL_TIME_1		
typedef union {
	struct {
		uint8_t RS_PLL_CAL_TIME_LANE_15_0_b0             : 8;	/* [15:0]       r 16'h0*/
		uint8_t RS_PLL_CAL_TIME_LANE_15_0_b1             : 8;	/* [15:0]       r 16'h0*/
		uint8_t TS_PLL_CAL_TIME_LANE_15_0_b0             : 8;	/*[31:16]       r 16'h0*/
		uint8_t TS_PLL_CAL_TIME_LANE_15_0_b1             : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_TIME_1_t;
__xdata __at( 0x60b0 ) volatile CAL_TIME_1_t CAL_TIME_1;
#define lnx_RS_PLL_CAL_TIME_LANE_15_0_b0  CAL_TIME_1.BF.RS_PLL_CAL_TIME_LANE_15_0_b0
#define lnx_RS_PLL_CAL_TIME_LANE_15_0_b1  CAL_TIME_1.BF.RS_PLL_CAL_TIME_LANE_15_0_b1
#define lnx_TS_PLL_CAL_TIME_LANE_15_0_b0  CAL_TIME_1.BF.TS_PLL_CAL_TIME_LANE_15_0_b0
#define lnx_TS_PLL_CAL_TIME_LANE_15_0_b1  CAL_TIME_1.BF.TS_PLL_CAL_TIME_LANE_15_0_b1
#define lnx_RS_PLL_CAL_TIME_LANE_15_0  CAL_TIME_1.WT.W0
#define lnx_TS_PLL_CAL_TIME_LANE_15_0  CAL_TIME_1.WT.W1

// 0x00b4	CAL_TIME_2		
typedef union {
	struct {
		uint8_t RS_PLL_DCC_CAL_TIME_LANE_15_0_b0         : 8;	/* [15:0]       r 16'h0*/
		uint8_t RS_PLL_DCC_CAL_TIME_LANE_15_0_b1         : 8;	/* [15:0]       r 16'h0*/
		uint8_t TS_PLL_DCC_CAL_TIME_LANE_15_0_b0         : 8;	/*[31:16]       r 16'h0*/
		uint8_t TS_PLL_DCC_CAL_TIME_LANE_15_0_b1         : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_TIME_2_t;
__xdata __at( 0x60b4 ) volatile CAL_TIME_2_t CAL_TIME_2;
#define lnx_RS_PLL_DCC_CAL_TIME_LANE_15_0_b0  CAL_TIME_2.BF.RS_PLL_DCC_CAL_TIME_LANE_15_0_b0
#define lnx_RS_PLL_DCC_CAL_TIME_LANE_15_0_b1  CAL_TIME_2.BF.RS_PLL_DCC_CAL_TIME_LANE_15_0_b1
#define lnx_TS_PLL_DCC_CAL_TIME_LANE_15_0_b0  CAL_TIME_2.BF.TS_PLL_DCC_CAL_TIME_LANE_15_0_b0
#define lnx_TS_PLL_DCC_CAL_TIME_LANE_15_0_b1  CAL_TIME_2.BF.TS_PLL_DCC_CAL_TIME_LANE_15_0_b1
#define lnx_RS_PLL_DCC_CAL_TIME_LANE_15_0  CAL_TIME_2.WT.W0
#define lnx_TS_PLL_DCC_CAL_TIME_LANE_15_0  CAL_TIME_2.WT.W1

// 0x00b8	CAL_TIME_3		
typedef union {
	struct {
		uint8_t TX_DCC_CAL_TIME_LANE_15_0_b0             : 8;	/* [15:0]       r 16'h0*/
		uint8_t TX_DCC_CAL_TIME_LANE_15_0_b1             : 8;	/* [15:0]       r 16'h0*/
		uint8_t VDD_CAL_TIME_LANE_15_0_b0                : 8;	/*[31:16]       r 16'h0*/
		uint8_t VDD_CAL_TIME_LANE_15_0_b1                : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_TIME_3_t;
__xdata __at( 0x60b8 ) volatile CAL_TIME_3_t CAL_TIME_3;
#define lnx_TX_DCC_CAL_TIME_LANE_15_0_b0  CAL_TIME_3.BF.TX_DCC_CAL_TIME_LANE_15_0_b0
#define lnx_TX_DCC_CAL_TIME_LANE_15_0_b1  CAL_TIME_3.BF.TX_DCC_CAL_TIME_LANE_15_0_b1
#define lnx_VDD_CAL_TIME_LANE_15_0_b0  CAL_TIME_3.BF.VDD_CAL_TIME_LANE_15_0_b0
#define lnx_VDD_CAL_TIME_LANE_15_0_b1  CAL_TIME_3.BF.VDD_CAL_TIME_LANE_15_0_b1
#define lnx_TX_DCC_CAL_TIME_LANE_15_0  CAL_TIME_3.WT.W0
#define lnx_VDD_CAL_TIME_LANE_15_0  CAL_TIME_3.WT.W1

// 0x00bc	CAL_TIME_4		
typedef union {
	struct {
		uint8_t RX_EOM_CAL_TIME_LANE_15_0_b0             : 8;	/* [15:0]       r 16'h0*/
		uint8_t RX_EOM_CAL_TIME_LANE_15_0_b1             : 8;	/* [15:0]       r 16'h0*/
		uint8_t RX_CLK_CAL_TIME_LANE_15_0_b0             : 8;	/*[31:16]       r 16'h0*/
		uint8_t RX_CLK_CAL_TIME_LANE_15_0_b1             : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_TIME_4_t;
__xdata __at( 0x60bc ) volatile CAL_TIME_4_t CAL_TIME_4;
#define lnx_RX_EOM_CAL_TIME_LANE_15_0_b0  CAL_TIME_4.BF.RX_EOM_CAL_TIME_LANE_15_0_b0
#define lnx_RX_EOM_CAL_TIME_LANE_15_0_b1  CAL_TIME_4.BF.RX_EOM_CAL_TIME_LANE_15_0_b1
#define lnx_RX_CLK_CAL_TIME_LANE_15_0_b0  CAL_TIME_4.BF.RX_CLK_CAL_TIME_LANE_15_0_b0
#define lnx_RX_CLK_CAL_TIME_LANE_15_0_b1  CAL_TIME_4.BF.RX_CLK_CAL_TIME_LANE_15_0_b1
#define lnx_RX_EOM_CAL_TIME_LANE_15_0  CAL_TIME_4.WT.W0
#define lnx_RX_CLK_CAL_TIME_LANE_15_0  CAL_TIME_4.WT.W1

// 0x00c0	CAL_TIME_5		
typedef union {
	struct {
		uint8_t RX_SAMPLER_CAL_TIME_LANE_15_0_b0         : 8;	/* [15:0]       r 16'h0*/
		uint8_t RX_SAMPLER_CAL_TIME_LANE_15_0_b1         : 8;	/* [15:0]       r 16'h0*/
		uint8_t TX_IMP_CAL_TIME_LANE_15_0_b0             : 8;	/*[31:16]       r 16'h0*/
		uint8_t TX_IMP_CAL_TIME_LANE_15_0_b1             : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_TIME_5_t;
__xdata __at( 0x60c0 ) volatile CAL_TIME_5_t CAL_TIME_5;
#define lnx_RX_SAMPLER_CAL_TIME_LANE_15_0_b0  CAL_TIME_5.BF.RX_SAMPLER_CAL_TIME_LANE_15_0_b0
#define lnx_RX_SAMPLER_CAL_TIME_LANE_15_0_b1  CAL_TIME_5.BF.RX_SAMPLER_CAL_TIME_LANE_15_0_b1
#define lnx_TX_IMP_CAL_TIME_LANE_15_0_b0  CAL_TIME_5.BF.TX_IMP_CAL_TIME_LANE_15_0_b0
#define lnx_TX_IMP_CAL_TIME_LANE_15_0_b1  CAL_TIME_5.BF.TX_IMP_CAL_TIME_LANE_15_0_b1
#define lnx_RX_SAMPLER_CAL_TIME_LANE_15_0  CAL_TIME_5.WT.W0
#define lnx_TX_IMP_CAL_TIME_LANE_15_0  CAL_TIME_5.WT.W1

// 0x00c4	CAL_TIME_6		
typedef union {
	struct {
		uint8_t RX_SQ_THRESH_CAL_TIME_LANE_15_0_b0       : 8;	/* [15:0]       r 16'h0*/
		uint8_t RX_SQ_THRESH_CAL_TIME_LANE_15_0_b1       : 8;	/* [15:0]       r 16'h0*/
		uint8_t RX_SQ_OFST_CAL_TIME_LANE_15_0_b0         : 8;	/*[31:16]       r 16'h0*/
		uint8_t RX_SQ_OFST_CAL_TIME_LANE_15_0_b1         : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_TIME_6_t;
__xdata __at( 0x60c4 ) volatile CAL_TIME_6_t CAL_TIME_6;
#define lnx_RX_SQ_THRESH_CAL_TIME_LANE_15_0_b0  CAL_TIME_6.BF.RX_SQ_THRESH_CAL_TIME_LANE_15_0_b0
#define lnx_RX_SQ_THRESH_CAL_TIME_LANE_15_0_b1  CAL_TIME_6.BF.RX_SQ_THRESH_CAL_TIME_LANE_15_0_b1
#define lnx_RX_SQ_OFST_CAL_TIME_LANE_15_0_b0  CAL_TIME_6.BF.RX_SQ_OFST_CAL_TIME_LANE_15_0_b0
#define lnx_RX_SQ_OFST_CAL_TIME_LANE_15_0_b1  CAL_TIME_6.BF.RX_SQ_OFST_CAL_TIME_LANE_15_0_b1
#define lnx_RX_SQ_THRESH_CAL_TIME_LANE_15_0  CAL_TIME_6.WT.W0
#define lnx_RX_SQ_OFST_CAL_TIME_LANE_15_0  CAL_TIME_6.WT.W1

// 0x00c8	CAL_TIME_7		
typedef union {
	struct {
		uint8_t PLL_RS_VDDA_CAL_TIME_LANE_15_0_b0        : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_RS_VDDA_CAL_TIME_LANE_15_0_b1        : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RX_IMP_CAL_TIME_LANE_15_0_b0             : 8;	/*[31:16]       r 16'h0*/
		uint8_t RX_IMP_CAL_TIME_LANE_15_0_b1             : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_TIME_7_t;
__xdata __at( 0x60c8 ) volatile CAL_TIME_7_t CAL_TIME_7;
#define lnx_PLL_RS_VDDA_CAL_TIME_LANE_15_0_b0  CAL_TIME_7.BF.PLL_RS_VDDA_CAL_TIME_LANE_15_0_b0
#define lnx_PLL_RS_VDDA_CAL_TIME_LANE_15_0_b1  CAL_TIME_7.BF.PLL_RS_VDDA_CAL_TIME_LANE_15_0_b1
#define lnx_RX_IMP_CAL_TIME_LANE_15_0_b0  CAL_TIME_7.BF.RX_IMP_CAL_TIME_LANE_15_0_b0
#define lnx_RX_IMP_CAL_TIME_LANE_15_0_b1  CAL_TIME_7.BF.RX_IMP_CAL_TIME_LANE_15_0_b1
#define lnx_PLL_RS_VDDA_CAL_TIME_LANE_15_0  CAL_TIME_7.WT.W0
#define lnx_RX_IMP_CAL_TIME_LANE_15_0  CAL_TIME_7.WT.W1

// 0x00cc	TRAIN_DEBUG_1		
typedef union {
	struct {
		uint8_t TRAIN_DEBUG0_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG1_LANE_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG2_LANE_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG3_LANE_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_DEBUG_1_t;
__xdata __at( 0x60cc ) volatile TRAIN_DEBUG_1_t TRAIN_DEBUG_1;
#define lnx_TRAIN_DEBUG0_LANE_7_0  TRAIN_DEBUG_1.BF.TRAIN_DEBUG0_LANE_7_0
#define lnx_TRAIN_DEBUG1_LANE_7_0  TRAIN_DEBUG_1.BF.TRAIN_DEBUG1_LANE_7_0
#define lnx_TRAIN_DEBUG2_LANE_7_0  TRAIN_DEBUG_1.BF.TRAIN_DEBUG2_LANE_7_0
#define lnx_TRAIN_DEBUG3_LANE_7_0  TRAIN_DEBUG_1.BF.TRAIN_DEBUG3_LANE_7_0

// 0x00d0	CALIBRATION_DEBUG_0		
typedef union {
	struct {
		uint8_t CALIBRATION_DEBUG0_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CALIBRATION_DEBUG1_LANE_7_0              : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CALIBRATION_DEBUG2_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CALIBRATION_DEBUG3_LANE_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CALIBRATION_DEBUG_0_t;
__xdata __at( 0x60d0 ) volatile CALIBRATION_DEBUG_0_t CALIBRATION_DEBUG_0;
#define lnx_CALIBRATION_DEBUG0_LANE_7_0  CALIBRATION_DEBUG_0.BF.CALIBRATION_DEBUG0_LANE_7_0
#define lnx_CALIBRATION_DEBUG1_LANE_7_0  CALIBRATION_DEBUG_0.BF.CALIBRATION_DEBUG1_LANE_7_0
#define lnx_CALIBRATION_DEBUG2_LANE_7_0  CALIBRATION_DEBUG_0.BF.CALIBRATION_DEBUG2_LANE_7_0
#define lnx_CALIBRATION_DEBUG3_LANE_7_0  CALIBRATION_DEBUG_0.BF.CALIBRATION_DEBUG3_LANE_7_0

// 0x00d4	PRBS_DEBUG_0		
typedef union {
	struct {
		uint8_t PRBS_DEBUG0_LANE_7_0                     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PRBS_DEBUG1_LANE_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t PRBS_DEBUG2_LANE_7_0                     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PRBS_DEBUG3_LANE_7_0                     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PRBS_DEBUG_0_t;
__xdata __at( 0x60d4 ) volatile PRBS_DEBUG_0_t PRBS_DEBUG_0;
#define lnx_PRBS_DEBUG0_LANE_7_0  PRBS_DEBUG_0.BF.PRBS_DEBUG0_LANE_7_0
#define lnx_PRBS_DEBUG1_LANE_7_0  PRBS_DEBUG_0.BF.PRBS_DEBUG1_LANE_7_0
#define lnx_PRBS_DEBUG2_LANE_7_0  PRBS_DEBUG_0.BF.PRBS_DEBUG2_LANE_7_0
#define lnx_PRBS_DEBUG3_LANE_7_0  PRBS_DEBUG_0.BF.PRBS_DEBUG3_LANE_7_0

// 0x00d8	MCU_RESERVED_0		
typedef union {
	struct {
		uint8_t MCU_RESERVEDX00_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX01_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX02_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX03_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_RESERVED_0_t;
__xdata __at( 0x60d8 ) volatile MCU_RESERVED_0_t MCU_RESERVED_0;
#define lnx_MCU_RESERVEDX00_LANE_7_0  MCU_RESERVED_0.BF.MCU_RESERVEDX00_LANE_7_0
#define lnx_MCU_RESERVEDX01_LANE_7_0  MCU_RESERVED_0.BF.MCU_RESERVEDX01_LANE_7_0
#define lnx_MCU_RESERVEDX02_LANE_7_0  MCU_RESERVED_0.BF.MCU_RESERVEDX02_LANE_7_0
#define lnx_MCU_RESERVEDX03_LANE_7_0  MCU_RESERVED_0.BF.MCU_RESERVEDX03_LANE_7_0

// 0x00dc	CAL_TIME_8		
typedef union {
	struct {
		uint8_t PLL_TS_VDDA_CAL_TIME_LANE_15_0_b0        : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PLL_TS_VDDA_CAL_TIME_LANE_15_0_b1        : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PROCESS_CAL_TIME_LANE_15_0_b0            : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t PROCESS_CAL_TIME_LANE_15_0_b1            : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_TIME_8_t;
__xdata __at( 0x60dc ) volatile CAL_TIME_8_t CAL_TIME_8;
#define lnx_PLL_TS_VDDA_CAL_TIME_LANE_15_0_b0  CAL_TIME_8.BF.PLL_TS_VDDA_CAL_TIME_LANE_15_0_b0
#define lnx_PLL_TS_VDDA_CAL_TIME_LANE_15_0_b1  CAL_TIME_8.BF.PLL_TS_VDDA_CAL_TIME_LANE_15_0_b1
#define lnx_PROCESS_CAL_TIME_LANE_15_0_b0  CAL_TIME_8.BF.PROCESS_CAL_TIME_LANE_15_0_b0
#define lnx_PROCESS_CAL_TIME_LANE_15_0_b1  CAL_TIME_8.BF.PROCESS_CAL_TIME_LANE_15_0_b1
#define lnx_PLL_TS_VDDA_CAL_TIME_LANE_15_0  CAL_TIME_8.WT.W0
#define lnx_PROCESS_CAL_TIME_LANE_15_0  CAL_TIME_8.WT.W1

// 0x00e0	CLI_DEBUG_0		
typedef union {
	struct {
		uint8_t CLI_DEBUG0_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CLI_DEBUG1_LANE_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CLI_DEBUG2_LANE_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CLI_DEBUG3_LANE_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLI_DEBUG_0_t;
__xdata __at( 0x60e0 ) volatile CLI_DEBUG_0_t CLI_DEBUG_0;
#define lnx_CLI_DEBUG0_LANE_7_0  CLI_DEBUG_0.BF.CLI_DEBUG0_LANE_7_0
#define lnx_CLI_DEBUG1_LANE_7_0  CLI_DEBUG_0.BF.CLI_DEBUG1_LANE_7_0
#define lnx_CLI_DEBUG2_LANE_7_0  CLI_DEBUG_0.BF.CLI_DEBUG2_LANE_7_0
#define lnx_CLI_DEBUG3_LANE_7_0  CLI_DEBUG_0.BF.CLI_DEBUG3_LANE_7_0

// 0x00e4	TRAIN_STEP_0		
typedef union {
	struct {
		uint8_t TRAIN_STEP_EN_LANE_31_0_b0               : 8;	/* [31:0]     r/w 32'h0003ffff*/
		uint8_t TRAIN_STEP_EN_LANE_31_0_b1               : 8;	/* [31:0]     r/w 32'h0003ffff*/
		uint8_t TRAIN_STEP_EN_LANE_31_0_b2               : 8;	/* [31:0]     r/w 32'h0003ffff*/
		uint8_t TRAIN_STEP_EN_LANE_31_0_b3               : 8;	/* [31:0]     r/w 32'h0003ffff*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_STEP_0_t;
__xdata __at( 0x60e4 ) volatile TRAIN_STEP_0_t TRAIN_STEP_0;
#define lnx_TRAIN_STEP_EN_LANE_31_0_b0  TRAIN_STEP_0.BF.TRAIN_STEP_EN_LANE_31_0_b0
#define lnx_TRAIN_STEP_EN_LANE_31_0_b1  TRAIN_STEP_0.BF.TRAIN_STEP_EN_LANE_31_0_b1
#define lnx_TRAIN_STEP_EN_LANE_31_0_b2  TRAIN_STEP_0.BF.TRAIN_STEP_EN_LANE_31_0_b2
#define lnx_TRAIN_STEP_EN_LANE_31_0_b3  TRAIN_STEP_0.BF.TRAIN_STEP_EN_LANE_31_0_b3

// 0x00e8	TRAIN_STATUS_0		
typedef union {
	struct {
		uint8_t TRAIN_ST_LANE_7_0                        : 8;	/*  [7:0]       r 8'h0*/
		uint8_t PH_CONTROL_MODE_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t TRAIN_SUMFTAP_LANE_15_0_b0               : 8;	/*[31:16]       r 16'h0*/
		uint8_t TRAIN_SUMFTAP_LANE_15_0_b1               : 8;	/*[31:16]       r 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRAIN_STATUS_0_t;
__xdata __at( 0x60e8 ) volatile TRAIN_STATUS_0_t TRAIN_STATUS_0;
#define lnx_TRAIN_ST_LANE_7_0  TRAIN_STATUS_0.BF.TRAIN_ST_LANE_7_0
#define lnx_PH_CONTROL_MODE_LANE_7_0  TRAIN_STATUS_0.BF.PH_CONTROL_MODE_LANE_7_0
#define lnx_TRAIN_SUMFTAP_LANE_15_0_b0  TRAIN_STATUS_0.BF.TRAIN_SUMFTAP_LANE_15_0_b0
#define lnx_TRAIN_SUMFTAP_LANE_15_0_b1  TRAIN_STATUS_0.BF.TRAIN_SUMFTAP_LANE_15_0_b1
#define lnx_TRAIN_SUMFTAP_LANE_15_0  TRAIN_STATUS_0.WT.W1

// 0x00ec	TRAIN_PARA_8		
typedef union {
	struct {
		uint8_t DFE_VREF_RES_THRS_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h28*/
		uint8_t DFE_RES_F0A_LOW_THRES_0_INIT_LANE_7_0    : 8;	/* [15:8]     r/w 8'h1e*/
		uint8_t DFE_RES_F0A_LOW_THRES_1_INIT_LANE_7_0    : 8;	/*[23:16]     r/w 8'h0b*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_8_t;
__xdata __at( 0x60ec ) volatile TRAIN_PARA_8_t TRAIN_PARA_8;
#define lnx_DFE_VREF_RES_THRS_LANE_7_0  TRAIN_PARA_8.BF.DFE_VREF_RES_THRS_LANE_7_0
#define lnx_DFE_RES_F0A_LOW_THRES_0_INIT_LANE_7_0  TRAIN_PARA_8.BF.DFE_RES_F0A_LOW_THRES_0_INIT_LANE_7_0
#define lnx_DFE_RES_F0A_LOW_THRES_1_INIT_LANE_7_0  TRAIN_PARA_8.BF.DFE_RES_F0A_LOW_THRES_1_INIT_LANE_7_0

// 0x00f0	TRAIN_PARA_7		
typedef union {
	struct {
		uint8_t DFE_F567_RES_THRS_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h15*/
		uint8_t DFE_F34_RES_THRS_LANE_7_0                : 8;	/* [15:8]     r/w 8'h2c*/
		uint8_t DFE_F2_RES_THRS_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h15*/
		uint8_t DFE_F1_RES_THRS_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h2c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_7_t;
__xdata __at( 0x60f0 ) volatile TRAIN_PARA_7_t TRAIN_PARA_7;
#define lnx_DFE_F567_RES_THRS_LANE_7_0  TRAIN_PARA_7.BF.DFE_F567_RES_THRS_LANE_7_0
#define lnx_DFE_F34_RES_THRS_LANE_7_0  TRAIN_PARA_7.BF.DFE_F34_RES_THRS_LANE_7_0
#define lnx_DFE_F2_RES_THRS_LANE_7_0  TRAIN_PARA_7.BF.DFE_F2_RES_THRS_LANE_7_0
#define lnx_DFE_F1_RES_THRS_LANE_7_0  TRAIN_PARA_7.BF.DFE_F1_RES_THRS_LANE_7_0

// 0x00f4	TRAIN_TIME		
typedef union {
	struct {
		uint8_t TRAIN_TIME_RD_LANE_31_0_b0               : 8;	/* [31:0]       r 32'h0*/
		uint8_t TRAIN_TIME_RD_LANE_31_0_b1               : 8;	/* [31:0]       r 32'h0*/
		uint8_t TRAIN_TIME_RD_LANE_31_0_b2               : 8;	/* [31:0]       r 32'h0*/
		uint8_t TRAIN_TIME_RD_LANE_31_0_b3               : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_TIME_t;
__xdata __at( 0x60f4 ) volatile TRAIN_TIME_t TRAIN_TIME;
#define lnx_TRAIN_TIME_RD_LANE_31_0_b0  TRAIN_TIME.BF.TRAIN_TIME_RD_LANE_31_0_b0
#define lnx_TRAIN_TIME_RD_LANE_31_0_b1  TRAIN_TIME.BF.TRAIN_TIME_RD_LANE_31_0_b1
#define lnx_TRAIN_TIME_RD_LANE_31_0_b2  TRAIN_TIME.BF.TRAIN_TIME_RD_LANE_31_0_b2
#define lnx_TRAIN_TIME_RD_LANE_31_0_b3  TRAIN_TIME.BF.TRAIN_TIME_RD_LANE_31_0_b3

// 0x00f8	TRAIN_PARA_1		
typedef union {
	struct {
		uint8_t DFE_RES_F0A_HIGH_THRES_INIT_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h32*/
		uint8_t DFE_RES_F0A_LOW_THRES_3_INIT_LANE_7_0    : 8;	/* [15:8]     r/w 8'h06*/
		uint8_t DFE_RES_F0A_LOW_THRES_2_INIT_LANE_7_0    : 8;	/*[23:16]     r/w 8'h0a*/
		uint8_t DFE_FX_SUM_SAT_THRES_LANE_7_0            : 8;	/*[31:24]     r/w 8'h3a*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_1_t;
__xdata __at( 0x60f8 ) volatile TRAIN_PARA_1_t TRAIN_PARA_1;
#define lnx_DFE_RES_F0A_HIGH_THRES_INIT_LANE_7_0  TRAIN_PARA_1.BF.DFE_RES_F0A_HIGH_THRES_INIT_LANE_7_0
#define lnx_DFE_RES_F0A_LOW_THRES_3_INIT_LANE_7_0  TRAIN_PARA_1.BF.DFE_RES_F0A_LOW_THRES_3_INIT_LANE_7_0
#define lnx_DFE_RES_F0A_LOW_THRES_2_INIT_LANE_7_0  TRAIN_PARA_1.BF.DFE_RES_F0A_LOW_THRES_2_INIT_LANE_7_0
#define lnx_DFE_FX_SUM_SAT_THRES_LANE_7_0  TRAIN_PARA_1.BF.DFE_FX_SUM_SAT_THRES_LANE_7_0

// 0x00fc	TRAIN_PARA_0		
typedef union {
	struct {
		uint8_t VREF_RES_HIGH_THRES_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h14*/
		uint8_t VREF_RES_LOW_THRES_LANE_7_0              : 8;	/* [15:8]     r/w 8'h28*/
		uint8_t DFE_RES_F0A_HIGH_THRES_INIT_56G_INTERCEPT_LANE_7_0 : 8;	/*[23:16]     r/w 8'h37*/
		uint8_t DFE_RES_F0A_HIGH_THRES_INIT_PAM2_INTERCEPT_LANE_7_0 : 8;	/*[31:24]     r/w 8'h37*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_0_t;
__xdata __at( 0x60fc ) volatile TRAIN_PARA_0_t TRAIN_PARA_0;
#define lnx_VREF_RES_HIGH_THRES_LANE_7_0  TRAIN_PARA_0.BF.VREF_RES_HIGH_THRES_LANE_7_0
#define lnx_VREF_RES_LOW_THRES_LANE_7_0  TRAIN_PARA_0.BF.VREF_RES_LOW_THRES_LANE_7_0
#define lnx_DFE_RES_F0A_HIGH_THRES_INIT_56G_INTERCEPT_LANE_7_0  TRAIN_PARA_0.BF.DFE_RES_F0A_HIGH_THRES_INIT_56G_INTERCEPT_LANE_7_0
#define lnx_DFE_RES_F0A_HIGH_THRES_INIT_PAM2_INTERCEPT_LANE_7_0  TRAIN_PARA_0.BF.DFE_RES_F0A_HIGH_THRES_INIT_PAM2_INTERCEPT_LANE_7_0

// 0x0100	CAL_SAVE0		
typedef union {
	struct {
		uint8_t CAL_TS_LCCAP_MSB_INDEX_RATE0_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TS_LCCAP_MSB_INDEX_RATE1_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TS_LCCAP_MSB_INDEX_RATE2_7_0         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TS_LCCAP_LSB_INDEX_RATE0_7_0         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE0_t;
__xdata __at( 0x6100 ) volatile CAL_SAVE0_t CAL_SAVE0;
#define lnx_CAL_TS_LCCAP_MSB_INDEX_RATE0_7_0  CAL_SAVE0.BF.CAL_TS_LCCAP_MSB_INDEX_RATE0_7_0
#define lnx_CAL_TS_LCCAP_MSB_INDEX_RATE1_7_0  CAL_SAVE0.BF.CAL_TS_LCCAP_MSB_INDEX_RATE1_7_0
#define lnx_CAL_TS_LCCAP_MSB_INDEX_RATE2_7_0  CAL_SAVE0.BF.CAL_TS_LCCAP_MSB_INDEX_RATE2_7_0
#define lnx_CAL_TS_LCCAP_LSB_INDEX_RATE0_7_0  CAL_SAVE0.BF.CAL_TS_LCCAP_LSB_INDEX_RATE0_7_0

// 0x0104	CAL_SAVE1		
typedef union {
	struct {
		uint8_t CAL_TS_LCCAP_LSB_INDEX_RATE1_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TS_LCCAP_LSB_INDEX_RATE2_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TS_LCCAP_ULSB_RATE0_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TS_LCCAP_ULSB_RATE1_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE1_t;
__xdata __at( 0x6104 ) volatile CAL_SAVE1_t CAL_SAVE1;
#define lnx_CAL_TS_LCCAP_LSB_INDEX_RATE1_7_0  CAL_SAVE1.BF.CAL_TS_LCCAP_LSB_INDEX_RATE1_7_0
#define lnx_CAL_TS_LCCAP_LSB_INDEX_RATE2_7_0  CAL_SAVE1.BF.CAL_TS_LCCAP_LSB_INDEX_RATE2_7_0
#define lnx_CAL_TS_LCCAP_ULSB_RATE0_7_0  CAL_SAVE1.BF.CAL_TS_LCCAP_ULSB_RATE0_7_0
#define lnx_CAL_TS_LCCAP_ULSB_RATE1_7_0  CAL_SAVE1.BF.CAL_TS_LCCAP_ULSB_RATE1_7_0

// 0x0108	CAL_SAVE2		
typedef union {
	struct {
		uint8_t CAL_TS_LCCAP_ULSB_RATE2_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TS_PLLAMP_RATE0_7_0                  : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TS_PLLAMP_RATE1_7_0                  : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TS_PLLAMP_RATE2_7_0                  : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE2_t;
__xdata __at( 0x6108 ) volatile CAL_SAVE2_t CAL_SAVE2;
#define lnx_CAL_TS_LCCAP_ULSB_RATE2_7_0  CAL_SAVE2.BF.CAL_TS_LCCAP_ULSB_RATE2_7_0
#define lnx_CAL_TS_PLLAMP_RATE0_7_0  CAL_SAVE2.BF.CAL_TS_PLLAMP_RATE0_7_0
#define lnx_CAL_TS_PLLAMP_RATE1_7_0  CAL_SAVE2.BF.CAL_TS_PLLAMP_RATE1_7_0
#define lnx_CAL_TS_PLLAMP_RATE2_7_0  CAL_SAVE2.BF.CAL_TS_PLLAMP_RATE2_7_0

// 0x010c	CAL_SAVE3		
typedef union {
	struct {
		uint8_t CAL_TS_PLLDCC_RESULT_RATE0_7_0           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TS_PLLDCC_RESULT_RATE1_7_0           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TS_PLLDCC_RESULT_RATE2_7_0           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TS_PLLVDDA_FBDIV_RESULT_RATE0_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE3_t;
__xdata __at( 0x610c ) volatile CAL_SAVE3_t CAL_SAVE3;
#define lnx_CAL_TS_PLLDCC_RESULT_RATE0_7_0  CAL_SAVE3.BF.CAL_TS_PLLDCC_RESULT_RATE0_7_0
#define lnx_CAL_TS_PLLDCC_RESULT_RATE1_7_0  CAL_SAVE3.BF.CAL_TS_PLLDCC_RESULT_RATE1_7_0
#define lnx_CAL_TS_PLLDCC_RESULT_RATE2_7_0  CAL_SAVE3.BF.CAL_TS_PLLDCC_RESULT_RATE2_7_0
#define lnx_CAL_TS_PLLVDDA_FBDIV_RESULT_RATE0_7_0  CAL_SAVE3.BF.CAL_TS_PLLVDDA_FBDIV_RESULT_RATE0_7_0

// 0x0110	CAL_SAVE4		
typedef union {
	struct {
		uint8_t CAL_TS_PLLVDDA_FBDIV_RESULT_RATE1_7_0    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TS_PLLVDDA_FBDIV_RESULT_RATE2_7_0    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TS_PLLVDDA_INTP_RESULT_RATE0_7_0     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TS_PLLVDDA_INTP_RESULT_RATE1_7_0     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE4_t;
__xdata __at( 0x6110 ) volatile CAL_SAVE4_t CAL_SAVE4;
#define lnx_CAL_TS_PLLVDDA_FBDIV_RESULT_RATE1_7_0  CAL_SAVE4.BF.CAL_TS_PLLVDDA_FBDIV_RESULT_RATE1_7_0
#define lnx_CAL_TS_PLLVDDA_FBDIV_RESULT_RATE2_7_0  CAL_SAVE4.BF.CAL_TS_PLLVDDA_FBDIV_RESULT_RATE2_7_0
#define lnx_CAL_TS_PLLVDDA_INTP_RESULT_RATE0_7_0  CAL_SAVE4.BF.CAL_TS_PLLVDDA_INTP_RESULT_RATE0_7_0
#define lnx_CAL_TS_PLLVDDA_INTP_RESULT_RATE1_7_0  CAL_SAVE4.BF.CAL_TS_PLLVDDA_INTP_RESULT_RATE1_7_0

// 0x0114	CAL_SAVE5		
typedef union {
	struct {
		uint8_t CAL_TS_PLLVDDA_INTP_RESULT_RATE2_7_0     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TS_PLLVDDA_PFD_RESULT_RATE0_7_0      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TS_PLLVDDA_PFD_RESULT_RATE1_7_0      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TS_PLLVDDA_PFD_RESULT_RATE2_7_0      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE5_t;
__xdata __at( 0x6114 ) volatile CAL_SAVE5_t CAL_SAVE5;
#define lnx_CAL_TS_PLLVDDA_INTP_RESULT_RATE2_7_0  CAL_SAVE5.BF.CAL_TS_PLLVDDA_INTP_RESULT_RATE2_7_0
#define lnx_CAL_TS_PLLVDDA_PFD_RESULT_RATE0_7_0  CAL_SAVE5.BF.CAL_TS_PLLVDDA_PFD_RESULT_RATE0_7_0
#define lnx_CAL_TS_PLLVDDA_PFD_RESULT_RATE1_7_0  CAL_SAVE5.BF.CAL_TS_PLLVDDA_PFD_RESULT_RATE1_7_0
#define lnx_CAL_TS_PLLVDDA_PFD_RESULT_RATE2_7_0  CAL_SAVE5.BF.CAL_TS_PLLVDDA_PFD_RESULT_RATE2_7_0

// 0x0118	CAL_SAVE6		
typedef union {
	struct {
		uint8_t CAL_RS_LCCAP_MSB_INDEX_RATE0_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RS_LCCAP_MSB_INDEX_RATE1_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RS_LCCAP_MSB_INDEX_RATE2_7_0         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RS_LCCAP_LSB_INDEX_RATE0_7_0         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE6_t;
__xdata __at( 0x6118 ) volatile CAL_SAVE6_t CAL_SAVE6;
#define lnx_CAL_RS_LCCAP_MSB_INDEX_RATE0_7_0  CAL_SAVE6.BF.CAL_RS_LCCAP_MSB_INDEX_RATE0_7_0
#define lnx_CAL_RS_LCCAP_MSB_INDEX_RATE1_7_0  CAL_SAVE6.BF.CAL_RS_LCCAP_MSB_INDEX_RATE1_7_0
#define lnx_CAL_RS_LCCAP_MSB_INDEX_RATE2_7_0  CAL_SAVE6.BF.CAL_RS_LCCAP_MSB_INDEX_RATE2_7_0
#define lnx_CAL_RS_LCCAP_LSB_INDEX_RATE0_7_0  CAL_SAVE6.BF.CAL_RS_LCCAP_LSB_INDEX_RATE0_7_0

// 0x011c	CAL_SAVE7		
typedef union {
	struct {
		uint8_t CAL_RS_LCCAP_LSB_INDEX_RATE1_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RS_LCCAP_LSB_INDEX_RATE2_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RS_LCCAP_ULSB_RATE0_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RS_LCCAP_ULSB_RATE1_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE7_t;
__xdata __at( 0x611c ) volatile CAL_SAVE7_t CAL_SAVE7;
#define lnx_CAL_RS_LCCAP_LSB_INDEX_RATE1_7_0  CAL_SAVE7.BF.CAL_RS_LCCAP_LSB_INDEX_RATE1_7_0
#define lnx_CAL_RS_LCCAP_LSB_INDEX_RATE2_7_0  CAL_SAVE7.BF.CAL_RS_LCCAP_LSB_INDEX_RATE2_7_0
#define lnx_CAL_RS_LCCAP_ULSB_RATE0_7_0  CAL_SAVE7.BF.CAL_RS_LCCAP_ULSB_RATE0_7_0
#define lnx_CAL_RS_LCCAP_ULSB_RATE1_7_0  CAL_SAVE7.BF.CAL_RS_LCCAP_ULSB_RATE1_7_0

// 0x0120	CAL_SAVE8		
typedef union {
	struct {
		uint8_t CAL_RS_LCCAP_ULSB_RATE2_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RS_PLLAMP_RATE0_7_0                  : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RS_PLLAMP_RATE1_7_0                  : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RS_PLLAMP_RATE2_7_0                  : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE8_t;
__xdata __at( 0x6120 ) volatile CAL_SAVE8_t CAL_SAVE8;
#define lnx_CAL_RS_LCCAP_ULSB_RATE2_7_0  CAL_SAVE8.BF.CAL_RS_LCCAP_ULSB_RATE2_7_0
#define lnx_CAL_RS_PLLAMP_RATE0_7_0  CAL_SAVE8.BF.CAL_RS_PLLAMP_RATE0_7_0
#define lnx_CAL_RS_PLLAMP_RATE1_7_0  CAL_SAVE8.BF.CAL_RS_PLLAMP_RATE1_7_0
#define lnx_CAL_RS_PLLAMP_RATE2_7_0  CAL_SAVE8.BF.CAL_RS_PLLAMP_RATE2_7_0

// 0x0124	CAL_SAVE9		
typedef union {
	struct {
		uint8_t CAL_RS_PLLDCC_RESULT_RATE0_7_0           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RS_PLLDCC_RESULT_RATE1_7_0           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RS_PLLDCC_RESULT_RATE2_7_0           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RS_PLLVDDA_FBDIV_RESULT_RATE0_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE9_t;
__xdata __at( 0x6124 ) volatile CAL_SAVE9_t CAL_SAVE9;
#define lnx_CAL_RS_PLLDCC_RESULT_RATE0_7_0  CAL_SAVE9.BF.CAL_RS_PLLDCC_RESULT_RATE0_7_0
#define lnx_CAL_RS_PLLDCC_RESULT_RATE1_7_0  CAL_SAVE9.BF.CAL_RS_PLLDCC_RESULT_RATE1_7_0
#define lnx_CAL_RS_PLLDCC_RESULT_RATE2_7_0  CAL_SAVE9.BF.CAL_RS_PLLDCC_RESULT_RATE2_7_0
#define lnx_CAL_RS_PLLVDDA_FBDIV_RESULT_RATE0_7_0  CAL_SAVE9.BF.CAL_RS_PLLVDDA_FBDIV_RESULT_RATE0_7_0

// 0x0128	CAL_SAVE10		
typedef union {
	struct {
		uint8_t CAL_RS_PLLVDDA_FBDIV_RESULT_RATE1_7_0    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RS_PLLVDDA_FBDIV_RESULT_RATE2_7_0    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RS_PLLVDDA_INTP_RESULT_RATE0_7_0     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RS_PLLVDDA_INTP_RESULT_RATE1_7_0     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE10_t;
__xdata __at( 0x6128 ) volatile CAL_SAVE10_t CAL_SAVE10;
#define lnx_CAL_RS_PLLVDDA_FBDIV_RESULT_RATE1_7_0  CAL_SAVE10.BF.CAL_RS_PLLVDDA_FBDIV_RESULT_RATE1_7_0
#define lnx_CAL_RS_PLLVDDA_FBDIV_RESULT_RATE2_7_0  CAL_SAVE10.BF.CAL_RS_PLLVDDA_FBDIV_RESULT_RATE2_7_0
#define lnx_CAL_RS_PLLVDDA_INTP_RESULT_RATE0_7_0  CAL_SAVE10.BF.CAL_RS_PLLVDDA_INTP_RESULT_RATE0_7_0
#define lnx_CAL_RS_PLLVDDA_INTP_RESULT_RATE1_7_0  CAL_SAVE10.BF.CAL_RS_PLLVDDA_INTP_RESULT_RATE1_7_0

// 0x012c	CAL_SAVE11		
typedef union {
	struct {
		uint8_t CAL_RS_PLLVDDA_INTP_RESULT_RATE2_7_0     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RS_PLLVDDA_PFD_RESULT_RATE0_7_0      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RS_PLLVDDA_PFD_RESULT_RATE1_7_0      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RS_PLLVDDA_PFD_RESULT_RATE2_7_0      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE11_t;
__xdata __at( 0x612c ) volatile CAL_SAVE11_t CAL_SAVE11;
#define lnx_CAL_RS_PLLVDDA_INTP_RESULT_RATE2_7_0  CAL_SAVE11.BF.CAL_RS_PLLVDDA_INTP_RESULT_RATE2_7_0
#define lnx_CAL_RS_PLLVDDA_PFD_RESULT_RATE0_7_0  CAL_SAVE11.BF.CAL_RS_PLLVDDA_PFD_RESULT_RATE0_7_0
#define lnx_CAL_RS_PLLVDDA_PFD_RESULT_RATE1_7_0  CAL_SAVE11.BF.CAL_RS_PLLVDDA_PFD_RESULT_RATE1_7_0
#define lnx_CAL_RS_PLLVDDA_PFD_RESULT_RATE2_7_0  CAL_SAVE11.BF.CAL_RS_PLLVDDA_PFD_RESULT_RATE2_7_0

// 0x0130	CAL_SAVE12		
typedef union {
	struct {
		uint8_t CAL_TX_DCC1_G0_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_DCC1_G1_7_0                       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_DCC1_G2_7_0                       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_DCC1_G3_7_0                       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE12_t;
__xdata __at( 0x6130 ) volatile CAL_SAVE12_t CAL_SAVE12;
#define lnx_CAL_TX_DCC1_G0_7_0  CAL_SAVE12.BF.CAL_TX_DCC1_G0_7_0
#define lnx_CAL_TX_DCC1_G1_7_0  CAL_SAVE12.BF.CAL_TX_DCC1_G1_7_0
#define lnx_CAL_TX_DCC1_G2_7_0  CAL_SAVE12.BF.CAL_TX_DCC1_G2_7_0
#define lnx_CAL_TX_DCC1_G3_7_0  CAL_SAVE12.BF.CAL_TX_DCC1_G3_7_0

// 0x0134	CAL_SAVE13		
typedef union {
	struct {
		uint8_t CAL_TX_DCC1_G4_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_DCC2_G0_7_0                       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_DCC2_G1_7_0                       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_DCC2_G2_7_0                       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE13_t;
__xdata __at( 0x6134 ) volatile CAL_SAVE13_t CAL_SAVE13;
#define lnx_CAL_TX_DCC1_G4_7_0  CAL_SAVE13.BF.CAL_TX_DCC1_G4_7_0
#define lnx_CAL_TX_DCC2_G0_7_0  CAL_SAVE13.BF.CAL_TX_DCC2_G0_7_0
#define lnx_CAL_TX_DCC2_G1_7_0  CAL_SAVE13.BF.CAL_TX_DCC2_G1_7_0
#define lnx_CAL_TX_DCC2_G2_7_0  CAL_SAVE13.BF.CAL_TX_DCC2_G2_7_0

// 0x0138	CAL_SAVE14		
typedef union {
	struct {
		uint8_t CAL_TX_DCC2_G3_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_DCC2_G4_7_0                       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_DCC4_MSB_G0_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_DCC4_MSB_G1_7_0                   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE14_t;
__xdata __at( 0x6138 ) volatile CAL_SAVE14_t CAL_SAVE14;
#define lnx_CAL_TX_DCC2_G3_7_0  CAL_SAVE14.BF.CAL_TX_DCC2_G3_7_0
#define lnx_CAL_TX_DCC2_G4_7_0  CAL_SAVE14.BF.CAL_TX_DCC2_G4_7_0
#define lnx_CAL_TX_DCC4_MSB_G0_7_0  CAL_SAVE14.BF.CAL_TX_DCC4_MSB_G0_7_0
#define lnx_CAL_TX_DCC4_MSB_G1_7_0  CAL_SAVE14.BF.CAL_TX_DCC4_MSB_G1_7_0

// 0x013c	CAL_SAVE15		
typedef union {
	struct {
		uint8_t CAL_TX_DCC4_MSB_G2_7_0                   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_DCC4_MSB_G3_7_0                   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_DCC4_MSB_G4_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_DCC4_LSB_G0_7_0                   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE15_t;
__xdata __at( 0x613c ) volatile CAL_SAVE15_t CAL_SAVE15;
#define lnx_CAL_TX_DCC4_MSB_G2_7_0  CAL_SAVE15.BF.CAL_TX_DCC4_MSB_G2_7_0
#define lnx_CAL_TX_DCC4_MSB_G3_7_0  CAL_SAVE15.BF.CAL_TX_DCC4_MSB_G3_7_0
#define lnx_CAL_TX_DCC4_MSB_G4_7_0  CAL_SAVE15.BF.CAL_TX_DCC4_MSB_G4_7_0
#define lnx_CAL_TX_DCC4_LSB_G0_7_0  CAL_SAVE15.BF.CAL_TX_DCC4_LSB_G0_7_0

// 0x0140	CAL_SAVE16		
typedef union {
	struct {
		uint8_t CAL_TX_DCC4_LSB_G1_7_0                   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_DCC4_LSB_G2_7_0                   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_DCC4_LSB_G3_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_DCC4_LSB_G4_7_0                   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE16_t;
__xdata __at( 0x6140 ) volatile CAL_SAVE16_t CAL_SAVE16;
#define lnx_CAL_TX_DCC4_LSB_G1_7_0  CAL_SAVE16.BF.CAL_TX_DCC4_LSB_G1_7_0
#define lnx_CAL_TX_DCC4_LSB_G2_7_0  CAL_SAVE16.BF.CAL_TX_DCC4_LSB_G2_7_0
#define lnx_CAL_TX_DCC4_LSB_G3_7_0  CAL_SAVE16.BF.CAL_TX_DCC4_LSB_G3_7_0
#define lnx_CAL_TX_DCC4_LSB_G4_7_0  CAL_SAVE16.BF.CAL_TX_DCC4_LSB_G4_7_0

// 0x0144	CAL_SAVE17		
typedef union {
	struct {
		uint8_t CAL_TX_IMP_ICCP_G0_7_0                   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_IMP_ICCP_G1_7_0                   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_IMP_ICCP_G2_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_IMP_ICCP_G3_7_0                   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE17_t;
__xdata __at( 0x6144 ) volatile CAL_SAVE17_t CAL_SAVE17;
#define lnx_CAL_TX_IMP_ICCP_G0_7_0  CAL_SAVE17.BF.CAL_TX_IMP_ICCP_G0_7_0
#define lnx_CAL_TX_IMP_ICCP_G1_7_0  CAL_SAVE17.BF.CAL_TX_IMP_ICCP_G1_7_0
#define lnx_CAL_TX_IMP_ICCP_G2_7_0  CAL_SAVE17.BF.CAL_TX_IMP_ICCP_G2_7_0
#define lnx_CAL_TX_IMP_ICCP_G3_7_0  CAL_SAVE17.BF.CAL_TX_IMP_ICCP_G3_7_0

// 0x0148	CAL_SAVE18		
typedef union {
	struct {
		uint8_t CAL_TX_IMP_ICCP_G4_7_0                   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_IMP_ICCN_G0_7_0                   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TX_IMP_ICCN_G1_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TX_IMP_ICCN_G2_7_0                   : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE18_t;
__xdata __at( 0x6148 ) volatile CAL_SAVE18_t CAL_SAVE18;
#define lnx_CAL_TX_IMP_ICCP_G4_7_0  CAL_SAVE18.BF.CAL_TX_IMP_ICCP_G4_7_0
#define lnx_CAL_TX_IMP_ICCN_G0_7_0  CAL_SAVE18.BF.CAL_TX_IMP_ICCN_G0_7_0
#define lnx_CAL_TX_IMP_ICCN_G1_7_0  CAL_SAVE18.BF.CAL_TX_IMP_ICCN_G1_7_0
#define lnx_CAL_TX_IMP_ICCN_G2_7_0  CAL_SAVE18.BF.CAL_TX_IMP_ICCN_G2_7_0

// 0x014c	CAL_SAVE19		
typedef union {
	struct {
		uint8_t CAL_TX_IMP_ICCN_G3_7_0                   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TX_IMP_ICCN_G4_7_0                   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_E2C_DCC_G0_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_E2C_DCC_G1_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE19_t;
__xdata __at( 0x614c ) volatile CAL_SAVE19_t CAL_SAVE19;
#define lnx_CAL_TX_IMP_ICCN_G3_7_0  CAL_SAVE19.BF.CAL_TX_IMP_ICCN_G3_7_0
#define lnx_CAL_TX_IMP_ICCN_G4_7_0  CAL_SAVE19.BF.CAL_TX_IMP_ICCN_G4_7_0
#define lnx_CAL_RX_E2C_DCC_G0_7_0  CAL_SAVE19.BF.CAL_RX_E2C_DCC_G0_7_0
#define lnx_CAL_RX_E2C_DCC_G1_7_0  CAL_SAVE19.BF.CAL_RX_E2C_DCC_G1_7_0

// 0x0150	CAL_SAVE20		
typedef union {
	struct {
		uint8_t CAL_RX_E2C_DCC_G2_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_E2C_DCC_G3_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_E2C_DCC_G4_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_DLL_MSB_G0_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE20_t;
__xdata __at( 0x6150 ) volatile CAL_SAVE20_t CAL_SAVE20;
#define lnx_CAL_RX_E2C_DCC_G2_7_0  CAL_SAVE20.BF.CAL_RX_E2C_DCC_G2_7_0
#define lnx_CAL_RX_E2C_DCC_G3_7_0  CAL_SAVE20.BF.CAL_RX_E2C_DCC_G3_7_0
#define lnx_CAL_RX_E2C_DCC_G4_7_0  CAL_SAVE20.BF.CAL_RX_E2C_DCC_G4_7_0
#define lnx_CAL_RX_DLL_MSB_G0_7_0  CAL_SAVE20.BF.CAL_RX_DLL_MSB_G0_7_0

// 0x0154	CAL_SAVE21		
typedef union {
	struct {
		uint8_t CAL_RX_DLL_MSB_G1_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_DLL_MSB_G2_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_DLL_MSB_G3_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_DLL_MSB_G4_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE21_t;
__xdata __at( 0x6154 ) volatile CAL_SAVE21_t CAL_SAVE21;
#define lnx_CAL_RX_DLL_MSB_G1_7_0  CAL_SAVE21.BF.CAL_RX_DLL_MSB_G1_7_0
#define lnx_CAL_RX_DLL_MSB_G2_7_0  CAL_SAVE21.BF.CAL_RX_DLL_MSB_G2_7_0
#define lnx_CAL_RX_DLL_MSB_G3_7_0  CAL_SAVE21.BF.CAL_RX_DLL_MSB_G3_7_0
#define lnx_CAL_RX_DLL_MSB_G4_7_0  CAL_SAVE21.BF.CAL_RX_DLL_MSB_G4_7_0

// 0x0158	CAL_SAVE22		
typedef union {
	struct {
		uint8_t CAL_RX_DLL_LSB_G0_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_DLL_LSB_G1_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_DLL_LSB_G2_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_DLL_LSB_G3_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE22_t;
__xdata __at( 0x6158 ) volatile CAL_SAVE22_t CAL_SAVE22;
#define lnx_CAL_RX_DLL_LSB_G0_7_0  CAL_SAVE22.BF.CAL_RX_DLL_LSB_G0_7_0
#define lnx_CAL_RX_DLL_LSB_G1_7_0  CAL_SAVE22.BF.CAL_RX_DLL_LSB_G1_7_0
#define lnx_CAL_RX_DLL_LSB_G2_7_0  CAL_SAVE22.BF.CAL_RX_DLL_LSB_G2_7_0
#define lnx_CAL_RX_DLL_LSB_G3_7_0  CAL_SAVE22.BF.CAL_RX_DLL_LSB_G3_7_0

// 0x015c	CAL_SAVE23		
typedef union {
	struct {
		uint8_t CAL_RX_DLL_LSB_G4_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_PI_DCC_G0_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_PI_DCC_G1_7_0                     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_PI_DCC_G2_7_0                     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE23_t;
__xdata __at( 0x615c ) volatile CAL_SAVE23_t CAL_SAVE23;
#define lnx_CAL_RX_DLL_LSB_G4_7_0  CAL_SAVE23.BF.CAL_RX_DLL_LSB_G4_7_0
#define lnx_CAL_RX_PI_DCC_G0_7_0  CAL_SAVE23.BF.CAL_RX_PI_DCC_G0_7_0
#define lnx_CAL_RX_PI_DCC_G1_7_0  CAL_SAVE23.BF.CAL_RX_PI_DCC_G1_7_0
#define lnx_CAL_RX_PI_DCC_G2_7_0  CAL_SAVE23.BF.CAL_RX_PI_DCC_G2_7_0

// 0x0160	CAL_SAVE24		
typedef union {
	struct {
		uint8_t CAL_RX_PI_DCC_G3_7_0                     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_PI_DCC_G4_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_MSB_G0_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_MSB_G1_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE24_t;
__xdata __at( 0x6160 ) volatile CAL_SAVE24_t CAL_SAVE24;
#define lnx_CAL_RX_PI_DCC_G3_7_0  CAL_SAVE24.BF.CAL_RX_PI_DCC_G3_7_0
#define lnx_CAL_RX_PI_DCC_G4_7_0  CAL_SAVE24.BF.CAL_RX_PI_DCC_G4_7_0
#define lnx_CAL_RX_ALIGN90_MSB_G0_7_0  CAL_SAVE24.BF.CAL_RX_ALIGN90_MSB_G0_7_0
#define lnx_CAL_RX_ALIGN90_MSB_G1_7_0  CAL_SAVE24.BF.CAL_RX_ALIGN90_MSB_G1_7_0

// 0x0164	CAL_SAVE25		
typedef union {
	struct {
		uint8_t CAL_RX_ALIGN90_MSB_G2_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_MSB_G3_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_MSB_G4_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_LSB_G0_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE25_t;
__xdata __at( 0x6164 ) volatile CAL_SAVE25_t CAL_SAVE25;
#define lnx_CAL_RX_ALIGN90_MSB_G2_7_0  CAL_SAVE25.BF.CAL_RX_ALIGN90_MSB_G2_7_0
#define lnx_CAL_RX_ALIGN90_MSB_G3_7_0  CAL_SAVE25.BF.CAL_RX_ALIGN90_MSB_G3_7_0
#define lnx_CAL_RX_ALIGN90_MSB_G4_7_0  CAL_SAVE25.BF.CAL_RX_ALIGN90_MSB_G4_7_0
#define lnx_CAL_RX_ALIGN90_LSB_G0_7_0  CAL_SAVE25.BF.CAL_RX_ALIGN90_LSB_G0_7_0

// 0x0168	CAL_SAVE26		
typedef union {
	struct {
		uint8_t CAL_RX_ALIGN90_LSB_G1_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_1SB_G2_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_1SB_G3_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_ALIGN90_LSB_G4_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE26_t;
__xdata __at( 0x6168 ) volatile CAL_SAVE26_t CAL_SAVE26;
#define lnx_CAL_RX_ALIGN90_LSB_G1_7_0  CAL_SAVE26.BF.CAL_RX_ALIGN90_LSB_G1_7_0
#define lnx_CAL_RX_ALIGN90_1SB_G2_7_0  CAL_SAVE26.BF.CAL_RX_ALIGN90_1SB_G2_7_0
#define lnx_CAL_RX_ALIGN90_1SB_G3_7_0  CAL_SAVE26.BF.CAL_RX_ALIGN90_1SB_G3_7_0
#define lnx_CAL_RX_ALIGN90_LSB_G4_7_0  CAL_SAVE26.BF.CAL_RX_ALIGN90_LSB_G4_7_0

// 0x016c	CAL_SAVE27		
typedef union {
	struct {
		uint8_t CAL_RX_DATA_DCC_MSB_G0_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_DATA_DCC_MSB_G1_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_DATA_DCC_MSB_G2_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_DATA_DCC_MSB_G3_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE27_t;
__xdata __at( 0x616c ) volatile CAL_SAVE27_t CAL_SAVE27;
#define lnx_CAL_RX_DATA_DCC_MSB_G0_7_0  CAL_SAVE27.BF.CAL_RX_DATA_DCC_MSB_G0_7_0
#define lnx_CAL_RX_DATA_DCC_MSB_G1_7_0  CAL_SAVE27.BF.CAL_RX_DATA_DCC_MSB_G1_7_0
#define lnx_CAL_RX_DATA_DCC_MSB_G2_7_0  CAL_SAVE27.BF.CAL_RX_DATA_DCC_MSB_G2_7_0
#define lnx_CAL_RX_DATA_DCC_MSB_G3_7_0  CAL_SAVE27.BF.CAL_RX_DATA_DCC_MSB_G3_7_0

// 0x0170	CAL_SAVE28		
typedef union {
	struct {
		uint8_t CAL_RX_DATA_DCC_MSB_G4_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_DATA_DCC_LSB_G0_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_DATA_DCC_LSB_G1_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_DATA_DCC_LSB_G2_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE28_t;
__xdata __at( 0x6170 ) volatile CAL_SAVE28_t CAL_SAVE28;
#define lnx_CAL_RX_DATA_DCC_MSB_G4_7_0  CAL_SAVE28.BF.CAL_RX_DATA_DCC_MSB_G4_7_0
#define lnx_CAL_RX_DATA_DCC_LSB_G0_7_0  CAL_SAVE28.BF.CAL_RX_DATA_DCC_LSB_G0_7_0
#define lnx_CAL_RX_DATA_DCC_LSB_G1_7_0  CAL_SAVE28.BF.CAL_RX_DATA_DCC_LSB_G1_7_0
#define lnx_CAL_RX_DATA_DCC_LSB_G2_7_0  CAL_SAVE28.BF.CAL_RX_DATA_DCC_LSB_G2_7_0

// 0x0174	CAL_SAVE29		
typedef union {
	struct {
		uint8_t CAL_RX_DATA_DCC_LSB_G3_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_DATA_DCC_LSB_G4_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EDGE_DCC_MSB_G0_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EDGE_DCC_MSB_G1_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE29_t;
__xdata __at( 0x6174 ) volatile CAL_SAVE29_t CAL_SAVE29;
#define lnx_CAL_RX_DATA_DCC_LSB_G3_7_0  CAL_SAVE29.BF.CAL_RX_DATA_DCC_LSB_G3_7_0
#define lnx_CAL_RX_DATA_DCC_LSB_G4_7_0  CAL_SAVE29.BF.CAL_RX_DATA_DCC_LSB_G4_7_0
#define lnx_CAL_RX_EDGE_DCC_MSB_G0_7_0  CAL_SAVE29.BF.CAL_RX_EDGE_DCC_MSB_G0_7_0
#define lnx_CAL_RX_EDGE_DCC_MSB_G1_7_0  CAL_SAVE29.BF.CAL_RX_EDGE_DCC_MSB_G1_7_0

// 0x0178	CAL_SAVE30		
typedef union {
	struct {
		uint8_t CAL_RX_EDGE_DCC_MSB_G2_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_EDGE_DCC_MSB_G3_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EDGE_DCC_MSB_G4_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EDGE_DCC_LSB_G0_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE30_t;
__xdata __at( 0x6178 ) volatile CAL_SAVE30_t CAL_SAVE30;
#define lnx_CAL_RX_EDGE_DCC_MSB_G2_7_0  CAL_SAVE30.BF.CAL_RX_EDGE_DCC_MSB_G2_7_0
#define lnx_CAL_RX_EDGE_DCC_MSB_G3_7_0  CAL_SAVE30.BF.CAL_RX_EDGE_DCC_MSB_G3_7_0
#define lnx_CAL_RX_EDGE_DCC_MSB_G4_7_0  CAL_SAVE30.BF.CAL_RX_EDGE_DCC_MSB_G4_7_0
#define lnx_CAL_RX_EDGE_DCC_LSB_G0_7_0  CAL_SAVE30.BF.CAL_RX_EDGE_DCC_LSB_G0_7_0

// 0x017c	CAL_SAVE31		
typedef union {
	struct {
		uint8_t CAL_RX_EDGE_DCC_LSB_G1_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_EDGE_DCC_LSB_G2_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EDGE_DCC_LSB_G3_7_0               : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EDGE_DCC_LAB_G4_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE31_t;
__xdata __at( 0x617c ) volatile CAL_SAVE31_t CAL_SAVE31;
#define lnx_CAL_RX_EDGE_DCC_LSB_G1_7_0  CAL_SAVE31.BF.CAL_RX_EDGE_DCC_LSB_G1_7_0
#define lnx_CAL_RX_EDGE_DCC_LSB_G2_7_0  CAL_SAVE31.BF.CAL_RX_EDGE_DCC_LSB_G2_7_0
#define lnx_CAL_RX_EDGE_DCC_LSB_G3_7_0  CAL_SAVE31.BF.CAL_RX_EDGE_DCC_LSB_G3_7_0
#define lnx_CAL_RX_EDGE_DCC_LAB_G4_7_0  CAL_SAVE31.BF.CAL_RX_EDGE_DCC_LAB_G4_7_0

// 0x0180	CAL_SAVE32		
typedef union {
	struct {
		uint8_t CAL_RX_EOM_DLL_MSB_G0_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_DLL_MSB_G1_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_DLL_MSB_G2_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_DLL_MSB_G3_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE32_t;
__xdata __at( 0x6180 ) volatile CAL_SAVE32_t CAL_SAVE32;
#define lnx_CAL_RX_EOM_DLL_MSB_G0_7_0  CAL_SAVE32.BF.CAL_RX_EOM_DLL_MSB_G0_7_0
#define lnx_CAL_RX_EOM_DLL_MSB_G1_7_0  CAL_SAVE32.BF.CAL_RX_EOM_DLL_MSB_G1_7_0
#define lnx_CAL_RX_EOM_DLL_MSB_G2_7_0  CAL_SAVE32.BF.CAL_RX_EOM_DLL_MSB_G2_7_0
#define lnx_CAL_RX_EOM_DLL_MSB_G3_7_0  CAL_SAVE32.BF.CAL_RX_EOM_DLL_MSB_G3_7_0

// 0x0184	CAL_SAVE33		
typedef union {
	struct {
		uint8_t CAL_RX_EOM_DLL_MSB_G4_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_DLL_LSB_G0_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_DLL_LSB_G1_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_DLL_LSB_G2_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE33_t;
__xdata __at( 0x6184 ) volatile CAL_SAVE33_t CAL_SAVE33;
#define lnx_CAL_RX_EOM_DLL_MSB_G4_7_0  CAL_SAVE33.BF.CAL_RX_EOM_DLL_MSB_G4_7_0
#define lnx_CAL_RX_EOM_DLL_LSB_G0_7_0  CAL_SAVE33.BF.CAL_RX_EOM_DLL_LSB_G0_7_0
#define lnx_CAL_RX_EOM_DLL_LSB_G1_7_0  CAL_SAVE33.BF.CAL_RX_EOM_DLL_LSB_G1_7_0
#define lnx_CAL_RX_EOM_DLL_LSB_G2_7_0  CAL_SAVE33.BF.CAL_RX_EOM_DLL_LSB_G2_7_0

// 0x0188	CAL_SAVE34		
typedef union {
	struct {
		uint8_t CAL_RX_EOM_DLL_LSB_G3_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_DLL_LSB_G4_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_MSB_G0_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_MSB_G1_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE34_t;
__xdata __at( 0x6188 ) volatile CAL_SAVE34_t CAL_SAVE34;
#define lnx_CAL_RX_EOM_DLL_LSB_G3_7_0  CAL_SAVE34.BF.CAL_RX_EOM_DLL_LSB_G3_7_0
#define lnx_CAL_RX_EOM_DLL_LSB_G4_7_0  CAL_SAVE34.BF.CAL_RX_EOM_DLL_LSB_G4_7_0
#define lnx_CAL_RX_EOM_PI_MSB_G0_7_0  CAL_SAVE34.BF.CAL_RX_EOM_PI_MSB_G0_7_0
#define lnx_CAL_RX_EOM_PI_MSB_G1_7_0  CAL_SAVE34.BF.CAL_RX_EOM_PI_MSB_G1_7_0

// 0x018c	CAL_SAVE35		
typedef union {
	struct {
		uint8_t CAL_RX_EOM_PI_MSB_G2_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_MSB_G3_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_MSB_G4_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_LSB_G0_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE35_t;
__xdata __at( 0x618c ) volatile CAL_SAVE35_t CAL_SAVE35;
#define lnx_CAL_RX_EOM_PI_MSB_G2_7_0  CAL_SAVE35.BF.CAL_RX_EOM_PI_MSB_G2_7_0
#define lnx_CAL_RX_EOM_PI_MSB_G3_7_0  CAL_SAVE35.BF.CAL_RX_EOM_PI_MSB_G3_7_0
#define lnx_CAL_RX_EOM_PI_MSB_G4_7_0  CAL_SAVE35.BF.CAL_RX_EOM_PI_MSB_G4_7_0
#define lnx_CAL_RX_EOM_PI_LSB_G0_7_0  CAL_SAVE35.BF.CAL_RX_EOM_PI_LSB_G0_7_0

// 0x0190	CAL_SAVE36		
typedef union {
	struct {
		uint8_t CAL_RX_EOM_PI_LSB_G1_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_LSB_G2_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_LSB_G3_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_LSB_G4_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE36_t;
__xdata __at( 0x6190 ) volatile CAL_SAVE36_t CAL_SAVE36;
#define lnx_CAL_RX_EOM_PI_LSB_G1_7_0  CAL_SAVE36.BF.CAL_RX_EOM_PI_LSB_G1_7_0
#define lnx_CAL_RX_EOM_PI_LSB_G2_7_0  CAL_SAVE36.BF.CAL_RX_EOM_PI_LSB_G2_7_0
#define lnx_CAL_RX_EOM_PI_LSB_G3_7_0  CAL_SAVE36.BF.CAL_RX_EOM_PI_LSB_G3_7_0
#define lnx_CAL_RX_EOM_PI_LSB_G4_7_0  CAL_SAVE36.BF.CAL_RX_EOM_PI_LSB_G4_7_0

// 0x0194	CAL_SAVE37		
typedef union {
	struct {
		uint8_t CAL_RX_EOM_PI_DCC_G0_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_DCC_G1_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_DCC_G2_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_EOM_PI_DCC_G3_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE37_t;
__xdata __at( 0x6194 ) volatile CAL_SAVE37_t CAL_SAVE37;
#define lnx_CAL_RX_EOM_PI_DCC_G0_7_0  CAL_SAVE37.BF.CAL_RX_EOM_PI_DCC_G0_7_0
#define lnx_CAL_RX_EOM_PI_DCC_G1_7_0  CAL_SAVE37.BF.CAL_RX_EOM_PI_DCC_G1_7_0
#define lnx_CAL_RX_EOM_PI_DCC_G2_7_0  CAL_SAVE37.BF.CAL_RX_EOM_PI_DCC_G2_7_0
#define lnx_CAL_RX_EOM_PI_DCC_G3_7_0  CAL_SAVE37.BF.CAL_RX_EOM_PI_DCC_G3_7_0

// 0x0198	CAL_SAVE38		
typedef union {
	struct {
		uint8_t CAL_RX_EOM_PI_DCC_G4_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE38_t;
__xdata __at( 0x6198 ) volatile CAL_SAVE38_t CAL_SAVE38;
#define lnx_CAL_RX_EOM_PI_DCC_G4_7_0  CAL_SAVE38.BF.CAL_RX_EOM_PI_DCC_G4_7_0

// 0x019c	TRAIN_PARA_2		
typedef union {
	struct {
		uint8_t DFE_RES_VREF_INI_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t DFE_RES_RES_F0_INI_LANE_1_0              : 2;	/*  [3:2]     r/w 2'h3*/
		uint8_t DIS_DFE_RES_F0_GAIN_TRAIN_LANE           : 1;	/*      4     r/w   1*/
		uint8_t GAIN_TRAIN_INIT_EN_LANE                  : 1;	/*      5     r/w   1*/
		uint8_t GAIN_TRAIN_END_EN_LANE                   : 1;	/*      6     r/w   0*/
		uint8_t PHASE_TRAIN_INIT_EN_LANE                 : 1;	/*      7     r/w   1*/
		uint8_t DFE_F0_RES_THRS_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h28*/
		uint8_t DC_VREF_ADJ_DFE_LPNUM_LANE_15_0_b0       : 8;	/*[31:16]     r/w 16'h0f07*/
		uint8_t DC_VREF_ADJ_DFE_LPNUM_LANE_15_0_b1       : 8;	/*[31:16]     r/w 16'h0f07*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRAIN_PARA_2_t;
__xdata __at( 0x619c ) volatile TRAIN_PARA_2_t TRAIN_PARA_2;
#define lnx_DFE_RES_VREF_INI_LANE_1_0  TRAIN_PARA_2.BF.DFE_RES_VREF_INI_LANE_1_0
#define lnx_DFE_RES_RES_F0_INI_LANE_1_0  TRAIN_PARA_2.BF.DFE_RES_RES_F0_INI_LANE_1_0
#define lnx_DIS_DFE_RES_F0_GAIN_TRAIN_LANE  TRAIN_PARA_2.BF.DIS_DFE_RES_F0_GAIN_TRAIN_LANE
#define lnx_GAIN_TRAIN_INIT_EN_LANE  TRAIN_PARA_2.BF.GAIN_TRAIN_INIT_EN_LANE
#define lnx_GAIN_TRAIN_END_EN_LANE  TRAIN_PARA_2.BF.GAIN_TRAIN_END_EN_LANE
#define lnx_PHASE_TRAIN_INIT_EN_LANE  TRAIN_PARA_2.BF.PHASE_TRAIN_INIT_EN_LANE
#define lnx_DFE_F0_RES_THRS_LANE_7_0  TRAIN_PARA_2.BF.DFE_F0_RES_THRS_LANE_7_0
#define lnx_DC_VREF_ADJ_DFE_LPNUM_LANE_15_0_b0  TRAIN_PARA_2.BF.DC_VREF_ADJ_DFE_LPNUM_LANE_15_0_b0
#define lnx_DC_VREF_ADJ_DFE_LPNUM_LANE_15_0_b1  TRAIN_PARA_2.BF.DC_VREF_ADJ_DFE_LPNUM_LANE_15_0_b1
#define lnx_DC_VREF_ADJ_DFE_LPNUM_LANE_15_0  TRAIN_PARA_2.WT.W1

// 0x01a0	TRAIN_PARA_3		
typedef union {
	struct {
		uint8_t ALIGN90_VREF_MAX_LANE_7_0                : 8;	/*  [7:0]     r/w 8'he0*/
		uint8_t RX_TRACKING_ENABLE_LANE                  : 1;	/*      8     r/w   0*/
		uint8_t DC_VREF_ADJ_EN_LANE                      : 1;	/*      9     r/w   1*/
		uint8_t CTLE_C1_ADAPT_EN_LANE                    : 1;	/*     10     r/w   0*/
		uint8_t FORCE_CTLE_RL2_TUNE_TRACK_EN_LANE        : 1;	/*     11     r/w   0*/
		uint8_t FORCE_CTLE_RL2_TUNE_TRAIN_EN_LANE        : 1;	/*     12     r/w   0*/
		uint8_t FORCE_CTLE_RL2_TUNE_EN_LANE              : 1;	/*     13     r/w   0*/
		uint8_t BYPASS_RL2_TRAIN_LANE                    : 1;	/*     14     r/w   0*/
		uint8_t CTLE_ADAPT_R2P0_EN_LANE                  : 1;	/*     15     r/w   0*/
		uint8_t CTLE_ADAPT_TIME_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h32*/
		uint8_t DC_VREF_ADJ_TRANS_LPNUM_LANE_7_0         : 8;	/*[31:24]     r/w 8'h28*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_3_t;
__xdata __at( 0x61a0 ) volatile TRAIN_PARA_3_t TRAIN_PARA_3;
#define lnx_ALIGN90_VREF_MAX_LANE_7_0  TRAIN_PARA_3.BF.ALIGN90_VREF_MAX_LANE_7_0
#define lnx_RX_TRACKING_ENABLE_LANE  TRAIN_PARA_3.BF.RX_TRACKING_ENABLE_LANE
#define lnx_DC_VREF_ADJ_EN_LANE  TRAIN_PARA_3.BF.DC_VREF_ADJ_EN_LANE
#define lnx_CTLE_C1_ADAPT_EN_LANE  TRAIN_PARA_3.BF.CTLE_C1_ADAPT_EN_LANE
#define lnx_FORCE_CTLE_RL2_TUNE_TRACK_EN_LANE  TRAIN_PARA_3.BF.FORCE_CTLE_RL2_TUNE_TRACK_EN_LANE
#define lnx_FORCE_CTLE_RL2_TUNE_TRAIN_EN_LANE  TRAIN_PARA_3.BF.FORCE_CTLE_RL2_TUNE_TRAIN_EN_LANE
#define lnx_FORCE_CTLE_RL2_TUNE_EN_LANE  TRAIN_PARA_3.BF.FORCE_CTLE_RL2_TUNE_EN_LANE
#define lnx_BYPASS_RL2_TRAIN_LANE  TRAIN_PARA_3.BF.BYPASS_RL2_TRAIN_LANE
#define lnx_CTLE_ADAPT_R2P0_EN_LANE  TRAIN_PARA_3.BF.CTLE_ADAPT_R2P0_EN_LANE
#define lnx_CTLE_ADAPT_TIME_LANE_7_0  TRAIN_PARA_3.BF.CTLE_ADAPT_TIME_LANE_7_0
#define lnx_DC_VREF_ADJ_TRANS_LPNUM_LANE_7_0  TRAIN_PARA_3.BF.DC_VREF_ADJ_TRANS_LPNUM_LANE_7_0

// 0x01a4	TRAIN_PARA_4		
typedef union {
	struct {
		uint8_t TRACK_CTLE_VREF_THRS_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRACK_CTLE_F0B_THRS_LANE_7_0             : 8;	/* [15:8]     r/w 8'h14*/
		uint8_t CTLE_C1_ADAPT_TIME_LANE_7_0              : 8;	/*[23:16]     r/w 8'h32*/
		uint8_t ADAPT_F0B_VOTE_NUM_LANE_7_0              : 8;	/*[31:24]     r/w 8'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_4_t;
__xdata __at( 0x61a4 ) volatile TRAIN_PARA_4_t TRAIN_PARA_4;
#define lnx_TRACK_CTLE_VREF_THRS_LANE_7_0  TRAIN_PARA_4.BF.TRACK_CTLE_VREF_THRS_LANE_7_0
#define lnx_TRACK_CTLE_F0B_THRS_LANE_7_0  TRAIN_PARA_4.BF.TRACK_CTLE_F0B_THRS_LANE_7_0
#define lnx_CTLE_C1_ADAPT_TIME_LANE_7_0  TRAIN_PARA_4.BF.CTLE_C1_ADAPT_TIME_LANE_7_0
#define lnx_ADAPT_F0B_VOTE_NUM_LANE_7_0  TRAIN_PARA_4.BF.ADAPT_F0B_VOTE_NUM_LANE_7_0

// 0x01a8	TRAIN_PARA_5		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t OPT_VREF_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FORCE_CTLE_RL2_TUNE_G_LANE_2_0           : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t FORCE_CTLE_RL2_TUNE_TRAIN_INDEX_LANE_2_0 : 3;	/*[21:19]     r/w 3'h1*/
		uint8_t FORCE_CTLE_RL2_TUNE_TRACK_INDEX_LANE_1_0 : 2;	/*[23:22]     r/w 2'h0*/
		uint8_t ADAPT_C1_INX_LANE_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_5_t;
__xdata __at( 0x61a8 ) volatile TRAIN_PARA_5_t TRAIN_PARA_5;
#define lnx_OPT_VREF_LANE_7_0  TRAIN_PARA_5.BF.OPT_VREF_LANE_7_0
#define lnx_FORCE_CTLE_RL2_TUNE_G_LANE_2_0  TRAIN_PARA_5.BF.FORCE_CTLE_RL2_TUNE_G_LANE_2_0
#define lnx_FORCE_CTLE_RL2_TUNE_TRAIN_INDEX_LANE_2_0  TRAIN_PARA_5.BF.FORCE_CTLE_RL2_TUNE_TRAIN_INDEX_LANE_2_0
#define lnx_FORCE_CTLE_RL2_TUNE_TRACK_INDEX_LANE_1_0  TRAIN_PARA_5.BF.FORCE_CTLE_RL2_TUNE_TRACK_INDEX_LANE_1_0
#define lnx_ADAPT_C1_INX_LANE_7_0  TRAIN_PARA_5.BF.ADAPT_C1_INX_LANE_7_0

// 0x01ac	TRAIN_PARA_6		
typedef union {
	struct {
		uint8_t NORM_F0B_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PHASE_ADAPT_TIME_LANE_7_0                : 8;	/* [15:8]     r/w 8'h32*/
		uint8_t PHASE_ADAPT_LPNUM_LANE_7_0               : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t PHASE_F0B_HYST_LOW_LANE_7_0              : 8;	/*[31:24]     r/w 8'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_6_t;
__xdata __at( 0x61ac ) volatile TRAIN_PARA_6_t TRAIN_PARA_6;
#define lnx_NORM_F0B_LANE_7_0  TRAIN_PARA_6.BF.NORM_F0B_LANE_7_0
#define lnx_PHASE_ADAPT_TIME_LANE_7_0  TRAIN_PARA_6.BF.PHASE_ADAPT_TIME_LANE_7_0
#define lnx_PHASE_ADAPT_LPNUM_LANE_7_0  TRAIN_PARA_6.BF.PHASE_ADAPT_LPNUM_LANE_7_0
#define lnx_PHASE_F0B_HYST_LOW_LANE_7_0  TRAIN_PARA_6.BF.PHASE_F0B_HYST_LOW_LANE_7_0

// 0x0200	TRAIN_SAVE_0		
typedef union {
	struct {
		uint8_t PHASE_F0B_HYST_HIGH_LANE_7_0             : 8;	/*  [7:0]     r/w 8'ha*/
		uint8_t PHASE_FN1_THRES_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t PHASE_F1_THRES1_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t PHASE_F1_THRES3_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_0_t;
__xdata __at( 0x6200 ) volatile TRAIN_SAVE_0_t TRAIN_SAVE_0;
#define lnx_PHASE_F0B_HYST_HIGH_LANE_7_0  TRAIN_SAVE_0.BF.PHASE_F0B_HYST_HIGH_LANE_7_0
#define lnx_PHASE_FN1_THRES_LANE_7_0  TRAIN_SAVE_0.BF.PHASE_FN1_THRES_LANE_7_0
#define lnx_PHASE_F1_THRES1_LANE_7_0  TRAIN_SAVE_0.BF.PHASE_F1_THRES1_LANE_7_0
#define lnx_PHASE_F1_THRES3_LANE_7_0  TRAIN_SAVE_0.BF.PHASE_F1_THRES3_LANE_7_0

// 0x0204	TRAIN_SAVE_1		
typedef union {
	struct {
		uint8_t OPT_F0A_MAX_LANE_7_0                     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t OPT_F0A_MAX_DATA_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t OPT_F0A_MAX_SLICER_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t OPT_F0A_LANE_7_0                         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_1_t;
__xdata __at( 0x6204 ) volatile TRAIN_SAVE_1_t TRAIN_SAVE_1;
#define lnx_OPT_F0A_MAX_LANE_7_0  TRAIN_SAVE_1.BF.OPT_F0A_MAX_LANE_7_0
#define lnx_OPT_F0A_MAX_DATA_LANE_7_0  TRAIN_SAVE_1.BF.OPT_F0A_MAX_DATA_LANE_7_0
#define lnx_OPT_F0A_MAX_SLICER_LANE_7_0  TRAIN_SAVE_1.BF.OPT_F0A_MAX_SLICER_LANE_7_0
#define lnx_OPT_F0A_LANE_7_0  TRAIN_SAVE_1.BF.OPT_F0A_LANE_7_0

// 0x0208	TRAIN_SAVE_2		
typedef union {
	struct {
		uint8_t OPT_F0A_DATA_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t OPT_F0A_SLICER_LANE_7_0                  : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t OPT_F0B_LANE_7_0                         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t OPT_F0K_LANE_7_0                         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_2_t;
__xdata __at( 0x6208 ) volatile TRAIN_SAVE_2_t TRAIN_SAVE_2;
#define lnx_OPT_F0A_DATA_LANE_7_0  TRAIN_SAVE_2.BF.OPT_F0A_DATA_LANE_7_0
#define lnx_OPT_F0A_SLICER_LANE_7_0  TRAIN_SAVE_2.BF.OPT_F0A_SLICER_LANE_7_0
#define lnx_OPT_F0B_LANE_7_0  TRAIN_SAVE_2.BF.OPT_F0B_LANE_7_0
#define lnx_OPT_F0K_LANE_7_0  TRAIN_SAVE_2.BF.OPT_F0K_LANE_7_0

// 0x020c	TRAIN_SAVE_3		
typedef union {
	struct {
		uint8_t OPT_F0_SLICER_LANE_7_0                   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t OPT_F1_LANE_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t OPT_F2_LANE_7_0                          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t OPT_F3_LANE_7_0                          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_3_t;
__xdata __at( 0x620c ) volatile TRAIN_SAVE_3_t TRAIN_SAVE_3;
#define lnx_OPT_F0_SLICER_LANE_7_0  TRAIN_SAVE_3.BF.OPT_F0_SLICER_LANE_7_0
#define lnx_OPT_F1_LANE_7_0  TRAIN_SAVE_3.BF.OPT_F1_LANE_7_0
#define lnx_OPT_F2_LANE_7_0  TRAIN_SAVE_3.BF.OPT_F2_LANE_7_0
#define lnx_OPT_F3_LANE_7_0  TRAIN_SAVE_3.BF.OPT_F3_LANE_7_0

// 0x0210	TRAIN_SAVE_4		
typedef union {
	struct {
		uint8_t OPT_F4_LANE_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t OPT_F5_LANE_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t OPT_F6_LANE_7_0                          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t OPT_F7_LANE_7_0                          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_4_t;
__xdata __at( 0x6210 ) volatile TRAIN_SAVE_4_t TRAIN_SAVE_4;
#define lnx_OPT_F4_LANE_7_0  TRAIN_SAVE_4.BF.OPT_F4_LANE_7_0
#define lnx_OPT_F5_LANE_7_0  TRAIN_SAVE_4.BF.OPT_F5_LANE_7_0
#define lnx_OPT_F6_LANE_7_0  TRAIN_SAVE_4.BF.OPT_F6_LANE_7_0
#define lnx_OPT_F7_LANE_7_0  TRAIN_SAVE_4.BF.OPT_F7_LANE_7_0

// 0x0214	TRAIN_SAVE_6		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t OPT_FN1_LANE_7_0                         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t OPT_FN2_LANE_7_0                         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t OPT_F0T_LANE_7_0                         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_6_t;
__xdata __at( 0x6214 ) volatile TRAIN_SAVE_6_t TRAIN_SAVE_6;
#define lnx_OPT_FN1_LANE_7_0  TRAIN_SAVE_6.BF.OPT_FN1_LANE_7_0
#define lnx_OPT_FN2_LANE_7_0  TRAIN_SAVE_6.BF.OPT_FN2_LANE_7_0
#define lnx_OPT_F0T_LANE_7_0  TRAIN_SAVE_6.BF.OPT_F0T_LANE_7_0

// 0x0218	TRAIN_SAVE_7		
typedef union {
	struct {
		uint8_t OPT_EO_LANE_7_0                          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t OPT_PHASE_DATA_LANE_7_0                  : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_7_t;
__xdata __at( 0x6218 ) volatile TRAIN_SAVE_7_t TRAIN_SAVE_7;
#define lnx_OPT_EO_LANE_7_0  TRAIN_SAVE_7.BF.OPT_EO_LANE_7_0
#define lnx_OPT_PHASE_DATA_LANE_7_0  TRAIN_SAVE_7.BF.OPT_PHASE_DATA_LANE_7_0

// 0x021c	TRAIN_SAVE_8		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t OPT_R_INDEX_LANE_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t OPT_C_INDEX_LANE_7_0                     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_8_t;
__xdata __at( 0x621c ) volatile TRAIN_SAVE_8_t TRAIN_SAVE_8;
#define lnx_OPT_R_INDEX_LANE_7_0  TRAIN_SAVE_8.BF.OPT_R_INDEX_LANE_7_0
#define lnx_OPT_C_INDEX_LANE_7_0  TRAIN_SAVE_8.BF.OPT_C_INDEX_LANE_7_0

// 0x0220	TS_PLL_VCO_AMP		
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
__xdata __at( 0x6220 ) volatile TS_PLL_VCO_AMP_t TS_PLL_VCO_AMP;
#define lnx_TS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0  TS_PLL_VCO_AMP.BF.TS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0
#define lnx_TS_TEMPC_MUX_SEL_2C_LANE_7_0  TS_PLL_VCO_AMP.BF.TS_TEMPC_MUX_SEL_2C_LANE_7_0
#define lnx_TS_TEMPC_DAC_SEL_LANE_7_0  TS_PLL_VCO_AMP.BF.TS_TEMPC_DAC_SEL_LANE_7_0
#define lnx_TS_VCOAMP_VTH_AMP_LANE_7_0  TS_PLL_VCO_AMP.BF.TS_VCOAMP_VTH_AMP_LANE_7_0

// 0x0224	RS_PLL_VCO_AMP		
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
__xdata __at( 0x6224 ) volatile RS_PLL_VCO_AMP_t RS_PLL_VCO_AMP;
#define lnx_RS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0  RS_PLL_VCO_AMP.BF.RS_TEMPC_MUX_HOLD_SEL_2C_LANE_7_0
#define lnx_RS_TEMPC_MUX_SEL_2C_LANE_7_0  RS_PLL_VCO_AMP.BF.RS_TEMPC_MUX_SEL_2C_LANE_7_0
#define lnx_RS_TEMPC_DAC_SEL_LANE_7_0  RS_PLL_VCO_AMP.BF.RS_TEMPC_DAC_SEL_LANE_7_0
#define lnx_RS_VCOAMP_VTH_AMP_LANE_7_0  RS_PLL_VCO_AMP.BF.RS_VCOAMP_VTH_AMP_LANE_7_0

// 0x0228	CLI_TIME		
typedef union {
	struct {
		uint8_t CLI_TIME_LANE_31_0_b0                    : 8;	/* [31:0]       r 32'h0*/
		uint8_t CLI_TIME_LANE_31_0_b1                    : 8;	/* [31:0]       r 32'h0*/
		uint8_t CLI_TIME_LANE_31_0_b2                    : 8;	/* [31:0]       r 32'h0*/
		uint8_t CLI_TIME_LANE_31_0_b3                    : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLI_TIME_t;
__xdata __at( 0x6228 ) volatile CLI_TIME_t CLI_TIME;
#define lnx_CLI_TIME_LANE_31_0_b0  CLI_TIME.BF.CLI_TIME_LANE_31_0_b0
#define lnx_CLI_TIME_LANE_31_0_b1  CLI_TIME.BF.CLI_TIME_LANE_31_0_b1
#define lnx_CLI_TIME_LANE_31_0_b2  CLI_TIME.BF.CLI_TIME_LANE_31_0_b2
#define lnx_CLI_TIME_LANE_31_0_b3  CLI_TIME.BF.CLI_TIME_LANE_31_0_b3

#endif
