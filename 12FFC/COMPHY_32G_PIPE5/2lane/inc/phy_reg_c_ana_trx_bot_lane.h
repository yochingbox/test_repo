#ifndef PHY_REG_C_ANA_TRX_BOT_LANE_H
#define PHY_REG_C_ANA_TRX_BOT_LANE_H



// 0x0	UPHY14_TRX_ANAREG_BOT_0		Analog Register 0
typedef union {
	struct {
		uint8_t FFE_CAP2_SEL_E_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'hf*/
		uint8_t FFE_RES2_SEL_E_LANE_3_0                  : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_0_t;
__xdata __at( 0x0 ) volatile UPHY14_TRX_ANAREG_BOT_0_t UPHY14_TRX_ANAREG_BOT_0;
#define reg_FFE_CAP2_SEL_E_LANE_3_0  UPHY14_TRX_ANAREG_BOT_0.BF.FFE_CAP2_SEL_E_LANE_3_0
#define reg_FFE_RES2_SEL_E_LANE_3_0  UPHY14_TRX_ANAREG_BOT_0.BF.FFE_RES2_SEL_E_LANE_3_0

// 0x1	UPHY14_TRX_ANAREG_BOT_1		Analog Register 1
typedef union {
	struct {
		uint8_t HPF_BW_LANE_1_0                          : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t EN_F0_S_LANE                             : 1;	/*      2     r/w   1*/
		uint8_t EN_F0_D_LANE                             : 1;	/*      3     r/w   1*/
		uint8_t FFE_VICM2_LANE_1_0                       : 2;	/*  [5:4]     r/w 2'h1*/
		uint8_t FFE_VICM1_LANE_1_0                       : 2;	/*  [7:6]     r/w 2'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_1_t;
__xdata __at( 0x4 ) volatile UPHY14_TRX_ANAREG_BOT_1_t UPHY14_TRX_ANAREG_BOT_1;
#define reg_HPF_BW_LANE_1_0  UPHY14_TRX_ANAREG_BOT_1.BF.HPF_BW_LANE_1_0
#define reg_EN_F0_S_LANE  UPHY14_TRX_ANAREG_BOT_1.BF.EN_F0_S_LANE
#define reg_EN_F0_D_LANE  UPHY14_TRX_ANAREG_BOT_1.BF.EN_F0_D_LANE
#define reg_FFE_VICM2_LANE_1_0  UPHY14_TRX_ANAREG_BOT_1.BF.FFE_VICM2_LANE_1_0
#define reg_FFE_VICM1_LANE_1_0  UPHY14_TRX_ANAREG_BOT_1.BF.FFE_VICM1_LANE_1_0

// 0x2	UPHY14_TRX_ANAREG_BOT_2		Analog Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SQ_OFFSET_CAL_EN_LANE                    : 1;	/*      1     r/w   0*/
		uint8_t IMPCAL_RX_LANE_4_0                       : 5;	/*  [6:2]     r/w 5'h10*/
		uint8_t RXIMPCAL_EN_LANE                         : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_2_t;
__xdata __at( 0x8 ) volatile UPHY14_TRX_ANAREG_BOT_2_t UPHY14_TRX_ANAREG_BOT_2;
#define reg_SQ_OFFSET_CAL_EN_LANE  UPHY14_TRX_ANAREG_BOT_2.BF.SQ_OFFSET_CAL_EN_LANE
#define reg_IMPCAL_RX_LANE_4_0  UPHY14_TRX_ANAREG_BOT_2.BF.IMPCAL_RX_LANE_4_0
#define reg_RXIMPCAL_EN_LANE  UPHY14_TRX_ANAREG_BOT_2.BF.RXIMPCAL_EN_LANE

// 0x3	UPHY14_TRX_ANAREG_BOT_3		Analog Register 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t SQ_THRIPTAT_LANE_1_0                     : 2;	/*  [2:1]     r/w 2'h3*/
		uint8_t SQ_OFFSET_LANE_4_0                       : 5;	/*  [7:3]     r/w 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_3_t;
__xdata __at( 0xc ) volatile UPHY14_TRX_ANAREG_BOT_3_t UPHY14_TRX_ANAREG_BOT_3;
#define reg_SQ_THRIPTAT_LANE_1_0  UPHY14_TRX_ANAREG_BOT_3.BF.SQ_THRIPTAT_LANE_1_0
#define reg_SQ_OFFSET_LANE_4_0  UPHY14_TRX_ANAREG_BOT_3.BF.SQ_OFFSET_LANE_4_0

// 0x4	UPHY14_TRX_ANAREG_BOT_4		Analog Register 4
typedef union {
	struct {
		uint8_t SQ_OFFSETCAL_SEL_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t SQ_THRESH_LANE_5_0                       : 6;	/*  [7:2]     r/w 6'h04*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_4_t;
__xdata __at( 0x10 ) volatile UPHY14_TRX_ANAREG_BOT_4_t UPHY14_TRX_ANAREG_BOT_4;
#define reg_SQ_OFFSETCAL_SEL_LANE_1_0  UPHY14_TRX_ANAREG_BOT_4.BF.SQ_OFFSETCAL_SEL_LANE_1_0
#define reg_SQ_THRESH_LANE_5_0  UPHY14_TRX_ANAREG_BOT_4.BF.SQ_THRESH_LANE_5_0

// 0x5	UPHY14_TRX_ANAREG_BOT_5		Analog Register 5
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t SQ_LINEAR_DISABLE_LANE                   : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_5_t;
__xdata __at( 0x14 ) volatile UPHY14_TRX_ANAREG_BOT_5_t UPHY14_TRX_ANAREG_BOT_5;
#define reg_SQ_LINEAR_DISABLE_LANE  UPHY14_TRX_ANAREG_BOT_5.BF.SQ_LINEAR_DISABLE_LANE

// 0x6	UPHY14_TRX_ANAREG_BOT_6		Analog Register 6
typedef union {
	struct {
		uint8_t TEST_LANE_7_0                            : 8;	/*  [7:0]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_6_t;
__xdata __at( 0x18 ) volatile UPHY14_TRX_ANAREG_BOT_6_t UPHY14_TRX_ANAREG_BOT_6;
#define reg_TEST_LANE_7_0  UPHY14_TRX_ANAREG_BOT_6.BF.TEST_LANE_7_0

// 0x7	UPHY14_TRX_ANAREG_BOT_7		Analog Register 7
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 3;	/*  [5:3]     r/w   0*/
		uint8_t DLL_FREQ_SEL_LANE_1_0                    : 2;	/*  [7:6]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_7_t;
__xdata __at( 0x1c ) volatile UPHY14_TRX_ANAREG_BOT_7_t UPHY14_TRX_ANAREG_BOT_7;
#define reg_DLL_FREQ_SEL_LANE_1_0  UPHY14_TRX_ANAREG_BOT_7.BF.DLL_FREQ_SEL_LANE_1_0

// 0x8	UPHY14_TRX_ANAREG_BOT_8		Analog Register 8
typedef union {
	struct {
		uint8_t EOM_DLL_FREQ_SEL_LANE_1_0                : 2;	/*  [1:0]     r/w 2'h3*/
		uint8_t RESERVED_2                               : 2;	/*  [3:2]     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_8_t;
__xdata __at( 0x20 ) volatile UPHY14_TRX_ANAREG_BOT_8_t UPHY14_TRX_ANAREG_BOT_8;
#define reg_EOM_DLL_FREQ_SEL_LANE_1_0  UPHY14_TRX_ANAREG_BOT_8.BF.EOM_DLL_FREQ_SEL_LANE_1_0

// 0x9	UPHY14_TRX_ANAREG_BOT_9		Analog Register 9
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t EOM_RESET_INTP_EXT_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t EOM_SSC_CLK_EN_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_9_t;
__xdata __at( 0x24 ) volatile UPHY14_TRX_ANAREG_BOT_9_t UPHY14_TRX_ANAREG_BOT_9;
#define reg_EOM_RESET_INTP_EXT_LANE  UPHY14_TRX_ANAREG_BOT_9.BF.EOM_RESET_INTP_EXT_LANE
#define reg_EOM_SSC_CLK_EN_LANE  UPHY14_TRX_ANAREG_BOT_9.BF.EOM_SSC_CLK_EN_LANE

// 0xa	UPHY14_TRX_ANAREG_BOT_10		Analog Register 10
typedef union {
	struct {
		uint8_t EOM_DPHERCK_LANE                         : 1;	/*      0     r/w   0*/
		uint8_t EOM_DPHER_LANE_6_0                       : 7;	/*  [7:1]     r/w 7'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_10_t;
__xdata __at( 0x28 ) volatile UPHY14_TRX_ANAREG_BOT_10_t UPHY14_TRX_ANAREG_BOT_10;
#define reg_EOM_DPHERCK_LANE  UPHY14_TRX_ANAREG_BOT_10.BF.EOM_DPHERCK_LANE
#define reg_EOM_DPHER_LANE_6_0  UPHY14_TRX_ANAREG_BOT_10.BF.EOM_DPHER_LANE_6_0

// 0xb	UPHY14_TRX_ANAREG_BOT_11		Analog Register 11
typedef union {
	struct {
		uint8_t ALIGN90_CMP_CAL_EN_LANE                  : 1;	/*      0     r/w   0*/
		uint8_t INTPI_LANE_3_0                           : 4;	/*  [4:1]     r/w 4'he*/
		uint8_t EOM_DPHERCK_DLY_SEL_LANE_1_0             : 2;	/*  [6:5]     r/w 2'h1*/
		uint8_t DLL_CMP_CAL_EN_LANE                      : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_11_t;
__xdata __at( 0x2c ) volatile UPHY14_TRX_ANAREG_BOT_11_t UPHY14_TRX_ANAREG_BOT_11;
#define reg_ALIGN90_CMP_CAL_EN_LANE  UPHY14_TRX_ANAREG_BOT_11.BF.ALIGN90_CMP_CAL_EN_LANE
#define reg_INTPI_LANE_3_0  UPHY14_TRX_ANAREG_BOT_11.BF.INTPI_LANE_3_0
#define reg_EOM_DPHERCK_DLY_SEL_LANE_1_0  UPHY14_TRX_ANAREG_BOT_11.BF.EOM_DPHERCK_DLY_SEL_LANE_1_0
#define reg_DLL_CMP_CAL_EN_LANE  UPHY14_TRX_ANAREG_BOT_11.BF.DLL_CMP_CAL_EN_LANE

// 0xc	UPHY14_TRX_ANAREG_BOT_12		Analog Register 12
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 3;	/*  [3:1]     r/w   0*/
		uint8_t RESERVED_4                               : 4;	/*  [7:4]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_12_t;
__xdata __at( 0x30 ) volatile UPHY14_TRX_ANAREG_BOT_12_t UPHY14_TRX_ANAREG_BOT_12;

// 0xd	UPHY14_TRX_ANAREG_BOT_13		Analog Register 13
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_13_t;
__xdata __at( 0x34 ) volatile UPHY14_TRX_ANAREG_BOT_13_t UPHY14_TRX_ANAREG_BOT_13;

// 0xe	UPHY14_TRX_ANAREG_BOT_14		Analog Register 14
typedef union {
	struct {
		uint8_t EOM_ALIGN_EN_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t ALIGN90_REF_FILT_BW_LANE                 : 1;	/*      1     r/w   0*/
		uint8_t ALIGN90_REF_LANE_5_0                     : 6;	/*  [7:2]     r/w 6'h1e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_14_t;
__xdata __at( 0x38 ) volatile UPHY14_TRX_ANAREG_BOT_14_t UPHY14_TRX_ANAREG_BOT_14;
#define reg_EOM_ALIGN_EN_LANE  UPHY14_TRX_ANAREG_BOT_14.BF.EOM_ALIGN_EN_LANE
#define reg_ALIGN90_REF_FILT_BW_LANE  UPHY14_TRX_ANAREG_BOT_14.BF.ALIGN90_REF_FILT_BW_LANE
#define reg_ALIGN90_REF_LANE_5_0  UPHY14_TRX_ANAREG_BOT_14.BF.ALIGN90_REF_LANE_5_0

// 0xf	UPHY14_TRX_ANAREG_BOT_15		Analog Register 15
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RXDCC_EN_EOMCLK_LANE                     : 1;	/*      1     r/w   1*/
		uint8_t EOM_ALIGN_CMP_OFSTDAC_LANE_3_0           : 4;	/*  [5:2]     r/w 4'h8*/
		uint8_t EOM_ALIGN_PD_SEL_LANE                    : 1;	/*      6     r/w   0*/
		uint8_t EOM_ALIGN_CMP_CAL_EN_LANE                : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_15_t;
__xdata __at( 0x3c ) volatile UPHY14_TRX_ANAREG_BOT_15_t UPHY14_TRX_ANAREG_BOT_15;
#define reg_RXDCC_EN_EOMCLK_LANE  UPHY14_TRX_ANAREG_BOT_15.BF.RXDCC_EN_EOMCLK_LANE
#define reg_EOM_ALIGN_CMP_OFSTDAC_LANE_3_0  UPHY14_TRX_ANAREG_BOT_15.BF.EOM_ALIGN_CMP_OFSTDAC_LANE_3_0
#define reg_EOM_ALIGN_PD_SEL_LANE  UPHY14_TRX_ANAREG_BOT_15.BF.EOM_ALIGN_PD_SEL_LANE
#define reg_EOM_ALIGN_CMP_CAL_EN_LANE  UPHY14_TRX_ANAREG_BOT_15.BF.EOM_ALIGN_CMP_CAL_EN_LANE

// 0x10	UPHY14_TRX_ANAREG_BOT_16		Analog Register 16
typedef union {
	struct {
		uint8_t RXDCC_CAL_EN_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t RXDCC_HG_EOMCLK_LANE                     : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 6;	/*  [7:2]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_16_t;
__xdata __at( 0x40 ) volatile UPHY14_TRX_ANAREG_BOT_16_t UPHY14_TRX_ANAREG_BOT_16;
#define reg_RXDCC_CAL_EN_LANE  UPHY14_TRX_ANAREG_BOT_16.BF.RXDCC_CAL_EN_LANE
#define reg_RXDCC_HG_EOMCLK_LANE  UPHY14_TRX_ANAREG_BOT_16.BF.RXDCC_HG_EOMCLK_LANE

// 0x11	UPHY14_TRX_ANAREG_BOT_17		Analog Register 17
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t IDCON_CUR_LANE_1_0                       : 2;	/*  [3:2]     r/w 2'h2*/
		uint8_t RXDCC_DAC_SYNC_CLK_LANE                  : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_17_t;
__xdata __at( 0x44 ) volatile UPHY14_TRX_ANAREG_BOT_17_t UPHY14_TRX_ANAREG_BOT_17;
#define reg_IDCON_CUR_LANE_1_0  UPHY14_TRX_ANAREG_BOT_17.BF.IDCON_CUR_LANE_1_0
#define reg_RXDCC_DAC_SYNC_CLK_LANE  UPHY14_TRX_ANAREG_BOT_17.BF.RXDCC_DAC_SYNC_CLK_LANE

// 0x12	UPHY14_TRX_ANAREG_BOT_18		Analog Register 18
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t IDCON_VDDADATA_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t TX_REG_SPEED_TRK_DATA_LANE_2_0           : 3;	/*  [4:2]     r/w 3'h7*/
		uint8_t TX_REG_SPEED_TRK_CLK_LANE_2_0            : 3;	/*  [7:5]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_18_t;
__xdata __at( 0x48 ) volatile UPHY14_TRX_ANAREG_BOT_18_t UPHY14_TRX_ANAREG_BOT_18;
#define reg_IDCON_VDDADATA_LANE  UPHY14_TRX_ANAREG_BOT_18.BF.IDCON_VDDADATA_LANE
#define reg_TX_REG_SPEED_TRK_DATA_LANE_2_0  UPHY14_TRX_ANAREG_BOT_18.BF.TX_REG_SPEED_TRK_DATA_LANE_2_0
#define reg_TX_REG_SPEED_TRK_CLK_LANE_2_0  UPHY14_TRX_ANAREG_BOT_18.BF.TX_REG_SPEED_TRK_CLK_LANE_2_0

// 0x13	UPHY14_TRX_ANAREG_BOT_19		Analog Register 19
typedef union {
	struct {
		uint8_t SMPLR_CAL_EN_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t PATH_DISABLE_EDGE_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t SLEWCTRL1_LANE_1_0                       : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t SLEWCTRL0_LANE_1_0                       : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t SLEWRATE_EN_LANE_1_0                     : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_19_t;
__xdata __at( 0x4c ) volatile UPHY14_TRX_ANAREG_BOT_19_t UPHY14_TRX_ANAREG_BOT_19;
#define reg_SMPLR_CAL_EN_LANE  UPHY14_TRX_ANAREG_BOT_19.BF.SMPLR_CAL_EN_LANE
#define reg_PATH_DISABLE_EDGE_LANE  UPHY14_TRX_ANAREG_BOT_19.BF.PATH_DISABLE_EDGE_LANE
#define reg_SLEWCTRL1_LANE_1_0  UPHY14_TRX_ANAREG_BOT_19.BF.SLEWCTRL1_LANE_1_0
#define reg_SLEWCTRL0_LANE_1_0  UPHY14_TRX_ANAREG_BOT_19.BF.SLEWCTRL0_LANE_1_0
#define reg_SLEWRATE_EN_LANE_1_0  UPHY14_TRX_ANAREG_BOT_19.BF.SLEWRATE_EN_LANE_1_0

// 0x14	UPHY14_TRX_ANAREG_BOT_20		Analog Register 20
typedef union {
	struct {
		uint8_t DFE_RES_F234_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t DFE_RES_F1_LANE_1_0                      : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t DFE_RES_F0_LANE_1_0                      : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t SMPLR_CAL_SEL_LANE_2_0                   : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_20_t;
__xdata __at( 0x50 ) volatile UPHY14_TRX_ANAREG_BOT_20_t UPHY14_TRX_ANAREG_BOT_20;
#define reg_DFE_RES_F234_LANE  UPHY14_TRX_ANAREG_BOT_20.BF.DFE_RES_F234_LANE
#define reg_DFE_RES_F1_LANE_1_0  UPHY14_TRX_ANAREG_BOT_20.BF.DFE_RES_F1_LANE_1_0
#define reg_DFE_RES_F0_LANE_1_0  UPHY14_TRX_ANAREG_BOT_20.BF.DFE_RES_F0_LANE_1_0
#define reg_SMPLR_CAL_SEL_LANE_2_0  UPHY14_TRX_ANAREG_BOT_20.BF.SMPLR_CAL_SEL_LANE_2_0

// 0x15	UPHY14_TRX_ANAREG_BOT_21		Analog Register 21
typedef union {
	struct {
		uint8_t EN_DFE_F8TO15_LANE                       : 1;	/*      0     r/w   1*/
		uint8_t EN_DFE_F4TO7_LANE                        : 1;	/*      1     r/w   1*/
		uint8_t EN_DFE_F1TO3_LANE                        : 1;	/*      2     r/w   1*/
		uint8_t EN_DFE_F0_LANE                           : 1;	/*      3     r/w   1*/
		uint8_t PU_VCM_LANE                              : 1;	/*      4     r/w   1*/
		uint8_t DFE_RES_FLOATING_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t DFE_RES_F8TO15_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t DFE_RES_F567_LANE                        : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_21_t;
__xdata __at( 0x54 ) volatile UPHY14_TRX_ANAREG_BOT_21_t UPHY14_TRX_ANAREG_BOT_21;
#define reg_EN_DFE_F8TO15_LANE  UPHY14_TRX_ANAREG_BOT_21.BF.EN_DFE_F8TO15_LANE
#define reg_EN_DFE_F4TO7_LANE  UPHY14_TRX_ANAREG_BOT_21.BF.EN_DFE_F4TO7_LANE
#define reg_EN_DFE_F1TO3_LANE  UPHY14_TRX_ANAREG_BOT_21.BF.EN_DFE_F1TO3_LANE
#define reg_EN_DFE_F0_LANE  UPHY14_TRX_ANAREG_BOT_21.BF.EN_DFE_F0_LANE
#define reg_PU_VCM_LANE  UPHY14_TRX_ANAREG_BOT_21.BF.PU_VCM_LANE
#define reg_DFE_RES_FLOATING_LANE  UPHY14_TRX_ANAREG_BOT_21.BF.DFE_RES_FLOATING_LANE
#define reg_DFE_RES_F8TO15_LANE  UPHY14_TRX_ANAREG_BOT_21.BF.DFE_RES_F8TO15_LANE
#define reg_DFE_RES_F567_LANE  UPHY14_TRX_ANAREG_BOT_21.BF.DFE_RES_F567_LANE

// 0x16	UPHY14_TRX_ANAREG_BOT_22		Analog Register 22
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t DFE_RES_DOUBLE_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t PATH_DISABLE_S_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t PATH_DISABLE_D_LANE                      : 1;	/*      3     r/w   0*/
		uint8_t EOM_EN_E_LANE                            : 1;	/*      4     r/w   0*/
		uint8_t EOM_EN_D_LANE                            : 1;	/*      5     r/w   0*/
		uint8_t EOM_EN_S_LANE                            : 1;	/*      6     r/w   0*/
		uint8_t EN_DFE_FLOATING_LANE                     : 1;	/*      7     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_22_t;
__xdata __at( 0x58 ) volatile UPHY14_TRX_ANAREG_BOT_22_t UPHY14_TRX_ANAREG_BOT_22;
#define reg_DFE_RES_DOUBLE_LANE  UPHY14_TRX_ANAREG_BOT_22.BF.DFE_RES_DOUBLE_LANE
#define reg_PATH_DISABLE_S_LANE  UPHY14_TRX_ANAREG_BOT_22.BF.PATH_DISABLE_S_LANE
#define reg_PATH_DISABLE_D_LANE  UPHY14_TRX_ANAREG_BOT_22.BF.PATH_DISABLE_D_LANE
#define reg_EOM_EN_E_LANE  UPHY14_TRX_ANAREG_BOT_22.BF.EOM_EN_E_LANE
#define reg_EOM_EN_D_LANE  UPHY14_TRX_ANAREG_BOT_22.BF.EOM_EN_D_LANE
#define reg_EOM_EN_S_LANE  UPHY14_TRX_ANAREG_BOT_22.BF.EOM_EN_S_LANE
#define reg_EN_DFE_FLOATING_LANE  UPHY14_TRX_ANAREG_BOT_22.BF.EN_DFE_FLOATING_LANE

// 0x17	UPHY14_TRX_ANAREG_BOT_23		Analog Register 23
typedef union {
	struct {
		uint8_t PU_F1N_S_E_LANE                          : 1;	/*      0     r/w   1*/
		uint8_t PU_F1P_S_E_LANE                          : 1;	/*      1     r/w   1*/
		uint8_t PU_F1N_D_E_LANE                          : 1;	/*      2     r/w   1*/
		uint8_t PU_F1P_D_E_LANE                          : 1;	/*      3     r/w   1*/
		uint8_t DFE_CLK_DLY_LANE_1_0                     : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t DFE_XLAT_SEL_LANE_1_0                    : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_23_t;
__xdata __at( 0x5c ) volatile UPHY14_TRX_ANAREG_BOT_23_t UPHY14_TRX_ANAREG_BOT_23;
#define reg_PU_F1N_S_E_LANE  UPHY14_TRX_ANAREG_BOT_23.BF.PU_F1N_S_E_LANE
#define reg_PU_F1P_S_E_LANE  UPHY14_TRX_ANAREG_BOT_23.BF.PU_F1P_S_E_LANE
#define reg_PU_F1N_D_E_LANE  UPHY14_TRX_ANAREG_BOT_23.BF.PU_F1N_D_E_LANE
#define reg_PU_F1P_D_E_LANE  UPHY14_TRX_ANAREG_BOT_23.BF.PU_F1P_D_E_LANE
#define reg_DFE_CLK_DLY_LANE_1_0  UPHY14_TRX_ANAREG_BOT_23.BF.DFE_CLK_DLY_LANE_1_0
#define reg_DFE_XLAT_SEL_LANE_1_0  UPHY14_TRX_ANAREG_BOT_23.BF.DFE_XLAT_SEL_LANE_1_0

// 0x18	UPHY14_TRX_ANAREG_BOT_24		Analog Register 24
typedef union {
	struct {
		uint8_t TX_IDLECM_CAL_EN_LANE                    : 1;	/*      0     r/w   0*/
		uint8_t TX_TDCAL_EN_LANE                         : 1;	/*      1     r/w   0*/
		uint8_t VDDA_RXCLK_HALF_EN_LANE                  : 1;	/*      2     r/w   1*/
		uint8_t VDDA_RXDLL_HALF_EN_LANE                  : 1;	/*      3     r/w   1*/
		uint8_t PU_F1N_S_O_LANE                          : 1;	/*      4     r/w   1*/
		uint8_t PU_F1P_S_O_LANE                          : 1;	/*      5     r/w   1*/
		uint8_t PU_F1N_D_O_LANE                          : 1;	/*      6     r/w   1*/
		uint8_t PU_F1P_D_O_LANE                          : 1;	/*      7     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_24_t;
__xdata __at( 0x60 ) volatile UPHY14_TRX_ANAREG_BOT_24_t UPHY14_TRX_ANAREG_BOT_24;
#define reg_TX_IDLECM_CAL_EN_LANE  UPHY14_TRX_ANAREG_BOT_24.BF.TX_IDLECM_CAL_EN_LANE
#define reg_TX_TDCAL_EN_LANE  UPHY14_TRX_ANAREG_BOT_24.BF.TX_TDCAL_EN_LANE
#define reg_VDDA_RXCLK_HALF_EN_LANE  UPHY14_TRX_ANAREG_BOT_24.BF.VDDA_RXCLK_HALF_EN_LANE
#define reg_VDDA_RXDLL_HALF_EN_LANE  UPHY14_TRX_ANAREG_BOT_24.BF.VDDA_RXDLL_HALF_EN_LANE
#define reg_PU_F1N_S_O_LANE  UPHY14_TRX_ANAREG_BOT_24.BF.PU_F1N_S_O_LANE
#define reg_PU_F1P_S_O_LANE  UPHY14_TRX_ANAREG_BOT_24.BF.PU_F1P_S_O_LANE
#define reg_PU_F1N_D_O_LANE  UPHY14_TRX_ANAREG_BOT_24.BF.PU_F1N_D_O_LANE
#define reg_PU_F1P_D_O_LANE  UPHY14_TRX_ANAREG_BOT_24.BF.PU_F1P_D_O_LANE

// 0x19	UPHY14_TRX_ANAREG_BOT_25		Analog Register 25
typedef union {
	struct {
		uint8_t TX_TXCLK_32T_EN_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t TX_TXCLK_ALIGN_EN_LANE                   : 1;	/*      1     r/w   0*/
		uint8_t VDDA_RXINTP_HALF_EN_LANE                 : 1;	/*      2     r/w   0*/
		uint8_t TX_IDLECM_DIG_LANE_4_0                   : 5;	/*  [7:3]     r/w 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_25_t;
__xdata __at( 0x64 ) volatile UPHY14_TRX_ANAREG_BOT_25_t UPHY14_TRX_ANAREG_BOT_25;
#define reg_TX_TXCLK_32T_EN_LANE  UPHY14_TRX_ANAREG_BOT_25.BF.TX_TXCLK_32T_EN_LANE
#define reg_TX_TXCLK_ALIGN_EN_LANE  UPHY14_TRX_ANAREG_BOT_25.BF.TX_TXCLK_ALIGN_EN_LANE
#define reg_VDDA_RXINTP_HALF_EN_LANE  UPHY14_TRX_ANAREG_BOT_25.BF.VDDA_RXINTP_HALF_EN_LANE
#define reg_TX_IDLECM_DIG_LANE_4_0  UPHY14_TRX_ANAREG_BOT_25.BF.TX_IDLECM_DIG_LANE_4_0

// 0x1a	UPHY14_TRX_ANAREG_BOT_26		Analog Register 26
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t AVDD1815_SEL_LANE                        : 1;	/*      4     r/w   1*/
		uint8_t TX_TXCLK_2X_EN_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t TX_TXCLK_8T_EN_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t TX_TXCLK_34T_EN_LANE                     : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_26_t;
__xdata __at( 0x68 ) volatile UPHY14_TRX_ANAREG_BOT_26_t UPHY14_TRX_ANAREG_BOT_26;
#define reg_AVDD1815_SEL_LANE  UPHY14_TRX_ANAREG_BOT_26.BF.AVDD1815_SEL_LANE
#define reg_TX_TXCLK_2X_EN_LANE  UPHY14_TRX_ANAREG_BOT_26.BF.TX_TXCLK_2X_EN_LANE
#define reg_TX_TXCLK_8T_EN_LANE  UPHY14_TRX_ANAREG_BOT_26.BF.TX_TXCLK_8T_EN_LANE
#define reg_TX_TXCLK_34T_EN_LANE  UPHY14_TRX_ANAREG_BOT_26.BF.TX_TXCLK_34T_EN_LANE

// 0x1b	UPHY14_TRX_ANAREG_BOT_27		Analog Register 27
typedef union {
	struct {
		uint8_t FFE_CS2_TEMP_LANE_3_0                    : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t FORCE_CLK_DIRECTION_RINGPLL_LANE         : 1;	/*      4     r/w   0*/
		uint8_t CLK_BKWD_DIRECTION_RINGPLL_LANE          : 1;	/*      5     r/w   0*/
		uint8_t CLK_BKWD_DIRECTION_LCPLL_LANE            : 1;	/*      6     r/w   0*/
		uint8_t CLK_BKWD2_DIRECTION_RING_LANE            : 1;	/*      7     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_27_t;
__xdata __at( 0x6c ) volatile UPHY14_TRX_ANAREG_BOT_27_t UPHY14_TRX_ANAREG_BOT_27;
#define reg_FFE_CS2_TEMP_LANE_3_0  UPHY14_TRX_ANAREG_BOT_27.BF.FFE_CS2_TEMP_LANE_3_0
#define reg_FORCE_CLK_DIRECTION_RINGPLL_LANE  UPHY14_TRX_ANAREG_BOT_27.BF.FORCE_CLK_DIRECTION_RINGPLL_LANE
#define reg_CLK_BKWD_DIRECTION_RINGPLL_LANE  UPHY14_TRX_ANAREG_BOT_27.BF.CLK_BKWD_DIRECTION_RINGPLL_LANE
#define reg_CLK_BKWD_DIRECTION_LCPLL_LANE  UPHY14_TRX_ANAREG_BOT_27.BF.CLK_BKWD_DIRECTION_LCPLL_LANE
#define reg_CLK_BKWD2_DIRECTION_RING_LANE  UPHY14_TRX_ANAREG_BOT_27.BF.CLK_BKWD2_DIRECTION_RING_LANE

// 0x1c	UPHY14_TRX_ANAREG_BOT_28		Analog Register 28
typedef union {
	struct {
		uint8_t IPP_FFE_CUR_SEL_LANE_2_0                 : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t ALIGN90_8G_EN_LANE                       : 1;	/*      3     r/w 1'b0*/
		uint8_t IPP_SLLP_CUR_SEL_LANE_2_0                : 3;	/*  [6:4]     r/w 3'h2*/
		uint8_t CLK_FWD2_DIRECTION_RING_LANE             : 1;	/*      7     r/w   1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_28_t;
__xdata __at( 0x70 ) volatile UPHY14_TRX_ANAREG_BOT_28_t UPHY14_TRX_ANAREG_BOT_28;
#define reg_IPP_FFE_CUR_SEL_LANE_2_0  UPHY14_TRX_ANAREG_BOT_28.BF.IPP_FFE_CUR_SEL_LANE_2_0
#define reg_ALIGN90_8G_EN_LANE  UPHY14_TRX_ANAREG_BOT_28.BF.ALIGN90_8G_EN_LANE
#define reg_IPP_SLLP_CUR_SEL_LANE_2_0  UPHY14_TRX_ANAREG_BOT_28.BF.IPP_SLLP_CUR_SEL_LANE_2_0
#define reg_CLK_FWD2_DIRECTION_RING_LANE  UPHY14_TRX_ANAREG_BOT_28.BF.CLK_FWD2_DIRECTION_RING_LANE

// 0x1d	UPHY14_TRX_ANAREG_BOT_29		Analog Register 29
typedef union {
	struct {
		uint8_t FORCE_CLK_DIRECTION_LCPLL_LANE           : 1;	/*      0     r/w 1'b0*/
		uint8_t IPTAT_SLLP_CUR_SEL_LANE_1_0              : 2;	/*  [2:1]     r/w 2'h2*/
		uint8_t IPTAT_FFE_CUR_SEL_LANE_2_0               : 3;	/*  [5:3]     r/w 3'h4*/
		uint8_t DLL_FREQ_SEL_LANE_2                      : 1;	/*      6     r/w 1'h1*/
		uint8_t EOM_DLL_FREQ_SEL_LANE_2                  : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_29_t;
__xdata __at( 0x74 ) volatile UPHY14_TRX_ANAREG_BOT_29_t UPHY14_TRX_ANAREG_BOT_29;
#define reg_FORCE_CLK_DIRECTION_LCPLL_LANE  UPHY14_TRX_ANAREG_BOT_29.BF.FORCE_CLK_DIRECTION_LCPLL_LANE
#define reg_IPTAT_SLLP_CUR_SEL_LANE_1_0  UPHY14_TRX_ANAREG_BOT_29.BF.IPTAT_SLLP_CUR_SEL_LANE_1_0
#define reg_IPTAT_FFE_CUR_SEL_LANE_2_0  UPHY14_TRX_ANAREG_BOT_29.BF.IPTAT_FFE_CUR_SEL_LANE_2_0
#define reg_DLL_FREQ_SEL_LANE_2  UPHY14_TRX_ANAREG_BOT_29.BF.DLL_FREQ_SEL_LANE_2
#define reg_EOM_DLL_FREQ_SEL_LANE_2  UPHY14_TRX_ANAREG_BOT_29.BF.EOM_DLL_FREQ_SEL_LANE_2

// 0x1e	UPHY14_TRX_ANAREG_BOT_30		Analog Register 30
typedef union {
	struct {
		uint8_t TXCLK_NT_CTRL_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'b00*/
		uint8_t TXCLK_NT_FIX_DIV_EN_LANE                 : 1;	/*      2     r/w 1'b0*/
		uint8_t TXCLK_NT_DIV_LANE_4_0                    : 5;	/*  [7:3]     r/w 5'h1e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_30_t;
__xdata __at( 0x78 ) volatile UPHY14_TRX_ANAREG_BOT_30_t UPHY14_TRX_ANAREG_BOT_30;
#define reg_TXCLK_NT_CTRL_LANE_1_0  UPHY14_TRX_ANAREG_BOT_30.BF.TXCLK_NT_CTRL_LANE_1_0
#define reg_TXCLK_NT_FIX_DIV_EN_LANE  UPHY14_TRX_ANAREG_BOT_30.BF.TXCLK_NT_FIX_DIV_EN_LANE
#define reg_TXCLK_NT_DIV_LANE_4_0  UPHY14_TRX_ANAREG_BOT_30.BF.TXCLK_NT_DIV_LANE_4_0

// 0x1f	UPHY14_TRX_ANAREG_BOT_31		Analog Register 31
typedef union {
	struct {
		uint8_t ANA_RSVD8_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_31_t;
__xdata __at( 0x7c ) volatile UPHY14_TRX_ANAREG_BOT_31_t UPHY14_TRX_ANAREG_BOT_31;
#define reg_ANA_RSVD8_LANE_7_0  UPHY14_TRX_ANAREG_BOT_31.BF.ANA_RSVD8_LANE_7_0

// 0x20	UPHY14_TRX_ANAREG_BOT_32		Analog Register 32
typedef union {
	struct {
		uint8_t ANA_RSVD9_LANE_7_0                       : 8;	/*  [7:0]     r/w 8'hf0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_32_t;
__xdata __at( 0x80 ) volatile UPHY14_TRX_ANAREG_BOT_32_t UPHY14_TRX_ANAREG_BOT_32;
#define reg_ANA_RSVD9_LANE_7_0  UPHY14_TRX_ANAREG_BOT_32.BF.ANA_RSVD9_LANE_7_0

// 0x21	UPHY14_TRX_ANAREG_BOT_33		Analog Register 33
typedef union {
	struct {
		uint8_t TRX_DIG_CAL2M_DIV_BOT_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_33_t;
__xdata __at( 0x84 ) volatile UPHY14_TRX_ANAREG_BOT_33_t UPHY14_TRX_ANAREG_BOT_33;
#define reg_TRX_DIG_CAL2M_DIV_BOT_LANE_7_0  UPHY14_TRX_ANAREG_BOT_33.BF.TRX_DIG_CAL2M_DIV_BOT_LANE_7_0

// 0x22	UPHY14_TRX_ANAREG_BOT_34		Analog Register 34
typedef union {
	struct {
		uint8_t TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0         : 4;	/*  [3:0]     r/w   0*/
		uint8_t TRX_DIG_CAL_CLK_EN_BOT_LANE              : 1;	/*      4     r/w   1*/
		uint8_t TRX_DIG_CAL_CLK_RST_BOT_LANE             : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} UPHY14_TRX_ANAREG_BOT_34_t;
__xdata __at( 0x88 ) volatile UPHY14_TRX_ANAREG_BOT_34_t UPHY14_TRX_ANAREG_BOT_34;
#define reg_TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0  UPHY14_TRX_ANAREG_BOT_34.BF.TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0
#define reg_TRX_DIG_CAL_CLK_EN_BOT_LANE  UPHY14_TRX_ANAREG_BOT_34.BF.TRX_DIG_CAL_CLK_EN_BOT_LANE
#define reg_TRX_DIG_CAL_CLK_RST_BOT_LANE  UPHY14_TRX_ANAREG_BOT_34.BF.TRX_DIG_CAL_CLK_RST_BOT_LANE

#endif
