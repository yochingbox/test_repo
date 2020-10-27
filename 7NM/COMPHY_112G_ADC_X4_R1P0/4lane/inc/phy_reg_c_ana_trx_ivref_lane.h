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
__xdata __at( 0x600 ) volatile ANA_RX_PI_REG0_t ANA_RX_PI_REG0;
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
__xdata __at( 0x604 ) volatile ANA_RX_PI_REG1_t ANA_RX_PI_REG1;
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
__xdata __at( 0x608 ) volatile ANA_TXIMP_TEMPC_REG_t ANA_TXIMP_TEMPC_REG;
#define reg_TRX_CKMUX_EN_LANE  ANA_TXIMP_TEMPC_REG.BF.TRX_CKMUX_EN_LANE
#define reg_TXIMP_TEMPC_ICCN_EN_LANE  ANA_TXIMP_TEMPC_REG.BF.TXIMP_TEMPC_ICCN_EN_LANE
#define reg_TXIMP_TEMPC_ICCP_EN_LANE  ANA_TXIMP_TEMPC_REG.BF.TXIMP_TEMPC_ICCP_EN_LANE

// 0x3	TRXIVREF_RSVD_REG0		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD0_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG0_t;
__xdata __at( 0x60c ) volatile TRXIVREF_RSVD_REG0_t TRXIVREF_RSVD_REG0;
#define reg_TRXIVREF_RSVD0_LANE_7_0  TRXIVREF_RSVD_REG0.BF.TRXIVREF_RSVD0_LANE_7_0

// 0x4	TRXIVREF_RSVD_REG1		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD1_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG1_t;
__xdata __at( 0x610 ) volatile TRXIVREF_RSVD_REG1_t TRXIVREF_RSVD_REG1;
#define reg_TRXIVREF_RSVD1_LANE_7_0  TRXIVREF_RSVD_REG1.BF.TRXIVREF_RSVD1_LANE_7_0

// 0x5	TRXIVREF_RSVD_REG2		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD2_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG2_t;
__xdata __at( 0x614 ) volatile TRXIVREF_RSVD_REG2_t TRXIVREF_RSVD_REG2;
#define reg_TRXIVREF_RSVD2_LANE_7_0  TRXIVREF_RSVD_REG2.BF.TRXIVREF_RSVD2_LANE_7_0

// 0x6	TRXIVREF_RSVD_REG3		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD3_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG3_t;
__xdata __at( 0x618 ) volatile TRXIVREF_RSVD_REG3_t TRXIVREF_RSVD_REG3;
#define reg_TRXIVREF_RSVD3_LANE_7_0  TRXIVREF_RSVD_REG3.BF.TRXIVREF_RSVD3_LANE_7_0

// 0x7	TRXIVREF_RSVD_REG4		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD4_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG4_t;
__xdata __at( 0x61c ) volatile TRXIVREF_RSVD_REG4_t TRXIVREF_RSVD_REG4;
#define reg_TRXIVREF_RSVD4_LANE_7_0  TRXIVREF_RSVD_REG4.BF.TRXIVREF_RSVD4_LANE_7_0

// 0x8	TRXIVREF_RSVD_REG5		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD5_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG5_t;
__xdata __at( 0x620 ) volatile TRXIVREF_RSVD_REG5_t TRXIVREF_RSVD_REG5;
#define reg_TRXIVREF_RSVD5_LANE_7_0  TRXIVREF_RSVD_REG5.BF.TRXIVREF_RSVD5_LANE_7_0

// 0x9	TRXIVREF_RSVD_REG6		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD6_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG6_t;
__xdata __at( 0x624 ) volatile TRXIVREF_RSVD_REG6_t TRXIVREF_RSVD_REG6;
#define reg_TRXIVREF_RSVD6_LANE_7_0  TRXIVREF_RSVD_REG6.BF.TRXIVREF_RSVD6_LANE_7_0

// 0xa	TRXIVREF_RSVD_REG7		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD7_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG7_t;
__xdata __at( 0x628 ) volatile TRXIVREF_RSVD_REG7_t TRXIVREF_RSVD_REG7;
#define reg_TRXIVREF_RSVD7_LANE_7_0  TRXIVREF_RSVD_REG7.BF.TRXIVREF_RSVD7_LANE_7_0

// 0xb	TRXIVREF_RSVD_REG8		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD8_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG8_t;
__xdata __at( 0x62c ) volatile TRXIVREF_RSVD_REG8_t TRXIVREF_RSVD_REG8;
#define reg_TRXIVREF_RSVD8_LANE_7_0  TRXIVREF_RSVD_REG8.BF.TRXIVREF_RSVD8_LANE_7_0

// 0xc	TRXIVREF_RSVD_REG9		
typedef union {
	struct {
		uint8_t TRXIVREF_RSVD9_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRXIVREF_RSVD_REG9_t;
__xdata __at( 0x630 ) volatile TRXIVREF_RSVD_REG9_t TRXIVREF_RSVD_REG9;
#define reg_TRXIVREF_RSVD9_LANE_7_0  TRXIVREF_RSVD_REG9.BF.TRXIVREF_RSVD9_LANE_7_0

#endif
