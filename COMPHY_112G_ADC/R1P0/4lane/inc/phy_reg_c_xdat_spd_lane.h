#ifndef PHY_REG_C_XDAT_SPD_LANE_H
#define PHY_REG_C_XDAT_SPD_LANE_H



// 0x0304	AUTOSPEED376		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G0_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G0_LANE                        : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G0_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEEDDIV_G0_LANE_2_0                  : 3;	/*[26:24]     r/w 3'h4*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED376_t;
__xdata __at( 0x6304 ) volatile AUTOSPEED376_t AUTOSPEED376;
#define reg_PLL_RATE_SEL_TX_G0_LANE_3_0  AUTOSPEED376.BF.PLL_RATE_SEL_TX_G0_LANE_3_0
#define reg_TX_CK_SEL_G0_LANE  AUTOSPEED376.BF.TX_CK_SEL_G0_LANE
#define reg_TX_VDDCAL_RATE_EN_G0_LANE  AUTOSPEED376.BF.TX_VDDCAL_RATE_EN_G0_LANE
#define reg_TX_SPEEDDIV_G0_LANE_2_0  AUTOSPEED376.BF.TX_SPEEDDIV_G0_LANE_2_0

// 0x0308	AUTOSPEED377		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_CLK_G0_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_DATA_G0_LANE_2_0          : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t SLEWRATE_EN_G0_LANE                      : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SLEWCTRL1_G0_LANE_1_0                    : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED377_t;
__xdata __at( 0x6308 ) volatile AUTOSPEED377_t AUTOSPEED377;
#define reg_TXREG_SPEEDTRK_CLK_G0_LANE_2_0  AUTOSPEED377.BF.TXREG_SPEEDTRK_CLK_G0_LANE_2_0
#define reg_TXREG_SPEEDTRK_DATA_G0_LANE_2_0  AUTOSPEED377.BF.TXREG_SPEEDTRK_DATA_G0_LANE_2_0
#define reg_SLEWRATE_EN_G0_LANE  AUTOSPEED377.BF.SLEWRATE_EN_G0_LANE
#define reg_SLEWCTRL1_G0_LANE_1_0  AUTOSPEED377.BF.SLEWCTRL1_G0_LANE_1_0

// 0x030c	AUTOSPEED378		TBD
typedef union {
	struct {
		uint8_t SLEWCTRL0_G0_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEW_NO_EM_G0_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_PAM2_EN_G0_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G0_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED378_t;
__xdata __at( 0x630c ) volatile AUTOSPEED378_t AUTOSPEED378;
#define reg_SLEWCTRL0_G0_LANE_1_0  AUTOSPEED378.BF.SLEWCTRL0_G0_LANE_1_0
#define reg_SLEW_NO_EM_G0_LANE  AUTOSPEED378.BF.SLEW_NO_EM_G0_LANE
#define reg_TX_PAM2_EN_G0_LANE  AUTOSPEED378.BF.TX_PAM2_EN_G0_LANE
#define reg_TX_HALFRATE_EN_G0_LANE  AUTOSPEED378.BF.TX_HALFRATE_EN_G0_LANE

// 0x0310	AUTOSPEED379		TBD
typedef union {
	struct {
		uint8_t ETHERNET_MODE_G0_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G0_LANE_1_0             : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t TX_TRAIN_PAT_MODE_G0_LANE                : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TRAIN_PAT_NUM_G0_LANE_7_0                : 8;	/*[31:24]     r/w 8'h88*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED379_t;
__xdata __at( 0x6310 ) volatile AUTOSPEED379_t AUTOSPEED379;
#define reg_ETHERNET_MODE_G0_LANE_1_0  AUTOSPEED379.BF.ETHERNET_MODE_G0_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G0_LANE_1_0  AUTOSPEED379.BF.TX_TRAIN_PAT_SEL_G0_LANE_1_0
#define reg_TX_TRAIN_PAT_MODE_G0_LANE  AUTOSPEED379.BF.TX_TRAIN_PAT_MODE_G0_LANE
#define reg_TRAIN_PAT_NUM_G0_LANE_7_0  AUTOSPEED379.BF.TRAIN_PAT_NUM_G0_LANE_7_0

// 0x0314	AUTOSPEED380		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G0_LANE_9_8                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G0_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_AMP_DEFAULT1_G0_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT1_G0_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED380_t;
__xdata __at( 0x6314 ) volatile AUTOSPEED380_t AUTOSPEED380;
#define reg_TRAIN_PAT_NUM_G0_LANE_9_8  AUTOSPEED380.BF.TRAIN_PAT_NUM_G0_LANE_9_8
#define reg_TX_TRAIN_PAT_TOGGLE_G0_LANE  AUTOSPEED380.BF.TX_TRAIN_PAT_TOGGLE_G0_LANE
#define reg_TX_AMP_DEFAULT1_G0_LANE_6_0  AUTOSPEED380.BF.TX_AMP_DEFAULT1_G0_LANE_6_0
#define reg_TX_EMPH0_DEFAULT1_G0_LANE_4_0  AUTOSPEED380.BF.TX_EMPH0_DEFAULT1_G0_LANE_4_0

// 0x0318	AUTOSPEED381		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT1_G0_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT1_G0_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT2_G0_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT2_G0_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED381_t;
__xdata __at( 0x6318 ) volatile AUTOSPEED381_t AUTOSPEED381;
#define reg_TX_EMPH1_DEFAULT1_G0_LANE_4_0  AUTOSPEED381.BF.TX_EMPH1_DEFAULT1_G0_LANE_4_0
#define reg_TX_EMPH2_DEFAULT1_G0_LANE_4_0  AUTOSPEED381.BF.TX_EMPH2_DEFAULT1_G0_LANE_4_0
#define reg_TX_AMP_DEFAULT2_G0_LANE_6_0  AUTOSPEED381.BF.TX_AMP_DEFAULT2_G0_LANE_6_0
#define reg_TX_EMPH0_DEFAULT2_G0_LANE_4_0  AUTOSPEED381.BF.TX_EMPH0_DEFAULT2_G0_LANE_4_0

// 0x031c	AUTOSPEED382		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT2_G0_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h1c*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT2_G0_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT3_G0_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT3_G0_LANE_4_0            : 5;	/*[28:24]     r/w 5'h1c*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED382_t;
__xdata __at( 0x631c ) volatile AUTOSPEED382_t AUTOSPEED382;
#define reg_TX_EMPH1_DEFAULT2_G0_LANE_4_0  AUTOSPEED382.BF.TX_EMPH1_DEFAULT2_G0_LANE_4_0
#define reg_TX_EMPH2_DEFAULT2_G0_LANE_4_0  AUTOSPEED382.BF.TX_EMPH2_DEFAULT2_G0_LANE_4_0
#define reg_TX_AMP_DEFAULT3_G0_LANE_6_0  AUTOSPEED382.BF.TX_AMP_DEFAULT3_G0_LANE_6_0
#define reg_TX_EMPH0_DEFAULT3_G0_LANE_4_0  AUTOSPEED382.BF.TX_EMPH0_DEFAULT3_G0_LANE_4_0

// 0x0320	AUTOSPEED383		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT3_G0_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT3_G0_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G0_LANE_3_0              : 4;	/*[19:16]     r/w 4'h0*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_CK_SEL_G0_LANE                        : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED383_t;
__xdata __at( 0x6320 ) volatile AUTOSPEED383_t AUTOSPEED383;
#define reg_TX_EMPH1_DEFAULT3_G0_LANE_4_0  AUTOSPEED383.BF.TX_EMPH1_DEFAULT3_G0_LANE_4_0
#define reg_TX_EMPH2_DEFAULT3_G0_LANE_4_0  AUTOSPEED383.BF.TX_EMPH2_DEFAULT3_G0_LANE_4_0
#define reg_PLL_RATE_SEL_RX_G0_LANE_3_0  AUTOSPEED383.BF.PLL_RATE_SEL_RX_G0_LANE_3_0
#define reg_RX_CK_SEL_G0_LANE  AUTOSPEED383.BF.RX_CK_SEL_G0_LANE

// 0x0324	AUTOSPEED384		TBD
typedef union {
	struct {
		uint8_t RX_VDDCAL_RATE_EN_G0_LANE                : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_SPEED_DIV_G0_LANE_2_0                 : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G0_LANE_2_0              : 3;	/*[18:16]     r/w 3'h3*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t INTPI_G0_LANE_3_0                        : 4;	/*[27:24]     r/w 4'h9*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED384_t;
__xdata __at( 0x6324 ) volatile AUTOSPEED384_t AUTOSPEED384;
#define reg_RX_VDDCAL_RATE_EN_G0_LANE  AUTOSPEED384.BF.RX_VDDCAL_RATE_EN_G0_LANE
#define reg_RX_SPEED_DIV_G0_LANE_2_0  AUTOSPEED384.BF.RX_SPEED_DIV_G0_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G0_LANE_2_0  AUTOSPEED384.BF.DTL_CLK_SPEEDUP_G0_LANE_2_0
#define reg_INTPI_G0_LANE_3_0  AUTOSPEED384.BF.INTPI_G0_LANE_3_0

// 0x0328	AUTOSPEED385		TBD
typedef union {
	struct {
		uint8_t INTPR_G0_LANE_1_0                        : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G0_LANE_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G0_LANE_1_0             : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_DATA_G0_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED385_t;
__xdata __at( 0x6328 ) volatile AUTOSPEED385_t AUTOSPEED385;
#define reg_INTPR_G0_LANE_1_0  AUTOSPEED385.BF.INTPR_G0_LANE_1_0
#define reg_DLL_FREQ_SEL_G0_LANE_1_0  AUTOSPEED385.BF.DLL_FREQ_SEL_G0_LANE_1_0
#define reg_EOM_DLL_FREQ_SEL_G0_LANE_1_0  AUTOSPEED385.BF.EOM_DLL_FREQ_SEL_G0_LANE_1_0
#define reg_RXREG_SPEEDTRK_DATA_G0_LANE_2_0  AUTOSPEED385.BF.RXREG_SPEEDTRK_DATA_G0_LANE_2_0

// 0x032c	AUTOSPEED386		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_CLK_G0_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G0_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SELMUFI_G0_LANE_2_0                      : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t SELMUFF_G0_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED386_t;
__xdata __at( 0x632c ) volatile AUTOSPEED386_t AUTOSPEED386;
#define reg_RXREG_SPEEDTRK_CLK_G0_LANE_2_0  AUTOSPEED386.BF.RXREG_SPEEDTRK_CLK_G0_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G0_LANE  AUTOSPEED386.BF.RXREG_SPEEDTRK_CLK_HALF_G0_LANE
#define reg_SELMUFI_G0_LANE_2_0  AUTOSPEED386.BF.SELMUFI_G0_LANE_2_0
#define reg_SELMUFF_G0_LANE_2_0  AUTOSPEED386.BF.SELMUFF_G0_LANE_2_0

// 0x0330	AUTOSPEED387		TBD
typedef union {
	struct {
		uint8_t SELMUPI_G0_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t SELMUPF_G0_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_G0_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G0_LANE_7_0           : 8;	/*[31:24]     r/w 8'ha*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED387_t;
__xdata __at( 0x6330 ) volatile AUTOSPEED387_t AUTOSPEED387;
#define reg_SELMUPI_G0_LANE_3_0  AUTOSPEED387.BF.SELMUPI_G0_LANE_3_0
#define reg_SELMUPF_G0_LANE_3_0  AUTOSPEED387.BF.SELMUPF_G0_LANE_3_0
#define reg_DTL_CLK_MODE_G0_LANE_1_0  AUTOSPEED387.BF.DTL_CLK_MODE_G0_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G0_LANE_7_0  AUTOSPEED387.BF.RX_FOFFSET_EXTRA_M_G0_LANE_7_0

// 0x0334	AUTOSPEED388		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G0_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G0_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G0_LANE_12_8                : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t PU_SMPLR_D_P2_G0_LANE_2_0                : 3;	/*[26:24]     r/w 3'h2*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED388_t;
__xdata __at( 0x6334 ) volatile AUTOSPEED388_t AUTOSPEED388;
#define reg_RX_FOFFSET_EXTRA_M_G0_LANE_13_8  AUTOSPEED388.BF.RX_FOFFSET_EXTRA_M_G0_LANE_13_8
#define reg_INIT_RXFOFFS_G0_LANE_7_0  AUTOSPEED388.BF.INIT_RXFOFFS_G0_LANE_7_0
#define reg_INIT_RXFOFFS_G0_LANE_12_8  AUTOSPEED388.BF.INIT_RXFOFFS_G0_LANE_12_8
#define reg_PU_SMPLR_D_P2_G0_LANE_2_0  AUTOSPEED388.BF.PU_SMPLR_D_P2_G0_LANE_2_0

// 0x0338	AUTOSPEED389		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_S_P2_G0_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G0_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G0_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G0_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED389_t;
__xdata __at( 0x6338 ) volatile AUTOSPEED389_t AUTOSPEED389;
#define reg_PU_SMPLR_S_P2_G0_LANE_2_0  AUTOSPEED389.BF.PU_SMPLR_S_P2_G0_LANE_2_0
#define reg_PU_SMPLR_D_P4_G0_LANE_2_0  AUTOSPEED389.BF.PU_SMPLR_D_P4_G0_LANE_2_0
#define reg_PU_SMPLR_S_P4_G0_LANE_2_0  AUTOSPEED389.BF.PU_SMPLR_S_P4_G0_LANE_2_0
#define reg_PATH_DISABLE_EDGE_G0_LANE  AUTOSPEED389.BF.PATH_DISABLE_EDGE_G0_LANE

// 0x033c	AUTOSPEED390		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P1_G0_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G0_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P3_G0_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G0_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED390_t;
__xdata __at( 0x633c ) volatile AUTOSPEED390_t AUTOSPEED390;
#define reg_PU_SMPLR_D_P1_G0_LANE_2_0  AUTOSPEED390.BF.PU_SMPLR_D_P1_G0_LANE_2_0
#define reg_PU_SMPLR_S_P1_G0_LANE_2_0  AUTOSPEED390.BF.PU_SMPLR_S_P1_G0_LANE_2_0
#define reg_PU_SMPLR_D_P3_G0_LANE_2_0  AUTOSPEED390.BF.PU_SMPLR_D_P3_G0_LANE_2_0
#define reg_PU_SMPLR_S_P3_G0_LANE_2_0  AUTOSPEED390.BF.PU_SMPLR_S_P3_G0_LANE_2_0

// 0x0340	AUTOSPEED391		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G0_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G0_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G0_LANE_1_0     : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXDLL_TEMP_A_G0_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h25*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED391_t;
__xdata __at( 0x6340 ) volatile AUTOSPEED391_t AUTOSPEED391;
#define reg_REG_DFE_FULL_RATE_MODE_G0_LANE  AUTOSPEED391.BF.REG_DFE_FULL_RATE_MODE_G0_LANE
#define reg_REG_DFE_DIS_G0_LANE  AUTOSPEED391.BF.REG_DFE_DIS_G0_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G0_LANE_1_0  AUTOSPEED391.BF.REG_DFE_TAP_SETTLE_SCALE_G0_LANE_1_0
#define reg_RXDLL_TEMP_A_G0_LANE_7_0  AUTOSPEED391.BF.RXDLL_TEMP_A_G0_LANE_7_0

// 0x0344	AUTOSPEED392		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_B_G0_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G0_LANE                    : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_PAM2_EN_G0_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_HALFRATE_EN_G0_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED392_t;
__xdata __at( 0x6344 ) volatile AUTOSPEED392_t AUTOSPEED392;
#define reg_RXDLL_TEMP_B_G0_LANE_7_0  AUTOSPEED392.BF.RXDLL_TEMP_B_G0_LANE_7_0
#define reg_DFE_PAM2_MODE_G0_LANE  AUTOSPEED392.BF.DFE_PAM2_MODE_G0_LANE
#define reg_RX_PAM2_EN_G0_LANE  AUTOSPEED392.BF.RX_PAM2_EN_G0_LANE
#define reg_RX_HALFRATE_EN_G0_LANE  AUTOSPEED392.BF.RX_HALFRATE_EN_G0_LANE

// 0x0348	AUTOSPEED393		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED393_t;
__xdata __at( 0x6348 ) volatile AUTOSPEED393_t AUTOSPEED393;

// 0x034c	AUTOSPEED394		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED394_t;
__xdata __at( 0x634c ) volatile AUTOSPEED394_t AUTOSPEED394;

// 0x0350	AUTOSPEED395		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED395_t;
__xdata __at( 0x6350 ) volatile AUTOSPEED395_t AUTOSPEED395;

// 0x0354	AUTOSPEED396		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G1_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G1_LANE                        : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G1_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEEDDIV_G1_LANE_2_0                  : 3;	/*[26:24]     r/w 3'h3*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED396_t;
__xdata __at( 0x6354 ) volatile AUTOSPEED396_t AUTOSPEED396;
#define reg_PLL_RATE_SEL_TX_G1_LANE_3_0  AUTOSPEED396.BF.PLL_RATE_SEL_TX_G1_LANE_3_0
#define reg_TX_CK_SEL_G1_LANE  AUTOSPEED396.BF.TX_CK_SEL_G1_LANE
#define reg_TX_VDDCAL_RATE_EN_G1_LANE  AUTOSPEED396.BF.TX_VDDCAL_RATE_EN_G1_LANE
#define reg_TX_SPEEDDIV_G1_LANE_2_0  AUTOSPEED396.BF.TX_SPEEDDIV_G1_LANE_2_0

// 0x0358	AUTOSPEED397		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_CLK_G1_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_DATA_G1_LANE_2_0          : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t SLEWRATE_EN_G1_LANE                      : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SLEWCTRL1_G1_LANE_1_0                    : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED397_t;
__xdata __at( 0x6358 ) volatile AUTOSPEED397_t AUTOSPEED397;
#define reg_TXREG_SPEEDTRK_CLK_G1_LANE_2_0  AUTOSPEED397.BF.TXREG_SPEEDTRK_CLK_G1_LANE_2_0
#define reg_TXREG_SPEEDTRK_DATA_G1_LANE_2_0  AUTOSPEED397.BF.TXREG_SPEEDTRK_DATA_G1_LANE_2_0
#define reg_SLEWRATE_EN_G1_LANE  AUTOSPEED397.BF.SLEWRATE_EN_G1_LANE
#define reg_SLEWCTRL1_G1_LANE_1_0  AUTOSPEED397.BF.SLEWCTRL1_G1_LANE_1_0

// 0x035c	AUTOSPEED398		TBD
typedef union {
	struct {
		uint8_t SLEWCTRL0_G1_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEW_NO_EM_G1_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_PAM2_EN_G1_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G1_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED398_t;
__xdata __at( 0x635c ) volatile AUTOSPEED398_t AUTOSPEED398;
#define reg_SLEWCTRL0_G1_LANE_1_0  AUTOSPEED398.BF.SLEWCTRL0_G1_LANE_1_0
#define reg_SLEW_NO_EM_G1_LANE  AUTOSPEED398.BF.SLEW_NO_EM_G1_LANE
#define reg_TX_PAM2_EN_G1_LANE  AUTOSPEED398.BF.TX_PAM2_EN_G1_LANE
#define reg_TX_HALFRATE_EN_G1_LANE  AUTOSPEED398.BF.TX_HALFRATE_EN_G1_LANE

// 0x0360	AUTOSPEED399		TBD
typedef union {
	struct {
		uint8_t ETHERNET_MODE_G1_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G1_LANE_1_0             : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t TX_TRAIN_PAT_MODE_G1_LANE                : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TRAIN_PAT_NUM_G1_LANE_7_0                : 8;	/*[31:24]     r/w 8'h88*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED399_t;
__xdata __at( 0x6360 ) volatile AUTOSPEED399_t AUTOSPEED399;
#define reg_ETHERNET_MODE_G1_LANE_1_0  AUTOSPEED399.BF.ETHERNET_MODE_G1_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G1_LANE_1_0  AUTOSPEED399.BF.TX_TRAIN_PAT_SEL_G1_LANE_1_0
#define reg_TX_TRAIN_PAT_MODE_G1_LANE  AUTOSPEED399.BF.TX_TRAIN_PAT_MODE_G1_LANE
#define reg_TRAIN_PAT_NUM_G1_LANE_7_0  AUTOSPEED399.BF.TRAIN_PAT_NUM_G1_LANE_7_0

// 0x0364	AUTOSPEED400		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G1_LANE_9_8                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G1_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_AMP_DEFAULT1_G1_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT1_G1_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED400_t;
__xdata __at( 0x6364 ) volatile AUTOSPEED400_t AUTOSPEED400;
#define reg_TRAIN_PAT_NUM_G1_LANE_9_8  AUTOSPEED400.BF.TRAIN_PAT_NUM_G1_LANE_9_8
#define reg_TX_TRAIN_PAT_TOGGLE_G1_LANE  AUTOSPEED400.BF.TX_TRAIN_PAT_TOGGLE_G1_LANE
#define reg_TX_AMP_DEFAULT1_G1_LANE_6_0  AUTOSPEED400.BF.TX_AMP_DEFAULT1_G1_LANE_6_0
#define reg_TX_EMPH0_DEFAULT1_G1_LANE_4_0  AUTOSPEED400.BF.TX_EMPH0_DEFAULT1_G1_LANE_4_0

// 0x0368	AUTOSPEED401		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT1_G1_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT1_G1_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT2_G1_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT2_G1_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED401_t;
__xdata __at( 0x6368 ) volatile AUTOSPEED401_t AUTOSPEED401;
#define reg_TX_EMPH1_DEFAULT1_G1_LANE_4_0  AUTOSPEED401.BF.TX_EMPH1_DEFAULT1_G1_LANE_4_0
#define reg_TX_EMPH2_DEFAULT1_G1_LANE_4_0  AUTOSPEED401.BF.TX_EMPH2_DEFAULT1_G1_LANE_4_0
#define reg_TX_AMP_DEFAULT2_G1_LANE_6_0  AUTOSPEED401.BF.TX_AMP_DEFAULT2_G1_LANE_6_0
#define reg_TX_EMPH0_DEFAULT2_G1_LANE_4_0  AUTOSPEED401.BF.TX_EMPH0_DEFAULT2_G1_LANE_4_0

// 0x036c	AUTOSPEED402		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT2_G1_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h1c*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT2_G1_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT3_G1_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT3_G1_LANE_4_0            : 5;	/*[28:24]     r/w 5'h1c*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED402_t;
__xdata __at( 0x636c ) volatile AUTOSPEED402_t AUTOSPEED402;
#define reg_TX_EMPH1_DEFAULT2_G1_LANE_4_0  AUTOSPEED402.BF.TX_EMPH1_DEFAULT2_G1_LANE_4_0
#define reg_TX_EMPH2_DEFAULT2_G1_LANE_4_0  AUTOSPEED402.BF.TX_EMPH2_DEFAULT2_G1_LANE_4_0
#define reg_TX_AMP_DEFAULT3_G1_LANE_6_0  AUTOSPEED402.BF.TX_AMP_DEFAULT3_G1_LANE_6_0
#define reg_TX_EMPH0_DEFAULT3_G1_LANE_4_0  AUTOSPEED402.BF.TX_EMPH0_DEFAULT3_G1_LANE_4_0

// 0x0370	AUTOSPEED403		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT3_G1_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT3_G1_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G1_LANE_3_0              : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_CK_SEL_G1_LANE                        : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED403_t;
__xdata __at( 0x6370 ) volatile AUTOSPEED403_t AUTOSPEED403;
#define reg_TX_EMPH1_DEFAULT3_G1_LANE_4_0  AUTOSPEED403.BF.TX_EMPH1_DEFAULT3_G1_LANE_4_0
#define reg_TX_EMPH2_DEFAULT3_G1_LANE_4_0  AUTOSPEED403.BF.TX_EMPH2_DEFAULT3_G1_LANE_4_0
#define reg_PLL_RATE_SEL_RX_G1_LANE_3_0  AUTOSPEED403.BF.PLL_RATE_SEL_RX_G1_LANE_3_0
#define reg_RX_CK_SEL_G1_LANE  AUTOSPEED403.BF.RX_CK_SEL_G1_LANE

// 0x0374	AUTOSPEED404		TBD
typedef union {
	struct {
		uint8_t RX_VDDCAL_RATE_EN_G1_LANE                : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_SPEED_DIV_G1_LANE_2_0                 : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G1_LANE_2_0              : 3;	/*[18:16]     r/w 3'h2*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t INTPI_G1_LANE_3_0                        : 4;	/*[27:24]     r/w 4'he*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED404_t;
__xdata __at( 0x6374 ) volatile AUTOSPEED404_t AUTOSPEED404;
#define reg_RX_VDDCAL_RATE_EN_G1_LANE  AUTOSPEED404.BF.RX_VDDCAL_RATE_EN_G1_LANE
#define reg_RX_SPEED_DIV_G1_LANE_2_0  AUTOSPEED404.BF.RX_SPEED_DIV_G1_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G1_LANE_2_0  AUTOSPEED404.BF.DTL_CLK_SPEEDUP_G1_LANE_2_0
#define reg_INTPI_G1_LANE_3_0  AUTOSPEED404.BF.INTPI_G1_LANE_3_0

// 0x0378	AUTOSPEED405		TBD
typedef union {
	struct {
		uint8_t INTPR_G1_LANE_1_0                        : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G1_LANE_1_0                 : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G1_LANE_1_0             : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_DATA_G1_LANE_2_0          : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED405_t;
__xdata __at( 0x6378 ) volatile AUTOSPEED405_t AUTOSPEED405;
#define reg_INTPR_G1_LANE_1_0  AUTOSPEED405.BF.INTPR_G1_LANE_1_0
#define reg_DLL_FREQ_SEL_G1_LANE_1_0  AUTOSPEED405.BF.DLL_FREQ_SEL_G1_LANE_1_0
#define reg_EOM_DLL_FREQ_SEL_G1_LANE_1_0  AUTOSPEED405.BF.EOM_DLL_FREQ_SEL_G1_LANE_1_0
#define reg_RXREG_SPEEDTRK_DATA_G1_LANE_2_0  AUTOSPEED405.BF.RXREG_SPEEDTRK_DATA_G1_LANE_2_0

// 0x037c	AUTOSPEED406		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_CLK_G1_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G1_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SELMUFI_G1_LANE_2_0                      : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t SELMUFF_G1_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED406_t;
__xdata __at( 0x637c ) volatile AUTOSPEED406_t AUTOSPEED406;
#define reg_RXREG_SPEEDTRK_CLK_G1_LANE_2_0  AUTOSPEED406.BF.RXREG_SPEEDTRK_CLK_G1_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G1_LANE  AUTOSPEED406.BF.RXREG_SPEEDTRK_CLK_HALF_G1_LANE
#define reg_SELMUFI_G1_LANE_2_0  AUTOSPEED406.BF.SELMUFI_G1_LANE_2_0
#define reg_SELMUFF_G1_LANE_2_0  AUTOSPEED406.BF.SELMUFF_G1_LANE_2_0

// 0x0380	AUTOSPEED407		TBD
typedef union {
	struct {
		uint8_t SELMUPI_G1_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t SELMUPF_G1_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_G1_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G1_LANE_7_0           : 8;	/*[31:24]     r/w 8'h4d*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED407_t;
__xdata __at( 0x6380 ) volatile AUTOSPEED407_t AUTOSPEED407;
#define reg_SELMUPI_G1_LANE_3_0  AUTOSPEED407.BF.SELMUPI_G1_LANE_3_0
#define reg_SELMUPF_G1_LANE_3_0  AUTOSPEED407.BF.SELMUPF_G1_LANE_3_0
#define reg_DTL_CLK_MODE_G1_LANE_1_0  AUTOSPEED407.BF.DTL_CLK_MODE_G1_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G1_LANE_7_0  AUTOSPEED407.BF.RX_FOFFSET_EXTRA_M_G1_LANE_7_0

// 0x0384	AUTOSPEED408		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G1_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h1a*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G1_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G1_LANE_12_8                : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t PU_SMPLR_D_P2_G1_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED408_t;
__xdata __at( 0x6384 ) volatile AUTOSPEED408_t AUTOSPEED408;
#define reg_RX_FOFFSET_EXTRA_M_G1_LANE_13_8  AUTOSPEED408.BF.RX_FOFFSET_EXTRA_M_G1_LANE_13_8
#define reg_INIT_RXFOFFS_G1_LANE_7_0  AUTOSPEED408.BF.INIT_RXFOFFS_G1_LANE_7_0
#define reg_INIT_RXFOFFS_G1_LANE_12_8  AUTOSPEED408.BF.INIT_RXFOFFS_G1_LANE_12_8
#define reg_PU_SMPLR_D_P2_G1_LANE_2_0  AUTOSPEED408.BF.PU_SMPLR_D_P2_G1_LANE_2_0

// 0x0388	AUTOSPEED409		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_S_P2_G1_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G1_LANE_2_0                : 3;	/* [10:8]     r/w 3'h2*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G1_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G1_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED409_t;
__xdata __at( 0x6388 ) volatile AUTOSPEED409_t AUTOSPEED409;
#define reg_PU_SMPLR_S_P2_G1_LANE_2_0  AUTOSPEED409.BF.PU_SMPLR_S_P2_G1_LANE_2_0
#define reg_PU_SMPLR_D_P4_G1_LANE_2_0  AUTOSPEED409.BF.PU_SMPLR_D_P4_G1_LANE_2_0
#define reg_PU_SMPLR_S_P4_G1_LANE_2_0  AUTOSPEED409.BF.PU_SMPLR_S_P4_G1_LANE_2_0
#define reg_PATH_DISABLE_EDGE_G1_LANE  AUTOSPEED409.BF.PATH_DISABLE_EDGE_G1_LANE

// 0x038c	AUTOSPEED410		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P1_G1_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G1_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P3_G1_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G1_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED410_t;
__xdata __at( 0x638c ) volatile AUTOSPEED410_t AUTOSPEED410;
#define reg_PU_SMPLR_D_P1_G1_LANE_2_0  AUTOSPEED410.BF.PU_SMPLR_D_P1_G1_LANE_2_0
#define reg_PU_SMPLR_S_P1_G1_LANE_2_0  AUTOSPEED410.BF.PU_SMPLR_S_P1_G1_LANE_2_0
#define reg_PU_SMPLR_D_P3_G1_LANE_2_0  AUTOSPEED410.BF.PU_SMPLR_D_P3_G1_LANE_2_0
#define reg_PU_SMPLR_S_P3_G1_LANE_2_0  AUTOSPEED410.BF.PU_SMPLR_S_P3_G1_LANE_2_0

// 0x0390	AUTOSPEED411		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G1_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G1_LANE                      : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G1_LANE_1_0     : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXDLL_TEMP_A_G1_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h25*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED411_t;
__xdata __at( 0x6390 ) volatile AUTOSPEED411_t AUTOSPEED411;
#define reg_REG_DFE_FULL_RATE_MODE_G1_LANE  AUTOSPEED411.BF.REG_DFE_FULL_RATE_MODE_G1_LANE
#define reg_REG_DFE_DIS_G1_LANE  AUTOSPEED411.BF.REG_DFE_DIS_G1_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G1_LANE_1_0  AUTOSPEED411.BF.REG_DFE_TAP_SETTLE_SCALE_G1_LANE_1_0
#define reg_RXDLL_TEMP_A_G1_LANE_7_0  AUTOSPEED411.BF.RXDLL_TEMP_A_G1_LANE_7_0

// 0x0394	AUTOSPEED412		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_B_G1_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'ha9*/
		uint8_t DFE_PAM2_MODE_G1_LANE                    : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_PAM2_EN_G1_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_HALFRATE_EN_G1_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED412_t;
__xdata __at( 0x6394 ) volatile AUTOSPEED412_t AUTOSPEED412;
#define reg_RXDLL_TEMP_B_G1_LANE_7_0  AUTOSPEED412.BF.RXDLL_TEMP_B_G1_LANE_7_0
#define reg_DFE_PAM2_MODE_G1_LANE  AUTOSPEED412.BF.DFE_PAM2_MODE_G1_LANE
#define reg_RX_PAM2_EN_G1_LANE  AUTOSPEED412.BF.RX_PAM2_EN_G1_LANE
#define reg_RX_HALFRATE_EN_G1_LANE  AUTOSPEED412.BF.RX_HALFRATE_EN_G1_LANE

// 0x0398	AUTOSPEED413		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED413_t;
__xdata __at( 0x6398 ) volatile AUTOSPEED413_t AUTOSPEED413;

// 0x039c	AUTOSPEED414		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED414_t;
__xdata __at( 0x639c ) volatile AUTOSPEED414_t AUTOSPEED414;

// 0x03a0	AUTOSPEED415		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED415_t;
__xdata __at( 0x63a0 ) volatile AUTOSPEED415_t AUTOSPEED415;

// 0x03a4	AUTOSPEED416		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G2_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G2_LANE                        : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G2_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEEDDIV_G2_LANE_2_0                  : 3;	/*[26:24]     r/w 3'h2*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED416_t;
__xdata __at( 0x63a4 ) volatile AUTOSPEED416_t AUTOSPEED416;
#define reg_PLL_RATE_SEL_TX_G2_LANE_3_0  AUTOSPEED416.BF.PLL_RATE_SEL_TX_G2_LANE_3_0
#define reg_TX_CK_SEL_G2_LANE  AUTOSPEED416.BF.TX_CK_SEL_G2_LANE
#define reg_TX_VDDCAL_RATE_EN_G2_LANE  AUTOSPEED416.BF.TX_VDDCAL_RATE_EN_G2_LANE
#define reg_TX_SPEEDDIV_G2_LANE_2_0  AUTOSPEED416.BF.TX_SPEEDDIV_G2_LANE_2_0

// 0x03a8	AUTOSPEED417		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_CLK_G2_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_DATA_G2_LANE_2_0          : 3;	/* [10:8]     r/w 3'h2*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t SLEWRATE_EN_G2_LANE                      : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SLEWCTRL1_G2_LANE_1_0                    : 2;	/*[25:24]     r/w 2'h1*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED417_t;
__xdata __at( 0x63a8 ) volatile AUTOSPEED417_t AUTOSPEED417;
#define reg_TXREG_SPEEDTRK_CLK_G2_LANE_2_0  AUTOSPEED417.BF.TXREG_SPEEDTRK_CLK_G2_LANE_2_0
#define reg_TXREG_SPEEDTRK_DATA_G2_LANE_2_0  AUTOSPEED417.BF.TXREG_SPEEDTRK_DATA_G2_LANE_2_0
#define reg_SLEWRATE_EN_G2_LANE  AUTOSPEED417.BF.SLEWRATE_EN_G2_LANE
#define reg_SLEWCTRL1_G2_LANE_1_0  AUTOSPEED417.BF.SLEWCTRL1_G2_LANE_1_0

// 0x03ac	AUTOSPEED418		TBD
typedef union {
	struct {
		uint8_t SLEWCTRL0_G2_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEW_NO_EM_G2_LANE                       : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_PAM2_EN_G2_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G2_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED418_t;
__xdata __at( 0x63ac ) volatile AUTOSPEED418_t AUTOSPEED418;
#define reg_SLEWCTRL0_G2_LANE_1_0  AUTOSPEED418.BF.SLEWCTRL0_G2_LANE_1_0
#define reg_SLEW_NO_EM_G2_LANE  AUTOSPEED418.BF.SLEW_NO_EM_G2_LANE
#define reg_TX_PAM2_EN_G2_LANE  AUTOSPEED418.BF.TX_PAM2_EN_G2_LANE
#define reg_TX_HALFRATE_EN_G2_LANE  AUTOSPEED418.BF.TX_HALFRATE_EN_G2_LANE

// 0x03b0	AUTOSPEED419		TBD
typedef union {
	struct {
		uint8_t ETHERNET_MODE_G2_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G2_LANE_1_0             : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t TX_TRAIN_PAT_MODE_G2_LANE                : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TRAIN_PAT_NUM_G2_LANE_7_0                : 8;	/*[31:24]     r/w 8'h88*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED419_t;
__xdata __at( 0x63b0 ) volatile AUTOSPEED419_t AUTOSPEED419;
#define reg_ETHERNET_MODE_G2_LANE_1_0  AUTOSPEED419.BF.ETHERNET_MODE_G2_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G2_LANE_1_0  AUTOSPEED419.BF.TX_TRAIN_PAT_SEL_G2_LANE_1_0
#define reg_TX_TRAIN_PAT_MODE_G2_LANE  AUTOSPEED419.BF.TX_TRAIN_PAT_MODE_G2_LANE
#define reg_TRAIN_PAT_NUM_G2_LANE_7_0  AUTOSPEED419.BF.TRAIN_PAT_NUM_G2_LANE_7_0

// 0x03b4	AUTOSPEED420		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G2_LANE_9_8                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G2_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_AMP_DEFAULT1_G2_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT1_G2_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED420_t;
__xdata __at( 0x63b4 ) volatile AUTOSPEED420_t AUTOSPEED420;
#define reg_TRAIN_PAT_NUM_G2_LANE_9_8  AUTOSPEED420.BF.TRAIN_PAT_NUM_G2_LANE_9_8
#define reg_TX_TRAIN_PAT_TOGGLE_G2_LANE  AUTOSPEED420.BF.TX_TRAIN_PAT_TOGGLE_G2_LANE
#define reg_TX_AMP_DEFAULT1_G2_LANE_6_0  AUTOSPEED420.BF.TX_AMP_DEFAULT1_G2_LANE_6_0
#define reg_TX_EMPH0_DEFAULT1_G2_LANE_4_0  AUTOSPEED420.BF.TX_EMPH0_DEFAULT1_G2_LANE_4_0

// 0x03b8	AUTOSPEED421		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT1_G2_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT1_G2_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT2_G2_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT2_G2_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED421_t;
__xdata __at( 0x63b8 ) volatile AUTOSPEED421_t AUTOSPEED421;
#define reg_TX_EMPH1_DEFAULT1_G2_LANE_4_0  AUTOSPEED421.BF.TX_EMPH1_DEFAULT1_G2_LANE_4_0
#define reg_TX_EMPH2_DEFAULT1_G2_LANE_4_0  AUTOSPEED421.BF.TX_EMPH2_DEFAULT1_G2_LANE_4_0
#define reg_TX_AMP_DEFAULT2_G2_LANE_6_0  AUTOSPEED421.BF.TX_AMP_DEFAULT2_G2_LANE_6_0
#define reg_TX_EMPH0_DEFAULT2_G2_LANE_4_0  AUTOSPEED421.BF.TX_EMPH0_DEFAULT2_G2_LANE_4_0

// 0x03bc	AUTOSPEED422		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT2_G2_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h1c*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT2_G2_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT3_G2_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT3_G2_LANE_4_0            : 5;	/*[28:24]     r/w 5'h1c*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED422_t;
__xdata __at( 0x63bc ) volatile AUTOSPEED422_t AUTOSPEED422;
#define reg_TX_EMPH1_DEFAULT2_G2_LANE_4_0  AUTOSPEED422.BF.TX_EMPH1_DEFAULT2_G2_LANE_4_0
#define reg_TX_EMPH2_DEFAULT2_G2_LANE_4_0  AUTOSPEED422.BF.TX_EMPH2_DEFAULT2_G2_LANE_4_0
#define reg_TX_AMP_DEFAULT3_G2_LANE_6_0  AUTOSPEED422.BF.TX_AMP_DEFAULT3_G2_LANE_6_0
#define reg_TX_EMPH0_DEFAULT3_G2_LANE_4_0  AUTOSPEED422.BF.TX_EMPH0_DEFAULT3_G2_LANE_4_0

// 0x03c0	AUTOSPEED423		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT3_G2_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT3_G2_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G2_LANE_3_0              : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_CK_SEL_G2_LANE                        : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED423_t;
__xdata __at( 0x63c0 ) volatile AUTOSPEED423_t AUTOSPEED423;
#define reg_TX_EMPH1_DEFAULT3_G2_LANE_4_0  AUTOSPEED423.BF.TX_EMPH1_DEFAULT3_G2_LANE_4_0
#define reg_TX_EMPH2_DEFAULT3_G2_LANE_4_0  AUTOSPEED423.BF.TX_EMPH2_DEFAULT3_G2_LANE_4_0
#define reg_PLL_RATE_SEL_RX_G2_LANE_3_0  AUTOSPEED423.BF.PLL_RATE_SEL_RX_G2_LANE_3_0
#define reg_RX_CK_SEL_G2_LANE  AUTOSPEED423.BF.RX_CK_SEL_G2_LANE

// 0x03c4	AUTOSPEED424		TBD
typedef union {
	struct {
		uint8_t RX_VDDCAL_RATE_EN_G2_LANE                : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_SPEED_DIV_G2_LANE_2_0                 : 3;	/* [10:8]     r/w 3'h5*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G2_LANE_2_0              : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t INTPI_G2_LANE_3_0                        : 4;	/*[27:24]     r/w 4'h9*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED424_t;
__xdata __at( 0x63c4 ) volatile AUTOSPEED424_t AUTOSPEED424;
#define reg_RX_VDDCAL_RATE_EN_G2_LANE  AUTOSPEED424.BF.RX_VDDCAL_RATE_EN_G2_LANE
#define reg_RX_SPEED_DIV_G2_LANE_2_0  AUTOSPEED424.BF.RX_SPEED_DIV_G2_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G2_LANE_2_0  AUTOSPEED424.BF.DTL_CLK_SPEEDUP_G2_LANE_2_0
#define reg_INTPI_G2_LANE_3_0  AUTOSPEED424.BF.INTPI_G2_LANE_3_0

// 0x03c8	AUTOSPEED425		TBD
typedef union {
	struct {
		uint8_t INTPR_G2_LANE_1_0                        : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G2_LANE_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G2_LANE_1_0             : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_DATA_G2_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED425_t;
__xdata __at( 0x63c8 ) volatile AUTOSPEED425_t AUTOSPEED425;
#define reg_INTPR_G2_LANE_1_0  AUTOSPEED425.BF.INTPR_G2_LANE_1_0
#define reg_DLL_FREQ_SEL_G2_LANE_1_0  AUTOSPEED425.BF.DLL_FREQ_SEL_G2_LANE_1_0
#define reg_EOM_DLL_FREQ_SEL_G2_LANE_1_0  AUTOSPEED425.BF.EOM_DLL_FREQ_SEL_G2_LANE_1_0
#define reg_RXREG_SPEEDTRK_DATA_G2_LANE_2_0  AUTOSPEED425.BF.RXREG_SPEEDTRK_DATA_G2_LANE_2_0

// 0x03cc	AUTOSPEED426		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_CLK_G2_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G2_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SELMUFI_G2_LANE_2_0                      : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t SELMUFF_G2_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED426_t;
__xdata __at( 0x63cc ) volatile AUTOSPEED426_t AUTOSPEED426;
#define reg_RXREG_SPEEDTRK_CLK_G2_LANE_2_0  AUTOSPEED426.BF.RXREG_SPEEDTRK_CLK_G2_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G2_LANE  AUTOSPEED426.BF.RXREG_SPEEDTRK_CLK_HALF_G2_LANE
#define reg_SELMUFI_G2_LANE_2_0  AUTOSPEED426.BF.SELMUFI_G2_LANE_2_0
#define reg_SELMUFF_G2_LANE_2_0  AUTOSPEED426.BF.SELMUFF_G2_LANE_2_0

// 0x03d0	AUTOSPEED427		TBD
typedef union {
	struct {
		uint8_t SELMUPI_G2_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t SELMUPF_G2_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_G2_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G2_LANE_7_0           : 8;	/*[31:24]     r/w 8'hb3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED427_t;
__xdata __at( 0x63d0 ) volatile AUTOSPEED427_t AUTOSPEED427;
#define reg_SELMUPI_G2_LANE_3_0  AUTOSPEED427.BF.SELMUPI_G2_LANE_3_0
#define reg_SELMUPF_G2_LANE_3_0  AUTOSPEED427.BF.SELMUPF_G2_LANE_3_0
#define reg_DTL_CLK_MODE_G2_LANE_1_0  AUTOSPEED427.BF.DTL_CLK_MODE_G2_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G2_LANE_7_0  AUTOSPEED427.BF.RX_FOFFSET_EXTRA_M_G2_LANE_7_0

// 0x03d4	AUTOSPEED428		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G2_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G2_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G2_LANE_12_8                : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t PU_SMPLR_D_P2_G2_LANE_2_0                : 3;	/*[26:24]     r/w 3'h2*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED428_t;
__xdata __at( 0x63d4 ) volatile AUTOSPEED428_t AUTOSPEED428;
#define reg_RX_FOFFSET_EXTRA_M_G2_LANE_13_8  AUTOSPEED428.BF.RX_FOFFSET_EXTRA_M_G2_LANE_13_8
#define reg_INIT_RXFOFFS_G2_LANE_7_0  AUTOSPEED428.BF.INIT_RXFOFFS_G2_LANE_7_0
#define reg_INIT_RXFOFFS_G2_LANE_12_8  AUTOSPEED428.BF.INIT_RXFOFFS_G2_LANE_12_8
#define reg_PU_SMPLR_D_P2_G2_LANE_2_0  AUTOSPEED428.BF.PU_SMPLR_D_P2_G2_LANE_2_0

// 0x03d8	AUTOSPEED429		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_S_P2_G2_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h2*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G2_LANE_2_0                : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G2_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G2_LANE                : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED429_t;
__xdata __at( 0x63d8 ) volatile AUTOSPEED429_t AUTOSPEED429;
#define reg_PU_SMPLR_S_P2_G2_LANE_2_0  AUTOSPEED429.BF.PU_SMPLR_S_P2_G2_LANE_2_0
#define reg_PU_SMPLR_D_P4_G2_LANE_2_0  AUTOSPEED429.BF.PU_SMPLR_D_P4_G2_LANE_2_0
#define reg_PU_SMPLR_S_P4_G2_LANE_2_0  AUTOSPEED429.BF.PU_SMPLR_S_P4_G2_LANE_2_0
#define reg_PATH_DISABLE_EDGE_G2_LANE  AUTOSPEED429.BF.PATH_DISABLE_EDGE_G2_LANE

// 0x03dc	AUTOSPEED430		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P1_G2_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G2_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P3_G2_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G2_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED430_t;
__xdata __at( 0x63dc ) volatile AUTOSPEED430_t AUTOSPEED430;
#define reg_PU_SMPLR_D_P1_G2_LANE_2_0  AUTOSPEED430.BF.PU_SMPLR_D_P1_G2_LANE_2_0
#define reg_PU_SMPLR_S_P1_G2_LANE_2_0  AUTOSPEED430.BF.PU_SMPLR_S_P1_G2_LANE_2_0
#define reg_PU_SMPLR_D_P3_G2_LANE_2_0  AUTOSPEED430.BF.PU_SMPLR_D_P3_G2_LANE_2_0
#define reg_PU_SMPLR_S_P3_G2_LANE_2_0  AUTOSPEED430.BF.PU_SMPLR_S_P3_G2_LANE_2_0

// 0x03e0	AUTOSPEED431		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G2_LANE           : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G2_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G2_LANE_1_0     : 2;	/*[17:16]     r/w 2'h3*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXDLL_TEMP_A_G2_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h25*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED431_t;
__xdata __at( 0x63e0 ) volatile AUTOSPEED431_t AUTOSPEED431;
#define reg_REG_DFE_FULL_RATE_MODE_G2_LANE  AUTOSPEED431.BF.REG_DFE_FULL_RATE_MODE_G2_LANE
#define reg_REG_DFE_DIS_G2_LANE  AUTOSPEED431.BF.REG_DFE_DIS_G2_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G2_LANE_1_0  AUTOSPEED431.BF.REG_DFE_TAP_SETTLE_SCALE_G2_LANE_1_0
#define reg_RXDLL_TEMP_A_G2_LANE_7_0  AUTOSPEED431.BF.RXDLL_TEMP_A_G2_LANE_7_0

// 0x03e4	AUTOSPEED432		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_B_G2_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G2_LANE                    : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_PAM2_EN_G2_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_HALFRATE_EN_G2_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED432_t;
__xdata __at( 0x63e4 ) volatile AUTOSPEED432_t AUTOSPEED432;
#define reg_RXDLL_TEMP_B_G2_LANE_7_0  AUTOSPEED432.BF.RXDLL_TEMP_B_G2_LANE_7_0
#define reg_DFE_PAM2_MODE_G2_LANE  AUTOSPEED432.BF.DFE_PAM2_MODE_G2_LANE
#define reg_RX_PAM2_EN_G2_LANE  AUTOSPEED432.BF.RX_PAM2_EN_G2_LANE
#define reg_RX_HALFRATE_EN_G2_LANE  AUTOSPEED432.BF.RX_HALFRATE_EN_G2_LANE

// 0x03e8	AUTOSPEED433		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED433_t;
__xdata __at( 0x63e8 ) volatile AUTOSPEED433_t AUTOSPEED433;

// 0x03ec	AUTOSPEED434		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED434_t;
__xdata __at( 0x63ec ) volatile AUTOSPEED434_t AUTOSPEED434;

// 0x03f0	AUTOSPEED435		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED435_t;
__xdata __at( 0x63f0 ) volatile AUTOSPEED435_t AUTOSPEED435;

// 0x03f4	AUTOSPEED436		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G3_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G3_LANE                        : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G3_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEEDDIV_G3_LANE_2_0                  : 3;	/*[26:24]     r/w 3'h1*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED436_t;
__xdata __at( 0x63f4 ) volatile AUTOSPEED436_t AUTOSPEED436;
#define reg_PLL_RATE_SEL_TX_G3_LANE_3_0  AUTOSPEED436.BF.PLL_RATE_SEL_TX_G3_LANE_3_0
#define reg_TX_CK_SEL_G3_LANE  AUTOSPEED436.BF.TX_CK_SEL_G3_LANE
#define reg_TX_VDDCAL_RATE_EN_G3_LANE  AUTOSPEED436.BF.TX_VDDCAL_RATE_EN_G3_LANE
#define reg_TX_SPEEDDIV_G3_LANE_2_0  AUTOSPEED436.BF.TX_SPEEDDIV_G3_LANE_2_0

// 0x03f8	AUTOSPEED437		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_CLK_G3_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_DATA_G3_LANE_2_0          : 3;	/* [10:8]     r/w 3'h3*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t SLEWRATE_EN_G3_LANE                      : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SLEWCTRL1_G3_LANE_1_0                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED437_t;
__xdata __at( 0x63f8 ) volatile AUTOSPEED437_t AUTOSPEED437;
#define reg_TXREG_SPEEDTRK_CLK_G3_LANE_2_0  AUTOSPEED437.BF.TXREG_SPEEDTRK_CLK_G3_LANE_2_0
#define reg_TXREG_SPEEDTRK_DATA_G3_LANE_2_0  AUTOSPEED437.BF.TXREG_SPEEDTRK_DATA_G3_LANE_2_0
#define reg_SLEWRATE_EN_G3_LANE  AUTOSPEED437.BF.SLEWRATE_EN_G3_LANE
#define reg_SLEWCTRL1_G3_LANE_1_0  AUTOSPEED437.BF.SLEWCTRL1_G3_LANE_1_0

// 0x03fc	AUTOSPEED438		TBD
typedef union {
	struct {
		uint8_t SLEWCTRL0_G3_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEW_NO_EM_G3_LANE                       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_PAM2_EN_G3_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G3_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED438_t;
__xdata __at( 0x63fc ) volatile AUTOSPEED438_t AUTOSPEED438;
#define reg_SLEWCTRL0_G3_LANE_1_0  AUTOSPEED438.BF.SLEWCTRL0_G3_LANE_1_0
#define reg_SLEW_NO_EM_G3_LANE  AUTOSPEED438.BF.SLEW_NO_EM_G3_LANE
#define reg_TX_PAM2_EN_G3_LANE  AUTOSPEED438.BF.TX_PAM2_EN_G3_LANE
#define reg_TX_HALFRATE_EN_G3_LANE  AUTOSPEED438.BF.TX_HALFRATE_EN_G3_LANE

// 0x0400	AUTOSPEED439		TBD
typedef union {
	struct {
		uint8_t ETHERNET_MODE_G3_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G3_LANE_1_0             : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t TX_TRAIN_PAT_MODE_G3_LANE                : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TRAIN_PAT_NUM_G3_LANE_7_0                : 8;	/*[31:24]     r/w 8'h88*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED439_t;
__xdata __at( 0x6400 ) volatile AUTOSPEED439_t AUTOSPEED439;
#define reg_ETHERNET_MODE_G3_LANE_1_0  AUTOSPEED439.BF.ETHERNET_MODE_G3_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G3_LANE_1_0  AUTOSPEED439.BF.TX_TRAIN_PAT_SEL_G3_LANE_1_0
#define reg_TX_TRAIN_PAT_MODE_G3_LANE  AUTOSPEED439.BF.TX_TRAIN_PAT_MODE_G3_LANE
#define reg_TRAIN_PAT_NUM_G3_LANE_7_0  AUTOSPEED439.BF.TRAIN_PAT_NUM_G3_LANE_7_0

// 0x0404	AUTOSPEED440		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G3_LANE_9_8                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G3_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_AMP_DEFAULT1_G3_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT1_G3_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED440_t;
__xdata __at( 0x6404 ) volatile AUTOSPEED440_t AUTOSPEED440;
#define reg_TRAIN_PAT_NUM_G3_LANE_9_8  AUTOSPEED440.BF.TRAIN_PAT_NUM_G3_LANE_9_8
#define reg_TX_TRAIN_PAT_TOGGLE_G3_LANE  AUTOSPEED440.BF.TX_TRAIN_PAT_TOGGLE_G3_LANE
#define reg_TX_AMP_DEFAULT1_G3_LANE_6_0  AUTOSPEED440.BF.TX_AMP_DEFAULT1_G3_LANE_6_0
#define reg_TX_EMPH0_DEFAULT1_G3_LANE_4_0  AUTOSPEED440.BF.TX_EMPH0_DEFAULT1_G3_LANE_4_0

// 0x0408	AUTOSPEED441		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT1_G3_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT1_G3_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT2_G3_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT2_G3_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED441_t;
__xdata __at( 0x6408 ) volatile AUTOSPEED441_t AUTOSPEED441;
#define reg_TX_EMPH1_DEFAULT1_G3_LANE_4_0  AUTOSPEED441.BF.TX_EMPH1_DEFAULT1_G3_LANE_4_0
#define reg_TX_EMPH2_DEFAULT1_G3_LANE_4_0  AUTOSPEED441.BF.TX_EMPH2_DEFAULT1_G3_LANE_4_0
#define reg_TX_AMP_DEFAULT2_G3_LANE_6_0  AUTOSPEED441.BF.TX_AMP_DEFAULT2_G3_LANE_6_0
#define reg_TX_EMPH0_DEFAULT2_G3_LANE_4_0  AUTOSPEED441.BF.TX_EMPH0_DEFAULT2_G3_LANE_4_0

// 0x040c	AUTOSPEED442		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT2_G3_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h1c*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT2_G3_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT3_G3_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT3_G3_LANE_4_0            : 5;	/*[28:24]     r/w 5'h1c*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED442_t;
__xdata __at( 0x640c ) volatile AUTOSPEED442_t AUTOSPEED442;
#define reg_TX_EMPH1_DEFAULT2_G3_LANE_4_0  AUTOSPEED442.BF.TX_EMPH1_DEFAULT2_G3_LANE_4_0
#define reg_TX_EMPH2_DEFAULT2_G3_LANE_4_0  AUTOSPEED442.BF.TX_EMPH2_DEFAULT2_G3_LANE_4_0
#define reg_TX_AMP_DEFAULT3_G3_LANE_6_0  AUTOSPEED442.BF.TX_AMP_DEFAULT3_G3_LANE_6_0
#define reg_TX_EMPH0_DEFAULT3_G3_LANE_4_0  AUTOSPEED442.BF.TX_EMPH0_DEFAULT3_G3_LANE_4_0

// 0x0410	AUTOSPEED443		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT3_G3_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT3_G3_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G3_LANE_3_0              : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_CK_SEL_G3_LANE                        : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED443_t;
__xdata __at( 0x6410 ) volatile AUTOSPEED443_t AUTOSPEED443;
#define reg_TX_EMPH1_DEFAULT3_G3_LANE_4_0  AUTOSPEED443.BF.TX_EMPH1_DEFAULT3_G3_LANE_4_0
#define reg_TX_EMPH2_DEFAULT3_G3_LANE_4_0  AUTOSPEED443.BF.TX_EMPH2_DEFAULT3_G3_LANE_4_0
#define reg_PLL_RATE_SEL_RX_G3_LANE_3_0  AUTOSPEED443.BF.PLL_RATE_SEL_RX_G3_LANE_3_0
#define reg_RX_CK_SEL_G3_LANE  AUTOSPEED443.BF.RX_CK_SEL_G3_LANE

// 0x0414	AUTOSPEED444		TBD
typedef union {
	struct {
		uint8_t RX_VDDCAL_RATE_EN_G3_LANE                : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_SPEED_DIV_G3_LANE_2_0                 : 3;	/* [10:8]     r/w 3'h4*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G3_LANE_2_0              : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t INTPI_G3_LANE_3_0                        : 4;	/*[27:24]     r/w 4'h9*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED444_t;
__xdata __at( 0x6414 ) volatile AUTOSPEED444_t AUTOSPEED444;
#define reg_RX_VDDCAL_RATE_EN_G3_LANE  AUTOSPEED444.BF.RX_VDDCAL_RATE_EN_G3_LANE
#define reg_RX_SPEED_DIV_G3_LANE_2_0  AUTOSPEED444.BF.RX_SPEED_DIV_G3_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G3_LANE_2_0  AUTOSPEED444.BF.DTL_CLK_SPEEDUP_G3_LANE_2_0
#define reg_INTPI_G3_LANE_3_0  AUTOSPEED444.BF.INTPI_G3_LANE_3_0

// 0x0418	AUTOSPEED445		TBD
typedef union {
	struct {
		uint8_t INTPR_G3_LANE_1_0                        : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G3_LANE_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G3_LANE_1_0             : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_DATA_G3_LANE_2_0          : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED445_t;
__xdata __at( 0x6418 ) volatile AUTOSPEED445_t AUTOSPEED445;
#define reg_INTPR_G3_LANE_1_0  AUTOSPEED445.BF.INTPR_G3_LANE_1_0
#define reg_DLL_FREQ_SEL_G3_LANE_1_0  AUTOSPEED445.BF.DLL_FREQ_SEL_G3_LANE_1_0
#define reg_EOM_DLL_FREQ_SEL_G3_LANE_1_0  AUTOSPEED445.BF.EOM_DLL_FREQ_SEL_G3_LANE_1_0
#define reg_RXREG_SPEEDTRK_DATA_G3_LANE_2_0  AUTOSPEED445.BF.RXREG_SPEEDTRK_DATA_G3_LANE_2_0

// 0x041c	AUTOSPEED446		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_CLK_G3_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G3_LANE          : 1;	/*      8     r/w 1'h1*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SELMUFI_G3_LANE_2_0                      : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t SELMUFF_G3_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED446_t;
__xdata __at( 0x641c ) volatile AUTOSPEED446_t AUTOSPEED446;
#define reg_RXREG_SPEEDTRK_CLK_G3_LANE_2_0  AUTOSPEED446.BF.RXREG_SPEEDTRK_CLK_G3_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G3_LANE  AUTOSPEED446.BF.RXREG_SPEEDTRK_CLK_HALF_G3_LANE
#define reg_SELMUFI_G3_LANE_2_0  AUTOSPEED446.BF.SELMUFI_G3_LANE_2_0
#define reg_SELMUFF_G3_LANE_2_0  AUTOSPEED446.BF.SELMUFF_G3_LANE_2_0

// 0x0420	AUTOSPEED447		TBD
typedef union {
	struct {
		uint8_t SELMUPI_G3_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t SELMUPF_G3_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_G3_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G3_LANE_7_0           : 8;	/*[31:24]     r/w 8'hb3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED447_t;
__xdata __at( 0x6420 ) volatile AUTOSPEED447_t AUTOSPEED447;
#define reg_SELMUPI_G3_LANE_3_0  AUTOSPEED447.BF.SELMUPI_G3_LANE_3_0
#define reg_SELMUPF_G3_LANE_3_0  AUTOSPEED447.BF.SELMUPF_G3_LANE_3_0
#define reg_DTL_CLK_MODE_G3_LANE_1_0  AUTOSPEED447.BF.DTL_CLK_MODE_G3_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G3_LANE_7_0  AUTOSPEED447.BF.RX_FOFFSET_EXTRA_M_G3_LANE_7_0

// 0x0424	AUTOSPEED448		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G3_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G3_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G3_LANE_12_8                : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t PU_SMPLR_D_P2_G3_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED448_t;
__xdata __at( 0x6424 ) volatile AUTOSPEED448_t AUTOSPEED448;
#define reg_RX_FOFFSET_EXTRA_M_G3_LANE_13_8  AUTOSPEED448.BF.RX_FOFFSET_EXTRA_M_G3_LANE_13_8
#define reg_INIT_RXFOFFS_G3_LANE_7_0  AUTOSPEED448.BF.INIT_RXFOFFS_G3_LANE_7_0
#define reg_INIT_RXFOFFS_G3_LANE_12_8  AUTOSPEED448.BF.INIT_RXFOFFS_G3_LANE_12_8
#define reg_PU_SMPLR_D_P2_G3_LANE_2_0  AUTOSPEED448.BF.PU_SMPLR_D_P2_G3_LANE_2_0

// 0x0428	AUTOSPEED449		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_S_P2_G3_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G3_LANE_2_0                : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G3_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G3_LANE                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED449_t;
__xdata __at( 0x6428 ) volatile AUTOSPEED449_t AUTOSPEED449;
#define reg_PU_SMPLR_S_P2_G3_LANE_2_0  AUTOSPEED449.BF.PU_SMPLR_S_P2_G3_LANE_2_0
#define reg_PU_SMPLR_D_P4_G3_LANE_2_0  AUTOSPEED449.BF.PU_SMPLR_D_P4_G3_LANE_2_0
#define reg_PU_SMPLR_S_P4_G3_LANE_2_0  AUTOSPEED449.BF.PU_SMPLR_S_P4_G3_LANE_2_0
#define reg_PATH_DISABLE_EDGE_G3_LANE  AUTOSPEED449.BF.PATH_DISABLE_EDGE_G3_LANE

// 0x042c	AUTOSPEED450		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P1_G3_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G3_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P3_G3_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G3_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED450_t;
__xdata __at( 0x642c ) volatile AUTOSPEED450_t AUTOSPEED450;
#define reg_PU_SMPLR_D_P1_G3_LANE_2_0  AUTOSPEED450.BF.PU_SMPLR_D_P1_G3_LANE_2_0
#define reg_PU_SMPLR_S_P1_G3_LANE_2_0  AUTOSPEED450.BF.PU_SMPLR_S_P1_G3_LANE_2_0
#define reg_PU_SMPLR_D_P3_G3_LANE_2_0  AUTOSPEED450.BF.PU_SMPLR_D_P3_G3_LANE_2_0
#define reg_PU_SMPLR_S_P3_G3_LANE_2_0  AUTOSPEED450.BF.PU_SMPLR_S_P3_G3_LANE_2_0

// 0x0430	AUTOSPEED451		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G3_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G3_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G3_LANE_1_0     : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXDLL_TEMP_A_G3_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h25*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED451_t;
__xdata __at( 0x6430 ) volatile AUTOSPEED451_t AUTOSPEED451;
#define reg_REG_DFE_FULL_RATE_MODE_G3_LANE  AUTOSPEED451.BF.REG_DFE_FULL_RATE_MODE_G3_LANE
#define reg_REG_DFE_DIS_G3_LANE  AUTOSPEED451.BF.REG_DFE_DIS_G3_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G3_LANE_1_0  AUTOSPEED451.BF.REG_DFE_TAP_SETTLE_SCALE_G3_LANE_1_0
#define reg_RXDLL_TEMP_A_G3_LANE_7_0  AUTOSPEED451.BF.RXDLL_TEMP_A_G3_LANE_7_0

// 0x0434	AUTOSPEED452		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_B_G3_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G3_LANE                    : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_PAM2_EN_G3_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_HALFRATE_EN_G3_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED452_t;
__xdata __at( 0x6434 ) volatile AUTOSPEED452_t AUTOSPEED452;
#define reg_RXDLL_TEMP_B_G3_LANE_7_0  AUTOSPEED452.BF.RXDLL_TEMP_B_G3_LANE_7_0
#define reg_DFE_PAM2_MODE_G3_LANE  AUTOSPEED452.BF.DFE_PAM2_MODE_G3_LANE
#define reg_RX_PAM2_EN_G3_LANE  AUTOSPEED452.BF.RX_PAM2_EN_G3_LANE
#define reg_RX_HALFRATE_EN_G3_LANE  AUTOSPEED452.BF.RX_HALFRATE_EN_G3_LANE

// 0x0438	AUTOSPEED453		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED453_t;
__xdata __at( 0x6438 ) volatile AUTOSPEED453_t AUTOSPEED453;

// 0x043c	AUTOSPEED454		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED454_t;
__xdata __at( 0x643c ) volatile AUTOSPEED454_t AUTOSPEED454;

// 0x0440	AUTOSPEED455		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED455_t;
__xdata __at( 0x6440 ) volatile AUTOSPEED455_t AUTOSPEED455;

// 0x0444	AUTOSPEED456		TBD
typedef union {
	struct {
		uint8_t PLL_RATE_SEL_TX_G4_LANE_3_0              : 4;	/*  [3:0]     r/w 4'h1*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t TX_CK_SEL_G4_LANE                        : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_VDDCAL_RATE_EN_G4_LANE                : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_SPEEDDIV_G4_LANE_2_0                  : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED456_t;
__xdata __at( 0x6444 ) volatile AUTOSPEED456_t AUTOSPEED456;
#define reg_PLL_RATE_SEL_TX_G4_LANE_3_0  AUTOSPEED456.BF.PLL_RATE_SEL_TX_G4_LANE_3_0
#define reg_TX_CK_SEL_G4_LANE  AUTOSPEED456.BF.TX_CK_SEL_G4_LANE
#define reg_TX_VDDCAL_RATE_EN_G4_LANE  AUTOSPEED456.BF.TX_VDDCAL_RATE_EN_G4_LANE
#define reg_TX_SPEEDDIV_G4_LANE_2_0  AUTOSPEED456.BF.TX_SPEEDDIV_G4_LANE_2_0

// 0x0448	AUTOSPEED457		TBD
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_CLK_G4_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t TXREG_SPEEDTRK_DATA_G4_LANE_2_0          : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t SLEWRATE_EN_G4_LANE                      : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t SLEWCTRL1_G4_LANE_1_0                    : 2;	/*[25:24]     r/w 2'h0*/
		uint8_t RESERVED_26                              : 6;	/*[31:26]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED457_t;
__xdata __at( 0x6448 ) volatile AUTOSPEED457_t AUTOSPEED457;
#define reg_TXREG_SPEEDTRK_CLK_G4_LANE_2_0  AUTOSPEED457.BF.TXREG_SPEEDTRK_CLK_G4_LANE_2_0
#define reg_TXREG_SPEEDTRK_DATA_G4_LANE_2_0  AUTOSPEED457.BF.TXREG_SPEEDTRK_DATA_G4_LANE_2_0
#define reg_SLEWRATE_EN_G4_LANE  AUTOSPEED457.BF.SLEWRATE_EN_G4_LANE
#define reg_SLEWCTRL1_G4_LANE_1_0  AUTOSPEED457.BF.SLEWCTRL1_G4_LANE_1_0

// 0x044c	AUTOSPEED458		TBD
typedef union {
	struct {
		uint8_t SLEWCTRL0_G4_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t SLEW_NO_EM_G4_LANE                       : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_PAM2_EN_G4_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TX_HALFRATE_EN_G4_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED458_t;
__xdata __at( 0x644c ) volatile AUTOSPEED458_t AUTOSPEED458;
#define reg_SLEWCTRL0_G4_LANE_1_0  AUTOSPEED458.BF.SLEWCTRL0_G4_LANE_1_0
#define reg_SLEW_NO_EM_G4_LANE  AUTOSPEED458.BF.SLEW_NO_EM_G4_LANE
#define reg_TX_PAM2_EN_G4_LANE  AUTOSPEED458.BF.TX_PAM2_EN_G4_LANE
#define reg_TX_HALFRATE_EN_G4_LANE  AUTOSPEED458.BF.TX_HALFRATE_EN_G4_LANE

// 0x0450	AUTOSPEED459		TBD
typedef union {
	struct {
		uint8_t ETHERNET_MODE_G4_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_SEL_G4_LANE_1_0             : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t TX_TRAIN_PAT_MODE_G4_LANE                : 1;	/*     16     r/w 1'h0*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t TRAIN_PAT_NUM_G4_LANE_7_0                : 8;	/*[31:24]     r/w 8'h88*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED459_t;
__xdata __at( 0x6450 ) volatile AUTOSPEED459_t AUTOSPEED459;
#define reg_ETHERNET_MODE_G4_LANE_1_0  AUTOSPEED459.BF.ETHERNET_MODE_G4_LANE_1_0
#define reg_TX_TRAIN_PAT_SEL_G4_LANE_1_0  AUTOSPEED459.BF.TX_TRAIN_PAT_SEL_G4_LANE_1_0
#define reg_TX_TRAIN_PAT_MODE_G4_LANE  AUTOSPEED459.BF.TX_TRAIN_PAT_MODE_G4_LANE
#define reg_TRAIN_PAT_NUM_G4_LANE_7_0  AUTOSPEED459.BF.TRAIN_PAT_NUM_G4_LANE_7_0

// 0x0454	AUTOSPEED460		TBD
typedef union {
	struct {
		uint8_t TRAIN_PAT_NUM_G4_LANE_9_8                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t TX_TRAIN_PAT_TOGGLE_G4_LANE              : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t TX_AMP_DEFAULT1_G4_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT1_G4_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED460_t;
__xdata __at( 0x6454 ) volatile AUTOSPEED460_t AUTOSPEED460;
#define reg_TRAIN_PAT_NUM_G4_LANE_9_8  AUTOSPEED460.BF.TRAIN_PAT_NUM_G4_LANE_9_8
#define reg_TX_TRAIN_PAT_TOGGLE_G4_LANE  AUTOSPEED460.BF.TX_TRAIN_PAT_TOGGLE_G4_LANE
#define reg_TX_AMP_DEFAULT1_G4_LANE_6_0  AUTOSPEED460.BF.TX_AMP_DEFAULT1_G4_LANE_6_0
#define reg_TX_EMPH0_DEFAULT1_G4_LANE_4_0  AUTOSPEED460.BF.TX_EMPH0_DEFAULT1_G4_LANE_4_0

// 0x0458	AUTOSPEED461		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT1_G4_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT1_G4_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT2_G4_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT2_G4_LANE_4_0            : 5;	/*[28:24]     r/w 5'h0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED461_t;
__xdata __at( 0x6458 ) volatile AUTOSPEED461_t AUTOSPEED461;
#define reg_TX_EMPH1_DEFAULT1_G4_LANE_4_0  AUTOSPEED461.BF.TX_EMPH1_DEFAULT1_G4_LANE_4_0
#define reg_TX_EMPH2_DEFAULT1_G4_LANE_4_0  AUTOSPEED461.BF.TX_EMPH2_DEFAULT1_G4_LANE_4_0
#define reg_TX_AMP_DEFAULT2_G4_LANE_6_0  AUTOSPEED461.BF.TX_AMP_DEFAULT2_G4_LANE_6_0
#define reg_TX_EMPH0_DEFAULT2_G4_LANE_4_0  AUTOSPEED461.BF.TX_EMPH0_DEFAULT2_G4_LANE_4_0

// 0x045c	AUTOSPEED462		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT2_G4_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h1c*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT2_G4_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t TX_AMP_DEFAULT3_G4_LANE_6_0              : 7;	/*[22:16]     r/w 7'h0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t TX_EMPH0_DEFAULT3_G4_LANE_4_0            : 5;	/*[28:24]     r/w 5'h1c*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED462_t;
__xdata __at( 0x645c ) volatile AUTOSPEED462_t AUTOSPEED462;
#define reg_TX_EMPH1_DEFAULT2_G4_LANE_4_0  AUTOSPEED462.BF.TX_EMPH1_DEFAULT2_G4_LANE_4_0
#define reg_TX_EMPH2_DEFAULT2_G4_LANE_4_0  AUTOSPEED462.BF.TX_EMPH2_DEFAULT2_G4_LANE_4_0
#define reg_TX_AMP_DEFAULT3_G4_LANE_6_0  AUTOSPEED462.BF.TX_AMP_DEFAULT3_G4_LANE_6_0
#define reg_TX_EMPH0_DEFAULT3_G4_LANE_4_0  AUTOSPEED462.BF.TX_EMPH0_DEFAULT3_G4_LANE_4_0

// 0x0460	AUTOSPEED463		TBD
typedef union {
	struct {
		uint8_t TX_EMPH1_DEFAULT3_G4_LANE_4_0            : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t TX_EMPH2_DEFAULT3_G4_LANE_4_0            : 5;	/* [12:8]     r/w 5'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t PLL_RATE_SEL_RX_G4_LANE_3_0              : 4;	/*[19:16]     r/w 4'h1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_CK_SEL_G4_LANE                        : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED463_t;
__xdata __at( 0x6460 ) volatile AUTOSPEED463_t AUTOSPEED463;
#define reg_TX_EMPH1_DEFAULT3_G4_LANE_4_0  AUTOSPEED463.BF.TX_EMPH1_DEFAULT3_G4_LANE_4_0
#define reg_TX_EMPH2_DEFAULT3_G4_LANE_4_0  AUTOSPEED463.BF.TX_EMPH2_DEFAULT3_G4_LANE_4_0
#define reg_PLL_RATE_SEL_RX_G4_LANE_3_0  AUTOSPEED463.BF.PLL_RATE_SEL_RX_G4_LANE_3_0
#define reg_RX_CK_SEL_G4_LANE  AUTOSPEED463.BF.RX_CK_SEL_G4_LANE

// 0x0464	AUTOSPEED464		TBD
typedef union {
	struct {
		uint8_t RX_VDDCAL_RATE_EN_G4_LANE                : 1;	/*      0     r/w 1'h1*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t RX_SPEED_DIV_G4_LANE_2_0                 : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t DTL_CLK_SPEEDUP_G4_LANE_2_0              : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t INTPI_G4_LANE_3_0                        : 4;	/*[27:24]     r/w 4'h9*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED464_t;
__xdata __at( 0x6464 ) volatile AUTOSPEED464_t AUTOSPEED464;
#define reg_RX_VDDCAL_RATE_EN_G4_LANE  AUTOSPEED464.BF.RX_VDDCAL_RATE_EN_G4_LANE
#define reg_RX_SPEED_DIV_G4_LANE_2_0  AUTOSPEED464.BF.RX_SPEED_DIV_G4_LANE_2_0
#define reg_DTL_CLK_SPEEDUP_G4_LANE_2_0  AUTOSPEED464.BF.DTL_CLK_SPEEDUP_G4_LANE_2_0
#define reg_INTPI_G4_LANE_3_0  AUTOSPEED464.BF.INTPI_G4_LANE_3_0

// 0x0468	AUTOSPEED465		TBD
typedef union {
	struct {
		uint8_t INTPR_G4_LANE_1_0                        : 2;	/*  [1:0]     r/w 2'h1*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
		uint8_t DLL_FREQ_SEL_G4_LANE_1_0                 : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t EOM_DLL_FREQ_SEL_G4_LANE_1_0             : 2;	/*[17:16]     r/w 2'h0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_DATA_G4_LANE_2_0          : 3;	/*[26:24]     r/w 3'h3*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED465_t;
__xdata __at( 0x6468 ) volatile AUTOSPEED465_t AUTOSPEED465;
#define reg_INTPR_G4_LANE_1_0  AUTOSPEED465.BF.INTPR_G4_LANE_1_0
#define reg_DLL_FREQ_SEL_G4_LANE_1_0  AUTOSPEED465.BF.DLL_FREQ_SEL_G4_LANE_1_0
#define reg_EOM_DLL_FREQ_SEL_G4_LANE_1_0  AUTOSPEED465.BF.EOM_DLL_FREQ_SEL_G4_LANE_1_0
#define reg_RXREG_SPEEDTRK_DATA_G4_LANE_2_0  AUTOSPEED465.BF.RXREG_SPEEDTRK_DATA_G4_LANE_2_0

// 0x046c	AUTOSPEED466		TBD
typedef union {
	struct {
		uint8_t RXREG_SPEEDTRK_CLK_G4_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t RXREG_SPEEDTRK_CLK_HALF_G4_LANE          : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t SELMUFI_G4_LANE_2_0                      : 3;	/*[18:16]     r/w 3'h4*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t SELMUFF_G4_LANE_2_0                      : 3;	/*[26:24]     r/w 3'h5*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED466_t;
__xdata __at( 0x646c ) volatile AUTOSPEED466_t AUTOSPEED466;
#define reg_RXREG_SPEEDTRK_CLK_G4_LANE_2_0  AUTOSPEED466.BF.RXREG_SPEEDTRK_CLK_G4_LANE_2_0
#define reg_RXREG_SPEEDTRK_CLK_HALF_G4_LANE  AUTOSPEED466.BF.RXREG_SPEEDTRK_CLK_HALF_G4_LANE
#define reg_SELMUFI_G4_LANE_2_0  AUTOSPEED466.BF.SELMUFI_G4_LANE_2_0
#define reg_SELMUFF_G4_LANE_2_0  AUTOSPEED466.BF.SELMUFF_G4_LANE_2_0

// 0x0470	AUTOSPEED467		TBD
typedef union {
	struct {
		uint8_t SELMUPI_G4_LANE_3_0                      : 4;	/*  [3:0]     r/w 4'h3*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
		uint8_t SELMUPF_G4_LANE_3_0                      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w   0*/
		uint8_t DTL_CLK_MODE_G4_LANE_1_0                 : 2;	/*[17:16]     r/w 2'h2*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RX_FOFFSET_EXTRA_M_G4_LANE_7_0           : 8;	/*[31:24]     r/w 8'hb3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED467_t;
__xdata __at( 0x6470 ) volatile AUTOSPEED467_t AUTOSPEED467;
#define reg_SELMUPI_G4_LANE_3_0  AUTOSPEED467.BF.SELMUPI_G4_LANE_3_0
#define reg_SELMUPF_G4_LANE_3_0  AUTOSPEED467.BF.SELMUPF_G4_LANE_3_0
#define reg_DTL_CLK_MODE_G4_LANE_1_0  AUTOSPEED467.BF.DTL_CLK_MODE_G4_LANE_1_0
#define reg_RX_FOFFSET_EXTRA_M_G4_LANE_7_0  AUTOSPEED467.BF.RX_FOFFSET_EXTRA_M_G4_LANE_7_0

// 0x0474	AUTOSPEED468		TBD
typedef union {
	struct {
		uint8_t RX_FOFFSET_EXTRA_M_G4_LANE_13_8          : 6;	/*  [5:0]     r/w 6'h15*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t INIT_RXFOFFS_G4_LANE_7_0                 : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t INIT_RXFOFFS_G4_LANE_12_8                : 5;	/*[20:16]     r/w 5'h0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t PU_SMPLR_D_P2_G4_LANE_2_0                : 3;	/*[26:24]     r/w 3'h7*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED468_t;
__xdata __at( 0x6474 ) volatile AUTOSPEED468_t AUTOSPEED468;
#define reg_RX_FOFFSET_EXTRA_M_G4_LANE_13_8  AUTOSPEED468.BF.RX_FOFFSET_EXTRA_M_G4_LANE_13_8
#define reg_INIT_RXFOFFS_G4_LANE_7_0  AUTOSPEED468.BF.INIT_RXFOFFS_G4_LANE_7_0
#define reg_INIT_RXFOFFS_G4_LANE_12_8  AUTOSPEED468.BF.INIT_RXFOFFS_G4_LANE_12_8
#define reg_PU_SMPLR_D_P2_G4_LANE_2_0  AUTOSPEED468.BF.PU_SMPLR_D_P2_G4_LANE_2_0

// 0x0478	AUTOSPEED469		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_S_P2_G4_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_D_P4_G4_LANE_2_0                : 3;	/* [10:8]     r/w 3'h7*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_S_P4_G4_LANE_2_0                : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_G4_LANE                : 1;	/*     24     r/w 1'h0*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED469_t;
__xdata __at( 0x6478 ) volatile AUTOSPEED469_t AUTOSPEED469;
#define reg_PU_SMPLR_S_P2_G4_LANE_2_0  AUTOSPEED469.BF.PU_SMPLR_S_P2_G4_LANE_2_0
#define reg_PU_SMPLR_D_P4_G4_LANE_2_0  AUTOSPEED469.BF.PU_SMPLR_D_P4_G4_LANE_2_0
#define reg_PU_SMPLR_S_P4_G4_LANE_2_0  AUTOSPEED469.BF.PU_SMPLR_S_P4_G4_LANE_2_0
#define reg_PATH_DISABLE_EDGE_G4_LANE  AUTOSPEED469.BF.PATH_DISABLE_EDGE_G4_LANE

// 0x047c	AUTOSPEED470		TBD
typedef union {
	struct {
		uint8_t PU_SMPLR_D_P1_G4_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t PU_SMPLR_S_P1_G4_LANE_2_0                : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t PU_SMPLR_D_P3_G4_LANE_2_0                : 3;	/*[18:16]     r/w 3'h0*/
		uint8_t RESERVED_19                              : 5;	/*[23:19]     r/w   0*/
		uint8_t PU_SMPLR_S_P3_G4_LANE_2_0                : 3;	/*[26:24]     r/w 3'h0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED470_t;
__xdata __at( 0x647c ) volatile AUTOSPEED470_t AUTOSPEED470;
#define reg_PU_SMPLR_D_P1_G4_LANE_2_0  AUTOSPEED470.BF.PU_SMPLR_D_P1_G4_LANE_2_0
#define reg_PU_SMPLR_S_P1_G4_LANE_2_0  AUTOSPEED470.BF.PU_SMPLR_S_P1_G4_LANE_2_0
#define reg_PU_SMPLR_D_P3_G4_LANE_2_0  AUTOSPEED470.BF.PU_SMPLR_D_P3_G4_LANE_2_0
#define reg_PU_SMPLR_S_P3_G4_LANE_2_0  AUTOSPEED470.BF.PU_SMPLR_S_P3_G4_LANE_2_0

// 0x0480	AUTOSPEED471		TBD
typedef union {
	struct {
		uint8_t REG_DFE_FULL_RATE_MODE_G4_LANE           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/*  [7:1]     r/w   0*/
		uint8_t REG_DFE_DIS_G4_LANE                      : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t REG_DFE_TAP_SETTLE_SCALE_G4_LANE_1_0     : 2;	/*[17:16]     r/w 2'h1*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t RXDLL_TEMP_A_G4_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h25*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED471_t;
__xdata __at( 0x6480 ) volatile AUTOSPEED471_t AUTOSPEED471;
#define reg_REG_DFE_FULL_RATE_MODE_G4_LANE  AUTOSPEED471.BF.REG_DFE_FULL_RATE_MODE_G4_LANE
#define reg_REG_DFE_DIS_G4_LANE  AUTOSPEED471.BF.REG_DFE_DIS_G4_LANE
#define reg_REG_DFE_TAP_SETTLE_SCALE_G4_LANE_1_0  AUTOSPEED471.BF.REG_DFE_TAP_SETTLE_SCALE_G4_LANE_1_0
#define reg_RXDLL_TEMP_A_G4_LANE_7_0  AUTOSPEED471.BF.RXDLL_TEMP_A_G4_LANE_7_0

// 0x0484	AUTOSPEED472		TBD
typedef union {
	struct {
		uint8_t RXDLL_TEMP_B_G4_LANE_7_0                 : 8;	/*  [7:0]     r/w 8'had*/
		uint8_t DFE_PAM2_MODE_G4_LANE                    : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w   0*/
		uint8_t RX_PAM2_EN_G4_LANE                       : 1;	/*     16     r/w 1'h1*/
		uint8_t RESERVED_17                              : 7;	/*[23:17]     r/w   0*/
		uint8_t RX_HALFRATE_EN_G4_LANE                   : 1;	/*     24     r/w 1'h1*/
		uint8_t RESERVED_25                              : 7;	/*[31:25]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED472_t;
__xdata __at( 0x6484 ) volatile AUTOSPEED472_t AUTOSPEED472;
#define reg_RXDLL_TEMP_B_G4_LANE_7_0  AUTOSPEED472.BF.RXDLL_TEMP_B_G4_LANE_7_0
#define reg_DFE_PAM2_MODE_G4_LANE  AUTOSPEED472.BF.DFE_PAM2_MODE_G4_LANE
#define reg_RX_PAM2_EN_G4_LANE  AUTOSPEED472.BF.RX_PAM2_EN_G4_LANE
#define reg_RX_HALFRATE_EN_G4_LANE  AUTOSPEED472.BF.RX_HALFRATE_EN_G4_LANE

// 0x0488	AUTOSPEED473		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED473_t;
__xdata __at( 0x6488 ) volatile AUTOSPEED473_t AUTOSPEED473;

// 0x048c	AUTOSPEED474		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED474_t;
__xdata __at( 0x648c ) volatile AUTOSPEED474_t AUTOSPEED474;

// 0x0490	AUTOSPEED475		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED475_t;
__xdata __at( 0x6490 ) volatile AUTOSPEED475_t AUTOSPEED475;

// 0x0494	AUTOSPEED476		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED476_t;
__xdata __at( 0x6494 ) volatile AUTOSPEED476_t AUTOSPEED476;

// 0x0498	AUTOSPEED477		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED477_t;
__xdata __at( 0x6498 ) volatile AUTOSPEED477_t AUTOSPEED477;

// 0x049c	AUTOSPEED478		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED478_t;
__xdata __at( 0x649c ) volatile AUTOSPEED478_t AUTOSPEED478;

// 0x04a0	AUTOSPEED479		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED479_t;
__xdata __at( 0x64a0 ) volatile AUTOSPEED479_t AUTOSPEED479;

// 0x04a4	AUTOSPEED480		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED480_t;
__xdata __at( 0x64a4 ) volatile AUTOSPEED480_t AUTOSPEED480;

// 0x04a8	AUTOSPEED481		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED481_t;
__xdata __at( 0x64a8 ) volatile AUTOSPEED481_t AUTOSPEED481;

// 0x04ac	AUTOSPEED482		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED482_t;
__xdata __at( 0x64ac ) volatile AUTOSPEED482_t AUTOSPEED482;

// 0x04b0	AUTOSPEED483		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED483_t;
__xdata __at( 0x64b0 ) volatile AUTOSPEED483_t AUTOSPEED483;

// 0x04b4	AUTOSPEED484		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED484_t;
__xdata __at( 0x64b4 ) volatile AUTOSPEED484_t AUTOSPEED484;

// 0x04b8	AUTOSPEED485		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED485_t;
__xdata __at( 0x64b8 ) volatile AUTOSPEED485_t AUTOSPEED485;

// 0x04bc	AUTOSPEED486		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED486_t;
__xdata __at( 0x64bc ) volatile AUTOSPEED486_t AUTOSPEED486;

// 0x04c0	AUTOSPEED487		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED487_t;
__xdata __at( 0x64c0 ) volatile AUTOSPEED487_t AUTOSPEED487;

// 0x04c4	AUTOSPEED488		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED488_t;
__xdata __at( 0x64c4 ) volatile AUTOSPEED488_t AUTOSPEED488;

// 0x04c8	AUTOSPEED489		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED489_t;
__xdata __at( 0x64c8 ) volatile AUTOSPEED489_t AUTOSPEED489;

// 0x04cc	AUTOSPEED490		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED490_t;
__xdata __at( 0x64cc ) volatile AUTOSPEED490_t AUTOSPEED490;

// 0x04d0	AUTOSPEED491		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED491_t;
__xdata __at( 0x64d0 ) volatile AUTOSPEED491_t AUTOSPEED491;

// 0x04d4	AUTOSPEED492		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED492_t;
__xdata __at( 0x64d4 ) volatile AUTOSPEED492_t AUTOSPEED492;

// 0x04d8	AUTOSPEED493		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED493_t;
__xdata __at( 0x64d8 ) volatile AUTOSPEED493_t AUTOSPEED493;

// 0x04dc	AUTOSPEED494		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED494_t;
__xdata __at( 0x64dc ) volatile AUTOSPEED494_t AUTOSPEED494;

// 0x04e0	AUTOSPEED495		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED495_t;
__xdata __at( 0x64e0 ) volatile AUTOSPEED495_t AUTOSPEED495;

// 0x04e4	AUTOSPEED496		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED496_t;
__xdata __at( 0x64e4 ) volatile AUTOSPEED496_t AUTOSPEED496;

// 0x04e8	AUTOSPEED497		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED497_t;
__xdata __at( 0x64e8 ) volatile AUTOSPEED497_t AUTOSPEED497;

// 0x04ec	AUTOSPEED498		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED498_t;
__xdata __at( 0x64ec ) volatile AUTOSPEED498_t AUTOSPEED498;

// 0x04f0	AUTOSPEED499		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED499_t;
__xdata __at( 0x64f0 ) volatile AUTOSPEED499_t AUTOSPEED499;

// 0x04f4	AUTOSPEED500		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED500_t;
__xdata __at( 0x64f4 ) volatile AUTOSPEED500_t AUTOSPEED500;

// 0x04f8	AUTOSPEED501		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED501_t;
__xdata __at( 0x64f8 ) volatile AUTOSPEED501_t AUTOSPEED501;

// 0x04fc	AUTOSPEED502		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED502_t;
__xdata __at( 0x64fc ) volatile AUTOSPEED502_t AUTOSPEED502;

// 0x0500	AUTOSPEED503		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED503_t;
__xdata __at( 0x6500 ) volatile AUTOSPEED503_t AUTOSPEED503;

// 0x0504	AUTOSPEED504		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED504_t;
__xdata __at( 0x6504 ) volatile AUTOSPEED504_t AUTOSPEED504;

// 0x0508	AUTOSPEED505		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED505_t;
__xdata __at( 0x6508 ) volatile AUTOSPEED505_t AUTOSPEED505;

// 0x050c	AUTOSPEED506		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED506_t;
__xdata __at( 0x650c ) volatile AUTOSPEED506_t AUTOSPEED506;

// 0x0510	AUTOSPEED507		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED507_t;
__xdata __at( 0x6510 ) volatile AUTOSPEED507_t AUTOSPEED507;

// 0x0514	AUTOSPEED508		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED508_t;
__xdata __at( 0x6514 ) volatile AUTOSPEED508_t AUTOSPEED508;

// 0x0518	AUTOSPEED509		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED509_t;
__xdata __at( 0x6518 ) volatile AUTOSPEED509_t AUTOSPEED509;

// 0x051c	AUTOSPEED510		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED510_t;
__xdata __at( 0x651c ) volatile AUTOSPEED510_t AUTOSPEED510;

// 0x0520	AUTOSPEED511		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED511_t;
__xdata __at( 0x6520 ) volatile AUTOSPEED511_t AUTOSPEED511;

// 0x0524	AUTOSPEED512		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED512_t;
__xdata __at( 0x6524 ) volatile AUTOSPEED512_t AUTOSPEED512;

// 0x0528	AUTOSPEED513		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED513_t;
__xdata __at( 0x6528 ) volatile AUTOSPEED513_t AUTOSPEED513;

// 0x052c	AUTOSPEED514		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED514_t;
__xdata __at( 0x652c ) volatile AUTOSPEED514_t AUTOSPEED514;

// 0x0530	AUTOSPEED515		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED515_t;
__xdata __at( 0x6530 ) volatile AUTOSPEED515_t AUTOSPEED515;

// 0x0534	AUTOSPEED516		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED516_t;
__xdata __at( 0x6534 ) volatile AUTOSPEED516_t AUTOSPEED516;

// 0x0538	AUTOSPEED517		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED517_t;
__xdata __at( 0x6538 ) volatile AUTOSPEED517_t AUTOSPEED517;

// 0x053c	AUTOSPEED518		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED518_t;
__xdata __at( 0x653c ) volatile AUTOSPEED518_t AUTOSPEED518;

// 0x0540	AUTOSPEED519		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED519_t;
__xdata __at( 0x6540 ) volatile AUTOSPEED519_t AUTOSPEED519;

// 0x0544	AUTOSPEED520		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED520_t;
__xdata __at( 0x6544 ) volatile AUTOSPEED520_t AUTOSPEED520;

// 0x0548	AUTOSPEED521		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED521_t;
__xdata __at( 0x6548 ) volatile AUTOSPEED521_t AUTOSPEED521;

// 0x054c	AUTOSPEED522		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED522_t;
__xdata __at( 0x654c ) volatile AUTOSPEED522_t AUTOSPEED522;

// 0x0550	AUTOSPEED523		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED523_t;
__xdata __at( 0x6550 ) volatile AUTOSPEED523_t AUTOSPEED523;

// 0x0554	AUTOSPEED524		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED524_t;
__xdata __at( 0x6554 ) volatile AUTOSPEED524_t AUTOSPEED524;

// 0x0558	AUTOSPEED525		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED525_t;
__xdata __at( 0x6558 ) volatile AUTOSPEED525_t AUTOSPEED525;

// 0x055c	AUTOSPEED526		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED526_t;
__xdata __at( 0x655c ) volatile AUTOSPEED526_t AUTOSPEED526;

// 0x0560	AUTOSPEED527		TBD
typedef union {
	struct {
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED527_t;
__xdata __at( 0x6560 ) volatile AUTOSPEED527_t AUTOSPEED527;

// 0x0564	AUTOSPEED528		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC_PDIV_RATE0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_TXDCC_PDIV_RATE1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_TXDCC_PDIV_CONT_RATE0_LANE_7_0       : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_TXDCC_PDIV_CONT_RATE1_LANE_7_0       : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED528_t;
__xdata __at( 0x6564 ) volatile AUTOSPEED528_t AUTOSPEED528;
#define reg_CAL_TXDCC_PDIV_RATE0_LANE_7_0  AUTOSPEED528.BF.CAL_TXDCC_PDIV_RATE0_LANE_7_0
#define reg_CAL_TXDCC_PDIV_RATE1_LANE_7_0  AUTOSPEED528.BF.CAL_TXDCC_PDIV_RATE1_LANE_7_0
#define reg_CAL_TXDCC_PDIV_CONT_RATE0_LANE_7_0  AUTOSPEED528.BF.CAL_TXDCC_PDIV_CONT_RATE0_LANE_7_0
#define reg_CAL_TXDCC_PDIV_CONT_RATE1_LANE_7_0  AUTOSPEED528.BF.CAL_TXDCC_PDIV_CONT_RATE1_LANE_7_0

// 0x0568	AUTOSPEED529		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC_PDIV_HG_RATE0_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_TXDCC_PDIV_HG_RATE1_LANE_7_0         : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_TXDCC_RATE0_LANE_7_0                 : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_TXDCC_RATE1_LANE_7_0                 : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED529_t;
__xdata __at( 0x6568 ) volatile AUTOSPEED529_t AUTOSPEED529;
#define reg_CAL_TXDCC_PDIV_HG_RATE0_LANE_7_0  AUTOSPEED529.BF.CAL_TXDCC_PDIV_HG_RATE0_LANE_7_0
#define reg_CAL_TXDCC_PDIV_HG_RATE1_LANE_7_0  AUTOSPEED529.BF.CAL_TXDCC_PDIV_HG_RATE1_LANE_7_0
#define reg_CAL_TXDCC_RATE0_LANE_7_0  AUTOSPEED529.BF.CAL_TXDCC_RATE0_LANE_7_0
#define reg_CAL_TXDCC_RATE1_LANE_7_0  AUTOSPEED529.BF.CAL_TXDCC_RATE1_LANE_7_0

// 0x056c	AUTOSPEED530		TBD
typedef union {
	struct {
		uint8_t CAL_TXDCC_CONT_RATE0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_TXDCC_CONT_RATE1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_TXDCC_HG_RATE0_LANE_7_0              : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_TXDCC_HG_RATE1_LANE_7_0              : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED530_t;
__xdata __at( 0x656c ) volatile AUTOSPEED530_t AUTOSPEED530;
#define reg_CAL_TXDCC_CONT_RATE0_LANE_7_0  AUTOSPEED530.BF.CAL_TXDCC_CONT_RATE0_LANE_7_0
#define reg_CAL_TXDCC_CONT_RATE1_LANE_7_0  AUTOSPEED530.BF.CAL_TXDCC_CONT_RATE1_LANE_7_0
#define reg_CAL_TXDCC_HG_RATE0_LANE_7_0  AUTOSPEED530.BF.CAL_TXDCC_HG_RATE0_LANE_7_0
#define reg_CAL_TXDCC_HG_RATE1_LANE_7_0  AUTOSPEED530.BF.CAL_TXDCC_HG_RATE1_LANE_7_0

// 0x0570	AUTOSPEED531		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DLL_RATE0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DLL_RATE1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DLL_CONT_RATE0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DLL_CONT_RATE1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED531_t;
__xdata __at( 0x6570 ) volatile AUTOSPEED531_t AUTOSPEED531;
#define reg_CAL_RXDCC_DLL_RATE0_LANE_7_0  AUTOSPEED531.BF.CAL_RXDCC_DLL_RATE0_LANE_7_0
#define reg_CAL_RXDCC_DLL_RATE1_LANE_7_0  AUTOSPEED531.BF.CAL_RXDCC_DLL_RATE1_LANE_7_0
#define reg_CAL_RXDCC_DLL_CONT_RATE0_LANE_7_0  AUTOSPEED531.BF.CAL_RXDCC_DLL_CONT_RATE0_LANE_7_0
#define reg_CAL_RXDCC_DLL_CONT_RATE1_LANE_7_0  AUTOSPEED531.BF.CAL_RXDCC_DLL_CONT_RATE1_LANE_7_0

// 0x0574	AUTOSPEED532		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DLL_HG_RATE0_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DLL_HG_RATE1_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_GEN0_LANE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_GEN1_LANE_7_0             : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED532_t;
__xdata __at( 0x6574 ) volatile AUTOSPEED532_t AUTOSPEED532;
#define reg_CAL_RXDCC_DLL_HG_RATE0_LANE_7_0  AUTOSPEED532.BF.CAL_RXDCC_DLL_HG_RATE0_LANE_7_0
#define reg_CAL_RXDCC_DLL_HG_RATE1_LANE_7_0  AUTOSPEED532.BF.CAL_RXDCC_DLL_HG_RATE1_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN0_LANE_7_0  AUTOSPEED532.BF.CAL_RXDCC_DATA_GEN0_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN1_LANE_7_0  AUTOSPEED532.BF.CAL_RXDCC_DATA_GEN1_LANE_7_0

// 0x0578	AUTOSPEED533		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_GEN2_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_GEN3_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_GEN4_LANE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN0_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED533_t;
__xdata __at( 0x6578 ) volatile AUTOSPEED533_t AUTOSPEED533;
#define reg_CAL_RXDCC_DATA_GEN2_LANE_7_0  AUTOSPEED533.BF.CAL_RXDCC_DATA_GEN2_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN3_LANE_7_0  AUTOSPEED533.BF.CAL_RXDCC_DATA_GEN3_LANE_7_0
#define reg_CAL_RXDCC_DATA_GEN4_LANE_7_0  AUTOSPEED533.BF.CAL_RXDCC_DATA_GEN4_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN0_LANE_7_0  AUTOSPEED533.BF.CAL_RXDCC_DATA_CONT_GEN0_LANE_7_0

// 0x057c	AUTOSPEED534		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_CONT_GEN1_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN2_LANE_7_0        : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN3_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_DATA_CONT_GEN4_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED534_t;
__xdata __at( 0x657c ) volatile AUTOSPEED534_t AUTOSPEED534;
#define reg_CAL_RXDCC_DATA_CONT_GEN1_LANE_7_0  AUTOSPEED534.BF.CAL_RXDCC_DATA_CONT_GEN1_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN2_LANE_7_0  AUTOSPEED534.BF.CAL_RXDCC_DATA_CONT_GEN2_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN3_LANE_7_0  AUTOSPEED534.BF.CAL_RXDCC_DATA_CONT_GEN3_LANE_7_0
#define reg_CAL_RXDCC_DATA_CONT_GEN4_LANE_7_0  AUTOSPEED534.BF.CAL_RXDCC_DATA_CONT_GEN4_LANE_7_0

// 0x0580	AUTOSPEED535		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_HG_GEN0_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_HG_GEN1_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_HG_GEN2_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RXDCC_DATA_HG_GEN3_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED535_t;
__xdata __at( 0x6580 ) volatile AUTOSPEED535_t AUTOSPEED535;
#define reg_CAL_RXDCC_DATA_HG_GEN0_LANE_7_0  AUTOSPEED535.BF.CAL_RXDCC_DATA_HG_GEN0_LANE_7_0
#define reg_CAL_RXDCC_DATA_HG_GEN1_LANE_7_0  AUTOSPEED535.BF.CAL_RXDCC_DATA_HG_GEN1_LANE_7_0
#define reg_CAL_RXDCC_DATA_HG_GEN2_LANE_7_0  AUTOSPEED535.BF.CAL_RXDCC_DATA_HG_GEN2_LANE_7_0
#define reg_CAL_RXDCC_DATA_HG_GEN3_LANE_7_0  AUTOSPEED535.BF.CAL_RXDCC_DATA_HG_GEN3_LANE_7_0

// 0x0584	AUTOSPEED536		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_DATA_HG_GEN4_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_RATE0_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_RATE1_LANE_7_0             : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_RATE2_LANE_7_0             : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED536_t;
__xdata __at( 0x6584 ) volatile AUTOSPEED536_t AUTOSPEED536;
#define reg_CAL_RXDCC_DATA_HG_GEN4_LANE_7_0  AUTOSPEED536.BF.CAL_RXDCC_DATA_HG_GEN4_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE0_LANE_7_0  AUTOSPEED536.BF.CAL_RXDCC_EOM_RATE0_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE1_LANE_7_0  AUTOSPEED536.BF.CAL_RXDCC_EOM_RATE1_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE2_LANE_7_0  AUTOSPEED536.BF.CAL_RXDCC_EOM_RATE2_LANE_7_0

// 0x0588	AUTOSPEED537		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOM_RATE3_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_RATE4_LANE_7_0             : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h20*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED537_t;
__xdata __at( 0x6588 ) volatile AUTOSPEED537_t AUTOSPEED537;
#define reg_CAL_RXDCC_EOM_RATE3_LANE_7_0  AUTOSPEED537.BF.CAL_RXDCC_EOM_RATE3_LANE_7_0
#define reg_CAL_RXDCC_EOM_RATE4_LANE_7_0  AUTOSPEED537.BF.CAL_RXDCC_EOM_RATE4_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE0_LANE_7_0  AUTOSPEED537.BF.CAL_RXDCC_EOM_CONT_RATE0_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE1_LANE_7_0  AUTOSPEED537.BF.CAL_RXDCC_EOM_CONT_RATE1_LANE_7_0

// 0x058c	AUTOSPEED538		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOM_CONT_RATE2_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE3_LANE_7_0        : 8;	/* [15:8]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_CONT_RATE4_LANE_7_0        : 8;	/*[23:16]     r/w 8'h20*/
		uint8_t CAL_RXDCC_EOM_HG_RATE0_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED538_t;
__xdata __at( 0x658c ) volatile AUTOSPEED538_t AUTOSPEED538;
#define reg_CAL_RXDCC_EOM_CONT_RATE2_LANE_7_0  AUTOSPEED538.BF.CAL_RXDCC_EOM_CONT_RATE2_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE3_LANE_7_0  AUTOSPEED538.BF.CAL_RXDCC_EOM_CONT_RATE3_LANE_7_0
#define reg_CAL_RXDCC_EOM_CONT_RATE4_LANE_7_0  AUTOSPEED538.BF.CAL_RXDCC_EOM_CONT_RATE4_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE0_LANE_7_0  AUTOSPEED538.BF.CAL_RXDCC_EOM_HG_RATE0_LANE_7_0

// 0x0590	AUTOSPEED539		TBD
typedef union {
	struct {
		uint8_t CAL_RXDCC_EOM_HG_RATE1_LANE_7_0          : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_HG_RATE2_LANE_7_0          : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_HG_RATE3_LANE_7_0          : 8;	/*[23:16]     r/w 8'h0*/
		uint8_t CAL_RXDCC_EOM_HG_RATE4_LANE_7_0          : 8;	/*[31:24]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED539_t;
__xdata __at( 0x6590 ) volatile AUTOSPEED539_t AUTOSPEED539;
#define reg_CAL_RXDCC_EOM_HG_RATE1_LANE_7_0  AUTOSPEED539.BF.CAL_RXDCC_EOM_HG_RATE1_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE2_LANE_7_0  AUTOSPEED539.BF.CAL_RXDCC_EOM_HG_RATE2_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE3_LANE_7_0  AUTOSPEED539.BF.CAL_RXDCC_EOM_HG_RATE3_LANE_7_0
#define reg_CAL_RXDCC_EOM_HG_RATE4_LANE_7_0  AUTOSPEED539.BF.CAL_RXDCC_EOM_HG_RATE4_LANE_7_0

// 0x0594	AUTOSPEED540		TBD
typedef union {
	struct {
		uint8_t CAL_DLL_GMSEL_RATE0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h4*/
		uint8_t CAL_DLL_GMSEL_RATE1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h4*/
		uint8_t CAL_VDDA_DLL_SEL_RATE0_LANE_7_0          : 8;	/*[23:16]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_SEL_RATE1_LANE_7_0          : 8;	/*[31:24]     r/w 8'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED540_t;
__xdata __at( 0x6594 ) volatile AUTOSPEED540_t AUTOSPEED540;
#define reg_CAL_DLL_GMSEL_RATE0_LANE_7_0  AUTOSPEED540.BF.CAL_DLL_GMSEL_RATE0_LANE_7_0
#define reg_CAL_DLL_GMSEL_RATE1_LANE_7_0  AUTOSPEED540.BF.CAL_DLL_GMSEL_RATE1_LANE_7_0
#define reg_CAL_VDDA_DLL_SEL_RATE0_LANE_7_0  AUTOSPEED540.BF.CAL_VDDA_DLL_SEL_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_SEL_RATE1_LANE_7_0  AUTOSPEED540.BF.CAL_VDDA_DLL_SEL_RATE1_LANE_7_0

// 0x0598	AUTOSPEED541		TBD
typedef union {
	struct {
		uint8_t CAL_VDDA_DLL_SEL_CONT_RATE0_LANE_7_0     : 8;	/*  [7:0]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_SEL_CONT_RATE1_LANE_7_0     : 8;	/* [15:8]     r/w 8'h16*/
		uint8_t CAL_DLL_EOM_GMSEL_RATE0_LANE_7_0         : 8;	/*[23:16]     r/w 8'h4*/
		uint8_t CAL_DLL_EOM_GMSEL_RATE1_LANE_7_0         : 8;	/*[31:24]     r/w 8'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED541_t;
__xdata __at( 0x6598 ) volatile AUTOSPEED541_t AUTOSPEED541;
#define reg_CAL_VDDA_DLL_SEL_CONT_RATE0_LANE_7_0  AUTOSPEED541.BF.CAL_VDDA_DLL_SEL_CONT_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_SEL_CONT_RATE1_LANE_7_0  AUTOSPEED541.BF.CAL_VDDA_DLL_SEL_CONT_RATE1_LANE_7_0
#define reg_CAL_DLL_EOM_GMSEL_RATE0_LANE_7_0  AUTOSPEED541.BF.CAL_DLL_EOM_GMSEL_RATE0_LANE_7_0
#define reg_CAL_DLL_EOM_GMSEL_RATE1_LANE_7_0  AUTOSPEED541.BF.CAL_DLL_EOM_GMSEL_RATE1_LANE_7_0

// 0x059c	AUTOSPEED542		TBD
typedef union {
	struct {
		uint8_t CAL_VDDA_DLL_EOM_SEL_RATE0_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_RATE1_LANE_7_0      : 8;	/* [15:8]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_CONT_RATE0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h16*/
		uint8_t CAL_VDDA_DLL_EOM_SEL_CONT_RATE1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h16*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED542_t;
__xdata __at( 0x659c ) volatile AUTOSPEED542_t AUTOSPEED542;
#define reg_CAL_VDDA_DLL_EOM_SEL_RATE0_LANE_7_0  AUTOSPEED542.BF.CAL_VDDA_DLL_EOM_SEL_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_EOM_SEL_RATE1_LANE_7_0  AUTOSPEED542.BF.CAL_VDDA_DLL_EOM_SEL_RATE1_LANE_7_0
#define reg_CAL_VDDA_DLL_EOM_SEL_CONT_RATE0_LANE_7_0  AUTOSPEED542.BF.CAL_VDDA_DLL_EOM_SEL_CONT_RATE0_LANE_7_0
#define reg_CAL_VDDA_DLL_EOM_SEL_CONT_RATE1_LANE_7_0  AUTOSPEED542.BF.CAL_VDDA_DLL_EOM_SEL_CONT_RATE1_LANE_7_0

// 0x05a0	AUTOSPEED543		TBD
typedef union {
	struct {
		uint8_t CAL_EOM_DPHER_RATE0_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t CAL_EOM_DPHER_RATE1_LANE_7_0             : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE0_DIV0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE0_DIV1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED543_t;
__xdata __at( 0x65a0 ) volatile AUTOSPEED543_t AUTOSPEED543;
#define reg_CAL_EOM_DPHER_RATE0_LANE_7_0  AUTOSPEED543.BF.CAL_EOM_DPHER_RATE0_LANE_7_0
#define reg_CAL_EOM_DPHER_RATE1_LANE_7_0  AUTOSPEED543.BF.CAL_EOM_DPHER_RATE1_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE0_DIV0_LANE_7_0  AUTOSPEED543.BF.CAL_ALIGN90_DUMMY_CLK_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE0_DIV1_LANE_7_0  AUTOSPEED543.BF.CAL_ALIGN90_DUMMY_CLK_RATE0_DIV1_LANE_7_0

// 0x05a4	AUTOSPEED544		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE1_DIV0_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_RATE1_DIV1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED544_t;
__xdata __at( 0x65a4 ) volatile AUTOSPEED544_t AUTOSPEED544;
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE1_DIV0_LANE_7_0  AUTOSPEED544.BF.CAL_ALIGN90_DUMMY_CLK_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_RATE1_DIV1_LANE_7_0  AUTOSPEED544.BF.CAL_ALIGN90_DUMMY_CLK_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV0_LANE_7_0  AUTOSPEED544.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV1_LANE_7_0  AUTOSPEED544.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE0_DIV1_LANE_7_0

// 0x05a8	AUTOSPEED545		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV0_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h1*/
		uint8_t CAL_ALIGN90_DAC_RATE0_DIV0_LANE_7_0      : 8;	/*[23:16]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DAC_RATE0_DIV1_LANE_7_0      : 8;	/*[31:24]     r/w 8'h31*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED545_t;
__xdata __at( 0x65a8 ) volatile AUTOSPEED545_t AUTOSPEED545;
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV0_LANE_7_0  AUTOSPEED545.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV1_LANE_7_0  AUTOSPEED545.BF.CAL_ALIGN90_DUMMY_CLK_CONT_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_DAC_RATE0_DIV0_LANE_7_0  AUTOSPEED545.BF.CAL_ALIGN90_DAC_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_RATE0_DIV1_LANE_7_0  AUTOSPEED545.BF.CAL_ALIGN90_DAC_RATE0_DIV1_LANE_7_0

// 0x05ac	AUTOSPEED546		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DAC_RATE1_DIV0_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DAC_RATE1_DIV1_LANE_7_0      : 8;	/* [15:8]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DAC_CONT_RATE0_DIV0_LANE_7_0 : 8;	/*[23:16]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DAC_CONT_RATE0_DIV1_LANE_7_0 : 8;	/*[31:24]     r/w 8'h31*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED546_t;
__xdata __at( 0x65ac ) volatile AUTOSPEED546_t AUTOSPEED546;
#define reg_CAL_ALIGN90_DAC_RATE1_DIV0_LANE_7_0  AUTOSPEED546.BF.CAL_ALIGN90_DAC_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_RATE1_DIV1_LANE_7_0  AUTOSPEED546.BF.CAL_ALIGN90_DAC_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_DAC_CONT_RATE0_DIV0_LANE_7_0  AUTOSPEED546.BF.CAL_ALIGN90_DAC_CONT_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_CONT_RATE0_DIV1_LANE_7_0  AUTOSPEED546.BF.CAL_ALIGN90_DAC_CONT_RATE0_DIV1_LANE_7_0

// 0x05b0	AUTOSPEED547		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_DAC_CONT_RATE1_DIV0_LANE_7_0 : 8;	/*  [7:0]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_DAC_CONT_RATE1_DIV1_LANE_7_0 : 8;	/* [15:8]     r/w 8'h31*/
		uint8_t CAL_ALIGN90_GM_RATE0_DIV0_LANE_7_0       : 8;	/*[23:16]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_RATE0_DIV1_LANE_7_0       : 8;	/*[31:24]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED547_t;
__xdata __at( 0x65b0 ) volatile AUTOSPEED547_t AUTOSPEED547;
#define reg_CAL_ALIGN90_DAC_CONT_RATE1_DIV0_LANE_7_0  AUTOSPEED547.BF.CAL_ALIGN90_DAC_CONT_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_DAC_CONT_RATE1_DIV1_LANE_7_0  AUTOSPEED547.BF.CAL_ALIGN90_DAC_CONT_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_GM_RATE0_DIV0_LANE_7_0  AUTOSPEED547.BF.CAL_ALIGN90_GM_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_RATE0_DIV1_LANE_7_0  AUTOSPEED547.BF.CAL_ALIGN90_GM_RATE0_DIV1_LANE_7_0

// 0x05b4	AUTOSPEED548		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_GM_RATE1_DIV0_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_RATE1_DIV1_LANE_7_0       : 8;	/* [15:8]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_CONT_RATE0_DIV0_LANE_7_0  : 8;	/*[23:16]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_CONT_RATE0_DIV1_LANE_7_0  : 8;	/*[31:24]     r/w 8'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED548_t;
__xdata __at( 0x65b4 ) volatile AUTOSPEED548_t AUTOSPEED548;
#define reg_CAL_ALIGN90_GM_RATE1_DIV0_LANE_7_0  AUTOSPEED548.BF.CAL_ALIGN90_GM_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_RATE1_DIV1_LANE_7_0  AUTOSPEED548.BF.CAL_ALIGN90_GM_RATE1_DIV1_LANE_7_0
#define reg_CAL_ALIGN90_GM_CONT_RATE0_DIV0_LANE_7_0  AUTOSPEED548.BF.CAL_ALIGN90_GM_CONT_RATE0_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_CONT_RATE0_DIV1_LANE_7_0  AUTOSPEED548.BF.CAL_ALIGN90_GM_CONT_RATE0_DIV1_LANE_7_0

// 0x05b8	AUTOSPEED549		TBD
typedef union {
	struct {
		uint8_t CAL_ALIGN90_GM_CONT_RATE1_DIV0_LANE_7_0  : 8;	/*  [7:0]     r/w 8'h3*/
		uint8_t CAL_ALIGN90_GM_CONT_RATE1_DIV1_LANE_7_0  : 8;	/* [15:8]     r/w 8'h3*/
		uint8_t CAL_SELLV_TXDATA_GEN0_LANE_7_0           : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_GEN1_LANE_7_0           : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED549_t;
__xdata __at( 0x65b8 ) volatile AUTOSPEED549_t AUTOSPEED549;
#define reg_CAL_ALIGN90_GM_CONT_RATE1_DIV0_LANE_7_0  AUTOSPEED549.BF.CAL_ALIGN90_GM_CONT_RATE1_DIV0_LANE_7_0
#define reg_CAL_ALIGN90_GM_CONT_RATE1_DIV1_LANE_7_0  AUTOSPEED549.BF.CAL_ALIGN90_GM_CONT_RATE1_DIV1_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN0_LANE_7_0  AUTOSPEED549.BF.CAL_SELLV_TXDATA_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN1_LANE_7_0  AUTOSPEED549.BF.CAL_SELLV_TXDATA_GEN1_LANE_7_0

// 0x05bc	AUTOSPEED550		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXDATA_GEN2_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_GEN3_LANE_7_0           : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_GEN4_LANE_7_0           : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN0_LANE_7_0      : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED550_t;
__xdata __at( 0x65bc ) volatile AUTOSPEED550_t AUTOSPEED550;
#define reg_CAL_SELLV_TXDATA_GEN2_LANE_7_0  AUTOSPEED550.BF.CAL_SELLV_TXDATA_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN3_LANE_7_0  AUTOSPEED550.BF.CAL_SELLV_TXDATA_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXDATA_GEN4_LANE_7_0  AUTOSPEED550.BF.CAL_SELLV_TXDATA_GEN4_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN0_LANE_7_0  AUTOSPEED550.BF.CAL_SELLV_TXDATA_CONT_GEN0_LANE_7_0

// 0x05c0	AUTOSPEED551		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXDATA_CONT_GEN1_LANE_7_0      : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN2_LANE_7_0      : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN3_LANE_7_0      : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXDATA_CONT_GEN4_LANE_7_0      : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED551_t;
__xdata __at( 0x65c0 ) volatile AUTOSPEED551_t AUTOSPEED551;
#define reg_CAL_SELLV_TXDATA_CONT_GEN1_LANE_7_0  AUTOSPEED551.BF.CAL_SELLV_TXDATA_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN2_LANE_7_0  AUTOSPEED551.BF.CAL_SELLV_TXDATA_CONT_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN3_LANE_7_0  AUTOSPEED551.BF.CAL_SELLV_TXDATA_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXDATA_CONT_GEN4_LANE_7_0  AUTOSPEED551.BF.CAL_SELLV_TXDATA_CONT_GEN4_LANE_7_0

// 0x05c4	AUTOSPEED552		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_GEN0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_GEN1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_GEN2_LANE_7_0            : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_GEN3_LANE_7_0            : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED552_t;
__xdata __at( 0x65c4 ) volatile AUTOSPEED552_t AUTOSPEED552;
#define reg_CAL_SELLV_TXCLK_GEN0_LANE_7_0  AUTOSPEED552.BF.CAL_SELLV_TXCLK_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXCLK_GEN1_LANE_7_0  AUTOSPEED552.BF.CAL_SELLV_TXCLK_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXCLK_GEN2_LANE_7_0  AUTOSPEED552.BF.CAL_SELLV_TXCLK_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXCLK_GEN3_LANE_7_0  AUTOSPEED552.BF.CAL_SELLV_TXCLK_GEN3_LANE_7_0

// 0x05c8	AUTOSPEED553		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_GEN4_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN0_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN1_LANE_7_0       : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN2_LANE_7_0       : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED553_t;
__xdata __at( 0x65c8 ) volatile AUTOSPEED553_t AUTOSPEED553;
#define reg_CAL_SELLV_TXCLK_GEN4_LANE_7_0  AUTOSPEED553.BF.CAL_SELLV_TXCLK_GEN4_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN0_LANE_7_0  AUTOSPEED553.BF.CAL_SELLV_TXCLK_CONT_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN1_LANE_7_0  AUTOSPEED553.BF.CAL_SELLV_TXCLK_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN2_LANE_7_0  AUTOSPEED553.BF.CAL_SELLV_TXCLK_CONT_GEN2_LANE_7_0

// 0x05cc	AUTOSPEED554		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXCLK_CONT_GEN3_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXCLK_CONT_GEN4_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED554_t;
__xdata __at( 0x65cc ) volatile AUTOSPEED554_t AUTOSPEED554;
#define reg_CAL_SELLV_TXCLK_CONT_GEN3_LANE_7_0  AUTOSPEED554.BF.CAL_SELLV_TXCLK_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXCLK_CONT_GEN4_LANE_7_0  AUTOSPEED554.BF.CAL_SELLV_TXCLK_CONT_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN0_LANE_7_0  AUTOSPEED554.BF.CAL_SELLV_RXDATACLK_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN1_LANE_7_0  AUTOSPEED554.BF.CAL_SELLV_RXDATACLK_GEN1_LANE_7_0

// 0x05d0	AUTOSPEED555		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXDATACLK_GEN2_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN3_LANE_7_0        : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_GEN4_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN0_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED555_t;
__xdata __at( 0x65d0 ) volatile AUTOSPEED555_t AUTOSPEED555;
#define reg_CAL_SELLV_RXDATACLK_GEN2_LANE_7_0  AUTOSPEED555.BF.CAL_SELLV_RXDATACLK_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN3_LANE_7_0  AUTOSPEED555.BF.CAL_SELLV_RXDATACLK_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_GEN4_LANE_7_0  AUTOSPEED555.BF.CAL_SELLV_RXDATACLK_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN0_LANE_7_0  AUTOSPEED555.BF.CAL_SELLV_RXDATACLK_CONT_GEN0_LANE_7_0

// 0x05d4	AUTOSPEED556		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN1_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN2_LANE_7_0   : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN3_LANE_7_0   : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXDATACLK_CONT_GEN4_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED556_t;
__xdata __at( 0x65d4 ) volatile AUTOSPEED556_t AUTOSPEED556;
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN1_LANE_7_0  AUTOSPEED556.BF.CAL_SELLV_RXDATACLK_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN2_LANE_7_0  AUTOSPEED556.BF.CAL_SELLV_RXDATACLK_CONT_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN3_LANE_7_0  AUTOSPEED556.BF.CAL_SELLV_RXDATACLK_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXDATACLK_CONT_GEN4_LANE_7_0  AUTOSPEED556.BF.CAL_SELLV_RXDATACLK_CONT_GEN4_LANE_7_0

// 0x05d8	AUTOSPEED557		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_GEN0_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_GEN1_LANE_7_0            : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_GEN2_LANE_7_0            : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_GEN3_LANE_7_0            : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED557_t;
__xdata __at( 0x65d8 ) volatile AUTOSPEED557_t AUTOSPEED557;
#define reg_CAL_SELLV_TXPRE_GEN0_LANE_7_0  AUTOSPEED557.BF.CAL_SELLV_TXPRE_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXPRE_GEN1_LANE_7_0  AUTOSPEED557.BF.CAL_SELLV_TXPRE_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXPRE_GEN2_LANE_7_0  AUTOSPEED557.BF.CAL_SELLV_TXPRE_GEN2_LANE_7_0
#define reg_CAL_SELLV_TXPRE_GEN3_LANE_7_0  AUTOSPEED557.BF.CAL_SELLV_TXPRE_GEN3_LANE_7_0

// 0x05dc	AUTOSPEED558		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_GEN4_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN0_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN1_LANE_7_0       : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN2_LANE_7_0       : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED558_t;
__xdata __at( 0x65dc ) volatile AUTOSPEED558_t AUTOSPEED558;
#define reg_CAL_SELLV_TXPRE_GEN4_LANE_7_0  AUTOSPEED558.BF.CAL_SELLV_TXPRE_GEN4_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN0_LANE_7_0  AUTOSPEED558.BF.CAL_SELLV_TXPRE_CONT_GEN0_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN1_LANE_7_0  AUTOSPEED558.BF.CAL_SELLV_TXPRE_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN2_LANE_7_0  AUTOSPEED558.BF.CAL_SELLV_TXPRE_CONT_GEN2_LANE_7_0

// 0x05e0	AUTOSPEED559		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_TXPRE_CONT_GEN3_LANE_7_0       : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_TXPRE_CONT_GEN4_LANE_7_0       : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN0_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN1_LANE_7_0        : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED559_t;
__xdata __at( 0x65e0 ) volatile AUTOSPEED559_t AUTOSPEED559;
#define reg_CAL_SELLV_TXPRE_CONT_GEN3_LANE_7_0  AUTOSPEED559.BF.CAL_SELLV_TXPRE_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_TXPRE_CONT_GEN4_LANE_7_0  AUTOSPEED559.BF.CAL_SELLV_TXPRE_CONT_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN0_LANE_7_0  AUTOSPEED559.BF.CAL_SELLV_RXSAMPLER_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN1_LANE_7_0  AUTOSPEED559.BF.CAL_SELLV_RXSAMPLER_GEN1_LANE_7_0

// 0x05e4	AUTOSPEED560		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXSAMPLER_GEN2_LANE_7_0        : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN3_LANE_7_0        : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_GEN4_LANE_7_0        : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN0_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED560_t;
__xdata __at( 0x65e4 ) volatile AUTOSPEED560_t AUTOSPEED560;
#define reg_CAL_SELLV_RXSAMPLER_GEN2_LANE_7_0  AUTOSPEED560.BF.CAL_SELLV_RXSAMPLER_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN3_LANE_7_0  AUTOSPEED560.BF.CAL_SELLV_RXSAMPLER_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_GEN4_LANE_7_0  AUTOSPEED560.BF.CAL_SELLV_RXSAMPLER_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN0_LANE_7_0  AUTOSPEED560.BF.CAL_SELLV_RXSAMPLER_CONT_GEN0_LANE_7_0

// 0x05e8	AUTOSPEED561		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN1_LANE_7_0   : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN2_LANE_7_0   : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN3_LANE_7_0   : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXSAMPLER_CONT_GEN4_LANE_7_0   : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED561_t;
__xdata __at( 0x65e8 ) volatile AUTOSPEED561_t AUTOSPEED561;
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN1_LANE_7_0  AUTOSPEED561.BF.CAL_SELLV_RXSAMPLER_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN2_LANE_7_0  AUTOSPEED561.BF.CAL_SELLV_RXSAMPLER_CONT_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN3_LANE_7_0  AUTOSPEED561.BF.CAL_SELLV_RXSAMPLER_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXSAMPLER_CONT_GEN4_LANE_7_0  AUTOSPEED561.BF.CAL_SELLV_RXSAMPLER_CONT_GEN4_LANE_7_0

// 0x05ec	AUTOSPEED562		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXEOMCLK_GEN0_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_GEN1_LANE_7_0         : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_GEN2_LANE_7_0         : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_GEN3_LANE_7_0         : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED562_t;
__xdata __at( 0x65ec ) volatile AUTOSPEED562_t AUTOSPEED562;
#define reg_CAL_SELLV_RXEOMCLK_GEN0_LANE_7_0  AUTOSPEED562.BF.CAL_SELLV_RXEOMCLK_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_GEN1_LANE_7_0  AUTOSPEED562.BF.CAL_SELLV_RXEOMCLK_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_GEN2_LANE_7_0  AUTOSPEED562.BF.CAL_SELLV_RXEOMCLK_GEN2_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_GEN3_LANE_7_0  AUTOSPEED562.BF.CAL_SELLV_RXEOMCLK_GEN3_LANE_7_0

// 0x05f0	AUTOSPEED563		TBD
typedef union {
	struct {
		uint8_t CAL_SELLV_RXEOMCLK_GEN4_LANE_7_0         : 8;	/*  [7:0]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN0_LANE_7_0    : 8;	/* [15:8]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN1_LANE_7_0    : 8;	/*[23:16]     r/w 8'h8*/
		uint8_t CAL_SELLV_RXEOMCLK_CONT_GEN2_LANE_7_0    : 8;	/*[31:24]     r/w 8'h8*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} AUTOSPEED563_t;
__xdata __at( 0x65f0 ) volatile AUTOSPEED563_t AUTOSPEED563;
#define reg_CAL_SELLV_RXEOMCLK_GEN4_LANE_7_0  AUTOSPEED563.BF.CAL_SELLV_RXEOMCLK_GEN4_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN0_LANE_7_0  AUTOSPEED563.BF.CAL_SELLV_RXEOMCLK_CONT_GEN0_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN1_LANE_7_0  AUTOSPEED563.BF.CAL_SELLV_RXEOMCLK_CONT_GEN1_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN2_LANE_7_0  AUTOSPEED563.BF.CAL_SELLV_RXEOMCLK_CONT_GEN2_LANE_7_0

// 0x05f4	AUTOSPEED564		TBD
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
} AUTOSPEED564_t;
__xdata __at( 0x65f4 ) volatile AUTOSPEED564_t AUTOSPEED564;
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN3_LANE_7_0  AUTOSPEED564.BF.CAL_SELLV_RXEOMCLK_CONT_GEN3_LANE_7_0
#define reg_CAL_SELLV_RXEOMCLK_CONT_GEN4_LANE_7_0  AUTOSPEED564.BF.CAL_SELLV_RXEOMCLK_CONT_GEN4_LANE_7_0

#endif
