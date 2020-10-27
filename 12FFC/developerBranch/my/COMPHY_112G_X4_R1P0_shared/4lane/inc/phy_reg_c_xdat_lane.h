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
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
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
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_CONTROL_2_t;
__xdata __at( 0x6040 ) volatile DFE_CONTROL_2_t DFE_CONTROL_2;
#define lnx_DFE_DBG_STEP_LANE_7_0  DFE_CONTROL_2.BF.DFE_DBG_STEP_LANE_7_0
#define lnx_ADAPTED_PHASE_OFFSET_DATA_LANE_7_0  DFE_CONTROL_2.BF.ADAPTED_PHASE_OFFSET_DATA_LANE_7_0

// 0x0044	DFE_CONTROL_3		
typedef union {
	struct {
		uint8_t FINAL_GAIN_ADJUST_EN_LANE                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 2;	/*  [2:1]     r/w   0*/
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
		uint8_t RXFFE_R_GAIN_TRAIN_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
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
		uint8_t TEMP_WORKAROUND_PH_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TEMP_WORKAROUND_DFE_LANE_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t FN2_THRE_LANE_7_0                        : 8;	/*[23:16]     r/w   0*/
		uint8_t FN1_THRE_LANE_7_0                        : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_t;
__xdata __at( 0x6064 ) volatile DLL_CAL_t DLL_CAL;
#define lnx_TEMP_WORKAROUND_PH_LANE_7_0  DLL_CAL.BF.TEMP_WORKAROUND_PH_LANE_7_0
#define lnx_TEMP_WORKAROUND_DFE_LANE_7_0  DLL_CAL.BF.TEMP_WORKAROUND_DFE_LANE_7_0
#define lnx_FN2_THRE_LANE_7_0  DLL_CAL.BF.FN2_THRE_LANE_7_0
#define lnx_FN1_THRE_LANE_7_0  DLL_CAL.BF.FN1_THRE_LANE_7_0

// 0x0068	CLI_ARG		CLI Argument
typedef union {
	struct {
		uint8_t CLI_CMD_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CLI_START_LANE                           : 1;	/*      8     r/w   0*/
		uint8_t FORCE_CDS_CTRL_EN_LANE                   : 1;	/*      9     r/w   0*/
		uint8_t FORCE_CDS_STATE_LANE                     : 1;	/*     10     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w 5'h0*/
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
#define lnx_FORCE_CDS_CTRL_EN_LANE  CLI_ARG.BF.FORCE_CDS_CTRL_EN_LANE
#define lnx_FORCE_CDS_STATE_LANE  CLI_ARG.BF.FORCE_CDS_STATE_LANE
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

// 0x0074	CAL_STATUS_READ		Calibration Status
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
__xdata __at( 0x6074 ) volatile CAL_STATUS_READ_t CAL_STATUS_READ;
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

// 0x007c	TRAIN_CONTROL_3		
typedef union {
	struct {
		uint8_t TRAIN_F1_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_F2_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_F0X_LANE_7_0                       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_3_t;
__xdata __at( 0x607c ) volatile TRAIN_CONTROL_3_t TRAIN_CONTROL_3;
#define lnx_TRAIN_F1_LANE_7_0  TRAIN_CONTROL_3.BF.TRAIN_F1_LANE_7_0
#define lnx_TRAIN_F2_LANE_7_0  TRAIN_CONTROL_3.BF.TRAIN_F2_LANE_7_0
#define lnx_TRAIN_F0X_LANE_7_0  TRAIN_CONTROL_3.BF.TRAIN_F0X_LANE_7_0

// 0x0080	TRAIN_CONTROL_4		
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
__xdata __at( 0x6080 ) volatile TRAIN_CONTROL_4_t TRAIN_CONTROL_4;
#define lnx_TRAIN_FN1_LANE_7_0  TRAIN_CONTROL_4.BF.TRAIN_FN1_LANE_7_0
#define lnx_TRAIN_F7_LANE_7_0  TRAIN_CONTROL_4.BF.TRAIN_F7_LANE_7_0
#define lnx_TRAIN_F6_LANE_7_0  TRAIN_CONTROL_4.BF.TRAIN_F6_LANE_7_0
#define lnx_TRAIN_F5_LANE_7_0  TRAIN_CONTROL_4.BF.TRAIN_F5_LANE_7_0

// 0x0084	TRAIN_CONTROL_5		
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
__xdata __at( 0x6084 ) volatile TRAIN_CONTROL_5_t TRAIN_CONTROL_5;
#define lnx_TRAIN_DONE_LANE  TRAIN_CONTROL_5.BF.TRAIN_DONE_LANE
#define lnx_TRAIN_PASS_LANE  TRAIN_CONTROL_5.BF.TRAIN_PASS_LANE
#define lnx_TX_RESET_LANE  TRAIN_CONTROL_5.BF.TX_RESET_LANE
#define lnx_EYE_CHECK_PASS_LANE  TRAIN_CONTROL_5.BF.EYE_CHECK_PASS_LANE
#define lnx_G0_INDEX_LANE_7_0  TRAIN_CONTROL_5.BF.G0_INDEX_LANE_7_0
#define lnx_G1_INDEX_LANE_7_0  TRAIN_CONTROL_5.BF.G1_INDEX_LANE_7_0
#define lnx_GN1_INDEX_LANE_7_0  TRAIN_CONTROL_5.BF.GN1_INDEX_LANE_7_0

// 0x0088	TRAIN_CONTROL_6		
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
__xdata __at( 0x6088 ) volatile TRAIN_CONTROL_6_t TRAIN_CONTROL_6;
#define lnx_GN2_INDEX_LANE_7_0  TRAIN_CONTROL_6.BF.GN2_INDEX_LANE_7_0
#define lnx_TRAIN_F4_LANE_7_0  TRAIN_CONTROL_6.BF.TRAIN_F4_LANE_7_0
#define lnx_TRAIN_F3_LANE_7_0  TRAIN_CONTROL_6.BF.TRAIN_F3_LANE_7_0
#define lnx_TRAIN_FN2_LANE_7_0  TRAIN_CONTROL_6.BF.TRAIN_FN2_LANE_7_0

// 0x008c	TRAIN_CONTROL_7		
typedef union {
	struct {
		uint8_t TRAIN_BOOST_LANE_15_0_b0                 : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t TRAIN_BOOST_LANE_15_0_b1                 : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRAIN_CONTROL_7_t;
__xdata __at( 0x608c ) volatile TRAIN_CONTROL_7_t TRAIN_CONTROL_7;
#define lnx_TRAIN_BOOST_LANE_15_0_b0  TRAIN_CONTROL_7.BF.TRAIN_BOOST_LANE_15_0_b0
#define lnx_TRAIN_BOOST_LANE_15_0_b1  TRAIN_CONTROL_7.BF.TRAIN_BOOST_LANE_15_0_b1
#define lnx_TRAIN_BOOST_LANE_15_0  TRAIN_CONTROL_7.WT.W0

// 0x0090	ALIGN90EE_CONTROL_0		Align90 EE Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [13:0]     r/w 14'h0*/
		uint8_t RESERVED_8                               : 6;	/* [13:0]     r/w 14'h0*/
		uint8_t ALIGN90EE_ADAPT_FREEZE_LANE              : 1;	/*     14     r/w   0*/
		uint8_t ALIGN90EE_ADAPT_BYPASS_LANE              : 1;	/*     15     r/w   0*/
		uint8_t ALIGN90EE_ACC_THRESH_LANE_15_0_b0        : 8;	/*[31:16]     r/w 16'h400*/
		uint8_t ALIGN90EE_ACC_THRESH_LANE_15_0_b1        : 8;	/*[31:16]     r/w 16'h400*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} ALIGN90EE_CONTROL_0_t;
__xdata __at( 0x6090 ) volatile ALIGN90EE_CONTROL_0_t ALIGN90EE_CONTROL_0;
#define lnx_ALIGN90EE_ADAPT_FREEZE_LANE  ALIGN90EE_CONTROL_0.BF.ALIGN90EE_ADAPT_FREEZE_LANE
#define lnx_ALIGN90EE_ADAPT_BYPASS_LANE  ALIGN90EE_CONTROL_0.BF.ALIGN90EE_ADAPT_BYPASS_LANE
#define lnx_ALIGN90EE_ACC_THRESH_LANE_15_0_b0  ALIGN90EE_CONTROL_0.BF.ALIGN90EE_ACC_THRESH_LANE_15_0_b0
#define lnx_ALIGN90EE_ACC_THRESH_LANE_15_0_b1  ALIGN90EE_CONTROL_0.BF.ALIGN90EE_ACC_THRESH_LANE_15_0_b1
#define lnx_ALIGN90EE_ACC_THRESH_LANE_15_0  ALIGN90EE_CONTROL_0.WT.W1

// 0x0094	ALIGN90EE_CONTROL_1		Align90 EE Register 1
typedef union {
	struct {
		uint8_t ALIGN90EE_REF_MIN_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h74*/
		uint8_t ALIGN90EE_REF_MAX_LANE_7_0               : 8;	/* [15:8]     r/w 8'h88*/
		uint8_t ALIGN90EE_REF_DEFAULT_LANE_7_0           : 8;	/*[23:16]     r/w 8'h7e*/
		uint8_t ALIGN90EE_CON_PAT_WINDOW_LANE_7_0        : 8;	/*[31:24]     r/w 8'h08*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ALIGN90EE_CONTROL_1_t;
__xdata __at( 0x6094 ) volatile ALIGN90EE_CONTROL_1_t ALIGN90EE_CONTROL_1;
#define lnx_ALIGN90EE_REF_MIN_LANE_7_0  ALIGN90EE_CONTROL_1.BF.ALIGN90EE_REF_MIN_LANE_7_0
#define lnx_ALIGN90EE_REF_MAX_LANE_7_0  ALIGN90EE_CONTROL_1.BF.ALIGN90EE_REF_MAX_LANE_7_0
#define lnx_ALIGN90EE_REF_DEFAULT_LANE_7_0  ALIGN90EE_CONTROL_1.BF.ALIGN90EE_REF_DEFAULT_LANE_7_0
#define lnx_ALIGN90EE_CON_PAT_WINDOW_LANE_7_0  ALIGN90EE_CONTROL_1.BF.ALIGN90EE_CON_PAT_WINDOW_LANE_7_0

// 0x0098	TEST_CONTROL_1		test EE Register 1
typedef union {
	struct {
		uint8_t TEST4_LANE_7_0                           : 8;	/*  [7:0]     r/w 8'h74*/
		uint8_t TEST3_LANE_7_0                           : 8;	/* [15:8]     r/w 8'h88*/
		uint8_t TEST2_LANE_7_0                           : 8;	/*[23:16]     r/w 8'h7e*/
		uint8_t TEST1_LANE_7_0                           : 8;	/*[31:24]     r/w 8'h08*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TEST_CONTROL_1_t;
__xdata __at( 0x6098 ) volatile TEST_CONTROL_1_t TEST_CONTROL_1;
#define lnx_TEST4_LANE_7_0  TEST_CONTROL_1.BF.TEST4_LANE_7_0
#define lnx_TEST3_LANE_7_0  TEST_CONTROL_1.BF.TEST3_LANE_7_0
#define lnx_TEST2_LANE_7_0  TEST_CONTROL_1.BF.TEST2_LANE_7_0
#define lnx_TEST1_LANE_7_0  TEST_CONTROL_1.BF.TEST1_LANE_7_0

// 0x009c	TRAIN_CONTROL_8		
typedef union {
	struct {
		uint8_t PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b0      : 8;	/* [15:0]     r/w 16'h3e8*/
		uint8_t PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b1      : 8;	/* [15:0]     r/w 16'h3e8*/
		uint8_t UART_EN_LANE                             : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[31:17]     r/w 15'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:17]     r/w 15'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRAIN_CONTROL_8_t;
__xdata __at( 0x609c ) volatile TRAIN_CONTROL_8_t TRAIN_CONTROL_8;
#define lnx_PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b0  TRAIN_CONTROL_8.BF.PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b0
#define lnx_PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b1  TRAIN_CONTROL_8.BF.PT_OUT_TIME_TRAIN_COMP_LANE_15_0_b1
#define lnx_UART_EN_LANE  TRAIN_CONTROL_8.BF.UART_EN_LANE
#define lnx_PT_OUT_TIME_TRAIN_COMP_LANE_15_0  TRAIN_CONTROL_8.WT.W0

// 0x00a0	DFE_POWER_SAVING		
typedef union {
	struct {
		uint8_t DFE_POWER_SAVING_TEMP_DFE_ON_TIME_7_0    : 8;	/*  [7:0]     r/w 8'hff*/
		uint8_t DFE_POWER_SAVING_CLKOFF_TIME_15_8        : 8;	/* [15:8]     r/w 8'h00*/
		uint8_t DFE_POWER_SAVING_TEMP_PREVIOUS_23_16     : 8;	/*[23:16]       r 8'h00*/
		uint8_t DFE_POWER_SAVING_TEMP_DELTA_29_24        : 6;	/*[29:24]     r/w 6'h00*/
		uint8_t DFE_POWER_SAVING_TEMP_CHANGED_FLAG       : 1;	/*     30       r   0*/
		uint8_t DFE_POWER_SAVING_DFE_OFF_FLAG            : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_POWER_SAVING_t;
__xdata __at( 0x60a0 ) volatile DFE_POWER_SAVING_t DFE_POWER_SAVING;
#define lnx_DFE_POWER_SAVING_TEMP_DFE_ON_TIME_7_0  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_TEMP_DFE_ON_TIME_7_0
#define lnx_DFE_POWER_SAVING_CLKOFF_TIME_15_8  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_CLKOFF_TIME_15_8
#define lnx_DFE_POWER_SAVING_TEMP_PREVIOUS_23_16  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_TEMP_PREVIOUS_23_16
#define lnx_DFE_POWER_SAVING_TEMP_DELTA_29_24  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_TEMP_DELTA_29_24
#define lnx_DFE_POWER_SAVING_TEMP_CHANGED_FLAG  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_TEMP_CHANGED_FLAG
#define lnx_DFE_POWER_SAVING_DFE_OFF_FLAG  DFE_POWER_SAVING.BF.DFE_POWER_SAVING_DFE_OFF_FLAG

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
		uint8_t TRAIN_DEBUG0_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG1_LANE_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG2_LANE_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG3_LANE_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_DEBUG_0_t;
__xdata __at( 0x60a8 ) volatile TRAIN_DEBUG_0_t TRAIN_DEBUG_0;
#define lnx_TRAIN_DEBUG0_LANE_7_0  TRAIN_DEBUG_0.BF.TRAIN_DEBUG0_LANE_7_0
#define lnx_TRAIN_DEBUG1_LANE_7_0  TRAIN_DEBUG_0.BF.TRAIN_DEBUG1_LANE_7_0
#define lnx_TRAIN_DEBUG2_LANE_7_0  TRAIN_DEBUG_0.BF.TRAIN_DEBUG2_LANE_7_0
#define lnx_TRAIN_DEBUG3_LANE_7_0  TRAIN_DEBUG_0.BF.TRAIN_DEBUG3_LANE_7_0

// 0x00ac	TRAIN_DEBUG_1		
typedef union {
	struct {
		uint8_t TRAIN_DEBUG4_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG5_LANE_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG6_LANE_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG7_LANE_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_DEBUG_1_t;
__xdata __at( 0x60ac ) volatile TRAIN_DEBUG_1_t TRAIN_DEBUG_1;
#define lnx_TRAIN_DEBUG4_LANE_7_0  TRAIN_DEBUG_1.BF.TRAIN_DEBUG4_LANE_7_0
#define lnx_TRAIN_DEBUG5_LANE_7_0  TRAIN_DEBUG_1.BF.TRAIN_DEBUG5_LANE_7_0
#define lnx_TRAIN_DEBUG6_LANE_7_0  TRAIN_DEBUG_1.BF.TRAIN_DEBUG6_LANE_7_0
#define lnx_TRAIN_DEBUG7_LANE_7_0  TRAIN_DEBUG_1.BF.TRAIN_DEBUG7_LANE_7_0

// 0x00b0	TRAIN_DEBUG_2		
typedef union {
	struct {
		uint8_t TRAIN_DEBUG8_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_DEBUG9_LANE_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_DEBUGA_LANE_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_DEBUGB_LANE_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_DEBUG_2_t;
__xdata __at( 0x60b0 ) volatile TRAIN_DEBUG_2_t TRAIN_DEBUG_2;
#define lnx_TRAIN_DEBUG8_LANE_7_0  TRAIN_DEBUG_2.BF.TRAIN_DEBUG8_LANE_7_0
#define lnx_TRAIN_DEBUG9_LANE_7_0  TRAIN_DEBUG_2.BF.TRAIN_DEBUG9_LANE_7_0
#define lnx_TRAIN_DEBUGA_LANE_7_0  TRAIN_DEBUG_2.BF.TRAIN_DEBUGA_LANE_7_0
#define lnx_TRAIN_DEBUGB_LANE_7_0  TRAIN_DEBUG_2.BF.TRAIN_DEBUGB_LANE_7_0

// 0x00b4	TRAIN_DEBUG_3		
typedef union {
	struct {
		uint8_t TRAIN_DEBUGC_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_DEBUGD_LANE_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_DEBUGE_LANE_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_DEBUGF_LANE_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_DEBUG_3_t;
__xdata __at( 0x60b4 ) volatile TRAIN_DEBUG_3_t TRAIN_DEBUG_3;
#define lnx_TRAIN_DEBUGC_LANE_7_0  TRAIN_DEBUG_3.BF.TRAIN_DEBUGC_LANE_7_0
#define lnx_TRAIN_DEBUGD_LANE_7_0  TRAIN_DEBUG_3.BF.TRAIN_DEBUGD_LANE_7_0
#define lnx_TRAIN_DEBUGE_LANE_7_0  TRAIN_DEBUG_3.BF.TRAIN_DEBUGE_LANE_7_0
#define lnx_TRAIN_DEBUGF_LANE_7_0  TRAIN_DEBUG_3.BF.TRAIN_DEBUGF_LANE_7_0

// 0x00b8	CTLE_DEBUG_0		
typedef union {
	struct {
		uint8_t CTLE_DEBUG0_LANE_7_0                     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CTLE_DEBUG1_LANE_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CTLE_DEBUG2_LANE_7_0                     : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CTLE_DEBUG3_LANE_7_0                     : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CTLE_DEBUG_0_t;
__xdata __at( 0x60b8 ) volatile CTLE_DEBUG_0_t CTLE_DEBUG_0;
#define lnx_CTLE_DEBUG0_LANE_7_0  CTLE_DEBUG_0.BF.CTLE_DEBUG0_LANE_7_0
#define lnx_CTLE_DEBUG1_LANE_7_0  CTLE_DEBUG_0.BF.CTLE_DEBUG1_LANE_7_0
#define lnx_CTLE_DEBUG2_LANE_7_0  CTLE_DEBUG_0.BF.CTLE_DEBUG2_LANE_7_0
#define lnx_CTLE_DEBUG3_LANE_7_0  CTLE_DEBUG_0.BF.CTLE_DEBUG3_LANE_7_0

// 0x00bc	PHASE_DEBUG_0		
typedef union {
	struct {
		uint8_t PHASE_DEBUG0_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t PHASE_DEBUG1_LANE_7_0                    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t PHASE_DEBUG2_LANE_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PHASE_DEBUG3_LANE_7_0                    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHASE_DEBUG_0_t;
__xdata __at( 0x60bc ) volatile PHASE_DEBUG_0_t PHASE_DEBUG_0;
#define lnx_PHASE_DEBUG0_LANE_7_0  PHASE_DEBUG_0.BF.PHASE_DEBUG0_LANE_7_0
#define lnx_PHASE_DEBUG1_LANE_7_0  PHASE_DEBUG_0.BF.PHASE_DEBUG1_LANE_7_0
#define lnx_PHASE_DEBUG2_LANE_7_0  PHASE_DEBUG_0.BF.PHASE_DEBUG2_LANE_7_0
#define lnx_PHASE_DEBUG3_LANE_7_0  PHASE_DEBUG_0.BF.PHASE_DEBUG3_LANE_7_0

// 0x00c0	CALIBRATION_DEBUG_0		
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
__xdata __at( 0x60c0 ) volatile CALIBRATION_DEBUG_0_t CALIBRATION_DEBUG_0;
#define lnx_CALIBRATION_DEBUG0_LANE_7_0  CALIBRATION_DEBUG_0.BF.CALIBRATION_DEBUG0_LANE_7_0
#define lnx_CALIBRATION_DEBUG1_LANE_7_0  CALIBRATION_DEBUG_0.BF.CALIBRATION_DEBUG1_LANE_7_0
#define lnx_CALIBRATION_DEBUG2_LANE_7_0  CALIBRATION_DEBUG_0.BF.CALIBRATION_DEBUG2_LANE_7_0
#define lnx_CALIBRATION_DEBUG3_LANE_7_0  CALIBRATION_DEBUG_0.BF.CALIBRATION_DEBUG3_LANE_7_0

// 0x00c4	SPEED_CHANGE_DEBUG_0		
typedef union {
	struct {
		uint8_t SPEED_CHANGE_DEBUG0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SPEED_CHANGE_DEBUG1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SPEED_CHANGE_DEBUG2_LANE_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SPEED_CHANGE_DEBUG3_LANE_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} SPEED_CHANGE_DEBUG_0_t;
__xdata __at( 0x60c4 ) volatile SPEED_CHANGE_DEBUG_0_t SPEED_CHANGE_DEBUG_0;
#define lnx_SPEED_CHANGE_DEBUG0_LANE_7_0  SPEED_CHANGE_DEBUG_0.BF.SPEED_CHANGE_DEBUG0_LANE_7_0
#define lnx_SPEED_CHANGE_DEBUG1_LANE_7_0  SPEED_CHANGE_DEBUG_0.BF.SPEED_CHANGE_DEBUG1_LANE_7_0
#define lnx_SPEED_CHANGE_DEBUG2_LANE_7_0  SPEED_CHANGE_DEBUG_0.BF.SPEED_CHANGE_DEBUG2_LANE_7_0
#define lnx_SPEED_CHANGE_DEBUG3_LANE_7_0  SPEED_CHANGE_DEBUG_0.BF.SPEED_CHANGE_DEBUG3_LANE_7_0

// 0x00c8	EOM_DEBUG_0		
typedef union {
	struct {
		uint8_t EOM_DEBUG0_LANE_7_0                      : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t EOM_DEBUG1_LANE_7_0                      : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t EOM_DEBUG2_LANE_7_0                      : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t EOM_DEBUG3_LANE_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} EOM_DEBUG_0_t;
__xdata __at( 0x60c8 ) volatile EOM_DEBUG_0_t EOM_DEBUG_0;
#define lnx_EOM_DEBUG0_LANE_7_0  EOM_DEBUG_0.BF.EOM_DEBUG0_LANE_7_0
#define lnx_EOM_DEBUG1_LANE_7_0  EOM_DEBUG_0.BF.EOM_DEBUG1_LANE_7_0
#define lnx_EOM_DEBUG2_LANE_7_0  EOM_DEBUG_0.BF.EOM_DEBUG2_LANE_7_0
#define lnx_EOM_DEBUG3_LANE_7_0  EOM_DEBUG_0.BF.EOM_DEBUG3_LANE_7_0

// 0x00cc	INTERRUPT_DEBUG_0		
typedef union {
	struct {
		uint8_t INTERRUPT_DEBUG0_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t INTERRUPT_DEBUG1_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INTERRUPT_DEBUG2_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t INTERRUPT_DEBUG3_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} INTERRUPT_DEBUG_0_t;
__xdata __at( 0x60cc ) volatile INTERRUPT_DEBUG_0_t INTERRUPT_DEBUG_0;
#define lnx_INTERRUPT_DEBUG0_LANE_7_0  INTERRUPT_DEBUG_0.BF.INTERRUPT_DEBUG0_LANE_7_0
#define lnx_INTERRUPT_DEBUG1_LANE_7_0  INTERRUPT_DEBUG_0.BF.INTERRUPT_DEBUG1_LANE_7_0
#define lnx_INTERRUPT_DEBUG2_LANE_7_0  INTERRUPT_DEBUG_0.BF.INTERRUPT_DEBUG2_LANE_7_0
#define lnx_INTERRUPT_DEBUG3_LANE_7_0  INTERRUPT_DEBUG_0.BF.INTERRUPT_DEBUG3_LANE_7_0

// 0x00d0	CLI_DEBUG_0		
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
__xdata __at( 0x60d0 ) volatile CLI_DEBUG_0_t CLI_DEBUG_0;
#define lnx_CLI_DEBUG0_LANE_7_0  CLI_DEBUG_0.BF.CLI_DEBUG0_LANE_7_0
#define lnx_CLI_DEBUG1_LANE_7_0  CLI_DEBUG_0.BF.CLI_DEBUG1_LANE_7_0
#define lnx_CLI_DEBUG2_LANE_7_0  CLI_DEBUG_0.BF.CLI_DEBUG2_LANE_7_0
#define lnx_CLI_DEBUG3_LANE_7_0  CLI_DEBUG_0.BF.CLI_DEBUG3_LANE_7_0

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

// 0x00dc	MCU_RESERVED_1		
typedef union {
	struct {
		uint8_t MCU_RESERVEDX04_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX05_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX06_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX07_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_RESERVED_1_t;
__xdata __at( 0x60dc ) volatile MCU_RESERVED_1_t MCU_RESERVED_1;
#define lnx_MCU_RESERVEDX04_LANE_7_0  MCU_RESERVED_1.BF.MCU_RESERVEDX04_LANE_7_0
#define lnx_MCU_RESERVEDX05_LANE_7_0  MCU_RESERVED_1.BF.MCU_RESERVEDX05_LANE_7_0
#define lnx_MCU_RESERVEDX06_LANE_7_0  MCU_RESERVED_1.BF.MCU_RESERVEDX06_LANE_7_0
#define lnx_MCU_RESERVEDX07_LANE_7_0  MCU_RESERVED_1.BF.MCU_RESERVEDX07_LANE_7_0

// 0x00e0	MCU_RESERVED_2		
typedef union {
	struct {
		uint8_t MCU_RESERVEDX08_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX09_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX0A_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX0B_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_RESERVED_2_t;
__xdata __at( 0x60e0 ) volatile MCU_RESERVED_2_t MCU_RESERVED_2;
#define lnx_MCU_RESERVEDX08_LANE_7_0  MCU_RESERVED_2.BF.MCU_RESERVEDX08_LANE_7_0
#define lnx_MCU_RESERVEDX09_LANE_7_0  MCU_RESERVED_2.BF.MCU_RESERVEDX09_LANE_7_0
#define lnx_MCU_RESERVEDX0A_LANE_7_0  MCU_RESERVED_2.BF.MCU_RESERVEDX0A_LANE_7_0
#define lnx_MCU_RESERVEDX0B_LANE_7_0  MCU_RESERVED_2.BF.MCU_RESERVEDX0B_LANE_7_0

// 0x00e4	MCU_RESERVED_3		
typedef union {
	struct {
		uint8_t MCU_RESERVEDX0C_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX0D_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX0E_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX0F_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_RESERVED_3_t;
__xdata __at( 0x60e4 ) volatile MCU_RESERVED_3_t MCU_RESERVED_3;
#define lnx_MCU_RESERVEDX0C_LANE_7_0  MCU_RESERVED_3.BF.MCU_RESERVEDX0C_LANE_7_0
#define lnx_MCU_RESERVEDX0D_LANE_7_0  MCU_RESERVED_3.BF.MCU_RESERVEDX0D_LANE_7_0
#define lnx_MCU_RESERVEDX0E_LANE_7_0  MCU_RESERVED_3.BF.MCU_RESERVEDX0E_LANE_7_0
#define lnx_MCU_RESERVEDX0F_LANE_7_0  MCU_RESERVED_3.BF.MCU_RESERVEDX0F_LANE_7_0

// 0x00e8	MCU_RESERVED_4		
typedef union {
	struct {
		uint8_t MCU_RESERVEDX10_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX11_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX12_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX13_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_RESERVED_4_t;
__xdata __at( 0x60e8 ) volatile MCU_RESERVED_4_t MCU_RESERVED_4;
#define lnx_MCU_RESERVEDX10_LANE_7_0  MCU_RESERVED_4.BF.MCU_RESERVEDX10_LANE_7_0
#define lnx_MCU_RESERVEDX11_LANE_7_0  MCU_RESERVED_4.BF.MCU_RESERVEDX11_LANE_7_0
#define lnx_MCU_RESERVEDX12_LANE_7_0  MCU_RESERVED_4.BF.MCU_RESERVEDX12_LANE_7_0
#define lnx_MCU_RESERVEDX13_LANE_7_0  MCU_RESERVED_4.BF.MCU_RESERVEDX13_LANE_7_0

// 0x00ec	MCU_RESERVED_5		
typedef union {
	struct {
		uint8_t MCU_RESERVEDX14_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX15_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX16_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX17_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_RESERVED_5_t;
__xdata __at( 0x60ec ) volatile MCU_RESERVED_5_t MCU_RESERVED_5;
#define lnx_MCU_RESERVEDX14_LANE_7_0  MCU_RESERVED_5.BF.MCU_RESERVEDX14_LANE_7_0
#define lnx_MCU_RESERVEDX15_LANE_7_0  MCU_RESERVED_5.BF.MCU_RESERVEDX15_LANE_7_0
#define lnx_MCU_RESERVEDX16_LANE_7_0  MCU_RESERVED_5.BF.MCU_RESERVEDX16_LANE_7_0
#define lnx_MCU_RESERVEDX17_LANE_7_0  MCU_RESERVED_5.BF.MCU_RESERVEDX17_LANE_7_0

// 0x00f0	MCU_RESERVED_6		
typedef union {
	struct {
		uint8_t MCU_RESERVEDX18_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX19_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX1A_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX1B_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_RESERVED_6_t;
__xdata __at( 0x60f0 ) volatile MCU_RESERVED_6_t MCU_RESERVED_6;
#define lnx_MCU_RESERVEDX18_LANE_7_0  MCU_RESERVED_6.BF.MCU_RESERVEDX18_LANE_7_0
#define lnx_MCU_RESERVEDX19_LANE_7_0  MCU_RESERVED_6.BF.MCU_RESERVEDX19_LANE_7_0
#define lnx_MCU_RESERVEDX1A_LANE_7_0  MCU_RESERVED_6.BF.MCU_RESERVEDX1A_LANE_7_0
#define lnx_MCU_RESERVEDX1B_LANE_7_0  MCU_RESERVED_6.BF.MCU_RESERVEDX1B_LANE_7_0

// 0x00f4	MCU_RESERVED_7		
typedef union {
	struct {
		uint8_t MCU_RESERVEDX1C_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX1D_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX1E_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX1F_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_RESERVED_7_t;
__xdata __at( 0x60f4 ) volatile MCU_RESERVED_7_t MCU_RESERVED_7;
#define lnx_MCU_RESERVEDX1C_LANE_7_0  MCU_RESERVED_7.BF.MCU_RESERVEDX1C_LANE_7_0
#define lnx_MCU_RESERVEDX1D_LANE_7_0  MCU_RESERVED_7.BF.MCU_RESERVEDX1D_LANE_7_0
#define lnx_MCU_RESERVEDX1E_LANE_7_0  MCU_RESERVED_7.BF.MCU_RESERVEDX1E_LANE_7_0
#define lnx_MCU_RESERVEDX1F_LANE_7_0  MCU_RESERVED_7.BF.MCU_RESERVEDX1F_LANE_7_0

// 0x00f8	MCU_RESERVED_8		
typedef union {
	struct {
		uint8_t MCU_RESERVEDX20_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX21_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX22_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t MCU_RESERVEDX23_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} MCU_RESERVED_8_t;
__xdata __at( 0x60f8 ) volatile MCU_RESERVED_8_t MCU_RESERVED_8;
#define lnx_MCU_RESERVEDX20_LANE_7_0  MCU_RESERVED_8.BF.MCU_RESERVEDX20_LANE_7_0
#define lnx_MCU_RESERVEDX21_LANE_7_0  MCU_RESERVED_8.BF.MCU_RESERVEDX21_LANE_7_0
#define lnx_MCU_RESERVEDX22_LANE_7_0  MCU_RESERVED_8.BF.MCU_RESERVEDX22_LANE_7_0
#define lnx_MCU_RESERVEDX23_LANE_7_0  MCU_RESERVED_8.BF.MCU_RESERVEDX23_LANE_7_0

// 0x00fc	END_XDAT_LANE		
typedef union {
	struct {
		uint8_t END_XDAT_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'haa*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} END_XDAT_LANE_t;
__xdata __at( 0x60fc ) volatile END_XDAT_LANE_t END_XDAT_LANE;
#define lnx_END_XDAT_LANE_7_0  END_XDAT_LANE.BF.END_XDAT_LANE_7_0

#endif
