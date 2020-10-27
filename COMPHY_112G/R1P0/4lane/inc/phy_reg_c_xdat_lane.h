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
		uint8_t RESERVED_20                              : 4;	/*[26:20]     r/w   0*/
		uint8_t RESERVED_24                              : 3;	/*[26:20]     r/w   0*/
		uint8_t CAL_DONE_LANE                            : 1;	/*     27       r   0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
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
#define lnx_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.CAL_DONE_LANE

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
		uint8_t SELLV_TXPRE_PASS_LANE                    : 1;	/*     24       r   0*/
		uint8_t SELLV_RXINTP_PASS_LANE                   : 1;	/*     25       r   0*/
		uint8_t SELLV_RXDATACLK_PASS_LANE                : 1;	/*     26       r   0*/
		uint8_t SELLV_RXEOMCLK_PASS_LANE                 : 1;	/*     27       r   0*/
		uint8_t SELLV_RXSAMPLER_PASS_LANE                : 1;	/*     28       r   0*/
		uint8_t TXDCC_PDIV_CAL_PASS_LANE                 : 1;	/*     29       r   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
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
#define lnx_SELLV_TXPRE_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_TXPRE_PASS_LANE
#define lnx_SELLV_RXINTP_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXINTP_PASS_LANE
#define lnx_SELLV_RXDATACLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXDATACLK_PASS_LANE
#define lnx_SELLV_RXEOMCLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXEOMCLK_PASS_LANE
#define lnx_SELLV_RXSAMPLER_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXSAMPLER_PASS_LANE
#define lnx_TXDCC_PDIV_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXDCC_PDIV_CAL_PASS_LANE

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
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
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

// 0x0010	CAL_SAVE_DATA1_LANE		Calibration Result 1
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
__xdata __at( 0x6010 ) volatile CAL_SAVE_DATA1_LANE_t CAL_SAVE_DATA1_LANE;
#define lnx_CAL_DLL_CMP_OFFSET_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_DLL_CMP_OFFSET_LANE_7_0
#define lnx_CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0
#define lnx_CAL_SQ_OFFSET_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_SQ_OFFSET_LANE_7_0
#define lnx_CAL_SQ_THRESH_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_SQ_THRESH_LANE_7_0

// 0x0014	CAL_SAVE_DATA2_LANE		Calibration Result 4
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
__xdata __at( 0x6014 ) volatile CAL_SAVE_DATA2_LANE_t CAL_SAVE_DATA2_LANE;
#define lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_ALIGN90_CMP_OFFSET_LANE_7_0
#define lnx_CAL_RX_IMP_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_RX_IMP_LANE_7_0
#define lnx_CAL_TXIMP_TUNEN_TOP_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_TXIMP_TUNEN_TOP_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP_TOP_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_TXIMP_TUNEP_TOP_LANE_7_0

// 0x0018	CAL_SAVE_DATA3_LANE		Calibration Result 5
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
__xdata __at( 0x6018 ) volatile CAL_SAVE_DATA3_LANE_t CAL_SAVE_DATA3_LANE;
#define lnx_CAL_TXIMP_TUNEN_MID_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEN_MID_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP_MID_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEP_MID_LANE_7_0
#define lnx_CAL_TXIMP_TUNEN_BOT_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEN_BOT_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP_BOT_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEP_BOT_LANE_7_0

// 0x001c	CAL_SAVE_DATA4_LANE		Calibration Result 6
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
__xdata __at( 0x601c ) volatile CAL_SAVE_DATA4_LANE_t CAL_SAVE_DATA4_LANE;
#define lnx_CAL_OFST_D_TOP_E_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_OFST_D_TOP_E_LANE_7_0
#define lnx_CAL_OFST_D_MID_E_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_OFST_D_MID_E_LANE_7_0
#define lnx_CAL_OFST_D_BOT_E_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_OFST_D_BOT_E_LANE_7_0
#define lnx_CAL_OFST_D_TOP_O_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_OFST_D_TOP_O_LANE_7_0

// 0x0020	CAL_SAVE_DATA5_LANE		Calibration Result 7
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
__xdata __at( 0x6020 ) volatile CAL_SAVE_DATA5_LANE_t CAL_SAVE_DATA5_LANE;
#define lnx_CAL_OFST_D_MID_O_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_OFST_D_MID_O_LANE_7_0
#define lnx_CAL_OFST_D_BOT_O_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_OFST_D_BOT_O_LANE_7_0
#define lnx_CAL_OFST_S_TOP_E_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_OFST_S_TOP_E_LANE_7_0
#define lnx_CAL_OFST_S_MID_E_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_OFST_S_MID_E_LANE_7_0

// 0x0024	CAL_SAVE_DATA6_LANE		Calibration Result 8
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
__xdata __at( 0x6024 ) volatile CAL_SAVE_DATA6_LANE_t CAL_SAVE_DATA6_LANE;
#define lnx_CAL_OFST_S_BOT_E_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_OFST_S_BOT_E_LANE_7_0
#define lnx_CAL_OFST_S_TOP_O_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_OFST_S_TOP_O_LANE_7_0
#define lnx_CAL_OFST_S_MID_O_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_OFST_S_MID_O_LANE_7_0
#define lnx_CAL_OFST_S_BOT_O_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_OFST_S_BOT_O_LANE_7_0

// 0x0028	CAL_SAVE_DATA7_LANE		Calibration Result 9
typedef union {
	struct {
		uint8_t CAL_OFST_EDGE_E_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_OFST_EDGE_O_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SAMPLER_RES_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA7_LANE_t;
__xdata __at( 0x6028 ) volatile CAL_SAVE_DATA7_LANE_t CAL_SAVE_DATA7_LANE;
#define lnx_CAL_OFST_EDGE_E_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_OFST_EDGE_E_LANE_7_0
#define lnx_CAL_OFST_EDGE_O_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_OFST_EDGE_O_LANE_7_0
#define lnx_CAL_SAMPLER_RES_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_SAMPLER_RES_LANE_7_0

// 0x002c	TRX_TRAIN_IF_TIMERS1_LANE		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [23:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [23:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [23:0]     r/w   0*/
		uint8_t TX_TRAIN_STATUS_DET_TIMER_LANE_7_0       : 8;	/*[31:24]     r/w 8'h03*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TRAIN_IF_TIMERS1_LANE_t;
__xdata __at( 0x602c ) volatile TRX_TRAIN_IF_TIMERS1_LANE_t TRX_TRAIN_IF_TIMERS1_LANE;
#define lnx_TX_TRAIN_STATUS_DET_TIMER_LANE_7_0  TRX_TRAIN_IF_TIMERS1_LANE.BF.TX_TRAIN_STATUS_DET_TIMER_LANE_7_0

// 0x0030	TRX_TRAIN_IF_TIMERS_ENABLE_LANE		
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
__xdata __at( 0x6030 ) volatile TRX_TRAIN_IF_TIMERS_ENABLE_LANE_t TRX_TRAIN_IF_TIMERS_ENABLE_LANE;
#define lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE
#define lnx_FRAME_LOCK_SEL_TIMEOUT_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.FRAME_LOCK_SEL_TIMEOUT_LANE
#define lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE
#define lnx_TX_TRAIN_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_TIMER_ENABLE_LANE
#define lnx_RX_TRAIN_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.RX_TRAIN_TIMER_ENABLE_LANE
#define lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE

// 0x0034	DFE_CONTROL_0		
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
__xdata __at( 0x6034 ) volatile DFE_CONTROL_0_t DFE_CONTROL_0;
#define lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b0  DFE_CONTROL_0.BF.DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b0
#define lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b1  DFE_CONTROL_0.BF.DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b1
#define lnx_DFE_FORCE_ZERO_LANE_7_0  DFE_CONTROL_0.BF.DFE_FORCE_ZERO_LANE_7_0
#define lnx_DFE_DBG_STEP_MODE_LANE_7_0  DFE_CONTROL_0.BF.DFE_DBG_STEP_MODE_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0  DFE_CONTROL_0.WT.W0

// 0x0038	DFE_CONTROL_1		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'b0*/
		uint8_t EOM_READY_LANE                           : 1;	/*      3     r/w 1'b0*/
		uint8_t EOM_DFE_CALL_LANE                        : 1;	/*      4     r/w 1'b0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'b0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_CAL_DONE_LANE                        : 1;	/*      7       r 1'b0*/
		uint8_t ESM_VOLTAGE_LANE_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 1;	/*     18     r/w 1'h0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w 1'h0*/
		uint8_t PHASE_ADAPT_SAT_DETECT_LANE              : 1;	/*     20       r 1'h0*/
		uint8_t PHASE_ADAPT_TEMP_AUTO_EN_LANE            : 1;	/*     21     r/w 1'h0*/
		uint8_t SQ_AUTO_TRAIN_LANE                       : 1;	/*     22     r/w 1'h0*/
		uint8_t RX_TRAIN_ONLY_DFE_LANE                   : 1;	/*     23     r/w 1'b0*/
		uint8_t PHASE_ADAPT_TEMP_THR_LANE_7_0            : 8;	/*[31:24]     r/w 8'hc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_1_t;
__xdata __at( 0x6038 ) volatile DFE_CONTROL_1_t DFE_CONTROL_1;
#define lnx_EOM_READY_LANE  DFE_CONTROL_1.BF.EOM_READY_LANE
#define lnx_EOM_DFE_CALL_LANE  DFE_CONTROL_1.BF.EOM_DFE_CALL_LANE
#define lnx_DFE_CAL_DONE_LANE  DFE_CONTROL_1.BF.DFE_CAL_DONE_LANE
#define lnx_ESM_VOLTAGE_LANE_7_0  DFE_CONTROL_1.BF.ESM_VOLTAGE_LANE_7_0
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
		uint8_t ADAPT_DATA_EN_LANE_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t ADAPT_SLICER_EN_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_2_t;
__xdata __at( 0x6040 ) volatile DFE_CONTROL_2_t DFE_CONTROL_2;
#define lnx_DFE_DBG_STEP_LANE_7_0  DFE_CONTROL_2.BF.DFE_DBG_STEP_LANE_7_0
#define lnx_ADAPTED_PHASE_OFFSET_DATA_LANE_7_0  DFE_CONTROL_2.BF.ADAPTED_PHASE_OFFSET_DATA_LANE_7_0
#define lnx_ADAPT_DATA_EN_LANE_7_0  DFE_CONTROL_2.BF.ADAPT_DATA_EN_LANE_7_0
#define lnx_ADAPT_SLICER_EN_LANE_7_0  DFE_CONTROL_2.BF.ADAPT_SLICER_EN_LANE_7_0

// 0x0044	DFE_CONTROL_3		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t TX_TRAIN_P2P_HOLD_LANE                   : 1;	/*      3     r/w 1'h1*/
		uint8_t TRAIN_PH_CONTROL_MODE_LANE_1_0           : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TRAIN_USE_D_LANE                         : 1;	/*      6     r/w 1'h0*/
		uint8_t TRAIN_USE_S_LANE                         : 1;	/*      7     r/w 1'h0*/
		uint8_t CAL_EOM_DPHER_LANE_7_0                   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PHASE_LANE_7_0                       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t OPT_PHASE_OFFSET_NORMAL_LANE_7_0         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_3_t;
__xdata __at( 0x6044 ) volatile DFE_CONTROL_3_t DFE_CONTROL_3;
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
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'b0*/
		uint8_t RX_NO_INIT_LANE                          : 1;	/*      1     r/w 1'b0*/
		uint8_t TX_NO_INIT_LANE                          : 1;	/*      2     r/w 1'b0*/
		uint8_t DFE_ADAPT_NORMAL_FORCE_SKIP_LANE         : 1;	/*      3     r/w 1'b0*/
		uint8_t DFE_ADAPT_NORMAL_SOFT_CONT_EN_LANE       : 1;	/*      4     r/w 1'b0*/
		uint8_t PHASE_ADAPT_ENABLE_LANE                  : 1;	/*      5     r/w 1'b0*/
		uint8_t PHASE_ADAPT_MODE_LANE                    : 1;	/*      6     r/w 1'b0*/
		uint8_t F1_ALIGN_SKIP_LANE                       : 1;	/*      7     r/w 1'h0*/
		uint8_t THRE_GOOD_LANE_4_0                       : 5;	/* [12:8]     r/w 5'h2*/
		uint8_t EDGE_SAMPLER_NORMAL_EN_LANE              : 1;	/*     13     r/w 1'b1*/
		uint8_t SATURATE_DISABLE_LANE                    : 1;	/*     14     r/w 1'b1*/
		uint8_t CDRPHASE_OPT_EN_LANE                     : 1;	/*     15     r/w 1'b1*/
		uint8_t THRE_POOR_LANE_2_0                       : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t PHASE_ADAPT_UI_ALIGN_SKIP_LANE           : 1;	/*     19     r/w 1'h0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w 1'h0*/
		uint8_t EOM_PHASE_UI_ALIGN_FAILED_LANE           : 1;	/*     21       r 1'h0*/
		uint8_t PATTERN_PROTECT_EN_LANE                  : 1;	/*     22     r/w 1'h0*/
		uint8_t MAXEO_ADAPT_NORMAL_MODE_EN_LANE          : 1;	/*     23     r/w 1'b0*/
		uint8_t THRE_EXCELLENT_LANE_5_0                  : 6;	/*[29:24]     r/w 6'h3f*/
		uint8_t EYE_CHECK_BYPASS_LANE                    : 1;	/*     30     r/w 1'b1*/
		uint8_t FAST_DFE_TIMER_EN_LANE                   : 1;	/*     31     r/w 1'b1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_5_t;
__xdata __at( 0x604c ) volatile DFE_CONTROL_5_t DFE_CONTROL_5;
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
		uint8_t MIDPOINT_SMALL_THRES_K_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MIDPOINT_LARGE_THRES_C_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MIDPOINT_LARGE_THRES_K_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
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
		uint8_t SUMF_BOOST_TARGET_C_LANE_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SUMF_BOOST_TARGET_K_LANE_7_0             : 8;	/*[31:24]     r/w 8'h0*/
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
__xdata __at( 0x6058 ) volatile TRAIN_CONTROL_2_t TRAIN_CONTROL_2;
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
		uint8_t RESERVED_12                              : 4;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:12]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:12]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_t;
__xdata __at( 0x6064 ) volatile DLL_CAL_t DLL_CAL;
#define lnx_DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0  DLL_CAL.BF.DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0
#define lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0  DLL_CAL.BF.DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0
#define lnx_DLL_EOM_GMSEL_MIN_LANE_3_0  DLL_CAL.BF.DLL_EOM_GMSEL_MIN_LANE_3_0
#define lnx_DLL_GMSEL_MIN_LANE_3_0  DLL_CAL.BF.DLL_GMSEL_MIN_LANE_3_0

// 0x0068	CLI_ARG		CLI Argument
typedef union {
	struct {
		uint8_t CLI_CMD_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CLI_START_LANE                           : 1;	/*      8     r/w   0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w 7'h0*/
		uint8_t TRAIN_PH_OS_ESM_2C_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_PH_OS_DATA_2C_LANE_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CLI_ARG_t;
__xdata __at( 0x6068 ) volatile CLI_ARG_t CLI_ARG;
#define lnx_CLI_CMD_LANE_7_0  CLI_ARG.BF.CLI_CMD_LANE_7_0
#define lnx_CLI_START_LANE  CLI_ARG.BF.CLI_START_LANE
#define lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0  CLI_ARG.BF.TRAIN_PH_OS_ESM_2C_LANE_7_0
#define lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0  CLI_ARG.BF.TRAIN_PH_OS_DATA_2C_LANE_7_0

// 0x006c	MCU_COMMAND0_LANE		Lane MCU Command Register 0
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
__xdata __at( 0x606c ) volatile MCU_COMMAND0_LANE_t MCU_COMMAND0_LANE;
#define lnx_MCU_COMMAND0_LANE_31_0_b0  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b0
#define lnx_MCU_COMMAND0_LANE_31_0_b1  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b1
#define lnx_MCU_COMMAND0_LANE_31_0_b2  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b2
#define lnx_MCU_COMMAND0_LANE_31_0_b3  MCU_COMMAND0_LANE.BF.MCU_COMMAND0_LANE_31_0_b3

// 0x0070	CAL_STATUS_READ		Calibration Status
typedef union {
	struct {
		uint8_t PLLDCC_CAL_DONE_LANE                     : 1;	/*      0       r   0*/
		uint8_t PLL_CAL_DONE_LANE                        : 1;	/*      1       r   0*/
		uint8_t PLL_TEMP_CAL_DONE_LANE                   : 1;	/*      2       r   0*/
		uint8_t PLL_AMP_CAL_DONE_LANE                    : 1;	/*      3       r   0*/
		uint8_t PROCESS_CAL_DONE_LANE                    : 1;	/*      4       r   0*/
		uint8_t PLL_CAL_PASS_LANE                        : 1;	/*      5       r   0*/
		uint8_t PLL_TEMP_CAL_PASS_LANE                   : 1;	/*      6       r   0*/
		uint8_t PLL_AMP_CAL_PASS_LANE                    : 1;	/*      7       r   0*/
		uint8_t PROCESS_CAL_PASS_LANE                    : 1;	/*      8       r   0*/
		uint8_t PLLDCC_CAL_PASS_LANE                     : 1;	/*      9       r   0*/
		uint8_t RESERVED_10                              : 6;	/*[31:10]     r/w 22'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:10]     r/w 22'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:10]     r/w 22'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_STATUS_READ_t;
__xdata __at( 0x6070 ) volatile CAL_STATUS_READ_t CAL_STATUS_READ;
#define lnx_PLLDCC_CAL_DONE_LANE  CAL_STATUS_READ.BF.PLLDCC_CAL_DONE_LANE
#define lnx_PLL_CAL_DONE_LANE  CAL_STATUS_READ.BF.PLL_CAL_DONE_LANE
#define lnx_PLL_TEMP_CAL_DONE_LANE  CAL_STATUS_READ.BF.PLL_TEMP_CAL_DONE_LANE
#define lnx_PLL_AMP_CAL_DONE_LANE  CAL_STATUS_READ.BF.PLL_AMP_CAL_DONE_LANE
#define lnx_PROCESS_CAL_DONE_LANE  CAL_STATUS_READ.BF.PROCESS_CAL_DONE_LANE
#define lnx_PLL_CAL_PASS_LANE  CAL_STATUS_READ.BF.PLL_CAL_PASS_LANE
#define lnx_PLL_TEMP_CAL_PASS_LANE  CAL_STATUS_READ.BF.PLL_TEMP_CAL_PASS_LANE
#define lnx_PLL_AMP_CAL_PASS_LANE  CAL_STATUS_READ.BF.PLL_AMP_CAL_PASS_LANE
#define lnx_PROCESS_CAL_PASS_LANE  CAL_STATUS_READ.BF.PROCESS_CAL_PASS_LANE
#define lnx_PLLDCC_CAL_PASS_LANE  CAL_STATUS_READ.BF.PLLDCC_CAL_PASS_LANE

#endif
