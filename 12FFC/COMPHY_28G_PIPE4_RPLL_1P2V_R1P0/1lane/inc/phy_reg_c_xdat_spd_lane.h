#ifndef PHY_REG_C_XDAT_SPD_LANE_H
#define PHY_REG_C_XDAT_SPD_LANE_H



// 0x0104	AUTOSPEED376		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G0_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G0_LANE                        : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G0_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_G0_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED376_t;
__xdata __at( 0x6304 ) volatile AUTOSPEED376_t AUTOSPEED376;
#define reg_PLL_RATE_SEL_TX_G0_LANE_3_0  AUTOSPEED376.BF.PLL_RATE_SEL_TX_G0_LANE_3_0
#define reg_TX_CK_SEL_G0_LANE  AUTOSPEED376.BF.TX_CK_SEL_G0_LANE
#define reg_TX_VDDCAL_RATE_EN_G0_LANE  AUTOSPEED376.BF.TX_VDDCAL_RATE_EN_G0_LANE
#define reg_TX_SPEED_DIV_G0_LANE_2_0  AUTOSPEED376.BF.TX_SPEED_DIV_G0_LANE_2_0

// 0x0108	AUTOSPEED377		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_G0_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_G0_LANE_2_0        : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_G0_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_G0_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED377_t;
__xdata __at( 0x6308 ) volatile AUTOSPEED377_t AUTOSPEED377;
#define reg_TX_REG_SPEED_TRK_CLK_G0_LANE_2_0  AUTOSPEED377.BF.TX_REG_SPEED_TRK_CLK_G0_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_G0_LANE_2_0  AUTOSPEED377.BF.TX_REG_SPEED_TRK_DATA_G0_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_G0_LANE  AUTOSPEED377.BF.TX_EM_CTRL_REG_EN_G0_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_G0_LANE  AUTOSPEED377.BF.TX_EM_CTRL_PIPE_SEL_G0_LANE

// 0x010c	AUTOSPEED378		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_G0_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_G0_LANE_3_0               : 4;	/* [11:8]     r/w 4'hf*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_G0_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_G0_LANE_3_0                : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED378_t;
__xdata __at( 0x630c ) volatile AUTOSPEED378_t AUTOSPEED378;
#define reg_TX_EM_PRE_EN_G0_LANE  AUTOSPEED378.BF.TX_EM_PRE_EN_G0_LANE
#define reg_TX_EM_PRE_CTRL_G0_LANE_3_0  AUTOSPEED378.BF.TX_EM_PRE_CTRL_G0_LANE_3_0
#define reg_TX_EM_PO_EN_G0_LANE  AUTOSPEED378.BF.TX_EM_PO_EN_G0_LANE
#define reg_TX_EM_PO_CTRL_G0_LANE_3_0  AUTOSPEED378.BF.TX_EM_PO_CTRL_G0_LANE_3_0

// 0x0110	AUTOSPEED379		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_G0_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_G0_LANE_1_0                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_G0_LANE_1_0                    : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G0_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED379_t;
__xdata __at( 0x6310 ) volatile AUTOSPEED379_t AUTOSPEED379;
#define reg_SLEWRATE_EN_G0_LANE_1_0  AUTOSPEED379.BF.SLEWRATE_EN_G0_LANE_1_0
#define reg_SLEWCTRL1_G0_LANE_1_0  AUTOSPEED379.BF.SLEWCTRL1_G0_LANE_1_0
#define reg_SLEWCTRL0_G0_LANE_1_0  AUTOSPEED379.BF.SLEWCTRL0_G0_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G0_LANE_1_0  AUTOSPEED379.BF.TX_TRAIN_PAT_SEL_G0_LANE_1_0

// 0x0114	AUTOSPEED380		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G0_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h88*/
		uint8_t TRAIN_PAT_NUM_G0_LANE_8                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G0_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_G0_LANE                  : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED380_t;
__xdata __at( 0x6314 ) volatile AUTOSPEED380_t AUTOSPEED380;
#define reg_TRAIN_PAT_NUM_G0_LANE_7_0  AUTOSPEED380.BF.TRAIN_PAT_NUM_G0_LANE_7_0
#define reg_TRAIN_PAT_NUM_G0_LANE_8  AUTOSPEED380.BF.TRAIN_PAT_NUM_G0_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_G0_LANE  AUTOSPEED380.BF.TX_TRAIN_PAT_TOGGLE_G0_LANE
#define reg_PACKET_SYNC_DIS_G0_LANE  AUTOSPEED380.BF.PACKET_SYNC_DIS_G0_LANE

// 0x0118	AUTOSPEED381		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_G0_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G0_LANE_3_0              : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_G0_LANE                        : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G0_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED381_t;
__xdata __at( 0x6318 ) volatile AUTOSPEED381_t AUTOSPEED381;
#define reg_SYNC_DET_DIS_G0_LANE  AUTOSPEED381.BF.SYNC_DET_DIS_G0_LANE
#define reg_PLL_RATE_SEL_RX_G0_LANE_3_0  AUTOSPEED381.BF.PLL_RATE_SEL_RX_G0_LANE_3_0
#define reg_RX_CK_SEL_G0_LANE  AUTOSPEED381.BF.RX_CK_SEL_G0_LANE
#define reg_RX_VDDCAL_RATE_EN_G0_LANE  AUTOSPEED381.BF.RX_VDDCAL_RATE_EN_G0_LANE

// 0x011c	AUTOSPEED382		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_G0_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G0_LANE_2_0              : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_G0_LANE_3_0                        : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_G0_LANE_1_0                        : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED382_t;
__xdata __at( 0x631c ) volatile AUTOSPEED382_t AUTOSPEED382;
#define reg_RX_SPEED_DIV_G0_LANE_2_0  AUTOSPEED382.BF.RX_SPEED_DIV_G0_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G0_LANE_2_0  AUTOSPEED382.BF.DTL_CLK_SPEEDUP_G0_LANE_2_0
#define reg_INTPI_G0_LANE_3_0  AUTOSPEED382.BF.INTPI_G0_LANE_3_0
#define reg_INTPR_G0_LANE_1_0  AUTOSPEED382.BF.INTPR_G0_LANE_1_0

// 0x0120	AUTOSPEED383		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_G0_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G0_LANE_2_0             : 3;	/* [10:8]     r/w 3'h4*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_G0_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_G0_LANE_2_0    : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED383_t;
__xdata __at( 0x6320 ) volatile AUTOSPEED383_t AUTOSPEED383;
#define reg_DLL_FREQ_SEL_G0_LANE_2_0  AUTOSPEED383.BF.DLL_FREQ_SEL_G0_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G0_LANE_2_0  AUTOSPEED383.BF.EOM_DLL_FREQ_SEL_G0_LANE_2_0
#define reg_ALIGN90_8G_EN_G0_LANE  AUTOSPEED383.BF.ALIGN90_8G_EN_G0_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_G0_LANE_2_0  AUTOSPEED383.BF.RX_REG0P9_SPEED_TRACK_CLK_G0_LANE_2_0

// 0x0124	AUTOSPEED384		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_G0_LANE   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_G0_LANE_2_0   : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_G0_LANE_2_0                   : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_G0_LANE_2_0                   : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED384_t;
__xdata __at( 0x6324 ) volatile AUTOSPEED384_t AUTOSPEED384;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_G0_LANE  AUTOSPEED384.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_G0_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_G0_LANE_2_0  AUTOSPEED384.BF.RX_REG0P9_SPEED_TRACK_DATA_G0_LANE_2_0
#define reg_RX_SELMUFI_G0_LANE_2_0  AUTOSPEED384.BF.RX_SELMUFI_G0_LANE_2_0
#define reg_RX_SELMUFF_G0_LANE_2_0  AUTOSPEED384.BF.RX_SELMUFF_G0_LANE_2_0

// 0x0128	AUTOSPEED385		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_G0_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_G0_LANE_3_0                  : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_RXCLK_25M_CTRL_G0_LANE_1_0            : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_RXCLK_25M_DIV1P5_EN_G0_LANE           : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED385_t;
__xdata __at( 0x6328 ) volatile AUTOSPEED385_t AUTOSPEED385;
#define reg_REG_SELMUPI_G0_LANE_3_0  AUTOSPEED385.BF.REG_SELMUPI_G0_LANE_3_0
#define reg_REG_SELMUPF_G0_LANE_3_0  AUTOSPEED385.BF.REG_SELMUPF_G0_LANE_3_0
#define reg_RX_RXCLK_25M_CTRL_G0_LANE_1_0  AUTOSPEED385.BF.RX_RXCLK_25M_CTRL_G0_LANE_1_0
#define reg_RX_RXCLK_25M_DIV1P5_EN_G0_LANE  AUTOSPEED385.BF.RX_RXCLK_25M_DIV1P5_EN_G0_LANE

// 0x012c	AUTOSPEED386		TBD
typedef union {
	struct {
		uint8_t RX_RXCLK_25M_DIV_G0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h32*/
		uint8_t RX_RXCLK_25M_FIX_DIV_EN_G0_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DTL_CLK_MODE_G0_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G0_LANE_7_0           : 8;	/*[31:24]     r/w 8'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED386_t;
__xdata __at( 0x632c ) volatile AUTOSPEED386_t AUTOSPEED386;
#define reg_RX_RXCLK_25M_DIV_G0_LANE_7_0  AUTOSPEED386.BF.RX_RXCLK_25M_DIV_G0_LANE_7_0
#define reg_RX_RXCLK_25M_FIX_DIV_EN_G0_LANE  AUTOSPEED386.BF.RX_RXCLK_25M_FIX_DIV_EN_G0_LANE
#define reg_DTL_CLK_MODE_G0_LANE_1_0  AUTOSPEED386.BF.DTL_CLK_MODE_G0_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G0_LANE_7_0  AUTOSPEED386.BF.RX_FOFFSET_EXTRA_M_G0_LANE_7_0

// 0x0130	AUTOSPEED387		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G0_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G0_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G0_LANE_9_8                 : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_G0_LANE                       : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED387_t;
__xdata __at( 0x6330 ) volatile AUTOSPEED387_t AUTOSPEED387;
#define reg_RX_FOFFSET_EXTRA_M_G0_LANE_13_8  AUTOSPEED387.BF.RX_FOFFSET_EXTRA_M_G0_LANE_13_8
#define reg_INIT_RXFOFFS_G0_LANE_7_0  AUTOSPEED387.BF.INIT_RXFOFFS_G0_LANE_7_0
#define reg_INIT_RXFOFFS_G0_LANE_9_8  AUTOSPEED387.BF.INIT_RXFOFFS_G0_LANE_9_8
#define reg_PU_F1P_D_E_G0_LANE  AUTOSPEED387.BF.PU_F1P_D_E_G0_LANE

// 0x0134	AUTOSPEED388		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_G0_LANE                       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_G0_LANE                       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_G0_LANE                       : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_G0_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED388_t;
__xdata __at( 0x6334 ) volatile AUTOSPEED388_t AUTOSPEED388;
#define reg_PU_F1N_D_E_G0_LANE  AUTOSPEED388.BF.PU_F1N_D_E_G0_LANE
#define reg_PU_F1P_S_E_G0_LANE  AUTOSPEED388.BF.PU_F1P_S_E_G0_LANE
#define reg_PU_F1N_S_E_G0_LANE  AUTOSPEED388.BF.PU_F1N_S_E_G0_LANE
#define reg_PU_F1P_D_O_G0_LANE  AUTOSPEED388.BF.PU_F1P_D_O_G0_LANE

// 0x0138	AUTOSPEED389		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_G0_LANE                       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_G0_LANE                       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_G0_LANE                       : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G0_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED389_t;
__xdata __at( 0x6338 ) volatile AUTOSPEED389_t AUTOSPEED389;
#define reg_PU_F1N_D_O_G0_LANE  AUTOSPEED389.BF.PU_F1N_D_O_G0_LANE
#define reg_PU_F1P_S_O_G0_LANE  AUTOSPEED389.BF.PU_F1P_S_O_G0_LANE
#define reg_PU_F1N_S_O_G0_LANE  AUTOSPEED389.BF.PU_F1N_S_O_G0_LANE
#define reg_PATH_DISABLE_EDGE_G0_LANE  AUTOSPEED389.BF.PATH_DISABLE_EDGE_G0_LANE

// 0x013c	AUTOSPEED390		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_G0_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_G0_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_G0_LANE                     : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_G0_LANE                     : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED390_t;
__xdata __at( 0x633c ) volatile AUTOSPEED390_t AUTOSPEED390;
#define reg_DFE_F1_POL_EN_D_G0_LANE  AUTOSPEED390.BF.DFE_F1_POL_EN_D_G0_LANE
#define reg_DFE_F1_POL_EN_S_G0_LANE  AUTOSPEED390.BF.DFE_F1_POL_EN_S_G0_LANE
#define reg_DFE_F1_POL_D_G0_LANE  AUTOSPEED390.BF.DFE_F1_POL_D_G0_LANE
#define reg_DFE_F1_POL_S_G0_LANE  AUTOSPEED390.BF.DFE_F1_POL_S_G0_LANE

// 0x0140	AUTOSPEED391		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G0_LANE : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G0_LANE : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_G0_LANE    : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_G0_LANE    : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED391_t;
__xdata __at( 0x6340 ) volatile AUTOSPEED391_t AUTOSPEED391;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G0_LANE  AUTOSPEED391.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G0_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G0_LANE  AUTOSPEED391.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G0_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_G0_LANE  AUTOSPEED391.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_G0_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_G0_LANE  AUTOSPEED391.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_G0_LANE

// 0x0144	AUTOSPEED392		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G0_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G0_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G0_LANE_1_0     : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_G0_LANE_3_0                : 4;	/*[27:24]     r/w 4'h2*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED392_t;
__xdata __at( 0x6344 ) volatile AUTOSPEED392_t AUTOSPEED392;
#define reg_REG_DFE_FULL_RATE_MODE_G0_LANE  AUTOSPEED392.BF.REG_DFE_FULL_RATE_MODE_G0_LANE
#define reg_REG_DFE_DIS_G0_LANE  AUTOSPEED392.BF.REG_DFE_DIS_G0_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G0_LANE_1_0  AUTOSPEED392.BF.REG_DFE_TAP_SETTLE_SCALE_G0_LANE_1_0
#define reg_FFE_DATA_RATE_G0_LANE_3_0  AUTOSPEED392.BF.FFE_DATA_RATE_G0_LANE_3_0

// 0x0148	AUTOSPEED393		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G0_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h1b*/
		uint8_t RXDLL_TEMP_B_G0_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED393_t;
__xdata __at( 0x6348 ) volatile AUTOSPEED393_t AUTOSPEED393;
#define reg_RXDLL_TEMP_A_G0_LANE_7_0  AUTOSPEED393.BF.RXDLL_TEMP_A_G0_LANE_7_0
#define reg_RXDLL_TEMP_B_G0_LANE_7_0  AUTOSPEED393.BF.RXDLL_TEMP_B_G0_LANE_7_0

// 0x014c	AUTOSPEED394		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED394_t;
__xdata __at( 0x634c ) volatile AUTOSPEED394_t AUTOSPEED394;

// 0x0150	AUTOSPEED395		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED395_t;
__xdata __at( 0x6350 ) volatile AUTOSPEED395_t AUTOSPEED395;

// 0x0154	AUTOSPEED396		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G1_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G1_LANE                        : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G1_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_G1_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h3*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED396_t;
__xdata __at( 0x6354 ) volatile AUTOSPEED396_t AUTOSPEED396;
#define reg_PLL_RATE_SEL_TX_G1_LANE_3_0  AUTOSPEED396.BF.PLL_RATE_SEL_TX_G1_LANE_3_0
#define reg_TX_CK_SEL_G1_LANE  AUTOSPEED396.BF.TX_CK_SEL_G1_LANE
#define reg_TX_VDDCAL_RATE_EN_G1_LANE  AUTOSPEED396.BF.TX_VDDCAL_RATE_EN_G1_LANE
#define reg_TX_SPEED_DIV_G1_LANE_2_0  AUTOSPEED396.BF.TX_SPEED_DIV_G1_LANE_2_0

// 0x0158	AUTOSPEED397		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_G1_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_G1_LANE_2_0        : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_G1_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_G1_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED397_t;
__xdata __at( 0x6358 ) volatile AUTOSPEED397_t AUTOSPEED397;
#define reg_TX_REG_SPEED_TRK_CLK_G1_LANE_2_0  AUTOSPEED397.BF.TX_REG_SPEED_TRK_CLK_G1_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_G1_LANE_2_0  AUTOSPEED397.BF.TX_REG_SPEED_TRK_DATA_G1_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_G1_LANE  AUTOSPEED397.BF.TX_EM_CTRL_REG_EN_G1_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_G1_LANE  AUTOSPEED397.BF.TX_EM_CTRL_PIPE_SEL_G1_LANE

// 0x015c	AUTOSPEED398		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_G1_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_G1_LANE_3_0               : 4;	/* [11:8]     r/w 4'hb*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_G1_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_G1_LANE_3_0                : 4;	/*[27:24]     r/w 4'hf*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED398_t;
__xdata __at( 0x635c ) volatile AUTOSPEED398_t AUTOSPEED398;
#define reg_TX_EM_PRE_EN_G1_LANE  AUTOSPEED398.BF.TX_EM_PRE_EN_G1_LANE
#define reg_TX_EM_PRE_CTRL_G1_LANE_3_0  AUTOSPEED398.BF.TX_EM_PRE_CTRL_G1_LANE_3_0
#define reg_TX_EM_PO_EN_G1_LANE  AUTOSPEED398.BF.TX_EM_PO_EN_G1_LANE
#define reg_TX_EM_PO_CTRL_G1_LANE_3_0  AUTOSPEED398.BF.TX_EM_PO_CTRL_G1_LANE_3_0

// 0x0160	AUTOSPEED399		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_G1_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_G1_LANE_1_0                    : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_G1_LANE_1_0                    : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G1_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED399_t;
__xdata __at( 0x6360 ) volatile AUTOSPEED399_t AUTOSPEED399;
#define reg_SLEWRATE_EN_G1_LANE_1_0  AUTOSPEED399.BF.SLEWRATE_EN_G1_LANE_1_0
#define reg_SLEWCTRL1_G1_LANE_1_0  AUTOSPEED399.BF.SLEWCTRL1_G1_LANE_1_0
#define reg_SLEWCTRL0_G1_LANE_1_0  AUTOSPEED399.BF.SLEWCTRL0_G1_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G1_LANE_1_0  AUTOSPEED399.BF.TX_TRAIN_PAT_SEL_G1_LANE_1_0

// 0x0164	AUTOSPEED400		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G1_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h88*/
		uint8_t TRAIN_PAT_NUM_G1_LANE_8                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G1_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_G1_LANE                  : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED400_t;
__xdata __at( 0x6364 ) volatile AUTOSPEED400_t AUTOSPEED400;
#define reg_TRAIN_PAT_NUM_G1_LANE_7_0  AUTOSPEED400.BF.TRAIN_PAT_NUM_G1_LANE_7_0
#define reg_TRAIN_PAT_NUM_G1_LANE_8  AUTOSPEED400.BF.TRAIN_PAT_NUM_G1_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_G1_LANE  AUTOSPEED400.BF.TX_TRAIN_PAT_TOGGLE_G1_LANE
#define reg_PACKET_SYNC_DIS_G1_LANE  AUTOSPEED400.BF.PACKET_SYNC_DIS_G1_LANE

// 0x0168	AUTOSPEED401		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_G1_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G1_LANE_3_0              : 4;	/* [11:8]     r/w 4'h3*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_G1_LANE                        : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G1_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED401_t;
__xdata __at( 0x6368 ) volatile AUTOSPEED401_t AUTOSPEED401;
#define reg_SYNC_DET_DIS_G1_LANE  AUTOSPEED401.BF.SYNC_DET_DIS_G1_LANE
#define reg_PLL_RATE_SEL_RX_G1_LANE_3_0  AUTOSPEED401.BF.PLL_RATE_SEL_RX_G1_LANE_3_0
#define reg_RX_CK_SEL_G1_LANE  AUTOSPEED401.BF.RX_CK_SEL_G1_LANE
#define reg_RX_VDDCAL_RATE_EN_G1_LANE  AUTOSPEED401.BF.RX_VDDCAL_RATE_EN_G1_LANE

// 0x016c	AUTOSPEED402		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_G1_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G1_LANE_2_0              : 3;	/* [10:8]     r/w 3'h2*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_G1_LANE_3_0                        : 4;	/*[19:16]     r/w 4'hb*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_G1_LANE_1_0                        : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED402_t;
__xdata __at( 0x636c ) volatile AUTOSPEED402_t AUTOSPEED402;
#define reg_RX_SPEED_DIV_G1_LANE_2_0  AUTOSPEED402.BF.RX_SPEED_DIV_G1_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G1_LANE_2_0  AUTOSPEED402.BF.DTL_CLK_SPEEDUP_G1_LANE_2_0
#define reg_INTPI_G1_LANE_3_0  AUTOSPEED402.BF.INTPI_G1_LANE_3_0
#define reg_INTPR_G1_LANE_1_0  AUTOSPEED402.BF.INTPR_G1_LANE_1_0

// 0x0170	AUTOSPEED403		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_G1_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G1_LANE_2_0             : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_G1_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_G1_LANE_2_0    : 3;	/*[26:24]     r/w 3'h3*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED403_t;
__xdata __at( 0x6370 ) volatile AUTOSPEED403_t AUTOSPEED403;
#define reg_DLL_FREQ_SEL_G1_LANE_2_0  AUTOSPEED403.BF.DLL_FREQ_SEL_G1_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G1_LANE_2_0  AUTOSPEED403.BF.EOM_DLL_FREQ_SEL_G1_LANE_2_0
#define reg_ALIGN90_8G_EN_G1_LANE  AUTOSPEED403.BF.ALIGN90_8G_EN_G1_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_G1_LANE_2_0  AUTOSPEED403.BF.RX_REG0P9_SPEED_TRACK_CLK_G1_LANE_2_0

// 0x0174	AUTOSPEED404		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_G1_LANE   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_G1_LANE_2_0   : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_G1_LANE_2_0                   : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_G1_LANE_2_0                   : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED404_t;
__xdata __at( 0x6374 ) volatile AUTOSPEED404_t AUTOSPEED404;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_G1_LANE  AUTOSPEED404.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_G1_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_G1_LANE_2_0  AUTOSPEED404.BF.RX_REG0P9_SPEED_TRACK_DATA_G1_LANE_2_0
#define reg_RX_SELMUFI_G1_LANE_2_0  AUTOSPEED404.BF.RX_SELMUFI_G1_LANE_2_0
#define reg_RX_SELMUFF_G1_LANE_2_0  AUTOSPEED404.BF.RX_SELMUFF_G1_LANE_2_0

// 0x0178	AUTOSPEED405		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_G1_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_G1_LANE_3_0                  : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_RXCLK_25M_CTRL_G1_LANE_1_0            : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_RXCLK_25M_DIV1P5_EN_G1_LANE           : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED405_t;
__xdata __at( 0x6378 ) volatile AUTOSPEED405_t AUTOSPEED405;
#define reg_REG_SELMUPI_G1_LANE_3_0  AUTOSPEED405.BF.REG_SELMUPI_G1_LANE_3_0
#define reg_REG_SELMUPF_G1_LANE_3_0  AUTOSPEED405.BF.REG_SELMUPF_G1_LANE_3_0
#define reg_RX_RXCLK_25M_CTRL_G1_LANE_1_0  AUTOSPEED405.BF.RX_RXCLK_25M_CTRL_G1_LANE_1_0
#define reg_RX_RXCLK_25M_DIV1P5_EN_G1_LANE  AUTOSPEED405.BF.RX_RXCLK_25M_DIV1P5_EN_G1_LANE

// 0x017c	AUTOSPEED406		TBD
typedef union {
	struct {
		uint8_t RX_RXCLK_25M_DIV_G1_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h7d*/
		uint8_t RX_RXCLK_25M_FIX_DIV_EN_G1_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DTL_CLK_MODE_G1_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G1_LANE_7_0           : 8;	/*[31:24]     r/w 8'h4d*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED406_t;
__xdata __at( 0x637c ) volatile AUTOSPEED406_t AUTOSPEED406;
#define reg_RX_RXCLK_25M_DIV_G1_LANE_7_0  AUTOSPEED406.BF.RX_RXCLK_25M_DIV_G1_LANE_7_0
#define reg_RX_RXCLK_25M_FIX_DIV_EN_G1_LANE  AUTOSPEED406.BF.RX_RXCLK_25M_FIX_DIV_EN_G1_LANE
#define reg_DTL_CLK_MODE_G1_LANE_1_0  AUTOSPEED406.BF.DTL_CLK_MODE_G1_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G1_LANE_7_0  AUTOSPEED406.BF.RX_FOFFSET_EXTRA_M_G1_LANE_7_0

// 0x0180	AUTOSPEED407		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G1_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h1a*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G1_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G1_LANE_9_8                 : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_G1_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED407_t;
__xdata __at( 0x6380 ) volatile AUTOSPEED407_t AUTOSPEED407;
#define reg_RX_FOFFSET_EXTRA_M_G1_LANE_13_8  AUTOSPEED407.BF.RX_FOFFSET_EXTRA_M_G1_LANE_13_8
#define reg_INIT_RXFOFFS_G1_LANE_7_0  AUTOSPEED407.BF.INIT_RXFOFFS_G1_LANE_7_0
#define reg_INIT_RXFOFFS_G1_LANE_9_8  AUTOSPEED407.BF.INIT_RXFOFFS_G1_LANE_9_8
#define reg_PU_F1P_D_E_G1_LANE  AUTOSPEED407.BF.PU_F1P_D_E_G1_LANE

// 0x0184	AUTOSPEED408		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_G1_LANE                       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_G1_LANE                       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_G1_LANE                       : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_G1_LANE                       : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED408_t;
__xdata __at( 0x6384 ) volatile AUTOSPEED408_t AUTOSPEED408;
#define reg_PU_F1N_D_E_G1_LANE  AUTOSPEED408.BF.PU_F1N_D_E_G1_LANE
#define reg_PU_F1P_S_E_G1_LANE  AUTOSPEED408.BF.PU_F1P_S_E_G1_LANE
#define reg_PU_F1N_S_E_G1_LANE  AUTOSPEED408.BF.PU_F1N_S_E_G1_LANE
#define reg_PU_F1P_D_O_G1_LANE  AUTOSPEED408.BF.PU_F1P_D_O_G1_LANE

// 0x0188	AUTOSPEED409		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_G1_LANE                       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_G1_LANE                       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_G1_LANE                       : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G1_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED409_t;
__xdata __at( 0x6388 ) volatile AUTOSPEED409_t AUTOSPEED409;
#define reg_PU_F1N_D_O_G1_LANE  AUTOSPEED409.BF.PU_F1N_D_O_G1_LANE
#define reg_PU_F1P_S_O_G1_LANE  AUTOSPEED409.BF.PU_F1P_S_O_G1_LANE
#define reg_PU_F1N_S_O_G1_LANE  AUTOSPEED409.BF.PU_F1N_S_O_G1_LANE
#define reg_PATH_DISABLE_EDGE_G1_LANE  AUTOSPEED409.BF.PATH_DISABLE_EDGE_G1_LANE

// 0x018c	AUTOSPEED410		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_G1_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_G1_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_G1_LANE                     : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_G1_LANE                     : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED410_t;
__xdata __at( 0x638c ) volatile AUTOSPEED410_t AUTOSPEED410;
#define reg_DFE_F1_POL_EN_D_G1_LANE  AUTOSPEED410.BF.DFE_F1_POL_EN_D_G1_LANE
#define reg_DFE_F1_POL_EN_S_G1_LANE  AUTOSPEED410.BF.DFE_F1_POL_EN_S_G1_LANE
#define reg_DFE_F1_POL_D_G1_LANE  AUTOSPEED410.BF.DFE_F1_POL_D_G1_LANE
#define reg_DFE_F1_POL_S_G1_LANE  AUTOSPEED410.BF.DFE_F1_POL_S_G1_LANE

// 0x0190	AUTOSPEED411		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G1_LANE : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G1_LANE : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_G1_LANE    : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_G1_LANE    : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED411_t;
__xdata __at( 0x6390 ) volatile AUTOSPEED411_t AUTOSPEED411;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G1_LANE  AUTOSPEED411.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G1_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G1_LANE  AUTOSPEED411.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G1_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_G1_LANE  AUTOSPEED411.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_G1_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_G1_LANE  AUTOSPEED411.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_G1_LANE

// 0x0194	AUTOSPEED412		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G1_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G1_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G1_LANE_1_0     : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_G1_LANE_3_0                : 4;	/*[27:24]     r/w 4'h3*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED412_t;
__xdata __at( 0x6394 ) volatile AUTOSPEED412_t AUTOSPEED412;
#define reg_REG_DFE_FULL_RATE_MODE_G1_LANE  AUTOSPEED412.BF.REG_DFE_FULL_RATE_MODE_G1_LANE
#define reg_REG_DFE_DIS_G1_LANE  AUTOSPEED412.BF.REG_DFE_DIS_G1_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G1_LANE_1_0  AUTOSPEED412.BF.REG_DFE_TAP_SETTLE_SCALE_G1_LANE_1_0
#define reg_FFE_DATA_RATE_G1_LANE_3_0  AUTOSPEED412.BF.FFE_DATA_RATE_G1_LANE_3_0

// 0x0198	AUTOSPEED413		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G1_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h21*/
		uint8_t RXDLL_TEMP_B_G1_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED413_t;
__xdata __at( 0x6398 ) volatile AUTOSPEED413_t AUTOSPEED413;
#define reg_RXDLL_TEMP_A_G1_LANE_7_0  AUTOSPEED413.BF.RXDLL_TEMP_A_G1_LANE_7_0
#define reg_RXDLL_TEMP_B_G1_LANE_7_0  AUTOSPEED413.BF.RXDLL_TEMP_B_G1_LANE_7_0

// 0x019c	AUTOSPEED414		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED414_t;
__xdata __at( 0x639c ) volatile AUTOSPEED414_t AUTOSPEED414;

// 0x01a0	AUTOSPEED415		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED415_t;
__xdata __at( 0x63a0 ) volatile AUTOSPEED415_t AUTOSPEED415;

// 0x01a4	AUTOSPEED416		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G2_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G2_LANE                        : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G2_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_G2_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h2*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED416_t;
__xdata __at( 0x63a4 ) volatile AUTOSPEED416_t AUTOSPEED416;
#define reg_PLL_RATE_SEL_TX_G2_LANE_3_0  AUTOSPEED416.BF.PLL_RATE_SEL_TX_G2_LANE_3_0
#define reg_TX_CK_SEL_G2_LANE  AUTOSPEED416.BF.TX_CK_SEL_G2_LANE
#define reg_TX_VDDCAL_RATE_EN_G2_LANE  AUTOSPEED416.BF.TX_VDDCAL_RATE_EN_G2_LANE
#define reg_TX_SPEED_DIV_G2_LANE_2_0  AUTOSPEED416.BF.TX_SPEED_DIV_G2_LANE_2_0

// 0x01a8	AUTOSPEED417		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_G2_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_G2_LANE_2_0        : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_G2_LANE                : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_G2_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED417_t;
__xdata __at( 0x63a8 ) volatile AUTOSPEED417_t AUTOSPEED417;
#define reg_TX_REG_SPEED_TRK_CLK_G2_LANE_2_0  AUTOSPEED417.BF.TX_REG_SPEED_TRK_CLK_G2_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_G2_LANE_2_0  AUTOSPEED417.BF.TX_REG_SPEED_TRK_DATA_G2_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_G2_LANE  AUTOSPEED417.BF.TX_EM_CTRL_REG_EN_G2_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_G2_LANE  AUTOSPEED417.BF.TX_EM_CTRL_PIPE_SEL_G2_LANE

// 0x01ac	AUTOSPEED418		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_G2_LANE                     : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_G2_LANE_3_0               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_G2_LANE                      : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_G2_LANE_3_0                : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED418_t;
__xdata __at( 0x63ac ) volatile AUTOSPEED418_t AUTOSPEED418;
#define reg_TX_EM_PRE_EN_G2_LANE  AUTOSPEED418.BF.TX_EM_PRE_EN_G2_LANE
#define reg_TX_EM_PRE_CTRL_G2_LANE_3_0  AUTOSPEED418.BF.TX_EM_PRE_CTRL_G2_LANE_3_0
#define reg_TX_EM_PO_EN_G2_LANE  AUTOSPEED418.BF.TX_EM_PO_EN_G2_LANE
#define reg_TX_EM_PO_CTRL_G2_LANE_3_0  AUTOSPEED418.BF.TX_EM_PO_CTRL_G2_LANE_3_0

// 0x01b0	AUTOSPEED419		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_G2_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_G2_LANE_1_0                    : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_G2_LANE_1_0                    : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G2_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED419_t;
__xdata __at( 0x63b0 ) volatile AUTOSPEED419_t AUTOSPEED419;
#define reg_SLEWRATE_EN_G2_LANE_1_0  AUTOSPEED419.BF.SLEWRATE_EN_G2_LANE_1_0
#define reg_SLEWCTRL1_G2_LANE_1_0  AUTOSPEED419.BF.SLEWCTRL1_G2_LANE_1_0
#define reg_SLEWCTRL0_G2_LANE_1_0  AUTOSPEED419.BF.SLEWCTRL0_G2_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G2_LANE_1_0  AUTOSPEED419.BF.TX_TRAIN_PAT_SEL_G2_LANE_1_0

// 0x01b4	AUTOSPEED420		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G2_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h88*/
		uint8_t TRAIN_PAT_NUM_G2_LANE_8                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G2_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_G2_LANE                  : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED420_t;
__xdata __at( 0x63b4 ) volatile AUTOSPEED420_t AUTOSPEED420;
#define reg_TRAIN_PAT_NUM_G2_LANE_7_0  AUTOSPEED420.BF.TRAIN_PAT_NUM_G2_LANE_7_0
#define reg_TRAIN_PAT_NUM_G2_LANE_8  AUTOSPEED420.BF.TRAIN_PAT_NUM_G2_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_G2_LANE  AUTOSPEED420.BF.TX_TRAIN_PAT_TOGGLE_G2_LANE
#define reg_PACKET_SYNC_DIS_G2_LANE  AUTOSPEED420.BF.PACKET_SYNC_DIS_G2_LANE

// 0x01b8	AUTOSPEED421		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_G2_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G2_LANE_3_0              : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_G2_LANE                        : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G2_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED421_t;
__xdata __at( 0x63b8 ) volatile AUTOSPEED421_t AUTOSPEED421;
#define reg_SYNC_DET_DIS_G2_LANE  AUTOSPEED421.BF.SYNC_DET_DIS_G2_LANE
#define reg_PLL_RATE_SEL_RX_G2_LANE_3_0  AUTOSPEED421.BF.PLL_RATE_SEL_RX_G2_LANE_3_0
#define reg_RX_CK_SEL_G2_LANE  AUTOSPEED421.BF.RX_CK_SEL_G2_LANE
#define reg_RX_VDDCAL_RATE_EN_G2_LANE  AUTOSPEED421.BF.RX_VDDCAL_RATE_EN_G2_LANE

// 0x01bc	AUTOSPEED422		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_G2_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h5*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G2_LANE_2_0              : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_G2_LANE_3_0                        : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_G2_LANE_1_0                        : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED422_t;
__xdata __at( 0x63bc ) volatile AUTOSPEED422_t AUTOSPEED422;
#define reg_RX_SPEED_DIV_G2_LANE_2_0  AUTOSPEED422.BF.RX_SPEED_DIV_G2_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G2_LANE_2_0  AUTOSPEED422.BF.DTL_CLK_SPEEDUP_G2_LANE_2_0
#define reg_INTPI_G2_LANE_3_0  AUTOSPEED422.BF.INTPI_G2_LANE_3_0
#define reg_INTPR_G2_LANE_1_0  AUTOSPEED422.BF.INTPR_G2_LANE_1_0

// 0x01c0	AUTOSPEED423		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_G2_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G2_LANE_2_0             : 3;	/* [10:8]     r/w 3'h4*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_G2_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_G2_LANE_2_0    : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED423_t;
__xdata __at( 0x63c0 ) volatile AUTOSPEED423_t AUTOSPEED423;
#define reg_DLL_FREQ_SEL_G2_LANE_2_0  AUTOSPEED423.BF.DLL_FREQ_SEL_G2_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G2_LANE_2_0  AUTOSPEED423.BF.EOM_DLL_FREQ_SEL_G2_LANE_2_0
#define reg_ALIGN90_8G_EN_G2_LANE  AUTOSPEED423.BF.ALIGN90_8G_EN_G2_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_G2_LANE_2_0  AUTOSPEED423.BF.RX_REG0P9_SPEED_TRACK_CLK_G2_LANE_2_0

// 0x01c4	AUTOSPEED424		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_G2_LANE   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_G2_LANE_2_0   : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_G2_LANE_2_0                   : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_G2_LANE_2_0                   : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED424_t;
__xdata __at( 0x63c4 ) volatile AUTOSPEED424_t AUTOSPEED424;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_G2_LANE  AUTOSPEED424.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_G2_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_G2_LANE_2_0  AUTOSPEED424.BF.RX_REG0P9_SPEED_TRACK_DATA_G2_LANE_2_0
#define reg_RX_SELMUFI_G2_LANE_2_0  AUTOSPEED424.BF.RX_SELMUFI_G2_LANE_2_0
#define reg_RX_SELMUFF_G2_LANE_2_0  AUTOSPEED424.BF.RX_SELMUFF_G2_LANE_2_0

// 0x01c8	AUTOSPEED425		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_G2_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_G2_LANE_3_0                  : 4;	/* [11:8]     r/w 4'h2*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_RXCLK_25M_CTRL_G2_LANE_1_0            : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_RXCLK_25M_DIV1P5_EN_G2_LANE           : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED425_t;
__xdata __at( 0x63c8 ) volatile AUTOSPEED425_t AUTOSPEED425;
#define reg_REG_SELMUPI_G2_LANE_3_0  AUTOSPEED425.BF.REG_SELMUPI_G2_LANE_3_0
#define reg_REG_SELMUPF_G2_LANE_3_0  AUTOSPEED425.BF.REG_SELMUPF_G2_LANE_3_0
#define reg_RX_RXCLK_25M_CTRL_G2_LANE_1_0  AUTOSPEED425.BF.RX_RXCLK_25M_CTRL_G2_LANE_1_0
#define reg_RX_RXCLK_25M_DIV1P5_EN_G2_LANE  AUTOSPEED425.BF.RX_RXCLK_25M_DIV1P5_EN_G2_LANE

// 0x01cc	AUTOSPEED426		TBD
typedef union {
	struct {
		uint8_t RX_RXCLK_25M_DIV_G2_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h89*/
		uint8_t RX_RXCLK_25M_FIX_DIV_EN_G2_LANE          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DTL_CLK_MODE_G2_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G2_LANE_7_0           : 8;	/*[31:24]     r/w 8'hb3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED426_t;
__xdata __at( 0x63cc ) volatile AUTOSPEED426_t AUTOSPEED426;
#define reg_RX_RXCLK_25M_DIV_G2_LANE_7_0  AUTOSPEED426.BF.RX_RXCLK_25M_DIV_G2_LANE_7_0
#define reg_RX_RXCLK_25M_FIX_DIV_EN_G2_LANE  AUTOSPEED426.BF.RX_RXCLK_25M_FIX_DIV_EN_G2_LANE
#define reg_DTL_CLK_MODE_G2_LANE_1_0  AUTOSPEED426.BF.DTL_CLK_MODE_G2_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G2_LANE_7_0  AUTOSPEED426.BF.RX_FOFFSET_EXTRA_M_G2_LANE_7_0

// 0x01d0	AUTOSPEED427		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G2_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G2_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G2_LANE_9_8                 : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_G2_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED427_t;
__xdata __at( 0x63d0 ) volatile AUTOSPEED427_t AUTOSPEED427;
#define reg_RX_FOFFSET_EXTRA_M_G2_LANE_13_8  AUTOSPEED427.BF.RX_FOFFSET_EXTRA_M_G2_LANE_13_8
#define reg_INIT_RXFOFFS_G2_LANE_7_0  AUTOSPEED427.BF.INIT_RXFOFFS_G2_LANE_7_0
#define reg_INIT_RXFOFFS_G2_LANE_9_8  AUTOSPEED427.BF.INIT_RXFOFFS_G2_LANE_9_8
#define reg_PU_F1P_D_E_G2_LANE  AUTOSPEED427.BF.PU_F1P_D_E_G2_LANE

// 0x01d4	AUTOSPEED428		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_G2_LANE                       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_G2_LANE                       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_G2_LANE                       : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_G2_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED428_t;
__xdata __at( 0x63d4 ) volatile AUTOSPEED428_t AUTOSPEED428;
#define reg_PU_F1N_D_E_G2_LANE  AUTOSPEED428.BF.PU_F1N_D_E_G2_LANE
#define reg_PU_F1P_S_E_G2_LANE  AUTOSPEED428.BF.PU_F1P_S_E_G2_LANE
#define reg_PU_F1N_S_E_G2_LANE  AUTOSPEED428.BF.PU_F1N_S_E_G2_LANE
#define reg_PU_F1P_D_O_G2_LANE  AUTOSPEED428.BF.PU_F1P_D_O_G2_LANE

// 0x01d8	AUTOSPEED429		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_G2_LANE                       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_G2_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_G2_LANE                       : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G2_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED429_t;
__xdata __at( 0x63d8 ) volatile AUTOSPEED429_t AUTOSPEED429;
#define reg_PU_F1N_D_O_G2_LANE  AUTOSPEED429.BF.PU_F1N_D_O_G2_LANE
#define reg_PU_F1P_S_O_G2_LANE  AUTOSPEED429.BF.PU_F1P_S_O_G2_LANE
#define reg_PU_F1N_S_O_G2_LANE  AUTOSPEED429.BF.PU_F1N_S_O_G2_LANE
#define reg_PATH_DISABLE_EDGE_G2_LANE  AUTOSPEED429.BF.PATH_DISABLE_EDGE_G2_LANE

// 0x01dc	AUTOSPEED430		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_G2_LANE                  : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_G2_LANE                  : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_G2_LANE                     : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_G2_LANE                     : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED430_t;
__xdata __at( 0x63dc ) volatile AUTOSPEED430_t AUTOSPEED430;
#define reg_DFE_F1_POL_EN_D_G2_LANE  AUTOSPEED430.BF.DFE_F1_POL_EN_D_G2_LANE
#define reg_DFE_F1_POL_EN_S_G2_LANE  AUTOSPEED430.BF.DFE_F1_POL_EN_S_G2_LANE
#define reg_DFE_F1_POL_D_G2_LANE  AUTOSPEED430.BF.DFE_F1_POL_D_G2_LANE
#define reg_DFE_F1_POL_S_G2_LANE  AUTOSPEED430.BF.DFE_F1_POL_S_G2_LANE

// 0x01e0	AUTOSPEED431		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G2_LANE : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G2_LANE : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_G2_LANE    : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_G2_LANE    : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED431_t;
__xdata __at( 0x63e0 ) volatile AUTOSPEED431_t AUTOSPEED431;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G2_LANE  AUTOSPEED431.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G2_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G2_LANE  AUTOSPEED431.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G2_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_G2_LANE  AUTOSPEED431.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_G2_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_G2_LANE  AUTOSPEED431.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_G2_LANE

// 0x01e4	AUTOSPEED432		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G2_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G2_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G2_LANE_1_0     : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_G2_LANE_3_0                : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED432_t;
__xdata __at( 0x63e4 ) volatile AUTOSPEED432_t AUTOSPEED432;
#define reg_REG_DFE_FULL_RATE_MODE_G2_LANE  AUTOSPEED432.BF.REG_DFE_FULL_RATE_MODE_G2_LANE
#define reg_REG_DFE_DIS_G2_LANE  AUTOSPEED432.BF.REG_DFE_DIS_G2_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G2_LANE_1_0  AUTOSPEED432.BF.REG_DFE_TAP_SETTLE_SCALE_G2_LANE_1_0
#define reg_FFE_DATA_RATE_G2_LANE_3_0  AUTOSPEED432.BF.FFE_DATA_RATE_G2_LANE_3_0

// 0x01e8	AUTOSPEED433		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G2_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h1b*/
		uint8_t RXDLL_TEMP_B_G2_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED433_t;
__xdata __at( 0x63e8 ) volatile AUTOSPEED433_t AUTOSPEED433;
#define reg_RXDLL_TEMP_A_G2_LANE_7_0  AUTOSPEED433.BF.RXDLL_TEMP_A_G2_LANE_7_0
#define reg_RXDLL_TEMP_B_G2_LANE_7_0  AUTOSPEED433.BF.RXDLL_TEMP_B_G2_LANE_7_0

// 0x01ec	AUTOSPEED434		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED434_t;
__xdata __at( 0x63ec ) volatile AUTOSPEED434_t AUTOSPEED434;

// 0x01f0	AUTOSPEED435		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED435_t;
__xdata __at( 0x63f0 ) volatile AUTOSPEED435_t AUTOSPEED435;

// 0x01f4	AUTOSPEED436		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G3_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G3_LANE                        : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G3_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_G3_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED436_t;
__xdata __at( 0x63f4 ) volatile AUTOSPEED436_t AUTOSPEED436;
#define reg_PLL_RATE_SEL_TX_G3_LANE_3_0  AUTOSPEED436.BF.PLL_RATE_SEL_TX_G3_LANE_3_0
#define reg_TX_CK_SEL_G3_LANE  AUTOSPEED436.BF.TX_CK_SEL_G3_LANE
#define reg_TX_VDDCAL_RATE_EN_G3_LANE  AUTOSPEED436.BF.TX_VDDCAL_RATE_EN_G3_LANE
#define reg_TX_SPEED_DIV_G3_LANE_2_0  AUTOSPEED436.BF.TX_SPEED_DIV_G3_LANE_2_0

// 0x01f8	AUTOSPEED437		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_G3_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_G3_LANE_2_0        : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_G3_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_G3_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED437_t;
__xdata __at( 0x63f8 ) volatile AUTOSPEED437_t AUTOSPEED437;
#define reg_TX_REG_SPEED_TRK_CLK_G3_LANE_2_0  AUTOSPEED437.BF.TX_REG_SPEED_TRK_CLK_G3_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_G3_LANE_2_0  AUTOSPEED437.BF.TX_REG_SPEED_TRK_DATA_G3_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_G3_LANE  AUTOSPEED437.BF.TX_EM_CTRL_REG_EN_G3_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_G3_LANE  AUTOSPEED437.BF.TX_EM_CTRL_PIPE_SEL_G3_LANE

// 0x01fc	AUTOSPEED438		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_G3_LANE                     : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_G3_LANE_3_0               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_G3_LANE                      : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_G3_LANE_3_0                : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED438_t;
__xdata __at( 0x63fc ) volatile AUTOSPEED438_t AUTOSPEED438;
#define reg_TX_EM_PRE_EN_G3_LANE  AUTOSPEED438.BF.TX_EM_PRE_EN_G3_LANE
#define reg_TX_EM_PRE_CTRL_G3_LANE_3_0  AUTOSPEED438.BF.TX_EM_PRE_CTRL_G3_LANE_3_0
#define reg_TX_EM_PO_EN_G3_LANE  AUTOSPEED438.BF.TX_EM_PO_EN_G3_LANE
#define reg_TX_EM_PO_CTRL_G3_LANE_3_0  AUTOSPEED438.BF.TX_EM_PO_CTRL_G3_LANE_3_0

// 0x0200	AUTOSPEED439		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_G3_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_G3_LANE_1_0                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_G3_LANE_1_0                    : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G3_LANE_1_0             : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED439_t;
__xdata __at( 0x6400 ) volatile AUTOSPEED439_t AUTOSPEED439;
#define reg_SLEWRATE_EN_G3_LANE_1_0  AUTOSPEED439.BF.SLEWRATE_EN_G3_LANE_1_0
#define reg_SLEWCTRL1_G3_LANE_1_0  AUTOSPEED439.BF.SLEWCTRL1_G3_LANE_1_0
#define reg_SLEWCTRL0_G3_LANE_1_0  AUTOSPEED439.BF.SLEWCTRL0_G3_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G3_LANE_1_0  AUTOSPEED439.BF.TX_TRAIN_PAT_SEL_G3_LANE_1_0

// 0x0204	AUTOSPEED440		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G3_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h88*/
		uint8_t TRAIN_PAT_NUM_G3_LANE_8                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G3_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_G3_LANE                  : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED440_t;
__xdata __at( 0x6404 ) volatile AUTOSPEED440_t AUTOSPEED440;
#define reg_TRAIN_PAT_NUM_G3_LANE_7_0  AUTOSPEED440.BF.TRAIN_PAT_NUM_G3_LANE_7_0
#define reg_TRAIN_PAT_NUM_G3_LANE_8  AUTOSPEED440.BF.TRAIN_PAT_NUM_G3_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_G3_LANE  AUTOSPEED440.BF.TX_TRAIN_PAT_TOGGLE_G3_LANE
#define reg_PACKET_SYNC_DIS_G3_LANE  AUTOSPEED440.BF.PACKET_SYNC_DIS_G3_LANE

// 0x0208	AUTOSPEED441		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_G3_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G3_LANE_3_0              : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_G3_LANE                        : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G3_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED441_t;
__xdata __at( 0x6408 ) volatile AUTOSPEED441_t AUTOSPEED441;
#define reg_SYNC_DET_DIS_G3_LANE  AUTOSPEED441.BF.SYNC_DET_DIS_G3_LANE
#define reg_PLL_RATE_SEL_RX_G3_LANE_3_0  AUTOSPEED441.BF.PLL_RATE_SEL_RX_G3_LANE_3_0
#define reg_RX_CK_SEL_G3_LANE  AUTOSPEED441.BF.RX_CK_SEL_G3_LANE
#define reg_RX_VDDCAL_RATE_EN_G3_LANE  AUTOSPEED441.BF.RX_VDDCAL_RATE_EN_G3_LANE

// 0x020c	AUTOSPEED442		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_G3_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G3_LANE_2_0              : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_G3_LANE_3_0                        : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_G3_LANE_1_0                        : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED442_t;
__xdata __at( 0x640c ) volatile AUTOSPEED442_t AUTOSPEED442;
#define reg_RX_SPEED_DIV_G3_LANE_2_0  AUTOSPEED442.BF.RX_SPEED_DIV_G3_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G3_LANE_2_0  AUTOSPEED442.BF.DTL_CLK_SPEEDUP_G3_LANE_2_0
#define reg_INTPI_G3_LANE_3_0  AUTOSPEED442.BF.INTPI_G3_LANE_3_0
#define reg_INTPR_G3_LANE_1_0  AUTOSPEED442.BF.INTPR_G3_LANE_1_0

// 0x0210	AUTOSPEED443		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_G3_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G3_LANE_2_0             : 3;	/* [10:8]     r/w 3'h4*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_G3_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_G3_LANE_2_0    : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED443_t;
__xdata __at( 0x6410 ) volatile AUTOSPEED443_t AUTOSPEED443;
#define reg_DLL_FREQ_SEL_G3_LANE_2_0  AUTOSPEED443.BF.DLL_FREQ_SEL_G3_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G3_LANE_2_0  AUTOSPEED443.BF.EOM_DLL_FREQ_SEL_G3_LANE_2_0
#define reg_ALIGN90_8G_EN_G3_LANE  AUTOSPEED443.BF.ALIGN90_8G_EN_G3_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_G3_LANE_2_0  AUTOSPEED443.BF.RX_REG0P9_SPEED_TRACK_CLK_G3_LANE_2_0

// 0x0214	AUTOSPEED444		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_G3_LANE   : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_G3_LANE_2_0   : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_G3_LANE_2_0                   : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_G3_LANE_2_0                   : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED444_t;
__xdata __at( 0x6414 ) volatile AUTOSPEED444_t AUTOSPEED444;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_G3_LANE  AUTOSPEED444.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_G3_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_G3_LANE_2_0  AUTOSPEED444.BF.RX_REG0P9_SPEED_TRACK_DATA_G3_LANE_2_0
#define reg_RX_SELMUFI_G3_LANE_2_0  AUTOSPEED444.BF.RX_SELMUFI_G3_LANE_2_0
#define reg_RX_SELMUFF_G3_LANE_2_0  AUTOSPEED444.BF.RX_SELMUFF_G3_LANE_2_0

// 0x0218	AUTOSPEED445		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_G3_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_G3_LANE_3_0                  : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_RXCLK_25M_CTRL_G3_LANE_1_0            : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_RXCLK_25M_DIV1P5_EN_G3_LANE           : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED445_t;
__xdata __at( 0x6418 ) volatile AUTOSPEED445_t AUTOSPEED445;
#define reg_REG_SELMUPI_G3_LANE_3_0  AUTOSPEED445.BF.REG_SELMUPI_G3_LANE_3_0
#define reg_REG_SELMUPF_G3_LANE_3_0  AUTOSPEED445.BF.REG_SELMUPF_G3_LANE_3_0
#define reg_RX_RXCLK_25M_CTRL_G3_LANE_1_0  AUTOSPEED445.BF.RX_RXCLK_25M_CTRL_G3_LANE_1_0
#define reg_RX_RXCLK_25M_DIV1P5_EN_G3_LANE  AUTOSPEED445.BF.RX_RXCLK_25M_DIV1P5_EN_G3_LANE

// 0x021c	AUTOSPEED446		TBD
typedef union {
	struct {
		uint8_t RX_RXCLK_25M_DIV_G3_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h89*/
		uint8_t RX_RXCLK_25M_FIX_DIV_EN_G3_LANE          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DTL_CLK_MODE_G3_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G3_LANE_7_0           : 8;	/*[31:24]     r/w 8'hb3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED446_t;
__xdata __at( 0x641c ) volatile AUTOSPEED446_t AUTOSPEED446;
#define reg_RX_RXCLK_25M_DIV_G3_LANE_7_0  AUTOSPEED446.BF.RX_RXCLK_25M_DIV_G3_LANE_7_0
#define reg_RX_RXCLK_25M_FIX_DIV_EN_G3_LANE  AUTOSPEED446.BF.RX_RXCLK_25M_FIX_DIV_EN_G3_LANE
#define reg_DTL_CLK_MODE_G3_LANE_1_0  AUTOSPEED446.BF.DTL_CLK_MODE_G3_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G3_LANE_7_0  AUTOSPEED446.BF.RX_FOFFSET_EXTRA_M_G3_LANE_7_0

// 0x0220	AUTOSPEED447		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G3_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G3_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G3_LANE_9_8                 : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_G3_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED447_t;
__xdata __at( 0x6420 ) volatile AUTOSPEED447_t AUTOSPEED447;
#define reg_RX_FOFFSET_EXTRA_M_G3_LANE_13_8  AUTOSPEED447.BF.RX_FOFFSET_EXTRA_M_G3_LANE_13_8
#define reg_INIT_RXFOFFS_G3_LANE_7_0  AUTOSPEED447.BF.INIT_RXFOFFS_G3_LANE_7_0
#define reg_INIT_RXFOFFS_G3_LANE_9_8  AUTOSPEED447.BF.INIT_RXFOFFS_G3_LANE_9_8
#define reg_PU_F1P_D_E_G3_LANE  AUTOSPEED447.BF.PU_F1P_D_E_G3_LANE

// 0x0224	AUTOSPEED448		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_G3_LANE                       : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_G3_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_G3_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_G3_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED448_t;
__xdata __at( 0x6424 ) volatile AUTOSPEED448_t AUTOSPEED448;
#define reg_PU_F1N_D_E_G3_LANE  AUTOSPEED448.BF.PU_F1N_D_E_G3_LANE
#define reg_PU_F1P_S_E_G3_LANE  AUTOSPEED448.BF.PU_F1P_S_E_G3_LANE
#define reg_PU_F1N_S_E_G3_LANE  AUTOSPEED448.BF.PU_F1N_S_E_G3_LANE
#define reg_PU_F1P_D_O_G3_LANE  AUTOSPEED448.BF.PU_F1P_D_O_G3_LANE

// 0x0228	AUTOSPEED449		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_G3_LANE                       : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_G3_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_G3_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G3_LANE                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED449_t;
__xdata __at( 0x6428 ) volatile AUTOSPEED449_t AUTOSPEED449;
#define reg_PU_F1N_D_O_G3_LANE  AUTOSPEED449.BF.PU_F1N_D_O_G3_LANE
#define reg_PU_F1P_S_O_G3_LANE  AUTOSPEED449.BF.PU_F1P_S_O_G3_LANE
#define reg_PU_F1N_S_O_G3_LANE  AUTOSPEED449.BF.PU_F1N_S_O_G3_LANE
#define reg_PATH_DISABLE_EDGE_G3_LANE  AUTOSPEED449.BF.PATH_DISABLE_EDGE_G3_LANE

// 0x022c	AUTOSPEED450		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_G3_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_G3_LANE                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_G3_LANE                     : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_G3_LANE                     : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED450_t;
__xdata __at( 0x642c ) volatile AUTOSPEED450_t AUTOSPEED450;
#define reg_DFE_F1_POL_EN_D_G3_LANE  AUTOSPEED450.BF.DFE_F1_POL_EN_D_G3_LANE
#define reg_DFE_F1_POL_EN_S_G3_LANE  AUTOSPEED450.BF.DFE_F1_POL_EN_S_G3_LANE
#define reg_DFE_F1_POL_D_G3_LANE  AUTOSPEED450.BF.DFE_F1_POL_D_G3_LANE
#define reg_DFE_F1_POL_S_G3_LANE  AUTOSPEED450.BF.DFE_F1_POL_S_G3_LANE

// 0x0230	AUTOSPEED451		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G3_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G3_LANE : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_G3_LANE    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_G3_LANE    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED451_t;
__xdata __at( 0x6430 ) volatile AUTOSPEED451_t AUTOSPEED451;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G3_LANE  AUTOSPEED451.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G3_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G3_LANE  AUTOSPEED451.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G3_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_G3_LANE  AUTOSPEED451.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_G3_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_G3_LANE  AUTOSPEED451.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_G3_LANE

// 0x0234	AUTOSPEED452		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G3_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G3_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G3_LANE_1_0     : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_G3_LANE_3_0                : 4;	/*[27:24]     r/w 4'h7*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED452_t;
__xdata __at( 0x6434 ) volatile AUTOSPEED452_t AUTOSPEED452;
#define reg_REG_DFE_FULL_RATE_MODE_G3_LANE  AUTOSPEED452.BF.REG_DFE_FULL_RATE_MODE_G3_LANE
#define reg_REG_DFE_DIS_G3_LANE  AUTOSPEED452.BF.REG_DFE_DIS_G3_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G3_LANE_1_0  AUTOSPEED452.BF.REG_DFE_TAP_SETTLE_SCALE_G3_LANE_1_0
#define reg_FFE_DATA_RATE_G3_LANE_3_0  AUTOSPEED452.BF.FFE_DATA_RATE_G3_LANE_3_0

// 0x0238	AUTOSPEED453		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G3_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h1b*/
		uint8_t RXDLL_TEMP_B_G3_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED453_t;
__xdata __at( 0x6438 ) volatile AUTOSPEED453_t AUTOSPEED453;
#define reg_RXDLL_TEMP_A_G3_LANE_7_0  AUTOSPEED453.BF.RXDLL_TEMP_A_G3_LANE_7_0
#define reg_RXDLL_TEMP_B_G3_LANE_7_0  AUTOSPEED453.BF.RXDLL_TEMP_B_G3_LANE_7_0

// 0x023c	AUTOSPEED454		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED454_t;
__xdata __at( 0x643c ) volatile AUTOSPEED454_t AUTOSPEED454;

// 0x0240	AUTOSPEED455		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED455_t;
__xdata __at( 0x6440 ) volatile AUTOSPEED455_t AUTOSPEED455;

// 0x0244	AUTOSPEED456		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G4_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G4_LANE                        : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G4_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEED_DIV_G4_LANE_2_0                 : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED456_t;
__xdata __at( 0x6444 ) volatile AUTOSPEED456_t AUTOSPEED456;
#define reg_PLL_RATE_SEL_TX_G4_LANE_3_0  AUTOSPEED456.BF.PLL_RATE_SEL_TX_G4_LANE_3_0
#define reg_TX_CK_SEL_G4_LANE  AUTOSPEED456.BF.TX_CK_SEL_G4_LANE
#define reg_TX_VDDCAL_RATE_EN_G4_LANE  AUTOSPEED456.BF.TX_VDDCAL_RATE_EN_G4_LANE
#define reg_TX_SPEED_DIV_G4_LANE_2_0  AUTOSPEED456.BF.TX_SPEED_DIV_G4_LANE_2_0

// 0x0248	AUTOSPEED457		TBD
typedef union {
	struct {
		uint8_t TX_REG_SPEED_TRK_CLK_G4_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_G4_LANE_2_0        : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t TX_EM_CTRL_REG_EN_G4_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_CTRL_PIPE_SEL_G4_LANE              : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED457_t;
__xdata __at( 0x6448 ) volatile AUTOSPEED457_t AUTOSPEED457;
#define reg_TX_REG_SPEED_TRK_CLK_G4_LANE_2_0  AUTOSPEED457.BF.TX_REG_SPEED_TRK_CLK_G4_LANE_2_0
#define reg_TX_REG_SPEED_TRK_DATA_G4_LANE_2_0  AUTOSPEED457.BF.TX_REG_SPEED_TRK_DATA_G4_LANE_2_0
#define reg_TX_EM_CTRL_REG_EN_G4_LANE  AUTOSPEED457.BF.TX_EM_CTRL_REG_EN_G4_LANE
#define reg_TX_EM_CTRL_PIPE_SEL_G4_LANE  AUTOSPEED457.BF.TX_EM_CTRL_PIPE_SEL_G4_LANE

// 0x024c	AUTOSPEED458		TBD
typedef union {
	struct {
		uint8_t TX_EM_PRE_EN_G4_LANE                     : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t TX_EM_PRE_CTRL_G4_LANE_3_0               : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t TX_EM_PO_EN_G4_LANE                      : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_EM_PO_CTRL_G4_LANE_3_0                : 4;	/*[27:24]     r/w 4'h0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED458_t;
__xdata __at( 0x644c ) volatile AUTOSPEED458_t AUTOSPEED458;
#define reg_TX_EM_PRE_EN_G4_LANE  AUTOSPEED458.BF.TX_EM_PRE_EN_G4_LANE
#define reg_TX_EM_PRE_CTRL_G4_LANE_3_0  AUTOSPEED458.BF.TX_EM_PRE_CTRL_G4_LANE_3_0
#define reg_TX_EM_PO_EN_G4_LANE  AUTOSPEED458.BF.TX_EM_PO_EN_G4_LANE
#define reg_TX_EM_PO_CTRL_G4_LANE_3_0  AUTOSPEED458.BF.TX_EM_PO_CTRL_G4_LANE_3_0

// 0x0250	AUTOSPEED459		TBD
typedef union {
	struct {
		uint8_t SLEWRATE_EN_G4_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEWCTRL1_G4_LANE_1_0                    : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t SLEWCTRL0_G4_LANE_1_0                    : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G4_LANE_1_0             : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED459_t;
__xdata __at( 0x6450 ) volatile AUTOSPEED459_t AUTOSPEED459;
#define reg_SLEWRATE_EN_G4_LANE_1_0  AUTOSPEED459.BF.SLEWRATE_EN_G4_LANE_1_0
#define reg_SLEWCTRL1_G4_LANE_1_0  AUTOSPEED459.BF.SLEWCTRL1_G4_LANE_1_0
#define reg_SLEWCTRL0_G4_LANE_1_0  AUTOSPEED459.BF.SLEWCTRL0_G4_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G4_LANE_1_0  AUTOSPEED459.BF.TX_TRAIN_PAT_SEL_G4_LANE_1_0

// 0x0254	AUTOSPEED460		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G4_LANE_7_0                : 8;	/*  [7:0]     r/w 8'h88*/
		uint8_t TRAIN_PAT_NUM_G4_LANE_8                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G4_LANE              : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PACKET_SYNC_DIS_G4_LANE                  : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED460_t;
__xdata __at( 0x6454 ) volatile AUTOSPEED460_t AUTOSPEED460;
#define reg_TRAIN_PAT_NUM_G4_LANE_7_0  AUTOSPEED460.BF.TRAIN_PAT_NUM_G4_LANE_7_0
#define reg_TRAIN_PAT_NUM_G4_LANE_8  AUTOSPEED460.BF.TRAIN_PAT_NUM_G4_LANE_8
#define reg_TX_TRAIN_PAT_TOGGLE_G4_LANE  AUTOSPEED460.BF.TX_TRAIN_PAT_TOGGLE_G4_LANE
#define reg_PACKET_SYNC_DIS_G4_LANE  AUTOSPEED460.BF.PACKET_SYNC_DIS_G4_LANE

// 0x0258	AUTOSPEED461		TBD
typedef union {
	struct {
		uint8_t SYNC_DET_DIS_G4_LANE                     : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G4_LANE_3_0              : 4;	/* [11:8]     r/w 4'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_CK_SEL_G4_LANE                        : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_VDDCAL_RATE_EN_G4_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED461_t;
__xdata __at( 0x6458 ) volatile AUTOSPEED461_t AUTOSPEED461;
#define reg_SYNC_DET_DIS_G4_LANE  AUTOSPEED461.BF.SYNC_DET_DIS_G4_LANE
#define reg_PLL_RATE_SEL_RX_G4_LANE_3_0  AUTOSPEED461.BF.PLL_RATE_SEL_RX_G4_LANE_3_0
#define reg_RX_CK_SEL_G4_LANE  AUTOSPEED461.BF.RX_CK_SEL_G4_LANE
#define reg_RX_VDDCAL_RATE_EN_G4_LANE  AUTOSPEED461.BF.RX_VDDCAL_RATE_EN_G4_LANE

// 0x025c	AUTOSPEED462		TBD
typedef union {
	struct {
		uint8_t RX_SPEED_DIV_G4_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G4_LANE_2_0              : 3;	/* [10:8]     r/w 3'h4*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t INTPI_G4_LANE_3_0                        : 4;	/*[19:16]     r/w 4'h8*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t INTPR_G4_LANE_1_0                        : 2;	/*[25:24]     r/w 2'h2*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED462_t;
__xdata __at( 0x645c ) volatile AUTOSPEED462_t AUTOSPEED462;
#define reg_RX_SPEED_DIV_G4_LANE_2_0  AUTOSPEED462.BF.RX_SPEED_DIV_G4_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G4_LANE_2_0  AUTOSPEED462.BF.DTL_CLK_SPEEDUP_G4_LANE_2_0
#define reg_INTPI_G4_LANE_3_0  AUTOSPEED462.BF.INTPI_G4_LANE_3_0
#define reg_INTPR_G4_LANE_1_0  AUTOSPEED462.BF.INTPR_G4_LANE_1_0

// 0x0260	AUTOSPEED463		TBD
typedef union {
	struct {
		uint8_t DLL_FREQ_SEL_G4_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G4_LANE_2_0             : 3;	/* [10:8]     r/w 3'h4*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t ALIGN90_8G_EN_G4_LANE                    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_G4_LANE_2_0    : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED463_t;
__xdata __at( 0x6460 ) volatile AUTOSPEED463_t AUTOSPEED463;
#define reg_DLL_FREQ_SEL_G4_LANE_2_0  AUTOSPEED463.BF.DLL_FREQ_SEL_G4_LANE_2_0
#define reg_EOM_DLL_FREQ_SEL_G4_LANE_2_0  AUTOSPEED463.BF.EOM_DLL_FREQ_SEL_G4_LANE_2_0
#define reg_ALIGN90_8G_EN_G4_LANE  AUTOSPEED463.BF.ALIGN90_8G_EN_G4_LANE
#define reg_RX_REG0P9_SPEED_TRACK_CLK_G4_LANE_2_0  AUTOSPEED463.BF.RX_REG0P9_SPEED_TRACK_CLK_G4_LANE_2_0

// 0x0264	AUTOSPEED464		TBD
typedef union {
	struct {
		uint8_t RX_REG0P9_SPEED_TRACK_CLK_HALF_G4_LANE   : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_REG0P9_SPEED_TRACK_DATA_G4_LANE_2_0   : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t RX_SELMUFI_G4_LANE_2_0                   : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t RX_SELMUFF_G4_LANE_2_0                   : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED464_t;
__xdata __at( 0x6464 ) volatile AUTOSPEED464_t AUTOSPEED464;
#define reg_RX_REG0P9_SPEED_TRACK_CLK_HALF_G4_LANE  AUTOSPEED464.BF.RX_REG0P9_SPEED_TRACK_CLK_HALF_G4_LANE
#define reg_RX_REG0P9_SPEED_TRACK_DATA_G4_LANE_2_0  AUTOSPEED464.BF.RX_REG0P9_SPEED_TRACK_DATA_G4_LANE_2_0
#define reg_RX_SELMUFI_G4_LANE_2_0  AUTOSPEED464.BF.RX_SELMUFI_G4_LANE_2_0
#define reg_RX_SELMUFF_G4_LANE_2_0  AUTOSPEED464.BF.RX_SELMUFF_G4_LANE_2_0

// 0x0268	AUTOSPEED465		TBD
typedef union {
	struct {
		uint8_t REG_SELMUPI_G4_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t REG_SELMUPF_G4_LANE_3_0                  : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t RX_RXCLK_25M_CTRL_G4_LANE_1_0            : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_RXCLK_25M_DIV1P5_EN_G4_LANE           : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED465_t;
__xdata __at( 0x6468 ) volatile AUTOSPEED465_t AUTOSPEED465;
#define reg_REG_SELMUPI_G4_LANE_3_0  AUTOSPEED465.BF.REG_SELMUPI_G4_LANE_3_0
#define reg_REG_SELMUPF_G4_LANE_3_0  AUTOSPEED465.BF.REG_SELMUPF_G4_LANE_3_0
#define reg_RX_RXCLK_25M_CTRL_G4_LANE_1_0  AUTOSPEED465.BF.RX_RXCLK_25M_CTRL_G4_LANE_1_0
#define reg_RX_RXCLK_25M_DIV1P5_EN_G4_LANE  AUTOSPEED465.BF.RX_RXCLK_25M_DIV1P5_EN_G4_LANE

// 0x026c	AUTOSPEED466		TBD
typedef union {
	struct {
		uint8_t RX_RXCLK_25M_DIV_G4_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h89*/
		uint8_t RX_RXCLK_25M_FIX_DIV_EN_G4_LANE          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DTL_CLK_MODE_G4_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G4_LANE_7_0           : 8;	/*[31:24]     r/w 8'hb3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED466_t;
__xdata __at( 0x646c ) volatile AUTOSPEED466_t AUTOSPEED466;
#define reg_RX_RXCLK_25M_DIV_G4_LANE_7_0  AUTOSPEED466.BF.RX_RXCLK_25M_DIV_G4_LANE_7_0
#define reg_RX_RXCLK_25M_FIX_DIV_EN_G4_LANE  AUTOSPEED466.BF.RX_RXCLK_25M_FIX_DIV_EN_G4_LANE
#define reg_DTL_CLK_MODE_G4_LANE_1_0  AUTOSPEED466.BF.DTL_CLK_MODE_G4_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G4_LANE_7_0  AUTOSPEED466.BF.RX_FOFFSET_EXTRA_M_G4_LANE_7_0

// 0x0270	AUTOSPEED467		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G4_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G4_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G4_LANE_9_8                 : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t PU_F1P_D_E_G4_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED467_t;
__xdata __at( 0x6470 ) volatile AUTOSPEED467_t AUTOSPEED467;
#define reg_RX_FOFFSET_EXTRA_M_G4_LANE_13_8  AUTOSPEED467.BF.RX_FOFFSET_EXTRA_M_G4_LANE_13_8
#define reg_INIT_RXFOFFS_G4_LANE_7_0  AUTOSPEED467.BF.INIT_RXFOFFS_G4_LANE_7_0
#define reg_INIT_RXFOFFS_G4_LANE_9_8  AUTOSPEED467.BF.INIT_RXFOFFS_G4_LANE_9_8
#define reg_PU_F1P_D_E_G4_LANE  AUTOSPEED467.BF.PU_F1P_D_E_G4_LANE

// 0x0274	AUTOSPEED468		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_E_G4_LANE                       : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_E_G4_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_E_G4_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PU_F1P_D_O_G4_LANE                       : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED468_t;
__xdata __at( 0x6474 ) volatile AUTOSPEED468_t AUTOSPEED468;
#define reg_PU_F1N_D_E_G4_LANE  AUTOSPEED468.BF.PU_F1N_D_E_G4_LANE
#define reg_PU_F1P_S_E_G4_LANE  AUTOSPEED468.BF.PU_F1P_S_E_G4_LANE
#define reg_PU_F1N_S_E_G4_LANE  AUTOSPEED468.BF.PU_F1N_S_E_G4_LANE
#define reg_PU_F1P_D_O_G4_LANE  AUTOSPEED468.BF.PU_F1P_D_O_G4_LANE

// 0x0278	AUTOSPEED469		TBD
typedef union {
	struct {
		uint8_t PU_F1N_D_O_G4_LANE                       : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t PU_F1P_S_O_G4_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t PU_F1N_S_O_G4_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G4_LANE                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED469_t;
__xdata __at( 0x6478 ) volatile AUTOSPEED469_t AUTOSPEED469;
#define reg_PU_F1N_D_O_G4_LANE  AUTOSPEED469.BF.PU_F1N_D_O_G4_LANE
#define reg_PU_F1P_S_O_G4_LANE  AUTOSPEED469.BF.PU_F1P_S_O_G4_LANE
#define reg_PU_F1N_S_O_G4_LANE  AUTOSPEED469.BF.PU_F1N_S_O_G4_LANE
#define reg_PATH_DISABLE_EDGE_G4_LANE  AUTOSPEED469.BF.PATH_DISABLE_EDGE_G4_LANE

// 0x027c	AUTOSPEED470		TBD
typedef union {
	struct {
		uint8_t DFE_F1_POL_EN_D_G4_LANE                  : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t DFE_F1_POL_EN_S_G4_LANE                  : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t DFE_F1_POL_D_G4_LANE                     : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t DFE_F1_POL_S_G4_LANE                     : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED470_t;
__xdata __at( 0x647c ) volatile AUTOSPEED470_t AUTOSPEED470;
#define reg_DFE_F1_POL_EN_D_G4_LANE  AUTOSPEED470.BF.DFE_F1_POL_EN_D_G4_LANE
#define reg_DFE_F1_POL_EN_S_G4_LANE  AUTOSPEED470.BF.DFE_F1_POL_EN_S_G4_LANE
#define reg_DFE_F1_POL_D_G4_LANE  AUTOSPEED470.BF.DFE_F1_POL_D_G4_LANE
#define reg_DFE_F1_POL_S_G4_LANE  AUTOSPEED470.BF.DFE_F1_POL_S_G4_LANE

// 0x0280	AUTOSPEED471		TBD
typedef union {
	struct {
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G4_LANE : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G4_LANE : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_D_FORCE_G4_LANE    : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t REG_ANA_RX_DFE_F1_POL_S_FORCE_G4_LANE    : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED471_t;
__xdata __at( 0x6480 ) volatile AUTOSPEED471_t AUTOSPEED471;
#define reg_REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G4_LANE  AUTOSPEED471.BF.REG_ANA_RX_DFE_F1_POL_EN_D_FORCE_G4_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G4_LANE  AUTOSPEED471.BF.REG_ANA_RX_DFE_F1_POL_EN_S_FORCE_G4_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_D_FORCE_G4_LANE  AUTOSPEED471.BF.REG_ANA_RX_DFE_F1_POL_D_FORCE_G4_LANE
#define reg_REG_ANA_RX_DFE_F1_POL_S_FORCE_G4_LANE  AUTOSPEED471.BF.REG_ANA_RX_DFE_F1_POL_S_FORCE_G4_LANE

// 0x0284	AUTOSPEED472		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G4_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G4_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G4_LANE_1_0     : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t FFE_DATA_RATE_G4_LANE_3_0                : 4;	/*[27:24]     r/w 4'hb*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED472_t;
__xdata __at( 0x6484 ) volatile AUTOSPEED472_t AUTOSPEED472;
#define reg_REG_DFE_FULL_RATE_MODE_G4_LANE  AUTOSPEED472.BF.REG_DFE_FULL_RATE_MODE_G4_LANE
#define reg_REG_DFE_DIS_G4_LANE  AUTOSPEED472.BF.REG_DFE_DIS_G4_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G4_LANE_1_0  AUTOSPEED472.BF.REG_DFE_TAP_SETTLE_SCALE_G4_LANE_1_0
#define reg_FFE_DATA_RATE_G4_LANE_3_0  AUTOSPEED472.BF.FFE_DATA_RATE_G4_LANE_3_0

// 0x0288	AUTOSPEED473		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_A_G4_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'h1b*/
		uint8_t RXDLL_TEMP_B_G4_LANE_7_0                 : 8;	/* [15:8]     r/w 8'ha0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} AUTOSPEED473_t;
__xdata __at( 0x6488 ) volatile AUTOSPEED473_t AUTOSPEED473;
#define reg_RXDLL_TEMP_A_G4_LANE_7_0  AUTOSPEED473.BF.RXDLL_TEMP_A_G4_LANE_7_0
#define reg_RXDLL_TEMP_B_G4_LANE_7_0  AUTOSPEED473.BF.RXDLL_TEMP_B_G4_LANE_7_0

// 0x028c	AUTOSPEED474		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED474_t;
__xdata __at( 0x648c ) volatile AUTOSPEED474_t AUTOSPEED474;

// 0x0290	AUTOSPEED475		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED475_t;
__xdata __at( 0x6490 ) volatile AUTOSPEED475_t AUTOSPEED475;

// 0x0294	AUTOSPEED476		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED476_t;
__xdata __at( 0x6494 ) volatile AUTOSPEED476_t AUTOSPEED476;

// 0x0298	AUTOSPEED477		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED477_t;
__xdata __at( 0x6498 ) volatile AUTOSPEED477_t AUTOSPEED477;

// 0x029c	AUTOSPEED478		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED478_t;
__xdata __at( 0x649c ) volatile AUTOSPEED478_t AUTOSPEED478;

// 0x02a0	AUTOSPEED479		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED479_t;
__xdata __at( 0x64a0 ) volatile AUTOSPEED479_t AUTOSPEED479;

// 0x02a4	AUTOSPEED480		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED480_t;
__xdata __at( 0x64a4 ) volatile AUTOSPEED480_t AUTOSPEED480;

// 0x02a8	AUTOSPEED481		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED481_t;
__xdata __at( 0x64a8 ) volatile AUTOSPEED481_t AUTOSPEED481;

// 0x02ac	AUTOSPEED482		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED482_t;
__xdata __at( 0x64ac ) volatile AUTOSPEED482_t AUTOSPEED482;

// 0x02b0	AUTOSPEED483		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED483_t;
__xdata __at( 0x64b0 ) volatile AUTOSPEED483_t AUTOSPEED483;

// 0x02b4	AUTOSPEED484		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED484_t;
__xdata __at( 0x64b4 ) volatile AUTOSPEED484_t AUTOSPEED484;

// 0x02b8	AUTOSPEED485		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED485_t;
__xdata __at( 0x64b8 ) volatile AUTOSPEED485_t AUTOSPEED485;

// 0x02bc	AUTOSPEED486		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED486_t;
__xdata __at( 0x64bc ) volatile AUTOSPEED486_t AUTOSPEED486;

// 0x02c0	AUTOSPEED487		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED487_t;
__xdata __at( 0x64c0 ) volatile AUTOSPEED487_t AUTOSPEED487;

// 0x02c4	AUTOSPEED488		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED488_t;
__xdata __at( 0x64c4 ) volatile AUTOSPEED488_t AUTOSPEED488;

// 0x02c8	AUTOSPEED489		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED489_t;
__xdata __at( 0x64c8 ) volatile AUTOSPEED489_t AUTOSPEED489;

// 0x02cc	AUTOSPEED490		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED490_t;
__xdata __at( 0x64cc ) volatile AUTOSPEED490_t AUTOSPEED490;

// 0x02d0	AUTOSPEED491		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED491_t;
__xdata __at( 0x64d0 ) volatile AUTOSPEED491_t AUTOSPEED491;

// 0x02d4	AUTOSPEED492		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED492_t;
__xdata __at( 0x64d4 ) volatile AUTOSPEED492_t AUTOSPEED492;

// 0x02d8	AUTOSPEED493		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED493_t;
__xdata __at( 0x64d8 ) volatile AUTOSPEED493_t AUTOSPEED493;

// 0x02dc	AUTOSPEED494		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED494_t;
__xdata __at( 0x64dc ) volatile AUTOSPEED494_t AUTOSPEED494;

// 0x02e0	AUTOSPEED495		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED495_t;
__xdata __at( 0x64e0 ) volatile AUTOSPEED495_t AUTOSPEED495;

// 0x02e4	AUTOSPEED496		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED496_t;
__xdata __at( 0x64e4 ) volatile AUTOSPEED496_t AUTOSPEED496;

// 0x02e8	AUTOSPEED497		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED497_t;
__xdata __at( 0x64e8 ) volatile AUTOSPEED497_t AUTOSPEED497;

// 0x02ec	AUTOSPEED498		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED498_t;
__xdata __at( 0x64ec ) volatile AUTOSPEED498_t AUTOSPEED498;

// 0x02f0	AUTOSPEED499		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED499_t;
__xdata __at( 0x64f0 ) volatile AUTOSPEED499_t AUTOSPEED499;

// 0x02f4	AUTOSPEED500		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED500_t;
__xdata __at( 0x64f4 ) volatile AUTOSPEED500_t AUTOSPEED500;

// 0x02f8	AUTOSPEED501		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED501_t;
__xdata __at( 0x64f8 ) volatile AUTOSPEED501_t AUTOSPEED501;

// 0x02fc	AUTOSPEED502		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED502_t;
__xdata __at( 0x64fc ) volatile AUTOSPEED502_t AUTOSPEED502;

// 0x0300	AUTOSPEED503		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED503_t;
__xdata __at( 0x6500 ) volatile AUTOSPEED503_t AUTOSPEED503;

// 0x0304	AUTOSPEED504		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED504_t;
__xdata __at( 0x6504 ) volatile AUTOSPEED504_t AUTOSPEED504;

// 0x0308	AUTOSPEED505		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED505_t;
__xdata __at( 0x6508 ) volatile AUTOSPEED505_t AUTOSPEED505;

// 0x030c	AUTOSPEED506		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED506_t;
__xdata __at( 0x650c ) volatile AUTOSPEED506_t AUTOSPEED506;

// 0x0310	AUTOSPEED507		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED507_t;
__xdata __at( 0x6510 ) volatile AUTOSPEED507_t AUTOSPEED507;

// 0x0314	AUTOSPEED508		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED508_t;
__xdata __at( 0x6514 ) volatile AUTOSPEED508_t AUTOSPEED508;

// 0x0318	AUTOSPEED509		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED509_t;
__xdata __at( 0x6518 ) volatile AUTOSPEED509_t AUTOSPEED509;

// 0x031c	AUTOSPEED510		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED510_t;
__xdata __at( 0x651c ) volatile AUTOSPEED510_t AUTOSPEED510;

// 0x0320	AUTOSPEED511		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED511_t;
__xdata __at( 0x6520 ) volatile AUTOSPEED511_t AUTOSPEED511;

// 0x0324	AUTOSPEED512		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED512_t;
__xdata __at( 0x6524 ) volatile AUTOSPEED512_t AUTOSPEED512;

// 0x0328	AUTOSPEED513		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED513_t;
__xdata __at( 0x6528 ) volatile AUTOSPEED513_t AUTOSPEED513;

// 0x032c	AUTOSPEED514		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED514_t;
__xdata __at( 0x652c ) volatile AUTOSPEED514_t AUTOSPEED514;

// 0x0330	AUTOSPEED515		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED515_t;
__xdata __at( 0x6530 ) volatile AUTOSPEED515_t AUTOSPEED515;

// 0x0334	AUTOSPEED516		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED516_t;
__xdata __at( 0x6534 ) volatile AUTOSPEED516_t AUTOSPEED516;

// 0x0338	AUTOSPEED517		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED517_t;
__xdata __at( 0x6538 ) volatile AUTOSPEED517_t AUTOSPEED517;

// 0x033c	AUTOSPEED518		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED518_t;
__xdata __at( 0x653c ) volatile AUTOSPEED518_t AUTOSPEED518;

// 0x0340	AUTOSPEED519		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED519_t;
__xdata __at( 0x6540 ) volatile AUTOSPEED519_t AUTOSPEED519;

// 0x0344	AUTOSPEED520		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED520_t;
__xdata __at( 0x6544 ) volatile AUTOSPEED520_t AUTOSPEED520;

// 0x0348	AUTOSPEED521		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED521_t;
__xdata __at( 0x6548 ) volatile AUTOSPEED521_t AUTOSPEED521;

// 0x034c	AUTOSPEED522		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED522_t;
__xdata __at( 0x654c ) volatile AUTOSPEED522_t AUTOSPEED522;

// 0x0350	AUTOSPEED523		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED523_t;
__xdata __at( 0x6550 ) volatile AUTOSPEED523_t AUTOSPEED523;

// 0x0354	AUTOSPEED524		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED524_t;
__xdata __at( 0x6554 ) volatile AUTOSPEED524_t AUTOSPEED524;

// 0x0358	AUTOSPEED525		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED525_t;
__xdata __at( 0x6558 ) volatile AUTOSPEED525_t AUTOSPEED525;

// 0x035c	AUTOSPEED526		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED526_t;
__xdata __at( 0x655c ) volatile AUTOSPEED526_t AUTOSPEED526;

// 0x0360	AUTOSPEED527		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED527_t;
__xdata __at( 0x6560 ) volatile AUTOSPEED527_t AUTOSPEED527;

// 0x0364	AUTOSPEED528		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED528_t;
__xdata __at( 0x6564 ) volatile AUTOSPEED528_t AUTOSPEED528;

// 0x0368	AUTOSPEED529		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED529_t;
__xdata __at( 0x6568 ) volatile AUTOSPEED529_t AUTOSPEED529;

// 0x036c	AUTOSPEED530		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED530_t;
__xdata __at( 0x656c ) volatile AUTOSPEED530_t AUTOSPEED530;

// 0x0370	AUTOSPEED531		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED531_t;
__xdata __at( 0x6570 ) volatile AUTOSPEED531_t AUTOSPEED531;

// 0x0374	AUTOSPEED532		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED532_t;
__xdata __at( 0x6574 ) volatile AUTOSPEED532_t AUTOSPEED532;

// 0x0378	AUTOSPEED533		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED533_t;
__xdata __at( 0x6578 ) volatile AUTOSPEED533_t AUTOSPEED533;

// 0x037c	AUTOSPEED534		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED534_t;
__xdata __at( 0x657c ) volatile AUTOSPEED534_t AUTOSPEED534;

// 0x0380	AUTOSPEED535		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED535_t;
__xdata __at( 0x6580 ) volatile AUTOSPEED535_t AUTOSPEED535;

// 0x0384	AUTOSPEED536		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED536_t;
__xdata __at( 0x6584 ) volatile AUTOSPEED536_t AUTOSPEED536;

// 0x0388	AUTOSPEED537		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED537_t;
__xdata __at( 0x6588 ) volatile AUTOSPEED537_t AUTOSPEED537;

// 0x038c	AUTOSPEED538		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED538_t;
__xdata __at( 0x658c ) volatile AUTOSPEED538_t AUTOSPEED538;

// 0x0390	AUTOSPEED539		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED539_t;
__xdata __at( 0x6590 ) volatile AUTOSPEED539_t AUTOSPEED539;

// 0x0394	AUTOSPEED540		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED540_t;
__xdata __at( 0x6594 ) volatile AUTOSPEED540_t AUTOSPEED540;

// 0x0398	AUTOSPEED541		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED541_t;
__xdata __at( 0x6598 ) volatile AUTOSPEED541_t AUTOSPEED541;

// 0x039c	AUTOSPEED542		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED542_t;
__xdata __at( 0x659c ) volatile AUTOSPEED542_t AUTOSPEED542;

// 0x03a0	AUTOSPEED543		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED543_t;
__xdata __at( 0x65a0 ) volatile AUTOSPEED543_t AUTOSPEED543;

// 0x03a4	AUTOSPEED544		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED544_t;
__xdata __at( 0x65a4 ) volatile AUTOSPEED544_t AUTOSPEED544;

// 0x03a8	AUTOSPEED545		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED545_t;
__xdata __at( 0x65a8 ) volatile AUTOSPEED545_t AUTOSPEED545;

// 0x03ac	AUTOSPEED546		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED546_t;
__xdata __at( 0x65ac ) volatile AUTOSPEED546_t AUTOSPEED546;

// 0x03b0	AUTOSPEED547		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED547_t;
__xdata __at( 0x65b0 ) volatile AUTOSPEED547_t AUTOSPEED547;

// 0x03b4	AUTOSPEED548		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED548_t;
__xdata __at( 0x65b4 ) volatile AUTOSPEED548_t AUTOSPEED548;

// 0x03b8	AUTOSPEED549		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED549_t;
__xdata __at( 0x65b8 ) volatile AUTOSPEED549_t AUTOSPEED549;

// 0x03bc	AUTOSPEED550		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED550_t;
__xdata __at( 0x65bc ) volatile AUTOSPEED550_t AUTOSPEED550;

// 0x03c0	AUTOSPEED551		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED551_t;
__xdata __at( 0x65c0 ) volatile AUTOSPEED551_t AUTOSPEED551;

// 0x03c4	AUTOSPEED552		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED552_t;
__xdata __at( 0x65c4 ) volatile AUTOSPEED552_t AUTOSPEED552;

// 0x03c8	AUTOSPEED553		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED553_t;
__xdata __at( 0x65c8 ) volatile AUTOSPEED553_t AUTOSPEED553;

// 0x03cc	AUTOSPEED554		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED554_t;
__xdata __at( 0x65cc ) volatile AUTOSPEED554_t AUTOSPEED554;

// 0x03d0	AUTOSPEED555		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED555_t;
__xdata __at( 0x65d0 ) volatile AUTOSPEED555_t AUTOSPEED555;

// 0x03d4	AUTOSPEED556		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED556_t;
__xdata __at( 0x65d4 ) volatile AUTOSPEED556_t AUTOSPEED556;

// 0x03d8	AUTOSPEED557		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED557_t;
__xdata __at( 0x65d8 ) volatile AUTOSPEED557_t AUTOSPEED557;

// 0x03dc	AUTOSPEED558		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED558_t;
__xdata __at( 0x65dc ) volatile AUTOSPEED558_t AUTOSPEED558;

// 0x03e0	AUTOSPEED559		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED559_t;
__xdata __at( 0x65e0 ) volatile AUTOSPEED559_t AUTOSPEED559;

// 0x03e4	AUTOSPEED560		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED560_t;
__xdata __at( 0x65e4 ) volatile AUTOSPEED560_t AUTOSPEED560;

// 0x03e8	AUTOSPEED561		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED561_t;
__xdata __at( 0x65e8 ) volatile AUTOSPEED561_t AUTOSPEED561;

// 0x03ec	AUTOSPEED562		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED562_t;
__xdata __at( 0x65ec ) volatile AUTOSPEED562_t AUTOSPEED562;

// 0x03f0	AUTOSPEED563		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED563_t;
__xdata __at( 0x65f0 ) volatile AUTOSPEED563_t AUTOSPEED563;

// 0x03f4	AUTOSPEED564		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED564_t;
__xdata __at( 0x65f4 ) volatile AUTOSPEED564_t AUTOSPEED564;

// 0x03f8	AUTOSPEED565		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED565_t;
__xdata __at( 0x65f8 ) volatile AUTOSPEED565_t AUTOSPEED565;

// 0x03fc	AUTOSPEED566		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED566_t;
__xdata __at( 0x65fc ) volatile AUTOSPEED566_t AUTOSPEED566;

// 0x0400	AUTOSPEED567		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED567_t;
__xdata __at( 0x6600 ) volatile AUTOSPEED567_t AUTOSPEED567;

// 0x0404	AUTOSPEED568		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED568_t;
__xdata __at( 0x6604 ) volatile AUTOSPEED568_t AUTOSPEED568;

// 0x0408	AUTOSPEED569		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED569_t;
__xdata __at( 0x6608 ) volatile AUTOSPEED569_t AUTOSPEED569;

// 0x040c	AUTOSPEED570		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED570_t;
__xdata __at( 0x660c ) volatile AUTOSPEED570_t AUTOSPEED570;

// 0x0410	AUTOSPEED571		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED571_t;
__xdata __at( 0x6610 ) volatile AUTOSPEED571_t AUTOSPEED571;

// 0x0414	AUTOSPEED572		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED572_t;
__xdata __at( 0x6614 ) volatile AUTOSPEED572_t AUTOSPEED572;

// 0x0418	AUTOSPEED573		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED573_t;
__xdata __at( 0x6618 ) volatile AUTOSPEED573_t AUTOSPEED573;

// 0x041c	AUTOSPEED574		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED574_t;
__xdata __at( 0x661c ) volatile AUTOSPEED574_t AUTOSPEED574;

// 0x0420	AUTOSPEED575		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED575_t;
__xdata __at( 0x6620 ) volatile AUTOSPEED575_t AUTOSPEED575;

// 0x0424	AUTOSPEED576		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED576_t;
__xdata __at( 0x6624 ) volatile AUTOSPEED576_t AUTOSPEED576;

// 0x0428	AUTOSPEED577		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED577_t;
__xdata __at( 0x6628 ) volatile AUTOSPEED577_t AUTOSPEED577;

// 0x042c	AUTOSPEED578		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED578_t;
__xdata __at( 0x662c ) volatile AUTOSPEED578_t AUTOSPEED578;

// 0x0430	AUTOSPEED579		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED579_t;
__xdata __at( 0x6630 ) volatile AUTOSPEED579_t AUTOSPEED579;

// 0x0434	AUTOSPEED580		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED580_t;
__xdata __at( 0x6634 ) volatile AUTOSPEED580_t AUTOSPEED580;

// 0x0438	AUTOSPEED581		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED581_t;
__xdata __at( 0x6638 ) volatile AUTOSPEED581_t AUTOSPEED581;

// 0x043c	AUTOSPEED582		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED582_t;
__xdata __at( 0x663c ) volatile AUTOSPEED582_t AUTOSPEED582;

// 0x0440	AUTOSPEED583		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED583_t;
__xdata __at( 0x6640 ) volatile AUTOSPEED583_t AUTOSPEED583;

// 0x0444	AUTOSPEED584		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED584_t;
__xdata __at( 0x6644 ) volatile AUTOSPEED584_t AUTOSPEED584;

// 0x0448	AUTOSPEED585		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED585_t;
__xdata __at( 0x6648 ) volatile AUTOSPEED585_t AUTOSPEED585;

// 0x044c	AUTOSPEED586		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED586_t;
__xdata __at( 0x664c ) volatile AUTOSPEED586_t AUTOSPEED586;

// 0x0450	AUTOSPEED587		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED587_t;
__xdata __at( 0x6650 ) volatile AUTOSPEED587_t AUTOSPEED587;

// 0x0454	AUTOSPEED588		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED588_t;
__xdata __at( 0x6654 ) volatile AUTOSPEED588_t AUTOSPEED588;

// 0x0458	AUTOSPEED589		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED589_t;
__xdata __at( 0x6658 ) volatile AUTOSPEED589_t AUTOSPEED589;

// 0x045c	AUTOSPEED590		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED590_t;
__xdata __at( 0x665c ) volatile AUTOSPEED590_t AUTOSPEED590;

// 0x0460	AUTOSPEED591		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED591_t;
__xdata __at( 0x6660 ) volatile AUTOSPEED591_t AUTOSPEED591;

// 0x0464	AUTOSPEED592		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED592_t;
__xdata __at( 0x6664 ) volatile AUTOSPEED592_t AUTOSPEED592;

// 0x0468	AUTOSPEED593		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED593_t;
__xdata __at( 0x6668 ) volatile AUTOSPEED593_t AUTOSPEED593;

// 0x046c	AUTOSPEED594		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED594_t;
__xdata __at( 0x666c ) volatile AUTOSPEED594_t AUTOSPEED594;

// 0x0470	AUTOSPEED595		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED595_t;
__xdata __at( 0x6670 ) volatile AUTOSPEED595_t AUTOSPEED595;

// 0x0474	AUTOSPEED596		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED596_t;
__xdata __at( 0x6674 ) volatile AUTOSPEED596_t AUTOSPEED596;

// 0x0478	AUTOSPEED597		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED597_t;
__xdata __at( 0x6678 ) volatile AUTOSPEED597_t AUTOSPEED597;

// 0x047c	AUTOSPEED598		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED598_t;
__xdata __at( 0x667c ) volatile AUTOSPEED598_t AUTOSPEED598;

// 0x0480	AUTOSPEED599		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED599_t;
__xdata __at( 0x6680 ) volatile AUTOSPEED599_t AUTOSPEED599;

// 0x0484	AUTOSPEED600		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED600_t;
__xdata __at( 0x6684 ) volatile AUTOSPEED600_t AUTOSPEED600;

// 0x0488	AUTOSPEED601		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED601_t;
__xdata __at( 0x6688 ) volatile AUTOSPEED601_t AUTOSPEED601;

// 0x048c	AUTOSPEED602		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED602_t;
__xdata __at( 0x668c ) volatile AUTOSPEED602_t AUTOSPEED602;

// 0x0490	AUTOSPEED603		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED603_t;
__xdata __at( 0x6690 ) volatile AUTOSPEED603_t AUTOSPEED603;

// 0x0494	AUTOSPEED604		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED604_t;
__xdata __at( 0x6694 ) volatile AUTOSPEED604_t AUTOSPEED604;

// 0x0498	AUTOSPEED605		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED605_t;
__xdata __at( 0x6698 ) volatile AUTOSPEED605_t AUTOSPEED605;

// 0x049c	AUTOSPEED606		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED606_t;
__xdata __at( 0x669c ) volatile AUTOSPEED606_t AUTOSPEED606;

// 0x04a0	AUTOSPEED607		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED607_t;
__xdata __at( 0x66a0 ) volatile AUTOSPEED607_t AUTOSPEED607;

// 0x04a4	AUTOSPEED608		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED608_t;
__xdata __at( 0x66a4 ) volatile AUTOSPEED608_t AUTOSPEED608;

// 0x04a8	AUTOSPEED609		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED609_t;
__xdata __at( 0x66a8 ) volatile AUTOSPEED609_t AUTOSPEED609;

// 0x04ac	AUTOSPEED610		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED610_t;
__xdata __at( 0x66ac ) volatile AUTOSPEED610_t AUTOSPEED610;

// 0x04b0	AUTOSPEED611		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED611_t;
__xdata __at( 0x66b0 ) volatile AUTOSPEED611_t AUTOSPEED611;

// 0x04b4	AUTOSPEED612		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED612_t;
__xdata __at( 0x66b4 ) volatile AUTOSPEED612_t AUTOSPEED612;

// 0x04b8	AUTOSPEED613		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED613_t;
__xdata __at( 0x66b8 ) volatile AUTOSPEED613_t AUTOSPEED613;

// 0x04bc	AUTOSPEED614		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED614_t;
__xdata __at( 0x66bc ) volatile AUTOSPEED614_t AUTOSPEED614;

// 0x04c0	AUTOSPEED615		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED615_t;
__xdata __at( 0x66c0 ) volatile AUTOSPEED615_t AUTOSPEED615;

// 0x04c4	AUTOSPEED616		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED616_t;
__xdata __at( 0x66c4 ) volatile AUTOSPEED616_t AUTOSPEED616;

// 0x04c8	AUTOSPEED617		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED617_t;
__xdata __at( 0x66c8 ) volatile AUTOSPEED617_t AUTOSPEED617;

// 0x04cc	AUTOSPEED618		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED618_t;
__xdata __at( 0x66cc ) volatile AUTOSPEED618_t AUTOSPEED618;

// 0x04d0	AUTOSPEED619		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED619_t;
__xdata __at( 0x66d0 ) volatile AUTOSPEED619_t AUTOSPEED619;

// 0x04d4	AUTOSPEED620		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED620_t;
__xdata __at( 0x66d4 ) volatile AUTOSPEED620_t AUTOSPEED620;

// 0x04d8	AUTOSPEED621		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED621_t;
__xdata __at( 0x66d8 ) volatile AUTOSPEED621_t AUTOSPEED621;

// 0x04dc	AUTOSPEED622		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED622_t;
__xdata __at( 0x66dc ) volatile AUTOSPEED622_t AUTOSPEED622;

// 0x04e0	AUTOSPEED623		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED623_t;
__xdata __at( 0x66e0 ) volatile AUTOSPEED623_t AUTOSPEED623;

// 0x04e4	AUTOSPEED624		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED624_t;
__xdata __at( 0x66e4 ) volatile AUTOSPEED624_t AUTOSPEED624;

// 0x04e8	AUTOSPEED625		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED625_t;
__xdata __at( 0x66e8 ) volatile AUTOSPEED625_t AUTOSPEED625;

// 0x04ec	AUTOSPEED626		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED626_t;
__xdata __at( 0x66ec ) volatile AUTOSPEED626_t AUTOSPEED626;

// 0x04f0	AUTOSPEED627		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED627_t;
__xdata __at( 0x66f0 ) volatile AUTOSPEED627_t AUTOSPEED627;

// 0x04f4	AUTOSPEED628		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED628_t;
__xdata __at( 0x66f4 ) volatile AUTOSPEED628_t AUTOSPEED628;

// 0x04f8	AUTOSPEED629		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED629_t;
__xdata __at( 0x66f8 ) volatile AUTOSPEED629_t AUTOSPEED629;

// 0x04fc	AUTOSPEED630		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED630_t;
__xdata __at( 0x66fc ) volatile AUTOSPEED630_t AUTOSPEED630;

// 0x0500	AUTOSPEED631		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED631_t;
__xdata __at( 0x6700 ) volatile AUTOSPEED631_t AUTOSPEED631;

// 0x0504	AUTOSPEED632		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED632_t;
__xdata __at( 0x6704 ) volatile AUTOSPEED632_t AUTOSPEED632;

// 0x0508	AUTOSPEED633		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED633_t;
__xdata __at( 0x6708 ) volatile AUTOSPEED633_t AUTOSPEED633;

// 0x050c	AUTOSPEED634		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED634_t;
__xdata __at( 0x670c ) volatile AUTOSPEED634_t AUTOSPEED634;

// 0x0510	AUTOSPEED635		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED635_t;
__xdata __at( 0x6710 ) volatile AUTOSPEED635_t AUTOSPEED635;

// 0x0514	AUTOSPEED636		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED636_t;
__xdata __at( 0x6714 ) volatile AUTOSPEED636_t AUTOSPEED636;

// 0x0518	AUTOSPEED637		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED637_t;
__xdata __at( 0x6718 ) volatile AUTOSPEED637_t AUTOSPEED637;

// 0x051c	AUTOSPEED638		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED638_t;
__xdata __at( 0x671c ) volatile AUTOSPEED638_t AUTOSPEED638;

// 0x0520	AUTOSPEED639		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED639_t;
__xdata __at( 0x6720 ) volatile AUTOSPEED639_t AUTOSPEED639;

// 0x0524	AUTOSPEED640		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED640_t;
__xdata __at( 0x6724 ) volatile AUTOSPEED640_t AUTOSPEED640;

// 0x0528	AUTOSPEED641		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED641_t;
__xdata __at( 0x6728 ) volatile AUTOSPEED641_t AUTOSPEED641;

// 0x052c	AUTOSPEED642		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED642_t;
__xdata __at( 0x672c ) volatile AUTOSPEED642_t AUTOSPEED642;

// 0x0530	AUTOSPEED643		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED643_t;
__xdata __at( 0x6730 ) volatile AUTOSPEED643_t AUTOSPEED643;

// 0x0534	AUTOSPEED644		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED644_t;
__xdata __at( 0x6734 ) volatile AUTOSPEED644_t AUTOSPEED644;

// 0x0538	AUTOSPEED645		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED645_t;
__xdata __at( 0x6738 ) volatile AUTOSPEED645_t AUTOSPEED645;

// 0x053c	AUTOSPEED646		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED646_t;
__xdata __at( 0x673c ) volatile AUTOSPEED646_t AUTOSPEED646;

// 0x0540	AUTOSPEED647		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED647_t;
__xdata __at( 0x6740 ) volatile AUTOSPEED647_t AUTOSPEED647;

// 0x0544	AUTOSPEED648		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED648_t;
__xdata __at( 0x6744 ) volatile AUTOSPEED648_t AUTOSPEED648;

// 0x0548	AUTOSPEED649		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED649_t;
__xdata __at( 0x6748 ) volatile AUTOSPEED649_t AUTOSPEED649;

// 0x054c	AUTOSPEED650		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED650_t;
__xdata __at( 0x674c ) volatile AUTOSPEED650_t AUTOSPEED650;

// 0x0550	AUTOSPEED651		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED651_t;
__xdata __at( 0x6750 ) volatile AUTOSPEED651_t AUTOSPEED651;

// 0x0554	AUTOSPEED652		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED652_t;
__xdata __at( 0x6754 ) volatile AUTOSPEED652_t AUTOSPEED652;

// 0x0558	AUTOSPEED653		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED653_t;
__xdata __at( 0x6758 ) volatile AUTOSPEED653_t AUTOSPEED653;

// 0x055c	AUTOSPEED654		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED654_t;
__xdata __at( 0x675c ) volatile AUTOSPEED654_t AUTOSPEED654;

// 0x0560	AUTOSPEED655		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED655_t;
__xdata __at( 0x6760 ) volatile AUTOSPEED655_t AUTOSPEED655;

// 0x0564	AUTOSPEED656		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC_PDIV_RATE0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_TXDCC_PDIV_RATE1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_TXDCC_PDIV_CONT_RATE0_LANE_7_0       : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_TXDCC_PDIV_CONT_RATE1_LANE_7_0       : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED656_t;
__xdata __at( 0x6764 ) volatile AUTOSPEED656_t AUTOSPEED656;
#define reg_CAL_TXDCC_PDIV_RATE0_LANE_7_0  AUTOSPEED656.BF.CAL_TXDCC_PDIV_RATE0_LANE_7_0
#define reg_CAL_TXDCC_PDIV_RATE1_LANE_7_0  AUTOSPEED656.BF.CAL_TXDCC_PDIV_RATE1_LANE_7_0
#define reg_CAL_TXDCC_PDIV_CONT_RATE0_LANE_7_0  AUTOSPEED656.BF.CAL_TXDCC_PDIV_CONT_RATE0_LANE_7_0
#define reg_CAL_TXDCC_PDIV_CONT_RATE1_LANE_7_0  AUTOSPEED656.BF.CAL_TXDCC_PDIV_CONT_RATE1_LANE_7_0

// 0x0568	AUTOSPEED657		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC_PDIV_HG_RATE0_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TXDCC_PDIV_HG_RATE1_LANE_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TXDCC_RATE0_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_TXDCC_RATE1_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED657_t;
__xdata __at( 0x6768 ) volatile AUTOSPEED657_t AUTOSPEED657;
#define reg_CAL_TXDCC_PDIV_HG_RATE0_LANE_7_0  AUTOSPEED657.BF.CAL_TXDCC_PDIV_HG_RATE0_LANE_7_0
#define reg_CAL_TXDCC_PDIV_HG_RATE1_LANE_7_0  AUTOSPEED657.BF.CAL_TXDCC_PDIV_HG_RATE1_LANE_7_0
#define reg_CAL_TXDCC_RATE0_LANE_7_0  AUTOSPEED657.BF.CAL_TXDCC_RATE0_LANE_7_0
#define reg_CAL_TXDCC_RATE1_LANE_7_0  AUTOSPEED657.BF.CAL_TXDCC_RATE1_LANE_7_0

// 0x056c	AUTOSPEED658		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC_CONT_RATE0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_TXDCC_CONT_RATE1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_TXDCC_HG_RATE0_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TXDCC_HG_RATE1_LANE_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED658_t;
__xdata __at( 0x676c ) volatile AUTOSPEED658_t AUTOSPEED658;
#define reg_CAL_TXDCC_CONT_RATE0_LANE_7_0  AUTOSPEED658.BF.CAL_TXDCC_CONT_RATE0_LANE_7_0
#define reg_CAL_TXDCC_CONT_RATE1_LANE_7_0  AUTOSPEED658.BF.CAL_TXDCC_CONT_RATE1_LANE_7_0
#define reg_CAL_TXDCC_HG_RATE0_LANE_7_0  AUTOSPEED658.BF.CAL_TXDCC_HG_RATE0_LANE_7_0
#define reg_CAL_TXDCC_HG_RATE1_LANE_7_0  AUTOSPEED658.BF.CAL_TXDCC_HG_RATE1_LANE_7_0

// 0x0570	AUTOSPEED659		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DLL_RATE0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DLL_RATE1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DLL_CONT_RATE0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DLL_CONT_RATE1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED659_t;
__xdata __at( 0x6770 ) volatile AUTOSPEED659_t AUTOSPEED659;
#define reg_CAL_RXDCC_DLL_RATE0_LANE_7_0  AUTOSPEED659.BF.CAL_RXDCC_DLL_RATE0_LANE_7_0
#define reg_CAL_RXDCC_DLL_RATE1_LANE_7_0  AUTOSPEED659.BF.CAL_RXDCC_DLL_RATE1_LANE_7_0
#define reg_CAL_RXDCC_DLL_CONT_RATE0_LANE_7_0  AUTOSPEED659.BF.CAL_RXDCC_DLL_CONT_RATE0_LANE_7_0
#define reg_CAL_RXDCC_DLL_CONT_RATE1_LANE_7_0  AUTOSPEED659.BF.CAL_RXDCC_DLL_CONT_RATE1_LANE_7_0

// 0x0574	AUTOSPEED660		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DLL_HG_RATE0_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DLL_HG_RATE1_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_GEN0_LANE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_GEN1_LANE_7_0             : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED660_t;
__xdata __at( 0x6774 ) volatile AUTOSPEED660_t AUTOSPEED660;
#define reg_CAL_RXDCC_DLL_HG_RATE0_LANE_7_0  AUTOSPEED660.BF.CAL_RXDCC_DLL_HG_RATE0_LANE_7_0
#define reg_CAL_RXDCC_DLL_HG_RATE1_LANE_7_0  AUTOSPEED660.BF.CAL_RXDCC_DLL_HG_RATE1_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN0_LANE_7_0  AUTOSPEED660.BF.CAL_RXDCC_DATA_GEN0_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN1_LANE_7_0  AUTOSPEED660.BF.CAL_RXDCC_DATA_GEN1_LANE_7_0

// 0x0578	AUTOSPEED661		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_GEN2_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_GEN3_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_GEN4_LANE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN0_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED661_t;
__xdata __at( 0x6778 ) volatile AUTOSPEED661_t AUTOSPEED661;
#define reg_CAL_RXDCC_DATA_GEN2_LANE_7_0  AUTOSPEED661.BF.CAL_RXDCC_DATA_GEN2_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN3_LANE_7_0  AUTOSPEED661.BF.CAL_RXDCC_DATA_GEN3_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN4_LANE_7_0  AUTOSPEED661.BF.CAL_RXDCC_DATA_GEN4_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN0_LANE_7_0  AUTOSPEED661.BF.CAL_RXDCC_DATA_CONT_GEN0_LANE_7_0

// 0x057c	AUTOSPEED662		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_CONT_GEN1_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN2_LANE_7_0        : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN3_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN4_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED662_t;
__xdata __at( 0x677c ) volatile AUTOSPEED662_t AUTOSPEED662;
#define reg_CAL_RXDCC_DATA_CONT_GEN1_LANE_7_0  AUTOSPEED662.BF.CAL_RXDCC_DATA_CONT_GEN1_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN2_LANE_7_0  AUTOSPEED662.BF.CAL_RXDCC_DATA_CONT_GEN2_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN3_LANE_7_0  AUTOSPEED662.BF.CAL_RXDCC_DATA_CONT_GEN3_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN4_LANE_7_0  AUTOSPEED662.BF.CAL_RXDCC_DATA_CONT_GEN4_LANE_7_0

// 0x0580	AUTOSPEED663		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_HG_GEN0_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_HG_GEN1_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_HG_GEN2_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_HG_GEN3_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED663_t;
__xdata __at( 0x6780 ) volatile AUTOSPEED663_t AUTOSPEED663;
#define reg_CAL_RXDCC_DATA_HG_GEN0_LANE_7_0  AUTOSPEED663.BF.CAL_RXDCC_DATA_HG_GEN0_LANE_7_0
#define reg_CAL_RXDCC_DATA_HG_GEN1_LANE_7_0  AUTOSPEED663.BF.CAL_RXDCC_DATA_HG_GEN1_LANE_7_0
#define reg_CAL_RXDCC_DATA_HG_GEN2_LANE_7_0  AUTOSPEED663.BF.CAL_RXDCC_DATA_HG_GEN2_LANE_7_0
#define reg_CAL_RXDCC_DATA_HG_GEN3_LANE_7_0  AUTOSPEED663.BF.CAL_RXDCC_DATA_HG_GEN3_LANE_7_0

// 0x0584	AUTOSPEED664		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_HG_GEN4_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_RATE0_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_RATE1_LANE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_RATE2_LANE_7_0             : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED664_t;
__xdata __at( 0x6784 ) volatile AUTOSPEED664_t AUTOSPEED664;
#define reg_CAL_RXDCC_DATA_HG_GEN4_LANE_7_0  AUTOSPEED664.BF.CAL_RXDCC_DATA_HG_GEN4_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE0_LANE_7_0  AUTOSPEED664.BF.CAL_RXDCC_EOM_RATE0_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE1_LANE_7_0  AUTOSPEED664.BF.CAL_RXDCC_EOM_RATE1_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE2_LANE_7_0  AUTOSPEED664.BF.CAL_RXDCC_EOM_RATE2_LANE_7_0

// 0x0588	AUTOSPEED665		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOM_RATE3_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_RATE4_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED665_t;
__xdata __at( 0x6788 ) volatile AUTOSPEED665_t AUTOSPEED665;
#define reg_CAL_RXDCC_EOM_RATE3_LANE_7_0  AUTOSPEED665.BF.CAL_RXDCC_EOM_RATE3_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE4_LANE_7_0  AUTOSPEED665.BF.CAL_RXDCC_EOM_RATE4_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE0_LANE_7_0  AUTOSPEED665.BF.CAL_RXDCC_EOM_CONT_RATE0_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE1_LANE_7_0  AUTOSPEED665.BF.CAL_RXDCC_EOM_CONT_RATE1_LANE_7_0

// 0x058c	AUTOSPEED666		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOM_CONT_RATE2_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE3_LANE_7_0        : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE4_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_HG_RATE0_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED666_t;
__xdata __at( 0x678c ) volatile AUTOSPEED666_t AUTOSPEED666;
#define reg_CAL_RXDCC_EOM_CONT_RATE2_LANE_7_0  AUTOSPEED666.BF.CAL_RXDCC_EOM_CONT_RATE2_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE3_LANE_7_0  AUTOSPEED666.BF.CAL_RXDCC_EOM_CONT_RATE3_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE4_LANE_7_0  AUTOSPEED666.BF.CAL_RXDCC_EOM_CONT_RATE4_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE0_LANE_7_0  AUTOSPEED666.BF.CAL_RXDCC_EOM_HG_RATE0_LANE_7_0

// 0x0590	AUTOSPEED667		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOM_HG_RATE1_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_HG_RATE2_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_HG_RATE3_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_HG_RATE4_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED667_t;
__xdata __at( 0x6790 ) volatile AUTOSPEED667_t AUTOSPEED667;
#define reg_CAL_RXDCC_EOM_HG_RATE1_LANE_7_0  AUTOSPEED667.BF.CAL_RXDCC_EOM_HG_RATE1_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE2_LANE_7_0  AUTOSPEED667.BF.CAL_RXDCC_EOM_HG_RATE2_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE3_LANE_7_0  AUTOSPEED667.BF.CAL_RXDCC_EOM_HG_RATE3_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE4_LANE_7_0  AUTOSPEED667.BF.CAL_RXDCC_EOM_HG_RATE4_LANE_7_0

// 0x0594	AUTOSPEED668		TBD
typedef union {
	struct {
		uint8_t CAL_DLL_GMSEL_RATE0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t CAL_DLL_GMSEL_RATE1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_VDDA_DLL_SEL_RATE0_LANE_7_0          : 8;	/*[23:16]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_SEL_RATE1_LANE_7_0          : 8;	/*[31:24]     r/w 8'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED668_t;
__xdata __at( 0x6794 ) volatile AUTOSPEED668_t AUTOSPEED668;
#define reg_CAL_DLL_GMSEL_RATE0_LANE_7_0  AUTOSPEED668.BF.CAL_DLL_GMSEL_RATE0_LANE_7_0
#define reg_CAL_DLL_GMSEL_RATE1_LANE_7_0  AUTOSPEED668.BF.CAL_DLL_GMSEL_RATE1_LANE_7_0
#define reg_CAL_VDDA_DLL_SEL_RATE0_LANE_7_0  AUTOSPEED668.BF.CAL_VDDA_DLL_SEL_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_SEL_RATE1_LANE_7_0  AUTOSPEED668.BF.CAL_VDDA_DLL_SEL_RATE1_LANE_7_0

// 0x0598	AUTOSPEED669		TBD
typedef union {
	struct {
		uint8_t CAL_VDDA_DLL_SEL_CONT_RATE0_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_SEL_CONT_RATE1_LANE_7_0     : 8;	/* [15:8]     r/w 8'h16*/
		uint8_t CAL_DLL_EOM_GMSEL_RATE0_LANE_7_0         : 8;	/*[23:16]     r/w 8'h4*/
		uint8_t CAL_DLL_EOM_GMSEL_RATE1_LANE_7_0         : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED669_t;
__xdata __at( 0x6798 ) volatile AUTOSPEED669_t AUTOSPEED669;
#define reg_CAL_VDDA_DLL_SEL_CONT_RATE0_LANE_7_0  AUTOSPEED669.BF.CAL_VDDA_DLL_SEL_CONT_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_SEL_CONT_RATE1_LANE_7_0  AUTOSPEED669.BF.CAL_VDDA_DLL_SEL_CONT_RATE1_LANE_7_0
#define reg_CAL_DLL_EOM_GMSEL_RATE0_LANE_7_0  AUTOSPEED669.BF.CAL_DLL_EOM_GMSEL_RATE0_LANE_7_0
#define reg_CAL_DLL_EOM_GMSEL_RATE1_LANE_7_0  AUTOSPEED669.BF.CAL_DLL_EOM_GMSEL_RATE1_LANE_7_0

// 0x059c	AUTOSPEED670		TBD
typedef union {
	struct {
		uint8_t CAL_VDDA_DLL_EOM_SEL_RATE0_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_RATE1_LANE_7_0      : 8;	/* [15:8]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_CONT_RATE0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_CONT_RATE1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED670_t;
__xdata __at( 0x679c ) volatile AUTOSPEED670_t AUTOSPEED670;
#define reg_CAL_VDDA_DLL_EOM_SEL_RATE0_LANE_7_0  AUTOSPEED670.BF.CAL_VDDA_DLL_EOM_SEL_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_EOM_SEL_RATE1_LANE_7_0  AUTOSPEED670.BF.CAL_VDDA_DLL_EOM_SEL_RATE1_LANE_7_0
#define reg_CAL_VDDA_DLL_EOM_SEL_CONT_RATE0_LANE_7_0  AUTOSPEED670.BF.CAL_VDDA_DLL_EOM_SEL_CONT_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_EOM_SEL_CONT_RATE1_LANE_7_0  AUTOSPEED670.BF.CAL_VDDA_DLL_EOM_SEL_CONT_RATE1_LANE_7_0

// 0x05a0	AUTOSPEED671		TBD
typedef union {
	struct {
		uint8_t CAL_EOM_DPHER_RATE0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_EOM_DPHER_RATE1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE0_DIV0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE0_DIV1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED671_t;
__xdata __at( 0x67a0 ) volatile AUTOSPEED671_t AUTOSPEED671;
#define reg_CAL_EOM_DPHER_RATE0_LANE_7_0  AUTOSPEED671.BF.CAL_EOM_DPHER_RATE0_LANE_7_0
#define reg_CAL_EOM_DPHER_RATE1_LANE_7_0  AUTOSPEED671.BF.CAL_EOM_DPHER_RATE1_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE0_DIV0_LANE_7_0  AUTOSPEED671.BF.CAL_ALIGN90_DUMMY_CLK_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE0_DIV1_LANE_7_0  AUTOSPEED671.BF.CAL_ALIGN90_DUMMY_CLK_RATE0_DIV1_LANE_7_0

// 0x05a4	AUTOSPEED672		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE1_DIV0_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE1_DIV1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED672_t;
__xdata __at( 0x67a4 ) volatile AUTOSPEED672_t AUTOSPEED672;
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE1_DIV0_LANE_7_0  AUTOSPEED672.BF.CAL_ALIGN90_DUMMY_CLK_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE1_DIV1_LANE_7_0  AUTOSPEED672.BF.CAL_ALIGN90_DUMMY_CLK_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV0_LANE_7_0  AUTOSPEED672.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV1_LANE_7_0  AUTOSPEED672.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV1_LANE_7_0

// 0x05a8	AUTOSPEED673		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV0_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DAC_RATE0_DIV0_LANE_7_0      : 8;	/*[23:16]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DAC_RATE0_DIV1_LANE_7_0      : 8;	/*[31:24]     r/w 8'h31*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED673_t;
__xdata __at( 0x67a8 ) volatile AUTOSPEED673_t AUTOSPEED673;
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV0_LANE_7_0  AUTOSPEED673.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV1_LANE_7_0  AUTOSPEED673.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_DAC_RATE0_DIV0_LANE_7_0  AUTOSPEED673.BF.CAL_ALIGN90_DAC_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_RATE0_DIV1_LANE_7_0  AUTOSPEED673.BF.CAL_ALIGN90_DAC_RATE0_DIV1_LANE_7_0

// 0x05ac	AUTOSPEED674		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DAC_RATE1_DIV0_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DAC_RATE1_DIV1_LANE_7_0      : 8;	/* [15:8]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DAC_CONT_RATE0_DIV0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_DAC_CONT_RATE0_DIV1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED674_t;
__xdata __at( 0x67ac ) volatile AUTOSPEED674_t AUTOSPEED674;
#define reg_CAL_ALIGN90_DAC_RATE1_DIV0_LANE_7_0  AUTOSPEED674.BF.CAL_ALIGN90_DAC_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_RATE1_DIV1_LANE_7_0  AUTOSPEED674.BF.CAL_ALIGN90_DAC_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_DAC_CONT_RATE0_DIV0_LANE_7_0  AUTOSPEED674.BF.CAL_ALIGN90_DAC_CONT_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_CONT_RATE0_DIV1_LANE_7_0  AUTOSPEED674.BF.CAL_ALIGN90_DAC_CONT_RATE0_DIV1_LANE_7_0

// 0x05b0	AUTOSPEED675		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DAC_CONT_RATE1_DIV0_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_DAC_CONT_RATE1_DIV1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_RATE0_DIV0_LANE_7_0       : 8;	/*[23:16]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_RATE0_DIV1_LANE_7_0       : 8;	/*[31:24]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED675_t;
__xdata __at( 0x67b0 ) volatile AUTOSPEED675_t AUTOSPEED675;
#define reg_CAL_ALIGN90_DAC_CONT_RATE1_DIV0_LANE_7_0  AUTOSPEED675.BF.CAL_ALIGN90_DAC_CONT_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_CONT_RATE1_DIV1_LANE_7_0  AUTOSPEED675.BF.CAL_ALIGN90_DAC_CONT_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_GM_RATE0_DIV0_LANE_7_0  AUTOSPEED675.BF.CAL_ALIGN90_GM_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_RATE0_DIV1_LANE_7_0  AUTOSPEED675.BF.CAL_ALIGN90_GM_RATE0_DIV1_LANE_7_0

// 0x05b4	AUTOSPEED676		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_GM_RATE1_DIV0_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_RATE1_DIV1_LANE_7_0       : 8;	/* [15:8]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_CONT_RATE0_DIV0_LANE_7_0  : 8;	/*[23:16]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_CONT_RATE0_DIV1_LANE_7_0  : 8;	/*[31:24]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED676_t;
__xdata __at( 0x67b4 ) volatile AUTOSPEED676_t AUTOSPEED676;
#define reg_CAL_ALIGN90_GM_RATE1_DIV0_LANE_7_0  AUTOSPEED676.BF.CAL_ALIGN90_GM_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_RATE1_DIV1_LANE_7_0  AUTOSPEED676.BF.CAL_ALIGN90_GM_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_GM_CONT_RATE0_DIV0_LANE_7_0  AUTOSPEED676.BF.CAL_ALIGN90_GM_CONT_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_CONT_RATE0_DIV1_LANE_7_0  AUTOSPEED676.BF.CAL_ALIGN90_GM_CONT_RATE0_DIV1_LANE_7_0

// 0x05b8	AUTOSPEED677		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_GM_CONT_RATE1_DIV0_LANE_7_0  : 8;	/*  [7:0]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_CONT_RATE1_DIV1_LANE_7_0  : 8;	/* [15:8]     r/w 8'h3*/
		uint8_t CAL_SELLV_TXDATA_GEN0_LANE_7_0           : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_GEN1_LANE_7_0           : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED677_t;
__xdata __at( 0x67b8 ) volatile AUTOSPEED677_t AUTOSPEED677;
#define reg_CAL_ALIGN90_GM_CONT_RATE1_DIV0_LANE_7_0  AUTOSPEED677.BF.CAL_ALIGN90_GM_CONT_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_CONT_RATE1_DIV1_LANE_7_0  AUTOSPEED677.BF.CAL_ALIGN90_GM_CONT_RATE1_DIV1_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN0_LANE_7_0  AUTOSPEED677.BF.CAL_SELLV_TXDATA_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN1_LANE_7_0  AUTOSPEED677.BF.CAL_SELLV_TXDATA_GEN1_LANE_7_0

// 0x05bc	AUTOSPEED678		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXDATA_GEN2_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_GEN3_LANE_7_0           : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_GEN4_LANE_7_0           : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN0_LANE_7_0      : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED678_t;
__xdata __at( 0x67bc ) volatile AUTOSPEED678_t AUTOSPEED678;
#define reg_CAL_SELLV_TXDATA_GEN2_LANE_7_0  AUTOSPEED678.BF.CAL_SELLV_TXDATA_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN3_LANE_7_0  AUTOSPEED678.BF.CAL_SELLV_TXDATA_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN4_LANE_7_0  AUTOSPEED678.BF.CAL_SELLV_TXDATA_GEN4_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN0_LANE_7_0  AUTOSPEED678.BF.CAL_SELLV_TXDATA_CONT_GEN0_LANE_7_0

// 0x05c0	AUTOSPEED679		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXDATA_CONT_GEN1_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN2_LANE_7_0      : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN3_LANE_7_0      : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN4_LANE_7_0      : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED679_t;
__xdata __at( 0x67c0 ) volatile AUTOSPEED679_t AUTOSPEED679;
#define reg_CAL_SELLV_TXDATA_CONT_GEN1_LANE_7_0  AUTOSPEED679.BF.CAL_SELLV_TXDATA_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN2_LANE_7_0  AUTOSPEED679.BF.CAL_SELLV_TXDATA_CONT_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN3_LANE_7_0  AUTOSPEED679.BF.CAL_SELLV_TXDATA_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN4_LANE_7_0  AUTOSPEED679.BF.CAL_SELLV_TXDATA_CONT_GEN4_LANE_7_0

// 0x05c4	AUTOSPEED680		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_GEN0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_GEN1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_GEN2_LANE_7_0            : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_GEN3_LANE_7_0            : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED680_t;
__xdata __at( 0x67c4 ) volatile AUTOSPEED680_t AUTOSPEED680;
#define reg_CAL_SELLV_TXCLK_GEN0_LANE_7_0  AUTOSPEED680.BF.CAL_SELLV_TXCLK_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXCLK_GEN1_LANE_7_0  AUTOSPEED680.BF.CAL_SELLV_TXCLK_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXCLK_GEN2_LANE_7_0  AUTOSPEED680.BF.CAL_SELLV_TXCLK_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXCLK_GEN3_LANE_7_0  AUTOSPEED680.BF.CAL_SELLV_TXCLK_GEN3_LANE_7_0

// 0x05c8	AUTOSPEED681		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_GEN4_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN0_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN1_LANE_7_0       : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN2_LANE_7_0       : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED681_t;
__xdata __at( 0x67c8 ) volatile AUTOSPEED681_t AUTOSPEED681;
#define reg_CAL_SELLV_TXCLK_GEN4_LANE_7_0  AUTOSPEED681.BF.CAL_SELLV_TXCLK_GEN4_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN0_LANE_7_0  AUTOSPEED681.BF.CAL_SELLV_TXCLK_CONT_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN1_LANE_7_0  AUTOSPEED681.BF.CAL_SELLV_TXCLK_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN2_LANE_7_0  AUTOSPEED681.BF.CAL_SELLV_TXCLK_CONT_GEN2_LANE_7_0

// 0x05cc	AUTOSPEED682		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_CONT_GEN3_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN4_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED682_t;
__xdata __at( 0x67cc ) volatile AUTOSPEED682_t AUTOSPEED682;
#define reg_CAL_SELLV_TXCLK_CONT_GEN3_LANE_7_0  AUTOSPEED682.BF.CAL_SELLV_TXCLK_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN4_LANE_7_0  AUTOSPEED682.BF.CAL_SELLV_TXCLK_CONT_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN0_LANE_7_0  AUTOSPEED682.BF.CAL_SELLV_RXDATACLK_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN1_LANE_7_0  AUTOSPEED682.BF.CAL_SELLV_RXDATACLK_GEN1_LANE_7_0

// 0x05d0	AUTOSPEED683		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXDATACLK_GEN2_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN3_LANE_7_0        : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN4_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN0_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED683_t;
__xdata __at( 0x67d0 ) volatile AUTOSPEED683_t AUTOSPEED683;
#define reg_CAL_SELLV_RXDATACLK_GEN2_LANE_7_0  AUTOSPEED683.BF.CAL_SELLV_RXDATACLK_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN3_LANE_7_0  AUTOSPEED683.BF.CAL_SELLV_RXDATACLK_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN4_LANE_7_0  AUTOSPEED683.BF.CAL_SELLV_RXDATACLK_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN0_LANE_7_0  AUTOSPEED683.BF.CAL_SELLV_RXDATACLK_CONT_GEN0_LANE_7_0

// 0x05d4	AUTOSPEED684		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN1_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN2_LANE_7_0   : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN3_LANE_7_0   : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN4_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED684_t;
__xdata __at( 0x67d4 ) volatile AUTOSPEED684_t AUTOSPEED684;
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN1_LANE_7_0  AUTOSPEED684.BF.CAL_SELLV_RXDATACLK_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN2_LANE_7_0  AUTOSPEED684.BF.CAL_SELLV_RXDATACLK_CONT_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN3_LANE_7_0  AUTOSPEED684.BF.CAL_SELLV_RXDATACLK_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN4_LANE_7_0  AUTOSPEED684.BF.CAL_SELLV_RXDATACLK_CONT_GEN4_LANE_7_0

// 0x05d8	AUTOSPEED685		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_GEN0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_GEN1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_GEN2_LANE_7_0            : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_GEN3_LANE_7_0            : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED685_t;
__xdata __at( 0x67d8 ) volatile AUTOSPEED685_t AUTOSPEED685;
#define reg_CAL_SELLV_TXPRE_GEN0_LANE_7_0  AUTOSPEED685.BF.CAL_SELLV_TXPRE_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXPRE_GEN1_LANE_7_0  AUTOSPEED685.BF.CAL_SELLV_TXPRE_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXPRE_GEN2_LANE_7_0  AUTOSPEED685.BF.CAL_SELLV_TXPRE_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXPRE_GEN3_LANE_7_0  AUTOSPEED685.BF.CAL_SELLV_TXPRE_GEN3_LANE_7_0

// 0x05dc	AUTOSPEED686		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_GEN4_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN0_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN1_LANE_7_0       : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN2_LANE_7_0       : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED686_t;
__xdata __at( 0x67dc ) volatile AUTOSPEED686_t AUTOSPEED686;
#define reg_CAL_SELLV_TXPRE_GEN4_LANE_7_0  AUTOSPEED686.BF.CAL_SELLV_TXPRE_GEN4_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN0_LANE_7_0  AUTOSPEED686.BF.CAL_SELLV_TXPRE_CONT_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN1_LANE_7_0  AUTOSPEED686.BF.CAL_SELLV_TXPRE_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN2_LANE_7_0  AUTOSPEED686.BF.CAL_SELLV_TXPRE_CONT_GEN2_LANE_7_0

// 0x05e0	AUTOSPEED687		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_CONT_GEN3_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN4_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED687_t;
__xdata __at( 0x67e0 ) volatile AUTOSPEED687_t AUTOSPEED687;
#define reg_CAL_SELLV_TXPRE_CONT_GEN3_LANE_7_0  AUTOSPEED687.BF.CAL_SELLV_TXPRE_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN4_LANE_7_0  AUTOSPEED687.BF.CAL_SELLV_TXPRE_CONT_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN0_LANE_7_0  AUTOSPEED687.BF.CAL_SELLV_RXSAMPLER_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN1_LANE_7_0  AUTOSPEED687.BF.CAL_SELLV_RXSAMPLER_GEN1_LANE_7_0

// 0x05e4	AUTOSPEED688		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXSAMPLER_GEN2_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN3_LANE_7_0        : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN4_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN0_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED688_t;
__xdata __at( 0x67e4 ) volatile AUTOSPEED688_t AUTOSPEED688;
#define reg_CAL_SELLV_RXSAMPLER_GEN2_LANE_7_0  AUTOSPEED688.BF.CAL_SELLV_RXSAMPLER_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN3_LANE_7_0  AUTOSPEED688.BF.CAL_SELLV_RXSAMPLER_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN4_LANE_7_0  AUTOSPEED688.BF.CAL_SELLV_RXSAMPLER_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN0_LANE_7_0  AUTOSPEED688.BF.CAL_SELLV_RXSAMPLER_CONT_GEN0_LANE_7_0

// 0x05e8	AUTOSPEED689		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN1_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN2_LANE_7_0   : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN3_LANE_7_0   : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN4_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED689_t;
__xdata __at( 0x67e8 ) volatile AUTOSPEED689_t AUTOSPEED689;
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN1_LANE_7_0  AUTOSPEED689.BF.CAL_SELLV_RXSAMPLER_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN2_LANE_7_0  AUTOSPEED689.BF.CAL_SELLV_RXSAMPLER_CONT_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN3_LANE_7_0  AUTOSPEED689.BF.CAL_SELLV_RXSAMPLER_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN4_LANE_7_0  AUTOSPEED689.BF.CAL_SELLV_RXSAMPLER_CONT_GEN4_LANE_7_0

// 0x05ec	AUTOSPEED690		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXEOMCLK_GEN0_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_GEN1_LANE_7_0         : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_GEN2_LANE_7_0         : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_GEN3_LANE_7_0         : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED690_t;
__xdata __at( 0x67ec ) volatile AUTOSPEED690_t AUTOSPEED690;
#define reg_CAL_SELLV_RXEOMCLK_GEN0_LANE_7_0  AUTOSPEED690.BF.CAL_SELLV_RXEOMCLK_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_GEN1_LANE_7_0  AUTOSPEED690.BF.CAL_SELLV_RXEOMCLK_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_GEN2_LANE_7_0  AUTOSPEED690.BF.CAL_SELLV_RXEOMCLK_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_GEN3_LANE_7_0  AUTOSPEED690.BF.CAL_SELLV_RXEOMCLK_GEN3_LANE_7_0

// 0x05f0	AUTOSPEED691		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXEOMCLK_GEN4_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN0_LANE_7_0    : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN1_LANE_7_0    : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN2_LANE_7_0    : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED691_t;
__xdata __at( 0x67f0 ) volatile AUTOSPEED691_t AUTOSPEED691;
#define reg_CAL_SELLV_RXEOMCLK_GEN4_LANE_7_0  AUTOSPEED691.BF.CAL_SELLV_RXEOMCLK_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN0_LANE_7_0  AUTOSPEED691.BF.CAL_SELLV_RXEOMCLK_CONT_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN1_LANE_7_0  AUTOSPEED691.BF.CAL_SELLV_RXEOMCLK_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN2_LANE_7_0  AUTOSPEED691.BF.CAL_SELLV_RXEOMCLK_CONT_GEN2_LANE_7_0

// 0x05f4	AUTOSPEED692		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN3_LANE_7_0    : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN4_LANE_7_0    : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t TX_PRESET_INDEX_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h2*/
		uint8_t CAL_PLL_SPEED_RING_RATE0_LANE_7_0        : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED692_t;
__xdata __at( 0x67f4 ) volatile AUTOSPEED692_t AUTOSPEED692;
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN3_LANE_7_0  AUTOSPEED692.BF.CAL_SELLV_RXEOMCLK_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN4_LANE_7_0  AUTOSPEED692.BF.CAL_SELLV_RXEOMCLK_CONT_GEN4_LANE_7_0
#define reg_TX_PRESET_INDEX_LANE_7_0  AUTOSPEED692.BF.TX_PRESET_INDEX_LANE_7_0
#define reg_CAL_PLL_SPEED_RING_RATE0_LANE_7_0  AUTOSPEED692.BF.CAL_PLL_SPEED_RING_RATE0_LANE_7_0

// 0x05f8	AUTOSPEED693		TBD
typedef union {
	struct {
		uint8_t CAL_PLL_SPEED_RING_RATE1_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_CONT_RATE0_LANE_7_0   : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PLL_SPEED_RING_CONT_RATE1_LANE_7_0   : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_LANE_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED693_t;
__xdata __at( 0x67f8 ) volatile AUTOSPEED693_t AUTOSPEED693;
#define reg_CAL_PLL_SPEED_RING_RATE1_LANE_7_0  AUTOSPEED693.BF.CAL_PLL_SPEED_RING_RATE1_LANE_7_0
#define reg_CAL_PLL_SPEED_RING_CONT_RATE0_LANE_7_0  AUTOSPEED693.BF.CAL_PLL_SPEED_RING_CONT_RATE0_LANE_7_0
#define reg_CAL_PLL_SPEED_RING_CONT_RATE1_LANE_7_0  AUTOSPEED693.BF.CAL_PLL_SPEED_RING_CONT_RATE1_LANE_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_LANE_7_0  AUTOSPEED693.BF.CAL_PLL_SLLP_DAC_COARSE_RING_RATE0_LANE_7_0

// 0x05fc	AUTOSPEED694		TBD
typedef union {
	struct {
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_LANE_7_0 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_LANE_7_0 : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE0_LANE_7_0    : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED694_t;
__xdata __at( 0x67fc ) volatile AUTOSPEED694_t AUTOSPEED694;
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_LANE_7_0  AUTOSPEED694.BF.CAL_PLL_SLLP_DAC_COARSE_RING_RATE1_LANE_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_LANE_7_0  AUTOSPEED694.BF.CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE0_LANE_7_0
#define reg_CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_LANE_7_0  AUTOSPEED694.BF.CAL_PLL_SLLP_DAC_COARSE_RING_CONT_RATE1_LANE_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_RATE0_LANE_7_0  AUTOSPEED694.BF.CAL_SLLP_DAC_FINE_RING_RATE0_LANE_7_0

// 0x0600	AUTOSPEED695		TBD
typedef union {
	struct {
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE0_LANE_15_8   : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE1_LANE_7_0    : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_RATE1_LANE_15_8   : 8;	/*[23:16]     r/w 8'h4*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE0_LANE_7_0 : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED695_t;
__xdata __at( 0x6800 ) volatile AUTOSPEED695_t AUTOSPEED695;
#define reg_CAL_SLLP_DAC_FINE_RING_RATE0_LANE_15_8  AUTOSPEED695.BF.CAL_SLLP_DAC_FINE_RING_RATE0_LANE_15_8
#define reg_CAL_SLLP_DAC_FINE_RING_RATE1_LANE_7_0  AUTOSPEED695.BF.CAL_SLLP_DAC_FINE_RING_RATE1_LANE_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_RATE1_LANE_15_8  AUTOSPEED695.BF.CAL_SLLP_DAC_FINE_RING_RATE1_LANE_15_8
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE0_LANE_7_0  AUTOSPEED695.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE0_LANE_7_0

// 0x0604	AUTOSPEED696		TBD
typedef union {
	struct {
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE0_LANE_15_8 : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_SLLP_DAC_FINE_RING_CONT_RATE1_LANE_15_8 : 8;	/*[23:16]     r/w 8'h4*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED696_t;
__xdata __at( 0x6804 ) volatile AUTOSPEED696_t AUTOSPEED696;
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE0_LANE_15_8  AUTOSPEED696.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE0_LANE_15_8
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE1_LANE_7_0  AUTOSPEED696.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE1_LANE_7_0
#define reg_CAL_SLLP_DAC_FINE_RING_CONT_RATE1_LANE_15_8  AUTOSPEED696.BF.CAL_SLLP_DAC_FINE_RING_CONT_RATE1_LANE_15_8

#endif
