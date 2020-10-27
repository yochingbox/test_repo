typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PST1_EN_LANE               : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PST2_EN_LANE               : 1;	/*      1     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST3_EN_LANE               : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST4_EN_LANE               : 1;	/*      3     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST5_EN_LANE               : 1;	/*      4     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST6_EN_LANE               : 1;	/*      5     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST7_EN_LANE               : 1;	/*      6     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST8_EN_LANE               : 1;	/*      7     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST9_EN_LANE               : 1;	/*      8     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST10_EN_LANE              : 1;	/*      9     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST11_EN_LANE              : 1;	/*     10     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST12_EN_LANE              : 1;	/*     11     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST13_EN_LANE              : 1;	/*     12     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST14_EN_LANE              : 1;	/*     13     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST15_EN_LANE              : 1;	/*     14     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PST16_EN_LANE              : 1;	/*     15     r/w   1*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} drv_RX_DP_LMS_FFE_PST_EN_t;
__xdata __at( 0x481c ) volatile drv_RX_DP_LMS_FFE_PST_EN_t drv_RX_DP_LMS_FFE_PST_EN;
#define reg_RX_DP_LMS_FFE_PST1_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST1_EN_LANE
#define reg_RX_DP_LMS_FFE_PST2_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST2_EN_LANE
#define reg_RX_DP_LMS_FFE_PST3_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST3_EN_LANE
#define reg_RX_DP_LMS_FFE_PST4_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST4_EN_LANE
#define reg_RX_DP_LMS_FFE_PST5_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST5_EN_LANE
#define reg_RX_DP_LMS_FFE_PST6_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST6_EN_LANE
#define reg_RX_DP_LMS_FFE_PST7_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST7_EN_LANE
#define reg_RX_DP_LMS_FFE_PST8_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST8_EN_LANE
#define reg_RX_DP_LMS_FFE_PST9_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST9_EN_LANE
#define reg_RX_DP_LMS_FFE_PST10_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST10_EN_LANE
#define reg_RX_DP_LMS_FFE_PST11_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST11_EN_LANE
#define reg_RX_DP_LMS_FFE_PST12_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST12_EN_LANE
#define reg_RX_DP_LMS_FFE_PST13_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST13_EN_LANE
#define reg_RX_DP_LMS_FFE_PST14_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST14_EN_LANE
#define reg_RX_DP_LMS_FFE_PST15_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST15_EN_LANE
#define reg_RX_DP_LMS_FFE_PST16_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST16_EN_LANE
#define reg_RX_DP_LMS_FFE_PST17_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST17_EN_LANE
#define reg_RX_DP_LMS_FFE_PST18_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST18_EN_LANE
#define reg_RX_DP_LMS_FFE_PST19_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST19_EN_LANE
#define reg_RX_DP_LMS_FFE_PST20_EN_LANE  drv_RX_DP_LMS_FFE_PST_EN.BF.RX_DP_LMS_FFE_PST20_EN_LANE

typedef union {
	struct {
		uint8_t RX_DP_LMS_FFE_PRE1_EN_LANE               : 1;	/*      0     r/w   0*/
		uint8_t RX_DP_LMS_FFE_PRE2_EN_LANE               : 1;	/*      1     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE3_EN_LANE               : 1;	/*      2     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE4_EN_LANE               : 1;	/*      3     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE5_EN_LANE               : 1;	/*      4     r/w   1*/
		uint8_t RX_DP_LMS_FFE_PRE6_EN_LANE               : 1;	/*      5     r/w   1*/
		uint8_t RESERVED_6                               : 2;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:6]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:6]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} drv_RX_DP_LMS_FFE_PRE_EN_t;
__xdata __at( 0x482c ) volatile drv_RX_DP_LMS_FFE_PRE_EN_t drv_RX_DP_LMS_FFE_PRE_EN;
#define reg_RX_DP_LMS_FFE_PRE1_EN_LANE  drv_RX_DP_LMS_FFE_PRE_EN.BF.RX_DP_LMS_FFE_PRE1_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE2_EN_LANE  drv_RX_DP_LMS_FFE_PRE_EN.BF.RX_DP_LMS_FFE_PRE2_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE3_EN_LANE  drv_RX_DP_LMS_FFE_PRE_EN.BF.RX_DP_LMS_FFE_PRE3_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE4_EN_LANE  drv_RX_DP_LMS_FFE_PRE_EN.BF.RX_DP_LMS_FFE_PRE4_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE5_EN_LANE  drv_RX_DP_LMS_FFE_PRE_EN.BF.RX_DP_LMS_FFE_PRE5_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE6_EN_LANE  drv_RX_DP_LMS_FFE_PRE_EN.BF.RX_DP_LMS_FFE_PRE6_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE7_EN_LANE  drv_RX_DP_LMS_FFE_PRE_EN.BF.RX_DP_LMS_FFE_PRE7_EN_LANE
#define reg_RX_DP_LMS_FFE_PRE8_EN_LANE  drv_RX_DP_LMS_FFE_PRE_EN.BF.RX_DP_LMS_FFE_PRE8_EN_LANE

typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT1_EN_LANE               : 1;	/*     16     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT2_EN_LANE               : 1;	/*     17     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT3_EN_LANE               : 1;	/*     18     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT4_EN_LANE               : 1;	/*     19     r/w   1*/
		uint8_t RESERVED_20                              : 4;	/*[23:20]     r/w   0*/
		uint8_t RX_DP_LMS_FFE_FLT5_EN_LANE               : 1;	/*     24     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT6_EN_LANE               : 1;	/*     25     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT7_EN_LANE               : 1;	/*     26     r/w   1*/
		uint8_t RX_DP_LMS_FFE_FLT8_EN_LANE               : 1;	/*     27     r/w   1*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} drv_RX_DP_LMS_FFE_FLT_EN_t;
__xdata __at( 0x483c ) volatile drv_RX_DP_LMS_FFE_FLT_EN_t drv_RX_DP_LMS_FFE_FLT_EN;
#define reg_RX_DP_LMS_FFE_FLT1_EN_LANE  drv_RX_DP_LMS_FFE_FLT_EN.BF.RX_DP_LMS_FFE_FLT1_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT2_EN_LANE  drv_RX_DP_LMS_FFE_FLT_EN.BF.RX_DP_LMS_FFE_FLT2_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT3_EN_LANE  drv_RX_DP_LMS_FFE_FLT_EN.BF.RX_DP_LMS_FFE_FLT3_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT4_EN_LANE  drv_RX_DP_LMS_FFE_FLT_EN.BF.RX_DP_LMS_FFE_FLT4_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT5_EN_LANE  drv_RX_DP_LMS_FFE_FLT_EN.BF.RX_DP_LMS_FFE_FLT5_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT6_EN_LANE  drv_RX_DP_LMS_FFE_FLT_EN.BF.RX_DP_LMS_FFE_FLT6_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT7_EN_LANE  drv_RX_DP_LMS_FFE_FLT_EN.BF.RX_DP_LMS_FFE_FLT7_EN_LANE
#define reg_RX_DP_LMS_FFE_FLT8_EN_LANE  drv_RX_DP_LMS_FFE_FLT_EN.BF.RX_DP_LMS_FFE_FLT8_EN_LANE

typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PST1_EN_LANE              : 1;	/*      8     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST2_EN_LANE              : 1;	/*      9     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PST3_EN_LANE              : 1;	/*     10     r/w   1*/
		uint8_t RESERVED_11                              : 5;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:11]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} drv_RX_DTL_LMS_FFE_PST_EN_t;
__xdata __at( 0x4a6c ) volatile drv_RX_DTL_LMS_FFE_PST_EN_t drv_RX_DTL_LMS_FFE_PST_EN;
#define reg_RX_DTL_LMS_FFE_PST1_EN_LANE  drv_RX_DTL_LMS_FFE_PST_EN.BF.RX_DTL_LMS_FFE_PST1_EN_LANE
#define reg_RX_DTL_LMS_FFE_PST2_EN_LANE  drv_RX_DTL_LMS_FFE_PST_EN.BF.RX_DTL_LMS_FFE_PST2_EN_LANE
#define reg_RX_DTL_LMS_FFE_PST3_EN_LANE  drv_RX_DTL_LMS_FFE_PST_EN.BF.RX_DTL_LMS_FFE_PST3_EN_LANE

typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/*  [7:0]     r/w   0*/
		uint8_t RX_DTL_LMS_FFE_PRE1_EN_LANE              : 1;	/*      8     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE2_EN_LANE              : 1;	/*      9     r/w   1*/
		uint8_t RX_DTL_LMS_FFE_PRE3_EN_LANE              : 1;	/*     10     r/w   1*/
		uint8_t RESERVED_11                              : 5;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:11]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:11]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} drv_RX_DTL_LMS_FFE_PRE_EN_t;
__xdata __at( 0x4a64 ) volatile drv_RX_DTL_LMS_FFE_PRE_EN_t drv_RX_DTL_LMS_FFE_PRE_EN;
#define reg_RX_DTL_LMS_FFE_PRE1_EN_LANE  drv_RX_DTL_LMS_FFE_PRE_EN.BF.RX_DTL_LMS_FFE_PRE1_EN_LANE
#define reg_RX_DTL_LMS_FFE_PRE2_EN_LANE  drv_RX_DTL_LMS_FFE_PRE_EN.BF.RX_DTL_LMS_FFE_PRE2_EN_LANE
#define reg_RX_DTL_LMS_FFE_PRE3_EN_LANE  drv_RX_DTL_LMS_FFE_PRE_EN.BF.RX_DTL_LMS_FFE_PRE3_EN_LANE

