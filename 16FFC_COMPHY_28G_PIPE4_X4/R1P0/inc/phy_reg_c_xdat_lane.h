#ifndef PHY_REG_C_XDAT_LANE_H
#define PHY_REG_C_XDAT_LANE_H



// 0x0000	CAL_CTRL1_LANE		Calibration Control Lane 1
typedef union {
	struct {
		uint8_t DLL_COMP_CAL_DONE_LANE                   : 1;	/*      0       r   0*/
		uint8_t DLL_GM_CAL_DONE_LANE                     : 1;	/*      1       r   0*/
		uint8_t DLL_VDATA_CAL_DONE_LANE                  : 1;	/*      2       r   0*/
		uint8_t DLL_EOM_GM_CAL_DONE_LANE                 : 1;	/*      3       r   0*/
		uint8_t DLL_EOM_VDATA_CAL_DONE_LANE              : 1;	/*      4       r   0*/
		uint8_t TXDETECT_CAL_DONE_LANE                   : 1;	/*      5       r   0*/
		uint8_t RXDCC_DLL_CAL_DONE_LANE                  : 1;	/*      6       r   0*/
		uint8_t RXDCC_C_CAL_DONE_LANE                    : 1;	/*      7       r   0*/
		uint8_t RXDCC_EOM_CAL_DONE_LANE                  : 1;	/*      8       r   0*/
		uint8_t RXALIGN90_CAL_DONE_LANE                  : 1;	/*      9       r   0*/
		uint8_t EOM_ALIGN_CAL_DONE_LANE                  : 1;	/*     10       r   0*/
		uint8_t SAMPLER_CAL_DONE_LANE                    : 1;	/*     11       r   0*/
		uint8_t SAMPLER_RES_CAL_DONE_LANE                : 1;	/*     12       r   0*/
		uint8_t TXIMP_CAL_DONE_LANE                      : 1;	/*     13       r   0*/
		uint8_t RXIMP_CAL_DONE_LANE                      : 1;	/*     14       r   0*/
		uint8_t VDD_CAL_DONE_LANE                        : 1;	/*     15       r   0*/
		uint8_t TXDCC_CAL_DONE_LANE                      : 1;	/*     16       r   0*/
		uint8_t DLL_VDDA_TRACKING_ON_LANE                : 1;	/*     17     r/w   0*/
		uint8_t TXDCC_CAL_STOP_SEL_LANE                  : 1;	/*     18     r/w   0*/
		uint8_t SQ_CAL_DONE_LANE                         : 1;	/*     19       r   0*/
		uint8_t RXDCC_CENTER_CAL_STOP_SEL_LANE           : 1;	/*     20     r/w   0*/
		uint8_t SAMPLER_CAL_AVG_MODE_LANE_1_0            : 2;	/*[22:21]     r/w 2'h0*/
		uint8_t TXDCC_PDIV_CAL_DONE_LANE                 : 1;	/*     23       r   0*/
		uint8_t SAMPLER_SAMPLE_SIZE_LANE_7_0             : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL1_LANE_t;
__xdata __at( 0x6000 ) volatile CAL_CTRL1_LANE_t CAL_CTRL1_LANE;
#define lnx_DLL_COMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.DLL_COMP_CAL_DONE_LANE
#define lnx_DLL_GM_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.DLL_GM_CAL_DONE_LANE
#define lnx_DLL_VDATA_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.DLL_VDATA_CAL_DONE_LANE
#define lnx_DLL_EOM_GM_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.DLL_EOM_GM_CAL_DONE_LANE
#define lnx_DLL_EOM_VDATA_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.DLL_EOM_VDATA_CAL_DONE_LANE
#define lnx_TXDETECT_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXDETECT_CAL_DONE_LANE
#define lnx_RXDCC_DLL_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXDCC_DLL_CAL_DONE_LANE
#define lnx_RXDCC_C_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXDCC_C_CAL_DONE_LANE
#define lnx_RXDCC_EOM_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXDCC_EOM_CAL_DONE_LANE
#define lnx_RXALIGN90_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXALIGN90_CAL_DONE_LANE
#define lnx_EOM_ALIGN_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.EOM_ALIGN_CAL_DONE_LANE
#define lnx_SAMPLER_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SAMPLER_CAL_DONE_LANE
#define lnx_SAMPLER_RES_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SAMPLER_RES_CAL_DONE_LANE
#define lnx_TXIMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXIMP_CAL_DONE_LANE
#define lnx_RXIMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXIMP_CAL_DONE_LANE
#define lnx_VDD_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.VDD_CAL_DONE_LANE
#define lnx_TXDCC_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXDCC_CAL_DONE_LANE
#define lnx_DLL_VDDA_TRACKING_ON_LANE  CAL_CTRL1_LANE.BF.DLL_VDDA_TRACKING_ON_LANE
#define lnx_TXDCC_CAL_STOP_SEL_LANE  CAL_CTRL1_LANE.BF.TXDCC_CAL_STOP_SEL_LANE
#define lnx_SQ_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SQ_CAL_DONE_LANE
#define lnx_RXDCC_CENTER_CAL_STOP_SEL_LANE  CAL_CTRL1_LANE.BF.RXDCC_CENTER_CAL_STOP_SEL_LANE
#define lnx_SAMPLER_CAL_AVG_MODE_LANE_1_0  CAL_CTRL1_LANE.BF.SAMPLER_CAL_AVG_MODE_LANE_1_0
#define lnx_TXDCC_PDIV_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXDCC_PDIV_CAL_DONE_LANE
#define lnx_SAMPLER_SAMPLE_SIZE_LANE_7_0  CAL_CTRL1_LANE.BF.SAMPLER_SAMPLE_SIZE_LANE_7_0

// 0x0004	CAL_CTRL2_LANE		Calibration Control Lane 2
typedef union {
	struct {
		uint8_t DLL_COMP_CAL_PASS_LANE                   : 1;	/*      0       r   0*/
		uint8_t DLL_GM_CAL_PASS_LANE                     : 1;	/*      1       r   0*/
		uint8_t DLL_VDATA_CAL_PASS_LANE                  : 1;	/*      2       r   0*/
		uint8_t DLL_EOM_GM_CAL_PASS_LANE                 : 1;	/*      3       r   0*/
		uint8_t DLL_EOM_VDATA_CAL_PASS_LANE              : 1;	/*      4       r   0*/
		uint8_t TXDETECT_CAL_PASS_LANE                   : 1;	/*      5       r   0*/
		uint8_t RXDCC_DLL_CAL_PASS_LANE                  : 1;	/*      6       r   0*/
		uint8_t RXDCC_C_CAL_PASS_LANE                    : 1;	/*      7       r   0*/
		uint8_t RXDCC_EOM_CAL_PASS_LANE                  : 1;	/*      8       r   0*/
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
		uint8_t SQ_CAL_PASS_LANE                         : 1;	/*     21       r   0*/
		uint8_t SELLV_TXCLK_PASS_LANE                    : 1;	/*     22       r   0*/
		uint8_t SELLV_TXDATA_PASS_LANE                   : 1;	/*     23       r   0*/
		uint8_t SELLV_TXPRE_PASS_LANE                    : 1;	/*     24       r   0*/
		uint8_t SELLV_RXINTP_PASS_LANE                   : 1;	/*     25       r   0*/
		uint8_t SELLV_RXDATACLK_PASS_LANE                : 1;	/*     26       r   0*/
		uint8_t SELLV_RXEOMCLK_PASS_LANE                 : 1;	/*     27       r   0*/
		uint8_t SELLV_RXSAMPLER_PASS_LANE                : 1;	/*     28       r   0*/
		uint8_t RESERVED_29                              : 1;	/*     29     r/w   0*/
		uint8_t DLL_CAL_DONE_LANE                        : 1;	/*     30       r   0*/
		uint8_t TXDCC_PDIV_CAL_PASS_LANE                 : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL2_LANE_t;
__xdata __at( 0x6004 ) volatile CAL_CTRL2_LANE_t CAL_CTRL2_LANE;
#define lnx_DLL_COMP_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_COMP_CAL_PASS_LANE
#define lnx_DLL_GM_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_GM_CAL_PASS_LANE
#define lnx_DLL_VDATA_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_VDATA_CAL_PASS_LANE
#define lnx_DLL_EOM_GM_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_EOM_GM_CAL_PASS_LANE
#define lnx_DLL_EOM_VDATA_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_EOM_VDATA_CAL_PASS_LANE
#define lnx_TXDETECT_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXDETECT_CAL_PASS_LANE
#define lnx_RXDCC_DLL_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RXDCC_DLL_CAL_PASS_LANE
#define lnx_RXDCC_C_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RXDCC_C_CAL_PASS_LANE
#define lnx_RXDCC_EOM_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RXDCC_EOM_CAL_PASS_LANE
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
#define lnx_SQ_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.SQ_CAL_PASS_LANE
#define lnx_SELLV_TXCLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_TXCLK_PASS_LANE
#define lnx_SELLV_TXDATA_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_TXDATA_PASS_LANE
#define lnx_SELLV_TXPRE_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_TXPRE_PASS_LANE
#define lnx_SELLV_RXINTP_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXINTP_PASS_LANE
#define lnx_SELLV_RXDATACLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXDATACLK_PASS_LANE
#define lnx_SELLV_RXEOMCLK_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXEOMCLK_PASS_LANE
#define lnx_SELLV_RXSAMPLER_PASS_LANE  CAL_CTRL2_LANE.BF.SELLV_RXSAMPLER_PASS_LANE
#define lnx_DLL_CAL_DONE_LANE  CAL_CTRL2_LANE.BF.DLL_CAL_DONE_LANE
#define lnx_TXDCC_PDIV_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXDCC_PDIV_CAL_PASS_LANE

// 0x0008	CAL_SAVE_DATA1_LANE		Calibration Result 1
typedef union {
	struct {
		uint8_t CAL_RXDCC_DLL_R0_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DLL_R1_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RXDCC_DLL_CAL_STOP_SEL_LANE              : 1;	/*     16     r/w   0*/
		uint8_t RXDCC_EOM_CAL_STOP_SEL_LANE              : 1;	/*     17     r/w   0*/
		uint8_t PLLCAL_ON_LANE                           : 1;	/*     18       r   0*/
		uint8_t LOAD_CAL_ON_LANE                         : 1;	/*     19       r   0*/
		uint8_t CAL_VDD_CONTINUOUS_MODE_EN_LANE          : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA1_LANE_t;
__xdata __at( 0x6008 ) volatile CAL_SAVE_DATA1_LANE_t CAL_SAVE_DATA1_LANE;
#define lnx_CAL_RXDCC_DLL_R0_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_RXDCC_DLL_R0_LANE_7_0
#define lnx_CAL_RXDCC_DLL_R1_LANE_7_0  CAL_SAVE_DATA1_LANE.BF.CAL_RXDCC_DLL_R1_LANE_7_0
#define lnx_RXDCC_DLL_CAL_STOP_SEL_LANE  CAL_SAVE_DATA1_LANE.BF.RXDCC_DLL_CAL_STOP_SEL_LANE
#define lnx_RXDCC_EOM_CAL_STOP_SEL_LANE  CAL_SAVE_DATA1_LANE.BF.RXDCC_EOM_CAL_STOP_SEL_LANE
#define lnx_PLLCAL_ON_LANE  CAL_SAVE_DATA1_LANE.BF.PLLCAL_ON_LANE
#define lnx_LOAD_CAL_ON_LANE  CAL_SAVE_DATA1_LANE.BF.LOAD_CAL_ON_LANE
#define lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE  CAL_SAVE_DATA1_LANE.BF.CAL_VDD_CONTINUOUS_MODE_EN_LANE

// 0x000c	CAL_SAVE_DATA2_LANE		Calibration Result 2
typedef union {
	struct {
		uint8_t CAL_RXDCC_DCLK_R0_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DCLK_R1_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_SAVE_DATA2_LANE_t;
__xdata __at( 0x600c ) volatile CAL_SAVE_DATA2_LANE_t CAL_SAVE_DATA2_LANE;
#define lnx_CAL_RXDCC_DCLK_R0_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_RXDCC_DCLK_R0_LANE_7_0
#define lnx_CAL_RXDCC_DCLK_R1_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_RXDCC_DCLK_R1_LANE_7_0

// 0x0010	CAL_SAVE_DATA3_LANE		Calibration Result 3
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOMCLK_R0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOMCLK_R1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CAL_SAVE_DATA3_LANE_t;
__xdata __at( 0x6010 ) volatile CAL_SAVE_DATA3_LANE_t CAL_SAVE_DATA3_LANE;
#define lnx_CAL_RXDCC_EOMCLK_R0_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_RXDCC_EOMCLK_R0_LANE_7_0
#define lnx_CAL_RXDCC_EOMCLK_R1_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_RXDCC_EOMCLK_R1_LANE_7_0

// 0x0014	CAL_SAVE_DATA4_LANE		Calibration Result 4
typedef union {
	struct {
		uint8_t CAL_EOM_DPHER_R0_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_EOM_DPHER_R1_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA4_LANE_t;
__xdata __at( 0x6014 ) volatile CAL_SAVE_DATA4_LANE_t CAL_SAVE_DATA4_LANE;
#define lnx_CAL_EOM_DPHER_R0_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_EOM_DPHER_R0_LANE_7_0
#define lnx_CAL_EOM_DPHER_R1_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_EOM_DPHER_R1_LANE_7_0
#define lnx_CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0  CAL_SAVE_DATA4_LANE.BF.CAL_EOM_ALIGN_COMP_OFSTDAC_LANE_7_0

// 0x0018	CAL_SAVE_DATA5_LANE		Calibration Result 5
typedef union {
	struct {
		uint8_t CAL_VDDA_DLL_SEL_R0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_VDDA_DLL_SEL_R1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_DLL_EOM_GMSEL_R0_LANE_7_0            : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_DLL_EOM_GMSEL_R1_LANE_7_0            : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA5_LANE_t;
__xdata __at( 0x6018 ) volatile CAL_SAVE_DATA5_LANE_t CAL_SAVE_DATA5_LANE;
#define lnx_CAL_VDDA_DLL_SEL_R0_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_VDDA_DLL_SEL_R0_LANE_7_0
#define lnx_CAL_VDDA_DLL_SEL_R1_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_VDDA_DLL_SEL_R1_LANE_7_0
#define lnx_CAL_DLL_EOM_GMSEL_R0_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_DLL_EOM_GMSEL_R0_LANE_7_0
#define lnx_CAL_DLL_EOM_GMSEL_R1_LANE_7_0  CAL_SAVE_DATA5_LANE.BF.CAL_DLL_EOM_GMSEL_R1_LANE_7_0

// 0x001c	CAL_SAVE_DATA6_LANE		Calibration Result 6
typedef union {
	struct {
		uint8_t CAL_DLL_CMP_OFFSET_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_DLL_GMSEL_R0_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_DLL_GMSEL_R1_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA6_LANE_t;
__xdata __at( 0x601c ) volatile CAL_SAVE_DATA6_LANE_t CAL_SAVE_DATA6_LANE;
#define lnx_CAL_DLL_CMP_OFFSET_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_DLL_CMP_OFFSET_LANE_7_0
#define lnx_CAL_DLL_GMSEL_R0_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_DLL_GMSEL_R0_LANE_7_0
#define lnx_CAL_DLL_GMSEL_R1_LANE_7_0  CAL_SAVE_DATA6_LANE.BF.CAL_DLL_GMSEL_R1_LANE_7_0

// 0x0020	CAL_SAVE_DATA7_LANE		Calibration Result 7
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DAC_R0_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_ALIGN90_DAC_R1_LANE_7_0              : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_R0_LANE            : 1;	/*     16     r/w   0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_R1_LANE            : 1;	/*     24     r/w   0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA7_LANE_t;
__xdata __at( 0x6020 ) volatile CAL_SAVE_DATA7_LANE_t CAL_SAVE_DATA7_LANE;
#define lnx_CAL_ALIGN90_DAC_R0_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_ALIGN90_DAC_R0_LANE_7_0
#define lnx_CAL_ALIGN90_DAC_R1_LANE_7_0  CAL_SAVE_DATA7_LANE.BF.CAL_ALIGN90_DAC_R1_LANE_7_0
#define lnx_CAL_ALIGN90_DUMMY_CLK_R0_LANE  CAL_SAVE_DATA7_LANE.BF.CAL_ALIGN90_DUMMY_CLK_R0_LANE
#define lnx_CAL_ALIGN90_DUMMY_CLK_R1_LANE  CAL_SAVE_DATA7_LANE.BF.CAL_ALIGN90_DUMMY_CLK_R1_LANE

// 0x0024	CAL_SAVE_DATA8_LANE		Calibration Result 8
typedef union {
	struct {
		uint8_t CAL_ALIGN90_GM_R0_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_ALIGN90_GM_R1_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_R0_LANE_7_0         : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_R1_LANE_7_0         : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA8_LANE_t;
__xdata __at( 0x6024 ) volatile CAL_SAVE_DATA8_LANE_t CAL_SAVE_DATA8_LANE;
#define lnx_CAL_ALIGN90_GM_R0_LANE_7_0  CAL_SAVE_DATA8_LANE.BF.CAL_ALIGN90_GM_R0_LANE_7_0
#define lnx_CAL_ALIGN90_GM_R1_LANE_7_0  CAL_SAVE_DATA8_LANE.BF.CAL_ALIGN90_GM_R1_LANE_7_0
#define lnx_CAL_VDDA_DLL_EOM_SEL_R0_LANE_7_0  CAL_SAVE_DATA8_LANE.BF.CAL_VDDA_DLL_EOM_SEL_R0_LANE_7_0
#define lnx_CAL_VDDA_DLL_EOM_SEL_R1_LANE_7_0  CAL_SAVE_DATA8_LANE.BF.CAL_VDDA_DLL_EOM_SEL_R1_LANE_7_0

// 0x0028	CAL_SAVE_DATA9_LANE		Calibration Result 9
typedef union {
	struct {
		uint8_t CAL_TXDCC_CNT_R0_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TXDCC_CNT_R1_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_ALIGN90_CMP_OFFSET_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RX_IMP_LANE_7_0                      : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA9_LANE_t;
__xdata __at( 0x6028 ) volatile CAL_SAVE_DATA9_LANE_t CAL_SAVE_DATA9_LANE;
#define lnx_CAL_TXDCC_CNT_R0_LANE_7_0  CAL_SAVE_DATA9_LANE.BF.CAL_TXDCC_CNT_R0_LANE_7_0
#define lnx_CAL_TXDCC_CNT_R1_LANE_7_0  CAL_SAVE_DATA9_LANE.BF.CAL_TXDCC_CNT_R1_LANE_7_0
#define lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0  CAL_SAVE_DATA9_LANE.BF.CAL_ALIGN90_CMP_OFFSET_LANE_7_0
#define lnx_CAL_RX_IMP_LANE_7_0  CAL_SAVE_DATA9_LANE.BF.CAL_RX_IMP_LANE_7_0

// 0x002c	CAL_SAVE_DATA10_LANE		Calibration Result 10
typedef union {
	struct {
		uint8_t CAL_TXIMP_TUNEN_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TXIMP_TUNEN0_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TXIMP_TUNEP_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TXIMP_TUNEP0_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA10_LANE_t;
__xdata __at( 0x602c ) volatile CAL_SAVE_DATA10_LANE_t CAL_SAVE_DATA10_LANE;
#define lnx_CAL_TXIMP_TUNEN_LANE_7_0  CAL_SAVE_DATA10_LANE.BF.CAL_TXIMP_TUNEN_LANE_7_0
#define lnx_CAL_TXIMP_TUNEN0_LANE_7_0  CAL_SAVE_DATA10_LANE.BF.CAL_TXIMP_TUNEN0_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP_LANE_7_0  CAL_SAVE_DATA10_LANE.BF.CAL_TXIMP_TUNEP_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP0_LANE_7_0  CAL_SAVE_DATA10_LANE.BF.CAL_TXIMP_TUNEP0_LANE_7_0

// 0x0030	CAL_SAVE_DATA11_LANE		Calibration Result 11
typedef union {
	struct {
		uint8_t CAL_OFST_F1P_D_E_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_OFST_F1N_D_E_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_OFST_F1P_D_O_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_OFST_F1N_D_O_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA11_LANE_t;
__xdata __at( 0x6030 ) volatile CAL_SAVE_DATA11_LANE_t CAL_SAVE_DATA11_LANE;
#define lnx_CAL_OFST_F1P_D_E_LANE_7_0  CAL_SAVE_DATA11_LANE.BF.CAL_OFST_F1P_D_E_LANE_7_0
#define lnx_CAL_OFST_F1N_D_E_LANE_7_0  CAL_SAVE_DATA11_LANE.BF.CAL_OFST_F1N_D_E_LANE_7_0
#define lnx_CAL_OFST_F1P_D_O_LANE_7_0  CAL_SAVE_DATA11_LANE.BF.CAL_OFST_F1P_D_O_LANE_7_0
#define lnx_CAL_OFST_F1N_D_O_LANE_7_0  CAL_SAVE_DATA11_LANE.BF.CAL_OFST_F1N_D_O_LANE_7_0

// 0x0034	CAL_SAVE_DATA12_LANE		Calibration Result 12
typedef union {
	struct {
		uint8_t CAL_OFST_F1P_S_E_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_OFST_F1N_S_E_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_OFST_F1P_S_O_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_OFST_F1N_S_O_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA12_LANE_t;
__xdata __at( 0x6034 ) volatile CAL_SAVE_DATA12_LANE_t CAL_SAVE_DATA12_LANE;
#define lnx_CAL_OFST_F1P_S_E_LANE_7_0  CAL_SAVE_DATA12_LANE.BF.CAL_OFST_F1P_S_E_LANE_7_0
#define lnx_CAL_OFST_F1N_S_E_LANE_7_0  CAL_SAVE_DATA12_LANE.BF.CAL_OFST_F1N_S_E_LANE_7_0
#define lnx_CAL_OFST_F1P_S_O_LANE_7_0  CAL_SAVE_DATA12_LANE.BF.CAL_OFST_F1P_S_O_LANE_7_0
#define lnx_CAL_OFST_F1N_S_O_LANE_7_0  CAL_SAVE_DATA12_LANE.BF.CAL_OFST_F1N_S_O_LANE_7_0

// 0x0038	CAL_SAVE_DATA13_LANE		Calibration Result 13
typedef union {
	struct {
		uint8_t CAL_OFST_EDGE_E_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_OFST_EDGE_O_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TXDCC_PDIV_CNT_R0_LANE_7_0           : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TXDCC_PDIV_CNT_R1_LANE_7_0           : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA13_LANE_t;
__xdata __at( 0x6038 ) volatile CAL_SAVE_DATA13_LANE_t CAL_SAVE_DATA13_LANE;
#define lnx_CAL_OFST_EDGE_E_LANE_7_0  CAL_SAVE_DATA13_LANE.BF.CAL_OFST_EDGE_E_LANE_7_0
#define lnx_CAL_OFST_EDGE_O_LANE_7_0  CAL_SAVE_DATA13_LANE.BF.CAL_OFST_EDGE_O_LANE_7_0
#define lnx_CAL_TXDCC_PDIV_CNT_R0_LANE_7_0  CAL_SAVE_DATA13_LANE.BF.CAL_TXDCC_PDIV_CNT_R0_LANE_7_0
#define lnx_CAL_TXDCC_PDIV_CNT_R1_LANE_7_0  CAL_SAVE_DATA13_LANE.BF.CAL_TXDCC_PDIV_CNT_R1_LANE_7_0

// 0x003c	CAL_SAVE_DATA14_LANE		Calibration Result 14
typedef union {
	struct {
		uint8_t CAL_SQ_OFFSET_LANE_7_0                   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SQ_THRESH_LANE_7_0                   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SAMPLER_RES_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA14_LANE_t;
__xdata __at( 0x603c ) volatile CAL_SAVE_DATA14_LANE_t CAL_SAVE_DATA14_LANE;
#define lnx_CAL_SQ_OFFSET_LANE_7_0  CAL_SAVE_DATA14_LANE.BF.CAL_SQ_OFFSET_LANE_7_0
#define lnx_CAL_SQ_THRESH_LANE_7_0  CAL_SAVE_DATA14_LANE.BF.CAL_SQ_THRESH_LANE_7_0
#define lnx_CAL_SAMPLER_RES_LANE_7_0  CAL_SAVE_DATA14_LANE.BF.CAL_SAMPLER_RES_LANE_7_0

// 0x0040	CAL_SAVE_DATA15_LANE		Calibration Result 15
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_R0_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SELLV_TXCLK_R1_LANE_7_0              : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SELLV_TXDATA_R0_LANE_7_0             : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SELLV_TXDATA_R1_LANE_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA15_LANE_t;
__xdata __at( 0x6040 ) volatile CAL_SAVE_DATA15_LANE_t CAL_SAVE_DATA15_LANE;
#define lnx_CAL_SELLV_TXCLK_R0_LANE_7_0  CAL_SAVE_DATA15_LANE.BF.CAL_SELLV_TXCLK_R0_LANE_7_0
#define lnx_CAL_SELLV_TXCLK_R1_LANE_7_0  CAL_SAVE_DATA15_LANE.BF.CAL_SELLV_TXCLK_R1_LANE_7_0
#define lnx_CAL_SELLV_TXDATA_R0_LANE_7_0  CAL_SAVE_DATA15_LANE.BF.CAL_SELLV_TXDATA_R0_LANE_7_0
#define lnx_CAL_SELLV_TXDATA_R1_LANE_7_0  CAL_SAVE_DATA15_LANE.BF.CAL_SELLV_TXDATA_R1_LANE_7_0

// 0x0044	CAL_SAVE_DATA16_LANE		Calibration Result 16
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_R0_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SELLV_TXPRE_R1_LANE_7_0              : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SELLV_RXDATACLK_R0_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SELLV_RXDATACLK_R1_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA16_LANE_t;
__xdata __at( 0x6044 ) volatile CAL_SAVE_DATA16_LANE_t CAL_SAVE_DATA16_LANE;
#define lnx_CAL_SELLV_TXPRE_R0_LANE_7_0  CAL_SAVE_DATA16_LANE.BF.CAL_SELLV_TXPRE_R0_LANE_7_0
#define lnx_CAL_SELLV_TXPRE_R1_LANE_7_0  CAL_SAVE_DATA16_LANE.BF.CAL_SELLV_TXPRE_R1_LANE_7_0
#define lnx_CAL_SELLV_RXDATACLK_R0_LANE_7_0  CAL_SAVE_DATA16_LANE.BF.CAL_SELLV_RXDATACLK_R0_LANE_7_0
#define lnx_CAL_SELLV_RXDATACLK_R1_LANE_7_0  CAL_SAVE_DATA16_LANE.BF.CAL_SELLV_RXDATACLK_R1_LANE_7_0

// 0x0048	CAL_SAVE_DATA17_LANE		Calibration Result 17
typedef union {
	struct {
		uint8_t CAL_SELLV_RXEOMCLK_R0_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_SELLV_RXEOMCLK_R1_LANE_7_0           : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SELLV_RXSAMPLER_R0_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SELLV_RXSAMPLER_R1_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA17_LANE_t;
__xdata __at( 0x6048 ) volatile CAL_SAVE_DATA17_LANE_t CAL_SAVE_DATA17_LANE;
#define lnx_CAL_SELLV_RXEOMCLK_R0_LANE_7_0  CAL_SAVE_DATA17_LANE.BF.CAL_SELLV_RXEOMCLK_R0_LANE_7_0
#define lnx_CAL_SELLV_RXEOMCLK_R1_LANE_7_0  CAL_SAVE_DATA17_LANE.BF.CAL_SELLV_RXEOMCLK_R1_LANE_7_0
#define lnx_CAL_SELLV_RXSAMPLER_R0_LANE_7_0  CAL_SAVE_DATA17_LANE.BF.CAL_SELLV_RXSAMPLER_R0_LANE_7_0
#define lnx_CAL_SELLV_RXSAMPLER_R1_LANE_7_0  CAL_SAVE_DATA17_LANE.BF.CAL_SELLV_RXSAMPLER_R1_LANE_7_0

// 0x004c	TRX_TRAIN_IF_TIMERS1_LANE		
typedef union {
	struct {
		uint8_t RX_TRAIN_TIMER_LANE_15_0_b0              : 8;	/* [15:0]     r/w 16'h3e8*/
		uint8_t RX_TRAIN_TIMER_LANE_15_0_b1              : 8;	/* [15:0]     r/w 16'h3e8*/
		uint8_t TX_TRAIN_FRAME_DET_TIMER_LANE_7_0        : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t TX_TRAIN_STATUS_DET_TIMER_LANE_7_0       : 8;	/*[31:24]     r/w 8'h03*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TRAIN_IF_TIMERS1_LANE_t;
__xdata __at( 0x604c ) volatile TRX_TRAIN_IF_TIMERS1_LANE_t TRX_TRAIN_IF_TIMERS1_LANE;
#define lnx_RX_TRAIN_TIMER_LANE_15_0_b0  TRX_TRAIN_IF_TIMERS1_LANE.BF.RX_TRAIN_TIMER_LANE_15_0_b0
#define lnx_RX_TRAIN_TIMER_LANE_15_0_b1  TRX_TRAIN_IF_TIMERS1_LANE.BF.RX_TRAIN_TIMER_LANE_15_0_b1
#define lnx_TX_TRAIN_FRAME_DET_TIMER_LANE_7_0  TRX_TRAIN_IF_TIMERS1_LANE.BF.TX_TRAIN_FRAME_DET_TIMER_LANE_7_0
#define lnx_TX_TRAIN_STATUS_DET_TIMER_LANE_7_0  TRX_TRAIN_IF_TIMERS1_LANE.BF.TX_TRAIN_STATUS_DET_TIMER_LANE_7_0
#define lnx_RX_TRAIN_TIMER_LANE_15_0  TRX_TRAIN_IF_TIMERS1_LANE.WT.W0

// 0x0050	TRX_TRAIN_IF_TIMERS2_LANE		
typedef union {
	struct {
		uint8_t TRX_TRAIN_TIMER_LANE_15_0_b0             : 8;	/* [15:0]     r/w 16'h3e8*/
		uint8_t TRX_TRAIN_TIMER_LANE_15_0_b1             : 8;	/* [15:0]     r/w 16'h3e8*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TRAIN_IF_TIMERS2_LANE_t;
__xdata __at( 0x6050 ) volatile TRX_TRAIN_IF_TIMERS2_LANE_t TRX_TRAIN_IF_TIMERS2_LANE;
#define lnx_TRX_TRAIN_TIMER_LANE_15_0_b0  TRX_TRAIN_IF_TIMERS2_LANE.BF.TRX_TRAIN_TIMER_LANE_15_0_b0
#define lnx_TRX_TRAIN_TIMER_LANE_15_0_b1  TRX_TRAIN_IF_TIMERS2_LANE.BF.TRX_TRAIN_TIMER_LANE_15_0_b1
#define lnx_TRX_TRAIN_TIMER_LANE_15_0  TRX_TRAIN_IF_TIMERS2_LANE.WT.W0

// 0x0054	TRX_TRAIN_IF_TIMERS_ENABLE_LANE		
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
__xdata __at( 0x6054 ) volatile TRX_TRAIN_IF_TIMERS_ENABLE_LANE_t TRX_TRAIN_IF_TIMERS_ENABLE_LANE;
#define lnx_TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_STATUS_DET_TIMEOUT_INT_LANE
#define lnx_FRAME_LOCK_SEL_TIMEOUT_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.FRAME_LOCK_SEL_TIMEOUT_LANE
#define lnx_TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_FRAME_DET_TIMER_ENABLE_LANE
#define lnx_TX_TRAIN_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_TIMER_ENABLE_LANE
#define lnx_RX_TRAIN_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.RX_TRAIN_TIMER_ENABLE_LANE
#define lnx_TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_TRAIN_STATUS_DET_TIMER_ENABLE_LANE

// 0x0058	DFE_CONTROL_0		
typedef union {
	struct {
		uint8_t DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b0      : 8;	/* [15:0]     r/w 16'h10*/
		uint8_t DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b1      : 8;	/* [15:0]     r/w 16'h10*/
		uint8_t DFE_FORCE_ZERO_LANE_7_0                  : 8;	/*[23:16]       r 8'h0*/
		uint8_t INI_PHASE_TRAIN_OFFSET_2C_LANE_7_0       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_CONTROL_0_t;
__xdata __at( 0x6058 ) volatile DFE_CONTROL_0_t DFE_CONTROL_0;
#define lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b0  DFE_CONTROL_0.BF.DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b0
#define lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b1  DFE_CONTROL_0.BF.DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0_b1
#define lnx_DFE_FORCE_ZERO_LANE_7_0  DFE_CONTROL_0.BF.DFE_FORCE_ZERO_LANE_7_0
#define lnx_INI_PHASE_TRAIN_OFFSET_2C_LANE_7_0  DFE_CONTROL_0.BF.INI_PHASE_TRAIN_OFFSET_2C_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_LOAD1_LANE_15_0  DFE_CONTROL_0.WT.W0

// 0x005c	DFE_CONTROL_1		
typedef union {
	struct {
		uint8_t SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE         : 1;	/*      0     r/w   0*/
		uint8_t SKIP_CDR_MAXF0P_LANE                     : 1;	/*      1     r/w 1'b0*/
		uint8_t F0D_MEASURE_DONE_LANE                    : 1;	/*      2       r 1'b0*/
		uint8_t EOM_READY_LANE                           : 1;	/*      3     r/w 1'b0*/
		uint8_t EOM_DFE_CALL_LANE                        : 1;	/*      4     r/w 1'b0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'b0*/
		uint8_t DFE_DBG_STEP_LANE                        : 1;	/*      6     r/w 1'b0*/
		uint8_t DFE_CAL_DONE_LANE                        : 1;	/*      7       r 1'b0*/
		uint8_t ESM_VOLTAGE_LANE_5_0                     : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t SKIP_CDR_MIDPOINT_LANE                   : 1;	/*     14     r/w   0*/
		uint8_t FORCE_PHASE_TRAIN_OFFSET_EN_LANE         : 1;	/*     15     r/w   0*/
		uint8_t BYPASS_RXTRAIN_LANE                      : 1;	/*     16     r/w   0*/
		uint8_t GAIN_TRAIN_END_EN_LANE                   : 1;	/*     17     r/w 1'h1*/
		uint8_t GAIN_TRAIN_INIT_EN_LANE                  : 1;	/*     18     r/w 1'h1*/
		uint8_t DFE_INIT_REG_LANE                        : 1;	/*     19     r/w 1'h0*/
		uint8_t PHASE_ADAPT_SAT_DETECT_LANE              : 1;	/*     20       r 1'h0*/
		uint8_t PHASE_ADAPT_TEMP_AUTO_EN_LANE            : 1;	/*     21     r/w 1'h0*/
		uint8_t SQ_AUTO_TRAIN_LANE                       : 1;	/*     22     r/w 1'h0*/
		uint8_t RX_TRAIN_ONLY_DFE_LANE                   : 1;	/*     23     r/w 1'b0*/
		uint8_t PHASE_ADAPT_TEMP_THR_LANE_7_0            : 8;	/*[31:24]     r/w 8'hc*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_1_t;
__xdata __at( 0x605c ) volatile DFE_CONTROL_1_t DFE_CONTROL_1;
#define lnx_SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE  DFE_CONTROL_1.BF.SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE
#define lnx_SKIP_CDR_MAXF0P_LANE  DFE_CONTROL_1.BF.SKIP_CDR_MAXF0P_LANE
#define lnx_F0D_MEASURE_DONE_LANE  DFE_CONTROL_1.BF.F0D_MEASURE_DONE_LANE
#define lnx_EOM_READY_LANE  DFE_CONTROL_1.BF.EOM_READY_LANE
#define lnx_EOM_DFE_CALL_LANE  DFE_CONTROL_1.BF.EOM_DFE_CALL_LANE
#define lnx_DFE_DBG_STEP_LANE  DFE_CONTROL_1.BF.DFE_DBG_STEP_LANE
#define lnx_DFE_CAL_DONE_LANE  DFE_CONTROL_1.BF.DFE_CAL_DONE_LANE
#define lnx_ESM_VOLTAGE_LANE_5_0  DFE_CONTROL_1.BF.ESM_VOLTAGE_LANE_5_0
#define lnx_SKIP_CDR_MIDPOINT_LANE  DFE_CONTROL_1.BF.SKIP_CDR_MIDPOINT_LANE
#define lnx_FORCE_PHASE_TRAIN_OFFSET_EN_LANE  DFE_CONTROL_1.BF.FORCE_PHASE_TRAIN_OFFSET_EN_LANE
#define lnx_BYPASS_RXTRAIN_LANE  DFE_CONTROL_1.BF.BYPASS_RXTRAIN_LANE
#define lnx_GAIN_TRAIN_END_EN_LANE  DFE_CONTROL_1.BF.GAIN_TRAIN_END_EN_LANE
#define lnx_GAIN_TRAIN_INIT_EN_LANE  DFE_CONTROL_1.BF.GAIN_TRAIN_INIT_EN_LANE
#define lnx_DFE_INIT_REG_LANE  DFE_CONTROL_1.BF.DFE_INIT_REG_LANE
#define lnx_PHASE_ADAPT_SAT_DETECT_LANE  DFE_CONTROL_1.BF.PHASE_ADAPT_SAT_DETECT_LANE
#define lnx_PHASE_ADAPT_TEMP_AUTO_EN_LANE  DFE_CONTROL_1.BF.PHASE_ADAPT_TEMP_AUTO_EN_LANE
#define lnx_SQ_AUTO_TRAIN_LANE  DFE_CONTROL_1.BF.SQ_AUTO_TRAIN_LANE
#define lnx_RX_TRAIN_ONLY_DFE_LANE  DFE_CONTROL_1.BF.RX_TRAIN_ONLY_DFE_LANE
#define lnx_PHASE_ADAPT_TEMP_THR_LANE_7_0  DFE_CONTROL_1.BF.PHASE_ADAPT_TEMP_THR_LANE_7_0

// 0x0060	DFE_CONTROL_2		
typedef union {
	struct {
		uint8_t EDGE_SAMPLER_ADJ_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t ADAPT_PHASE_OFFSET_DATA_2C_LANE_7_0      : 8;	/* [15:8]       r 8'h0*/
		uint8_t ADAPT_DATA_EN_LANE_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t ADAPT_SLICER_EN_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_2_t;
__xdata __at( 0x6060 ) volatile DFE_CONTROL_2_t DFE_CONTROL_2;
#define lnx_EDGE_SAMPLER_ADJ_LANE_7_0  DFE_CONTROL_2.BF.EDGE_SAMPLER_ADJ_LANE_7_0
#define lnx_ADAPT_PHASE_OFFSET_DATA_2C_LANE_7_0  DFE_CONTROL_2.BF.ADAPT_PHASE_OFFSET_DATA_2C_LANE_7_0
#define lnx_ADAPT_DATA_EN_LANE_7_0  DFE_CONTROL_2.BF.ADAPT_DATA_EN_LANE_7_0
#define lnx_ADAPT_SLICER_EN_LANE_7_0  DFE_CONTROL_2.BF.ADAPT_SLICER_EN_LANE_7_0

// 0x0064	DFE_CONTROL_3		
typedef union {
	struct {
		uint8_t F0D_ACCAP_SEL_REFCLK_LANE                : 1;	/*      0     r/w   0*/
		uint8_t FORCE_PHASE_OFFSET_DATA_EN_LANE          : 1;	/*      1     r/w   0*/
		uint8_t DFE_DBG_STEP_MODE_LANE                   : 1;	/*      2     r/w   0*/
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
__xdata __at( 0x6064 ) volatile DFE_CONTROL_3_t DFE_CONTROL_3;
#define lnx_F0D_ACCAP_SEL_REFCLK_LANE  DFE_CONTROL_3.BF.F0D_ACCAP_SEL_REFCLK_LANE
#define lnx_FORCE_PHASE_OFFSET_DATA_EN_LANE  DFE_CONTROL_3.BF.FORCE_PHASE_OFFSET_DATA_EN_LANE
#define lnx_DFE_DBG_STEP_MODE_LANE  DFE_CONTROL_3.BF.DFE_DBG_STEP_MODE_LANE
#define lnx_TX_TRAIN_P2P_HOLD_LANE  DFE_CONTROL_3.BF.TX_TRAIN_P2P_HOLD_LANE
#define lnx_TRAIN_PH_CONTROL_MODE_LANE_1_0  DFE_CONTROL_3.BF.TRAIN_PH_CONTROL_MODE_LANE_1_0
#define lnx_TRAIN_USE_D_LANE  DFE_CONTROL_3.BF.TRAIN_USE_D_LANE
#define lnx_TRAIN_USE_S_LANE  DFE_CONTROL_3.BF.TRAIN_USE_S_LANE
#define lnx_CAL_EOM_DPHER_LANE_7_0  DFE_CONTROL_3.BF.CAL_EOM_DPHER_LANE_7_0
#define lnx_CAL_PHASE_LANE_7_0  DFE_CONTROL_3.BF.CAL_PHASE_LANE_7_0
#define lnx_OPT_PHASE_OFFSET_NORMAL_LANE_7_0  DFE_CONTROL_3.BF.OPT_PHASE_OFFSET_NORMAL_LANE_7_0

// 0x0068	DFE_CONTROL_4		
typedef union {
	struct {
		uint8_t TRAIN_F0D_LANE_7_0                       : 8;	/*  [7:0]       r 8'h0*/
		uint8_t TRAIN_F0A_LANE_7_0                       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_F0A_MAX_LANE_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_F0B_LANE_7_0                       : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_4_t;
__xdata __at( 0x6068 ) volatile DFE_CONTROL_4_t DFE_CONTROL_4;
#define lnx_TRAIN_F0D_LANE_7_0  DFE_CONTROL_4.BF.TRAIN_F0D_LANE_7_0
#define lnx_TRAIN_F0A_LANE_7_0  DFE_CONTROL_4.BF.TRAIN_F0A_LANE_7_0
#define lnx_TRAIN_F0A_MAX_LANE_7_0  DFE_CONTROL_4.BF.TRAIN_F0A_MAX_LANE_7_0
#define lnx_TRAIN_F0B_LANE_7_0  DFE_CONTROL_4.BF.TRAIN_F0B_LANE_7_0

// 0x006c	DFE_CONTROL_5		
typedef union {
	struct {
		uint8_t CKFW_EN_LANE                             : 1;	/*      0     r/w 1'b0*/
		uint8_t RX_NO_INIT_LANE                          : 1;	/*      1     r/w 1'b0*/
		uint8_t TX_NO_INIT_LANE                          : 1;	/*      2     r/w 1'b0*/
		uint8_t DFE_ADAPT_NORMAL_FORCE_SKIP_LANE         : 1;	/*      3     r/w 1'b0*/
		uint8_t DFE_ADAPT_NORMAL_SOFT_CONT_EN_LANE       : 1;	/*      4     r/w 1'b0*/
		uint8_t PHASE_ADAPT_ENABLE_LANE                  : 1;	/*      5     r/w 1'b0*/
		uint8_t PHASE_ADAPT_MODE_LANE                    : 1;	/*      6     r/w 1'b0*/
		uint8_t F1_ALIGN_SKIP_LANE                       : 1;	/*      7     r/w 1'h0*/
		uint8_t THRE_GOOD_LANE_4_0                       : 5;	/* [12:8]     r/w 5'h2*/
		uint8_t PHASE_CONTROL_FUNC_EN_LANE               : 1;	/*     13     r/w   0*/
		uint8_t SATURATE_DISABLE_LANE                    : 1;	/*     14     r/w 1'b0*/
		uint8_t CDRPHASE_OPT_EN_LANE                     : 1;	/*     15     r/w 1'b1*/
		uint8_t THRE_POOR_LANE_2_0                       : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t PHASE_ADAPT_UI_ALIGN_SKIP_LANE           : 1;	/*     19     r/w 1'h0*/
		uint8_t CTLE_SET_SEL_LANE                        : 1;	/*     20     r/w 1'h0*/
		uint8_t EOM_PHASE_UI_ALIGN_FAILED_LANE           : 1;	/*     21       r 1'h0*/
		uint8_t PATTERN_PROTECT_EN_LANE                  : 1;	/*     22     r/w 1'h0*/
		uint8_t MAXEO_ADAPT_NORMAL_MODE_EN_LANE          : 1;	/*     23     r/w 1'b0*/
		uint8_t THRE_EXCELLENT_LANE_5_0                  : 6;	/*[29:24]     r/w 6'h3f*/
		uint8_t EYE_CHECK_BYPASS_LANE                    : 1;	/*     30     r/w   0*/
		uint8_t FAST_DFE_TIMER_EN_LANE                   : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_5_t;
__xdata __at( 0x606c ) volatile DFE_CONTROL_5_t DFE_CONTROL_5;
#define lnx_CKFW_EN_LANE  DFE_CONTROL_5.BF.CKFW_EN_LANE
#define lnx_RX_NO_INIT_LANE  DFE_CONTROL_5.BF.RX_NO_INIT_LANE
#define lnx_TX_NO_INIT_LANE  DFE_CONTROL_5.BF.TX_NO_INIT_LANE
#define lnx_DFE_ADAPT_NORMAL_FORCE_SKIP_LANE  DFE_CONTROL_5.BF.DFE_ADAPT_NORMAL_FORCE_SKIP_LANE
#define lnx_DFE_ADAPT_NORMAL_SOFT_CONT_EN_LANE  DFE_CONTROL_5.BF.DFE_ADAPT_NORMAL_SOFT_CONT_EN_LANE
#define lnx_PHASE_ADAPT_ENABLE_LANE  DFE_CONTROL_5.BF.PHASE_ADAPT_ENABLE_LANE
#define lnx_PHASE_ADAPT_MODE_LANE  DFE_CONTROL_5.BF.PHASE_ADAPT_MODE_LANE
#define lnx_F1_ALIGN_SKIP_LANE  DFE_CONTROL_5.BF.F1_ALIGN_SKIP_LANE
#define lnx_THRE_GOOD_LANE_4_0  DFE_CONTROL_5.BF.THRE_GOOD_LANE_4_0
#define lnx_PHASE_CONTROL_FUNC_EN_LANE  DFE_CONTROL_5.BF.PHASE_CONTROL_FUNC_EN_LANE
#define lnx_SATURATE_DISABLE_LANE  DFE_CONTROL_5.BF.SATURATE_DISABLE_LANE
#define lnx_CDRPHASE_OPT_EN_LANE  DFE_CONTROL_5.BF.CDRPHASE_OPT_EN_LANE
#define lnx_THRE_POOR_LANE_2_0  DFE_CONTROL_5.BF.THRE_POOR_LANE_2_0
#define lnx_PHASE_ADAPT_UI_ALIGN_SKIP_LANE  DFE_CONTROL_5.BF.PHASE_ADAPT_UI_ALIGN_SKIP_LANE
#define lnx_CTLE_SET_SEL_LANE  DFE_CONTROL_5.BF.CTLE_SET_SEL_LANE
#define lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE  DFE_CONTROL_5.BF.EOM_PHASE_UI_ALIGN_FAILED_LANE
#define lnx_PATTERN_PROTECT_EN_LANE  DFE_CONTROL_5.BF.PATTERN_PROTECT_EN_LANE
#define lnx_MAXEO_ADAPT_NORMAL_MODE_EN_LANE  DFE_CONTROL_5.BF.MAXEO_ADAPT_NORMAL_MODE_EN_LANE
#define lnx_THRE_EXCELLENT_LANE_5_0  DFE_CONTROL_5.BF.THRE_EXCELLENT_LANE_5_0
#define lnx_EYE_CHECK_BYPASS_LANE  DFE_CONTROL_5.BF.EYE_CHECK_BYPASS_LANE
#define lnx_FAST_DFE_TIMER_EN_LANE  DFE_CONTROL_5.BF.FAST_DFE_TIMER_EN_LANE

// 0x0070	TRAIN_CONTROL_0		
typedef union {
	struct {
		uint8_t MIDPOINT_SMALL_THRES_C_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MIDPOINT_SMALL_THRES_K_LANE_7_0          : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t MIDPOINT_LARGE_THRES_C_LANE_7_0          : 8;	/*[23:16]     r/w 8'h2*/
		uint8_t MIDPOINT_LARGE_THRES_K_LANE_7_0          : 8;	/*[31:24]     r/w 8'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_0_t;
__xdata __at( 0x6070 ) volatile TRAIN_CONTROL_0_t TRAIN_CONTROL_0;
#define lnx_MIDPOINT_SMALL_THRES_C_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_SMALL_THRES_C_LANE_7_0
#define lnx_MIDPOINT_SMALL_THRES_K_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_SMALL_THRES_K_LANE_7_0
#define lnx_MIDPOINT_LARGE_THRES_C_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_LARGE_THRES_C_LANE_7_0
#define lnx_MIDPOINT_LARGE_THRES_K_LANE_7_0  TRAIN_CONTROL_0.BF.MIDPOINT_LARGE_THRES_K_LANE_7_0

// 0x0074	TRAIN_CONTROL_1		
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
__xdata __at( 0x6074 ) volatile TRAIN_CONTROL_1_t TRAIN_CONTROL_1;
#define lnx_INI_PHASE_OFFSET_LANE_7_0  TRAIN_CONTROL_1.BF.INI_PHASE_OFFSET_LANE_7_0
#define lnx_MIDPOINT_PHASE_OS_LANE_7_0  TRAIN_CONTROL_1.BF.MIDPOINT_PHASE_OS_LANE_7_0
#define lnx_SUMF_BOOST_TARGET_C_LANE_7_0  TRAIN_CONTROL_1.BF.SUMF_BOOST_TARGET_C_LANE_7_0
#define lnx_SUMF_BOOST_TARGET_K_LANE_7_0  TRAIN_CONTROL_1.BF.SUMF_BOOST_TARGET_K_LANE_7_0

// 0x0078	TRAIN_CONTROL_2		
typedef union {
	struct {
		uint8_t ESM_PHASE_LANE_9_0_b0                    : 8;	/*  [9:0]     r/w 10'h0*/
		uint8_t ESM_PHASE_LANE_9_0_b1                    : 2;	/*  [9:0]     r/w 10'h0*/
		uint8_t ESM_DFE_ADAPT_SPLR_EN_LANE_3_0           : 4;	/*[13:10]     r/w 4'hc*/
		uint8_t TX_TRAIN_COMPLETE_INT_LANE               : 1;	/*     14       r 1'b0*/
		uint8_t TX_TRAIN_FAIL_INT_LANE                   : 1;	/*     15       r 1'b0*/
		uint8_t ESM_PATH_SEL_LANE                        : 1;	/*     16     r/w 1'b1*/
		uint8_t TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE    : 1;	/*     17       r 1'h0*/
		uint8_t ESM_EN_LANE                              : 1;	/*     18     r/w 1'h0*/
		uint8_t TX_TRAIN_REMOTE_PATTERN_ERROR_INT_LANE   : 1;	/*     19       r 1'h0*/
		uint8_t REMOTE_MULTI_RSV_COE_REQ_ERR_INT_LANE    : 1;	/*     20       r 1'h0*/
		uint8_t TX_ADAPT_G1_EN_LANE                      : 1;	/*     21     r/w 1'h0*/
		uint8_t TX_ADAPT_GN1_EN_LANE                     : 1;	/*     22     r/w 1'h0*/
		uint8_t TX_ADAPT_G0_EN_LANE                      : 1;	/*     23     r/w 1'h0*/
		uint8_t RXFFE_R_GAIN_TRAIN_LANE_3_0              : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t RX_RXFFE_R_INI_LANE_3_0                  : 4;	/*[31:28]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_2_t;
__xdata __at( 0x6078 ) volatile TRAIN_CONTROL_2_t TRAIN_CONTROL_2;
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

// 0x007c	RPTA_CONFIG_0		
typedef union {
	struct {
		uint8_t EOM_CONV_NUM_LANE_15_0_b0                : 8;	/* [15:0]     r/w 16'h400*/
		uint8_t EOM_CONV_NUM_LANE_15_0_b1                : 8;	/* [15:0]     r/w 16'h400*/
		uint8_t EOM_ADAPT_STEP_SIZE_LANE_7_0             : 8;	/*[23:16]     r/w 8'h7*/
		uint8_t EOM_CLK_OFFSET_2C_LANE_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RPTA_CONFIG_0_t;
__xdata __at( 0x607c ) volatile RPTA_CONFIG_0_t RPTA_CONFIG_0;
#define lnx_EOM_CONV_NUM_LANE_15_0_b0  RPTA_CONFIG_0.BF.EOM_CONV_NUM_LANE_15_0_b0
#define lnx_EOM_CONV_NUM_LANE_15_0_b1  RPTA_CONFIG_0.BF.EOM_CONV_NUM_LANE_15_0_b1
#define lnx_EOM_ADAPT_STEP_SIZE_LANE_7_0  RPTA_CONFIG_0.BF.EOM_ADAPT_STEP_SIZE_LANE_7_0
#define lnx_EOM_CLK_OFFSET_2C_LANE_7_0  RPTA_CONFIG_0.BF.EOM_CLK_OFFSET_2C_LANE_7_0
#define lnx_EOM_CONV_NUM_LANE_15_0  RPTA_CONFIG_0.WT.W0

// 0x0080	RPTA_CONFIG_1		
typedef union {
	struct {
		uint8_t DATA_CLK_OFFSET_2C_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t F0D_THRE_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t PH_ADAPT_STEP_SIZE_LANE_7_0              : 8;	/*[23:16]     r/w 8'h6*/
		uint8_t PH_CONV_NUM_LANE_7_0                     : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RPTA_CONFIG_1_t;
__xdata __at( 0x6080 ) volatile RPTA_CONFIG_1_t RPTA_CONFIG_1;
#define lnx_DATA_CLK_OFFSET_2C_LANE_7_0  RPTA_CONFIG_1.BF.DATA_CLK_OFFSET_2C_LANE_7_0
#define lnx_F0D_THRE_LANE_7_0  RPTA_CONFIG_1.BF.F0D_THRE_LANE_7_0
#define lnx_PH_ADAPT_STEP_SIZE_LANE_7_0  RPTA_CONFIG_1.BF.PH_ADAPT_STEP_SIZE_LANE_7_0
#define lnx_PH_CONV_NUM_LANE_7_0  RPTA_CONFIG_1.BF.PH_CONV_NUM_LANE_7_0

// 0x0084	TRAIN_PARA_0		Train Parameters 0
typedef union {
	struct {
		uint8_t TX_GN1_MIDPOINT_INDEX_OS_LANE_7_0        : 8;	/*  [7:0]     r/w 8'hfc*/
		uint8_t AVG_F1_LANE_7_0                          : 8;	/* [15:8]       r 8'h0*/
		uint8_t TRAIN_PH_OS_ESM_2C_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_PH_OS_DATA_2C_LANE_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_0_t;
__xdata __at( 0x6084 ) volatile TRAIN_PARA_0_t TRAIN_PARA_0;
#define lnx_TX_GN1_MIDPOINT_INDEX_OS_LANE_7_0  TRAIN_PARA_0.BF.TX_GN1_MIDPOINT_INDEX_OS_LANE_7_0
#define lnx_AVG_F1_LANE_7_0  TRAIN_PARA_0.BF.AVG_F1_LANE_7_0
#define lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0  TRAIN_PARA_0.BF.TRAIN_PH_OS_ESM_2C_LANE_7_0
#define lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0  TRAIN_PARA_0.BF.TRAIN_PH_OS_DATA_2C_LANE_7_0

// 0x0088	CAL_CTRL3_LANE		Calibration Control Lane 3
typedef union {
	struct {
		uint8_t ALIGN90_COMP_DONE_LANE                   : 1;	/*      0       r   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t EYE_MID_2C_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t EYE_RIGHT_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t EYE_LEFT_2C_LANE_7_0                     : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL3_LANE_t;
__xdata __at( 0x6088 ) volatile CAL_CTRL3_LANE_t CAL_CTRL3_LANE;
#define lnx_ALIGN90_COMP_DONE_LANE  CAL_CTRL3_LANE.BF.ALIGN90_COMP_DONE_LANE
#define lnx_EYE_MID_2C_LANE_7_0  CAL_CTRL3_LANE.BF.EYE_MID_2C_LANE_7_0
#define lnx_EYE_RIGHT_2C_LANE_7_0  CAL_CTRL3_LANE.BF.EYE_RIGHT_2C_LANE_7_0
#define lnx_EYE_LEFT_2C_LANE_7_0  CAL_CTRL3_LANE.BF.EYE_LEFT_2C_LANE_7_0

// 0x008c	DFE_TEST_0		
typedef union {
	struct {
		uint8_t DFE_ADAPT_LP_NUM_FINE_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h3*/
		uint8_t DFE_ADAPT_LP_NUM_CORASE_LANE_7_0         : 8;	/* [15:8]     r/w 8'h0a*/
		uint8_t DFE_ADAPT_LP_NUM_F0A_LANE_7_0            : 8;	/*[23:16]     r/w 8'h10*/
		uint8_t DFE_ADAPT_LP_NUM_DTL_LANE_7_0            : 8;	/*[31:24]     r/w 8'h10*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_TEST_0_t;
__xdata __at( 0x608c ) volatile DFE_TEST_0_t DFE_TEST_0;
#define lnx_DFE_ADAPT_LP_NUM_FINE_LANE_7_0  DFE_TEST_0.BF.DFE_ADAPT_LP_NUM_FINE_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_CORASE_LANE_7_0  DFE_TEST_0.BF.DFE_ADAPT_LP_NUM_CORASE_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_F0A_LANE_7_0  DFE_TEST_0.BF.DFE_ADAPT_LP_NUM_F0A_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_DTL_LANE_7_0  DFE_TEST_0.BF.DFE_ADAPT_LP_NUM_DTL_LANE_7_0

// 0x0090	DFE_TEST_1		
typedef union {
	struct {
		uint8_t DFE_ADAPT_LP_NUM_F0D_FINE_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h6*/
		uint8_t DFE_ADAPT_LP_NUM_F0B_FINE_LANE_7_0       : 8;	/* [15:8]     r/w 8'h2*/
		uint8_t DFE_ADAPT_LP_NUM_OFST_LANE_7_0           : 8;	/*[23:16]     r/w 8'h10*/
		uint8_t DFE_ADAPT_LP_NUM_ACCU_LANE_7_0           : 8;	/*[31:24]     r/w 8'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_TEST_1_t;
__xdata __at( 0x6090 ) volatile DFE_TEST_1_t DFE_TEST_1;
#define lnx_DFE_ADAPT_LP_NUM_F0D_FINE_LANE_7_0  DFE_TEST_1.BF.DFE_ADAPT_LP_NUM_F0D_FINE_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_F0B_FINE_LANE_7_0  DFE_TEST_1.BF.DFE_ADAPT_LP_NUM_F0B_FINE_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_OFST_LANE_7_0  DFE_TEST_1.BF.DFE_ADAPT_LP_NUM_OFST_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_ACCU_LANE_7_0  DFE_TEST_1.BF.DFE_ADAPT_LP_NUM_ACCU_LANE_7_0

// 0x0094	DFE_TEST_4		
typedef union {
	struct {
		uint8_t POL_TB_LP_NUM_FINE_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h2*/
		uint8_t POL_TB_LP_NUM_CORASE_LANE_7_0            : 8;	/* [15:8]     r/w 8'h1*/
		uint8_t POL_TB_LP_NUM_F0A_LANE_7_0               : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t POL_TB_LP_NUM_DTL_LANE_7_0               : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_TEST_4_t;
__xdata __at( 0x6094 ) volatile DFE_TEST_4_t DFE_TEST_4;
#define lnx_POL_TB_LP_NUM_FINE_LANE_7_0  DFE_TEST_4.BF.POL_TB_LP_NUM_FINE_LANE_7_0
#define lnx_POL_TB_LP_NUM_CORASE_LANE_7_0  DFE_TEST_4.BF.POL_TB_LP_NUM_CORASE_LANE_7_0
#define lnx_POL_TB_LP_NUM_F0A_LANE_7_0  DFE_TEST_4.BF.POL_TB_LP_NUM_F0A_LANE_7_0
#define lnx_POL_TB_LP_NUM_DTL_LANE_7_0  DFE_TEST_4.BF.POL_TB_LP_NUM_DTL_LANE_7_0

// 0x0098	DFE_TEST_5		
typedef union {
	struct {
		uint8_t POL_TB_LP_NUM_F0D_FINE_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t POL_TB_LP_NUM_F0B_FINE_LANE_7_0          : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t POL_TB_LP_NUM_OFST_LANE_7_0              : 8;	/*[23:16]     r/w 8'h2*/
		uint8_t POL_TB_LP_NUM_ACCU_LANE_7_0              : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_TEST_5_t;
__xdata __at( 0x6098 ) volatile DFE_TEST_5_t DFE_TEST_5;
#define lnx_POL_TB_LP_NUM_F0D_FINE_LANE_7_0  DFE_TEST_5.BF.POL_TB_LP_NUM_F0D_FINE_LANE_7_0
#define lnx_POL_TB_LP_NUM_F0B_FINE_LANE_7_0  DFE_TEST_5.BF.POL_TB_LP_NUM_F0B_FINE_LANE_7_0
#define lnx_POL_TB_LP_NUM_OFST_LANE_7_0  DFE_TEST_5.BF.POL_TB_LP_NUM_OFST_LANE_7_0
#define lnx_POL_TB_LP_NUM_ACCU_LANE_7_0  DFE_TEST_5.BF.POL_TB_LP_NUM_ACCU_LANE_7_0

// 0x009c	TRAIN_SAVE_DATA1_LANE		train Result 11
typedef union {
	struct {
		uint8_t TRAIN_OFST_F1P_D_E_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_OFST_F1N_D_E_LANE_7_0              : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_OFST_F1P_D_O_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_OFST_F1N_D_O_LANE_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_DATA1_LANE_t;
__xdata __at( 0x609c ) volatile TRAIN_SAVE_DATA1_LANE_t TRAIN_SAVE_DATA1_LANE;
#define lnx_TRAIN_OFST_F1P_D_E_LANE_7_0  TRAIN_SAVE_DATA1_LANE.BF.TRAIN_OFST_F1P_D_E_LANE_7_0
#define lnx_TRAIN_OFST_F1N_D_E_LANE_7_0  TRAIN_SAVE_DATA1_LANE.BF.TRAIN_OFST_F1N_D_E_LANE_7_0
#define lnx_TRAIN_OFST_F1P_D_O_LANE_7_0  TRAIN_SAVE_DATA1_LANE.BF.TRAIN_OFST_F1P_D_O_LANE_7_0
#define lnx_TRAIN_OFST_F1N_D_O_LANE_7_0  TRAIN_SAVE_DATA1_LANE.BF.TRAIN_OFST_F1N_D_O_LANE_7_0

// 0x00a0	TRAIN_SAVE_DATA2_LANE		train Result 12
typedef union {
	struct {
		uint8_t TRAIN_OFST_F1P_S_E_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_OFST_F1N_S_E_LANE_7_0              : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_OFST_F1P_S_O_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_OFST_F1N_S_O_LANE_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_DATA2_LANE_t;
__xdata __at( 0x60a0 ) volatile TRAIN_SAVE_DATA2_LANE_t TRAIN_SAVE_DATA2_LANE;
#define lnx_TRAIN_OFST_F1P_S_E_LANE_7_0  TRAIN_SAVE_DATA2_LANE.BF.TRAIN_OFST_F1P_S_E_LANE_7_0
#define lnx_TRAIN_OFST_F1N_S_E_LANE_7_0  TRAIN_SAVE_DATA2_LANE.BF.TRAIN_OFST_F1N_S_E_LANE_7_0
#define lnx_TRAIN_OFST_F1P_S_O_LANE_7_0  TRAIN_SAVE_DATA2_LANE.BF.TRAIN_OFST_F1P_S_O_LANE_7_0
#define lnx_TRAIN_OFST_F1N_S_O_LANE_7_0  TRAIN_SAVE_DATA2_LANE.BF.TRAIN_OFST_F1N_S_O_LANE_7_0

// 0x00a4	TRAIN_SAVE_DATA3_LANE		train Result 13
typedef union {
	struct {
		uint8_t TRAIN_OFST_EDGE_E_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_OFST_EDGE_O_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CDR_STEP_NUM_LANE_7_0                    : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t RPTA_F0D_OFFSET_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_SAVE_DATA3_LANE_t;
__xdata __at( 0x60a4 ) volatile TRAIN_SAVE_DATA3_LANE_t TRAIN_SAVE_DATA3_LANE;
#define lnx_TRAIN_OFST_EDGE_E_LANE_7_0  TRAIN_SAVE_DATA3_LANE.BF.TRAIN_OFST_EDGE_E_LANE_7_0
#define lnx_TRAIN_OFST_EDGE_O_LANE_7_0  TRAIN_SAVE_DATA3_LANE.BF.TRAIN_OFST_EDGE_O_LANE_7_0
#define lnx_CDR_STEP_NUM_LANE_7_0  TRAIN_SAVE_DATA3_LANE.BF.CDR_STEP_NUM_LANE_7_0
#define lnx_RPTA_F0D_OFFSET_LANE_7_0  TRAIN_SAVE_DATA3_LANE.BF.RPTA_F0D_OFFSET_LANE_7_0

// 0x00a8	DFE_CONTROL_6		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SUMFTAP_EN_1_LANE                        : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t OFST_ALIGN_ADV_CLK_ALIGN_EN_LANE         : 1;	/*     16     r/w   0*/
		uint8_t FORCE_INI_PHASE_OFFSET_EN_LANE           : 1;	/*     17     r/w   0*/
		uint8_t OFST_DIS_LANE                            : 1;	/*     18     r/w   0*/
		uint8_t DFE_ISI_RES_ADAPT_EN_LANE                : 1;	/*     19     r/w   1*/
		uint8_t ADJUST_FFE_R2_LANE                       : 1;	/*     20     r/w   1*/
		uint8_t RX_CAP_FINAL_ADJUST_EN_LANE              : 1;	/*     21     r/w   0*/
		uint8_t FORCE_DFE_RES_F0_LANE_1_0                : 2;	/*[23:22]     r/w 2'h3*/
		uint8_t RXFFE_C_GAIN_TRAIN_LANE_3_0              : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t RX_RXFFE_C_INI_LANE_3_0                  : 4;	/*[31:28]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_6_t;
__xdata __at( 0x60a8 ) volatile DFE_CONTROL_6_t DFE_CONTROL_6;
#define lnx_SUMFTAP_EN_1_LANE  DFE_CONTROL_6.BF.SUMFTAP_EN_1_LANE
#define lnx_OFST_ALIGN_ADV_CLK_ALIGN_EN_LANE  DFE_CONTROL_6.BF.OFST_ALIGN_ADV_CLK_ALIGN_EN_LANE
#define lnx_FORCE_INI_PHASE_OFFSET_EN_LANE  DFE_CONTROL_6.BF.FORCE_INI_PHASE_OFFSET_EN_LANE
#define lnx_OFST_DIS_LANE  DFE_CONTROL_6.BF.OFST_DIS_LANE
#define lnx_DFE_ISI_RES_ADAPT_EN_LANE  DFE_CONTROL_6.BF.DFE_ISI_RES_ADAPT_EN_LANE
#define lnx_ADJUST_FFE_R2_LANE  DFE_CONTROL_6.BF.ADJUST_FFE_R2_LANE
#define lnx_RX_CAP_FINAL_ADJUST_EN_LANE  DFE_CONTROL_6.BF.RX_CAP_FINAL_ADJUST_EN_LANE
#define lnx_FORCE_DFE_RES_F0_LANE_1_0  DFE_CONTROL_6.BF.FORCE_DFE_RES_F0_LANE_1_0
#define lnx_RXFFE_C_GAIN_TRAIN_LANE_3_0  DFE_CONTROL_6.BF.RXFFE_C_GAIN_TRAIN_LANE_3_0
#define lnx_RX_RXFFE_C_INI_LANE_3_0  DFE_CONTROL_6.BF.RX_RXFFE_C_INI_LANE_3_0

// 0x00ac	TRAIN_PARA_1		Train Parameters 1
typedef union {
	struct {
		uint8_t FORCE_PHASE_TRAIN_OFFSET_2C_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t INI_PHASE_ADAPT_OFFSET_2C_LANE_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t PCIE_GN1_FN1_THRE_LANE_7_0               : 8;	/*[23:16]     r/w 8'h5*/
		uint8_t PCIE_GN1_STEP_NUM_LANE_7_0               : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_1_t;
__xdata __at( 0x60ac ) volatile TRAIN_PARA_1_t TRAIN_PARA_1;
#define lnx_FORCE_PHASE_TRAIN_OFFSET_2C_LANE_7_0  TRAIN_PARA_1.BF.FORCE_PHASE_TRAIN_OFFSET_2C_LANE_7_0
#define lnx_INI_PHASE_ADAPT_OFFSET_2C_LANE_7_0  TRAIN_PARA_1.BF.INI_PHASE_ADAPT_OFFSET_2C_LANE_7_0
#define lnx_PCIE_GN1_FN1_THRE_LANE_7_0  TRAIN_PARA_1.BF.PCIE_GN1_FN1_THRE_LANE_7_0
#define lnx_PCIE_GN1_STEP_NUM_LANE_7_0  TRAIN_PARA_1.BF.PCIE_GN1_STEP_NUM_LANE_7_0

// 0x00b0	DFE_CONTROL_7		
typedef union {
	struct {
		uint8_t CLI_START_LANE                           : 1;	/*      0     r/w   0*/
		uint8_t FORCE_CDS_CTRL_EN_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t FORCE_CDS_STATE_LANE                     : 1;	/*      2     r/w   0*/
		uint8_t F1_ADJ_EN_LANE                           : 1;	/*      3     r/w   0*/
		uint8_t BYPASS_DFE_HANG_CHECK_LANE               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t CLI_CMD_LANE_7_0                         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t POL_TB_LP_NUM_F0B_ACCU_LANE_7_0          : 8;	/*[23:16]     r/w 8'h4*/
		uint8_t DFE_ADAPT_LP_NUM_F0B_ACCU_LANE_7_0       : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_7_t;
__xdata __at( 0x60b0 ) volatile DFE_CONTROL_7_t DFE_CONTROL_7;
#define lnx_CLI_START_LANE  DFE_CONTROL_7.BF.CLI_START_LANE
#define lnx_FORCE_CDS_CTRL_EN_LANE  DFE_CONTROL_7.BF.FORCE_CDS_CTRL_EN_LANE
#define lnx_FORCE_CDS_STATE_LANE  DFE_CONTROL_7.BF.FORCE_CDS_STATE_LANE
#define lnx_F1_ADJ_EN_LANE  DFE_CONTROL_7.BF.F1_ADJ_EN_LANE
#define lnx_BYPASS_DFE_HANG_CHECK_LANE  DFE_CONTROL_7.BF.BYPASS_DFE_HANG_CHECK_LANE
#define lnx_CLI_CMD_LANE_7_0  DFE_CONTROL_7.BF.CLI_CMD_LANE_7_0
#define lnx_POL_TB_LP_NUM_F0B_ACCU_LANE_7_0  DFE_CONTROL_7.BF.POL_TB_LP_NUM_F0B_ACCU_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_F0B_ACCU_LANE_7_0  DFE_CONTROL_7.BF.DFE_ADAPT_LP_NUM_F0B_ACCU_LANE_7_0

// 0x00b4	DFE_CONTROL_8		
typedef union {
	struct {
		uint8_t FORCE_CDS_CTRL_LANE_15_0_b0              : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t FORCE_CDS_CTRL_LANE_15_0_b1              : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t POL_TB_LP_NUM_F0D_COARSE_LANE_7_0        : 8;	/*[23:16]     r/w 8'h2*/
		uint8_t DFE_ADAPT_LP_NUM_F0D_COARSE_LANE_7_0     : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_CONTROL_8_t;
__xdata __at( 0x60b4 ) volatile DFE_CONTROL_8_t DFE_CONTROL_8;
#define lnx_FORCE_CDS_CTRL_LANE_15_0_b0  DFE_CONTROL_8.BF.FORCE_CDS_CTRL_LANE_15_0_b0
#define lnx_FORCE_CDS_CTRL_LANE_15_0_b1  DFE_CONTROL_8.BF.FORCE_CDS_CTRL_LANE_15_0_b1
#define lnx_POL_TB_LP_NUM_F0D_COARSE_LANE_7_0  DFE_CONTROL_8.BF.POL_TB_LP_NUM_F0D_COARSE_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_F0D_COARSE_LANE_7_0  DFE_CONTROL_8.BF.DFE_ADAPT_LP_NUM_F0D_COARSE_LANE_7_0
#define lnx_FORCE_CDS_CTRL_LANE_15_0  DFE_CONTROL_8.WT.W0

// 0x00b8	DFE_CONTROL_9		
typedef union {
	struct {
		uint8_t SAVE_F0D_F1N_S_O_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SAVE_F0D_F1P_S_O_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SAVE_F0D_F1N_S_E_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SAVE_F0D_F1P_S_E_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_9_t;
__xdata __at( 0x60b8 ) volatile DFE_CONTROL_9_t DFE_CONTROL_9;
#define lnx_SAVE_F0D_F1N_S_O_LANE_7_0  DFE_CONTROL_9.BF.SAVE_F0D_F1N_S_O_LANE_7_0
#define lnx_SAVE_F0D_F1P_S_O_LANE_7_0  DFE_CONTROL_9.BF.SAVE_F0D_F1P_S_O_LANE_7_0
#define lnx_SAVE_F0D_F1N_S_E_LANE_7_0  DFE_CONTROL_9.BF.SAVE_F0D_F1N_S_E_LANE_7_0
#define lnx_SAVE_F0D_F1P_S_E_LANE_7_0  DFE_CONTROL_9.BF.SAVE_F0D_F1P_S_E_LANE_7_0

// 0x00bc	DFE_CONTROL_10		
typedef union {
	struct {
		uint8_t SAVE_F0D_F1N_D_O_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SAVE_F0D_F1P_D_O_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SAVE_F0D_F1N_D_E_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SAVE_F0D_F1P_D_E_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_10_t;
__xdata __at( 0x60bc ) volatile DFE_CONTROL_10_t DFE_CONTROL_10;
#define lnx_SAVE_F0D_F1N_D_O_LANE_7_0  DFE_CONTROL_10.BF.SAVE_F0D_F1N_D_O_LANE_7_0
#define lnx_SAVE_F0D_F1P_D_O_LANE_7_0  DFE_CONTROL_10.BF.SAVE_F0D_F1P_D_O_LANE_7_0
#define lnx_SAVE_F0D_F1N_D_E_LANE_7_0  DFE_CONTROL_10.BF.SAVE_F0D_F1N_D_E_LANE_7_0
#define lnx_SAVE_F0D_F1P_D_E_LANE_7_0  DFE_CONTROL_10.BF.SAVE_F0D_F1P_D_E_LANE_7_0

// 0x00c0	DFE_CONTROL_11		
typedef union {
	struct {
		uint8_t SAVE_F0B_F1N_S_O_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SAVE_F0B_F1P_S_O_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SAVE_F0B_F1N_S_E_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SAVE_F0B_F1P_S_E_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_11_t;
__xdata __at( 0x60c0 ) volatile DFE_CONTROL_11_t DFE_CONTROL_11;
#define lnx_SAVE_F0B_F1N_S_O_LANE_7_0  DFE_CONTROL_11.BF.SAVE_F0B_F1N_S_O_LANE_7_0
#define lnx_SAVE_F0B_F1P_S_O_LANE_7_0  DFE_CONTROL_11.BF.SAVE_F0B_F1P_S_O_LANE_7_0
#define lnx_SAVE_F0B_F1N_S_E_LANE_7_0  DFE_CONTROL_11.BF.SAVE_F0B_F1N_S_E_LANE_7_0
#define lnx_SAVE_F0B_F1P_S_E_LANE_7_0  DFE_CONTROL_11.BF.SAVE_F0B_F1P_S_E_LANE_7_0

// 0x00c4	DFE_CONTROL_12		
typedef union {
	struct {
		uint8_t SAVE_F0B_F1N_D_O_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SAVE_F0B_F1P_D_O_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SAVE_F0B_F1N_D_E_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SAVE_F0B_F1P_D_E_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_12_t;
__xdata __at( 0x60c4 ) volatile DFE_CONTROL_12_t DFE_CONTROL_12;
#define lnx_SAVE_F0B_F1N_D_O_LANE_7_0  DFE_CONTROL_12.BF.SAVE_F0B_F1N_D_O_LANE_7_0
#define lnx_SAVE_F0B_F1P_D_O_LANE_7_0  DFE_CONTROL_12.BF.SAVE_F0B_F1P_D_O_LANE_7_0
#define lnx_SAVE_F0B_F1N_D_E_LANE_7_0  DFE_CONTROL_12.BF.SAVE_F0B_F1N_D_E_LANE_7_0
#define lnx_SAVE_F0B_F1P_D_E_LANE_7_0  DFE_CONTROL_12.BF.SAVE_F0B_F1P_D_E_LANE_7_0

// 0x00c8	DFE_CONTROL_13		
typedef union {
	struct {
		uint8_t SAVE_F0A_F1N_S_O_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SAVE_F0A_F1P_S_O_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SAVE_F0A_F1N_S_E_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SAVE_F0A_F1P_S_E_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_13_t;
__xdata __at( 0x60c8 ) volatile DFE_CONTROL_13_t DFE_CONTROL_13;
#define lnx_SAVE_F0A_F1N_S_O_LANE_7_0  DFE_CONTROL_13.BF.SAVE_F0A_F1N_S_O_LANE_7_0
#define lnx_SAVE_F0A_F1P_S_O_LANE_7_0  DFE_CONTROL_13.BF.SAVE_F0A_F1P_S_O_LANE_7_0
#define lnx_SAVE_F0A_F1N_S_E_LANE_7_0  DFE_CONTROL_13.BF.SAVE_F0A_F1N_S_E_LANE_7_0
#define lnx_SAVE_F0A_F1P_S_E_LANE_7_0  DFE_CONTROL_13.BF.SAVE_F0A_F1P_S_E_LANE_7_0

// 0x00cc	DFE_CONTROL_14		
typedef union {
	struct {
		uint8_t SAVE_F0A_F1N_D_O_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SAVE_F0A_F1P_D_O_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SAVE_F0A_F1N_D_E_LANE_7_0                : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SAVE_F0A_F1P_D_E_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_14_t;
__xdata __at( 0x60cc ) volatile DFE_CONTROL_14_t DFE_CONTROL_14;
#define lnx_SAVE_F0A_F1N_D_O_LANE_7_0  DFE_CONTROL_14.BF.SAVE_F0A_F1N_D_O_LANE_7_0
#define lnx_SAVE_F0A_F1P_D_O_LANE_7_0  DFE_CONTROL_14.BF.SAVE_F0A_F1P_D_O_LANE_7_0
#define lnx_SAVE_F0A_F1N_D_E_LANE_7_0  DFE_CONTROL_14.BF.SAVE_F0A_F1N_D_E_LANE_7_0
#define lnx_SAVE_F0A_F1P_D_E_LANE_7_0  DFE_CONTROL_14.BF.SAVE_F0A_F1P_D_E_LANE_7_0

// 0x00d0	DFE_CONTROL_15		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t EYE_MID_RTPA_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t EYE_RIGHT_RTPA_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t EYE_LEFT_RTPA_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_15_t;
__xdata __at( 0x60d0 ) volatile DFE_CONTROL_15_t DFE_CONTROL_15;
#define lnx_EYE_MID_RTPA_2C_LANE_7_0  DFE_CONTROL_15.BF.EYE_MID_RTPA_2C_LANE_7_0
#define lnx_EYE_RIGHT_RTPA_2C_LANE_7_0  DFE_CONTROL_15.BF.EYE_RIGHT_RTPA_2C_LANE_7_0
#define lnx_EYE_LEFT_RTPA_2C_LANE_7_0  DFE_CONTROL_15.BF.EYE_LEFT_RTPA_2C_LANE_7_0

// 0x00d4	CDS_CTRL_REG0		
typedef union {
	struct {
		uint8_t RESET_PH_EN_DTL_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t DFE_SAVE_EN_LANE                         : 1;	/*      1     r/w   1*/
		uint8_t LOCK_DFE_ON_LANE                         : 1;	/*      2     r/w   0*/
		uint8_t VH_EO_MODE_LANE                          : 1;	/*      3     r/w   0*/
		uint8_t EO_BASED_LANE                            : 1;	/*      4     r/w   1*/
		uint8_t EYE_CHK_DIS_LANE                         : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w   0*/
		uint8_t CDS_STATE_LANE_7_0                       : 8;	/*[23:16]     r/w   0*/
		uint8_t CDS_ERR_CODE_LANE_7_0                    : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_CTRL_REG0_t;
__xdata __at( 0x60d4 ) volatile CDS_CTRL_REG0_t CDS_CTRL_REG0;
#define lnx_RESET_PH_EN_DTL_LANE  CDS_CTRL_REG0.BF.RESET_PH_EN_DTL_LANE
#define lnx_DFE_SAVE_EN_LANE  CDS_CTRL_REG0.BF.DFE_SAVE_EN_LANE
#define lnx_LOCK_DFE_ON_LANE  CDS_CTRL_REG0.BF.LOCK_DFE_ON_LANE
#define lnx_VH_EO_MODE_LANE  CDS_CTRL_REG0.BF.VH_EO_MODE_LANE
#define lnx_EO_BASED_LANE  CDS_CTRL_REG0.BF.EO_BASED_LANE
#define lnx_EYE_CHK_DIS_LANE  CDS_CTRL_REG0.BF.EYE_CHK_DIS_LANE
#define lnx_CDS_STATE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_STATE_LANE_7_0
#define lnx_CDS_ERR_CODE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_ERR_CODE_LANE_7_0

// 0x00d8	CDS_CTRL_REG1		
typedef union {
	struct {
		uint8_t CDS_ADAPT_SPLR_DIS_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t CDS_UPDATE_ODD_DIS_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t CDS_UPDATE_F_DIS_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_CTRL_REG1_t;
__xdata __at( 0x60d8 ) volatile CDS_CTRL_REG1_t CDS_CTRL_REG1;
#define lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0  CDS_CTRL_REG1.BF.CDS_ADAPT_SPLR_DIS_LANE_3_0
#define lnx_CDS_UPDATE_ODD_DIS_LANE  CDS_CTRL_REG1.BF.CDS_UPDATE_ODD_DIS_LANE
#define lnx_CDS_UPDATE_F_DIS_LANE  CDS_CTRL_REG1.BF.CDS_UPDATE_F_DIS_LANE

// 0x00dc	CMD_BASED_IF_REG0		
typedef union {
	struct {
		uint8_t MCU_CMD_REQ_LANE                         : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t MCU_CMD_STATUS_LANE_7_0                  : 8;	/* [15:8]     r/w   0*/
		uint8_t MCU_CMD_ID_LANE_15_0_b0                  : 8;	/*[31:16]     r/w   0*/
		uint8_t MCU_CMD_ID_LANE_15_0_b1                  : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CMD_BASED_IF_REG0_t;
__xdata __at( 0x60dc ) volatile CMD_BASED_IF_REG0_t CMD_BASED_IF_REG0;
#define lnx_MCU_CMD_REQ_LANE  CMD_BASED_IF_REG0.BF.MCU_CMD_REQ_LANE
#define lnx_MCU_CMD_STATUS_LANE_7_0  CMD_BASED_IF_REG0.BF.MCU_CMD_STATUS_LANE_7_0
#define lnx_MCU_CMD_ID_LANE_15_0_b0  CMD_BASED_IF_REG0.BF.MCU_CMD_ID_LANE_15_0_b0
#define lnx_MCU_CMD_ID_LANE_15_0_b1  CMD_BASED_IF_REG0.BF.MCU_CMD_ID_LANE_15_0_b1
#define lnx_MCU_CMD_ID_LANE_15_0  CMD_BASED_IF_REG0.WT.W0

// 0x00e0	CMD_BASED_IF_REG1		
typedef union {
	struct {
		uint8_t MCU_CMD_DATA_IN_LANE_31_0_b0             : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_CMD_DATA_IN_LANE_31_0_b1             : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_CMD_DATA_IN_LANE_31_0_b2             : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_CMD_DATA_IN_LANE_31_0_b3             : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMD_BASED_IF_REG1_t;
__xdata __at( 0x60e0 ) volatile CMD_BASED_IF_REG1_t CMD_BASED_IF_REG1;
#define lnx_MCU_CMD_DATA_IN_LANE_31_0_b0  CMD_BASED_IF_REG1.BF.MCU_CMD_DATA_IN_LANE_31_0_b0
#define lnx_MCU_CMD_DATA_IN_LANE_31_0_b1  CMD_BASED_IF_REG1.BF.MCU_CMD_DATA_IN_LANE_31_0_b1
#define lnx_MCU_CMD_DATA_IN_LANE_31_0_b2  CMD_BASED_IF_REG1.BF.MCU_CMD_DATA_IN_LANE_31_0_b2
#define lnx_MCU_CMD_DATA_IN_LANE_31_0_b3  CMD_BASED_IF_REG1.BF.MCU_CMD_DATA_IN_LANE_31_0_b3

// 0x00e4	CMD_BASED_IF_REG2		
typedef union {
	struct {
		uint8_t MCU_CMD_DATA_RET_LANE_31_0_b0            : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_CMD_DATA_RET_LANE_31_0_b1            : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_CMD_DATA_RET_LANE_31_0_b2            : 8;	/* [31:0]     r/w   0*/
		uint8_t MCU_CMD_DATA_RET_LANE_31_0_b3            : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CMD_BASED_IF_REG2_t;
__xdata __at( 0x60e4 ) volatile CMD_BASED_IF_REG2_t CMD_BASED_IF_REG2;
#define lnx_MCU_CMD_DATA_RET_LANE_31_0_b0  CMD_BASED_IF_REG2.BF.MCU_CMD_DATA_RET_LANE_31_0_b0
#define lnx_MCU_CMD_DATA_RET_LANE_31_0_b1  CMD_BASED_IF_REG2.BF.MCU_CMD_DATA_RET_LANE_31_0_b1
#define lnx_MCU_CMD_DATA_RET_LANE_31_0_b2  CMD_BASED_IF_REG2.BF.MCU_CMD_DATA_RET_LANE_31_0_b2
#define lnx_MCU_CMD_DATA_RET_LANE_31_0_b3  CMD_BASED_IF_REG2.BF.MCU_CMD_DATA_RET_LANE_31_0_b3

#endif
