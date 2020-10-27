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
		uint8_t RXDCC_DATA_CAL_DONE_LANE                 : 1;	/*      7       r   0*/
		uint8_t RXDCC_EOM_CAL_DONE_LANE                  : 1;	/*      8       r   0*/
		uint8_t RXALIGN90_CAL_DONE_LANE                  : 1;	/*      9       r   0*/
		uint8_t EOM_ALIGN_CAL_DONE_LANE                  : 1;	/*     10       r   0*/
		uint8_t SAMPLER_CAL_DONE_LANE                    : 1;	/*     11       r   0*/
		uint8_t SAMPLER_RES_CAL_DONE_LANE                : 1;	/*     12       r   0*/
		uint8_t TXIMP_CAL_DONE_LANE                      : 1;	/*     13       r   0*/
		uint8_t RXIMP_CAL_DONE_LANE                      : 1;	/*     14       r   0*/
		uint8_t VDD_CAL_DONE_LANE                        : 1;	/*     15       r   0*/
		uint8_t TXDCC_CAL_DONE_LANE                      : 1;	/*     16       r   0*/
		uint8_t TXDCC_PDIV_CAL_DONE_LANE                 : 1;	/*     17       r   0*/
		uint8_t SQ_CAL_DONE_LANE                         : 1;	/*     18       r   0*/
		uint8_t ALIGN90_COMP_CAL_DONE_LANE               : 1;	/*     19       r   0*/
		uint8_t TXDCLK_NT_SEL_LANE_1_0                   : 2;	/*[21:20]     r/w   0*/
		uint8_t RXDCLK_NT_SEL_LANE_1_0                   : 2;	/*[23:22]     r/w   0*/
		uint8_t CAL_DONE_LANE                            : 1;	/*     24       r   0*/
		uint8_t RX_INIT_DONE_INT_LANE                    : 1;	/*     25       r   0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
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
#define lnx_RXDCC_DATA_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXDCC_DATA_CAL_DONE_LANE
#define lnx_RXDCC_EOM_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXDCC_EOM_CAL_DONE_LANE
#define lnx_RXALIGN90_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXALIGN90_CAL_DONE_LANE
#define lnx_EOM_ALIGN_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.EOM_ALIGN_CAL_DONE_LANE
#define lnx_SAMPLER_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SAMPLER_CAL_DONE_LANE
#define lnx_SAMPLER_RES_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SAMPLER_RES_CAL_DONE_LANE
#define lnx_TXIMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXIMP_CAL_DONE_LANE
#define lnx_RXIMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.RXIMP_CAL_DONE_LANE
#define lnx_VDD_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.VDD_CAL_DONE_LANE
#define lnx_TXDCC_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXDCC_CAL_DONE_LANE
#define lnx_TXDCC_PDIV_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.TXDCC_PDIV_CAL_DONE_LANE
#define lnx_SQ_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.SQ_CAL_DONE_LANE
#define lnx_ALIGN90_COMP_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.ALIGN90_COMP_CAL_DONE_LANE
#define lnx_TXDCLK_NT_SEL_LANE_1_0  CAL_CTRL1_LANE.BF.TXDCLK_NT_SEL_LANE_1_0
#define lnx_RXDCLK_NT_SEL_LANE_1_0  CAL_CTRL1_LANE.BF.RXDCLK_NT_SEL_LANE_1_0
#define lnx_CAL_DONE_LANE  CAL_CTRL1_LANE.BF.CAL_DONE_LANE
#define lnx_RX_INIT_DONE_INT_LANE  CAL_CTRL1_LANE.BF.RX_INIT_DONE_INT_LANE

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
		uint8_t RXDCC_DATA_CAL_PASS_LANE                 : 1;	/*      7       r   0*/
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
#define lnx_DLL_VDATA_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_VDATA_CAL_PASS_LANE
#define lnx_DLL_EOM_GM_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_EOM_GM_CAL_PASS_LANE
#define lnx_DLL_EOM_VDATA_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.DLL_EOM_VDATA_CAL_PASS_LANE
#define lnx_TXDETECT_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXDETECT_CAL_PASS_LANE
#define lnx_RXDCC_DLL_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RXDCC_DLL_CAL_PASS_LANE
#define lnx_RXDCC_DATA_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.RXDCC_DATA_CAL_PASS_LANE
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
#define lnx_TXDCC_PDIV_CAL_PASS_LANE  CAL_CTRL2_LANE.BF.TXDCC_PDIV_CAL_PASS_LANE

// 0x0008	CAL_CTRL3_LANE		Calibration Control Lane 3
typedef union {
	struct {
		uint8_t LOAD_CAL_ON_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
		uint8_t APTA_TERMINATE_REASON_LANE_7_0           : 8;	/* [15:8]       r 8'h0*/
		uint8_t ERROR_RESPONSE_TTIU_DETECTED_LANE        : 1;	/*     16       r   0*/
		uint8_t RX_MIN_BOOST_MODE_LANE                   : 1;	/*     17     r/w   1*/
		uint8_t TX_F0T_EO_BASED_LANE                     : 1;	/*     18     r/w   1*/
		uint8_t CAL_VDD_CONTINUOUS_MODE_EN_LANE          : 1;	/*     19     r/w   0*/
		uint8_t GAIN_TRAIN_WITH_SAMPLER_LANE             : 1;	/*     20     r/w   0*/
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
#define lnx_APTA_TERMINATE_REASON_LANE_7_0  CAL_CTRL3_LANE.BF.APTA_TERMINATE_REASON_LANE_7_0
#define lnx_ERROR_RESPONSE_TTIU_DETECTED_LANE  CAL_CTRL3_LANE.BF.ERROR_RESPONSE_TTIU_DETECTED_LANE
#define lnx_RX_MIN_BOOST_MODE_LANE  CAL_CTRL3_LANE.BF.RX_MIN_BOOST_MODE_LANE
#define lnx_TX_F0T_EO_BASED_LANE  CAL_CTRL3_LANE.BF.TX_F0T_EO_BASED_LANE
#define lnx_CAL_VDD_CONTINUOUS_MODE_EN_LANE  CAL_CTRL3_LANE.BF.CAL_VDD_CONTINUOUS_MODE_EN_LANE
#define lnx_GAIN_TRAIN_WITH_SAMPLER_LANE  CAL_CTRL3_LANE.BF.GAIN_TRAIN_WITH_SAMPLER_LANE
#define lnx_DLL_VDDA_TRACKING_ON_LANE  CAL_CTRL3_LANE.BF.DLL_VDDA_TRACKING_ON_LANE
#define lnx_TXIMP_CAL_TIMEOUT_LANE  CAL_CTRL3_LANE.BF.TXIMP_CAL_TIMEOUT_LANE
#define lnx_RXIMP_CAL_TIMEOUT_LANE  CAL_CTRL3_LANE.BF.RXIMP_CAL_TIMEOUT_LANE

// 0x000c	CAL_CTRL4_LANE		Calibration Control Lane 4
typedef union {
	struct {
		uint8_t SAMPLER_CAL_AVG_MODE_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SAMPLER_SAMPLE_SIZE_LANE_7_0             : 8;	/* [15:8]     r/w 8'h3*/
		uint8_t TX_EM_PEAK_MAX_LANE_3_0                  : 4;	/*[19:16]     r/w 4'he*/
		uint8_t TX_EM_PEAK_MIN_LANE_3_0                  : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t TX_EM_PO_MAX_LANE_3_0                    : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t TX_EM_PRE_MAX_LANE_3_0                   : 4;	/*[31:28]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_CTRL4_LANE_t;
__xdata __at( 0x600c ) volatile CAL_CTRL4_LANE_t CAL_CTRL4_LANE;
#define lnx_SAMPLER_CAL_AVG_MODE_LANE_7_0  CAL_CTRL4_LANE.BF.SAMPLER_CAL_AVG_MODE_LANE_7_0
#define lnx_SAMPLER_SAMPLE_SIZE_LANE_7_0  CAL_CTRL4_LANE.BF.SAMPLER_SAMPLE_SIZE_LANE_7_0
#define lnx_TX_EM_PEAK_MAX_LANE_3_0  CAL_CTRL4_LANE.BF.TX_EM_PEAK_MAX_LANE_3_0
#define lnx_TX_EM_PEAK_MIN_LANE_3_0  CAL_CTRL4_LANE.BF.TX_EM_PEAK_MIN_LANE_3_0
#define lnx_TX_EM_PO_MAX_LANE_3_0  CAL_CTRL4_LANE.BF.TX_EM_PO_MAX_LANE_3_0
#define lnx_TX_EM_PRE_MAX_LANE_3_0  CAL_CTRL4_LANE.BF.TX_EM_PRE_MAX_LANE_3_0

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
		uint8_t CAL_SAMPLER_RES_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TX_EM_PRE_MIN_LANE_3_0                   : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t TX_EM_PO_MIN_LANE_3_0                    : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA2_LANE_t;
__xdata __at( 0x6014 ) volatile CAL_SAVE_DATA2_LANE_t CAL_SAVE_DATA2_LANE;
#define lnx_CAL_ALIGN90_CMP_OFFSET_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_ALIGN90_CMP_OFFSET_LANE_7_0
#define lnx_CAL_RX_IMP_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_RX_IMP_LANE_7_0
#define lnx_CAL_SAMPLER_RES_LANE_7_0  CAL_SAVE_DATA2_LANE.BF.CAL_SAMPLER_RES_LANE_7_0
#define lnx_TX_EM_PRE_MIN_LANE_3_0  CAL_SAVE_DATA2_LANE.BF.TX_EM_PRE_MIN_LANE_3_0
#define lnx_TX_EM_PO_MIN_LANE_3_0  CAL_SAVE_DATA2_LANE.BF.TX_EM_PO_MIN_LANE_3_0

// 0x0018	CAL_SAVE_DATA3_LANE		Calibration Result 5
typedef union {
	struct {
		uint8_t CAL_TXIMP_TUNEN_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_TXIMP_TUNEN0_LANE_7_0                : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TXIMP_TUNEP_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h7*/
		uint8_t CAL_TXIMP_TUNEP0_LANE_7_0                : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CAL_SAVE_DATA3_LANE_t;
__xdata __at( 0x6018 ) volatile CAL_SAVE_DATA3_LANE_t CAL_SAVE_DATA3_LANE;
#define lnx_CAL_TXIMP_TUNEN_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEN_LANE_7_0
#define lnx_CAL_TXIMP_TUNEN0_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEN0_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEP_LANE_7_0
#define lnx_CAL_TXIMP_TUNEP0_LANE_7_0  CAL_SAVE_DATA3_LANE.BF.CAL_TXIMP_TUNEP0_LANE_7_0

// 0x001c	PHY_REMOTE_CTRL_COMMAND_LANE		
typedef union {
	struct {
		uint8_t PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0_b0 : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0_b1 : 8;	/* [15:0]     r/w 16'h0*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PHY_REMOTE_CTRL_COMMAND_TYPE_LANE_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} PHY_REMOTE_CTRL_COMMAND_LANE_t;
__xdata __at( 0x601c ) volatile PHY_REMOTE_CTRL_COMMAND_LANE_t PHY_REMOTE_CTRL_COMMAND_LANE;
#define lnx_PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0_b0  PHY_REMOTE_CTRL_COMMAND_LANE.BF.PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0_b0
#define lnx_PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0_b1  PHY_REMOTE_CTRL_COMMAND_LANE.BF.PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0_b1
#define lnx_PHY_REMOTE_CTRL_COMMAND_TYPE_LANE_7_0  PHY_REMOTE_CTRL_COMMAND_LANE.BF.PHY_REMOTE_CTRL_COMMAND_TYPE_LANE_7_0
#define lnx_PHY_REMOTE_CTRL_COMMAND_CODE_LANE_15_0  PHY_REMOTE_CTRL_COMMAND_LANE.WT.W0

// 0x0020	PHY_REMOTE_CTRL_VALUE_LANE		
typedef union {
	struct {
		uint8_t PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0       : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1       : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2       : 8;	/* [31:0]     r/w 32'h0*/
		uint8_t PHY_REMOTE_CTRL_VALUE_LANE_31_0_b3       : 8;	/* [31:0]     r/w 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHY_REMOTE_CTRL_VALUE_LANE_t;
__xdata __at( 0x6020 ) volatile PHY_REMOTE_CTRL_VALUE_LANE_t PHY_REMOTE_CTRL_VALUE_LANE;
#define lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0  PHY_REMOTE_CTRL_VALUE_LANE.BF.PHY_REMOTE_CTRL_VALUE_LANE_31_0_b0
#define lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1  PHY_REMOTE_CTRL_VALUE_LANE.BF.PHY_REMOTE_CTRL_VALUE_LANE_31_0_b1
#define lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2  PHY_REMOTE_CTRL_VALUE_LANE.BF.PHY_REMOTE_CTRL_VALUE_LANE_31_0_b2
#define lnx_PHY_REMOTE_CTRL_VALUE_LANE_31_0_b3  PHY_REMOTE_CTRL_VALUE_LANE.BF.PHY_REMOTE_CTRL_VALUE_LANE_31_0_b3

// 0x0024	PHY_LOCAL_VALUE_LANE		
typedef union {
	struct {
		uint8_t PHY_LOCAL_VALUE_LANE_31_0_b0             : 8;	/* [31:0]       r 32'h0*/
		uint8_t PHY_LOCAL_VALUE_LANE_31_0_b1             : 8;	/* [31:0]       r 32'h0*/
		uint8_t PHY_LOCAL_VALUE_LANE_31_0_b2             : 8;	/* [31:0]       r 32'h0*/
		uint8_t PHY_LOCAL_VALUE_LANE_31_0_b3             : 8;	/* [31:0]       r 32'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} PHY_LOCAL_VALUE_LANE_t;
__xdata __at( 0x6024 ) volatile PHY_LOCAL_VALUE_LANE_t PHY_LOCAL_VALUE_LANE;
#define lnx_PHY_LOCAL_VALUE_LANE_31_0_b0  PHY_LOCAL_VALUE_LANE.BF.PHY_LOCAL_VALUE_LANE_31_0_b0
#define lnx_PHY_LOCAL_VALUE_LANE_31_0_b1  PHY_LOCAL_VALUE_LANE.BF.PHY_LOCAL_VALUE_LANE_31_0_b1
#define lnx_PHY_LOCAL_VALUE_LANE_31_0_b2  PHY_LOCAL_VALUE_LANE.BF.PHY_LOCAL_VALUE_LANE_31_0_b2
#define lnx_PHY_LOCAL_VALUE_LANE_31_0_b3  PHY_LOCAL_VALUE_LANE.BF.PHY_LOCAL_VALUE_LANE_31_0_b3

// 0x0028	TRX_TRAIN_IF_TIMERS1_LANE		
typedef union {
	struct {
		uint8_t RX_TRAIN_TIMER_LANE_15_0_b0              : 8;	/* [15:0]     r/w 16'h1f3*/
		uint8_t RX_TRAIN_TIMER_LANE_15_0_b1              : 8;	/* [15:0]     r/w 16'h1f3*/
		uint8_t TX_TRAIN_FRAME_DET_TIMER_LANE_7_0        : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t TX_TRAIN_STATUS_DET_TIMER_LANE_7_0       : 8;	/*[31:24]     r/w 8'h03*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TRAIN_IF_TIMERS1_LANE_t;
__xdata __at( 0x6028 ) volatile TRX_TRAIN_IF_TIMERS1_LANE_t TRX_TRAIN_IF_TIMERS1_LANE;
#define lnx_RX_TRAIN_TIMER_LANE_15_0_b0  TRX_TRAIN_IF_TIMERS1_LANE.BF.RX_TRAIN_TIMER_LANE_15_0_b0
#define lnx_RX_TRAIN_TIMER_LANE_15_0_b1  TRX_TRAIN_IF_TIMERS1_LANE.BF.RX_TRAIN_TIMER_LANE_15_0_b1
#define lnx_TX_TRAIN_FRAME_DET_TIMER_LANE_7_0  TRX_TRAIN_IF_TIMERS1_LANE.BF.TX_TRAIN_FRAME_DET_TIMER_LANE_7_0
#define lnx_TX_TRAIN_STATUS_DET_TIMER_LANE_7_0  TRX_TRAIN_IF_TIMERS1_LANE.BF.TX_TRAIN_STATUS_DET_TIMER_LANE_7_0
#define lnx_RX_TRAIN_TIMER_LANE_15_0  TRX_TRAIN_IF_TIMERS1_LANE.WT.W0

// 0x002c	TRX_TRAIN_IF_TIMERS2_LANE		
typedef union {
	struct {
		uint8_t TRX_TRAIN_TIMER_LANE_15_0_b0             : 8;	/* [15:0]     r/w 16'h1f3*/
		uint8_t TRX_TRAIN_TIMER_LANE_15_0_b1             : 8;	/* [15:0]     r/w 16'h1f3*/
		uint8_t PHY_LOCAL_STATUS_LANE_7_0                : 8;	/*[23:16]       r 8'h0*/
		uint8_t DFE_RES_F0A_HIGH_THRES_INIT_LANE_7_0     : 8;	/*[31:24]     r/w 8'h32*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRX_TRAIN_IF_TIMERS2_LANE_t;
__xdata __at( 0x602c ) volatile TRX_TRAIN_IF_TIMERS2_LANE_t TRX_TRAIN_IF_TIMERS2_LANE;
#define lnx_TRX_TRAIN_TIMER_LANE_15_0_b0  TRX_TRAIN_IF_TIMERS2_LANE.BF.TRX_TRAIN_TIMER_LANE_15_0_b0
#define lnx_TRX_TRAIN_TIMER_LANE_15_0_b1  TRX_TRAIN_IF_TIMERS2_LANE.BF.TRX_TRAIN_TIMER_LANE_15_0_b1
#define lnx_PHY_LOCAL_STATUS_LANE_7_0  TRX_TRAIN_IF_TIMERS2_LANE.BF.PHY_LOCAL_STATUS_LANE_7_0
#define lnx_DFE_RES_F0A_HIGH_THRES_INIT_LANE_7_0  TRX_TRAIN_IF_TIMERS2_LANE.BF.DFE_RES_F0A_HIGH_THRES_INIT_LANE_7_0
#define lnx_TRX_TRAIN_TIMER_LANE_15_0  TRX_TRAIN_IF_TIMERS2_LANE.WT.W0

// 0x0030	TRX_TRAIN_IF_TIMERS_ENABLE_LANE		
typedef union {
	struct {
		uint8_t TRAIN_GN1_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_G1_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_G0_LANE_7_0                        : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t PHY_MCU_LOCAL_ACK_LANE                   : 1;	/*     24     r/w   0*/
		uint8_t TX_G1_MIDPOINT_EN_LANE                   : 1;	/*     25     r/w   1*/
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
#define lnx_TRAIN_GN1_LANE_7_0  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TRAIN_GN1_LANE_7_0
#define lnx_TRAIN_G1_LANE_7_0  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TRAIN_G1_LANE_7_0
#define lnx_TRAIN_G0_LANE_7_0  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TRAIN_G0_LANE_7_0
#define lnx_PHY_MCU_LOCAL_ACK_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.PHY_MCU_LOCAL_ACK_LANE
#define lnx_TX_G1_MIDPOINT_EN_LANE  TRX_TRAIN_IF_TIMERS_ENABLE_LANE.BF.TX_G1_MIDPOINT_EN_LANE
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
		uint8_t CDR_MIDPOINT_EN_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t DFE_RES_F5TO15_MAX_SPD_EN_LANE           : 1;	/*      1     r/w   0*/
		uint8_t PHASE_CONTROL_FUNC_EN_LANE               : 1;	/*      2     r/w 1'b0*/
		uint8_t EOM_READY_LANE                           : 1;	/*      3     r/w 1'b0*/
		uint8_t EOM_DFE_CALL_LANE                        : 1;	/*      4     r/w 1'b0*/
		uint8_t TX_GN1_MIDPOINT_EN_LANE                  : 1;	/*      5     r/w 1'b1*/
		uint8_t DFE_CORE_BYPASS_LANE                     : 1;	/*      6     r/w   0*/
		uint8_t DFE_CAL_DONE_LANE                        : 1;	/*      7       r 1'b0*/
		uint8_t ESM_VOLTAGE_LANE_7_0                     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t GAIN_TRAIN_WITH_C_LANE                   : 1;	/*     16     r/w   1*/
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
__xdata __at( 0x6038 ) volatile DFE_CONTROL_1_t DFE_CONTROL_1;
#define lnx_CDR_MIDPOINT_EN_LANE  DFE_CONTROL_1.BF.CDR_MIDPOINT_EN_LANE
#define lnx_DFE_RES_F5TO15_MAX_SPD_EN_LANE  DFE_CONTROL_1.BF.DFE_RES_F5TO15_MAX_SPD_EN_LANE
#define lnx_PHASE_CONTROL_FUNC_EN_LANE  DFE_CONTROL_1.BF.PHASE_CONTROL_FUNC_EN_LANE
#define lnx_EOM_READY_LANE  DFE_CONTROL_1.BF.EOM_READY_LANE
#define lnx_EOM_DFE_CALL_LANE  DFE_CONTROL_1.BF.EOM_DFE_CALL_LANE
#define lnx_TX_GN1_MIDPOINT_EN_LANE  DFE_CONTROL_1.BF.TX_GN1_MIDPOINT_EN_LANE
#define lnx_DFE_CORE_BYPASS_LANE  DFE_CONTROL_1.BF.DFE_CORE_BYPASS_LANE
#define lnx_DFE_CAL_DONE_LANE  DFE_CONTROL_1.BF.DFE_CAL_DONE_LANE
#define lnx_ESM_VOLTAGE_LANE_7_0  DFE_CONTROL_1.BF.ESM_VOLTAGE_LANE_7_0
#define lnx_GAIN_TRAIN_WITH_C_LANE  DFE_CONTROL_1.BF.GAIN_TRAIN_WITH_C_LANE
#define lnx_GAIN_TRAIN_END_EN_LANE  DFE_CONTROL_1.BF.GAIN_TRAIN_END_EN_LANE
#define lnx_GAIN_TRAIN_INIT_EN_LANE  DFE_CONTROL_1.BF.GAIN_TRAIN_INIT_EN_LANE
#define lnx_DFE_INIT_REG_LANE  DFE_CONTROL_1.BF.DFE_INIT_REG_LANE
#define lnx_PHASE_ADAPT_SAT_DETECT_LANE  DFE_CONTROL_1.BF.PHASE_ADAPT_SAT_DETECT_LANE
#define lnx_PHASE_ADAPT_TEMP_AUTO_EN_LANE  DFE_CONTROL_1.BF.PHASE_ADAPT_TEMP_AUTO_EN_LANE
#define lnx_SQ_AUTO_TRAIN_LANE  DFE_CONTROL_1.BF.SQ_AUTO_TRAIN_LANE
#define lnx_RX_TRAIN_ONLY_DFE_LANE  DFE_CONTROL_1.BF.RX_TRAIN_ONLY_DFE_LANE
#define lnx_PHASE_ADAPT_TEMP_THR_LANE_7_0  DFE_CONTROL_1.BF.PHASE_ADAPT_TEMP_THR_LANE_7_0

// 0x0040	DFE_CONTROL_2		
typedef union {
	struct {
		uint8_t DFE_DBG_STEP_LANE_7_0                    : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t ADAPT_PHASE_OFFSET_DATA_LANE_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t ADAPT_DATA_EN_LANE_7_0                   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t ADAPT_SLICER_EN_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_2_t;
__xdata __at( 0x6040 ) volatile DFE_CONTROL_2_t DFE_CONTROL_2;
#define lnx_DFE_DBG_STEP_LANE_7_0  DFE_CONTROL_2.BF.DFE_DBG_STEP_LANE_7_0
#define lnx_ADAPT_PHASE_OFFSET_DATA_LANE_7_0  DFE_CONTROL_2.BF.ADAPT_PHASE_OFFSET_DATA_LANE_7_0
#define lnx_ADAPT_DATA_EN_LANE_7_0  DFE_CONTROL_2.BF.ADAPT_DATA_EN_LANE_7_0
#define lnx_ADAPT_SLICER_EN_LANE_7_0  DFE_CONTROL_2.BF.ADAPT_SLICER_EN_LANE_7_0

// 0x0044	DFE_CONTROL_3		
typedef union {
	struct {
		uint8_t F0D_ACCAP_SEL_REFCLK_LANE                : 1;	/*      0     r/w   0*/
		uint8_t FORCE_PHASE_OFFSET_DATA_EN_LANE          : 1;	/*      1     r/w   0*/
		uint8_t F0D_MEASURE_DONE_LANE                    : 1;	/*      2     r/w   0*/
		uint8_t TX_TRAIN_P2P_HOLD_LANE                   : 1;	/*      3     r/w 1'h1*/
		uint8_t TRAIN_PH_CONTROL_MODE_LANE_1_0           : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TRAIN_USE_D_LANE                         : 1;	/*      6     r/w 1'h0*/
		uint8_t TRAIN_USE_S_LANE                         : 1;	/*      7     r/w 1'h0*/
		uint8_t CAL_EOM_DPHER_LANE_7_0                   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PHASE_LANE_7_0                       : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t FORCE_PHASE_TRAIN_OFFSET_EN_LANE         : 1;	/*     24     r/w   0*/
		uint8_t CDR_DFE_F0D_NORM_ADAPT_EN_LANE           : 1;	/*     25     r/w   0*/
		uint8_t SAME_SET_NO_UPDATE_LANE                  : 1;	/*     26     r/w   0*/
		uint8_t SAME_SET_ALWAYS_UPDATE_LANE              : 1;	/*     27     r/w   0*/
		uint8_t THRES_K_SHIFT_LANE_3_0                   : 4;	/*[31:28]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_3_t;
__xdata __at( 0x6044 ) volatile DFE_CONTROL_3_t DFE_CONTROL_3;
#define lnx_F0D_ACCAP_SEL_REFCLK_LANE  DFE_CONTROL_3.BF.F0D_ACCAP_SEL_REFCLK_LANE
#define lnx_FORCE_PHASE_OFFSET_DATA_EN_LANE  DFE_CONTROL_3.BF.FORCE_PHASE_OFFSET_DATA_EN_LANE
#define lnx_F0D_MEASURE_DONE_LANE  DFE_CONTROL_3.BF.F0D_MEASURE_DONE_LANE
#define lnx_TX_TRAIN_P2P_HOLD_LANE  DFE_CONTROL_3.BF.TX_TRAIN_P2P_HOLD_LANE
#define lnx_TRAIN_PH_CONTROL_MODE_LANE_1_0  DFE_CONTROL_3.BF.TRAIN_PH_CONTROL_MODE_LANE_1_0
#define lnx_TRAIN_USE_D_LANE  DFE_CONTROL_3.BF.TRAIN_USE_D_LANE
#define lnx_TRAIN_USE_S_LANE  DFE_CONTROL_3.BF.TRAIN_USE_S_LANE
#define lnx_CAL_EOM_DPHER_LANE_7_0  DFE_CONTROL_3.BF.CAL_EOM_DPHER_LANE_7_0
#define lnx_CAL_PHASE_LANE_7_0  DFE_CONTROL_3.BF.CAL_PHASE_LANE_7_0
#define lnx_FORCE_PHASE_TRAIN_OFFSET_EN_LANE  DFE_CONTROL_3.BF.FORCE_PHASE_TRAIN_OFFSET_EN_LANE
#define lnx_CDR_DFE_F0D_NORM_ADAPT_EN_LANE  DFE_CONTROL_3.BF.CDR_DFE_F0D_NORM_ADAPT_EN_LANE
#define lnx_SAME_SET_NO_UPDATE_LANE  DFE_CONTROL_3.BF.SAME_SET_NO_UPDATE_LANE
#define lnx_SAME_SET_ALWAYS_UPDATE_LANE  DFE_CONTROL_3.BF.SAME_SET_ALWAYS_UPDATE_LANE
#define lnx_THRES_K_SHIFT_LANE_3_0  DFE_CONTROL_3.BF.THRES_K_SHIFT_LANE_3_0

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
		uint8_t CKFW_EN_LANE                             : 1;	/*      0     r/w 1'b0*/
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
		uint8_t CTLE_SET_SEL_LANE                        : 1;	/*     20     r/w 1'h0*/
		uint8_t EOM_PHASE_UI_ALIGN_FAILED_LANE           : 1;	/*     21       r 1'h0*/
		uint8_t PATTERN_PROTECT_EN_LANE                  : 1;	/*     22     r/w 1'h0*/
		uint8_t MAXEO_ADAPT_NORMAL_MODE_EN_LANE          : 1;	/*     23     r/w 1'b0*/
		uint8_t THRE_EXCELLENT_LANE_5_0                  : 6;	/*[29:24]     r/w 6'h3f*/
		uint8_t EYE_CHECK_BYPASS_LANE                    : 1;	/*     30     r/w 1'b0*/
		uint8_t FAST_DFE_TIMER_EN_LANE                   : 1;	/*     31     r/w 1'b0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_5_t;
__xdata __at( 0x604c ) volatile DFE_CONTROL_5_t DFE_CONTROL_5;
#define lnx_CKFW_EN_LANE  DFE_CONTROL_5.BF.CKFW_EN_LANE
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
#define lnx_CTLE_SET_SEL_LANE  DFE_CONTROL_5.BF.CTLE_SET_SEL_LANE
#define lnx_EOM_PHASE_UI_ALIGN_FAILED_LANE  DFE_CONTROL_5.BF.EOM_PHASE_UI_ALIGN_FAILED_LANE
#define lnx_PATTERN_PROTECT_EN_LANE  DFE_CONTROL_5.BF.PATTERN_PROTECT_EN_LANE
#define lnx_MAXEO_ADAPT_NORMAL_MODE_EN_LANE  DFE_CONTROL_5.BF.MAXEO_ADAPT_NORMAL_MODE_EN_LANE
#define lnx_THRE_EXCELLENT_LANE_5_0  DFE_CONTROL_5.BF.THRE_EXCELLENT_LANE_5_0
#define lnx_EYE_CHECK_BYPASS_LANE  DFE_CONTROL_5.BF.EYE_CHECK_BYPASS_LANE
#define lnx_FAST_DFE_TIMER_EN_LANE  DFE_CONTROL_5.BF.FAST_DFE_TIMER_EN_LANE

// 0x0050	TRAIN_CONTROL_0		
typedef union {
	struct {
		uint8_t TX_GN1_MIDPOINT_THRES_C_LANE_7_0         : 8;	/*  [7:0]     r/w 8'hfd*/
		uint8_t TX_GN1_MIDPOINT_THRES_K_LANE_7_0         : 8;	/* [15:8]     r/w 8'hf*/
		uint8_t MIDPOINT_SMALL_THRES_C_LANE_3_0          : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t MIDPOINT_SMALL_THRES_K_LANE_3_0          : 4;	/*[23:20]     r/w 4'hf*/
		uint8_t MIDPOINT_LARGE_THRES_C_LANE_3_0          : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t MIDPOINT_LARGE_THRES_K_LANE_3_0          : 4;	/*[31:28]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_0_t;
__xdata __at( 0x6050 ) volatile TRAIN_CONTROL_0_t TRAIN_CONTROL_0;
#define lnx_TX_GN1_MIDPOINT_THRES_C_LANE_7_0  TRAIN_CONTROL_0.BF.TX_GN1_MIDPOINT_THRES_C_LANE_7_0
#define lnx_TX_GN1_MIDPOINT_THRES_K_LANE_7_0  TRAIN_CONTROL_0.BF.TX_GN1_MIDPOINT_THRES_K_LANE_7_0
#define lnx_MIDPOINT_SMALL_THRES_C_LANE_3_0  TRAIN_CONTROL_0.BF.MIDPOINT_SMALL_THRES_C_LANE_3_0
#define lnx_MIDPOINT_SMALL_THRES_K_LANE_3_0  TRAIN_CONTROL_0.BF.MIDPOINT_SMALL_THRES_K_LANE_3_0
#define lnx_MIDPOINT_LARGE_THRES_C_LANE_3_0  TRAIN_CONTROL_0.BF.MIDPOINT_LARGE_THRES_C_LANE_3_0
#define lnx_MIDPOINT_LARGE_THRES_K_LANE_3_0  TRAIN_CONTROL_0.BF.MIDPOINT_LARGE_THRES_K_LANE_3_0

// 0x0054	TRAIN_CONTROL_1		
typedef union {
	struct {
		uint8_t INI_PHASE_OFFSET_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t MIDPOINT_PHASE_OS_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SUMF_BOOST_TARGET_C_LANE_7_0             : 8;	/*[23:16]     r/w 8'hc4*/
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
		uint8_t ESM_DFE_ADAPT_SPLR_EN_LANE_3_0           : 4;	/*[13:10]     r/w 4'hc*/
		uint8_t RESERVED_14                              : 1;	/*     14     r/w 1'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'h0*/
		uint8_t ESM_PATH_SEL_LANE                        : 1;	/*     16     r/w 1'b1*/
		uint8_t RESERVED_17                              : 1;	/*     17     r/w 1'h0*/
		uint8_t ESM_EN_LANE                              : 1;	/*     18     r/w 1'h0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w 1'h0*/
		uint8_t RESERVED_20                              : 1;	/*     20     r/w 1'h0*/
		uint8_t TX_ADAPT_G1_EN_LANE                      : 1;	/*     21     r/w 1'h0*/
		uint8_t TX_ADAPT_GN1_EN_LANE                     : 1;	/*     22     r/w 1'h0*/
		uint8_t TX_ADAPT_G0_EN_LANE                      : 1;	/*     23     r/w 1'h0*/
		uint8_t RXFFE_R_GAIN_TRAIN_LANE_3_0              : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t RX_RXFFE_R_INI_LANE_3_0                  : 4;	/*[31:28]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_2_t;
__xdata __at( 0x6058 ) volatile TRAIN_CONTROL_2_t TRAIN_CONTROL_2;
#define lnx_ESM_PHASE_LANE_9_0_b0  TRAIN_CONTROL_2.BF.ESM_PHASE_LANE_9_0_b0
#define lnx_ESM_PHASE_LANE_9_0_b1  TRAIN_CONTROL_2.BF.ESM_PHASE_LANE_9_0_b1
#define lnx_ESM_DFE_ADAPT_SPLR_EN_LANE_3_0  TRAIN_CONTROL_2.BF.ESM_DFE_ADAPT_SPLR_EN_LANE_3_0
#define lnx_ESM_PATH_SEL_LANE  TRAIN_CONTROL_2.BF.ESM_PATH_SEL_LANE
#define lnx_ESM_EN_LANE  TRAIN_CONTROL_2.BF.ESM_EN_LANE
#define lnx_TX_ADAPT_G1_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_G1_EN_LANE
#define lnx_TX_ADAPT_GN1_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_GN1_EN_LANE
#define lnx_TX_ADAPT_G0_EN_LANE  TRAIN_CONTROL_2.BF.TX_ADAPT_G0_EN_LANE
#define lnx_RXFFE_R_GAIN_TRAIN_LANE_3_0  TRAIN_CONTROL_2.BF.RXFFE_R_GAIN_TRAIN_LANE_3_0
#define lnx_RX_RXFFE_R_INI_LANE_3_0  TRAIN_CONTROL_2.BF.RX_RXFFE_R_INI_LANE_3_0

// 0x005c	RPTA_CONFIG_0		
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
		uint8_t F0D_THRE_LANE_7_0                        : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t PH_ADAPT_STEP_SIZE_LANE_7_0              : 8;	/*[23:16]     r/w 8'h6*/
		uint8_t PH_CONV_NUM_LANE_7_0                     : 8;	/*[31:24]     r/w 8'h4*/
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
		uint8_t THRES_K_BASE_LANE_3_0                    : 4;	/*[15:12]     r/w 4'h4*/
		uint8_t DFE_F1_SAT_THRES_LANE_7_0                : 8;	/*[23:16]     r/w 8'h1e*/
		uint8_t DFE_F0_SAT_THRES_LANE_7_0                : 8;	/*[31:24]     r/w 8'h3d*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DLL_CAL_t;
__xdata __at( 0x6064 ) volatile DLL_CAL_t DLL_CAL;
#define lnx_DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0  DLL_CAL.BF.DLL_SELLV_RXEOMDLL_FINAL_STEP_NUM_SEL_LANE_1_0
#define lnx_DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0  DLL_CAL.BF.DLL_SELLV_RXDLL_FINAL_STEP_NUM_SEL_LANE_1_0
#define lnx_DLL_EOM_GMSEL_MIN_LANE_3_0  DLL_CAL.BF.DLL_EOM_GMSEL_MIN_LANE_3_0
#define lnx_DLL_GMSEL_MIN_LANE_3_0  DLL_CAL.BF.DLL_GMSEL_MIN_LANE_3_0
#define lnx_THRES_K_BASE_LANE_3_0  DLL_CAL.BF.THRES_K_BASE_LANE_3_0
#define lnx_DFE_F1_SAT_THRES_LANE_7_0  DLL_CAL.BF.DFE_F1_SAT_THRES_LANE_7_0
#define lnx_DFE_F0_SAT_THRES_LANE_7_0  DLL_CAL.BF.DFE_F0_SAT_THRES_LANE_7_0

// 0x0068	TRAIN_PARA_0		Train Parameters 0
typedef union {
	struct {
		uint8_t TX_GN1_MIDPOINT_INDEX_OS_LANE_7_0        : 8;	/*  [7:0]     r/w 8'hfc*/
		uint8_t AVG_F1_LANE_7_0                          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t TRAIN_PH_OS_ESM_2C_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t TRAIN_PH_OS_DATA_2C_LANE_7_0             : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_0_t;
__xdata __at( 0x6068 ) volatile TRAIN_PARA_0_t TRAIN_PARA_0;
#define lnx_TX_GN1_MIDPOINT_INDEX_OS_LANE_7_0  TRAIN_PARA_0.BF.TX_GN1_MIDPOINT_INDEX_OS_LANE_7_0
#define lnx_AVG_F1_LANE_7_0  TRAIN_PARA_0.BF.AVG_F1_LANE_7_0
#define lnx_TRAIN_PH_OS_ESM_2C_LANE_7_0  TRAIN_PARA_0.BF.TRAIN_PH_OS_ESM_2C_LANE_7_0
#define lnx_TRAIN_PH_OS_DATA_2C_LANE_7_0  TRAIN_PARA_0.BF.TRAIN_PH_OS_DATA_2C_LANE_7_0

// 0x006c	TRAIN_PARA_1		Train Parameters 1
typedef union {
	struct {
		uint8_t DFE_RES_F0A_HIGH_THRES_END_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h32*/
		uint8_t DFE_FX_SUM_SAT_THRES_LANE_7_0            : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t DFE_F0_SAT_PROTECT_THRES_LANE_7_0        : 8;	/*[23:16]     r/w 8'h3d*/
		uint8_t DFE_F2_SAT_THRES_LANE_7_0                : 8;	/*[31:24]     r/w 8'h1e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_1_t;
__xdata __at( 0x606c ) volatile TRAIN_PARA_1_t TRAIN_PARA_1;
#define lnx_DFE_RES_F0A_HIGH_THRES_END_LANE_7_0  TRAIN_PARA_1.BF.DFE_RES_F0A_HIGH_THRES_END_LANE_7_0
#define lnx_DFE_FX_SUM_SAT_THRES_LANE_7_0  TRAIN_PARA_1.BF.DFE_FX_SUM_SAT_THRES_LANE_7_0
#define lnx_DFE_F0_SAT_PROTECT_THRES_LANE_7_0  TRAIN_PARA_1.BF.DFE_F0_SAT_PROTECT_THRES_LANE_7_0
#define lnx_DFE_F2_SAT_THRES_LANE_7_0  TRAIN_PARA_1.BF.DFE_F2_SAT_THRES_LANE_7_0

// 0x0070	TRAIN_PARA_2		Train Parameters 2
typedef union {
	struct {
		uint8_t RX_FFE_OVERBOOST_THRES_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t SUMF_BOOST_TARGET_C_FORCE_EN_LANE        : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t EDGE_SAMPLER_ADJ_LANE_1_0                : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t EYE_PH_2C_LANE_7_0                       : 8;	/* [15:8]       r 8'h0*/
		uint8_t EYE_RIGHT_2C_LANE_7_0                    : 8;	/*[23:16]       r 8'h0*/
		uint8_t EYE_LEFT_2C_LANE_7_0                     : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_2_t;
__xdata __at( 0x6070 ) volatile TRAIN_PARA_2_t TRAIN_PARA_2;
#define lnx_RX_FFE_OVERBOOST_THRES_LANE_3_0  TRAIN_PARA_2.BF.RX_FFE_OVERBOOST_THRES_LANE_3_0
#define lnx_SUMF_BOOST_TARGET_C_FORCE_EN_LANE  TRAIN_PARA_2.BF.SUMF_BOOST_TARGET_C_FORCE_EN_LANE
#define lnx_EDGE_SAMPLER_ADJ_LANE_1_0  TRAIN_PARA_2.BF.EDGE_SAMPLER_ADJ_LANE_1_0
#define lnx_EYE_PH_2C_LANE_7_0  TRAIN_PARA_2.BF.EYE_PH_2C_LANE_7_0
#define lnx_EYE_RIGHT_2C_LANE_7_0  TRAIN_PARA_2.BF.EYE_RIGHT_2C_LANE_7_0
#define lnx_EYE_LEFT_2C_LANE_7_0  TRAIN_PARA_2.BF.EYE_LEFT_2C_LANE_7_0

// 0x0074	TRAIN_PARA_3		Train Parameters 3
typedef union {
	struct {
		uint8_t DFE_RES_F0A_LOW_THRES_2_END_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h1e*/
		uint8_t DFE_RES_F0A_LOW_THRES_3_END_LANE_7_0     : 8;	/* [15:8]     r/w 8'h1e*/
		uint8_t CDR_MIDPOINT_STEP_NUM_LANE_2_0           : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t PCIE_RXTRAIN_ON_BEFORE_DIR_LANE          : 1;	/*     19     r/w   1*/
		uint8_t BYPASS_FFE_R_CTRL_LANE                   : 1;	/*     20     r/w   0*/
		uint8_t BYPASS_FFE_C_CTRL_LANE                   : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RPTA_F0D_OFFSET_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_PARA_3_t;
__xdata __at( 0x6074 ) volatile TRAIN_PARA_3_t TRAIN_PARA_3;
#define lnx_DFE_RES_F0A_LOW_THRES_2_END_LANE_7_0  TRAIN_PARA_3.BF.DFE_RES_F0A_LOW_THRES_2_END_LANE_7_0
#define lnx_DFE_RES_F0A_LOW_THRES_3_END_LANE_7_0  TRAIN_PARA_3.BF.DFE_RES_F0A_LOW_THRES_3_END_LANE_7_0
#define lnx_CDR_MIDPOINT_STEP_NUM_LANE_2_0  TRAIN_PARA_3.BF.CDR_MIDPOINT_STEP_NUM_LANE_2_0
#define lnx_PCIE_RXTRAIN_ON_BEFORE_DIR_LANE  TRAIN_PARA_3.BF.PCIE_RXTRAIN_ON_BEFORE_DIR_LANE
#define lnx_BYPASS_FFE_R_CTRL_LANE  TRAIN_PARA_3.BF.BYPASS_FFE_R_CTRL_LANE
#define lnx_BYPASS_FFE_C_CTRL_LANE  TRAIN_PARA_3.BF.BYPASS_FFE_C_CTRL_LANE
#define lnx_RPTA_F0D_OFFSET_LANE_7_0  TRAIN_PARA_3.BF.RPTA_F0D_OFFSET_LANE_7_0

// 0x0078	DFE_CONTROL_6		
typedef union {
	struct {
		uint8_t DFE_RES_F0A_LOW_THRES_01_INIT_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h14*/
		uint8_t DFE_RES_F0A_LOW_THRES_2_INIT_LANE_7_0    : 8;	/* [15:8]     r/w 8'h14*/
		uint8_t DFE_RES_F0A_LOW_THRES_3_INIT_LANE_7_0    : 8;	/*[23:16]     r/w 8'h14*/
		uint8_t DFE_RES_F0A_LOW_THRES_01_END_LANE_7_0    : 8;	/*[31:24]     r/w 8'h1e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_6_t;
__xdata __at( 0x6078 ) volatile DFE_CONTROL_6_t DFE_CONTROL_6;
#define lnx_DFE_RES_F0A_LOW_THRES_01_INIT_LANE_7_0  DFE_CONTROL_6.BF.DFE_RES_F0A_LOW_THRES_01_INIT_LANE_7_0
#define lnx_DFE_RES_F0A_LOW_THRES_2_INIT_LANE_7_0  DFE_CONTROL_6.BF.DFE_RES_F0A_LOW_THRES_2_INIT_LANE_7_0
#define lnx_DFE_RES_F0A_LOW_THRES_3_INIT_LANE_7_0  DFE_CONTROL_6.BF.DFE_RES_F0A_LOW_THRES_3_INIT_LANE_7_0
#define lnx_DFE_RES_F0A_LOW_THRES_01_END_LANE_7_0  DFE_CONTROL_6.BF.DFE_RES_F0A_LOW_THRES_01_END_LANE_7_0

// 0x007c	DFE_TEST_0		
typedef union {
	struct {
		uint8_t SQ_THRESH_RATIO_G0_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t SQ_THRESH_RATIO_G1_LANE_7_0              : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t SQ_THRESH_RATIO_G2_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t SQ_THRESH_RATIO_G3_LANE_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_TEST_0_t;
__xdata __at( 0x607c ) volatile DFE_TEST_0_t DFE_TEST_0;
#define lnx_SQ_THRESH_RATIO_G0_LANE_7_0  DFE_TEST_0.BF.SQ_THRESH_RATIO_G0_LANE_7_0
#define lnx_SQ_THRESH_RATIO_G1_LANE_7_0  DFE_TEST_0.BF.SQ_THRESH_RATIO_G1_LANE_7_0
#define lnx_SQ_THRESH_RATIO_G2_LANE_7_0  DFE_TEST_0.BF.SQ_THRESH_RATIO_G2_LANE_7_0
#define lnx_SQ_THRESH_RATIO_G3_LANE_7_0  DFE_TEST_0.BF.SQ_THRESH_RATIO_G3_LANE_7_0

// 0x0080	DFE_TEST_1		
typedef union {
	struct {
		uint8_t SQ_THRESH_RATIO_G4_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t DFE_EN_SEL_G0_LANE                       : 1;	/*      8     r/w   0*/
		uint8_t DFE_EN_SEL_G1_LANE                       : 1;	/*      9     r/w   0*/
		uint8_t DFE_EN_SEL_G2_LANE                       : 1;	/*     10     r/w   0*/
		uint8_t DFE_EN_SEL_G3_LANE                       : 1;	/*     11     r/w   0*/
		uint8_t DFE_EN_SEL_G4_LANE                       : 1;	/*     12     r/w   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t DFE_EN_G0_LANE                           : 1;	/*     16     r/w   0*/
		uint8_t DFE_EN_G1_LANE                           : 1;	/*     17     r/w   0*/
		uint8_t DFE_EN_G2_LANE                           : 1;	/*     18     r/w   0*/
		uint8_t DFE_EN_G3_LANE                           : 1;	/*     19     r/w   0*/
		uint8_t DFE_EN_G4_LANE                           : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t RX_TRAIN_TIMEOUT_LANE                    : 1;	/*     24       r   0*/
		uint8_t TX_TRAIN_TIMEOUT_LANE                    : 1;	/*     25       r   0*/
		uint8_t TRX_TRAIN_DONE_INT_LANE                  : 1;	/*     26       r   0*/
		uint8_t TX_TRAIN_COMPLETE_INT_LANE               : 1;	/*     27       r   0*/
		uint8_t RX_TRAIN_COMPLETE_INT_LANE               : 1;	/*     28       r   0*/
		uint8_t RX_TRAIN_FAIL_INT_LANE                   : 1;	/*     29       r 1'b0*/
		uint8_t TX_TRAIN_FAIL_INT_LANE                   : 1;	/*     30       r 1'b0*/
		uint8_t TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE    : 1;	/*     31       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_TEST_1_t;
__xdata __at( 0x6080 ) volatile DFE_TEST_1_t DFE_TEST_1;
#define lnx_SQ_THRESH_RATIO_G4_LANE_7_0  DFE_TEST_1.BF.SQ_THRESH_RATIO_G4_LANE_7_0
#define lnx_DFE_EN_SEL_G0_LANE  DFE_TEST_1.BF.DFE_EN_SEL_G0_LANE
#define lnx_DFE_EN_SEL_G1_LANE  DFE_TEST_1.BF.DFE_EN_SEL_G1_LANE
#define lnx_DFE_EN_SEL_G2_LANE  DFE_TEST_1.BF.DFE_EN_SEL_G2_LANE
#define lnx_DFE_EN_SEL_G3_LANE  DFE_TEST_1.BF.DFE_EN_SEL_G3_LANE
#define lnx_DFE_EN_SEL_G4_LANE  DFE_TEST_1.BF.DFE_EN_SEL_G4_LANE
#define lnx_DFE_EN_G0_LANE  DFE_TEST_1.BF.DFE_EN_G0_LANE
#define lnx_DFE_EN_G1_LANE  DFE_TEST_1.BF.DFE_EN_G1_LANE
#define lnx_DFE_EN_G2_LANE  DFE_TEST_1.BF.DFE_EN_G2_LANE
#define lnx_DFE_EN_G3_LANE  DFE_TEST_1.BF.DFE_EN_G3_LANE
#define lnx_DFE_EN_G4_LANE  DFE_TEST_1.BF.DFE_EN_G4_LANE
#define lnx_RX_TRAIN_TIMEOUT_LANE  DFE_TEST_1.BF.RX_TRAIN_TIMEOUT_LANE
#define lnx_TX_TRAIN_TIMEOUT_LANE  DFE_TEST_1.BF.TX_TRAIN_TIMEOUT_LANE
#define lnx_TRX_TRAIN_DONE_INT_LANE  DFE_TEST_1.BF.TRX_TRAIN_DONE_INT_LANE
#define lnx_TX_TRAIN_COMPLETE_INT_LANE  DFE_TEST_1.BF.TX_TRAIN_COMPLETE_INT_LANE
#define lnx_RX_TRAIN_COMPLETE_INT_LANE  DFE_TEST_1.BF.RX_TRAIN_COMPLETE_INT_LANE
#define lnx_RX_TRAIN_FAIL_INT_LANE  DFE_TEST_1.BF.RX_TRAIN_FAIL_INT_LANE
#define lnx_TX_TRAIN_FAIL_INT_LANE  DFE_TEST_1.BF.TX_TRAIN_FAIL_INT_LANE
#define lnx_TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE  DFE_TEST_1.BF.TX_TRAIN_FRAME_LOCK_DET_FAIL_INT_LANE

// 0x0084	DFE_TEST_4		
typedef union {
	struct {
		uint8_t TX_G1_MIDPOINT_THRES_C_LANE_7_0          : 8;	/*  [7:0]     r/w 8'hfc*/
		uint8_t TX_G1_MIDPOINT_THRES_K_LANE_7_0          : 8;	/* [15:8]     r/w 8'hf*/
		uint8_t GAIN_TRAIN_INDEX_RD_LANE_7_0             : 8;	/*[23:16]       r   0*/
		uint8_t DFE_F_TAP_EN_G0_LANE                     : 1;	/*     24     r/w   0*/
		uint8_t DFE_F_TAP_EN_G1_LANE                     : 1;	/*     25     r/w   0*/
		uint8_t DFE_F_TAP_EN_G2_LANE                     : 1;	/*     26     r/w   0*/
		uint8_t DFE_F_TAP_EN_G3_LANE                     : 1;	/*     27     r/w   0*/
		uint8_t DFE_F_TAP_EN_G4_LANE                     : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_TEST_4_t;
__xdata __at( 0x6084 ) volatile DFE_TEST_4_t DFE_TEST_4;
#define lnx_TX_G1_MIDPOINT_THRES_C_LANE_7_0  DFE_TEST_4.BF.TX_G1_MIDPOINT_THRES_C_LANE_7_0
#define lnx_TX_G1_MIDPOINT_THRES_K_LANE_7_0  DFE_TEST_4.BF.TX_G1_MIDPOINT_THRES_K_LANE_7_0
#define lnx_GAIN_TRAIN_INDEX_RD_LANE_7_0  DFE_TEST_4.BF.GAIN_TRAIN_INDEX_RD_LANE_7_0
#define lnx_DFE_F_TAP_EN_G0_LANE  DFE_TEST_4.BF.DFE_F_TAP_EN_G0_LANE
#define lnx_DFE_F_TAP_EN_G1_LANE  DFE_TEST_4.BF.DFE_F_TAP_EN_G1_LANE
#define lnx_DFE_F_TAP_EN_G2_LANE  DFE_TEST_4.BF.DFE_F_TAP_EN_G2_LANE
#define lnx_DFE_F_TAP_EN_G3_LANE  DFE_TEST_4.BF.DFE_F_TAP_EN_G3_LANE
#define lnx_DFE_F_TAP_EN_G4_LANE  DFE_TEST_4.BF.DFE_F_TAP_EN_G4_LANE

// 0x0088	DFE_TEST_5		
typedef union {
	struct {
		uint8_t SUMFTAP_EN_0_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t SUMFTAP_EN_1_LANE                        : 1;	/*      1     r/w   1*/
		uint8_t SUMFTAP_EN_2_LANE                        : 1;	/*      2     r/w   1*/
		uint8_t SUMFTAP_EN_3_LANE                        : 1;	/*      3     r/w   1*/
		uint8_t SUMFTAP_EN_4_LANE                        : 1;	/*      4     r/w   1*/
		uint8_t SUMFTAP_EN_5_LANE                        : 1;	/*      5     r/w   1*/
		uint8_t SUMFTAP_EN_6_LANE                        : 1;	/*      6     r/w   0*/
		uint8_t SUMFTAP_EN_7_LANE                        : 1;	/*      7     r/w   0*/
		uint8_t SUMFTAP_SIGN_0_LANE                      : 1;	/*      8     r/w   0*/
		uint8_t SUMFTAP_SIGN_1_LANE                      : 1;	/*      9     r/w   1*/
		uint8_t SUMFTAP_SIGN_2_LANE                      : 1;	/*     10     r/w   1*/
		uint8_t SUMFTAP_SIGN_3_LANE                      : 1;	/*     11     r/w   1*/
		uint8_t SUMFTAP_SIGN_4_LANE                      : 1;	/*     12     r/w   1*/
		uint8_t SUMFTAP_SIGN_5_LANE                      : 1;	/*     13     r/w   1*/
		uint8_t SUMFTAP_SIGN_6_LANE                      : 1;	/*     14     r/w   0*/
		uint8_t SUMFTAP_SIGN_7_LANE                      : 1;	/*     15     r/w   0*/
		uint8_t DFE_RES_F0A_HIGH_THRES_INIT_G2_LANE_7_0  : 8;	/*[23:16]     r/w 8'h32*/
		uint8_t F0A_SAT_THR_G3_LANE_7_0                  : 8;	/*[31:24]     r/w 8'h28*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_TEST_5_t;
__xdata __at( 0x6088 ) volatile DFE_TEST_5_t DFE_TEST_5;
#define lnx_SUMFTAP_EN_0_LANE  DFE_TEST_5.BF.SUMFTAP_EN_0_LANE
#define lnx_SUMFTAP_EN_1_LANE  DFE_TEST_5.BF.SUMFTAP_EN_1_LANE
#define lnx_SUMFTAP_EN_2_LANE  DFE_TEST_5.BF.SUMFTAP_EN_2_LANE
#define lnx_SUMFTAP_EN_3_LANE  DFE_TEST_5.BF.SUMFTAP_EN_3_LANE
#define lnx_SUMFTAP_EN_4_LANE  DFE_TEST_5.BF.SUMFTAP_EN_4_LANE
#define lnx_SUMFTAP_EN_5_LANE  DFE_TEST_5.BF.SUMFTAP_EN_5_LANE
#define lnx_SUMFTAP_EN_6_LANE  DFE_TEST_5.BF.SUMFTAP_EN_6_LANE
#define lnx_SUMFTAP_EN_7_LANE  DFE_TEST_5.BF.SUMFTAP_EN_7_LANE
#define lnx_SUMFTAP_SIGN_0_LANE  DFE_TEST_5.BF.SUMFTAP_SIGN_0_LANE
#define lnx_SUMFTAP_SIGN_1_LANE  DFE_TEST_5.BF.SUMFTAP_SIGN_1_LANE
#define lnx_SUMFTAP_SIGN_2_LANE  DFE_TEST_5.BF.SUMFTAP_SIGN_2_LANE
#define lnx_SUMFTAP_SIGN_3_LANE  DFE_TEST_5.BF.SUMFTAP_SIGN_3_LANE
#define lnx_SUMFTAP_SIGN_4_LANE  DFE_TEST_5.BF.SUMFTAP_SIGN_4_LANE
#define lnx_SUMFTAP_SIGN_5_LANE  DFE_TEST_5.BF.SUMFTAP_SIGN_5_LANE
#define lnx_SUMFTAP_SIGN_6_LANE  DFE_TEST_5.BF.SUMFTAP_SIGN_6_LANE
#define lnx_SUMFTAP_SIGN_7_LANE  DFE_TEST_5.BF.SUMFTAP_SIGN_7_LANE
#define lnx_DFE_RES_F0A_HIGH_THRES_INIT_G2_LANE_7_0  DFE_TEST_5.BF.DFE_RES_F0A_HIGH_THRES_INIT_G2_LANE_7_0
#define lnx_F0A_SAT_THR_G3_LANE_7_0  DFE_TEST_5.BF.F0A_SAT_THR_G3_LANE_7_0

// 0x008c	DFE_CONTROL_7		
typedef union {
	struct {
		uint8_t DIS_BYPASS_RXTRAIN_IN_FOM_LANE           : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t TX_G1_STEP_NUM_LANE_4_0                  : 5;	/*  [7:3]     r/w 5'h8*/
		uint8_t PCIE_G1_STEP_NUM_LANE_7_0                : 8;	/* [15:8]     r/w 8'h4*/
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
} DFE_CONTROL_7_t;
__xdata __at( 0x608c ) volatile DFE_CONTROL_7_t DFE_CONTROL_7;
#define lnx_DIS_BYPASS_RXTRAIN_IN_FOM_LANE  DFE_CONTROL_7.BF.DIS_BYPASS_RXTRAIN_IN_FOM_LANE
#define lnx_TX_G1_STEP_NUM_LANE_4_0  DFE_CONTROL_7.BF.TX_G1_STEP_NUM_LANE_4_0
#define lnx_PCIE_G1_STEP_NUM_LANE_7_0  DFE_CONTROL_7.BF.PCIE_G1_STEP_NUM_LANE_7_0
#define lnx_OFST_ALIGN_ADV_CLK_ALIGN_EN_LANE  DFE_CONTROL_7.BF.OFST_ALIGN_ADV_CLK_ALIGN_EN_LANE
#define lnx_FORCE_INI_PHASE_OFFSET_EN_LANE  DFE_CONTROL_7.BF.FORCE_INI_PHASE_OFFSET_EN_LANE
#define lnx_OFST_DIS_LANE  DFE_CONTROL_7.BF.OFST_DIS_LANE
#define lnx_DFE_ISI_RES_ADAPT_EN_LANE  DFE_CONTROL_7.BF.DFE_ISI_RES_ADAPT_EN_LANE
#define lnx_ADJUST_FFE_R2_LANE  DFE_CONTROL_7.BF.ADJUST_FFE_R2_LANE
#define lnx_RX_CAP_FINAL_ADJUST_EN_LANE  DFE_CONTROL_7.BF.RX_CAP_FINAL_ADJUST_EN_LANE
#define lnx_FORCE_DFE_RES_F0_LANE_1_0  DFE_CONTROL_7.BF.FORCE_DFE_RES_F0_LANE_1_0
#define lnx_RXFFE_C_GAIN_TRAIN_LANE_3_0  DFE_CONTROL_7.BF.RXFFE_C_GAIN_TRAIN_LANE_3_0
#define lnx_RX_RXFFE_C_INI_LANE_3_0  DFE_CONTROL_7.BF.RX_RXFFE_C_INI_LANE_3_0

// 0x0090	DFE_CONTROL_8		
typedef union {
	struct {
		uint8_t FORCE_PHASE_TRAIN_OFFSET_2C_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t INI_PHASE_ADAPT_OFFSET_2C_LANE_7_0       : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t PCIE_GN1_FN1_THRE_LANE_7_0               : 8;	/*[23:16]     r/w 8'h5*/
		uint8_t PCIE_GN1_STEP_NUM_LANE_7_0               : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_8_t;
__xdata __at( 0x6090 ) volatile DFE_CONTROL_8_t DFE_CONTROL_8;
#define lnx_FORCE_PHASE_TRAIN_OFFSET_2C_LANE_7_0  DFE_CONTROL_8.BF.FORCE_PHASE_TRAIN_OFFSET_2C_LANE_7_0
#define lnx_INI_PHASE_ADAPT_OFFSET_2C_LANE_7_0  DFE_CONTROL_8.BF.INI_PHASE_ADAPT_OFFSET_2C_LANE_7_0
#define lnx_PCIE_GN1_FN1_THRE_LANE_7_0  DFE_CONTROL_8.BF.PCIE_GN1_FN1_THRE_LANE_7_0
#define lnx_PCIE_GN1_STEP_NUM_LANE_7_0  DFE_CONTROL_8.BF.PCIE_GN1_STEP_NUM_LANE_7_0

// 0x0094	DFE_CONTROL_9		
typedef union {
	struct {
		uint8_t EYE_MID_2C_LANE_7_0                      : 8;	/*  [7:0]       r 8'h0*/
		uint8_t EYE_MID_RTPA_2C_LANE_7_0                 : 8;	/* [15:8]       r 8'h0*/
		uint8_t EYE_RIGHT_RTPA_2C_LANE_7_0               : 8;	/*[23:16]       r 8'h0*/
		uint8_t EYE_LEFT_RTPA_2C_LANE_7_0                : 8;	/*[31:24]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_9_t;
__xdata __at( 0x6094 ) volatile DFE_CONTROL_9_t DFE_CONTROL_9;
#define lnx_EYE_MID_2C_LANE_7_0  DFE_CONTROL_9.BF.EYE_MID_2C_LANE_7_0
#define lnx_EYE_MID_RTPA_2C_LANE_7_0  DFE_CONTROL_9.BF.EYE_MID_RTPA_2C_LANE_7_0
#define lnx_EYE_RIGHT_RTPA_2C_LANE_7_0  DFE_CONTROL_9.BF.EYE_RIGHT_RTPA_2C_LANE_7_0
#define lnx_EYE_LEFT_RTPA_2C_LANE_7_0  DFE_CONTROL_9.BF.EYE_LEFT_RTPA_2C_LANE_7_0

// 0x0098	DFE_CONTROL_10		
typedef union {
	struct {
		uint8_t CLI_START_LANE                           : 1;	/*      0     r/w   0*/
		uint8_t FORCE_CDS_CTRL_EN_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t FORCE_CDS_STATE_LANE                     : 1;	/*      2     r/w   0*/
		uint8_t F1_ADJ_EN_LANE                           : 1;	/*      3     r/w   0*/
		uint8_t BYPASS_DFE_HANG_CHECK_LANE               : 1;	/*      4     r/w   0*/
		uint8_t SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE         : 1;	/*      5     r/w   0*/
		uint8_t BYPASS_RXTRAIN_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CLI_CMD_LANE_7_0                         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t POL_TB_LP_NUM_F0B_ACCU_LANE_7_0          : 8;	/*[23:16]     r/w 8'h4*/
		uint8_t DFE_ADAPT_LP_NUM_F0B_ACCU_LANE_7_0       : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_CONTROL_10_t;
__xdata __at( 0x6098 ) volatile DFE_CONTROL_10_t DFE_CONTROL_10;
#define lnx_CLI_START_LANE  DFE_CONTROL_10.BF.CLI_START_LANE
#define lnx_FORCE_CDS_CTRL_EN_LANE  DFE_CONTROL_10.BF.FORCE_CDS_CTRL_EN_LANE
#define lnx_FORCE_CDS_STATE_LANE  DFE_CONTROL_10.BF.FORCE_CDS_STATE_LANE
#define lnx_F1_ADJ_EN_LANE  DFE_CONTROL_10.BF.F1_ADJ_EN_LANE
#define lnx_BYPASS_DFE_HANG_CHECK_LANE  DFE_CONTROL_10.BF.BYPASS_DFE_HANG_CHECK_LANE
#define lnx_SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE  DFE_CONTROL_10.BF.SKIP_DFE_ADAPT_CDR_MIDPOINT_LANE
#define lnx_BYPASS_RXTRAIN_LANE  DFE_CONTROL_10.BF.BYPASS_RXTRAIN_LANE
#define lnx_CLI_CMD_LANE_7_0  DFE_CONTROL_10.BF.CLI_CMD_LANE_7_0
#define lnx_POL_TB_LP_NUM_F0B_ACCU_LANE_7_0  DFE_CONTROL_10.BF.POL_TB_LP_NUM_F0B_ACCU_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_F0B_ACCU_LANE_7_0  DFE_CONTROL_10.BF.DFE_ADAPT_LP_NUM_F0B_ACCU_LANE_7_0

// 0x009c	DFE_CONTROL_11		
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
} DFE_CONTROL_11_t;
__xdata __at( 0x609c ) volatile DFE_CONTROL_11_t DFE_CONTROL_11;
#define lnx_FORCE_CDS_CTRL_LANE_15_0_b0  DFE_CONTROL_11.BF.FORCE_CDS_CTRL_LANE_15_0_b0
#define lnx_FORCE_CDS_CTRL_LANE_15_0_b1  DFE_CONTROL_11.BF.FORCE_CDS_CTRL_LANE_15_0_b1
#define lnx_POL_TB_LP_NUM_F0D_COARSE_LANE_7_0  DFE_CONTROL_11.BF.POL_TB_LP_NUM_F0D_COARSE_LANE_7_0
#define lnx_DFE_ADAPT_LP_NUM_F0D_COARSE_LANE_7_0  DFE_CONTROL_11.BF.DFE_ADAPT_LP_NUM_F0D_COARSE_LANE_7_0
#define lnx_FORCE_CDS_CTRL_LANE_15_0  DFE_CONTROL_11.WT.W0

// 0x00a0	CDS_CTRL_REG0		
typedef union {
	struct {
		uint8_t RESET_PH_EN_DTL_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t DFE_SAVE_EN_LANE                         : 1;	/*      1     r/w   1*/
		uint8_t LOCK_DFE_ON_LANE                         : 1;	/*      2     r/w   0*/
		uint8_t VH_EO_MODE_LANE                          : 1;	/*      3     r/w   0*/
		uint8_t EO_BASED_LANE                            : 1;	/*      4     r/w   1*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t CDR_MAXF0P_EN_LANE                       : 1;	/*      6     r/w   1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t RD_DFE_F0D_LANE_7_0                      : 8;	/* [15:8]       r 8'h0*/
		uint8_t CDS_STATE_LANE_7_0                       : 8;	/*[23:16]     r/w   0*/
		uint8_t CDS_ERR_CODE_LANE_7_0                    : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_CTRL_REG0_t;
__xdata __at( 0x60a0 ) volatile CDS_CTRL_REG0_t CDS_CTRL_REG0;
#define lnx_RESET_PH_EN_DTL_LANE  CDS_CTRL_REG0.BF.RESET_PH_EN_DTL_LANE
#define lnx_DFE_SAVE_EN_LANE  CDS_CTRL_REG0.BF.DFE_SAVE_EN_LANE
#define lnx_LOCK_DFE_ON_LANE  CDS_CTRL_REG0.BF.LOCK_DFE_ON_LANE
#define lnx_VH_EO_MODE_LANE  CDS_CTRL_REG0.BF.VH_EO_MODE_LANE
#define lnx_EO_BASED_LANE  CDS_CTRL_REG0.BF.EO_BASED_LANE
#define lnx_CDR_MAXF0P_EN_LANE  CDS_CTRL_REG0.BF.CDR_MAXF0P_EN_LANE
#define lnx_RD_DFE_F0D_LANE_7_0  CDS_CTRL_REG0.BF.RD_DFE_F0D_LANE_7_0
#define lnx_CDS_STATE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_STATE_LANE_7_0
#define lnx_CDS_ERR_CODE_LANE_7_0  CDS_CTRL_REG0.BF.CDS_ERR_CODE_LANE_7_0

// 0x00a4	CDS_CTRL_REG1		
typedef union {
	struct {
		uint8_t CDS_ADAPT_SPLR_DIS_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t CDS_UPDATE_ODD_DIS_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t CDS_UPDATE_F_DIS_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t TX_GN1_MAXF0T_EN_LANE                    : 1;	/*      6     r/w   1*/
		uint8_t TX_G1_MAXF0T_EN_LANE                     : 1;	/*      7     r/w   1*/
		uint8_t EOM_BER_LANE_3_0                         : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t CDR_STEP_NUM_LANE_3_0                    : 4;	/*[15:12]     r/w 4'h8*/
		uint8_t TX_G0_STEP_NUM_LANE_3_0                  : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t TX_GN1_STEP_SIZE_LANE_1_0                : 2;	/*[21:20]     r/w 2'h1*/
		uint8_t TX_G0_STEP_SIZE_LANE_1_0                 : 2;	/*[23:22]     r/w 2'h1*/
		uint8_t TX_G1_STEP_SIZE_LANE_1_0                 : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t TX_GN1_STEP_NUM_LANE_4_0                 : 5;	/*[30:26]     r/w 5'h10*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_CTRL_REG1_t;
__xdata __at( 0x60a4 ) volatile CDS_CTRL_REG1_t CDS_CTRL_REG1;
#define lnx_CDS_ADAPT_SPLR_DIS_LANE_3_0  CDS_CTRL_REG1.BF.CDS_ADAPT_SPLR_DIS_LANE_3_0
#define lnx_CDS_UPDATE_ODD_DIS_LANE  CDS_CTRL_REG1.BF.CDS_UPDATE_ODD_DIS_LANE
#define lnx_CDS_UPDATE_F_DIS_LANE  CDS_CTRL_REG1.BF.CDS_UPDATE_F_DIS_LANE
#define lnx_TX_GN1_MAXF0T_EN_LANE  CDS_CTRL_REG1.BF.TX_GN1_MAXF0T_EN_LANE
#define lnx_TX_G1_MAXF0T_EN_LANE  CDS_CTRL_REG1.BF.TX_G1_MAXF0T_EN_LANE
#define lnx_EOM_BER_LANE_3_0  CDS_CTRL_REG1.BF.EOM_BER_LANE_3_0
#define lnx_CDR_STEP_NUM_LANE_3_0  CDS_CTRL_REG1.BF.CDR_STEP_NUM_LANE_3_0
#define lnx_TX_G0_STEP_NUM_LANE_3_0  CDS_CTRL_REG1.BF.TX_G0_STEP_NUM_LANE_3_0
#define lnx_TX_GN1_STEP_SIZE_LANE_1_0  CDS_CTRL_REG1.BF.TX_GN1_STEP_SIZE_LANE_1_0
#define lnx_TX_G0_STEP_SIZE_LANE_1_0  CDS_CTRL_REG1.BF.TX_G0_STEP_SIZE_LANE_1_0
#define lnx_TX_G1_STEP_SIZE_LANE_1_0  CDS_CTRL_REG1.BF.TX_G1_STEP_SIZE_LANE_1_0
#define lnx_TX_GN1_STEP_NUM_LANE_4_0  CDS_CTRL_REG1.BF.TX_GN1_STEP_NUM_LANE_4_0

// 0x00a8	ESM_POP_P_CNT_LOW_LANE		
typedef union {
	struct {
		uint8_t EOM_POP_P_CNT_LANE_31_0_b0               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_POP_P_CNT_LANE_31_0_b1               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_POP_P_CNT_LANE_31_0_b2               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_POP_P_CNT_LANE_31_0_b3               : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ESM_POP_P_CNT_LOW_LANE_t;
__xdata __at( 0x60a8 ) volatile ESM_POP_P_CNT_LOW_LANE_t ESM_POP_P_CNT_LOW_LANE;
#define lnx_EOM_POP_P_CNT_LANE_31_0_b0  ESM_POP_P_CNT_LOW_LANE.BF.EOM_POP_P_CNT_LANE_31_0_b0
#define lnx_EOM_POP_P_CNT_LANE_31_0_b1  ESM_POP_P_CNT_LOW_LANE.BF.EOM_POP_P_CNT_LANE_31_0_b1
#define lnx_EOM_POP_P_CNT_LANE_31_0_b2  ESM_POP_P_CNT_LOW_LANE.BF.EOM_POP_P_CNT_LANE_31_0_b2
#define lnx_EOM_POP_P_CNT_LANE_31_0_b3  ESM_POP_P_CNT_LOW_LANE.BF.EOM_POP_P_CNT_LANE_31_0_b3

// 0x00ac	ESM_ERR_P_CNT_LOW_LANE		
typedef union {
	struct {
		uint8_t EOM_ERR_P_CNT_LANE_31_0_b0               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_ERR_P_CNT_LANE_31_0_b1               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_ERR_P_CNT_LANE_31_0_b2               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_ERR_P_CNT_LANE_31_0_b3               : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ESM_ERR_P_CNT_LOW_LANE_t;
__xdata __at( 0x60ac ) volatile ESM_ERR_P_CNT_LOW_LANE_t ESM_ERR_P_CNT_LOW_LANE;
#define lnx_EOM_ERR_P_CNT_LANE_31_0_b0  ESM_ERR_P_CNT_LOW_LANE.BF.EOM_ERR_P_CNT_LANE_31_0_b0
#define lnx_EOM_ERR_P_CNT_LANE_31_0_b1  ESM_ERR_P_CNT_LOW_LANE.BF.EOM_ERR_P_CNT_LANE_31_0_b1
#define lnx_EOM_ERR_P_CNT_LANE_31_0_b2  ESM_ERR_P_CNT_LOW_LANE.BF.EOM_ERR_P_CNT_LANE_31_0_b2
#define lnx_EOM_ERR_P_CNT_LANE_31_0_b3  ESM_ERR_P_CNT_LOW_LANE.BF.EOM_ERR_P_CNT_LANE_31_0_b3

// 0x00b0	ESM_ERR_POP_CNT_HIGH_LANE		
typedef union {
	struct {
		uint8_t EOM_ERR_P_CNT_LANE_39_32                 : 8;	/*  [7:0]     r/w   0*/
		uint8_t EOM_ERR_N_CNT_LANE_39_32                 : 8;	/* [15:8]     r/w   0*/
		uint8_t EOM_POP_P_CNT_LANE_39_32                 : 8;	/*[23:16]     r/w   0*/
		uint8_t EOM_POP_N_CNT_LANE_39_32                 : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ESM_ERR_POP_CNT_HIGH_LANE_t;
__xdata __at( 0x60b0 ) volatile ESM_ERR_POP_CNT_HIGH_LANE_t ESM_ERR_POP_CNT_HIGH_LANE;
#define lnx_EOM_ERR_P_CNT_LANE_39_32  ESM_ERR_POP_CNT_HIGH_LANE.BF.EOM_ERR_P_CNT_LANE_39_32
#define lnx_EOM_ERR_N_CNT_LANE_39_32  ESM_ERR_POP_CNT_HIGH_LANE.BF.EOM_ERR_N_CNT_LANE_39_32
#define lnx_EOM_POP_P_CNT_LANE_39_32  ESM_ERR_POP_CNT_HIGH_LANE.BF.EOM_POP_P_CNT_LANE_39_32
#define lnx_EOM_POP_N_CNT_LANE_39_32  ESM_ERR_POP_CNT_HIGH_LANE.BF.EOM_POP_N_CNT_LANE_39_32

// 0x00b4	TRAIN_CONTROL_3		
typedef union {
	struct {
		uint8_t DFE_RES_F234_G0_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t DFE_RES_F1_G0_LANE_1_0                   : 2;	/*  [2:1]     r/w 2'h3*/
		uint8_t DFE_RES_F0_G0_LANE_1_0                   : 2;	/*  [4:3]     r/w 2'h3*/
		uint8_t DFE_RES_FLOATING_G0_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t DFE_RES_F8TO15_G0_LANE                   : 1;	/*      6     r/w   0*/
		uint8_t DFE_RES_F567_G0_LANE                     : 1;	/*      7     r/w   1*/
		uint8_t RXFFE_CAP1_SEL_G0_LANE_3_0               : 4;	/* [11:8]     r/w 4'hc*/
		uint8_t RXFFE_RES1_SEL_G0_LANE_3_0               : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t RXFFE_CAP2_SEL_O_G0_LANE_3_0             : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_O_G0_LANE_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RXFFE_CAP2_SEL_E_G0_LANE_3_0             : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_E_G0_LANE_3_0             : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_3_t;
__xdata __at( 0x60b4 ) volatile TRAIN_CONTROL_3_t TRAIN_CONTROL_3;
#define lnx_DFE_RES_F234_G0_LANE  TRAIN_CONTROL_3.BF.DFE_RES_F234_G0_LANE
#define lnx_DFE_RES_F1_G0_LANE_1_0  TRAIN_CONTROL_3.BF.DFE_RES_F1_G0_LANE_1_0
#define lnx_DFE_RES_F0_G0_LANE_1_0  TRAIN_CONTROL_3.BF.DFE_RES_F0_G0_LANE_1_0
#define lnx_DFE_RES_FLOATING_G0_LANE  TRAIN_CONTROL_3.BF.DFE_RES_FLOATING_G0_LANE
#define lnx_DFE_RES_F8TO15_G0_LANE  TRAIN_CONTROL_3.BF.DFE_RES_F8TO15_G0_LANE
#define lnx_DFE_RES_F567_G0_LANE  TRAIN_CONTROL_3.BF.DFE_RES_F567_G0_LANE
#define lnx_RXFFE_CAP1_SEL_G0_LANE_3_0  TRAIN_CONTROL_3.BF.RXFFE_CAP1_SEL_G0_LANE_3_0
#define lnx_RXFFE_RES1_SEL_G0_LANE_3_0  TRAIN_CONTROL_3.BF.RXFFE_RES1_SEL_G0_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_O_G0_LANE_3_0  TRAIN_CONTROL_3.BF.RXFFE_CAP2_SEL_O_G0_LANE_3_0
#define lnx_RXFFE_RES2_SEL_O_G0_LANE_3_0  TRAIN_CONTROL_3.BF.RXFFE_RES2_SEL_O_G0_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_E_G0_LANE_3_0  TRAIN_CONTROL_3.BF.RXFFE_CAP2_SEL_E_G0_LANE_3_0
#define lnx_RXFFE_RES2_SEL_E_G0_LANE_3_0  TRAIN_CONTROL_3.BF.RXFFE_RES2_SEL_E_G0_LANE_3_0

// 0x00b8	TRAIN_CONTROL_4		
typedef union {
	struct {
		uint8_t DFE_RES_F234_G1_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t DFE_RES_F1_G1_LANE_1_0                   : 2;	/*  [2:1]     r/w 2'h3*/
		uint8_t DFE_RES_F0_G1_LANE_1_0                   : 2;	/*  [4:3]     r/w 2'h3*/
		uint8_t DFE_RES_FLOATING_G1_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t DFE_RES_F8TO15_G1_LANE                   : 1;	/*      6     r/w   0*/
		uint8_t DFE_RES_F567_G1_LANE                     : 1;	/*      7     r/w   1*/
		uint8_t RXFFE_CAP1_SEL_G1_LANE_3_0               : 4;	/* [11:8]     r/w 4'hc*/
		uint8_t RXFFE_RES1_SEL_G1_LANE_3_0               : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t RXFFE_CAP2_SEL_O_G1_LANE_3_0             : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_O_G1_LANE_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RXFFE_CAP2_SEL_E_G1_LANE_3_0             : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_E_G1_LANE_3_0             : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_4_t;
__xdata __at( 0x60b8 ) volatile TRAIN_CONTROL_4_t TRAIN_CONTROL_4;
#define lnx_DFE_RES_F234_G1_LANE  TRAIN_CONTROL_4.BF.DFE_RES_F234_G1_LANE
#define lnx_DFE_RES_F1_G1_LANE_1_0  TRAIN_CONTROL_4.BF.DFE_RES_F1_G1_LANE_1_0
#define lnx_DFE_RES_F0_G1_LANE_1_0  TRAIN_CONTROL_4.BF.DFE_RES_F0_G1_LANE_1_0
#define lnx_DFE_RES_FLOATING_G1_LANE  TRAIN_CONTROL_4.BF.DFE_RES_FLOATING_G1_LANE
#define lnx_DFE_RES_F8TO15_G1_LANE  TRAIN_CONTROL_4.BF.DFE_RES_F8TO15_G1_LANE
#define lnx_DFE_RES_F567_G1_LANE  TRAIN_CONTROL_4.BF.DFE_RES_F567_G1_LANE
#define lnx_RXFFE_CAP1_SEL_G1_LANE_3_0  TRAIN_CONTROL_4.BF.RXFFE_CAP1_SEL_G1_LANE_3_0
#define lnx_RXFFE_RES1_SEL_G1_LANE_3_0  TRAIN_CONTROL_4.BF.RXFFE_RES1_SEL_G1_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_O_G1_LANE_3_0  TRAIN_CONTROL_4.BF.RXFFE_CAP2_SEL_O_G1_LANE_3_0
#define lnx_RXFFE_RES2_SEL_O_G1_LANE_3_0  TRAIN_CONTROL_4.BF.RXFFE_RES2_SEL_O_G1_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_E_G1_LANE_3_0  TRAIN_CONTROL_4.BF.RXFFE_CAP2_SEL_E_G1_LANE_3_0
#define lnx_RXFFE_RES2_SEL_E_G1_LANE_3_0  TRAIN_CONTROL_4.BF.RXFFE_RES2_SEL_E_G1_LANE_3_0

// 0x00bc	TRAIN_CONTROL_5		
typedef union {
	struct {
		uint8_t DFE_RES_F234_G2_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t DFE_RES_F1_G2_LANE_1_0                   : 2;	/*  [2:1]     r/w 2'h3*/
		uint8_t DFE_RES_F0_G2_LANE_1_0                   : 2;	/*  [4:3]     r/w 2'h3*/
		uint8_t DFE_RES_FLOATING_G2_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t DFE_RES_F8TO15_G2_LANE                   : 1;	/*      6     r/w   0*/
		uint8_t DFE_RES_F567_G2_LANE                     : 1;	/*      7     r/w   1*/
		uint8_t RXFFE_CAP1_SEL_G2_LANE_3_0               : 4;	/* [11:8]     r/w 4'hc*/
		uint8_t RXFFE_RES1_SEL_G2_LANE_3_0               : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t RXFFE_CAP2_SEL_O_G2_LANE_3_0             : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_O_G2_LANE_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RXFFE_CAP2_SEL_E_G2_LANE_3_0             : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_E_G2_LANE_3_0             : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_5_t;
__xdata __at( 0x60bc ) volatile TRAIN_CONTROL_5_t TRAIN_CONTROL_5;
#define lnx_DFE_RES_F234_G2_LANE  TRAIN_CONTROL_5.BF.DFE_RES_F234_G2_LANE
#define lnx_DFE_RES_F1_G2_LANE_1_0  TRAIN_CONTROL_5.BF.DFE_RES_F1_G2_LANE_1_0
#define lnx_DFE_RES_F0_G2_LANE_1_0  TRAIN_CONTROL_5.BF.DFE_RES_F0_G2_LANE_1_0
#define lnx_DFE_RES_FLOATING_G2_LANE  TRAIN_CONTROL_5.BF.DFE_RES_FLOATING_G2_LANE
#define lnx_DFE_RES_F8TO15_G2_LANE  TRAIN_CONTROL_5.BF.DFE_RES_F8TO15_G2_LANE
#define lnx_DFE_RES_F567_G2_LANE  TRAIN_CONTROL_5.BF.DFE_RES_F567_G2_LANE
#define lnx_RXFFE_CAP1_SEL_G2_LANE_3_0  TRAIN_CONTROL_5.BF.RXFFE_CAP1_SEL_G2_LANE_3_0
#define lnx_RXFFE_RES1_SEL_G2_LANE_3_0  TRAIN_CONTROL_5.BF.RXFFE_RES1_SEL_G2_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_O_G2_LANE_3_0  TRAIN_CONTROL_5.BF.RXFFE_CAP2_SEL_O_G2_LANE_3_0
#define lnx_RXFFE_RES2_SEL_O_G2_LANE_3_0  TRAIN_CONTROL_5.BF.RXFFE_RES2_SEL_O_G2_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_E_G2_LANE_3_0  TRAIN_CONTROL_5.BF.RXFFE_CAP2_SEL_E_G2_LANE_3_0
#define lnx_RXFFE_RES2_SEL_E_G2_LANE_3_0  TRAIN_CONTROL_5.BF.RXFFE_RES2_SEL_E_G2_LANE_3_0

// 0x00c0	TRAIN_CONTROL_6		
typedef union {
	struct {
		uint8_t DFE_RES_F234_G3_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t DFE_RES_F1_G3_LANE_1_0                   : 2;	/*  [2:1]     r/w 2'h3*/
		uint8_t DFE_RES_F0_G3_LANE_1_0                   : 2;	/*  [4:3]     r/w 2'h3*/
		uint8_t DFE_RES_FLOATING_G3_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t DFE_RES_F8TO15_G3_LANE                   : 1;	/*      6     r/w   0*/
		uint8_t DFE_RES_F567_G3_LANE                     : 1;	/*      7     r/w   1*/
		uint8_t RXFFE_CAP1_SEL_G3_LANE_3_0               : 4;	/* [11:8]     r/w 4'hc*/
		uint8_t RXFFE_RES1_SEL_G3_LANE_3_0               : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t RXFFE_CAP2_SEL_O_G3_LANE_3_0             : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_O_G3_LANE_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RXFFE_CAP2_SEL_E_G3_LANE_3_0             : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_E_G3_LANE_3_0             : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_6_t;
__xdata __at( 0x60c0 ) volatile TRAIN_CONTROL_6_t TRAIN_CONTROL_6;
#define lnx_DFE_RES_F234_G3_LANE  TRAIN_CONTROL_6.BF.DFE_RES_F234_G3_LANE
#define lnx_DFE_RES_F1_G3_LANE_1_0  TRAIN_CONTROL_6.BF.DFE_RES_F1_G3_LANE_1_0
#define lnx_DFE_RES_F0_G3_LANE_1_0  TRAIN_CONTROL_6.BF.DFE_RES_F0_G3_LANE_1_0
#define lnx_DFE_RES_FLOATING_G3_LANE  TRAIN_CONTROL_6.BF.DFE_RES_FLOATING_G3_LANE
#define lnx_DFE_RES_F8TO15_G3_LANE  TRAIN_CONTROL_6.BF.DFE_RES_F8TO15_G3_LANE
#define lnx_DFE_RES_F567_G3_LANE  TRAIN_CONTROL_6.BF.DFE_RES_F567_G3_LANE
#define lnx_RXFFE_CAP1_SEL_G3_LANE_3_0  TRAIN_CONTROL_6.BF.RXFFE_CAP1_SEL_G3_LANE_3_0
#define lnx_RXFFE_RES1_SEL_G3_LANE_3_0  TRAIN_CONTROL_6.BF.RXFFE_RES1_SEL_G3_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_O_G3_LANE_3_0  TRAIN_CONTROL_6.BF.RXFFE_CAP2_SEL_O_G3_LANE_3_0
#define lnx_RXFFE_RES2_SEL_O_G3_LANE_3_0  TRAIN_CONTROL_6.BF.RXFFE_RES2_SEL_O_G3_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_E_G3_LANE_3_0  TRAIN_CONTROL_6.BF.RXFFE_CAP2_SEL_E_G3_LANE_3_0
#define lnx_RXFFE_RES2_SEL_E_G3_LANE_3_0  TRAIN_CONTROL_6.BF.RXFFE_RES2_SEL_E_G3_LANE_3_0

// 0x00c4	TRAIN_CONTROL_7		
typedef union {
	struct {
		uint8_t DFE_RES_F234_G4_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t DFE_RES_F1_G4_LANE_1_0                   : 2;	/*  [2:1]     r/w 2'h3*/
		uint8_t DFE_RES_F0_G4_LANE_1_0                   : 2;	/*  [4:3]     r/w 2'h3*/
		uint8_t DFE_RES_FLOATING_G4_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t DFE_RES_F8TO15_G4_LANE                   : 1;	/*      6     r/w   0*/
		uint8_t DFE_RES_F567_G4_LANE                     : 1;	/*      7     r/w   1*/
		uint8_t RXFFE_CAP1_SEL_G4_LANE_3_0               : 4;	/* [11:8]     r/w 4'hc*/
		uint8_t RXFFE_RES1_SEL_G4_LANE_3_0               : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t RXFFE_CAP2_SEL_O_G4_LANE_3_0             : 4;	/*[19:16]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_O_G4_LANE_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t RXFFE_CAP2_SEL_E_G4_LANE_3_0             : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RXFFE_RES2_SEL_E_G4_LANE_3_0             : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_7_t;
__xdata __at( 0x60c4 ) volatile TRAIN_CONTROL_7_t TRAIN_CONTROL_7;
#define lnx_DFE_RES_F234_G4_LANE  TRAIN_CONTROL_7.BF.DFE_RES_F234_G4_LANE
#define lnx_DFE_RES_F1_G4_LANE_1_0  TRAIN_CONTROL_7.BF.DFE_RES_F1_G4_LANE_1_0
#define lnx_DFE_RES_F0_G4_LANE_1_0  TRAIN_CONTROL_7.BF.DFE_RES_F0_G4_LANE_1_0
#define lnx_DFE_RES_FLOATING_G4_LANE  TRAIN_CONTROL_7.BF.DFE_RES_FLOATING_G4_LANE
#define lnx_DFE_RES_F8TO15_G4_LANE  TRAIN_CONTROL_7.BF.DFE_RES_F8TO15_G4_LANE
#define lnx_DFE_RES_F567_G4_LANE  TRAIN_CONTROL_7.BF.DFE_RES_F567_G4_LANE
#define lnx_RXFFE_CAP1_SEL_G4_LANE_3_0  TRAIN_CONTROL_7.BF.RXFFE_CAP1_SEL_G4_LANE_3_0
#define lnx_RXFFE_RES1_SEL_G4_LANE_3_0  TRAIN_CONTROL_7.BF.RXFFE_RES1_SEL_G4_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_O_G4_LANE_3_0  TRAIN_CONTROL_7.BF.RXFFE_CAP2_SEL_O_G4_LANE_3_0
#define lnx_RXFFE_RES2_SEL_O_G4_LANE_3_0  TRAIN_CONTROL_7.BF.RXFFE_RES2_SEL_O_G4_LANE_3_0
#define lnx_RXFFE_CAP2_SEL_E_G4_LANE_3_0  TRAIN_CONTROL_7.BF.RXFFE_CAP2_SEL_E_G4_LANE_3_0
#define lnx_RXFFE_RES2_SEL_E_G4_LANE_3_0  TRAIN_CONTROL_7.BF.RXFFE_RES2_SEL_E_G4_LANE_3_0

// 0x00c8	TRAIN_CONTROL_8		
typedef union {
	struct {
		uint8_t TX_EM_PEAK_CTRL_G0_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_EM_PEAK_CTRL_G1_LANE_3_0              : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t TX_EM_PEAK_CTRL_G2_LANE_3_0              : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t TX_EM_PEAK_CTRL_G3_LANE_3_0              : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t TX_EM_PEAK_CTRL_G4_LANE_3_0              : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t TX_EM_PEAK_EN_G0_LANE                    : 1;	/*     24     r/w   1*/
		uint8_t TX_EM_PEAK_EN_G1_LANE                    : 1;	/*     25     r/w   1*/
		uint8_t TX_EM_PEAK_EN_G2_LANE                    : 1;	/*     26     r/w   1*/
		uint8_t TX_EM_PEAK_EN_G3_LANE                    : 1;	/*     27     r/w   1*/
		uint8_t TX_EM_PEAK_EN_G4_LANE                    : 1;	/*     28     r/w   1*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_8_t;
__xdata __at( 0x60c8 ) volatile TRAIN_CONTROL_8_t TRAIN_CONTROL_8;
#define lnx_TX_EM_PEAK_CTRL_G0_LANE_3_0  TRAIN_CONTROL_8.BF.TX_EM_PEAK_CTRL_G0_LANE_3_0
#define lnx_TX_EM_PEAK_CTRL_G1_LANE_3_0  TRAIN_CONTROL_8.BF.TX_EM_PEAK_CTRL_G1_LANE_3_0
#define lnx_TX_EM_PEAK_CTRL_G2_LANE_3_0  TRAIN_CONTROL_8.BF.TX_EM_PEAK_CTRL_G2_LANE_3_0
#define lnx_TX_EM_PEAK_CTRL_G3_LANE_3_0  TRAIN_CONTROL_8.BF.TX_EM_PEAK_CTRL_G3_LANE_3_0
#define lnx_TX_EM_PEAK_CTRL_G4_LANE_3_0  TRAIN_CONTROL_8.BF.TX_EM_PEAK_CTRL_G4_LANE_3_0
#define lnx_TX_EM_PEAK_EN_G0_LANE  TRAIN_CONTROL_8.BF.TX_EM_PEAK_EN_G0_LANE
#define lnx_TX_EM_PEAK_EN_G1_LANE  TRAIN_CONTROL_8.BF.TX_EM_PEAK_EN_G1_LANE
#define lnx_TX_EM_PEAK_EN_G2_LANE  TRAIN_CONTROL_8.BF.TX_EM_PEAK_EN_G2_LANE
#define lnx_TX_EM_PEAK_EN_G3_LANE  TRAIN_CONTROL_8.BF.TX_EM_PEAK_EN_G3_LANE
#define lnx_TX_EM_PEAK_EN_G4_LANE  TRAIN_CONTROL_8.BF.TX_EM_PEAK_EN_G4_LANE

// 0x00cc	TRAIN_CONTROL_9		
typedef union {
	struct {
		uint8_t GAINTRAIN_CAP1_THR_G2_LANE_3_0           : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t GAINTRAIN_CAP1_THR_G3_LANE_3_0           : 4;	/*  [7:4]     r/w 4'h8*/
		uint8_t RX_TRAIN_PASS_G0_LANE                    : 1;	/*      8       r   0*/
		uint8_t RX_TRAIN_PASS_G1_LANE                    : 1;	/*      9       r   0*/
		uint8_t RX_TRAIN_PASS_G2_LANE                    : 1;	/*     10       r   0*/
		uint8_t RX_TRAIN_PASS_G3_LANE                    : 1;	/*     11       r   0*/
		uint8_t RX_TRAIN_PASS_G4_LANE                    : 1;	/*     12       r   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t RXFFE_FORCE_EN_G0_LANE                   : 1;	/*     16     r/w   0*/
		uint8_t RXFFE_FORCE_EN_G1_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t RXFFE_FORCE_EN_G2_LANE                   : 1;	/*     18     r/w   0*/
		uint8_t RXFFE_FORCE_EN_G3_LANE                   : 1;	/*     19     r/w   0*/
		uint8_t RXFFE_FORCE_EN_G4_LANE                   : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_TRAIN_PASS_G0_LANE                    : 1;	/*     24       r   0*/
		uint8_t TX_TRAIN_PASS_G1_LANE                    : 1;	/*     25       r   0*/
		uint8_t TX_TRAIN_PASS_G2_LANE                    : 1;	/*     26       r   0*/
		uint8_t TX_TRAIN_PASS_G3_LANE                    : 1;	/*     27       r   0*/
		uint8_t TX_TRAIN_PASS_G4_LANE                    : 1;	/*     28       r   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_9_t;
__xdata __at( 0x60cc ) volatile TRAIN_CONTROL_9_t TRAIN_CONTROL_9;
#define lnx_GAINTRAIN_CAP1_THR_G2_LANE_3_0  TRAIN_CONTROL_9.BF.GAINTRAIN_CAP1_THR_G2_LANE_3_0
#define lnx_GAINTRAIN_CAP1_THR_G3_LANE_3_0  TRAIN_CONTROL_9.BF.GAINTRAIN_CAP1_THR_G3_LANE_3_0
#define lnx_RX_TRAIN_PASS_G0_LANE  TRAIN_CONTROL_9.BF.RX_TRAIN_PASS_G0_LANE
#define lnx_RX_TRAIN_PASS_G1_LANE  TRAIN_CONTROL_9.BF.RX_TRAIN_PASS_G1_LANE
#define lnx_RX_TRAIN_PASS_G2_LANE  TRAIN_CONTROL_9.BF.RX_TRAIN_PASS_G2_LANE
#define lnx_RX_TRAIN_PASS_G3_LANE  TRAIN_CONTROL_9.BF.RX_TRAIN_PASS_G3_LANE
#define lnx_RX_TRAIN_PASS_G4_LANE  TRAIN_CONTROL_9.BF.RX_TRAIN_PASS_G4_LANE
#define lnx_RXFFE_FORCE_EN_G0_LANE  TRAIN_CONTROL_9.BF.RXFFE_FORCE_EN_G0_LANE
#define lnx_RXFFE_FORCE_EN_G1_LANE  TRAIN_CONTROL_9.BF.RXFFE_FORCE_EN_G1_LANE
#define lnx_RXFFE_FORCE_EN_G2_LANE  TRAIN_CONTROL_9.BF.RXFFE_FORCE_EN_G2_LANE
#define lnx_RXFFE_FORCE_EN_G3_LANE  TRAIN_CONTROL_9.BF.RXFFE_FORCE_EN_G3_LANE
#define lnx_RXFFE_FORCE_EN_G4_LANE  TRAIN_CONTROL_9.BF.RXFFE_FORCE_EN_G4_LANE
#define lnx_TX_TRAIN_PASS_G0_LANE  TRAIN_CONTROL_9.BF.TX_TRAIN_PASS_G0_LANE
#define lnx_TX_TRAIN_PASS_G1_LANE  TRAIN_CONTROL_9.BF.TX_TRAIN_PASS_G1_LANE
#define lnx_TX_TRAIN_PASS_G2_LANE  TRAIN_CONTROL_9.BF.TX_TRAIN_PASS_G2_LANE
#define lnx_TX_TRAIN_PASS_G3_LANE  TRAIN_CONTROL_9.BF.TX_TRAIN_PASS_G3_LANE
#define lnx_TX_TRAIN_PASS_G4_LANE  TRAIN_CONTROL_9.BF.TX_TRAIN_PASS_G4_LANE

// 0x00d0	TRAIN_CONTROL_10		
typedef union {
	struct {
		uint8_t TXFFE_FORCE_EN_G0_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t TXFFE_EM_PO_EN_G0_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t TXFFE_EM_PRE_EN_G0_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t TXFFE_EM_PEAK_EN_G0_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t TXFFE_EM_PO_CTRL_G0_LANE_3_0             : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t TXFFE_EM_PRE_CTRL_G0_LANE_3_0            : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t TXFFE_EM_PEAK_CTRL_G0_LANE_3_0           : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t TXFFE_FORCE_EN_G1_LANE                   : 1;	/*     16     r/w   0*/
		uint8_t TXFFE_EM_PO_EN_G1_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t TXFFE_EM_PRE_EN_G1_LANE                  : 1;	/*     18     r/w   0*/
		uint8_t TXFFE_EM_PEAK_EN_G1_LANE                 : 1;	/*     19     r/w   0*/
		uint8_t TXFFE_EM_PO_CTRL_G1_LANE_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t TXFFE_EM_PRE_CTRL_G1_LANE_3_0            : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t TXFFE_EM_PEAK_CTRL_G1_LANE_3_0           : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_10_t;
__xdata __at( 0x60d0 ) volatile TRAIN_CONTROL_10_t TRAIN_CONTROL_10;
#define lnx_TXFFE_FORCE_EN_G0_LANE  TRAIN_CONTROL_10.BF.TXFFE_FORCE_EN_G0_LANE
#define lnx_TXFFE_EM_PO_EN_G0_LANE  TRAIN_CONTROL_10.BF.TXFFE_EM_PO_EN_G0_LANE
#define lnx_TXFFE_EM_PRE_EN_G0_LANE  TRAIN_CONTROL_10.BF.TXFFE_EM_PRE_EN_G0_LANE
#define lnx_TXFFE_EM_PEAK_EN_G0_LANE  TRAIN_CONTROL_10.BF.TXFFE_EM_PEAK_EN_G0_LANE
#define lnx_TXFFE_EM_PO_CTRL_G0_LANE_3_0  TRAIN_CONTROL_10.BF.TXFFE_EM_PO_CTRL_G0_LANE_3_0
#define lnx_TXFFE_EM_PRE_CTRL_G0_LANE_3_0  TRAIN_CONTROL_10.BF.TXFFE_EM_PRE_CTRL_G0_LANE_3_0
#define lnx_TXFFE_EM_PEAK_CTRL_G0_LANE_3_0  TRAIN_CONTROL_10.BF.TXFFE_EM_PEAK_CTRL_G0_LANE_3_0
#define lnx_TXFFE_FORCE_EN_G1_LANE  TRAIN_CONTROL_10.BF.TXFFE_FORCE_EN_G1_LANE
#define lnx_TXFFE_EM_PO_EN_G1_LANE  TRAIN_CONTROL_10.BF.TXFFE_EM_PO_EN_G1_LANE
#define lnx_TXFFE_EM_PRE_EN_G1_LANE  TRAIN_CONTROL_10.BF.TXFFE_EM_PRE_EN_G1_LANE
#define lnx_TXFFE_EM_PEAK_EN_G1_LANE  TRAIN_CONTROL_10.BF.TXFFE_EM_PEAK_EN_G1_LANE
#define lnx_TXFFE_EM_PO_CTRL_G1_LANE_3_0  TRAIN_CONTROL_10.BF.TXFFE_EM_PO_CTRL_G1_LANE_3_0
#define lnx_TXFFE_EM_PRE_CTRL_G1_LANE_3_0  TRAIN_CONTROL_10.BF.TXFFE_EM_PRE_CTRL_G1_LANE_3_0
#define lnx_TXFFE_EM_PEAK_CTRL_G1_LANE_3_0  TRAIN_CONTROL_10.BF.TXFFE_EM_PEAK_CTRL_G1_LANE_3_0

// 0x00d4	TRAIN_CONTROL_11		
typedef union {
	struct {
		uint8_t TXFFE_FORCE_EN_G2_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t TXFFE_EM_PO_EN_G2_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t TXFFE_EM_PRE_EN_G2_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t TXFFE_EM_PEAK_EN_G2_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t TXFFE_EM_PO_CTRL_G2_LANE_3_0             : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t TXFFE_EM_PRE_CTRL_G2_LANE_3_0            : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t TXFFE_EM_PEAK_CTRL_G2_LANE_3_0           : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t TXFFE_FORCE_EN_G3_LANE                   : 1;	/*     16     r/w   0*/
		uint8_t TXFFE_EM_PO_EN_G3_LANE                   : 1;	/*     17     r/w   0*/
		uint8_t TXFFE_EM_PRE_EN_G3_LANE                  : 1;	/*     18     r/w   0*/
		uint8_t TXFFE_EM_PEAK_EN_G3_LANE                 : 1;	/*     19     r/w   0*/
		uint8_t TXFFE_EM_PO_CTRL_G3_LANE_3_0             : 4;	/*[23:20]     r/w 4'h0*/
		uint8_t TXFFE_EM_PRE_CTRL_G3_LANE_3_0            : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t TXFFE_EM_PEAK_CTRL_G3_LANE_3_0           : 4;	/*[31:28]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_11_t;
__xdata __at( 0x60d4 ) volatile TRAIN_CONTROL_11_t TRAIN_CONTROL_11;
#define lnx_TXFFE_FORCE_EN_G2_LANE  TRAIN_CONTROL_11.BF.TXFFE_FORCE_EN_G2_LANE
#define lnx_TXFFE_EM_PO_EN_G2_LANE  TRAIN_CONTROL_11.BF.TXFFE_EM_PO_EN_G2_LANE
#define lnx_TXFFE_EM_PRE_EN_G2_LANE  TRAIN_CONTROL_11.BF.TXFFE_EM_PRE_EN_G2_LANE
#define lnx_TXFFE_EM_PEAK_EN_G2_LANE  TRAIN_CONTROL_11.BF.TXFFE_EM_PEAK_EN_G2_LANE
#define lnx_TXFFE_EM_PO_CTRL_G2_LANE_3_0  TRAIN_CONTROL_11.BF.TXFFE_EM_PO_CTRL_G2_LANE_3_0
#define lnx_TXFFE_EM_PRE_CTRL_G2_LANE_3_0  TRAIN_CONTROL_11.BF.TXFFE_EM_PRE_CTRL_G2_LANE_3_0
#define lnx_TXFFE_EM_PEAK_CTRL_G2_LANE_3_0  TRAIN_CONTROL_11.BF.TXFFE_EM_PEAK_CTRL_G2_LANE_3_0
#define lnx_TXFFE_FORCE_EN_G3_LANE  TRAIN_CONTROL_11.BF.TXFFE_FORCE_EN_G3_LANE
#define lnx_TXFFE_EM_PO_EN_G3_LANE  TRAIN_CONTROL_11.BF.TXFFE_EM_PO_EN_G3_LANE
#define lnx_TXFFE_EM_PRE_EN_G3_LANE  TRAIN_CONTROL_11.BF.TXFFE_EM_PRE_EN_G3_LANE
#define lnx_TXFFE_EM_PEAK_EN_G3_LANE  TRAIN_CONTROL_11.BF.TXFFE_EM_PEAK_EN_G3_LANE
#define lnx_TXFFE_EM_PO_CTRL_G3_LANE_3_0  TRAIN_CONTROL_11.BF.TXFFE_EM_PO_CTRL_G3_LANE_3_0
#define lnx_TXFFE_EM_PRE_CTRL_G3_LANE_3_0  TRAIN_CONTROL_11.BF.TXFFE_EM_PRE_CTRL_G3_LANE_3_0
#define lnx_TXFFE_EM_PEAK_CTRL_G3_LANE_3_0  TRAIN_CONTROL_11.BF.TXFFE_EM_PEAK_CTRL_G3_LANE_3_0

// 0x00d8	TRAIN_CONTROL_12		
typedef union {
	struct {
		uint8_t TXFFE_FORCE_EN_G4_LANE                   : 1;	/*      0     r/w   0*/
		uint8_t TXFFE_EM_PO_EN_G4_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t TXFFE_EM_PRE_EN_G4_LANE                  : 1;	/*      2     r/w   0*/
		uint8_t TXFFE_EM_PEAK_EN_G4_LANE                 : 1;	/*      3     r/w   0*/
		uint8_t TXFFE_EM_PO_CTRL_G4_LANE_3_0             : 4;	/*  [7:4]     r/w 4'h0*/
		uint8_t TXFFE_EM_PRE_CTRL_G4_LANE_3_0            : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t TXFFE_EM_PEAK_CTRL_G4_LANE_3_0           : 4;	/*[15:12]     r/w 4'h0*/
		uint8_t TXFFE_CMD_IF_ON_G0_LANE                  : 1;	/*     16     r/w   0*/
		uint8_t TXFFE_CMD_IF_ON_G1_LANE                  : 1;	/*     17     r/w   0*/
		uint8_t TXFFE_CMD_IF_ON_G2_LANE                  : 1;	/*     18     r/w   0*/
		uint8_t TXFFE_CMD_IF_ON_G3_LANE                  : 1;	/*     19     r/w   0*/
		uint8_t TXFFE_CMD_IF_ON_G4_LANE                  : 1;	/*     20     r/w   0*/
		uint8_t RESERVED_21                              : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t F0A_SAT_THR_G2_LANE_7_0                  : 8;	/*[31:24]     r/w 8'h32*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_12_t;
__xdata __at( 0x60d8 ) volatile TRAIN_CONTROL_12_t TRAIN_CONTROL_12;
#define lnx_TXFFE_FORCE_EN_G4_LANE  TRAIN_CONTROL_12.BF.TXFFE_FORCE_EN_G4_LANE
#define lnx_TXFFE_EM_PO_EN_G4_LANE  TRAIN_CONTROL_12.BF.TXFFE_EM_PO_EN_G4_LANE
#define lnx_TXFFE_EM_PRE_EN_G4_LANE  TRAIN_CONTROL_12.BF.TXFFE_EM_PRE_EN_G4_LANE
#define lnx_TXFFE_EM_PEAK_EN_G4_LANE  TRAIN_CONTROL_12.BF.TXFFE_EM_PEAK_EN_G4_LANE
#define lnx_TXFFE_EM_PO_CTRL_G4_LANE_3_0  TRAIN_CONTROL_12.BF.TXFFE_EM_PO_CTRL_G4_LANE_3_0
#define lnx_TXFFE_EM_PRE_CTRL_G4_LANE_3_0  TRAIN_CONTROL_12.BF.TXFFE_EM_PRE_CTRL_G4_LANE_3_0
#define lnx_TXFFE_EM_PEAK_CTRL_G4_LANE_3_0  TRAIN_CONTROL_12.BF.TXFFE_EM_PEAK_CTRL_G4_LANE_3_0
#define lnx_TXFFE_CMD_IF_ON_G0_LANE  TRAIN_CONTROL_12.BF.TXFFE_CMD_IF_ON_G0_LANE
#define lnx_TXFFE_CMD_IF_ON_G1_LANE  TRAIN_CONTROL_12.BF.TXFFE_CMD_IF_ON_G1_LANE
#define lnx_TXFFE_CMD_IF_ON_G2_LANE  TRAIN_CONTROL_12.BF.TXFFE_CMD_IF_ON_G2_LANE
#define lnx_TXFFE_CMD_IF_ON_G3_LANE  TRAIN_CONTROL_12.BF.TXFFE_CMD_IF_ON_G3_LANE
#define lnx_TXFFE_CMD_IF_ON_G4_LANE  TRAIN_CONTROL_12.BF.TXFFE_CMD_IF_ON_G4_LANE
#define lnx_F0A_SAT_THR_G2_LANE_7_0  TRAIN_CONTROL_12.BF.F0A_SAT_THR_G2_LANE_7_0

// 0x00dc	ESM_POP_N_CNT_LOW_LANE		
typedef union {
	struct {
		uint8_t EOM_POP_N_CNT_LANE_31_0_b0               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_POP_N_CNT_LANE_31_0_b1               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_POP_N_CNT_LANE_31_0_b2               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_POP_N_CNT_LANE_31_0_b3               : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ESM_POP_N_CNT_LOW_LANE_t;
__xdata __at( 0x60dc ) volatile ESM_POP_N_CNT_LOW_LANE_t ESM_POP_N_CNT_LOW_LANE;
#define lnx_EOM_POP_N_CNT_LANE_31_0_b0  ESM_POP_N_CNT_LOW_LANE.BF.EOM_POP_N_CNT_LANE_31_0_b0
#define lnx_EOM_POP_N_CNT_LANE_31_0_b1  ESM_POP_N_CNT_LOW_LANE.BF.EOM_POP_N_CNT_LANE_31_0_b1
#define lnx_EOM_POP_N_CNT_LANE_31_0_b2  ESM_POP_N_CNT_LOW_LANE.BF.EOM_POP_N_CNT_LANE_31_0_b2
#define lnx_EOM_POP_N_CNT_LANE_31_0_b3  ESM_POP_N_CNT_LOW_LANE.BF.EOM_POP_N_CNT_LANE_31_0_b3

// 0x00e0	ESM_ERR_N_CNT_LOW_LANE		
typedef union {
	struct {
		uint8_t EOM_ERR_N_CNT_LANE_31_0_b0               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_ERR_N_CNT_LANE_31_0_b1               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_ERR_N_CNT_LANE_31_0_b2               : 8;	/* [31:0]     r/w   0*/
		uint8_t EOM_ERR_N_CNT_LANE_31_0_b3               : 8;	/* [31:0]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ESM_ERR_N_CNT_LOW_LANE_t;
__xdata __at( 0x60e0 ) volatile ESM_ERR_N_CNT_LOW_LANE_t ESM_ERR_N_CNT_LOW_LANE;
#define lnx_EOM_ERR_N_CNT_LANE_31_0_b0  ESM_ERR_N_CNT_LOW_LANE.BF.EOM_ERR_N_CNT_LANE_31_0_b0
#define lnx_EOM_ERR_N_CNT_LANE_31_0_b1  ESM_ERR_N_CNT_LOW_LANE.BF.EOM_ERR_N_CNT_LANE_31_0_b1
#define lnx_EOM_ERR_N_CNT_LANE_31_0_b2  ESM_ERR_N_CNT_LOW_LANE.BF.EOM_ERR_N_CNT_LANE_31_0_b2
#define lnx_EOM_ERR_N_CNT_LANE_31_0_b3  ESM_ERR_N_CNT_LOW_LANE.BF.EOM_ERR_N_CNT_LANE_31_0_b3

// 0x00e4	TRAIN_CONTROL_13		
typedef union {
	struct {
		uint8_t ALIGN90_REF_G0_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t ALIGN90_GM_G0_LANE_2_0                   : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t ALIGN90_DAC_G0_LANE_5_0                  : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t ALIGN90_DUMMY_CLK_G0_LANE                : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t RXFFE_R_GAIN_TRAIN_G2_LANE_3_0           : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t RXFFE_R_GAIN_TRAIN_G3_LANE_3_0           : 4;	/*[31:28]     r/w 4'h9*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_13_t;
__xdata __at( 0x60e4 ) volatile TRAIN_CONTROL_13_t TRAIN_CONTROL_13;
#define lnx_ALIGN90_REF_G0_LANE_7_0  TRAIN_CONTROL_13.BF.ALIGN90_REF_G0_LANE_7_0
#define lnx_ALIGN90_GM_G0_LANE_2_0  TRAIN_CONTROL_13.BF.ALIGN90_GM_G0_LANE_2_0
#define lnx_ALIGN90_DAC_G0_LANE_5_0  TRAIN_CONTROL_13.BF.ALIGN90_DAC_G0_LANE_5_0
#define lnx_ALIGN90_DUMMY_CLK_G0_LANE  TRAIN_CONTROL_13.BF.ALIGN90_DUMMY_CLK_G0_LANE
#define lnx_RXFFE_R_GAIN_TRAIN_G2_LANE_3_0  TRAIN_CONTROL_13.BF.RXFFE_R_GAIN_TRAIN_G2_LANE_3_0
#define lnx_RXFFE_R_GAIN_TRAIN_G3_LANE_3_0  TRAIN_CONTROL_13.BF.RXFFE_R_GAIN_TRAIN_G3_LANE_3_0

// 0x00e8	TRAIN_CONTROL_14		
typedef union {
	struct {
		uint8_t ALIGN90_REF_G1_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t ALIGN90_GM_G1_LANE_2_0                   : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t ALIGN90_DAC_G1_LANE_5_0                  : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t ALIGN90_DUMMY_CLK_G1_LANE                : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t DFE_RES_F0A_HIGH_THRES_INIT_G3_LANE_7_0  : 8;	/*[31:24]     r/w 8'h28*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_14_t;
__xdata __at( 0x60e8 ) volatile TRAIN_CONTROL_14_t TRAIN_CONTROL_14;
#define lnx_ALIGN90_REF_G1_LANE_7_0  TRAIN_CONTROL_14.BF.ALIGN90_REF_G1_LANE_7_0
#define lnx_ALIGN90_GM_G1_LANE_2_0  TRAIN_CONTROL_14.BF.ALIGN90_GM_G1_LANE_2_0
#define lnx_ALIGN90_DAC_G1_LANE_5_0  TRAIN_CONTROL_14.BF.ALIGN90_DAC_G1_LANE_5_0
#define lnx_ALIGN90_DUMMY_CLK_G1_LANE  TRAIN_CONTROL_14.BF.ALIGN90_DUMMY_CLK_G1_LANE
#define lnx_DFE_RES_F0A_HIGH_THRES_INIT_G3_LANE_7_0  TRAIN_CONTROL_14.BF.DFE_RES_F0A_HIGH_THRES_INIT_G3_LANE_7_0

// 0x00ec	TRAIN_CONTROL_15		
typedef union {
	struct {
		uint8_t ALIGN90_REF_G2_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t ALIGN90_GM_G2_LANE_2_0                   : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t ALIGN90_DAC_G2_LANE_5_0                  : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t ALIGN90_DUMMY_CLK_G2_LANE                : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t G2_SPDCHG_COMP_LANE                      : 1;	/*     24       r   0*/
		uint8_t G2_RXINIT_DONE_LANE                      : 1;	/*     25       r   0*/
		uint8_t G2_RXTRAIN_TRIG_LANE                     : 1;	/*     26       r   0*/
		uint8_t G2_RXTRAIN_COMP_LANE                     : 1;	/*     27       r   0*/
		uint8_t G2_RXTRAIN_SUCCESS_LANE                  : 1;	/*     28       r   0*/
		uint8_t G2_TRXTRAIN_TRIG_LANE                    : 1;	/*     29       r   0*/
		uint8_t G2_TRXTRAIN_COMP_LANE                    : 1;	/*     30       r   0*/
		uint8_t G2_TRXTRAIN_SUCCESS_LANE                 : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_15_t;
__xdata __at( 0x60ec ) volatile TRAIN_CONTROL_15_t TRAIN_CONTROL_15;
#define lnx_ALIGN90_REF_G2_LANE_7_0  TRAIN_CONTROL_15.BF.ALIGN90_REF_G2_LANE_7_0
#define lnx_ALIGN90_GM_G2_LANE_2_0  TRAIN_CONTROL_15.BF.ALIGN90_GM_G2_LANE_2_0
#define lnx_ALIGN90_DAC_G2_LANE_5_0  TRAIN_CONTROL_15.BF.ALIGN90_DAC_G2_LANE_5_0
#define lnx_ALIGN90_DUMMY_CLK_G2_LANE  TRAIN_CONTROL_15.BF.ALIGN90_DUMMY_CLK_G2_LANE
#define lnx_G2_SPDCHG_COMP_LANE  TRAIN_CONTROL_15.BF.G2_SPDCHG_COMP_LANE
#define lnx_G2_RXINIT_DONE_LANE  TRAIN_CONTROL_15.BF.G2_RXINIT_DONE_LANE
#define lnx_G2_RXTRAIN_TRIG_LANE  TRAIN_CONTROL_15.BF.G2_RXTRAIN_TRIG_LANE
#define lnx_G2_RXTRAIN_COMP_LANE  TRAIN_CONTROL_15.BF.G2_RXTRAIN_COMP_LANE
#define lnx_G2_RXTRAIN_SUCCESS_LANE  TRAIN_CONTROL_15.BF.G2_RXTRAIN_SUCCESS_LANE
#define lnx_G2_TRXTRAIN_TRIG_LANE  TRAIN_CONTROL_15.BF.G2_TRXTRAIN_TRIG_LANE
#define lnx_G2_TRXTRAIN_COMP_LANE  TRAIN_CONTROL_15.BF.G2_TRXTRAIN_COMP_LANE
#define lnx_G2_TRXTRAIN_SUCCESS_LANE  TRAIN_CONTROL_15.BF.G2_TRXTRAIN_SUCCESS_LANE

// 0x00f0	TRAIN_CONTROL_16		
typedef union {
	struct {
		uint8_t ALIGN90_REF_G3_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t ALIGN90_GM_G3_LANE_2_0                   : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t ALIGN90_DAC_G3_LANE_5_0                  : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t ALIGN90_DUMMY_CLK_G3_LANE                : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t G3_SPDCHG_COMP_LANE                      : 1;	/*     24       r   0*/
		uint8_t G3_RXINIT_DONE_LANE                      : 1;	/*     25       r   0*/
		uint8_t G3_RXTRAIN_TRIG_LANE                     : 1;	/*     26       r   0*/
		uint8_t G3_RXTRAIN_COMP_LANE                     : 1;	/*     27       r   0*/
		uint8_t G3_RXTRAIN_SUCCESS_LANE                  : 1;	/*     28       r   0*/
		uint8_t G3_TRXTRAIN_TRIG_LANE                    : 1;	/*     29       r   0*/
		uint8_t G3_TRXTRAIN_COMP_LANE                    : 1;	/*     30       r   0*/
		uint8_t G3_TRXTRAIN_SUCCESS_LANE                 : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_16_t;
__xdata __at( 0x60f0 ) volatile TRAIN_CONTROL_16_t TRAIN_CONTROL_16;
#define lnx_ALIGN90_REF_G3_LANE_7_0  TRAIN_CONTROL_16.BF.ALIGN90_REF_G3_LANE_7_0
#define lnx_ALIGN90_GM_G3_LANE_2_0  TRAIN_CONTROL_16.BF.ALIGN90_GM_G3_LANE_2_0
#define lnx_ALIGN90_DAC_G3_LANE_5_0  TRAIN_CONTROL_16.BF.ALIGN90_DAC_G3_LANE_5_0
#define lnx_ALIGN90_DUMMY_CLK_G3_LANE  TRAIN_CONTROL_16.BF.ALIGN90_DUMMY_CLK_G3_LANE
#define lnx_G3_SPDCHG_COMP_LANE  TRAIN_CONTROL_16.BF.G3_SPDCHG_COMP_LANE
#define lnx_G3_RXINIT_DONE_LANE  TRAIN_CONTROL_16.BF.G3_RXINIT_DONE_LANE
#define lnx_G3_RXTRAIN_TRIG_LANE  TRAIN_CONTROL_16.BF.G3_RXTRAIN_TRIG_LANE
#define lnx_G3_RXTRAIN_COMP_LANE  TRAIN_CONTROL_16.BF.G3_RXTRAIN_COMP_LANE
#define lnx_G3_RXTRAIN_SUCCESS_LANE  TRAIN_CONTROL_16.BF.G3_RXTRAIN_SUCCESS_LANE
#define lnx_G3_TRXTRAIN_TRIG_LANE  TRAIN_CONTROL_16.BF.G3_TRXTRAIN_TRIG_LANE
#define lnx_G3_TRXTRAIN_COMP_LANE  TRAIN_CONTROL_16.BF.G3_TRXTRAIN_COMP_LANE
#define lnx_G3_TRXTRAIN_SUCCESS_LANE  TRAIN_CONTROL_16.BF.G3_TRXTRAIN_SUCCESS_LANE

// 0x00f4	TRAIN_CONTROL_17		
typedef union {
	struct {
		uint8_t ALIGN90_REF_G4_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t ALIGN90_GM_G4_LANE_2_0                   : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t ALIGN90_DAC_G4_LANE_5_0                  : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t ALIGN90_DUMMY_CLK_G4_LANE                : 1;	/*     22     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t BYPASS_CTLE_TRAIN_G0_LANE                : 1;	/*     24     r/w   0*/
		uint8_t BYPASS_CTLE_TRAIN_G1_LANE                : 1;	/*     25     r/w   0*/
		uint8_t BYPASS_CTLE_TRAIN_G2_LANE                : 1;	/*     26     r/w   0*/
		uint8_t BYPASS_CTLE_TRAIN_G3_LANE                : 1;	/*     27     r/w   0*/
		uint8_t BYPASS_CTLE_TRAIN_G4_LANE                : 1;	/*     28     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRAIN_CONTROL_17_t;
__xdata __at( 0x60f4 ) volatile TRAIN_CONTROL_17_t TRAIN_CONTROL_17;
#define lnx_ALIGN90_REF_G4_LANE_7_0  TRAIN_CONTROL_17.BF.ALIGN90_REF_G4_LANE_7_0
#define lnx_ALIGN90_GM_G4_LANE_2_0  TRAIN_CONTROL_17.BF.ALIGN90_GM_G4_LANE_2_0
#define lnx_ALIGN90_DAC_G4_LANE_5_0  TRAIN_CONTROL_17.BF.ALIGN90_DAC_G4_LANE_5_0
#define lnx_ALIGN90_DUMMY_CLK_G4_LANE  TRAIN_CONTROL_17.BF.ALIGN90_DUMMY_CLK_G4_LANE
#define lnx_BYPASS_CTLE_TRAIN_G0_LANE  TRAIN_CONTROL_17.BF.BYPASS_CTLE_TRAIN_G0_LANE
#define lnx_BYPASS_CTLE_TRAIN_G1_LANE  TRAIN_CONTROL_17.BF.BYPASS_CTLE_TRAIN_G1_LANE
#define lnx_BYPASS_CTLE_TRAIN_G2_LANE  TRAIN_CONTROL_17.BF.BYPASS_CTLE_TRAIN_G2_LANE
#define lnx_BYPASS_CTLE_TRAIN_G3_LANE  TRAIN_CONTROL_17.BF.BYPASS_CTLE_TRAIN_G3_LANE
#define lnx_BYPASS_CTLE_TRAIN_G4_LANE  TRAIN_CONTROL_17.BF.BYPASS_CTLE_TRAIN_G4_LANE

// 0x00f8	END_XDAT_LANE		
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
__xdata __at( 0x60f8 ) volatile END_XDAT_LANE_t END_XDAT_LANE;
#define lnx_END_XDAT_LANE_7_0  END_XDAT_LANE.BF.END_XDAT_LANE_7_0

#endif
