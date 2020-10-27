#ifndef PHY_REG_C_XDAT_SPD_LANE_H
#define PHY_REG_C_XDAT_SPD_LANE_H



// 0x0104	AUTOSPEED92		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_GEN0_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_GEN0_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_GEN0_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_GEN0_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED92_t;
__xdata __at( 0x6104 ) volatile AUTOSPEED92_t AUTOSPEED92;
#define reg_PLL_RATE_SEL_TX_GEN0_LANE_3_0  AUTOSPEED92.BF.PLL_RATE_SEL_TX_GEN0_LANE_3_0
#define reg_TX_CK_SEL_GEN0_LANE  AUTOSPEED92.BF.TX_CK_SEL_GEN0_LANE
#define reg_TX_VDDCAL_RATE_EN_GEN0_LANE  AUTOSPEED92.BF.TX_VDDCAL_RATE_EN_GEN0_LANE
#define reg_TX_SPEED_DIV_GEN0_LANE_2_0  AUTOSPEED92.BF.TX_SPEED_DIV_GEN0_LANE_2_0

// 0x0108	AUTOSPEED93		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_GEN0_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_GEN0_LANE_2_0      : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_GEN0_LANE              : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_GEN0_LANE            : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED93_t;
__xdata __at( 0x6108 ) volatile AUTOSPEED93_t AUTOSPEED93;
#define reg_TX_REG_SPEED_TRK_CLK_GEN0_LANE_2_0  AUTOSPEED93.BF.TX_REG_SPEED_TRK_CLK_GEN0_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_GEN0_LANE_2_0  AUTOSPEED93.BF.TX_REG_SPEED_TRK_DATA_GEN0_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_GEN0_LANE  AUTOSPEED93.BF.TX_EM_CTRL_REG_EN_GEN0_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_GEN0_LANE  AUTOSPEED93.BF.TX_EM_CTRL_PIPE_SEL_GEN0_LANE

// 0x010c	AUTOSPEED94		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_GEN0_LANE                   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_GEN0_LANE_3_0             : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_GEN0_LANE                    : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_GEN0_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED94_t;
__xdata __at( 0x610c ) volatile AUTOSPEED94_t AUTOSPEED94;
#define reg_TX_EM_PRE_EN_GEN0_LANE  AUTOSPEED94.BF.TX_EM_PRE_EN_GEN0_LANE
#define reg_TX_EM_PRE_CTRL_GEN0_LANE_3_0  AUTOSPEED94.BF.TX_EM_PRE_CTRL_GEN0_LANE_3_0
#define reg_TX_EM_PO_EN_GEN0_LANE  AUTOSPEED94.BF.TX_EM_PO_EN_GEN0_LANE
#define reg_TX_EM_PO_CTRL_GEN0_LANE_3_0  AUTOSPEED94.BF.TX_EM_PO_CTRL_GEN0_LANE_3_0

// 0x0110	AUTOSPEED95		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_GEN0_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_GEN0_LANE_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_GEN0_LANE_1_0                  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_GEN0_LANE_1_0           : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED95_t;
__xdata __at( 0x6110 ) volatile AUTOSPEED95_t AUTOSPEED95;
#define reg_SLEWRATE_EN_GEN0_LANE_1_0  AUTOSPEED95.BF.SLEWRATE_EN_GEN0_LANE_1_0
#define reg_SLEWCTRL1_GEN0_LANE_1_0  AUTOSPEED95.BF.SLEWCTRL1_GEN0_LANE_1_0
#define reg_SLEWCTRL0_GEN0_LANE_1_0  AUTOSPEED95.BF.SLEWCTRL0_GEN0_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_GEN0_LANE_1_0  AUTOSPEED95.BF.TX_TRAIN_PAT_SEL_GEN0_LANE_1_0

// 0x0114	AUTOSPEED96		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_GEN0_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h88*/
		uint8_t TRAIN_PAT_NUM_GEN0_LANE_8                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_GEN0_LANE            : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_GEN0_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED96_t;
__xdata __at( 0x6114 ) volatile AUTOSPEED96_t AUTOSPEED96;
#define reg_TRAIN_PAT_NUM_GEN0_LANE_7_0  AUTOSPEED96.BF.TRAIN_PAT_NUM_GEN0_LANE_7_0
#define reg_TRAIN_PAT_NUM_GEN0_LANE_8  AUTOSPEED96.BF.TRAIN_PAT_NUM_GEN0_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_GEN0_LANE  AUTOSPEED96.BF.TX_TRAIN_PAT_TOGGLE_GEN0_LANE
#define reg_PACKET_SYNC_DIS_GEN0_LANE  AUTOSPEED96.BF.PACKET_SYNC_DIS_GEN0_LANE

// 0x0118	AUTOSPEED97		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_GEN0_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_GEN0_LANE_3_0            : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_GEN0_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_GEN0_LANE              : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED97_t;
__xdata __at( 0x6118 ) volatile AUTOSPEED97_t AUTOSPEED97;
#define reg_SYNC_DET_DIS_GEN0_LANE  AUTOSPEED97.BF.SYNC_DET_DIS_GEN0_LANE
#define reg_PLL_RATE_SEL_RX_GEN0_LANE_3_0  AUTOSPEED97.BF.PLL_RATE_SEL_RX_GEN0_LANE_3_0
#define reg_RX_CK_SEL_GEN0_LANE  AUTOSPEED97.BF.RX_CK_SEL_GEN0_LANE
#define reg_RX_VDDCAL_RATE_EN_GEN0_LANE  AUTOSPEED97.BF.RX_VDDCAL_RATE_EN_GEN0_LANE

// 0x011c	AUTOSPEED98		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_GEN0_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_GEN0_LANE_2_0            : 3;	/* [10:8]     r/w 3'h4*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_GEN0_LANE_3_0                      : 4;	/*[19:16]     r/w 4'he*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_GEN0_LANE_1_0                      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED98_t;
__xdata __at( 0x611c ) volatile AUTOSPEED98_t AUTOSPEED98;
#define reg_RX_SPEED_DIV_GEN0_LANE_2_0  AUTOSPEED98.BF.RX_SPEED_DIV_GEN0_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_GEN0_LANE_2_0  AUTOSPEED98.BF.DTL_CLK_SPEEDUP_GEN0_LANE_2_0
#define reg_INTPI_GEN0_LANE_3_0  AUTOSPEED98.BF.INTPI_GEN0_LANE_3_0
#define reg_INTPR_GEN0_LANE_1_0  AUTOSPEED98.BF.INTPR_GEN0_LANE_1_0

// 0x0120	AUTOSPEED99		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_GEN0_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_GEN0_LANE_2_0           : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_GEN0_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_GEN0_LANE_2_0  : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED99_t;
__xdata __at( 0x6120 ) volatile AUTOSPEED99_t AUTOSPEED99;
#define reg_DLL_FREQ_SEL_GEN0_LANE_2_0  AUTOSPEED99.BF.DLL_FREQ_SEL_GEN0_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_GEN0_LANE_2_0  AUTOSPEED99.BF.EOM_DLL_FREQ_SEL_GEN0_LANE_2_0
#define reg_ALIGN90_8G_EN_GEN0_LANE  AUTOSPEED99.BF.ALIGN90_8G_EN_GEN0_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_GEN0_LANE_2_0  AUTOSPEED99.BF.RX_REG0P9_SPEED_TRACK_CLK_GEN0_LANE_2_0

// 0x0124	AUTOSPEED100		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN0_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_GEN0_LANE_2_0 : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_GEN0_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_GEN0_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED100_t;
__xdata __at( 0x6124 ) volatile AUTOSPEED100_t AUTOSPEED100;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN0_LANE  AUTOSPEED100.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN0_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_GEN0_LANE_2_0  AUTOSPEED100.BF.RX_REG0P9_SPEED_TRACK_DATA_GEN0_LANE_2_0
#define reg_RX_SELMUFI_GEN0_LANE_2_0  AUTOSPEED100.BF.RX_SELMUFI_GEN0_LANE_2_0
#define reg_RX_SELMUFF_GEN0_LANE_2_0  AUTOSPEED100.BF.RX_SELMUFF_GEN0_LANE_2_0

// 0x0128	AUTOSPEED101		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_GEN0_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_GEN0_LANE_3_0                : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_GEN0_LANE_1_0               : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_GEN0_LANE_7_0         : 8;	/*[31:24]     r/w 8'h97*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED101_t;
__xdata __at( 0x6128 ) volatile AUTOSPEED101_t AUTOSPEED101;
#define reg_REG_SELMUPI_GEN0_LANE_3_0  AUTOSPEED101.BF.REG_SELMUPI_GEN0_LANE_3_0
#define reg_REG_SELMUPF_GEN0_LANE_3_0  AUTOSPEED101.BF.REG_SELMUPF_GEN0_LANE_3_0
#define reg_DTL_CLK_MODE_GEN0_LANE_1_0  AUTOSPEED101.BF.DTL_CLK_MODE_GEN0_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_GEN0_LANE_7_0  AUTOSPEED101.BF.RX_FOFFSET_EXTRA_M_GEN0_LANE_7_0

// 0x012c	AUTOSPEED102		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_GEN0_LANE_13_8        : 6;	/*  [5:0]     r/w 6'h1d*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_GEN0_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_GEN0_LANE_9_8               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_GEN0_LANE                     : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED102_t;
__xdata __at( 0x612c ) volatile AUTOSPEED102_t AUTOSPEED102;
#define reg_RX_FOFFSET_EXTRA_M_GEN0_LANE_13_8  AUTOSPEED102.BF.RX_FOFFSET_EXTRA_M_GEN0_LANE_13_8
#define reg_INIT_RXFOFFS_GEN0_LANE_7_0  AUTOSPEED102.BF.INIT_RXFOFFS_GEN0_LANE_7_0
#define reg_INIT_RXFOFFS_GEN0_LANE_9_8  AUTOSPEED102.BF.INIT_RXFOFFS_GEN0_LANE_9_8
#define reg_PU_F1P_D_E_GEN0_LANE  AUTOSPEED102.BF.PU_F1P_D_E_GEN0_LANE

// 0x0130	AUTOSPEED103		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_GEN0_LANE                     : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_GEN0_LANE                     : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_GEN0_LANE                     : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_GEN0_LANE                     : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED103_t;
__xdata __at( 0x6130 ) volatile AUTOSPEED103_t AUTOSPEED103;
#define reg_PU_F1N_D_E_GEN0_LANE  AUTOSPEED103.BF.PU_F1N_D_E_GEN0_LANE
#define reg_PU_F1P_S_E_GEN0_LANE  AUTOSPEED103.BF.PU_F1P_S_E_GEN0_LANE
#define reg_PU_F1N_S_E_GEN0_LANE  AUTOSPEED103.BF.PU_F1N_S_E_GEN0_LANE
#define reg_PU_F1P_D_O_GEN0_LANE  AUTOSPEED103.BF.PU_F1P_D_O_GEN0_LANE

// 0x0134	AUTOSPEED104		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_GEN0_LANE                     : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_GEN0_LANE                     : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_GEN0_LANE                     : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_GEN0_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED104_t;
__xdata __at( 0x6134 ) volatile AUTOSPEED104_t AUTOSPEED104;
#define reg_PU_F1N_D_O_GEN0_LANE  AUTOSPEED104.BF.PU_F1N_D_O_GEN0_LANE
#define reg_PU_F1P_S_O_GEN0_LANE  AUTOSPEED104.BF.PU_F1P_S_O_GEN0_LANE
#define reg_PU_F1N_S_O_GEN0_LANE  AUTOSPEED104.BF.PU_F1N_S_O_GEN0_LANE
#define reg_PATH_DISABLE_EDGE_GEN0_LANE  AUTOSPEED104.BF.PATH_DISABLE_EDGE_GEN0_LANE

// 0x0138	AUTOSPEED105		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_GEN0_LANE                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_GEN0_LANE                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_GEN0_LANE                   : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_GEN0_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED105_t;
__xdata __at( 0x6138 ) volatile AUTOSPEED105_t AUTOSPEED105;
#define reg_DFE_F1_POL_EN_D_GEN0_LANE  AUTOSPEED105.BF.DFE_F1_POL_EN_D_GEN0_LANE
#define reg_DFE_F1_POL_EN_S_GEN0_LANE  AUTOSPEED105.BF.DFE_F1_POL_EN_S_GEN0_LANE
#define reg_DFE_F1_POL_D_GEN0_LANE  AUTOSPEED105.BF.DFE_F1_POL_D_GEN0_LANE
#define reg_DFE_F1_POL_S_GEN0_LANE  AUTOSPEED105.BF.DFE_F1_POL_S_GEN0_LANE

// 0x013c	AUTOSPEED106		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN0_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN0_LANE : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN0_LANE  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN0_LANE  : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED106_t;
__xdata __at( 0x613c ) volatile AUTOSPEED106_t AUTOSPEED106;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN0_LANE  AUTOSPEED106.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN0_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN0_LANE  AUTOSPEED106.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN0_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN0_LANE  AUTOSPEED106.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN0_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN0_LANE  AUTOSPEED106.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN0_LANE

// 0x0140	AUTOSPEED107		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_GEN0_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_GEN0_LANE                    : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_GEN0_LANE_1_0   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_GEN0_LANE_3_0              : 4;	/*[27:24]     r/w 4'hd*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED107_t;
__xdata __at( 0x6140 ) volatile AUTOSPEED107_t AUTOSPEED107;
#define reg_REG_DFE_FULL_RATE_MODE_GEN0_LANE  AUTOSPEED107.BF.REG_DFE_FULL_RATE_MODE_GEN0_LANE
#define reg_REG_DFE_DIS_GEN0_LANE  AUTOSPEED107.BF.REG_DFE_DIS_GEN0_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_GEN0_LANE_1_0  AUTOSPEED107.BF.REG_DFE_TAP_SETTLE_SCALE_GEN0_LANE_1_0
#define reg_FFE_DATA_RATE_GEN0_LANE_3_0  AUTOSPEED107.BF.FFE_DATA_RATE_GEN0_LANE_3_0

// 0x0144	AUTOSPEED108		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_GEN0_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h25*/
		uint8_t RXDLL_TEMP_B_GEN0_LANE_7_0               : 8;	/* [15:8]     r/w 8'h9d*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED108_t;
__xdata __at( 0x6144 ) volatile AUTOSPEED108_t AUTOSPEED108;
#define reg_RXDLL_TEMP_A_GEN0_LANE_7_0  AUTOSPEED108.BF.RXDLL_TEMP_A_GEN0_LANE_7_0
#define reg_RXDLL_TEMP_B_GEN0_LANE_7_0  AUTOSPEED108.BF.RXDLL_TEMP_B_GEN0_LANE_7_0

// 0x0148	AUTOSPEED109		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_GEN1_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_GEN1_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_GEN1_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_GEN1_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED109_t;
__xdata __at( 0x6148 ) volatile AUTOSPEED109_t AUTOSPEED109;
#define reg_PLL_RATE_SEL_TX_GEN1_LANE_3_0  AUTOSPEED109.BF.PLL_RATE_SEL_TX_GEN1_LANE_3_0
#define reg_TX_CK_SEL_GEN1_LANE  AUTOSPEED109.BF.TX_CK_SEL_GEN1_LANE
#define reg_TX_VDDCAL_RATE_EN_GEN1_LANE  AUTOSPEED109.BF.TX_VDDCAL_RATE_EN_GEN1_LANE
#define reg_TX_SPEED_DIV_GEN1_LANE_2_0  AUTOSPEED109.BF.TX_SPEED_DIV_GEN1_LANE_2_0

// 0x014c	AUTOSPEED110		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_GEN1_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_GEN1_LANE_2_0      : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_GEN1_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_GEN1_LANE            : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED110_t;
__xdata __at( 0x614c ) volatile AUTOSPEED110_t AUTOSPEED110;
#define reg_TX_REG_SPEED_TRK_CLK_GEN1_LANE_2_0  AUTOSPEED110.BF.TX_REG_SPEED_TRK_CLK_GEN1_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_GEN1_LANE_2_0  AUTOSPEED110.BF.TX_REG_SPEED_TRK_DATA_GEN1_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_GEN1_LANE  AUTOSPEED110.BF.TX_EM_CTRL_REG_EN_GEN1_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_GEN1_LANE  AUTOSPEED110.BF.TX_EM_CTRL_PIPE_SEL_GEN1_LANE

// 0x0150	AUTOSPEED111		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_GEN1_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_GEN1_LANE_3_0             : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_GEN1_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_GEN1_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED111_t;
__xdata __at( 0x6150 ) volatile AUTOSPEED111_t AUTOSPEED111;
#define reg_TX_EM_PRE_EN_GEN1_LANE  AUTOSPEED111.BF.TX_EM_PRE_EN_GEN1_LANE
#define reg_TX_EM_PRE_CTRL_GEN1_LANE_3_0  AUTOSPEED111.BF.TX_EM_PRE_CTRL_GEN1_LANE_3_0
#define reg_TX_EM_PO_EN_GEN1_LANE  AUTOSPEED111.BF.TX_EM_PO_EN_GEN1_LANE
#define reg_TX_EM_PO_CTRL_GEN1_LANE_3_0  AUTOSPEED111.BF.TX_EM_PO_CTRL_GEN1_LANE_3_0

// 0x0154	AUTOSPEED112		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_GEN1_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_GEN1_LANE_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_GEN1_LANE_1_0                  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_GEN1_LANE_1_0           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED112_t;
__xdata __at( 0x6154 ) volatile AUTOSPEED112_t AUTOSPEED112;
#define reg_SLEWRATE_EN_GEN1_LANE_1_0  AUTOSPEED112.BF.SLEWRATE_EN_GEN1_LANE_1_0
#define reg_SLEWCTRL1_GEN1_LANE_1_0  AUTOSPEED112.BF.SLEWCTRL1_GEN1_LANE_1_0
#define reg_SLEWCTRL0_GEN1_LANE_1_0  AUTOSPEED112.BF.SLEWCTRL0_GEN1_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_GEN1_LANE_1_0  AUTOSPEED112.BF.TX_TRAIN_PAT_SEL_GEN1_LANE_1_0

// 0x0158	AUTOSPEED113		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_GEN1_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_PAT_NUM_GEN1_LANE_8                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_GEN1_LANE            : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_GEN1_LANE                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED113_t;
__xdata __at( 0x6158 ) volatile AUTOSPEED113_t AUTOSPEED113;
#define reg_TRAIN_PAT_NUM_GEN1_LANE_7_0  AUTOSPEED113.BF.TRAIN_PAT_NUM_GEN1_LANE_7_0
#define reg_TRAIN_PAT_NUM_GEN1_LANE_8  AUTOSPEED113.BF.TRAIN_PAT_NUM_GEN1_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_GEN1_LANE  AUTOSPEED113.BF.TX_TRAIN_PAT_TOGGLE_GEN1_LANE
#define reg_PACKET_SYNC_DIS_GEN1_LANE  AUTOSPEED113.BF.PACKET_SYNC_DIS_GEN1_LANE

// 0x015c	AUTOSPEED114		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_GEN1_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_GEN1_LANE_3_0            : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_GEN1_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_GEN1_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED114_t;
__xdata __at( 0x615c ) volatile AUTOSPEED114_t AUTOSPEED114;
#define reg_SYNC_DET_DIS_GEN1_LANE  AUTOSPEED114.BF.SYNC_DET_DIS_GEN1_LANE
#define reg_PLL_RATE_SEL_RX_GEN1_LANE_3_0  AUTOSPEED114.BF.PLL_RATE_SEL_RX_GEN1_LANE_3_0
#define reg_RX_CK_SEL_GEN1_LANE  AUTOSPEED114.BF.RX_CK_SEL_GEN1_LANE
#define reg_RX_VDDCAL_RATE_EN_GEN1_LANE  AUTOSPEED114.BF.RX_VDDCAL_RATE_EN_GEN1_LANE

// 0x0160	AUTOSPEED115		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_GEN1_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_GEN1_LANE_2_0            : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_GEN1_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_GEN1_LANE_1_0                      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED115_t;
__xdata __at( 0x6160 ) volatile AUTOSPEED115_t AUTOSPEED115;
#define reg_RX_SPEED_DIV_GEN1_LANE_2_0  AUTOSPEED115.BF.RX_SPEED_DIV_GEN1_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_GEN1_LANE_2_0  AUTOSPEED115.BF.DTL_CLK_SPEEDUP_GEN1_LANE_2_0
#define reg_INTPI_GEN1_LANE_3_0  AUTOSPEED115.BF.INTPI_GEN1_LANE_3_0
#define reg_INTPR_GEN1_LANE_1_0  AUTOSPEED115.BF.INTPR_GEN1_LANE_1_0

// 0x0164	AUTOSPEED116		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_GEN1_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_GEN1_LANE_2_0           : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_GEN1_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_GEN1_LANE_2_0  : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED116_t;
__xdata __at( 0x6164 ) volatile AUTOSPEED116_t AUTOSPEED116;
#define reg_DLL_FREQ_SEL_GEN1_LANE_2_0  AUTOSPEED116.BF.DLL_FREQ_SEL_GEN1_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_GEN1_LANE_2_0  AUTOSPEED116.BF.EOM_DLL_FREQ_SEL_GEN1_LANE_2_0
#define reg_ALIGN90_8G_EN_GEN1_LANE  AUTOSPEED116.BF.ALIGN90_8G_EN_GEN1_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_GEN1_LANE_2_0  AUTOSPEED116.BF.RX_REG0P9_SPEED_TRACK_CLK_GEN1_LANE_2_0

// 0x0168	AUTOSPEED117		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN1_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_GEN1_LANE_2_0 : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_GEN1_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_GEN1_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED117_t;
__xdata __at( 0x6168 ) volatile AUTOSPEED117_t AUTOSPEED117;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN1_LANE  AUTOSPEED117.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN1_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_GEN1_LANE_2_0  AUTOSPEED117.BF.RX_REG0P9_SPEED_TRACK_DATA_GEN1_LANE_2_0
#define reg_RX_SELMUFI_GEN1_LANE_2_0  AUTOSPEED117.BF.RX_SELMUFI_GEN1_LANE_2_0
#define reg_RX_SELMUFF_GEN1_LANE_2_0  AUTOSPEED117.BF.RX_SELMUFF_GEN1_LANE_2_0

// 0x016c	AUTOSPEED118		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_GEN1_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_GEN1_LANE_3_0                : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_GEN1_LANE_1_0               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_GEN1_LANE_7_0         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED118_t;
__xdata __at( 0x616c ) volatile AUTOSPEED118_t AUTOSPEED118;
#define reg_REG_SELMUPI_GEN1_LANE_3_0  AUTOSPEED118.BF.REG_SELMUPI_GEN1_LANE_3_0
#define reg_REG_SELMUPF_GEN1_LANE_3_0  AUTOSPEED118.BF.REG_SELMUPF_GEN1_LANE_3_0
#define reg_DTL_CLK_MODE_GEN1_LANE_1_0  AUTOSPEED118.BF.DTL_CLK_MODE_GEN1_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_GEN1_LANE_7_0  AUTOSPEED118.BF.RX_FOFFSET_EXTRA_M_GEN1_LANE_7_0

// 0x0170	AUTOSPEED119		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_GEN1_LANE_13_8        : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_GEN1_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_GEN1_LANE_9_8               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_GEN1_LANE                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED119_t;
__xdata __at( 0x6170 ) volatile AUTOSPEED119_t AUTOSPEED119;
#define reg_RX_FOFFSET_EXTRA_M_GEN1_LANE_13_8  AUTOSPEED119.BF.RX_FOFFSET_EXTRA_M_GEN1_LANE_13_8
#define reg_INIT_RXFOFFS_GEN1_LANE_7_0  AUTOSPEED119.BF.INIT_RXFOFFS_GEN1_LANE_7_0
#define reg_INIT_RXFOFFS_GEN1_LANE_9_8  AUTOSPEED119.BF.INIT_RXFOFFS_GEN1_LANE_9_8
#define reg_PU_F1P_D_E_GEN1_LANE  AUTOSPEED119.BF.PU_F1P_D_E_GEN1_LANE

// 0x0174	AUTOSPEED120		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_GEN1_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_GEN1_LANE                     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_GEN1_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_GEN1_LANE                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED120_t;
__xdata __at( 0x6174 ) volatile AUTOSPEED120_t AUTOSPEED120;
#define reg_PU_F1N_D_E_GEN1_LANE  AUTOSPEED120.BF.PU_F1N_D_E_GEN1_LANE
#define reg_PU_F1P_S_E_GEN1_LANE  AUTOSPEED120.BF.PU_F1P_S_E_GEN1_LANE
#define reg_PU_F1N_S_E_GEN1_LANE  AUTOSPEED120.BF.PU_F1N_S_E_GEN1_LANE
#define reg_PU_F1P_D_O_GEN1_LANE  AUTOSPEED120.BF.PU_F1P_D_O_GEN1_LANE

// 0x0178	AUTOSPEED121		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_GEN1_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_GEN1_LANE                     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_GEN1_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_GEN1_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED121_t;
__xdata __at( 0x6178 ) volatile AUTOSPEED121_t AUTOSPEED121;
#define reg_PU_F1N_D_O_GEN1_LANE  AUTOSPEED121.BF.PU_F1N_D_O_GEN1_LANE
#define reg_PU_F1P_S_O_GEN1_LANE  AUTOSPEED121.BF.PU_F1P_S_O_GEN1_LANE
#define reg_PU_F1N_S_O_GEN1_LANE  AUTOSPEED121.BF.PU_F1N_S_O_GEN1_LANE
#define reg_PATH_DISABLE_EDGE_GEN1_LANE  AUTOSPEED121.BF.PATH_DISABLE_EDGE_GEN1_LANE

// 0x017c	AUTOSPEED122		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_GEN1_LANE                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_GEN1_LANE                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_GEN1_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_GEN1_LANE                   : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED122_t;
__xdata __at( 0x617c ) volatile AUTOSPEED122_t AUTOSPEED122;
#define reg_DFE_F1_POL_EN_D_GEN1_LANE  AUTOSPEED122.BF.DFE_F1_POL_EN_D_GEN1_LANE
#define reg_DFE_F1_POL_EN_S_GEN1_LANE  AUTOSPEED122.BF.DFE_F1_POL_EN_S_GEN1_LANE
#define reg_DFE_F1_POL_D_GEN1_LANE  AUTOSPEED122.BF.DFE_F1_POL_D_GEN1_LANE
#define reg_DFE_F1_POL_S_GEN1_LANE  AUTOSPEED122.BF.DFE_F1_POL_S_GEN1_LANE

// 0x0180	AUTOSPEED123		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN1_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN1_LANE : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN1_LANE  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN1_LANE  : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED123_t;
__xdata __at( 0x6180 ) volatile AUTOSPEED123_t AUTOSPEED123;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN1_LANE  AUTOSPEED123.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN1_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN1_LANE  AUTOSPEED123.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN1_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN1_LANE  AUTOSPEED123.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN1_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN1_LANE  AUTOSPEED123.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN1_LANE

// 0x0184	AUTOSPEED124		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_GEN1_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_GEN1_LANE                    : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_GEN1_LANE_1_0   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_GEN1_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED124_t;
__xdata __at( 0x6184 ) volatile AUTOSPEED124_t AUTOSPEED124;
#define reg_REG_DFE_FULL_RATE_MODE_GEN1_LANE  AUTOSPEED124.BF.REG_DFE_FULL_RATE_MODE_GEN1_LANE
#define reg_REG_DFE_DIS_GEN1_LANE  AUTOSPEED124.BF.REG_DFE_DIS_GEN1_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_GEN1_LANE_1_0  AUTOSPEED124.BF.REG_DFE_TAP_SETTLE_SCALE_GEN1_LANE_1_0
#define reg_FFE_DATA_RATE_GEN1_LANE_3_0  AUTOSPEED124.BF.FFE_DATA_RATE_GEN1_LANE_3_0

// 0x0188	AUTOSPEED125		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_GEN1_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RXDLL_TEMP_B_GEN1_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED125_t;
__xdata __at( 0x6188 ) volatile AUTOSPEED125_t AUTOSPEED125;
#define reg_RXDLL_TEMP_A_GEN1_LANE_7_0  AUTOSPEED125.BF.RXDLL_TEMP_A_GEN1_LANE_7_0
#define reg_RXDLL_TEMP_B_GEN1_LANE_7_0  AUTOSPEED125.BF.RXDLL_TEMP_B_GEN1_LANE_7_0

// 0x018c	AUTOSPEED126		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_GEN2_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_GEN2_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_GEN2_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_GEN2_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED126_t;
__xdata __at( 0x618c ) volatile AUTOSPEED126_t AUTOSPEED126;
#define reg_PLL_RATE_SEL_TX_GEN2_LANE_3_0  AUTOSPEED126.BF.PLL_RATE_SEL_TX_GEN2_LANE_3_0
#define reg_TX_CK_SEL_GEN2_LANE  AUTOSPEED126.BF.TX_CK_SEL_GEN2_LANE
#define reg_TX_VDDCAL_RATE_EN_GEN2_LANE  AUTOSPEED126.BF.TX_VDDCAL_RATE_EN_GEN2_LANE
#define reg_TX_SPEED_DIV_GEN2_LANE_2_0  AUTOSPEED126.BF.TX_SPEED_DIV_GEN2_LANE_2_0

// 0x0190	AUTOSPEED127		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_GEN2_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_GEN2_LANE_2_0      : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_GEN2_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_GEN2_LANE            : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED127_t;
__xdata __at( 0x6190 ) volatile AUTOSPEED127_t AUTOSPEED127;
#define reg_TX_REG_SPEED_TRK_CLK_GEN2_LANE_2_0  AUTOSPEED127.BF.TX_REG_SPEED_TRK_CLK_GEN2_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_GEN2_LANE_2_0  AUTOSPEED127.BF.TX_REG_SPEED_TRK_DATA_GEN2_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_GEN2_LANE  AUTOSPEED127.BF.TX_EM_CTRL_REG_EN_GEN2_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_GEN2_LANE  AUTOSPEED127.BF.TX_EM_CTRL_PIPE_SEL_GEN2_LANE

// 0x0194	AUTOSPEED128		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_GEN2_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_GEN2_LANE_3_0             : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_GEN2_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_GEN2_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED128_t;
__xdata __at( 0x6194 ) volatile AUTOSPEED128_t AUTOSPEED128;
#define reg_TX_EM_PRE_EN_GEN2_LANE  AUTOSPEED128.BF.TX_EM_PRE_EN_GEN2_LANE
#define reg_TX_EM_PRE_CTRL_GEN2_LANE_3_0  AUTOSPEED128.BF.TX_EM_PRE_CTRL_GEN2_LANE_3_0
#define reg_TX_EM_PO_EN_GEN2_LANE  AUTOSPEED128.BF.TX_EM_PO_EN_GEN2_LANE
#define reg_TX_EM_PO_CTRL_GEN2_LANE_3_0  AUTOSPEED128.BF.TX_EM_PO_CTRL_GEN2_LANE_3_0

// 0x0198	AUTOSPEED129		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_GEN2_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_GEN2_LANE_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_GEN2_LANE_1_0                  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_GEN2_LANE_1_0           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED129_t;
__xdata __at( 0x6198 ) volatile AUTOSPEED129_t AUTOSPEED129;
#define reg_SLEWRATE_EN_GEN2_LANE_1_0  AUTOSPEED129.BF.SLEWRATE_EN_GEN2_LANE_1_0
#define reg_SLEWCTRL1_GEN2_LANE_1_0  AUTOSPEED129.BF.SLEWCTRL1_GEN2_LANE_1_0
#define reg_SLEWCTRL0_GEN2_LANE_1_0  AUTOSPEED129.BF.SLEWCTRL0_GEN2_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_GEN2_LANE_1_0  AUTOSPEED129.BF.TX_TRAIN_PAT_SEL_GEN2_LANE_1_0

// 0x019c	AUTOSPEED130		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_GEN2_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_PAT_NUM_GEN2_LANE_8                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_GEN2_LANE            : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_GEN2_LANE                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED130_t;
__xdata __at( 0x619c ) volatile AUTOSPEED130_t AUTOSPEED130;
#define reg_TRAIN_PAT_NUM_GEN2_LANE_7_0  AUTOSPEED130.BF.TRAIN_PAT_NUM_GEN2_LANE_7_0
#define reg_TRAIN_PAT_NUM_GEN2_LANE_8  AUTOSPEED130.BF.TRAIN_PAT_NUM_GEN2_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_GEN2_LANE  AUTOSPEED130.BF.TX_TRAIN_PAT_TOGGLE_GEN2_LANE
#define reg_PACKET_SYNC_DIS_GEN2_LANE  AUTOSPEED130.BF.PACKET_SYNC_DIS_GEN2_LANE

// 0x01a0	AUTOSPEED131		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_GEN2_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_GEN2_LANE_3_0            : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_GEN2_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_GEN2_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED131_t;
__xdata __at( 0x61a0 ) volatile AUTOSPEED131_t AUTOSPEED131;
#define reg_SYNC_DET_DIS_GEN2_LANE  AUTOSPEED131.BF.SYNC_DET_DIS_GEN2_LANE
#define reg_PLL_RATE_SEL_RX_GEN2_LANE_3_0  AUTOSPEED131.BF.PLL_RATE_SEL_RX_GEN2_LANE_3_0
#define reg_RX_CK_SEL_GEN2_LANE  AUTOSPEED131.BF.RX_CK_SEL_GEN2_LANE
#define reg_RX_VDDCAL_RATE_EN_GEN2_LANE  AUTOSPEED131.BF.RX_VDDCAL_RATE_EN_GEN2_LANE

// 0x01a4	AUTOSPEED132		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_GEN2_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_GEN2_LANE_2_0            : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_GEN2_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_GEN2_LANE_1_0                      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED132_t;
__xdata __at( 0x61a4 ) volatile AUTOSPEED132_t AUTOSPEED132;
#define reg_RX_SPEED_DIV_GEN2_LANE_2_0  AUTOSPEED132.BF.RX_SPEED_DIV_GEN2_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_GEN2_LANE_2_0  AUTOSPEED132.BF.DTL_CLK_SPEEDUP_GEN2_LANE_2_0
#define reg_INTPI_GEN2_LANE_3_0  AUTOSPEED132.BF.INTPI_GEN2_LANE_3_0
#define reg_INTPR_GEN2_LANE_1_0  AUTOSPEED132.BF.INTPR_GEN2_LANE_1_0

// 0x01a8	AUTOSPEED133		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_GEN2_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_GEN2_LANE_2_0           : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_GEN2_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_GEN2_LANE_2_0  : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED133_t;
__xdata __at( 0x61a8 ) volatile AUTOSPEED133_t AUTOSPEED133;
#define reg_DLL_FREQ_SEL_GEN2_LANE_2_0  AUTOSPEED133.BF.DLL_FREQ_SEL_GEN2_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_GEN2_LANE_2_0  AUTOSPEED133.BF.EOM_DLL_FREQ_SEL_GEN2_LANE_2_0
#define reg_ALIGN90_8G_EN_GEN2_LANE  AUTOSPEED133.BF.ALIGN90_8G_EN_GEN2_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_GEN2_LANE_2_0  AUTOSPEED133.BF.RX_REG0P9_SPEED_TRACK_CLK_GEN2_LANE_2_0

// 0x01ac	AUTOSPEED134		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN2_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_GEN2_LANE_2_0 : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_GEN2_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_GEN2_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED134_t;
__xdata __at( 0x61ac ) volatile AUTOSPEED134_t AUTOSPEED134;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN2_LANE  AUTOSPEED134.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN2_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_GEN2_LANE_2_0  AUTOSPEED134.BF.RX_REG0P9_SPEED_TRACK_DATA_GEN2_LANE_2_0
#define reg_RX_SELMUFI_GEN2_LANE_2_0  AUTOSPEED134.BF.RX_SELMUFI_GEN2_LANE_2_0
#define reg_RX_SELMUFF_GEN2_LANE_2_0  AUTOSPEED134.BF.RX_SELMUFF_GEN2_LANE_2_0

// 0x01b0	AUTOSPEED135		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_GEN2_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_GEN2_LANE_3_0                : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_GEN2_LANE_1_0               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_GEN2_LANE_7_0         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED135_t;
__xdata __at( 0x61b0 ) volatile AUTOSPEED135_t AUTOSPEED135;
#define reg_REG_SELMUPI_GEN2_LANE_3_0  AUTOSPEED135.BF.REG_SELMUPI_GEN2_LANE_3_0
#define reg_REG_SELMUPF_GEN2_LANE_3_0  AUTOSPEED135.BF.REG_SELMUPF_GEN2_LANE_3_0
#define reg_DTL_CLK_MODE_GEN2_LANE_1_0  AUTOSPEED135.BF.DTL_CLK_MODE_GEN2_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_GEN2_LANE_7_0  AUTOSPEED135.BF.RX_FOFFSET_EXTRA_M_GEN2_LANE_7_0

// 0x01b4	AUTOSPEED136		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_GEN2_LANE_13_8        : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_GEN2_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_GEN2_LANE_9_8               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_GEN2_LANE                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED136_t;
__xdata __at( 0x61b4 ) volatile AUTOSPEED136_t AUTOSPEED136;
#define reg_RX_FOFFSET_EXTRA_M_GEN2_LANE_13_8  AUTOSPEED136.BF.RX_FOFFSET_EXTRA_M_GEN2_LANE_13_8
#define reg_INIT_RXFOFFS_GEN2_LANE_7_0  AUTOSPEED136.BF.INIT_RXFOFFS_GEN2_LANE_7_0
#define reg_INIT_RXFOFFS_GEN2_LANE_9_8  AUTOSPEED136.BF.INIT_RXFOFFS_GEN2_LANE_9_8
#define reg_PU_F1P_D_E_GEN2_LANE  AUTOSPEED136.BF.PU_F1P_D_E_GEN2_LANE

// 0x01b8	AUTOSPEED137		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_GEN2_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_GEN2_LANE                     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_GEN2_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_GEN2_LANE                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED137_t;
__xdata __at( 0x61b8 ) volatile AUTOSPEED137_t AUTOSPEED137;
#define reg_PU_F1N_D_E_GEN2_LANE  AUTOSPEED137.BF.PU_F1N_D_E_GEN2_LANE
#define reg_PU_F1P_S_E_GEN2_LANE  AUTOSPEED137.BF.PU_F1P_S_E_GEN2_LANE
#define reg_PU_F1N_S_E_GEN2_LANE  AUTOSPEED137.BF.PU_F1N_S_E_GEN2_LANE
#define reg_PU_F1P_D_O_GEN2_LANE  AUTOSPEED137.BF.PU_F1P_D_O_GEN2_LANE

// 0x01bc	AUTOSPEED138		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_GEN2_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_GEN2_LANE                     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_GEN2_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_GEN2_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED138_t;
__xdata __at( 0x61bc ) volatile AUTOSPEED138_t AUTOSPEED138;
#define reg_PU_F1N_D_O_GEN2_LANE  AUTOSPEED138.BF.PU_F1N_D_O_GEN2_LANE
#define reg_PU_F1P_S_O_GEN2_LANE  AUTOSPEED138.BF.PU_F1P_S_O_GEN2_LANE
#define reg_PU_F1N_S_O_GEN2_LANE  AUTOSPEED138.BF.PU_F1N_S_O_GEN2_LANE
#define reg_PATH_DISABLE_EDGE_GEN2_LANE  AUTOSPEED138.BF.PATH_DISABLE_EDGE_GEN2_LANE

// 0x01c0	AUTOSPEED139		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_GEN2_LANE                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_GEN2_LANE                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_GEN2_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_GEN2_LANE                   : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED139_t;
__xdata __at( 0x61c0 ) volatile AUTOSPEED139_t AUTOSPEED139;
#define reg_DFE_F1_POL_EN_D_GEN2_LANE  AUTOSPEED139.BF.DFE_F1_POL_EN_D_GEN2_LANE
#define reg_DFE_F1_POL_EN_S_GEN2_LANE  AUTOSPEED139.BF.DFE_F1_POL_EN_S_GEN2_LANE
#define reg_DFE_F1_POL_D_GEN2_LANE  AUTOSPEED139.BF.DFE_F1_POL_D_GEN2_LANE
#define reg_DFE_F1_POL_S_GEN2_LANE  AUTOSPEED139.BF.DFE_F1_POL_S_GEN2_LANE

// 0x01c4	AUTOSPEED140		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN2_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN2_LANE : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN2_LANE  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN2_LANE  : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED140_t;
__xdata __at( 0x61c4 ) volatile AUTOSPEED140_t AUTOSPEED140;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN2_LANE  AUTOSPEED140.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN2_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN2_LANE  AUTOSPEED140.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN2_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN2_LANE  AUTOSPEED140.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN2_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN2_LANE  AUTOSPEED140.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN2_LANE

// 0x01c8	AUTOSPEED141		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_GEN2_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_GEN2_LANE                    : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_GEN2_LANE_1_0   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_GEN2_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED141_t;
__xdata __at( 0x61c8 ) volatile AUTOSPEED141_t AUTOSPEED141;
#define reg_REG_DFE_FULL_RATE_MODE_GEN2_LANE  AUTOSPEED141.BF.REG_DFE_FULL_RATE_MODE_GEN2_LANE
#define reg_REG_DFE_DIS_GEN2_LANE  AUTOSPEED141.BF.REG_DFE_DIS_GEN2_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_GEN2_LANE_1_0  AUTOSPEED141.BF.REG_DFE_TAP_SETTLE_SCALE_GEN2_LANE_1_0
#define reg_FFE_DATA_RATE_GEN2_LANE_3_0  AUTOSPEED141.BF.FFE_DATA_RATE_GEN2_LANE_3_0

// 0x01cc	AUTOSPEED142		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_GEN2_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RXDLL_TEMP_B_GEN2_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED142_t;
__xdata __at( 0x61cc ) volatile AUTOSPEED142_t AUTOSPEED142;
#define reg_RXDLL_TEMP_A_GEN2_LANE_7_0  AUTOSPEED142.BF.RXDLL_TEMP_A_GEN2_LANE_7_0
#define reg_RXDLL_TEMP_B_GEN2_LANE_7_0  AUTOSPEED142.BF.RXDLL_TEMP_B_GEN2_LANE_7_0

// 0x01d0	AUTOSPEED143		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_GEN3_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_GEN3_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_GEN3_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_GEN3_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED143_t;
__xdata __at( 0x61d0 ) volatile AUTOSPEED143_t AUTOSPEED143;
#define reg_PLL_RATE_SEL_TX_GEN3_LANE_3_0  AUTOSPEED143.BF.PLL_RATE_SEL_TX_GEN3_LANE_3_0
#define reg_TX_CK_SEL_GEN3_LANE  AUTOSPEED143.BF.TX_CK_SEL_GEN3_LANE
#define reg_TX_VDDCAL_RATE_EN_GEN3_LANE  AUTOSPEED143.BF.TX_VDDCAL_RATE_EN_GEN3_LANE
#define reg_TX_SPEED_DIV_GEN3_LANE_2_0  AUTOSPEED143.BF.TX_SPEED_DIV_GEN3_LANE_2_0

// 0x01d4	AUTOSPEED144		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_GEN3_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_GEN3_LANE_2_0      : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_GEN3_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_GEN3_LANE            : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED144_t;
__xdata __at( 0x61d4 ) volatile AUTOSPEED144_t AUTOSPEED144;
#define reg_TX_REG_SPEED_TRK_CLK_GEN3_LANE_2_0  AUTOSPEED144.BF.TX_REG_SPEED_TRK_CLK_GEN3_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_GEN3_LANE_2_0  AUTOSPEED144.BF.TX_REG_SPEED_TRK_DATA_GEN3_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_GEN3_LANE  AUTOSPEED144.BF.TX_EM_CTRL_REG_EN_GEN3_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_GEN3_LANE  AUTOSPEED144.BF.TX_EM_CTRL_PIPE_SEL_GEN3_LANE

// 0x01d8	AUTOSPEED145		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_GEN3_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_GEN3_LANE_3_0             : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_GEN3_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_GEN3_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED145_t;
__xdata __at( 0x61d8 ) volatile AUTOSPEED145_t AUTOSPEED145;
#define reg_TX_EM_PRE_EN_GEN3_LANE  AUTOSPEED145.BF.TX_EM_PRE_EN_GEN3_LANE
#define reg_TX_EM_PRE_CTRL_GEN3_LANE_3_0  AUTOSPEED145.BF.TX_EM_PRE_CTRL_GEN3_LANE_3_0
#define reg_TX_EM_PO_EN_GEN3_LANE  AUTOSPEED145.BF.TX_EM_PO_EN_GEN3_LANE
#define reg_TX_EM_PO_CTRL_GEN3_LANE_3_0  AUTOSPEED145.BF.TX_EM_PO_CTRL_GEN3_LANE_3_0

// 0x01dc	AUTOSPEED146		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_GEN3_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_GEN3_LANE_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_GEN3_LANE_1_0                  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_GEN3_LANE_1_0           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED146_t;
__xdata __at( 0x61dc ) volatile AUTOSPEED146_t AUTOSPEED146;
#define reg_SLEWRATE_EN_GEN3_LANE_1_0  AUTOSPEED146.BF.SLEWRATE_EN_GEN3_LANE_1_0
#define reg_SLEWCTRL1_GEN3_LANE_1_0  AUTOSPEED146.BF.SLEWCTRL1_GEN3_LANE_1_0
#define reg_SLEWCTRL0_GEN3_LANE_1_0  AUTOSPEED146.BF.SLEWCTRL0_GEN3_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_GEN3_LANE_1_0  AUTOSPEED146.BF.TX_TRAIN_PAT_SEL_GEN3_LANE_1_0

// 0x01e0	AUTOSPEED147		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_GEN3_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_PAT_NUM_GEN3_LANE_8                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_GEN3_LANE            : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_GEN3_LANE                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED147_t;
__xdata __at( 0x61e0 ) volatile AUTOSPEED147_t AUTOSPEED147;
#define reg_TRAIN_PAT_NUM_GEN3_LANE_7_0  AUTOSPEED147.BF.TRAIN_PAT_NUM_GEN3_LANE_7_0
#define reg_TRAIN_PAT_NUM_GEN3_LANE_8  AUTOSPEED147.BF.TRAIN_PAT_NUM_GEN3_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_GEN3_LANE  AUTOSPEED147.BF.TX_TRAIN_PAT_TOGGLE_GEN3_LANE
#define reg_PACKET_SYNC_DIS_GEN3_LANE  AUTOSPEED147.BF.PACKET_SYNC_DIS_GEN3_LANE

// 0x01e4	AUTOSPEED148		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_GEN3_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_GEN3_LANE_3_0            : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_GEN3_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_GEN3_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED148_t;
__xdata __at( 0x61e4 ) volatile AUTOSPEED148_t AUTOSPEED148;
#define reg_SYNC_DET_DIS_GEN3_LANE  AUTOSPEED148.BF.SYNC_DET_DIS_GEN3_LANE
#define reg_PLL_RATE_SEL_RX_GEN3_LANE_3_0  AUTOSPEED148.BF.PLL_RATE_SEL_RX_GEN3_LANE_3_0
#define reg_RX_CK_SEL_GEN3_LANE  AUTOSPEED148.BF.RX_CK_SEL_GEN3_LANE
#define reg_RX_VDDCAL_RATE_EN_GEN3_LANE  AUTOSPEED148.BF.RX_VDDCAL_RATE_EN_GEN3_LANE

// 0x01e8	AUTOSPEED149		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_GEN3_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_GEN3_LANE_2_0            : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_GEN3_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_GEN3_LANE_1_0                      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED149_t;
__xdata __at( 0x61e8 ) volatile AUTOSPEED149_t AUTOSPEED149;
#define reg_RX_SPEED_DIV_GEN3_LANE_2_0  AUTOSPEED149.BF.RX_SPEED_DIV_GEN3_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_GEN3_LANE_2_0  AUTOSPEED149.BF.DTL_CLK_SPEEDUP_GEN3_LANE_2_0
#define reg_INTPI_GEN3_LANE_3_0  AUTOSPEED149.BF.INTPI_GEN3_LANE_3_0
#define reg_INTPR_GEN3_LANE_1_0  AUTOSPEED149.BF.INTPR_GEN3_LANE_1_0

// 0x01ec	AUTOSPEED150		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_GEN3_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_GEN3_LANE_2_0           : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_GEN3_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_GEN3_LANE_2_0  : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED150_t;
__xdata __at( 0x61ec ) volatile AUTOSPEED150_t AUTOSPEED150;
#define reg_DLL_FREQ_SEL_GEN3_LANE_2_0  AUTOSPEED150.BF.DLL_FREQ_SEL_GEN3_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_GEN3_LANE_2_0  AUTOSPEED150.BF.EOM_DLL_FREQ_SEL_GEN3_LANE_2_0
#define reg_ALIGN90_8G_EN_GEN3_LANE  AUTOSPEED150.BF.ALIGN90_8G_EN_GEN3_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_GEN3_LANE_2_0  AUTOSPEED150.BF.RX_REG0P9_SPEED_TRACK_CLK_GEN3_LANE_2_0

// 0x01f0	AUTOSPEED151		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN3_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_GEN3_LANE_2_0 : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_GEN3_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_GEN3_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED151_t;
__xdata __at( 0x61f0 ) volatile AUTOSPEED151_t AUTOSPEED151;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN3_LANE  AUTOSPEED151.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN3_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_GEN3_LANE_2_0  AUTOSPEED151.BF.RX_REG0P9_SPEED_TRACK_DATA_GEN3_LANE_2_0
#define reg_RX_SELMUFI_GEN3_LANE_2_0  AUTOSPEED151.BF.RX_SELMUFI_GEN3_LANE_2_0
#define reg_RX_SELMUFF_GEN3_LANE_2_0  AUTOSPEED151.BF.RX_SELMUFF_GEN3_LANE_2_0

// 0x01f4	AUTOSPEED152		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_GEN3_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_GEN3_LANE_3_0                : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_GEN3_LANE_1_0               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_GEN3_LANE_7_0         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED152_t;
__xdata __at( 0x61f4 ) volatile AUTOSPEED152_t AUTOSPEED152;
#define reg_REG_SELMUPI_GEN3_LANE_3_0  AUTOSPEED152.BF.REG_SELMUPI_GEN3_LANE_3_0
#define reg_REG_SELMUPF_GEN3_LANE_3_0  AUTOSPEED152.BF.REG_SELMUPF_GEN3_LANE_3_0
#define reg_DTL_CLK_MODE_GEN3_LANE_1_0  AUTOSPEED152.BF.DTL_CLK_MODE_GEN3_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_GEN3_LANE_7_0  AUTOSPEED152.BF.RX_FOFFSET_EXTRA_M_GEN3_LANE_7_0

// 0x01f8	AUTOSPEED153		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_GEN3_LANE_13_8        : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_GEN3_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_GEN3_LANE_9_8               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_GEN3_LANE                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED153_t;
__xdata __at( 0x61f8 ) volatile AUTOSPEED153_t AUTOSPEED153;
#define reg_RX_FOFFSET_EXTRA_M_GEN3_LANE_13_8  AUTOSPEED153.BF.RX_FOFFSET_EXTRA_M_GEN3_LANE_13_8
#define reg_INIT_RXFOFFS_GEN3_LANE_7_0  AUTOSPEED153.BF.INIT_RXFOFFS_GEN3_LANE_7_0
#define reg_INIT_RXFOFFS_GEN3_LANE_9_8  AUTOSPEED153.BF.INIT_RXFOFFS_GEN3_LANE_9_8
#define reg_PU_F1P_D_E_GEN3_LANE  AUTOSPEED153.BF.PU_F1P_D_E_GEN3_LANE

// 0x01fc	AUTOSPEED154		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_GEN3_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_GEN3_LANE                     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_GEN3_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_GEN3_LANE                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED154_t;
__xdata __at( 0x61fc ) volatile AUTOSPEED154_t AUTOSPEED154;
#define reg_PU_F1N_D_E_GEN3_LANE  AUTOSPEED154.BF.PU_F1N_D_E_GEN3_LANE
#define reg_PU_F1P_S_E_GEN3_LANE  AUTOSPEED154.BF.PU_F1P_S_E_GEN3_LANE
#define reg_PU_F1N_S_E_GEN3_LANE  AUTOSPEED154.BF.PU_F1N_S_E_GEN3_LANE
#define reg_PU_F1P_D_O_GEN3_LANE  AUTOSPEED154.BF.PU_F1P_D_O_GEN3_LANE

// 0x0200	AUTOSPEED155		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_GEN3_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_GEN3_LANE                     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_GEN3_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_GEN3_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED155_t;
__xdata __at( 0x6200 ) volatile AUTOSPEED155_t AUTOSPEED155;
#define reg_PU_F1N_D_O_GEN3_LANE  AUTOSPEED155.BF.PU_F1N_D_O_GEN3_LANE
#define reg_PU_F1P_S_O_GEN3_LANE  AUTOSPEED155.BF.PU_F1P_S_O_GEN3_LANE
#define reg_PU_F1N_S_O_GEN3_LANE  AUTOSPEED155.BF.PU_F1N_S_O_GEN3_LANE
#define reg_PATH_DISABLE_EDGE_GEN3_LANE  AUTOSPEED155.BF.PATH_DISABLE_EDGE_GEN3_LANE

// 0x0204	AUTOSPEED156		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_GEN3_LANE                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_GEN3_LANE                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_GEN3_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_GEN3_LANE                   : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED156_t;
__xdata __at( 0x6204 ) volatile AUTOSPEED156_t AUTOSPEED156;
#define reg_DFE_F1_POL_EN_D_GEN3_LANE  AUTOSPEED156.BF.DFE_F1_POL_EN_D_GEN3_LANE
#define reg_DFE_F1_POL_EN_S_GEN3_LANE  AUTOSPEED156.BF.DFE_F1_POL_EN_S_GEN3_LANE
#define reg_DFE_F1_POL_D_GEN3_LANE  AUTOSPEED156.BF.DFE_F1_POL_D_GEN3_LANE
#define reg_DFE_F1_POL_S_GEN3_LANE  AUTOSPEED156.BF.DFE_F1_POL_S_GEN3_LANE

// 0x0208	AUTOSPEED157		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN3_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN3_LANE : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN3_LANE  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN3_LANE  : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED157_t;
__xdata __at( 0x6208 ) volatile AUTOSPEED157_t AUTOSPEED157;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN3_LANE  AUTOSPEED157.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN3_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN3_LANE  AUTOSPEED157.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN3_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN3_LANE  AUTOSPEED157.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN3_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN3_LANE  AUTOSPEED157.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN3_LANE

// 0x020c	AUTOSPEED158		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_GEN3_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_GEN3_LANE                    : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_GEN3_LANE_1_0   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_GEN3_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED158_t;
__xdata __at( 0x620c ) volatile AUTOSPEED158_t AUTOSPEED158;
#define reg_REG_DFE_FULL_RATE_MODE_GEN3_LANE  AUTOSPEED158.BF.REG_DFE_FULL_RATE_MODE_GEN3_LANE
#define reg_REG_DFE_DIS_GEN3_LANE  AUTOSPEED158.BF.REG_DFE_DIS_GEN3_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_GEN3_LANE_1_0  AUTOSPEED158.BF.REG_DFE_TAP_SETTLE_SCALE_GEN3_LANE_1_0
#define reg_FFE_DATA_RATE_GEN3_LANE_3_0  AUTOSPEED158.BF.FFE_DATA_RATE_GEN3_LANE_3_0

// 0x0210	AUTOSPEED159		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_GEN3_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RXDLL_TEMP_B_GEN3_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED159_t;
__xdata __at( 0x6210 ) volatile AUTOSPEED159_t AUTOSPEED159;
#define reg_RXDLL_TEMP_A_GEN3_LANE_7_0  AUTOSPEED159.BF.RXDLL_TEMP_A_GEN3_LANE_7_0
#define reg_RXDLL_TEMP_B_GEN3_LANE_7_0  AUTOSPEED159.BF.RXDLL_TEMP_B_GEN3_LANE_7_0

// 0x0214	AUTOSPEED160		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_GEN4_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_GEN4_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_GEN4_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_GEN4_LANE_2_0               : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED160_t;
__xdata __at( 0x6214 ) volatile AUTOSPEED160_t AUTOSPEED160;
#define reg_PLL_RATE_SEL_TX_GEN4_LANE_3_0  AUTOSPEED160.BF.PLL_RATE_SEL_TX_GEN4_LANE_3_0
#define reg_TX_CK_SEL_GEN4_LANE  AUTOSPEED160.BF.TX_CK_SEL_GEN4_LANE
#define reg_TX_VDDCAL_RATE_EN_GEN4_LANE  AUTOSPEED160.BF.TX_VDDCAL_RATE_EN_GEN4_LANE
#define reg_TX_SPEED_DIV_GEN4_LANE_2_0  AUTOSPEED160.BF.TX_SPEED_DIV_GEN4_LANE_2_0

// 0x0218	AUTOSPEED161		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_GEN4_LANE_2_0       : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_GEN4_LANE_2_0      : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_GEN4_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_GEN4_LANE            : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED161_t;
__xdata __at( 0x6218 ) volatile AUTOSPEED161_t AUTOSPEED161;
#define reg_TX_REG_SPEED_TRK_CLK_GEN4_LANE_2_0  AUTOSPEED161.BF.TX_REG_SPEED_TRK_CLK_GEN4_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_GEN4_LANE_2_0  AUTOSPEED161.BF.TX_REG_SPEED_TRK_DATA_GEN4_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_GEN4_LANE  AUTOSPEED161.BF.TX_EM_CTRL_REG_EN_GEN4_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_GEN4_LANE  AUTOSPEED161.BF.TX_EM_CTRL_PIPE_SEL_GEN4_LANE

// 0x021c	AUTOSPEED162		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_GEN4_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_GEN4_LANE_3_0             : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_GEN4_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_GEN4_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED162_t;
__xdata __at( 0x621c ) volatile AUTOSPEED162_t AUTOSPEED162;
#define reg_TX_EM_PRE_EN_GEN4_LANE  AUTOSPEED162.BF.TX_EM_PRE_EN_GEN4_LANE
#define reg_TX_EM_PRE_CTRL_GEN4_LANE_3_0  AUTOSPEED162.BF.TX_EM_PRE_CTRL_GEN4_LANE_3_0
#define reg_TX_EM_PO_EN_GEN4_LANE  AUTOSPEED162.BF.TX_EM_PO_EN_GEN4_LANE
#define reg_TX_EM_PO_CTRL_GEN4_LANE_3_0  AUTOSPEED162.BF.TX_EM_PO_CTRL_GEN4_LANE_3_0

// 0x0220	AUTOSPEED163		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_GEN4_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_GEN4_LANE_1_0                  : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_GEN4_LANE_1_0                  : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_GEN4_LANE_1_0           : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED163_t;
__xdata __at( 0x6220 ) volatile AUTOSPEED163_t AUTOSPEED163;
#define reg_SLEWRATE_EN_GEN4_LANE_1_0  AUTOSPEED163.BF.SLEWRATE_EN_GEN4_LANE_1_0
#define reg_SLEWCTRL1_GEN4_LANE_1_0  AUTOSPEED163.BF.SLEWCTRL1_GEN4_LANE_1_0
#define reg_SLEWCTRL0_GEN4_LANE_1_0  AUTOSPEED163.BF.SLEWCTRL0_GEN4_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_GEN4_LANE_1_0  AUTOSPEED163.BF.TX_TRAIN_PAT_SEL_GEN4_LANE_1_0

// 0x0224	AUTOSPEED164		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_GEN4_LANE_7_0              : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t TRAIN_PAT_NUM_GEN4_LANE_8                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_GEN4_LANE            : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_GEN4_LANE                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED164_t;
__xdata __at( 0x6224 ) volatile AUTOSPEED164_t AUTOSPEED164;
#define reg_TRAIN_PAT_NUM_GEN4_LANE_7_0  AUTOSPEED164.BF.TRAIN_PAT_NUM_GEN4_LANE_7_0
#define reg_TRAIN_PAT_NUM_GEN4_LANE_8  AUTOSPEED164.BF.TRAIN_PAT_NUM_GEN4_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_GEN4_LANE  AUTOSPEED164.BF.TX_TRAIN_PAT_TOGGLE_GEN4_LANE
#define reg_PACKET_SYNC_DIS_GEN4_LANE  AUTOSPEED164.BF.PACKET_SYNC_DIS_GEN4_LANE

// 0x0228	AUTOSPEED165		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_GEN4_LANE                   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_GEN4_LANE_3_0            : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_GEN4_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_GEN4_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED165_t;
__xdata __at( 0x6228 ) volatile AUTOSPEED165_t AUTOSPEED165;
#define reg_SYNC_DET_DIS_GEN4_LANE  AUTOSPEED165.BF.SYNC_DET_DIS_GEN4_LANE
#define reg_PLL_RATE_SEL_RX_GEN4_LANE_3_0  AUTOSPEED165.BF.PLL_RATE_SEL_RX_GEN4_LANE_3_0
#define reg_RX_CK_SEL_GEN4_LANE  AUTOSPEED165.BF.RX_CK_SEL_GEN4_LANE
#define reg_RX_VDDCAL_RATE_EN_GEN4_LANE  AUTOSPEED165.BF.RX_VDDCAL_RATE_EN_GEN4_LANE

// 0x022c	AUTOSPEED166		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_GEN4_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_GEN4_LANE_2_0            : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_GEN4_LANE_3_0                      : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_GEN4_LANE_1_0                      : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED166_t;
__xdata __at( 0x622c ) volatile AUTOSPEED166_t AUTOSPEED166;
#define reg_RX_SPEED_DIV_GEN4_LANE_2_0  AUTOSPEED166.BF.RX_SPEED_DIV_GEN4_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_GEN4_LANE_2_0  AUTOSPEED166.BF.DTL_CLK_SPEEDUP_GEN4_LANE_2_0
#define reg_INTPI_GEN4_LANE_3_0  AUTOSPEED166.BF.INTPI_GEN4_LANE_3_0
#define reg_INTPR_GEN4_LANE_1_0  AUTOSPEED166.BF.INTPR_GEN4_LANE_1_0

// 0x0230	AUTOSPEED167		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_GEN4_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_GEN4_LANE_2_0           : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_GEN4_LANE                  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_GEN4_LANE_2_0  : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED167_t;
__xdata __at( 0x6230 ) volatile AUTOSPEED167_t AUTOSPEED167;
#define reg_DLL_FREQ_SEL_GEN4_LANE_2_0  AUTOSPEED167.BF.DLL_FREQ_SEL_GEN4_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_GEN4_LANE_2_0  AUTOSPEED167.BF.EOM_DLL_FREQ_SEL_GEN4_LANE_2_0
#define reg_ALIGN90_8G_EN_GEN4_LANE  AUTOSPEED167.BF.ALIGN90_8G_EN_GEN4_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_GEN4_LANE_2_0  AUTOSPEED167.BF.RX_REG0P9_SPEED_TRACK_CLK_GEN4_LANE_2_0

// 0x0234	AUTOSPEED168		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN4_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_GEN4_LANE_2_0 : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_GEN4_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_GEN4_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED168_t;
__xdata __at( 0x6234 ) volatile AUTOSPEED168_t AUTOSPEED168;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN4_LANE  AUTOSPEED168.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_GEN4_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_GEN4_LANE_2_0  AUTOSPEED168.BF.RX_REG0P9_SPEED_TRACK_DATA_GEN4_LANE_2_0
#define reg_RX_SELMUFI_GEN4_LANE_2_0  AUTOSPEED168.BF.RX_SELMUFI_GEN4_LANE_2_0
#define reg_RX_SELMUFF_GEN4_LANE_2_0  AUTOSPEED168.BF.RX_SELMUFF_GEN4_LANE_2_0

// 0x0238	AUTOSPEED169		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_GEN4_LANE_3_0                : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_GEN4_LANE_3_0                : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_GEN4_LANE_1_0               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_GEN4_LANE_7_0         : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED169_t;
__xdata __at( 0x6238 ) volatile AUTOSPEED169_t AUTOSPEED169;
#define reg_REG_SELMUPI_GEN4_LANE_3_0  AUTOSPEED169.BF.REG_SELMUPI_GEN4_LANE_3_0
#define reg_REG_SELMUPF_GEN4_LANE_3_0  AUTOSPEED169.BF.REG_SELMUPF_GEN4_LANE_3_0
#define reg_DTL_CLK_MODE_GEN4_LANE_1_0  AUTOSPEED169.BF.DTL_CLK_MODE_GEN4_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_GEN4_LANE_7_0  AUTOSPEED169.BF.RX_FOFFSET_EXTRA_M_GEN4_LANE_7_0

// 0x023c	AUTOSPEED170		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_GEN4_LANE_13_8        : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_GEN4_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_GEN4_LANE_9_8               : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_GEN4_LANE                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED170_t;
__xdata __at( 0x623c ) volatile AUTOSPEED170_t AUTOSPEED170;
#define reg_RX_FOFFSET_EXTRA_M_GEN4_LANE_13_8  AUTOSPEED170.BF.RX_FOFFSET_EXTRA_M_GEN4_LANE_13_8
#define reg_INIT_RXFOFFS_GEN4_LANE_7_0  AUTOSPEED170.BF.INIT_RXFOFFS_GEN4_LANE_7_0
#define reg_INIT_RXFOFFS_GEN4_LANE_9_8  AUTOSPEED170.BF.INIT_RXFOFFS_GEN4_LANE_9_8
#define reg_PU_F1P_D_E_GEN4_LANE  AUTOSPEED170.BF.PU_F1P_D_E_GEN4_LANE

// 0x0240	AUTOSPEED171		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_GEN4_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_GEN4_LANE                     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_GEN4_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_GEN4_LANE                     : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED171_t;
__xdata __at( 0x6240 ) volatile AUTOSPEED171_t AUTOSPEED171;
#define reg_PU_F1N_D_E_GEN4_LANE  AUTOSPEED171.BF.PU_F1N_D_E_GEN4_LANE
#define reg_PU_F1P_S_E_GEN4_LANE  AUTOSPEED171.BF.PU_F1P_S_E_GEN4_LANE
#define reg_PU_F1N_S_E_GEN4_LANE  AUTOSPEED171.BF.PU_F1N_S_E_GEN4_LANE
#define reg_PU_F1P_D_O_GEN4_LANE  AUTOSPEED171.BF.PU_F1P_D_O_GEN4_LANE

// 0x0244	AUTOSPEED172		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_GEN4_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_GEN4_LANE                     : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_GEN4_LANE                     : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_GEN4_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED172_t;
__xdata __at( 0x6244 ) volatile AUTOSPEED172_t AUTOSPEED172;
#define reg_PU_F1N_D_O_GEN4_LANE  AUTOSPEED172.BF.PU_F1N_D_O_GEN4_LANE
#define reg_PU_F1P_S_O_GEN4_LANE  AUTOSPEED172.BF.PU_F1P_S_O_GEN4_LANE
#define reg_PU_F1N_S_O_GEN4_LANE  AUTOSPEED172.BF.PU_F1N_S_O_GEN4_LANE
#define reg_PATH_DISABLE_EDGE_GEN4_LANE  AUTOSPEED172.BF.PATH_DISABLE_EDGE_GEN4_LANE

// 0x0248	AUTOSPEED173		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_GEN4_LANE                : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_GEN4_LANE                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_GEN4_LANE                   : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_GEN4_LANE                   : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED173_t;
__xdata __at( 0x6248 ) volatile AUTOSPEED173_t AUTOSPEED173;
#define reg_DFE_F1_POL_EN_D_GEN4_LANE  AUTOSPEED173.BF.DFE_F1_POL_EN_D_GEN4_LANE
#define reg_DFE_F1_POL_EN_S_GEN4_LANE  AUTOSPEED173.BF.DFE_F1_POL_EN_S_GEN4_LANE
#define reg_DFE_F1_POL_D_GEN4_LANE  AUTOSPEED173.BF.DFE_F1_POL_D_GEN4_LANE
#define reg_DFE_F1_POL_S_GEN4_LANE  AUTOSPEED173.BF.DFE_F1_POL_S_GEN4_LANE

// 0x024c	AUTOSPEED174		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN4_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN4_LANE : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN4_LANE  : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN4_LANE  : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED174_t;
__xdata __at( 0x624c ) volatile AUTOSPEED174_t AUTOSPEED174;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN4_LANE  AUTOSPEED174.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_GEN4_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN4_LANE  AUTOSPEED174.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_GEN4_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN4_LANE  AUTOSPEED174.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_GEN4_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN4_LANE  AUTOSPEED174.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_GEN4_LANE

// 0x0250	AUTOSPEED175		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_GEN4_LANE         : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_GEN4_LANE                    : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_GEN4_LANE_1_0   : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_GEN4_LANE_3_0              : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED175_t;
__xdata __at( 0x6250 ) volatile AUTOSPEED175_t AUTOSPEED175;
#define reg_REG_DFE_FULL_RATE_MODE_GEN4_LANE  AUTOSPEED175.BF.REG_DFE_FULL_RATE_MODE_GEN4_LANE
#define reg_REG_DFE_DIS_GEN4_LANE  AUTOSPEED175.BF.REG_DFE_DIS_GEN4_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_GEN4_LANE_1_0  AUTOSPEED175.BF.REG_DFE_TAP_SETTLE_SCALE_GEN4_LANE_1_0
#define reg_FFE_DATA_RATE_GEN4_LANE_3_0  AUTOSPEED175.BF.FFE_DATA_RATE_GEN4_LANE_3_0

// 0x0254	AUTOSPEED176		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_GEN4_LANE_7_0               : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RXDLL_TEMP_B_GEN4_LANE_7_0               : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED176_t;
__xdata __at( 0x6254 ) volatile AUTOSPEED176_t AUTOSPEED176;
#define reg_RXDLL_TEMP_A_GEN4_LANE_7_0  AUTOSPEED176.BF.RXDLL_TEMP_A_GEN4_LANE_7_0
#define reg_RXDLL_TEMP_B_GEN4_LANE_7_0  AUTOSPEED176.BF.RXDLL_TEMP_B_GEN4_LANE_7_0

// 0x0258	AUTOSPEED177		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC_PDIV_RATE0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_TXDCC_PDIV_RATE1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_TXDCC_PDIV_CONT_RATE0_LANE_7_0       : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_TXDCC_PDIV_CONT_RATE1_LANE_7_0       : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED177_t;
__xdata __at( 0x6258 ) volatile AUTOSPEED177_t AUTOSPEED177;
#define reg_CAL_TXDCC_PDIV_RATE0_LANE_7_0  AUTOSPEED177.BF.CAL_TXDCC_PDIV_RATE0_LANE_7_0
#define reg_CAL_TXDCC_PDIV_RATE1_LANE_7_0  AUTOSPEED177.BF.CAL_TXDCC_PDIV_RATE1_LANE_7_0
#define reg_CAL_TXDCC_PDIV_CONT_RATE0_LANE_7_0  AUTOSPEED177.BF.CAL_TXDCC_PDIV_CONT_RATE0_LANE_7_0
#define reg_CAL_TXDCC_PDIV_CONT_RATE1_LANE_7_0  AUTOSPEED177.BF.CAL_TXDCC_PDIV_CONT_RATE1_LANE_7_0

// 0x025c	AUTOSPEED178		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC_PDIV_HG_RATE0_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TXDCC_PDIV_HG_RATE1_LANE_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TXDCC_RATE0_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_TXDCC_RATE1_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED178_t;
__xdata __at( 0x625c ) volatile AUTOSPEED178_t AUTOSPEED178;
#define reg_CAL_TXDCC_PDIV_HG_RATE0_LANE_7_0  AUTOSPEED178.BF.CAL_TXDCC_PDIV_HG_RATE0_LANE_7_0
#define reg_CAL_TXDCC_PDIV_HG_RATE1_LANE_7_0  AUTOSPEED178.BF.CAL_TXDCC_PDIV_HG_RATE1_LANE_7_0
#define reg_CAL_TXDCC_RATE0_LANE_7_0  AUTOSPEED178.BF.CAL_TXDCC_RATE0_LANE_7_0
#define reg_CAL_TXDCC_RATE1_LANE_7_0  AUTOSPEED178.BF.CAL_TXDCC_RATE1_LANE_7_0

// 0x0260	AUTOSPEED179		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC_CONT_RATE0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_TXDCC_CONT_RATE1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_TXDCC_HG_RATE0_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TXDCC_HG_RATE1_LANE_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED179_t;
__xdata __at( 0x6260 ) volatile AUTOSPEED179_t AUTOSPEED179;
#define reg_CAL_TXDCC_CONT_RATE0_LANE_7_0  AUTOSPEED179.BF.CAL_TXDCC_CONT_RATE0_LANE_7_0
#define reg_CAL_TXDCC_CONT_RATE1_LANE_7_0  AUTOSPEED179.BF.CAL_TXDCC_CONT_RATE1_LANE_7_0
#define reg_CAL_TXDCC_HG_RATE0_LANE_7_0  AUTOSPEED179.BF.CAL_TXDCC_HG_RATE0_LANE_7_0
#define reg_CAL_TXDCC_HG_RATE1_LANE_7_0  AUTOSPEED179.BF.CAL_TXDCC_HG_RATE1_LANE_7_0

// 0x0264	AUTOSPEED180		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DLL_RATE0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DLL_RATE1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DLL_CONT_RATE0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DLL_CONT_RATE1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED180_t;
__xdata __at( 0x6264 ) volatile AUTOSPEED180_t AUTOSPEED180;
#define reg_CAL_RXDCC_DLL_RATE0_LANE_7_0  AUTOSPEED180.BF.CAL_RXDCC_DLL_RATE0_LANE_7_0
#define reg_CAL_RXDCC_DLL_RATE1_LANE_7_0  AUTOSPEED180.BF.CAL_RXDCC_DLL_RATE1_LANE_7_0
#define reg_CAL_RXDCC_DLL_CONT_RATE0_LANE_7_0  AUTOSPEED180.BF.CAL_RXDCC_DLL_CONT_RATE0_LANE_7_0
#define reg_CAL_RXDCC_DLL_CONT_RATE1_LANE_7_0  AUTOSPEED180.BF.CAL_RXDCC_DLL_CONT_RATE1_LANE_7_0

// 0x0268	AUTOSPEED181		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DLL_HG_RATE0_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DLL_HG_RATE1_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_GEN0_LANE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_GEN1_LANE_7_0             : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED181_t;
__xdata __at( 0x6268 ) volatile AUTOSPEED181_t AUTOSPEED181;
#define reg_CAL_RXDCC_DLL_HG_RATE0_LANE_7_0  AUTOSPEED181.BF.CAL_RXDCC_DLL_HG_RATE0_LANE_7_0
#define reg_CAL_RXDCC_DLL_HG_RATE1_LANE_7_0  AUTOSPEED181.BF.CAL_RXDCC_DLL_HG_RATE1_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN0_LANE_7_0  AUTOSPEED181.BF.CAL_RXDCC_DATA_GEN0_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN1_LANE_7_0  AUTOSPEED181.BF.CAL_RXDCC_DATA_GEN1_LANE_7_0

// 0x026c	AUTOSPEED182		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_GEN2_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_GEN3_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_GEN4_LANE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN0_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED182_t;
__xdata __at( 0x626c ) volatile AUTOSPEED182_t AUTOSPEED182;
#define reg_CAL_RXDCC_DATA_GEN2_LANE_7_0  AUTOSPEED182.BF.CAL_RXDCC_DATA_GEN2_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN3_LANE_7_0  AUTOSPEED182.BF.CAL_RXDCC_DATA_GEN3_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN4_LANE_7_0  AUTOSPEED182.BF.CAL_RXDCC_DATA_GEN4_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN0_LANE_7_0  AUTOSPEED182.BF.CAL_RXDCC_DATA_CONT_GEN0_LANE_7_0

// 0x0270	AUTOSPEED183		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_CONT_GEN1_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN2_LANE_7_0        : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN3_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN4_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED183_t;
__xdata __at( 0x6270 ) volatile AUTOSPEED183_t AUTOSPEED183;
#define reg_CAL_RXDCC_DATA_CONT_GEN1_LANE_7_0  AUTOSPEED183.BF.CAL_RXDCC_DATA_CONT_GEN1_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN2_LANE_7_0  AUTOSPEED183.BF.CAL_RXDCC_DATA_CONT_GEN2_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN3_LANE_7_0  AUTOSPEED183.BF.CAL_RXDCC_DATA_CONT_GEN3_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN4_LANE_7_0  AUTOSPEED183.BF.CAL_RXDCC_DATA_CONT_GEN4_LANE_7_0

// 0x0274	AUTOSPEED184		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_HG_GEN0_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_HG_GEN1_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_HG_GEN2_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_HG_GEN3_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED184_t;
__xdata __at( 0x6274 ) volatile AUTOSPEED184_t AUTOSPEED184;
#define reg_CAL_RXDCC_DATA_HG_GEN0_LANE_7_0  AUTOSPEED184.BF.CAL_RXDCC_DATA_HG_GEN0_LANE_7_0
#define reg_CAL_RXDCC_DATA_HG_GEN1_LANE_7_0  AUTOSPEED184.BF.CAL_RXDCC_DATA_HG_GEN1_LANE_7_0
#define reg_CAL_RXDCC_DATA_HG_GEN2_LANE_7_0  AUTOSPEED184.BF.CAL_RXDCC_DATA_HG_GEN2_LANE_7_0
#define reg_CAL_RXDCC_DATA_HG_GEN3_LANE_7_0  AUTOSPEED184.BF.CAL_RXDCC_DATA_HG_GEN3_LANE_7_0

// 0x0278	AUTOSPEED185		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_HG_GEN4_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_RATE0_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_RATE1_LANE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_RATE2_LANE_7_0             : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED185_t;
__xdata __at( 0x6278 ) volatile AUTOSPEED185_t AUTOSPEED185;
#define reg_CAL_RXDCC_DATA_HG_GEN4_LANE_7_0  AUTOSPEED185.BF.CAL_RXDCC_DATA_HG_GEN4_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE0_LANE_7_0  AUTOSPEED185.BF.CAL_RXDCC_EOM_RATE0_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE1_LANE_7_0  AUTOSPEED185.BF.CAL_RXDCC_EOM_RATE1_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE2_LANE_7_0  AUTOSPEED185.BF.CAL_RXDCC_EOM_RATE2_LANE_7_0

// 0x027c	AUTOSPEED186		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOM_RATE3_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_RATE4_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED186_t;
__xdata __at( 0x627c ) volatile AUTOSPEED186_t AUTOSPEED186;
#define reg_CAL_RXDCC_EOM_RATE3_LANE_7_0  AUTOSPEED186.BF.CAL_RXDCC_EOM_RATE3_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE4_LANE_7_0  AUTOSPEED186.BF.CAL_RXDCC_EOM_RATE4_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE0_LANE_7_0  AUTOSPEED186.BF.CAL_RXDCC_EOM_CONT_RATE0_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE1_LANE_7_0  AUTOSPEED186.BF.CAL_RXDCC_EOM_CONT_RATE1_LANE_7_0

// 0x0280	AUTOSPEED187		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOM_CONT_RATE2_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE3_LANE_7_0        : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE4_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_HG_RATE0_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED187_t;
__xdata __at( 0x6280 ) volatile AUTOSPEED187_t AUTOSPEED187;
#define reg_CAL_RXDCC_EOM_CONT_RATE2_LANE_7_0  AUTOSPEED187.BF.CAL_RXDCC_EOM_CONT_RATE2_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE3_LANE_7_0  AUTOSPEED187.BF.CAL_RXDCC_EOM_CONT_RATE3_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE4_LANE_7_0  AUTOSPEED187.BF.CAL_RXDCC_EOM_CONT_RATE4_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE0_LANE_7_0  AUTOSPEED187.BF.CAL_RXDCC_EOM_HG_RATE0_LANE_7_0

// 0x0284	AUTOSPEED188		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOM_HG_RATE1_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_HG_RATE2_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_HG_RATE3_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_HG_RATE4_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED188_t;
__xdata __at( 0x6284 ) volatile AUTOSPEED188_t AUTOSPEED188;
#define reg_CAL_RXDCC_EOM_HG_RATE1_LANE_7_0  AUTOSPEED188.BF.CAL_RXDCC_EOM_HG_RATE1_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE2_LANE_7_0  AUTOSPEED188.BF.CAL_RXDCC_EOM_HG_RATE2_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE3_LANE_7_0  AUTOSPEED188.BF.CAL_RXDCC_EOM_HG_RATE3_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE4_LANE_7_0  AUTOSPEED188.BF.CAL_RXDCC_EOM_HG_RATE4_LANE_7_0

// 0x0288	AUTOSPEED189		TBD
typedef union {
	struct {
		uint8_t CAL_DLL_GMSEL_RATE0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t CAL_DLL_GMSEL_RATE1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_VDDA_DLL_SEL_RATE0_LANE_7_0          : 8;	/*[23:16]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_SEL_RATE1_LANE_7_0          : 8;	/*[31:24]     r/w 8'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED189_t;
__xdata __at( 0x6288 ) volatile AUTOSPEED189_t AUTOSPEED189;
#define reg_CAL_DLL_GMSEL_RATE0_LANE_7_0  AUTOSPEED189.BF.CAL_DLL_GMSEL_RATE0_LANE_7_0
#define reg_CAL_DLL_GMSEL_RATE1_LANE_7_0  AUTOSPEED189.BF.CAL_DLL_GMSEL_RATE1_LANE_7_0
#define reg_CAL_VDDA_DLL_SEL_RATE0_LANE_7_0  AUTOSPEED189.BF.CAL_VDDA_DLL_SEL_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_SEL_RATE1_LANE_7_0  AUTOSPEED189.BF.CAL_VDDA_DLL_SEL_RATE1_LANE_7_0

// 0x028c	AUTOSPEED190		TBD
typedef union {
	struct {
		uint8_t CAL_VDDA_DLL_SEL_CONT_RATE0_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_SEL_CONT_RATE1_LANE_7_0     : 8;	/* [15:8]     r/w 8'h16*/
		uint8_t CAL_DLL_EOM_GMSEL_RATE0_LANE_7_0         : 8;	/*[23:16]     r/w 8'h4*/
		uint8_t CAL_DLL_EOM_GMSEL_RATE1_LANE_7_0         : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED190_t;
__xdata __at( 0x628c ) volatile AUTOSPEED190_t AUTOSPEED190;
#define reg_CAL_VDDA_DLL_SEL_CONT_RATE0_LANE_7_0  AUTOSPEED190.BF.CAL_VDDA_DLL_SEL_CONT_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_SEL_CONT_RATE1_LANE_7_0  AUTOSPEED190.BF.CAL_VDDA_DLL_SEL_CONT_RATE1_LANE_7_0
#define reg_CAL_DLL_EOM_GMSEL_RATE0_LANE_7_0  AUTOSPEED190.BF.CAL_DLL_EOM_GMSEL_RATE0_LANE_7_0
#define reg_CAL_DLL_EOM_GMSEL_RATE1_LANE_7_0  AUTOSPEED190.BF.CAL_DLL_EOM_GMSEL_RATE1_LANE_7_0

// 0x0290	AUTOSPEED191		TBD
typedef union {
	struct {
		uint8_t CAL_VDDA_DLL_EOM_SEL_RATE0_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_RATE1_LANE_7_0      : 8;	/* [15:8]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_CONT_RATE0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_CONT_RATE1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED191_t;
__xdata __at( 0x6290 ) volatile AUTOSPEED191_t AUTOSPEED191;
#define reg_CAL_VDDA_DLL_EOM_SEL_RATE0_LANE_7_0  AUTOSPEED191.BF.CAL_VDDA_DLL_EOM_SEL_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_EOM_SEL_RATE1_LANE_7_0  AUTOSPEED191.BF.CAL_VDDA_DLL_EOM_SEL_RATE1_LANE_7_0
#define reg_CAL_VDDA_DLL_EOM_SEL_CONT_RATE0_LANE_7_0  AUTOSPEED191.BF.CAL_VDDA_DLL_EOM_SEL_CONT_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_EOM_SEL_CONT_RATE1_LANE_7_0  AUTOSPEED191.BF.CAL_VDDA_DLL_EOM_SEL_CONT_RATE1_LANE_7_0

// 0x0294	AUTOSPEED192		TBD
typedef union {
	struct {
		uint8_t CAL_EOM_DPHER_RATE0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_EOM_DPHER_RATE1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE0_DIV0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE0_DIV1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED192_t;
__xdata __at( 0x6294 ) volatile AUTOSPEED192_t AUTOSPEED192;
#define reg_CAL_EOM_DPHER_RATE0_LANE_7_0  AUTOSPEED192.BF.CAL_EOM_DPHER_RATE0_LANE_7_0
#define reg_CAL_EOM_DPHER_RATE1_LANE_7_0  AUTOSPEED192.BF.CAL_EOM_DPHER_RATE1_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE0_DIV0_LANE_7_0  AUTOSPEED192.BF.CAL_ALIGN90_DUMMY_CLK_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE0_DIV1_LANE_7_0  AUTOSPEED192.BF.CAL_ALIGN90_DUMMY_CLK_RATE0_DIV1_LANE_7_0

// 0x0298	AUTOSPEED193		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE1_DIV0_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE1_DIV1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h31*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED193_t;
__xdata __at( 0x6298 ) volatile AUTOSPEED193_t AUTOSPEED193;
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE1_DIV0_LANE_7_0  AUTOSPEED193.BF.CAL_ALIGN90_DUMMY_CLK_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE1_DIV1_LANE_7_0  AUTOSPEED193.BF.CAL_ALIGN90_DUMMY_CLK_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV0_LANE_7_0  AUTOSPEED193.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV1_LANE_7_0  AUTOSPEED193.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV1_LANE_7_0

// 0x029c	AUTOSPEED194		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV0_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DAC_RATE0_DIV0_LANE_7_0      : 8;	/*[23:16]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_DAC_RATE0_DIV1_LANE_7_0      : 8;	/*[31:24]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED194_t;
__xdata __at( 0x629c ) volatile AUTOSPEED194_t AUTOSPEED194;
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV0_LANE_7_0  AUTOSPEED194.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV1_LANE_7_0  AUTOSPEED194.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_DAC_RATE0_DIV0_LANE_7_0  AUTOSPEED194.BF.CAL_ALIGN90_DAC_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_RATE0_DIV1_LANE_7_0  AUTOSPEED194.BF.CAL_ALIGN90_DAC_RATE0_DIV1_LANE_7_0

// 0x02a0	AUTOSPEED195		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DAC_RATE1_DIV0_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_DAC_RATE1_DIV1_LANE_7_0      : 8;	/* [15:8]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_DAC_CONT_RATE0_DIV0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DAC_CONT_RATE0_DIV1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED195_t;
__xdata __at( 0x62a0 ) volatile AUTOSPEED195_t AUTOSPEED195;
#define reg_CAL_ALIGN90_DAC_RATE1_DIV0_LANE_7_0  AUTOSPEED195.BF.CAL_ALIGN90_DAC_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_RATE1_DIV1_LANE_7_0  AUTOSPEED195.BF.CAL_ALIGN90_DAC_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_DAC_CONT_RATE0_DIV0_LANE_7_0  AUTOSPEED195.BF.CAL_ALIGN90_DAC_CONT_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_CONT_RATE0_DIV1_LANE_7_0  AUTOSPEED195.BF.CAL_ALIGN90_DAC_CONT_RATE0_DIV1_LANE_7_0

// 0x02a4	AUTOSPEED196		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DAC_CONT_RATE1_DIV0_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DAC_CONT_RATE1_DIV1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_GM_RATE0_DIV0_LANE_7_0       : 8;	/*[23:16]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_GM_RATE0_DIV1_LANE_7_0       : 8;	/*[31:24]     r/w 8'h31*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED196_t;
__xdata __at( 0x62a4 ) volatile AUTOSPEED196_t AUTOSPEED196;
#define reg_CAL_ALIGN90_DAC_CONT_RATE1_DIV0_LANE_7_0  AUTOSPEED196.BF.CAL_ALIGN90_DAC_CONT_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_CONT_RATE1_DIV1_LANE_7_0  AUTOSPEED196.BF.CAL_ALIGN90_DAC_CONT_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_GM_RATE0_DIV0_LANE_7_0  AUTOSPEED196.BF.CAL_ALIGN90_GM_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_RATE0_DIV1_LANE_7_0  AUTOSPEED196.BF.CAL_ALIGN90_GM_RATE0_DIV1_LANE_7_0

// 0x02a8	AUTOSPEED197		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_GM_RATE1_DIV0_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_GM_RATE1_DIV1_LANE_7_0       : 8;	/* [15:8]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_GM_CONT_RATE0_DIV0_LANE_7_0  : 8;	/*[23:16]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_CONT_RATE0_DIV1_LANE_7_0  : 8;	/*[31:24]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED197_t;
__xdata __at( 0x62a8 ) volatile AUTOSPEED197_t AUTOSPEED197;
#define reg_CAL_ALIGN90_GM_RATE1_DIV0_LANE_7_0  AUTOSPEED197.BF.CAL_ALIGN90_GM_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_RATE1_DIV1_LANE_7_0  AUTOSPEED197.BF.CAL_ALIGN90_GM_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_GM_CONT_RATE0_DIV0_LANE_7_0  AUTOSPEED197.BF.CAL_ALIGN90_GM_CONT_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_CONT_RATE0_DIV1_LANE_7_0  AUTOSPEED197.BF.CAL_ALIGN90_GM_CONT_RATE0_DIV1_LANE_7_0

// 0x02ac	AUTOSPEED198		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_GM_CONT_RATE1_DIV0_LANE_7_0  : 8;	/*  [7:0]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_CONT_RATE1_DIV1_LANE_7_0  : 8;	/* [15:8]     r/w 8'h3*/
		uint8_t CAL_SELLV_TXDATA_GEN0_LANE_7_0           : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_GEN1_LANE_7_0           : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED198_t;
__xdata __at( 0x62ac ) volatile AUTOSPEED198_t AUTOSPEED198;
#define reg_CAL_ALIGN90_GM_CONT_RATE1_DIV0_LANE_7_0  AUTOSPEED198.BF.CAL_ALIGN90_GM_CONT_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_CONT_RATE1_DIV1_LANE_7_0  AUTOSPEED198.BF.CAL_ALIGN90_GM_CONT_RATE1_DIV1_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN0_LANE_7_0  AUTOSPEED198.BF.CAL_SELLV_TXDATA_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN1_LANE_7_0  AUTOSPEED198.BF.CAL_SELLV_TXDATA_GEN1_LANE_7_0

// 0x02b0	AUTOSPEED199		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXDATA_GEN2_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_GEN3_LANE_7_0           : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_GEN4_LANE_7_0           : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN0_LANE_7_0      : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED199_t;
__xdata __at( 0x62b0 ) volatile AUTOSPEED199_t AUTOSPEED199;
#define reg_CAL_SELLV_TXDATA_GEN2_LANE_7_0  AUTOSPEED199.BF.CAL_SELLV_TXDATA_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN3_LANE_7_0  AUTOSPEED199.BF.CAL_SELLV_TXDATA_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN4_LANE_7_0  AUTOSPEED199.BF.CAL_SELLV_TXDATA_GEN4_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN0_LANE_7_0  AUTOSPEED199.BF.CAL_SELLV_TXDATA_CONT_GEN0_LANE_7_0

// 0x02b4	AUTOSPEED200		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXDATA_CONT_GEN1_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN2_LANE_7_0      : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN3_LANE_7_0      : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN4_LANE_7_0      : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED200_t;
__xdata __at( 0x62b4 ) volatile AUTOSPEED200_t AUTOSPEED200;
#define reg_CAL_SELLV_TXDATA_CONT_GEN1_LANE_7_0  AUTOSPEED200.BF.CAL_SELLV_TXDATA_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN2_LANE_7_0  AUTOSPEED200.BF.CAL_SELLV_TXDATA_CONT_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN3_LANE_7_0  AUTOSPEED200.BF.CAL_SELLV_TXDATA_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN4_LANE_7_0  AUTOSPEED200.BF.CAL_SELLV_TXDATA_CONT_GEN4_LANE_7_0

// 0x02b8	AUTOSPEED201		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_GEN0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_GEN1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_GEN2_LANE_7_0            : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_GEN3_LANE_7_0            : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED201_t;
__xdata __at( 0x62b8 ) volatile AUTOSPEED201_t AUTOSPEED201;
#define reg_CAL_SELLV_TXCLK_GEN0_LANE_7_0  AUTOSPEED201.BF.CAL_SELLV_TXCLK_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXCLK_GEN1_LANE_7_0  AUTOSPEED201.BF.CAL_SELLV_TXCLK_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXCLK_GEN2_LANE_7_0  AUTOSPEED201.BF.CAL_SELLV_TXCLK_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXCLK_GEN3_LANE_7_0  AUTOSPEED201.BF.CAL_SELLV_TXCLK_GEN3_LANE_7_0

// 0x02bc	AUTOSPEED202		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_GEN4_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN0_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN1_LANE_7_0       : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN2_LANE_7_0       : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED202_t;
__xdata __at( 0x62bc ) volatile AUTOSPEED202_t AUTOSPEED202;
#define reg_CAL_SELLV_TXCLK_GEN4_LANE_7_0  AUTOSPEED202.BF.CAL_SELLV_TXCLK_GEN4_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN0_LANE_7_0  AUTOSPEED202.BF.CAL_SELLV_TXCLK_CONT_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN1_LANE_7_0  AUTOSPEED202.BF.CAL_SELLV_TXCLK_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN2_LANE_7_0  AUTOSPEED202.BF.CAL_SELLV_TXCLK_CONT_GEN2_LANE_7_0

// 0x02c0	AUTOSPEED203		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_CONT_GEN3_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN4_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED203_t;
__xdata __at( 0x62c0 ) volatile AUTOSPEED203_t AUTOSPEED203;
#define reg_CAL_SELLV_TXCLK_CONT_GEN3_LANE_7_0  AUTOSPEED203.BF.CAL_SELLV_TXCLK_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN4_LANE_7_0  AUTOSPEED203.BF.CAL_SELLV_TXCLK_CONT_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN0_LANE_7_0  AUTOSPEED203.BF.CAL_SELLV_RXDATACLK_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN1_LANE_7_0  AUTOSPEED203.BF.CAL_SELLV_RXDATACLK_GEN1_LANE_7_0

// 0x02c4	AUTOSPEED204		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXDATACLK_GEN2_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN3_LANE_7_0        : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN4_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN0_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED204_t;
__xdata __at( 0x62c4 ) volatile AUTOSPEED204_t AUTOSPEED204;
#define reg_CAL_SELLV_RXDATACLK_GEN2_LANE_7_0  AUTOSPEED204.BF.CAL_SELLV_RXDATACLK_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN3_LANE_7_0  AUTOSPEED204.BF.CAL_SELLV_RXDATACLK_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN4_LANE_7_0  AUTOSPEED204.BF.CAL_SELLV_RXDATACLK_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN0_LANE_7_0  AUTOSPEED204.BF.CAL_SELLV_RXDATACLK_CONT_GEN0_LANE_7_0

// 0x02c8	AUTOSPEED205		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN1_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN2_LANE_7_0   : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN3_LANE_7_0   : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN4_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED205_t;
__xdata __at( 0x62c8 ) volatile AUTOSPEED205_t AUTOSPEED205;
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN1_LANE_7_0  AUTOSPEED205.BF.CAL_SELLV_RXDATACLK_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN2_LANE_7_0  AUTOSPEED205.BF.CAL_SELLV_RXDATACLK_CONT_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN3_LANE_7_0  AUTOSPEED205.BF.CAL_SELLV_RXDATACLK_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN4_LANE_7_0  AUTOSPEED205.BF.CAL_SELLV_RXDATACLK_CONT_GEN4_LANE_7_0

// 0x02cc	AUTOSPEED206		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_GEN0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_GEN1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_GEN2_LANE_7_0            : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_GEN3_LANE_7_0            : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED206_t;
__xdata __at( 0x62cc ) volatile AUTOSPEED206_t AUTOSPEED206;
#define reg_CAL_SELLV_TXPRE_GEN0_LANE_7_0  AUTOSPEED206.BF.CAL_SELLV_TXPRE_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXPRE_GEN1_LANE_7_0  AUTOSPEED206.BF.CAL_SELLV_TXPRE_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXPRE_GEN2_LANE_7_0  AUTOSPEED206.BF.CAL_SELLV_TXPRE_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXPRE_GEN3_LANE_7_0  AUTOSPEED206.BF.CAL_SELLV_TXPRE_GEN3_LANE_7_0

// 0x02d0	AUTOSPEED207		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_GEN4_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN0_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN1_LANE_7_0       : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN2_LANE_7_0       : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED207_t;
__xdata __at( 0x62d0 ) volatile AUTOSPEED207_t AUTOSPEED207;
#define reg_CAL_SELLV_TXPRE_GEN4_LANE_7_0  AUTOSPEED207.BF.CAL_SELLV_TXPRE_GEN4_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN0_LANE_7_0  AUTOSPEED207.BF.CAL_SELLV_TXPRE_CONT_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN1_LANE_7_0  AUTOSPEED207.BF.CAL_SELLV_TXPRE_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN2_LANE_7_0  AUTOSPEED207.BF.CAL_SELLV_TXPRE_CONT_GEN2_LANE_7_0

// 0x02d4	AUTOSPEED208		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_CONT_GEN3_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN4_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED208_t;
__xdata __at( 0x62d4 ) volatile AUTOSPEED208_t AUTOSPEED208;
#define reg_CAL_SELLV_TXPRE_CONT_GEN3_LANE_7_0  AUTOSPEED208.BF.CAL_SELLV_TXPRE_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN4_LANE_7_0  AUTOSPEED208.BF.CAL_SELLV_TXPRE_CONT_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN0_LANE_7_0  AUTOSPEED208.BF.CAL_SELLV_RXSAMPLER_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN1_LANE_7_0  AUTOSPEED208.BF.CAL_SELLV_RXSAMPLER_GEN1_LANE_7_0

// 0x02d8	AUTOSPEED209		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXSAMPLER_GEN2_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN3_LANE_7_0        : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN4_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN0_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED209_t;
__xdata __at( 0x62d8 ) volatile AUTOSPEED209_t AUTOSPEED209;
#define reg_CAL_SELLV_RXSAMPLER_GEN2_LANE_7_0  AUTOSPEED209.BF.CAL_SELLV_RXSAMPLER_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN3_LANE_7_0  AUTOSPEED209.BF.CAL_SELLV_RXSAMPLER_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN4_LANE_7_0  AUTOSPEED209.BF.CAL_SELLV_RXSAMPLER_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN0_LANE_7_0  AUTOSPEED209.BF.CAL_SELLV_RXSAMPLER_CONT_GEN0_LANE_7_0

// 0x02dc	AUTOSPEED210		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN1_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN2_LANE_7_0   : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN3_LANE_7_0   : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN4_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED210_t;
__xdata __at( 0x62dc ) volatile AUTOSPEED210_t AUTOSPEED210;
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN1_LANE_7_0  AUTOSPEED210.BF.CAL_SELLV_RXSAMPLER_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN2_LANE_7_0  AUTOSPEED210.BF.CAL_SELLV_RXSAMPLER_CONT_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN3_LANE_7_0  AUTOSPEED210.BF.CAL_SELLV_RXSAMPLER_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN4_LANE_7_0  AUTOSPEED210.BF.CAL_SELLV_RXSAMPLER_CONT_GEN4_LANE_7_0

// 0x02e0	AUTOSPEED211		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXEOMCLK_GEN0_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_GEN1_LANE_7_0         : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_GEN2_LANE_7_0         : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_GEN3_LANE_7_0         : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED211_t;
__xdata __at( 0x62e0 ) volatile AUTOSPEED211_t AUTOSPEED211;
#define reg_CAL_SELLV_RXEOMCLK_GEN0_LANE_7_0  AUTOSPEED211.BF.CAL_SELLV_RXEOMCLK_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_GEN1_LANE_7_0  AUTOSPEED211.BF.CAL_SELLV_RXEOMCLK_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_GEN2_LANE_7_0  AUTOSPEED211.BF.CAL_SELLV_RXEOMCLK_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_GEN3_LANE_7_0  AUTOSPEED211.BF.CAL_SELLV_RXEOMCLK_GEN3_LANE_7_0

// 0x02e4	AUTOSPEED212		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXEOMCLK_GEN4_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN0_LANE_7_0    : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN1_LANE_7_0    : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN2_LANE_7_0    : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED212_t;
__xdata __at( 0x62e4 ) volatile AUTOSPEED212_t AUTOSPEED212;
#define reg_CAL_SELLV_RXEOMCLK_GEN4_LANE_7_0  AUTOSPEED212.BF.CAL_SELLV_RXEOMCLK_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN0_LANE_7_0  AUTOSPEED212.BF.CAL_SELLV_RXEOMCLK_CONT_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN1_LANE_7_0  AUTOSPEED212.BF.CAL_SELLV_RXEOMCLK_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN2_LANE_7_0  AUTOSPEED212.BF.CAL_SELLV_RXEOMCLK_CONT_GEN2_LANE_7_0

// 0x02e8	AUTOSPEED213		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN3_LANE_7_0    : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN4_LANE_7_0    : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED213_t;
__xdata __at( 0x62e8 ) volatile AUTOSPEED213_t AUTOSPEED213;
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN3_LANE_7_0  AUTOSPEED213.BF.CAL_SELLV_RXEOMCLK_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN4_LANE_7_0  AUTOSPEED213.BF.CAL_SELLV_RXEOMCLK_CONT_GEN4_LANE_7_0

#endif
