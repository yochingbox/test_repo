#ifndef PHY_REG_C_ANA_TRX_IVREF_LANE_H
#define PHY_REG_C_ANA_TRX_IVREF_LANE_H



// 0x0	ANA_RX_PI_REG0		
typedef union {
	struct {
		uint8_t RX_PI_ICCLOW_CTRL_LANE_3_0               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_PI_REG0_t;
__xdata __at( 0x1600 ) volatile ANA_RX_PI_REG0_t ANA_RX_PI_REG0;
#define reg_RX_PI_ICCLOW_CTRL_LANE_3_0  ANA_RX_PI_REG0.BF.RX_PI_ICCLOW_CTRL_LANE_3_0

// 0x1	ANA_RX_PI_REG1		
typedef union {
	struct {
		uint8_t RX_PI_ICC_CTRL_LANE_3_0                  : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_RX_PI_REG1_t;
__xdata __at( 0x1604 ) volatile ANA_RX_PI_REG1_t ANA_RX_PI_REG1;
#define reg_RX_PI_ICC_CTRL_LANE_3_0  ANA_RX_PI_REG1.BF.RX_PI_ICC_CTRL_LANE_3_0

// 0x2	ANA_TXIMP_TEMPC_REG		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t TRX_CKMUX_EN_LANE                        : 1;	/*      5     r/w   1*/
		uint8_t TXIMP_TEMPC_ICCN_EN_LANE                 : 1;	/*      6     r/w   0*/
		uint8_t TXIMP_TEMPC_ICCP_EN_LANE                 : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_TEMPC_REG_t;
__xdata __at( 0x1608 ) volatile ANA_TXIMP_TEMPC_REG_t ANA_TXIMP_TEMPC_REG;
#define reg_TRX_CKMUX_EN_LANE  ANA_TXIMP_TEMPC_REG.BF.TRX_CKMUX_EN_LANE
#define reg_TXIMP_TEMPC_ICCN_EN_LANE  ANA_TXIMP_TEMPC_REG.BF.TXIMP_TEMPC_ICCN_EN_LANE
#define reg_TXIMP_TEMPC_ICCP_EN_LANE  ANA_TXIMP_TEMPC_REG.BF.TXIMP_TEMPC_ICCP_EN_LANE

// 0x3	VDDA_CAL_SEL_REG		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t VDDA_CAL_EN_TRX_LANE                     : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} VDDA_CAL_SEL_REG_t;
__xdata __at( 0x160c ) volatile VDDA_CAL_SEL_REG_t VDDA_CAL_SEL_REG;
#define reg_VDDA_CAL_EN_TRX_LANE  VDDA_CAL_SEL_REG.BF.VDDA_CAL_EN_TRX_LANE

// 0x4	TRX_SELV_REG0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG0_t;
__xdata __at( 0x1610 ) volatile TRX_SELV_REG0_t TRX_SELV_REG0;

// 0x5	TRX_SELV_REG1		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG1_t;
__xdata __at( 0x1614 ) volatile TRX_SELV_REG1_t TRX_SELV_REG1;

// 0x6	TRX_SELV_REG2		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG2_t;
__xdata __at( 0x1618 ) volatile TRX_SELV_REG2_t TRX_SELV_REG2;

// 0x7	TRX_SELV_REG3		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG3_t;
__xdata __at( 0x161c ) volatile TRX_SELV_REG3_t TRX_SELV_REG3;

// 0x8	TRX_SELV_REG4		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG4_t;
__xdata __at( 0x1620 ) volatile TRX_SELV_REG4_t TRX_SELV_REG4;

// 0x9	TRX_SELV_REG5		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG5_t;
__xdata __at( 0x1624 ) volatile TRX_SELV_REG5_t TRX_SELV_REG5;

// 0xa	TRX_SELV_REG6		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG6_t;
__xdata __at( 0x1628 ) volatile TRX_SELV_REG6_t TRX_SELV_REG6;

// 0xb	TRX_SELV_REG7		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG7_t;
__xdata __at( 0x162c ) volatile TRX_SELV_REG7_t TRX_SELV_REG7;

// 0xc	TRX_SELV_REG8		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG8_t;
__xdata __at( 0x1630 ) volatile TRX_SELV_REG8_t TRX_SELV_REG8;

// 0xd	TRX_SELV_REG9		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG9_t;
__xdata __at( 0x1634 ) volatile TRX_SELV_REG9_t TRX_SELV_REG9;

// 0xe	TRX_SELV_REG10		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG10_t;
__xdata __at( 0x1638 ) volatile TRX_SELV_REG10_t TRX_SELV_REG10;

// 0xf	TRX_SELV_REG11		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG11_t;
__xdata __at( 0x163c ) volatile TRX_SELV_REG11_t TRX_SELV_REG11;

// 0x10	TRX_SELV_REG12		
typedef union {
	struct {
		uint8_t SELLV_TXLBCLK_LANE_4_0                   : 5;	/*  [4:0]     r/w 5'h14*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG12_t;
__xdata __at( 0x1640 ) volatile TRX_SELV_REG12_t TRX_SELV_REG12;
#define reg_SELLV_TXLBCLK_LANE_4_0  TRX_SELV_REG12.BF.SELLV_TXLBCLK_LANE_4_0

// 0x11	TRX_SELV_REG13		
typedef union {
	struct {
		uint8_t SELLV_TXLBDATA_LANE_4_0                  : 5;	/*  [4:0]     r/w 5'h14*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG13_t;
__xdata __at( 0x1644 ) volatile TRX_SELV_REG13_t TRX_SELV_REG13;
#define reg_SELLV_TXLBDATA_LANE_4_0  TRX_SELV_REG13.BF.SELLV_TXLBDATA_LANE_4_0

// 0x12	TRX_SELV_REG14		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 5;	/*  [4:0]     r/w 5'h0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SELV_REG14_t;
__xdata __at( 0x1648 ) volatile TRX_SELV_REG14_t TRX_SELV_REG14;

// 0x13	TRXIVREF_RSVD_REG0		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD0_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG0_t;
__xdata __at( 0x164c ) volatile TRXIVREF_RSVD_REG0_t TRXIVREF_RSVD_REG0;
#define reg_TRXIVREF_RSVD0_LANE_7_0  TRXIVREF_RSVD_REG0.BF.TRXIVREF_RSVD0_LANE_7_0

// 0x14	TRXIVREF_RSVD_REG1		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD1_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG1_t;
__xdata __at( 0x1650 ) volatile TRXIVREF_RSVD_REG1_t TRXIVREF_RSVD_REG1;
#define reg_TRXIVREF_RSVD1_LANE_7_0  TRXIVREF_RSVD_REG1.BF.TRXIVREF_RSVD1_LANE_7_0

// 0x15	TRXIVREF_RSVD_REG2		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD2_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG2_t;
__xdata __at( 0x1654 ) volatile TRXIVREF_RSVD_REG2_t TRXIVREF_RSVD_REG2;
#define reg_TRXIVREF_RSVD2_LANE_7_0  TRXIVREF_RSVD_REG2.BF.TRXIVREF_RSVD2_LANE_7_0

// 0x16	TRXIVREF_RSVD_REG3		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD3_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG3_t;
__xdata __at( 0x1658 ) volatile TRXIVREF_RSVD_REG3_t TRXIVREF_RSVD_REG3;
#define reg_TRXIVREF_RSVD3_LANE_7_0  TRXIVREF_RSVD_REG3.BF.TRXIVREF_RSVD3_LANE_7_0

// 0x17	TRXIVREF_RSVD_REG4		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD4_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG4_t;
__xdata __at( 0x165c ) volatile TRXIVREF_RSVD_REG4_t TRXIVREF_RSVD_REG4;
#define reg_TRXIVREF_RSVD4_LANE_7_0  TRXIVREF_RSVD_REG4.BF.TRXIVREF_RSVD4_LANE_7_0

// 0x18	TRXIVREF_RSVD_REG5		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD5_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG5_t;
__xdata __at( 0x1660 ) volatile TRXIVREF_RSVD_REG5_t TRXIVREF_RSVD_REG5;
#define reg_TRXIVREF_RSVD5_LANE_7_0  TRXIVREF_RSVD_REG5.BF.TRXIVREF_RSVD5_LANE_7_0

// 0x19	TRXIVREF_RSVD_REG6		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD6_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG6_t;
__xdata __at( 0x1664 ) volatile TRXIVREF_RSVD_REG6_t TRXIVREF_RSVD_REG6;
#define reg_TRXIVREF_RSVD6_LANE_7_0  TRXIVREF_RSVD_REG6.BF.TRXIVREF_RSVD6_LANE_7_0

// 0x1a	TRXIVREF_RSVD_REG7		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD7_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG7_t;
__xdata __at( 0x1668 ) volatile TRXIVREF_RSVD_REG7_t TRXIVREF_RSVD_REG7;
#define reg_TRXIVREF_RSVD7_LANE_7_0  TRXIVREF_RSVD_REG7.BF.TRXIVREF_RSVD7_LANE_7_0

// 0x1b	TRXIVREF_RSVD_REG8		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD8_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG8_t;
__xdata __at( 0x166c ) volatile TRXIVREF_RSVD_REG8_t TRXIVREF_RSVD_REG8;
#define reg_TRXIVREF_RSVD8_LANE_7_0  TRXIVREF_RSVD_REG8.BF.TRXIVREF_RSVD8_LANE_7_0

// 0x1c	TRXIVREF_RSVD_REG9		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD9_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG9_t;
__xdata __at( 0x1670 ) volatile TRXIVREF_RSVD_REG9_t TRXIVREF_RSVD_REG9;
#define reg_TRXIVREF_RSVD9_LANE_7_0  TRXIVREF_RSVD_REG9.BF.TRXIVREF_RSVD9_LANE_7_0

// 0x1d	TRX_PD_REG		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 3;	/*  [2:0]     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t TS_PD_REG_LANE_1_0                       : 2;	/*  [5:4]     r/w 2'h3*/
		uint8_t RS_PD_REG_LANE_1_0                       : 2;	/*  [7:6]     r/w 2'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_PD_REG_t;
__xdata __at( 0x1674 ) volatile TRX_PD_REG_t TRX_PD_REG;
#define reg_TS_PD_REG_LANE_1_0  TRX_PD_REG.BF.TS_PD_REG_LANE_1_0
#define reg_RS_PD_REG_LANE_1_0  TRX_PD_REG.BF.RS_PD_REG_LANE_1_0

// 0x1e	TRX_MASTER_CUR_SEL		
typedef union {
	struct {
		uint8_t TRX_MASTER_CUR_SEL_LANE_2_0              : 3;	/*  [2:0]     r/w 3'h4*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_MASTER_CUR_SEL_t;
__xdata __at( 0x1678 ) volatile TRX_MASTER_CUR_SEL_t TRX_MASTER_CUR_SEL;
#define reg_TRX_MASTER_CUR_SEL_LANE_2_0  TRX_MASTER_CUR_SEL.BF.TRX_MASTER_CUR_SEL_LANE_2_0

// 0x1f	TRX_MAS_REG_VOUT_CTRL		
typedef union {
	struct {
		uint8_t TRX_MAS_REG_VOUT_CTRL_LANE_1_0           : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_MAS_REG_VOUT_CTRL_t;
__xdata __at( 0x167c ) volatile TRX_MAS_REG_VOUT_CTRL_t TRX_MAS_REG_VOUT_CTRL;
#define reg_TRX_MAS_REG_VOUT_CTRL_LANE_1_0  TRX_MAS_REG_VOUT_CTRL.BF.TRX_MAS_REG_VOUT_CTRL_LANE_1_0

// 0x20	TRX_MIS_REG		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 2;	/*  [1:0]     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_MIS_REG_t;
__xdata __at( 0x1680 ) volatile TRX_MIS_REG_t TRX_MIS_REG;

// 0x21	TRX_RESERV_VG		
typedef union {
	struct {
		uint8_t TRX_RESERV_VG_LANE                       : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_RESERV_VG_t;
__xdata __at( 0x1684 ) volatile TRX_RESERV_VG_t TRX_RESERV_VG;
#define reg_TRX_RESERV_VG_LANE  TRX_RESERV_VG.BF.TRX_RESERV_VG_LANE

// 0x22	TRX_TEST_EN		
typedef union {
	struct {
		uint8_t TRX_TEST_EN_LANE                         : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_TEST_EN_t;
__xdata __at( 0x1688 ) volatile TRX_TEST_EN_t TRX_TEST_EN;
#define reg_TRX_TEST_EN_LANE  TRX_TEST_EN.BF.TRX_TEST_EN_LANE

// 0x23	VDDR_VREF_SEL_REG0		
typedef union {
	struct {
		uint8_t VDDR_DLL_VREF_SEL_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} VDDR_VREF_SEL_REG0_t;
__xdata __at( 0x168c ) volatile VDDR_VREF_SEL_REG0_t VDDR_VREF_SEL_REG0;
#define reg_VDDR_DLL_VREF_SEL_LANE_2_0  VDDR_VREF_SEL_REG0.BF.VDDR_DLL_VREF_SEL_LANE_2_0

// 0x24	VDDR_VREF_SEL_REG1		
typedef union {
	struct {
		uint8_t VDDR_PI_VREF_SEL_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} VDDR_VREF_SEL_REG1_t;
__xdata __at( 0x1690 ) volatile VDDR_VREF_SEL_REG1_t VDDR_VREF_SEL_REG1;
#define reg_VDDR_PI_VREF_SEL_LANE_2_0  VDDR_VREF_SEL_REG1.BF.VDDR_PI_VREF_SEL_LANE_2_0

// 0x25	VDDR_VREF_SEL_REG2		
typedef union {
	struct {
		uint8_t VDDR_A90_VREF_SEL_LANE_2_0               : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} VDDR_VREF_SEL_REG2_t;
__xdata __at( 0x1694 ) volatile VDDR_VREF_SEL_REG2_t VDDR_VREF_SEL_REG2;
#define reg_VDDR_A90_VREF_SEL_LANE_2_0  VDDR_VREF_SEL_REG2.BF.VDDR_A90_VREF_SEL_LANE_2_0

// 0x26	VDDR_VREF_SEL_REG3		
typedef union {
	struct {
		uint8_t VDDR_ADC_THCLK_VREF_SEL_LANE_2_0         : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} VDDR_VREF_SEL_REG3_t;
__xdata __at( 0x1698 ) volatile VDDR_VREF_SEL_REG3_t VDDR_VREF_SEL_REG3;
#define reg_VDDR_ADC_THCLK_VREF_SEL_LANE_2_0  VDDR_VREF_SEL_REG3.BF.VDDR_ADC_THCLK_VREF_SEL_LANE_2_0

// 0x27	VDDR_VREF_SEL_REG4		
typedef union {
	struct {
		uint8_t VDDR_ADC_DRV_VREF_SEL_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} VDDR_VREF_SEL_REG4_t;
__xdata __at( 0x169c ) volatile VDDR_VREF_SEL_REG4_t VDDR_VREF_SEL_REG4;
#define reg_VDDR_ADC_DRV_VREF_SEL_LANE_2_0  VDDR_VREF_SEL_REG4.BF.VDDR_ADC_DRV_VREF_SEL_LANE_2_0

// 0x28	VDDR_VREF_SEL_REG5		
typedef union {
	struct {
		uint8_t VDDR_RX_VDDL_VREF_SEL_LANE_2_0           : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} VDDR_VREF_SEL_REG5_t;
__xdata __at( 0x16a0 ) volatile VDDR_VREF_SEL_REG5_t VDDR_VREF_SEL_REG5;
#define reg_VDDR_RX_VDDL_VREF_SEL_LANE_2_0  VDDR_VREF_SEL_REG5.BF.VDDR_RX_VDDL_VREF_SEL_LANE_2_0

// 0x29	VDDR_VREF_SEL_REG6		
typedef union {
	struct {
		uint8_t VDDR_TXDATA_VREF_SEL_LANE_2_0            : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} VDDR_VREF_SEL_REG6_t;
__xdata __at( 0x16a4 ) volatile VDDR_VREF_SEL_REG6_t VDDR_VREF_SEL_REG6;
#define reg_VDDR_TXDATA_VREF_SEL_LANE_2_0  VDDR_VREF_SEL_REG6.BF.VDDR_TXDATA_VREF_SEL_LANE_2_0

// 0x2a	VDDR_VREF_SEL_REG7		
typedef union {
	struct {
		uint8_t VDDR_TXCLK_VREF_SEL_LANE_2_0             : 3;	/*  [2:0]     r/w 3'h3*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} VDDR_VREF_SEL_REG7_t;
__xdata __at( 0x16a8 ) volatile VDDR_VREF_SEL_REG7_t VDDR_VREF_SEL_REG7;
#define reg_VDDR_TXCLK_VREF_SEL_LANE_2_0  VDDR_VREF_SEL_REG7.BF.VDDR_TXCLK_VREF_SEL_LANE_2_0

// 0x2b	TRX_SHRTR_REG		
typedef union {
	struct {
		uint8_t TRX_SHRTR_FORCE_LANE                     : 1;	/*      0     r/w   0*/
		uint8_t TRX_SHRTR_LANE                           : 1;	/*      1     r/w   0*/
		uint8_t TRX_PULUP_LANE                           : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_SHRTR_REG_t;
__xdata __at( 0x16ac ) volatile TRX_SHRTR_REG_t TRX_SHRTR_REG;
#define reg_TRX_SHRTR_FORCE_LANE  TRX_SHRTR_REG.BF.TRX_SHRTR_FORCE_LANE
#define reg_TRX_SHRTR_LANE  TRX_SHRTR_REG.BF.TRX_SHRTR_LANE
#define reg_TRX_PULUP_LANE  TRX_SHRTR_REG.BF.TRX_PULUP_LANE

// 0x2c	TRX_PULLUP_RXTX_SEL_REG		
typedef union {
	struct {
		uint8_t TRX_PULLUP_RXTX_SEL_LANE_1_0             : 2;	/*  [1:0]     r/w 2'h2*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_PULLUP_RXTX_SEL_REG_t;
__xdata __at( 0x16b0 ) volatile TRX_PULLUP_RXTX_SEL_REG_t TRX_PULLUP_RXTX_SEL_REG;
#define reg_TRX_PULLUP_RXTX_SEL_LANE_1_0  TRX_PULLUP_RXTX_SEL_REG.BF.TRX_PULLUP_RXTX_SEL_LANE_1_0

// 0x2d	TRX_CAL_REG0		Digital trx Calibration Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t TRX_DIG_CAL_CLK_RST_BOT_LANE             : 1;	/*      6     r/w 1'h0*/
		uint8_t TRX_DIG_CAL_CLK_EN_BOT_LANE              : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG0_t;
__xdata __at( 0x16b4 ) volatile TRX_CAL_REG0_t TRX_CAL_REG0;
#define reg_TRX_DIG_CAL_CLK_RST_BOT_LANE  TRX_CAL_REG0.BF.TRX_DIG_CAL_CLK_RST_BOT_LANE
#define reg_TRX_DIG_CAL_CLK_EN_BOT_LANE  TRX_CAL_REG0.BF.TRX_DIG_CAL_CLK_EN_BOT_LANE

// 0x2e	TRX_CAL_REG1		Digital trx Calibration Register 1
typedef union {
	struct {
		uint8_t TRX_DIG_CAL2M_DIV_BOT_LANE_7_0           : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG1_t;
__xdata __at( 0x16b8 ) volatile TRX_CAL_REG1_t TRX_CAL_REG1;
#define reg_TRX_DIG_CAL2M_DIV_BOT_LANE_7_0  TRX_CAL_REG1.BF.TRX_DIG_CAL2M_DIV_BOT_LANE_7_0

// 0x2f	TRX_CAL_REG2		Digital TRX Calibration Register 2
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0         : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRX_CAL_REG2_t;
__xdata __at( 0x16bc ) volatile TRX_CAL_REG2_t TRX_CAL_REG2;
#define reg_TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0  TRX_CAL_REG2.BF.TRX_DIG_TESTBUS_SEL_BOT_LANE_3_0

#endif
