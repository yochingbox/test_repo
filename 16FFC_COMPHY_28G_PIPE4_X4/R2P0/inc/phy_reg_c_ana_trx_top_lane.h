#ifndef PHY_REG_C_ANA_TRX_TOP_LANE_H
#define PHY_REG_C_ANA_TRX_TOP_LANE_H



// 0x80	UPHY14_TRX_ANAREG_TOP_128		Analog Register 128
typedef union {
	struct {
		uint8_t FFE_CAP1_SEL_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'hc*/
		uint8_t FFE_RES1_SEL_LANE_3_0                    : 4;	/*  [7:4]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_128_t;
__xdata __at( 0x200 ) volatile UPHY14_TRX_ANAREG_TOP_128_t UPHY14_TRX_ANAREG_TOP_128;
#define reg_FFE_CAP1_SEL_LANE_3_0  UPHY14_TRX_ANAREG_TOP_128.BF.FFE_CAP1_SEL_LANE_3_0
#define reg_FFE_RES1_SEL_LANE_3_0  UPHY14_TRX_ANAREG_TOP_128.BF.FFE_RES1_SEL_LANE_3_0

// 0x81	UPHY14_TRX_ANAREG_TOP_129		Analog Register 129
typedef union {
	struct {
		uint8_t FFE_CAP2_SEL_O_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t FFE_RES2_SEL_O_LANE_3_0                  : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_129_t;
__xdata __at( 0x204 ) volatile UPHY14_TRX_ANAREG_TOP_129_t UPHY14_TRX_ANAREG_TOP_129;
#define reg_FFE_CAP2_SEL_O_LANE_3_0  UPHY14_TRX_ANAREG_TOP_129.BF.FFE_CAP2_SEL_O_LANE_3_0
#define reg_FFE_RES2_SEL_O_LANE_3_0  UPHY14_TRX_ANAREG_TOP_129.BF.FFE_RES2_SEL_O_LANE_3_0

// 0x82	UPHY14_TRX_ANAREG_TOP_130		Analog Register 130
typedef union {
	struct {
		uint8_t LPBK_ISEL_LANE_1_0                       : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t PU_LB_DLY_LANE                           : 1;	/*      2     r/w   0*/
		uint8_t PU_LB_LANE                               : 1;	/*      3     r/w   0*/
		uint8_t FFE_DATA_RATE_LANE_3_0                   : 4;	/*  [7:4]     r/w 4'hf*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_130_t;
__xdata __at( 0x208 ) volatile UPHY14_TRX_ANAREG_TOP_130_t UPHY14_TRX_ANAREG_TOP_130;
#define reg_LPBK_ISEL_LANE_1_0  UPHY14_TRX_ANAREG_TOP_130.BF.LPBK_ISEL_LANE_1_0
#define reg_PU_LB_DLY_LANE  UPHY14_TRX_ANAREG_TOP_130.BF.PU_LB_DLY_LANE
#define reg_PU_LB_LANE  UPHY14_TRX_ANAREG_TOP_130.BF.PU_LB_LANE
#define reg_FFE_DATA_RATE_LANE_3_0  UPHY14_TRX_ANAREG_TOP_130.BF.FFE_DATA_RATE_LANE_3_0

// 0x83	UPHY14_TRX_ANAREG_TOP_131		Analog Register 131
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SQ_CAL_PU_LANE                           : 1;	/*      1     r/w   0*/
		uint8_t FFE_PW_SEL_LANE_1_0                      : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t FFE_PULSE_DIV_LANE_2_0                   : 3;	/*  [6:4]     r/w 3'h4*/
		uint8_t FFE_PULSE_EN_LANE                        : 1;	/*      7     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_131_t;
__xdata __at( 0x20c ) volatile UPHY14_TRX_ANAREG_TOP_131_t UPHY14_TRX_ANAREG_TOP_131;
#define reg_SQ_CAL_PU_LANE  UPHY14_TRX_ANAREG_TOP_131.BF.SQ_CAL_PU_LANE
#define reg_FFE_PW_SEL_LANE_1_0  UPHY14_TRX_ANAREG_TOP_131.BF.FFE_PW_SEL_LANE_1_0
#define reg_FFE_PULSE_DIV_LANE_2_0  UPHY14_TRX_ANAREG_TOP_131.BF.FFE_PULSE_DIV_LANE_2_0
#define reg_FFE_PULSE_EN_LANE  UPHY14_TRX_ANAREG_TOP_131.BF.FFE_PULSE_EN_LANE

// 0x84	UPHY14_TRX_ANAREG_TOP_132		Analog Register 132
typedef union {
	struct {
		uint8_t SQ_PKDETI_LANE_1_0                       : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t SQ_PKDETCAP_LANE_1_0                     : 2;	/*  [3:2]     r/w 2'h3*/
		uint8_t SQ_AMPI_LANE_1_0                         : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t SQ_AMPBW_LANE_1_0                        : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_132_t;
__xdata __at( 0x210 ) volatile UPHY14_TRX_ANAREG_TOP_132_t UPHY14_TRX_ANAREG_TOP_132;
#define reg_SQ_PKDETI_LANE_1_0  UPHY14_TRX_ANAREG_TOP_132.BF.SQ_PKDETI_LANE_1_0
#define reg_SQ_PKDETCAP_LANE_1_0  UPHY14_TRX_ANAREG_TOP_132.BF.SQ_PKDETCAP_LANE_1_0
#define reg_SQ_AMPI_LANE_1_0  UPHY14_TRX_ANAREG_TOP_132.BF.SQ_AMPI_LANE_1_0
#define reg_SQ_AMPBW_LANE_1_0  UPHY14_TRX_ANAREG_TOP_132.BF.SQ_AMPBW_LANE_1_0

// 0x85	UPHY14_TRX_ANAREG_TOP_133		Analog Register 133
typedef union {
	struct {
		uint8_t INTPR_LANE_1_0                           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t SQ_THRESH_CAL_EN_LANE                    : 1;	/*      2     r/w   0*/
		uint8_t SQ_REFTHR_LANE_4_0                       : 5;	/*  [7:3]     r/w 5'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_133_t;
__xdata __at( 0x214 ) volatile UPHY14_TRX_ANAREG_TOP_133_t UPHY14_TRX_ANAREG_TOP_133;
#define reg_INTPR_LANE_1_0  UPHY14_TRX_ANAREG_TOP_133.BF.INTPR_LANE_1_0
#define reg_SQ_THRESH_CAL_EN_LANE  UPHY14_TRX_ANAREG_TOP_133.BF.SQ_THRESH_CAL_EN_LANE
#define reg_SQ_REFTHR_LANE_4_0  UPHY14_TRX_ANAREG_TOP_133.BF.SQ_REFTHR_LANE_4_0

// 0x86	UPHY14_TRX_ANAREG_TOP_134		Analog Register 134
typedef union {
	struct {
		uint8_t RXDCC_EN_DLLCLK_LANE                     : 1;	/*      0     r/w   1*/
		uint8_t PU_ALIGN90_LANE                          : 1;	/*      1     r/w   1*/
		uint8_t EOM_CLK_EN_LANE                          : 1;	/*      2     r/w   0*/
		uint8_t CLK_DET_EN_LANE                          : 1;	/*      3     r/w   1*/
		uint8_t DPHERCK_DLY_SEL_LANE_1_0                 : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t RESET_INTP_EXT_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t SSC_CLK_EN_LANE                          : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_134_t;
__xdata __at( 0x218 ) volatile UPHY14_TRX_ANAREG_TOP_134_t UPHY14_TRX_ANAREG_TOP_134;
#define reg_RXDCC_EN_DLLCLK_LANE  UPHY14_TRX_ANAREG_TOP_134.BF.RXDCC_EN_DLLCLK_LANE
#define reg_PU_ALIGN90_LANE  UPHY14_TRX_ANAREG_TOP_134.BF.PU_ALIGN90_LANE
#define reg_EOM_CLK_EN_LANE  UPHY14_TRX_ANAREG_TOP_134.BF.EOM_CLK_EN_LANE
#define reg_CLK_DET_EN_LANE  UPHY14_TRX_ANAREG_TOP_134.BF.CLK_DET_EN_LANE
#define reg_DPHERCK_DLY_SEL_LANE_1_0  UPHY14_TRX_ANAREG_TOP_134.BF.DPHERCK_DLY_SEL_LANE_1_0
#define reg_RESET_INTP_EXT_LANE  UPHY14_TRX_ANAREG_TOP_134.BF.RESET_INTP_EXT_LANE
#define reg_SSC_CLK_EN_LANE  UPHY14_TRX_ANAREG_TOP_134.BF.SSC_CLK_EN_LANE

// 0x87	UPHY14_TRX_ANAREG_TOP_135		Analog Register 135
typedef union {
	struct {
		uint8_t RXDCC_EN_DATACLK_LANE                    : 1;	/*      0     r/w   1*/
		uint8_t RXDCC_HG_DLLCLK_LANE                     : 1;	/*      1     r/w   0*/
		uint8_t RXDCC_DLLCLK_LANE_5_0                    : 6;	/*  [7:2]     r/w 6'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_135_t;
__xdata __at( 0x21c ) volatile UPHY14_TRX_ANAREG_TOP_135_t UPHY14_TRX_ANAREG_TOP_135;
#define reg_RXDCC_EN_DATACLK_LANE  UPHY14_TRX_ANAREG_TOP_135.BF.RXDCC_EN_DATACLK_LANE
#define reg_RXDCC_HG_DLLCLK_LANE  UPHY14_TRX_ANAREG_TOP_135.BF.RXDCC_HG_DLLCLK_LANE
#define reg_RXDCC_DLLCLK_LANE_5_0  UPHY14_TRX_ANAREG_TOP_135.BF.RXDCC_DLLCLK_LANE_5_0

// 0x88	UPHY14_TRX_ANAREG_TOP_136		Analog Register 136
typedef union {
	struct {
		uint8_t TRXDCC_CAL_CLK100KHZ_LANE                : 1;	/*      0     r/w   0*/
		uint8_t RXDCC_HG_DATACLK_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t RXDCC_DATACLK_LANE_5_0                   : 6;	/*  [7:2]     r/w 6'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_136_t;
__xdata __at( 0x220 ) volatile UPHY14_TRX_ANAREG_TOP_136_t UPHY14_TRX_ANAREG_TOP_136;
#define reg_TRXDCC_CAL_CLK100KHZ_LANE  UPHY14_TRX_ANAREG_TOP_136.BF.TRXDCC_CAL_CLK100KHZ_LANE
#define reg_RXDCC_HG_DATACLK_LANE  UPHY14_TRX_ANAREG_TOP_136.BF.RXDCC_HG_DATACLK_LANE
#define reg_RXDCC_DATACLK_LANE_5_0  UPHY14_TRX_ANAREG_TOP_136.BF.RXDCC_DATACLK_LANE_5_0

// 0x89	UPHY14_TRX_ANAREG_TOP_137		Analog Register 137
typedef union {
	struct {
		uint8_t VICM_DFE_CTRL_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t SEL_EDGE_DLY_LANE_1_0                    : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t PU_OS_LANE                               : 1;	/*      4     r/w   1*/
		uint8_t OFST_RES_LANE_1_0                        : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t SMPLR_CAL_EN_DLY_LANE                    : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_137_t;
__xdata __at( 0x224 ) volatile UPHY14_TRX_ANAREG_TOP_137_t UPHY14_TRX_ANAREG_TOP_137;
#define reg_VICM_DFE_CTRL_LANE_1_0  UPHY14_TRX_ANAREG_TOP_137.BF.VICM_DFE_CTRL_LANE_1_0
#define reg_SEL_EDGE_DLY_LANE_1_0  UPHY14_TRX_ANAREG_TOP_137.BF.SEL_EDGE_DLY_LANE_1_0
#define reg_PU_OS_LANE  UPHY14_TRX_ANAREG_TOP_137.BF.PU_OS_LANE
#define reg_OFST_RES_LANE_1_0  UPHY14_TRX_ANAREG_TOP_137.BF.OFST_RES_LANE_1_0
#define reg_SMPLR_CAL_EN_DLY_LANE  UPHY14_TRX_ANAREG_TOP_137.BF.SMPLR_CAL_EN_DLY_LANE

// 0x8a	UPHY14_TRX_ANAREG_TOP_138		Analog Register 138
typedef union {
	struct {
		uint8_t CDR_PATTERN_INDEX_LANE_1_0               : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RX_SPEED_DIV_LANE_2_0                    : 3;	/*  [4:2]     r/w 3'h0*/
		uint8_t DTL_CLK_SPEEDUP_LANE_2_0                 : 3;	/*  [7:5]     r/w 3'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_138_t;
__xdata __at( 0x228 ) volatile UPHY14_TRX_ANAREG_TOP_138_t UPHY14_TRX_ANAREG_TOP_138;
#define reg_CDR_PATTERN_INDEX_LANE_1_0  UPHY14_TRX_ANAREG_TOP_138.BF.CDR_PATTERN_INDEX_LANE_1_0
#define reg_RX_SPEED_DIV_LANE_2_0  UPHY14_TRX_ANAREG_TOP_138.BF.RX_SPEED_DIV_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_LANE_2_0  UPHY14_TRX_ANAREG_TOP_138.BF.DTL_CLK_SPEEDUP_LANE_2_0

// 0x8b	UPHY14_TRX_ANAREG_TOP_139		Analog Register 139
typedef union {
	struct {
		uint8_t REG_SELMUPI_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t CDR_PATTERN_LANE_3_0                     : 4;	/*  [7:4]     r/w 4'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_139_t;
__xdata __at( 0x22c ) volatile UPHY14_TRX_ANAREG_TOP_139_t UPHY14_TRX_ANAREG_TOP_139;
#define reg_REG_SELMUPI_LANE_3_0  UPHY14_TRX_ANAREG_TOP_139.BF.REG_SELMUPI_LANE_3_0
#define reg_CDR_PATTERN_LANE_3_0  UPHY14_TRX_ANAREG_TOP_139.BF.CDR_PATTERN_LANE_3_0

// 0x8c	UPHY14_TRX_ANAREG_TOP_140		Analog Register 140
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t FORCEUD_LANE                             : 1;	/*      1     r/w   0*/
		uint8_t FORCEUD_EN_LANE                          : 1;	/*      2     r/w   0*/
		uint8_t DEMUX2_SYNC_EN_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t REG_SELMUPF_LANE_3_0                     : 4;	/*  [7:4]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_140_t;
__xdata __at( 0x230 ) volatile UPHY14_TRX_ANAREG_TOP_140_t UPHY14_TRX_ANAREG_TOP_140;
#define reg_FORCEUD_LANE  UPHY14_TRX_ANAREG_TOP_140.BF.FORCEUD_LANE
#define reg_FORCEUD_EN_LANE  UPHY14_TRX_ANAREG_TOP_140.BF.FORCEUD_EN_LANE
#define reg_DEMUX2_SYNC_EN_LANE  UPHY14_TRX_ANAREG_TOP_140.BF.DEMUX2_SYNC_EN_LANE
#define reg_REG_SELMUPF_LANE_3_0  UPHY14_TRX_ANAREG_TOP_140.BF.REG_SELMUPF_LANE_3_0

// 0x8d	UPHY14_TRX_ANAREG_TOP_141		Analog Register 141
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t REG_FLOOP_EN_LANE                        : 1;	/*      2     r/w   1*/
		uint8_t REG_SQ_DET_LANE                          : 1;	/*      3     r/w   1*/
		uint8_t REG_SQUELCH_PLOOP_ON_LANE                : 1;	/*      4     r/w   1*/
		uint8_t REG_DTL_LOOP_FREEZE_LANE                 : 1;	/*      5     r/w   0*/
		uint8_t DTL_DLY_CTRL_LANE_1_0                    : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_141_t;
__xdata __at( 0x234 ) volatile UPHY14_TRX_ANAREG_TOP_141_t UPHY14_TRX_ANAREG_TOP_141;
#define reg_REG_FLOOP_EN_LANE  UPHY14_TRX_ANAREG_TOP_141.BF.REG_FLOOP_EN_LANE
#define reg_REG_SQ_DET_LANE  UPHY14_TRX_ANAREG_TOP_141.BF.REG_SQ_DET_LANE
#define reg_REG_SQUELCH_PLOOP_ON_LANE  UPHY14_TRX_ANAREG_TOP_141.BF.REG_SQUELCH_PLOOP_ON_LANE
#define reg_REG_DTL_LOOP_FREEZE_LANE  UPHY14_TRX_ANAREG_TOP_141.BF.REG_DTL_LOOP_FREEZE_LANE
#define reg_DTL_DLY_CTRL_LANE_1_0  UPHY14_TRX_ANAREG_TOP_141.BF.DTL_DLY_CTRL_LANE_1_0

// 0x8e	UPHY14_TRX_ANAREG_TOP_142		Analog Register 142
typedef union {
	struct {
		uint8_t CALEN_VDDA_RXSAMPLER_LANE                : 1;	/*      0     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0      : 3;	/*  [3:1]     r/w 3'h7*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE      : 1;	/*      4     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0       : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_142_t;
__xdata __at( 0x238 ) volatile UPHY14_TRX_ANAREG_TOP_142_t UPHY14_TRX_ANAREG_TOP_142;
#define reg_CALEN_VDDA_RXSAMPLER_LANE  UPHY14_TRX_ANAREG_TOP_142.BF.CALEN_VDDA_RXSAMPLER_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0  UPHY14_TRX_ANAREG_TOP_142.BF.RX_REG0P9_SPEED_TRACK_DATA_LANE_2_0
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE  UPHY14_TRX_ANAREG_TOP_142.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0  UPHY14_TRX_ANAREG_TOP_142.BF.RX_REG0P9_SPEED_TRACK_CLK_LANE_2_0

// 0x8f	UPHY14_TRX_ANAREG_TOP_143		Analog Register 143
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t CALEN_VDDA_TXPRE_LANE                    : 1;	/*      3     r/w   0*/
		uint8_t CALEN_VDDA_TXDATA_LANE                   : 1;	/*      4     r/w   0*/
		uint8_t CALEN_VDDA_TXCLK_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t CALEN_VDDA_RXEOMCLK_LANE                 : 1;	/*      6     r/w   0*/
		uint8_t CALEN_VDDA_RXDATACLK_LANE                : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_143_t;
__xdata __at( 0x23c ) volatile UPHY14_TRX_ANAREG_TOP_143_t UPHY14_TRX_ANAREG_TOP_143;
#define reg_CALEN_VDDA_TXPRE_LANE  UPHY14_TRX_ANAREG_TOP_143.BF.CALEN_VDDA_TXPRE_LANE
#define reg_CALEN_VDDA_TXDATA_LANE  UPHY14_TRX_ANAREG_TOP_143.BF.CALEN_VDDA_TXDATA_LANE
#define reg_CALEN_VDDA_TXCLK_LANE  UPHY14_TRX_ANAREG_TOP_143.BF.CALEN_VDDA_TXCLK_LANE
#define reg_CALEN_VDDA_RXEOMCLK_LANE  UPHY14_TRX_ANAREG_TOP_143.BF.CALEN_VDDA_RXEOMCLK_LANE
#define reg_CALEN_VDDA_RXDATACLK_LANE  UPHY14_TRX_ANAREG_TOP_143.BF.CALEN_VDDA_RXDATACLK_LANE

// 0x90	UPHY14_TRX_ANAREG_TOP_144		Analog Register 144
typedef union {
	struct {
		uint8_t TXIMP_TUNEN_LANE_3_0                     : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t TXIMP_TUNEP_LANE_3_0                     : 4;	/*  [7:4]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_144_t;
__xdata __at( 0x240 ) volatile UPHY14_TRX_ANAREG_TOP_144_t UPHY14_TRX_ANAREG_TOP_144;
#define reg_TXIMP_TUNEN_LANE_3_0  UPHY14_TRX_ANAREG_TOP_144.BF.TXIMP_TUNEN_LANE_3_0
#define reg_TXIMP_TUNEP_LANE_3_0  UPHY14_TRX_ANAREG_TOP_144.BF.TXIMP_TUNEP_LANE_3_0

// 0x91	UPHY14_TRX_ANAREG_TOP_145		Analog Register 145
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t SLC_EN_FORCE_LANE                        : 1;	/*      4     r/w   0*/
		uint8_t TSEN_SEL_LANE                            : 1;	/*      5     r/w   0*/
		uint8_t LOCAL_ANA_TX2RX_LPBK_EN_LANE             : 1;	/*      6     r/w   0*/
		uint8_t TX_TDTAP_SEL_LANE                        : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_145_t;
__xdata __at( 0x244 ) volatile UPHY14_TRX_ANAREG_TOP_145_t UPHY14_TRX_ANAREG_TOP_145;
#define reg_SLC_EN_FORCE_LANE  UPHY14_TRX_ANAREG_TOP_145.BF.SLC_EN_FORCE_LANE
#define reg_TSEN_SEL_LANE  UPHY14_TRX_ANAREG_TOP_145.BF.TSEN_SEL_LANE
#define reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  UPHY14_TRX_ANAREG_TOP_145.BF.LOCAL_ANA_TX2RX_LPBK_EN_LANE
#define reg_TX_TDTAP_SEL_LANE  UPHY14_TRX_ANAREG_TOP_145.BF.TX_TDTAP_SEL_LANE

// 0x92	UPHY14_TRX_ANAREG_TOP_146		Analog Register 146
typedef union {
	struct {
		uint8_t TXDCC_EN_LANE                            : 1;	/*      0     r/w   1*/
		uint8_t SLC_EN_LANE_6_0                          : 7;	/*  [7:1]     r/w 7'h3f*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_146_t;
__xdata __at( 0x248 ) volatile UPHY14_TRX_ANAREG_TOP_146_t UPHY14_TRX_ANAREG_TOP_146;
#define reg_TXDCC_EN_LANE  UPHY14_TRX_ANAREG_TOP_146.BF.TXDCC_EN_LANE
#define reg_SLC_EN_LANE_6_0  UPHY14_TRX_ANAREG_TOP_146.BF.SLC_EN_LANE_6_0

// 0x93	UPHY14_TRX_ANAREG_TOP_147		Analog Register 147
typedef union {
	struct {
		uint8_t TX_IMPCAL_BOT_LANE                       : 1;	/*      0     r/w   0*/
		uint8_t TXDCC_CNT_LANE_5_0                       : 6;	/*  [6:1]     r/w 6'h20*/
		uint8_t TXDCCCAL_EN_LANE                         : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_147_t;
__xdata __at( 0x24c ) volatile UPHY14_TRX_ANAREG_TOP_147_t UPHY14_TRX_ANAREG_TOP_147;
#define reg_TX_IMPCAL_BOT_LANE  UPHY14_TRX_ANAREG_TOP_147.BF.TX_IMPCAL_BOT_LANE
#define reg_TXDCC_CNT_LANE_5_0  UPHY14_TRX_ANAREG_TOP_147.BF.TXDCC_CNT_LANE_5_0
#define reg_TXDCCCAL_EN_LANE  UPHY14_TRX_ANAREG_TOP_147.BF.TXDCCCAL_EN_LANE

// 0x94	UPHY14_TRX_ANAREG_TOP_148		Analog Register 148
typedef union {
	struct {
		uint8_t TXDETRX_IMP_LANE_1_0                     : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TXDETRX_VTH_LANE_1_0                     : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t HIZ_HOLD_CUR_LANE_1_0                    : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t RCAL_2ND_EN_LANE                         : 1;	/*      6     r/w   0*/
		uint8_t TXDCC_HG_LANE                            : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_148_t;
__xdata __at( 0x250 ) volatile UPHY14_TRX_ANAREG_TOP_148_t UPHY14_TRX_ANAREG_TOP_148;
#define reg_TXDETRX_IMP_LANE_1_0  UPHY14_TRX_ANAREG_TOP_148.BF.TXDETRX_IMP_LANE_1_0
#define reg_TXDETRX_VTH_LANE_1_0  UPHY14_TRX_ANAREG_TOP_148.BF.TXDETRX_VTH_LANE_1_0
#define reg_HIZ_HOLD_CUR_LANE_1_0  UPHY14_TRX_ANAREG_TOP_148.BF.HIZ_HOLD_CUR_LANE_1_0
#define reg_RCAL_2ND_EN_LANE  UPHY14_TRX_ANAREG_TOP_148.BF.RCAL_2ND_EN_LANE
#define reg_TXDCC_HG_LANE  UPHY14_TRX_ANAREG_TOP_148.BF.TXDCC_HG_LANE

// 0x95	UPHY14_TRX_ANAREG_TOP_149		Analog Register 149
typedef union {
	struct {
		uint8_t TXIMP_TUNEN0_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t TXIMP_TUNEP0_LANE_2_0                    : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t TX_IMPCAL_SIDE_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t TX_IMPCAL_EN_LANE                        : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_149_t;
__xdata __at( 0x254 ) volatile UPHY14_TRX_ANAREG_TOP_149_t UPHY14_TRX_ANAREG_TOP_149;
#define reg_TXIMP_TUNEN0_LANE_2_0  UPHY14_TRX_ANAREG_TOP_149.BF.TXIMP_TUNEN0_LANE_2_0
#define reg_TXIMP_TUNEP0_LANE_2_0  UPHY14_TRX_ANAREG_TOP_149.BF.TXIMP_TUNEP0_LANE_2_0
#define reg_TX_IMPCAL_SIDE_LANE  UPHY14_TRX_ANAREG_TOP_149.BF.TX_IMPCAL_SIDE_LANE
#define reg_TX_IMPCAL_EN_LANE  UPHY14_TRX_ANAREG_TOP_149.BF.TX_IMPCAL_EN_LANE

// 0x96	UPHY14_TRX_ANAREG_TOP_150		Analog Register 150
typedef union {
	struct {
		uint8_t TX_SPEED_DIV_LANE_2_0                    : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t TX_CK_SEL_LANE                           : 1;	/*      3     r/w   0*/
		uint8_t RX_CK_SEL_LANE                           : 1;	/*      4     r/w   0*/
		uint8_t CLK_DIRECTION_RINGPLL_LANE               : 1;	/*      5     r/w   0*/
		uint8_t CLK_DIRECTION_LCPLL_LANE                 : 1;	/*      6     r/w   1*/
		uint8_t CLK_DIRECTION_REFCLK_LANE                : 1;	/*      7     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_150_t;
__xdata __at( 0x258 ) volatile UPHY14_TRX_ANAREG_TOP_150_t UPHY14_TRX_ANAREG_TOP_150;
#define reg_TX_SPEED_DIV_LANE_2_0  UPHY14_TRX_ANAREG_TOP_150.BF.TX_SPEED_DIV_LANE_2_0
#define reg_TX_CK_SEL_LANE  UPHY14_TRX_ANAREG_TOP_150.BF.TX_CK_SEL_LANE
#define reg_RX_CK_SEL_LANE  UPHY14_TRX_ANAREG_TOP_150.BF.RX_CK_SEL_LANE
#define reg_CLK_DIRECTION_RINGPLL_LANE  UPHY14_TRX_ANAREG_TOP_150.BF.CLK_DIRECTION_RINGPLL_LANE
#define reg_CLK_DIRECTION_LCPLL_LANE  UPHY14_TRX_ANAREG_TOP_150.BF.CLK_DIRECTION_LCPLL_LANE
#define reg_CLK_DIRECTION_REFCLK_LANE  UPHY14_TRX_ANAREG_TOP_150.BF.CLK_DIRECTION_REFCLK_LANE

// 0x97	UPHY14_TRX_ANAREG_TOP_151		Analog Register 151
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t TXDCCCAL_PDIV_EN_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t TXDCCCAL_PDIV_CNT_LANE_5_0               : 6;	/*  [7:2]     r/w 6'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_151_t;
__xdata __at( 0x25c ) volatile UPHY14_TRX_ANAREG_TOP_151_t UPHY14_TRX_ANAREG_TOP_151;
#define reg_TXDCCCAL_PDIV_EN_LANE  UPHY14_TRX_ANAREG_TOP_151.BF.TXDCCCAL_PDIV_EN_LANE
#define reg_TXDCCCAL_PDIV_CNT_LANE_5_0  UPHY14_TRX_ANAREG_TOP_151.BF.TXDCCCAL_PDIV_CNT_LANE_5_0

// 0x98	UPHY14_TRX_ANAREG_TOP_152		Analog Register 152
typedef union {
	struct {
		uint8_t ANA_RSVD7_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_152_t;
__xdata __at( 0x260 ) volatile UPHY14_TRX_ANAREG_TOP_152_t UPHY14_TRX_ANAREG_TOP_152;
#define reg_ANA_RSVD7_LANE_7_0  UPHY14_TRX_ANAREG_TOP_152.BF.ANA_RSVD7_LANE_7_0

// 0x99	UPHY14_TRX_ANAREG_TOP_153		Analog Register 153
typedef union {
	struct {
		uint8_t RXCLK_2X_EN_LANE                         : 1;	/*      0     r/w 1'b0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RX_PULSE_CKFW_LANE                       : 1;	/*      2     r/w 1'b0*/
		uint8_t CLK_RXACCAP_SEL_LANE_1_0                 : 2;	/*  [4:3]     r/w 2'h2*/
		uint8_t RX_PULSE_SHORTB_LANE                     : 1;	/*      5     r/w 1'b1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w 1'h1*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_153_t;
__xdata __at( 0x264 ) volatile UPHY14_TRX_ANAREG_TOP_153_t UPHY14_TRX_ANAREG_TOP_153;
#define reg_RXCLK_2X_EN_LANE  UPHY14_TRX_ANAREG_TOP_153.BF.RXCLK_2X_EN_LANE
#define reg_RX_PULSE_CKFW_LANE  UPHY14_TRX_ANAREG_TOP_153.BF.RX_PULSE_CKFW_LANE
#define reg_CLK_RXACCAP_SEL_LANE_1_0  UPHY14_TRX_ANAREG_TOP_153.BF.CLK_RXACCAP_SEL_LANE_1_0
#define reg_RX_PULSE_SHORTB_LANE  UPHY14_TRX_ANAREG_TOP_153.BF.RX_PULSE_SHORTB_LANE

// 0x9a	UPHY14_TRX_ANAREG_TOP_154		Analog Register 154
typedef union {
	struct {
		uint8_t ANA_RSVD5_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_154_t;
__xdata __at( 0x268 ) volatile UPHY14_TRX_ANAREG_TOP_154_t UPHY14_TRX_ANAREG_TOP_154;
#define reg_ANA_RSVD5_LANE_7_0  UPHY14_TRX_ANAREG_TOP_154.BF.ANA_RSVD5_LANE_7_0

// 0x9b	UPHY14_TRX_ANAREG_TOP_155		Analog Register 155
typedef union {
	struct {
		uint8_t ANA_RSVD4_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_TOP_155_t;
__xdata __at( 0x26c ) volatile UPHY14_TRX_ANAREG_TOP_155_t UPHY14_TRX_ANAREG_TOP_155;
#define reg_ANA_RSVD4_LANE_7_0  UPHY14_TRX_ANAREG_TOP_155.BF.ANA_RSVD4_LANE_7_0

#endif
