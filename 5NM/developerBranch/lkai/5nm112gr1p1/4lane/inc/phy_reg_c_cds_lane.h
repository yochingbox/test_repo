#ifndef PHY_REG_C_CDS_LANE_H
#define PHY_REG_C_CDS_LANE_H



// 0x0100	CDS_DTL_CFG_REG0		CDS DTL Register 0
typedef union {
	struct {
		uint8_t CDS_DTL_BLIND_LMS_BLW_MU_LANE_3_0        : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t CDS_DTL_BLIND_LMS_GAIN_MU_LANE_3_0       : 4;	/*  [7:4]     r/w 4'h2*/
		uint8_t CDS_DTL_BLIND_LMS_FFE_ALL_MU_LANE_3_0    : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t CDS_DTL_BLIND_LMS_FFE_PST1_MU_LANE_3_0   : 4;	/*[15:12]     r/w 4'h4*/
		uint8_t CDS_DTL_BLIND_LMS_FFE_PRE1_MU_LANE_3_0   : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t RESERVED_20                              : 3;	/*[22:20]     r/w   0*/
		uint8_t CDS_DTL_BLIND_LMS_TOP_EN_LANE            : 1;	/*     23     r/w   1*/
		uint8_t CDS_DTL_BLIND_LMS_BLW_EN_LANE            : 1;	/*     24     r/w   0*/
		uint8_t CDS_DTL_BLIND_LMS_GAIN_EN_LANE           : 1;	/*     25     r/w   1*/
		uint8_t CDS_DTL_BLIND_LMS_FFE_PST_EN_LANE_2_0    : 3;	/*[28:26]     r/w 3'h3*/
		uint8_t CDS_DTL_BLIND_LMS_FFE_PRE_EN_LANE_2_0    : 3;	/*[31:29]     r/w 3'h3*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_CFG_REG0_t;
__xdata __at( 0x6100 ) volatile CDS_DTL_CFG_REG0_t CDS_DTL_CFG_REG0;
#define reg_CDS_DTL_BLIND_LMS_BLW_MU_LANE_3_0  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_BLW_MU_LANE_3_0
#define reg_CDS_DTL_BLIND_LMS_GAIN_MU_LANE_3_0  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_GAIN_MU_LANE_3_0
#define reg_CDS_DTL_BLIND_LMS_FFE_ALL_MU_LANE_3_0  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_FFE_ALL_MU_LANE_3_0
#define reg_CDS_DTL_BLIND_LMS_FFE_PST1_MU_LANE_3_0  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_FFE_PST1_MU_LANE_3_0
#define reg_CDS_DTL_BLIND_LMS_FFE_PRE1_MU_LANE_3_0  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_FFE_PRE1_MU_LANE_3_0
#define reg_CDS_DTL_BLIND_LMS_TOP_EN_LANE  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_TOP_EN_LANE
#define reg_CDS_DTL_BLIND_LMS_BLW_EN_LANE  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_BLW_EN_LANE
#define reg_CDS_DTL_BLIND_LMS_GAIN_EN_LANE  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_GAIN_EN_LANE
#define reg_CDS_DTL_BLIND_LMS_FFE_PST_EN_LANE_2_0  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_FFE_PST_EN_LANE_2_0
#define reg_CDS_DTL_BLIND_LMS_FFE_PRE_EN_LANE_2_0  CDS_DTL_CFG_REG0.BF.CDS_DTL_BLIND_LMS_FFE_PRE_EN_LANE_2_0

// 0x0104	CDS_DTL_CFG_REG1		CDS DTL Register 1
typedef union {
	struct {
		uint8_t CDS_DTL_EQL_LMS_BLW_MU_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t CDS_DTL_EQL_LMS_GAIN_MU_LANE_3_0         : 4;	/*  [7:4]     r/w 4'h2*/
		uint8_t CDS_DTL_EQL_LMS_FFE_ALL_MU_LANE_3_0      : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t CDS_DTL_EQL_LMS_FFE_PST1_MU_LANE_3_0     : 4;	/*[15:12]     r/w 4'h4*/
		uint8_t CDS_DTL_EQL_LMS_FFE_PRE1_MU_LANE_3_0     : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t RESERVED_20                              : 3;	/*[22:20]     r/w   0*/
		uint8_t CDS_DTL_EQL_LMS_TOP_EN_LANE              : 1;	/*     23     r/w   1*/
		uint8_t CDS_DTL_EQL_LMS_BLW_EN_LANE              : 1;	/*     24     r/w   1*/
		uint8_t CDS_DTL_EQL_LMS_GAIN_EN_LANE             : 1;	/*     25     r/w   1*/
		uint8_t CDS_DTL_EQL_LMS_FFE_PST_EN_LANE_2_0      : 3;	/*[28:26]     r/w 3'h7*/
		uint8_t CDS_DTL_EQL_LMS_FFE_PRE_EN_LANE_2_0      : 3;	/*[31:29]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_CFG_REG1_t;
__xdata __at( 0x6104 ) volatile CDS_DTL_CFG_REG1_t CDS_DTL_CFG_REG1;
#define reg_CDS_DTL_EQL_LMS_BLW_MU_LANE_3_0  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_BLW_MU_LANE_3_0
#define reg_CDS_DTL_EQL_LMS_GAIN_MU_LANE_3_0  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_GAIN_MU_LANE_3_0
#define reg_CDS_DTL_EQL_LMS_FFE_ALL_MU_LANE_3_0  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_FFE_ALL_MU_LANE_3_0
#define reg_CDS_DTL_EQL_LMS_FFE_PST1_MU_LANE_3_0  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_FFE_PST1_MU_LANE_3_0
#define reg_CDS_DTL_EQL_LMS_FFE_PRE1_MU_LANE_3_0  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_FFE_PRE1_MU_LANE_3_0
#define reg_CDS_DTL_EQL_LMS_TOP_EN_LANE  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_TOP_EN_LANE
#define reg_CDS_DTL_EQL_LMS_BLW_EN_LANE  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_BLW_EN_LANE
#define reg_CDS_DTL_EQL_LMS_GAIN_EN_LANE  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_GAIN_EN_LANE
#define reg_CDS_DTL_EQL_LMS_FFE_PST_EN_LANE_2_0  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_FFE_PST_EN_LANE_2_0
#define reg_CDS_DTL_EQL_LMS_FFE_PRE_EN_LANE_2_0  CDS_DTL_CFG_REG1.BF.CDS_DTL_EQL_LMS_FFE_PRE_EN_LANE_2_0

// 0x0108	CDS_DTL_CFG_REG2		CDS DTL Register 2
typedef union {
	struct {
		uint8_t CDS_DTL_COARSE_LMS_BLW_MU_LANE_3_0       : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t CDS_DTL_COARSE_LMS_GAIN_MU_LANE_3_0      : 4;	/*  [7:4]     r/w 4'h3*/
		uint8_t CDS_DTL_COARSE_LMS_FFE_ALL_MU_LANE_3_0   : 4;	/* [11:8]     r/w 4'h5*/
		uint8_t CDS_DTL_COARSE_LMS_FFE_PST1_MU_LANE_3_0  : 4;	/*[15:12]     r/w 4'h5*/
		uint8_t CDS_DTL_COARSE_LMS_FFE_PRE1_MU_LANE_3_0  : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t RESERVED_20                              : 3;	/*[22:20]     r/w   0*/
		uint8_t CDS_DTL_COARSE_LMS_TOP_EN_LANE           : 1;	/*     23     r/w   1*/
		uint8_t CDS_DTL_COARSE_LMS_BLW_EN_LANE           : 1;	/*     24     r/w   1*/
		uint8_t CDS_DTL_COARSE_LMS_GAIN_EN_LANE          : 1;	/*     25     r/w   1*/
		uint8_t CDS_DTL_COARSE_LMS_FFE_PST_EN_LANE_2_0   : 3;	/*[28:26]     r/w 3'h0*/
		uint8_t CDS_DTL_COARSE_LMS_FFE_PRE_EN_LANE_2_0   : 3;	/*[31:29]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_CFG_REG2_t;
__xdata __at( 0x6108 ) volatile CDS_DTL_CFG_REG2_t CDS_DTL_CFG_REG2;
#define reg_CDS_DTL_COARSE_LMS_BLW_MU_LANE_3_0  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_BLW_MU_LANE_3_0
#define reg_CDS_DTL_COARSE_LMS_GAIN_MU_LANE_3_0  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_GAIN_MU_LANE_3_0
#define reg_CDS_DTL_COARSE_LMS_FFE_ALL_MU_LANE_3_0  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_FFE_ALL_MU_LANE_3_0
#define reg_CDS_DTL_COARSE_LMS_FFE_PST1_MU_LANE_3_0  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_FFE_PST1_MU_LANE_3_0
#define reg_CDS_DTL_COARSE_LMS_FFE_PRE1_MU_LANE_3_0  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_FFE_PRE1_MU_LANE_3_0
#define reg_CDS_DTL_COARSE_LMS_TOP_EN_LANE  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_TOP_EN_LANE
#define reg_CDS_DTL_COARSE_LMS_BLW_EN_LANE  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_BLW_EN_LANE
#define reg_CDS_DTL_COARSE_LMS_GAIN_EN_LANE  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_GAIN_EN_LANE
#define reg_CDS_DTL_COARSE_LMS_FFE_PST_EN_LANE_2_0  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_FFE_PST_EN_LANE_2_0
#define reg_CDS_DTL_COARSE_LMS_FFE_PRE_EN_LANE_2_0  CDS_DTL_CFG_REG2.BF.CDS_DTL_COARSE_LMS_FFE_PRE_EN_LANE_2_0

// 0x010c	CDS_DTL_CFG_REG3		CDS DTL Register 3
typedef union {
	struct {
		uint8_t CDS_DTL_FINE_LMS_BLW_MU_LANE_3_0         : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t CDS_DTL_FINE_LMS_GAIN_MU_LANE_3_0        : 4;	/*  [7:4]     r/w 4'h4*/
		uint8_t CDS_DTL_FINE_LMS_FFE_ALL_MU_LANE_3_0     : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t CDS_DTL_FINE_LMS_FFE_PST1_MU_LANE_3_0    : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t CDS_DTL_FINE_LMS_FFE_PRE1_MU_LANE_3_0    : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t RESERVED_20                              : 3;	/*[22:20]     r/w   0*/
		uint8_t CDS_DTL_FINE_LMS_TOP_EN_LANE             : 1;	/*     23     r/w   1*/
		uint8_t CDS_DTL_FINE_LMS_BLW_EN_LANE             : 1;	/*     24     r/w   1*/
		uint8_t CDS_DTL_FINE_LMS_GAIN_EN_LANE            : 1;	/*     25     r/w   1*/
		uint8_t CDS_DTL_FINE_LMS_FFE_PST_EN_LANE_2_0     : 3;	/*[28:26]     r/w 3'h6*/
		uint8_t CDS_DTL_FINE_LMS_FFE_PRE_EN_LANE_2_0     : 3;	/*[31:29]     r/w 3'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_CFG_REG3_t;
__xdata __at( 0x610c ) volatile CDS_DTL_CFG_REG3_t CDS_DTL_CFG_REG3;
#define reg_CDS_DTL_FINE_LMS_BLW_MU_LANE_3_0  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_BLW_MU_LANE_3_0
#define reg_CDS_DTL_FINE_LMS_GAIN_MU_LANE_3_0  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_GAIN_MU_LANE_3_0
#define reg_CDS_DTL_FINE_LMS_FFE_ALL_MU_LANE_3_0  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_FFE_ALL_MU_LANE_3_0
#define reg_CDS_DTL_FINE_LMS_FFE_PST1_MU_LANE_3_0  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_FFE_PST1_MU_LANE_3_0
#define reg_CDS_DTL_FINE_LMS_FFE_PRE1_MU_LANE_3_0  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_FFE_PRE1_MU_LANE_3_0
#define reg_CDS_DTL_FINE_LMS_TOP_EN_LANE  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_TOP_EN_LANE
#define reg_CDS_DTL_FINE_LMS_BLW_EN_LANE  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_BLW_EN_LANE
#define reg_CDS_DTL_FINE_LMS_GAIN_EN_LANE  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_GAIN_EN_LANE
#define reg_CDS_DTL_FINE_LMS_FFE_PST_EN_LANE_2_0  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_FFE_PST_EN_LANE_2_0
#define reg_CDS_DTL_FINE_LMS_FFE_PRE_EN_LANE_2_0  CDS_DTL_CFG_REG3.BF.CDS_DTL_FINE_LMS_FFE_PRE_EN_LANE_2_0

// 0x0110	CDS_DTL_CFG_REG4		CDS DTL Register 4
typedef union {
	struct {
		uint8_t CDS_DTL_ACCU_LMS_BLW_MU_LANE_3_0         : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t CDS_DTL_ACCU_LMS_GAIN_MU_LANE_3_0        : 4;	/*  [7:4]     r/w 4'h4*/
		uint8_t CDS_DTL_ACCU_LMS_FFE_ALL_MU_LANE_3_0     : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t CDS_DTL_ACCU_LMS_FFE_PST1_MU_LANE_3_0    : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t CDS_DTL_ACCU_LMS_FFE_PRE1_MU_LANE_3_0    : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t RESERVED_20                              : 3;	/*[22:20]     r/w   0*/
		uint8_t CDS_DTL_ACCU_LMS_TOP_EN_LANE             : 1;	/*     23     r/w   1*/
		uint8_t CDS_DTL_ACCU_LMS_BLW_EN_LANE             : 1;	/*     24     r/w   1*/
		uint8_t CDS_DTL_ACCU_LMS_GAIN_EN_LANE            : 1;	/*     25     r/w   1*/
		uint8_t CDS_DTL_ACCU_LMS_FFE_PST_EN_LANE_2_0     : 3;	/*[28:26]     r/w 3'h6*/
		uint8_t CDS_DTL_ACCU_LMS_FFE_PRE_EN_LANE_2_0     : 3;	/*[31:29]     r/w 3'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_CFG_REG4_t;
__xdata __at( 0x6110 ) volatile CDS_DTL_CFG_REG4_t CDS_DTL_CFG_REG4;
#define reg_CDS_DTL_ACCU_LMS_BLW_MU_LANE_3_0  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_BLW_MU_LANE_3_0
#define reg_CDS_DTL_ACCU_LMS_GAIN_MU_LANE_3_0  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_GAIN_MU_LANE_3_0
#define reg_CDS_DTL_ACCU_LMS_FFE_ALL_MU_LANE_3_0  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_FFE_ALL_MU_LANE_3_0
#define reg_CDS_DTL_ACCU_LMS_FFE_PST1_MU_LANE_3_0  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_FFE_PST1_MU_LANE_3_0
#define reg_CDS_DTL_ACCU_LMS_FFE_PRE1_MU_LANE_3_0  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_FFE_PRE1_MU_LANE_3_0
#define reg_CDS_DTL_ACCU_LMS_TOP_EN_LANE  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_TOP_EN_LANE
#define reg_CDS_DTL_ACCU_LMS_BLW_EN_LANE  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_BLW_EN_LANE
#define reg_CDS_DTL_ACCU_LMS_GAIN_EN_LANE  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_GAIN_EN_LANE
#define reg_CDS_DTL_ACCU_LMS_FFE_PST_EN_LANE_2_0  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_FFE_PST_EN_LANE_2_0
#define reg_CDS_DTL_ACCU_LMS_FFE_PRE_EN_LANE_2_0  CDS_DTL_CFG_REG4.BF.CDS_DTL_ACCU_LMS_FFE_PRE_EN_LANE_2_0

// 0x0114	CDS_DTL_CFG_REG5		CDS DTL Register 5
typedef union {
	struct {
		uint8_t CDS_DTL_FINE_LPF_KI_SHIFT_LANE_4_0       : 5;	/*  [4:0]     r/w 5'hb*/
		uint8_t CDS_DTL_FINE_LPF_KI_FRAC_LANE            : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t CDS_DTL_FINE_LPF_KP_SHIFT_LANE_3_0       : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t CDS_DTL_FINE_LPF_KP_FRAC_LANE_1_0        : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t CDS_DTL_COARSE_LPF_KI_SHIFT_LANE_4_0     : 5;	/*[20:16]     r/w 5'hd*/
		uint8_t CDS_DTL_COARSE_LPF_KI_FRAC_LANE          : 1;	/*     21     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t CDS_DTL_COARSE_LPF_KP_SHIFT_LANE_3_0     : 4;	/*[27:24]     r/w 4'h9*/
		uint8_t CDS_DTL_COARSE_LPF_KP_FRAC_LANE_1_0      : 2;	/*[29:28]     r/w 2'h2*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_CFG_REG5_t;
__xdata __at( 0x6114 ) volatile CDS_DTL_CFG_REG5_t CDS_DTL_CFG_REG5;
#define reg_CDS_DTL_FINE_LPF_KI_SHIFT_LANE_4_0  CDS_DTL_CFG_REG5.BF.CDS_DTL_FINE_LPF_KI_SHIFT_LANE_4_0
#define reg_CDS_DTL_FINE_LPF_KI_FRAC_LANE  CDS_DTL_CFG_REG5.BF.CDS_DTL_FINE_LPF_KI_FRAC_LANE
#define reg_CDS_DTL_FINE_LPF_KP_SHIFT_LANE_3_0  CDS_DTL_CFG_REG5.BF.CDS_DTL_FINE_LPF_KP_SHIFT_LANE_3_0
#define reg_CDS_DTL_FINE_LPF_KP_FRAC_LANE_1_0  CDS_DTL_CFG_REG5.BF.CDS_DTL_FINE_LPF_KP_FRAC_LANE_1_0
#define reg_CDS_DTL_COARSE_LPF_KI_SHIFT_LANE_4_0  CDS_DTL_CFG_REG5.BF.CDS_DTL_COARSE_LPF_KI_SHIFT_LANE_4_0
#define reg_CDS_DTL_COARSE_LPF_KI_FRAC_LANE  CDS_DTL_CFG_REG5.BF.CDS_DTL_COARSE_LPF_KI_FRAC_LANE
#define reg_CDS_DTL_COARSE_LPF_KP_SHIFT_LANE_3_0  CDS_DTL_CFG_REG5.BF.CDS_DTL_COARSE_LPF_KP_SHIFT_LANE_3_0
#define reg_CDS_DTL_COARSE_LPF_KP_FRAC_LANE_1_0  CDS_DTL_CFG_REG5.BF.CDS_DTL_COARSE_LPF_KP_FRAC_LANE_1_0

// 0x0118	CDS_DTL_CFG_REG6		CDS DTL Register 6
typedef union {
	struct {
		uint8_t CDS_DTL_ACCU_LPF_KI_SHIFT_LANE_4_0       : 5;	/*  [4:0]     r/w 5'h9*/
		uint8_t CDS_DTL_ACCU_LPF_KI_FRAC_LANE            : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t CDS_DTL_ACCU_LPF_KP_SHIFT_LANE_3_0       : 4;	/* [11:8]     r/w 4'h7*/
		uint8_t CDS_DTL_ACCU_LPF_KP_FRAC_LANE_1_0        : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t RESERVED_14                              : 2;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:14]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_CFG_REG6_t;
__xdata __at( 0x6118 ) volatile CDS_DTL_CFG_REG6_t CDS_DTL_CFG_REG6;
#define reg_CDS_DTL_ACCU_LPF_KI_SHIFT_LANE_4_0  CDS_DTL_CFG_REG6.BF.CDS_DTL_ACCU_LPF_KI_SHIFT_LANE_4_0
#define reg_CDS_DTL_ACCU_LPF_KI_FRAC_LANE  CDS_DTL_CFG_REG6.BF.CDS_DTL_ACCU_LPF_KI_FRAC_LANE
#define reg_CDS_DTL_ACCU_LPF_KP_SHIFT_LANE_3_0  CDS_DTL_CFG_REG6.BF.CDS_DTL_ACCU_LPF_KP_SHIFT_LANE_3_0
#define reg_CDS_DTL_ACCU_LPF_KP_FRAC_LANE_1_0  CDS_DTL_CFG_REG6.BF.CDS_DTL_ACCU_LPF_KP_FRAC_LANE_1_0

// 0x0120	CDS_DP_CFG_REG0		CDS Data Path Register 0
typedef union {
	struct {
		uint8_t CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_15_0_b0 : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_15_0_b1 : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t CDS_DP_BLIND_LMS_FFE_PRE_EN_LANE_5_0     : 6;	/*[29:24]     r/w 6'h3f*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_DP_CFG_REG0_t;
__xdata __at( 0x6120 ) volatile CDS_DP_CFG_REG0_t CDS_DP_CFG_REG0;
#define reg_CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_15_0_b0  CDS_DP_CFG_REG0.BF.CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_15_0_b0
#define reg_CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_15_0_b1  CDS_DP_CFG_REG0.BF.CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_15_0_b1
#define reg_CDS_DP_BLIND_LMS_FFE_PRE_EN_LANE_5_0  CDS_DP_CFG_REG0.BF.CDS_DP_BLIND_LMS_FFE_PRE_EN_LANE_5_0
#define reg_CDS_DP_BLIND_LMS_FFE_PST_EN_LANE_15_0  CDS_DP_CFG_REG0.WT.W0

// 0x0124	CDS_DP_CFG_REG1		CDS Data Path Register 1
typedef union {
	struct {
		uint8_t CDS_DP_BLIND_LMS_DFE_EN_LANE             : 1;	/*      0     r/w   0*/
		uint8_t CDS_DP_BLIND_LMS_BLW_EN_LANE             : 1;	/*      1     r/w   0*/
		uint8_t CDS_DP_BLIND_LMS_GAIN_EN_LANE            : 1;	/*      2     r/w   1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t CDS_DP_BLIND_LMS_FFE_FLT_EN_LANE_7_0     : 8;	/* [15:8]     r/w 8'h0*/
		uint8_t CDS_DP_LMS_PRESET_LANE_2_0               : 3;	/*[18:16]     r/w   0*/
		uint8_t RESERVED_19                              : 5;	/*[31:19]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:19]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_CFG_REG1_t;
__xdata __at( 0x6124 ) volatile CDS_DP_CFG_REG1_t CDS_DP_CFG_REG1;
#define reg_CDS_DP_BLIND_LMS_DFE_EN_LANE  CDS_DP_CFG_REG1.BF.CDS_DP_BLIND_LMS_DFE_EN_LANE
#define reg_CDS_DP_BLIND_LMS_BLW_EN_LANE  CDS_DP_CFG_REG1.BF.CDS_DP_BLIND_LMS_BLW_EN_LANE
#define reg_CDS_DP_BLIND_LMS_GAIN_EN_LANE  CDS_DP_CFG_REG1.BF.CDS_DP_BLIND_LMS_GAIN_EN_LANE
#define reg_CDS_DP_BLIND_LMS_FFE_FLT_EN_LANE_7_0  CDS_DP_CFG_REG1.BF.CDS_DP_BLIND_LMS_FFE_FLT_EN_LANE_7_0
#define reg_CDS_DP_LMS_PRESET_LANE_2_0  CDS_DP_CFG_REG1.BF.CDS_DP_LMS_PRESET_LANE_2_0

// 0x0128	CDS_DP_CFG_REG2		CDS Data Path Register 2
typedef union {
	struct {
		uint8_t CDS_DP_BLIND_LMS_DFE_MU_LANE_3_0         : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t CDS_DP_BLIND_LMS_BLW_MU_LANE_3_0         : 4;	/*  [7:4]     r/w 4'h5*/
		uint8_t CDS_DP_BLIND_LMS_GAIN_MU_LANE_3_0        : 4;	/* [11:8]     r/w 4'h4*/
		uint8_t CDS_DP_BLIND_LMS_FFE_FLT_MU_LANE_3_0     : 4;	/*[15:12]     r/w 4'h4*/
		uint8_t CDS_DP_BLIND_LMS_FFE_PST_ALL_MU_LANE_3_0 : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t CDS_DP_BLIND_LMS_FFE_PST1_MU_LANE_3_0    : 4;	/*[23:20]     r/w 4'h4*/
		uint8_t CDS_DP_BLIND_LMS_FFE_PRE_ALL_MU_LANE_3_0 : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t CDS_DP_BLIND_LMS_FFE_PRE1_MU_LANE_3_0    : 4;	/*[31:28]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_CFG_REG2_t;
__xdata __at( 0x6128 ) volatile CDS_DP_CFG_REG2_t CDS_DP_CFG_REG2;
#define reg_CDS_DP_BLIND_LMS_DFE_MU_LANE_3_0  CDS_DP_CFG_REG2.BF.CDS_DP_BLIND_LMS_DFE_MU_LANE_3_0
#define reg_CDS_DP_BLIND_LMS_BLW_MU_LANE_3_0  CDS_DP_CFG_REG2.BF.CDS_DP_BLIND_LMS_BLW_MU_LANE_3_0
#define reg_CDS_DP_BLIND_LMS_GAIN_MU_LANE_3_0  CDS_DP_CFG_REG2.BF.CDS_DP_BLIND_LMS_GAIN_MU_LANE_3_0
#define reg_CDS_DP_BLIND_LMS_FFE_FLT_MU_LANE_3_0  CDS_DP_CFG_REG2.BF.CDS_DP_BLIND_LMS_FFE_FLT_MU_LANE_3_0
#define reg_CDS_DP_BLIND_LMS_FFE_PST_ALL_MU_LANE_3_0  CDS_DP_CFG_REG2.BF.CDS_DP_BLIND_LMS_FFE_PST_ALL_MU_LANE_3_0
#define reg_CDS_DP_BLIND_LMS_FFE_PST1_MU_LANE_3_0  CDS_DP_CFG_REG2.BF.CDS_DP_BLIND_LMS_FFE_PST1_MU_LANE_3_0
#define reg_CDS_DP_BLIND_LMS_FFE_PRE_ALL_MU_LANE_3_0  CDS_DP_CFG_REG2.BF.CDS_DP_BLIND_LMS_FFE_PRE_ALL_MU_LANE_3_0
#define reg_CDS_DP_BLIND_LMS_FFE_PRE1_MU_LANE_3_0  CDS_DP_CFG_REG2.BF.CDS_DP_BLIND_LMS_FFE_PRE1_MU_LANE_3_0

// 0x012c	CDS_DP_CFG_REG3		CDS Data Path Register 3
typedef union {
	struct {
		uint8_t CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_15_0_b0 : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_15_0_b1 : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t CDS_DP_COARSE_LMS_FFE_PRE_EN_LANE_5_0    : 6;	/*[29:24]     r/w 6'h3f*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_DP_CFG_REG3_t;
__xdata __at( 0x612c ) volatile CDS_DP_CFG_REG3_t CDS_DP_CFG_REG3;
#define reg_CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_15_0_b0  CDS_DP_CFG_REG3.BF.CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_15_0_b0
#define reg_CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_15_0_b1  CDS_DP_CFG_REG3.BF.CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_15_0_b1
#define reg_CDS_DP_COARSE_LMS_FFE_PRE_EN_LANE_5_0  CDS_DP_CFG_REG3.BF.CDS_DP_COARSE_LMS_FFE_PRE_EN_LANE_5_0
#define reg_CDS_DP_COARSE_LMS_FFE_PST_EN_LANE_15_0  CDS_DP_CFG_REG3.WT.W0

// 0x0130	CDS_DP_CFG_REG4		CDS Data Path Register 4
typedef union {
	struct {
		uint8_t CDS_DP_COARSE_LMS_DFE_EN_LANE            : 1;	/*      0     r/w   0*/
		uint8_t CDS_DP_COARSE_LMS_BLW_EN_LANE            : 1;	/*      1     r/w   1*/
		uint8_t CDS_DP_COARSE_LMS_GAIN_EN_LANE           : 1;	/*      2     r/w   1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t CDS_DP_COARSE_LMS_FFE_FLT_EN_LANE_7_0    : 8;	/* [15:8]     r/w 8'hff*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_DP_CFG_REG4_t;
__xdata __at( 0x6130 ) volatile CDS_DP_CFG_REG4_t CDS_DP_CFG_REG4;
#define reg_CDS_DP_COARSE_LMS_DFE_EN_LANE  CDS_DP_CFG_REG4.BF.CDS_DP_COARSE_LMS_DFE_EN_LANE
#define reg_CDS_DP_COARSE_LMS_BLW_EN_LANE  CDS_DP_CFG_REG4.BF.CDS_DP_COARSE_LMS_BLW_EN_LANE
#define reg_CDS_DP_COARSE_LMS_GAIN_EN_LANE  CDS_DP_CFG_REG4.BF.CDS_DP_COARSE_LMS_GAIN_EN_LANE
#define reg_CDS_DP_COARSE_LMS_FFE_FLT_EN_LANE_7_0  CDS_DP_CFG_REG4.BF.CDS_DP_COARSE_LMS_FFE_FLT_EN_LANE_7_0

// 0x0134	CDS_DP_CFG_REG5		CDS Data Path Register 5
typedef union {
	struct {
		uint8_t CDS_DP_COARSE_LMS_DFE_MU_LANE_3_0        : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t CDS_DP_COARSE_LMS_BLW_MU_LANE_3_0        : 4;	/*  [7:4]     r/w 4'h5*/
		uint8_t CDS_DP_COARSE_LMS_GAIN_MU_LANE_3_0       : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t CDS_DP_COARSE_LMS_FFE_FLT_MU_LANE_3_0    : 4;	/*[15:12]     r/w 4'h4*/
		uint8_t CDS_DP_COARSE_LMS_FFE_PST_ALL_MU_LANE_3_0 : 4;	/*[19:16]     r/w 4'h4*/
		uint8_t CDS_DP_COARSE_LMS_FFE_PST1_MU_LANE_3_0   : 4;	/*[23:20]     r/w 4'h4*/
		uint8_t CDS_DP_COARSE_LMS_FFE_PRE_ALL_MU_LANE_3_0 : 4;	/*[27:24]     r/w 4'h4*/
		uint8_t CDS_DP_COARSE_LMS_FFE_PRE1_MU_LANE_3_0   : 4;	/*[31:28]     r/w 4'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_CFG_REG5_t;
__xdata __at( 0x6134 ) volatile CDS_DP_CFG_REG5_t CDS_DP_CFG_REG5;
#define reg_CDS_DP_COARSE_LMS_DFE_MU_LANE_3_0  CDS_DP_CFG_REG5.BF.CDS_DP_COARSE_LMS_DFE_MU_LANE_3_0
#define reg_CDS_DP_COARSE_LMS_BLW_MU_LANE_3_0  CDS_DP_CFG_REG5.BF.CDS_DP_COARSE_LMS_BLW_MU_LANE_3_0
#define reg_CDS_DP_COARSE_LMS_GAIN_MU_LANE_3_0  CDS_DP_CFG_REG5.BF.CDS_DP_COARSE_LMS_GAIN_MU_LANE_3_0
#define reg_CDS_DP_COARSE_LMS_FFE_FLT_MU_LANE_3_0  CDS_DP_CFG_REG5.BF.CDS_DP_COARSE_LMS_FFE_FLT_MU_LANE_3_0
#define reg_CDS_DP_COARSE_LMS_FFE_PST_ALL_MU_LANE_3_0  CDS_DP_CFG_REG5.BF.CDS_DP_COARSE_LMS_FFE_PST_ALL_MU_LANE_3_0
#define reg_CDS_DP_COARSE_LMS_FFE_PST1_MU_LANE_3_0  CDS_DP_CFG_REG5.BF.CDS_DP_COARSE_LMS_FFE_PST1_MU_LANE_3_0
#define reg_CDS_DP_COARSE_LMS_FFE_PRE_ALL_MU_LANE_3_0  CDS_DP_CFG_REG5.BF.CDS_DP_COARSE_LMS_FFE_PRE_ALL_MU_LANE_3_0
#define reg_CDS_DP_COARSE_LMS_FFE_PRE1_MU_LANE_3_0  CDS_DP_CFG_REG5.BF.CDS_DP_COARSE_LMS_FFE_PRE1_MU_LANE_3_0

// 0x0138	CDS_DP_CFG_REG6		CDS Data Path Register 6
typedef union {
	struct {
		uint8_t CDS_DP_FINE_LMS_FFE_PST_EN_LANE_15_0_b0  : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t CDS_DP_FINE_LMS_FFE_PST_EN_LANE_15_0_b1  : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t CDS_DP_FINE_LMS_FFE_PRE_EN_LANE_5_0      : 6;	/*[29:24]     r/w 6'h3f*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_DP_CFG_REG6_t;
__xdata __at( 0x6138 ) volatile CDS_DP_CFG_REG6_t CDS_DP_CFG_REG6;
#define reg_CDS_DP_FINE_LMS_FFE_PST_EN_LANE_15_0_b0  CDS_DP_CFG_REG6.BF.CDS_DP_FINE_LMS_FFE_PST_EN_LANE_15_0_b0
#define reg_CDS_DP_FINE_LMS_FFE_PST_EN_LANE_15_0_b1  CDS_DP_CFG_REG6.BF.CDS_DP_FINE_LMS_FFE_PST_EN_LANE_15_0_b1
#define reg_CDS_DP_FINE_LMS_FFE_PRE_EN_LANE_5_0  CDS_DP_CFG_REG6.BF.CDS_DP_FINE_LMS_FFE_PRE_EN_LANE_5_0
#define reg_CDS_DP_FINE_LMS_FFE_PST_EN_LANE_15_0  CDS_DP_CFG_REG6.WT.W0

// 0x013c	CDS_DP_CFG_REG7		CDS Data Path Register 7
typedef union {
	struct {
		uint8_t CDS_DP_FINE_LMS_DFE_EN_LANE              : 1;	/*      0     r/w   0*/
		uint8_t CDS_DP_FINE_LMS_BLW_EN_LANE              : 1;	/*      1     r/w   1*/
		uint8_t CDS_DP_FINE_LMS_GAIN_EN_LANE             : 1;	/*      2     r/w   1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t CDS_DP_FINE_LMS_FFE_FLT_EN_LANE_7_0      : 8;	/* [15:8]     r/w 8'hff*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_DP_CFG_REG7_t;
__xdata __at( 0x613c ) volatile CDS_DP_CFG_REG7_t CDS_DP_CFG_REG7;
#define reg_CDS_DP_FINE_LMS_DFE_EN_LANE  CDS_DP_CFG_REG7.BF.CDS_DP_FINE_LMS_DFE_EN_LANE
#define reg_CDS_DP_FINE_LMS_BLW_EN_LANE  CDS_DP_CFG_REG7.BF.CDS_DP_FINE_LMS_BLW_EN_LANE
#define reg_CDS_DP_FINE_LMS_GAIN_EN_LANE  CDS_DP_CFG_REG7.BF.CDS_DP_FINE_LMS_GAIN_EN_LANE
#define reg_CDS_DP_FINE_LMS_FFE_FLT_EN_LANE_7_0  CDS_DP_CFG_REG7.BF.CDS_DP_FINE_LMS_FFE_FLT_EN_LANE_7_0

// 0x0140	CDS_DP_CFG_REG8		CDS Data Path Register 8
typedef union {
	struct {
		uint8_t CDS_DP_FINE_LMS_DFE_MU_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t CDS_DP_FINE_LMS_BLW_MU_LANE_3_0          : 4;	/*  [7:4]     r/w 4'h5*/
		uint8_t CDS_DP_FINE_LMS_GAIN_MU_LANE_3_0         : 4;	/* [11:8]     r/w 4'h5*/
		uint8_t CDS_DP_FINE_LMS_FFE_FLT_MU_LANE_3_0      : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t CDS_DP_FINE_LMS_FFE_PST_ALL_MU_LANE_3_0  : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t CDS_DP_FINE_LMS_FFE_PST1_MU_LANE_3_0     : 4;	/*[23:20]     r/w 4'h6*/
		uint8_t CDS_DP_FINE_LMS_FFE_PRE_ALL_MU_LANE_3_0  : 4;	/*[27:24]     r/w 4'h6*/
		uint8_t CDS_DP_FINE_LMS_FFE_PRE1_MU_LANE_3_0     : 4;	/*[31:28]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_CFG_REG8_t;
__xdata __at( 0x6140 ) volatile CDS_DP_CFG_REG8_t CDS_DP_CFG_REG8;
#define reg_CDS_DP_FINE_LMS_DFE_MU_LANE_3_0  CDS_DP_CFG_REG8.BF.CDS_DP_FINE_LMS_DFE_MU_LANE_3_0
#define reg_CDS_DP_FINE_LMS_BLW_MU_LANE_3_0  CDS_DP_CFG_REG8.BF.CDS_DP_FINE_LMS_BLW_MU_LANE_3_0
#define reg_CDS_DP_FINE_LMS_GAIN_MU_LANE_3_0  CDS_DP_CFG_REG8.BF.CDS_DP_FINE_LMS_GAIN_MU_LANE_3_0
#define reg_CDS_DP_FINE_LMS_FFE_FLT_MU_LANE_3_0  CDS_DP_CFG_REG8.BF.CDS_DP_FINE_LMS_FFE_FLT_MU_LANE_3_0
#define reg_CDS_DP_FINE_LMS_FFE_PST_ALL_MU_LANE_3_0  CDS_DP_CFG_REG8.BF.CDS_DP_FINE_LMS_FFE_PST_ALL_MU_LANE_3_0
#define reg_CDS_DP_FINE_LMS_FFE_PST1_MU_LANE_3_0  CDS_DP_CFG_REG8.BF.CDS_DP_FINE_LMS_FFE_PST1_MU_LANE_3_0
#define reg_CDS_DP_FINE_LMS_FFE_PRE_ALL_MU_LANE_3_0  CDS_DP_CFG_REG8.BF.CDS_DP_FINE_LMS_FFE_PRE_ALL_MU_LANE_3_0
#define reg_CDS_DP_FINE_LMS_FFE_PRE1_MU_LANE_3_0  CDS_DP_CFG_REG8.BF.CDS_DP_FINE_LMS_FFE_PRE1_MU_LANE_3_0

// 0x0144	CDS_DP_CFG_REG9		CDS Data Path Register 9
typedef union {
	struct {
		uint8_t CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_15_0_b0  : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_15_0_b1  : 8;	/* [15:0]     r/w 16'hffff*/
		uint8_t RESERVED_16                              : 8;	/*[23:16]     r/w   0*/
		uint8_t CDS_DP_ACCU_LMS_FFE_PRE_EN_LANE_5_0      : 6;	/*[29:24]     r/w 6'h3f*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_DP_CFG_REG9_t;
__xdata __at( 0x6144 ) volatile CDS_DP_CFG_REG9_t CDS_DP_CFG_REG9;
#define reg_CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_15_0_b0  CDS_DP_CFG_REG9.BF.CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_15_0_b0
#define reg_CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_15_0_b1  CDS_DP_CFG_REG9.BF.CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_15_0_b1
#define reg_CDS_DP_ACCU_LMS_FFE_PRE_EN_LANE_5_0  CDS_DP_CFG_REG9.BF.CDS_DP_ACCU_LMS_FFE_PRE_EN_LANE_5_0
#define reg_CDS_DP_ACCU_LMS_FFE_PST_EN_LANE_15_0  CDS_DP_CFG_REG9.WT.W0

// 0x0148	CDS_DP_CFG_REG10		CDS Data Path Register 10
typedef union {
	struct {
		uint8_t CDS_DP_ACCU_LMS_DFE_EN_LANE              : 1;	/*      0     r/w   0*/
		uint8_t CDS_DP_ACCU_LMS_BLW_EN_LANE              : 1;	/*      1     r/w   1*/
		uint8_t CDS_DP_ACCU_LMS_GAIN_EN_LANE             : 1;	/*      2     r/w   1*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t CDS_DP_ACCU_LMS_FFE_FLT_EN_LANE_7_0      : 8;	/* [15:8]     r/w 8'hff*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_DP_CFG_REG10_t;
__xdata __at( 0x6148 ) volatile CDS_DP_CFG_REG10_t CDS_DP_CFG_REG10;
#define reg_CDS_DP_ACCU_LMS_DFE_EN_LANE  CDS_DP_CFG_REG10.BF.CDS_DP_ACCU_LMS_DFE_EN_LANE
#define reg_CDS_DP_ACCU_LMS_BLW_EN_LANE  CDS_DP_CFG_REG10.BF.CDS_DP_ACCU_LMS_BLW_EN_LANE
#define reg_CDS_DP_ACCU_LMS_GAIN_EN_LANE  CDS_DP_CFG_REG10.BF.CDS_DP_ACCU_LMS_GAIN_EN_LANE
#define reg_CDS_DP_ACCU_LMS_FFE_FLT_EN_LANE_7_0  CDS_DP_CFG_REG10.BF.CDS_DP_ACCU_LMS_FFE_FLT_EN_LANE_7_0

// 0x014c	CDS_DP_CFG_REG11		CDS Data Path Register 11
typedef union {
	struct {
		uint8_t CDS_DP_ACCU_LMS_DFE_MU_LANE_3_0          : 4;	/*  [3:0]     r/w 4'h6*/
		uint8_t CDS_DP_ACCU_LMS_BLW_MU_LANE_3_0          : 4;	/*  [7:4]     r/w 4'h5*/
		uint8_t CDS_DP_ACCU_LMS_GAIN_MU_LANE_3_0         : 4;	/* [11:8]     r/w 4'h6*/
		uint8_t CDS_DP_ACCU_LMS_FFE_FLT_MU_LANE_3_0      : 4;	/*[15:12]     r/w 4'h6*/
		uint8_t CDS_DP_ACCU_LMS_FFE_PST_ALL_MU_LANE_3_0  : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t CDS_DP_ACCU_LMS_FFE_PST1_MU_LANE_3_0     : 4;	/*[23:20]     r/w 4'h6*/
		uint8_t CDS_DP_ACCU_LMS_FFE_PRE_ALL_MU_LANE_3_0  : 4;	/*[27:24]     r/w 4'h6*/
		uint8_t CDS_DP_ACCU_LMS_FFE_PRE1_MU_LANE_3_0     : 4;	/*[31:28]     r/w 4'h6*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_CFG_REG11_t;
__xdata __at( 0x614c ) volatile CDS_DP_CFG_REG11_t CDS_DP_CFG_REG11;
#define reg_CDS_DP_ACCU_LMS_DFE_MU_LANE_3_0  CDS_DP_CFG_REG11.BF.CDS_DP_ACCU_LMS_DFE_MU_LANE_3_0
#define reg_CDS_DP_ACCU_LMS_BLW_MU_LANE_3_0  CDS_DP_CFG_REG11.BF.CDS_DP_ACCU_LMS_BLW_MU_LANE_3_0
#define reg_CDS_DP_ACCU_LMS_GAIN_MU_LANE_3_0  CDS_DP_CFG_REG11.BF.CDS_DP_ACCU_LMS_GAIN_MU_LANE_3_0
#define reg_CDS_DP_ACCU_LMS_FFE_FLT_MU_LANE_3_0  CDS_DP_CFG_REG11.BF.CDS_DP_ACCU_LMS_FFE_FLT_MU_LANE_3_0
#define reg_CDS_DP_ACCU_LMS_FFE_PST_ALL_MU_LANE_3_0  CDS_DP_CFG_REG11.BF.CDS_DP_ACCU_LMS_FFE_PST_ALL_MU_LANE_3_0
#define reg_CDS_DP_ACCU_LMS_FFE_PST1_MU_LANE_3_0  CDS_DP_CFG_REG11.BF.CDS_DP_ACCU_LMS_FFE_PST1_MU_LANE_3_0
#define reg_CDS_DP_ACCU_LMS_FFE_PRE_ALL_MU_LANE_3_0  CDS_DP_CFG_REG11.BF.CDS_DP_ACCU_LMS_FFE_PRE_ALL_MU_LANE_3_0
#define reg_CDS_DP_ACCU_LMS_FFE_PRE1_MU_LANE_3_0  CDS_DP_CFG_REG11.BF.CDS_DP_ACCU_LMS_FFE_PRE1_MU_LANE_3_0

// 0x0150	CDS_TIMER0		CDS Timer 0
typedef union {
	struct {
		uint8_t CDS_DTL_EQL_TIMER_LANE_15_0_b0           : 8;	/* [15:0]     r/w 16'h4*/
		uint8_t CDS_DTL_EQL_TIMER_LANE_15_0_b1           : 8;	/* [15:0]     r/w 16'h4*/
		uint8_t CDS_DTL_BLIND_TIMER_LANE_15_0_b0         : 8;	/*[31:16]     r/w 16'h4*/
		uint8_t CDS_DTL_BLIND_TIMER_LANE_15_0_b1         : 8;	/*[31:16]     r/w 16'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER0_t;
__xdata __at( 0x6150 ) volatile CDS_TIMER0_t CDS_TIMER0;
#define reg_CDS_DTL_EQL_TIMER_LANE_15_0_b0  CDS_TIMER0.BF.CDS_DTL_EQL_TIMER_LANE_15_0_b0
#define reg_CDS_DTL_EQL_TIMER_LANE_15_0_b1  CDS_TIMER0.BF.CDS_DTL_EQL_TIMER_LANE_15_0_b1
#define reg_CDS_DTL_BLIND_TIMER_LANE_15_0_b0  CDS_TIMER0.BF.CDS_DTL_BLIND_TIMER_LANE_15_0_b0
#define reg_CDS_DTL_BLIND_TIMER_LANE_15_0_b1  CDS_TIMER0.BF.CDS_DTL_BLIND_TIMER_LANE_15_0_b1
#define reg_CDS_DTL_EQL_TIMER_LANE_15_0  CDS_TIMER0.WT.W0
#define reg_CDS_DTL_BLIND_TIMER_LANE_15_0  CDS_TIMER0.WT.W1

// 0x0154	CDS_TIMER1		CDS Timer 1
typedef union {
	struct {
		uint8_t CDS_DTL_FINE_TIMER_LANE_15_0_b0          : 8;	/* [15:0]     r/w 16'h2*/
		uint8_t CDS_DTL_FINE_TIMER_LANE_15_0_b1          : 8;	/* [15:0]     r/w 16'h2*/
		uint8_t CDS_DTL_COARSE_TIMER_LANE_15_0_b0        : 8;	/*[31:16]     r/w 16'h4*/
		uint8_t CDS_DTL_COARSE_TIMER_LANE_15_0_b1        : 8;	/*[31:16]     r/w 16'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER1_t;
__xdata __at( 0x6154 ) volatile CDS_TIMER1_t CDS_TIMER1;
#define reg_CDS_DTL_FINE_TIMER_LANE_15_0_b0  CDS_TIMER1.BF.CDS_DTL_FINE_TIMER_LANE_15_0_b0
#define reg_CDS_DTL_FINE_TIMER_LANE_15_0_b1  CDS_TIMER1.BF.CDS_DTL_FINE_TIMER_LANE_15_0_b1
#define reg_CDS_DTL_COARSE_TIMER_LANE_15_0_b0  CDS_TIMER1.BF.CDS_DTL_COARSE_TIMER_LANE_15_0_b0
#define reg_CDS_DTL_COARSE_TIMER_LANE_15_0_b1  CDS_TIMER1.BF.CDS_DTL_COARSE_TIMER_LANE_15_0_b1
#define reg_CDS_DTL_FINE_TIMER_LANE_15_0  CDS_TIMER1.WT.W0
#define reg_CDS_DTL_COARSE_TIMER_LANE_15_0  CDS_TIMER1.WT.W1

// 0x0158	CDS_TIMER2		CDS Timer 2
typedef union {
	struct {
		uint8_t CDS_DTL_ACCU_TIMER_LANE_15_0_b0          : 8;	/* [15:0]     r/w 16'h2*/
		uint8_t CDS_DTL_ACCU_TIMER_LANE_15_0_b1          : 8;	/* [15:0]     r/w 16'h2*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER2_t;
__xdata __at( 0x6158 ) volatile CDS_TIMER2_t CDS_TIMER2;
#define reg_CDS_DTL_ACCU_TIMER_LANE_15_0_b0  CDS_TIMER2.BF.CDS_DTL_ACCU_TIMER_LANE_15_0_b0
#define reg_CDS_DTL_ACCU_TIMER_LANE_15_0_b1  CDS_TIMER2.BF.CDS_DTL_ACCU_TIMER_LANE_15_0_b1
#define reg_CDS_DTL_ACCU_TIMER_LANE_15_0  CDS_TIMER2.WT.W0

// 0x015c	CDS_TIMER3		CDS Timer 3
typedef union {
	struct {
		uint8_t CDS_DP_COARSE_TIMER_LANE_15_0_b0         : 8;	/* [15:0]     r/w 16'h4*/
		uint8_t CDS_DP_COARSE_TIMER_LANE_15_0_b1         : 8;	/* [15:0]     r/w 16'h4*/
		uint8_t CDS_DP_BLIND_TIMER_LANE_15_0_b0          : 8;	/*[31:16]     r/w 16'h4*/
		uint8_t CDS_DP_BLIND_TIMER_LANE_15_0_b1          : 8;	/*[31:16]     r/w 16'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER3_t;
__xdata __at( 0x615c ) volatile CDS_TIMER3_t CDS_TIMER3;
#define reg_CDS_DP_COARSE_TIMER_LANE_15_0_b0  CDS_TIMER3.BF.CDS_DP_COARSE_TIMER_LANE_15_0_b0
#define reg_CDS_DP_COARSE_TIMER_LANE_15_0_b1  CDS_TIMER3.BF.CDS_DP_COARSE_TIMER_LANE_15_0_b1
#define reg_CDS_DP_BLIND_TIMER_LANE_15_0_b0  CDS_TIMER3.BF.CDS_DP_BLIND_TIMER_LANE_15_0_b0
#define reg_CDS_DP_BLIND_TIMER_LANE_15_0_b1  CDS_TIMER3.BF.CDS_DP_BLIND_TIMER_LANE_15_0_b1
#define reg_CDS_DP_COARSE_TIMER_LANE_15_0  CDS_TIMER3.WT.W0
#define reg_CDS_DP_BLIND_TIMER_LANE_15_0  CDS_TIMER3.WT.W1

// 0x0160	CDS_TIMER4		CDS Timer 4
typedef union {
	struct {
		uint8_t CDS_DP_ACCU_TIMER_LANE_15_0_b0           : 8;	/* [15:0]     r/w 16'h2*/
		uint8_t CDS_DP_ACCU_TIMER_LANE_15_0_b1           : 8;	/* [15:0]     r/w 16'h2*/
		uint8_t CDS_DP_FINE_TIMER_LANE_15_0_b0           : 8;	/*[31:16]     r/w 16'h4*/
		uint8_t CDS_DP_FINE_TIMER_LANE_15_0_b1           : 8;	/*[31:16]     r/w 16'h4*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_TIMER4_t;
__xdata __at( 0x6160 ) volatile CDS_TIMER4_t CDS_TIMER4;
#define reg_CDS_DP_ACCU_TIMER_LANE_15_0_b0  CDS_TIMER4.BF.CDS_DP_ACCU_TIMER_LANE_15_0_b0
#define reg_CDS_DP_ACCU_TIMER_LANE_15_0_b1  CDS_TIMER4.BF.CDS_DP_ACCU_TIMER_LANE_15_0_b1
#define reg_CDS_DP_FINE_TIMER_LANE_15_0_b0  CDS_TIMER4.BF.CDS_DP_FINE_TIMER_LANE_15_0_b0
#define reg_CDS_DP_FINE_TIMER_LANE_15_0_b1  CDS_TIMER4.BF.CDS_DP_FINE_TIMER_LANE_15_0_b1
#define reg_CDS_DP_ACCU_TIMER_LANE_15_0  CDS_TIMER4.WT.W0
#define reg_CDS_DP_FINE_TIMER_LANE_15_0  CDS_TIMER4.WT.W1

// 0x0164	CDS_MISC		CDS Misc
typedef union {
	struct {
		uint8_t CDS_DTL_FREQ_OFST_LANE_15_0_b0           : 8;	/* [15:0]     r/w 16'h2000*/
		uint8_t CDS_DTL_FREQ_OFST_LANE_15_0_b1           : 8;	/* [15:0]     r/w 16'h2000*/
		uint8_t CDS_DP_BLIND_LMS_GAIN_LANE_10_0_b0       : 8;	/*[26:16]     r/w 11'h180*/
		uint8_t CDS_DP_BLIND_LMS_GAIN_LANE_10_0_b1       : 3;	/*[26:16]     r/w 11'h180*/
		uint8_t CDS_DTL_PH_SCN_BI_DIR_EN_LANE            : 1;	/*     27     r/w   0*/
		uint8_t RESERVED_28                              : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} CDS_MISC_t;
__xdata __at( 0x6164 ) volatile CDS_MISC_t CDS_MISC;
#define reg_CDS_DTL_FREQ_OFST_LANE_15_0_b0  CDS_MISC.BF.CDS_DTL_FREQ_OFST_LANE_15_0_b0
#define reg_CDS_DTL_FREQ_OFST_LANE_15_0_b1  CDS_MISC.BF.CDS_DTL_FREQ_OFST_LANE_15_0_b1
#define reg_CDS_DP_BLIND_LMS_GAIN_LANE_10_0_b0  CDS_MISC.BF.CDS_DP_BLIND_LMS_GAIN_LANE_10_0_b0
#define reg_CDS_DP_BLIND_LMS_GAIN_LANE_10_0_b1  CDS_MISC.BF.CDS_DP_BLIND_LMS_GAIN_LANE_10_0_b1
#define reg_CDS_DTL_PH_SCN_BI_DIR_EN_LANE  CDS_MISC.BF.CDS_DTL_PH_SCN_BI_DIR_EN_LANE
#define reg_CDS_DTL_FREQ_OFST_LANE_15_0  CDS_MISC.WT.W0

// 0x0168	CDS_TOP		CDS Top
typedef union {
	struct {
		uint8_t CDS_STATE_LANE_7_0                       : 8;	/*  [7:0]       r   0*/
		uint8_t RESERVED_8                               : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [31:8]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/* [31:8]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_TOP_t;
__xdata __at( 0x6168 ) volatile CDS_TOP_t CDS_TOP;
#define reg_CDS_STATE_LANE_7_0  CDS_TOP.BF.CDS_STATE_LANE_7_0

// 0x0170	CDS_DTL_LMS_REG0		CDS DTL LMS Register 0
typedef union {
	struct {
		uint8_t CDS_DTL_LMS_FFE_PST2_EXT_LANE_4_0        : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PST1_EXT_LANE_5_0        : 6;	/* [13:8]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PRE2_EXT_LANE_4_0        : 5;	/*[20:16]     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PRE1_EXT_LANE_5_0        : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_LMS_REG0_t;
__xdata __at( 0x6170 ) volatile CDS_DTL_LMS_REG0_t CDS_DTL_LMS_REG0;
#define reg_CDS_DTL_LMS_FFE_PST2_EXT_LANE_4_0  CDS_DTL_LMS_REG0.BF.CDS_DTL_LMS_FFE_PST2_EXT_LANE_4_0
#define reg_CDS_DTL_LMS_FFE_PST1_EXT_LANE_5_0  CDS_DTL_LMS_REG0.BF.CDS_DTL_LMS_FFE_PST1_EXT_LANE_5_0
#define reg_CDS_DTL_LMS_FFE_PRE2_EXT_LANE_4_0  CDS_DTL_LMS_REG0.BF.CDS_DTL_LMS_FFE_PRE2_EXT_LANE_4_0
#define reg_CDS_DTL_LMS_FFE_PRE1_EXT_LANE_5_0  CDS_DTL_LMS_REG0.BF.CDS_DTL_LMS_FFE_PRE1_EXT_LANE_5_0

// 0x0174	CDS_DTL_LMS_REG1		CDS DTL LMS Register 1
typedef union {
	struct {
		uint8_t CDS_DTL_LMS_BLW_EXT_LANE_4_0             : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b0         : 8;	/* [17:8]     r/w   0*/
		uint8_t CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b1         : 2;	/* [17:8]     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PST3_EXT_LANE_3_0        : 4;	/*[27:24]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PRE3_EXT_LANE_3_0        : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_LMS_REG1_t;
__xdata __at( 0x6174 ) volatile CDS_DTL_LMS_REG1_t CDS_DTL_LMS_REG1;
#define reg_CDS_DTL_LMS_BLW_EXT_LANE_4_0  CDS_DTL_LMS_REG1.BF.CDS_DTL_LMS_BLW_EXT_LANE_4_0
#define reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b0  CDS_DTL_LMS_REG1.BF.CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b0
#define reg_CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b1  CDS_DTL_LMS_REG1.BF.CDS_DTL_LMS_GAIN_EXT_LANE_9_0_b1
#define reg_CDS_DTL_LMS_FFE_PST3_EXT_LANE_3_0  CDS_DTL_LMS_REG1.BF.CDS_DTL_LMS_FFE_PST3_EXT_LANE_3_0
#define reg_CDS_DTL_LMS_FFE_PRE3_EXT_LANE_3_0  CDS_DTL_LMS_REG1.BF.CDS_DTL_LMS_FFE_PRE3_EXT_LANE_3_0

// 0x0178	CDS_DTL_LMS_REG2		CDS DTL LMS Register 2
typedef union {
	struct {
		uint8_t CDS_DTL_LMS_FFE_PST2_SAV_LANE_4_0        : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PST1_SAV_LANE_5_0        : 6;	/* [13:8]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PRE2_SAV_LANE_4_0        : 5;	/*[20:16]     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PRE1_SAV_LANE_5_0        : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_LMS_REG2_t;
__xdata __at( 0x6178 ) volatile CDS_DTL_LMS_REG2_t CDS_DTL_LMS_REG2;
#define reg_CDS_DTL_LMS_FFE_PST2_SAV_LANE_4_0  CDS_DTL_LMS_REG2.BF.CDS_DTL_LMS_FFE_PST2_SAV_LANE_4_0
#define reg_CDS_DTL_LMS_FFE_PST1_SAV_LANE_5_0  CDS_DTL_LMS_REG2.BF.CDS_DTL_LMS_FFE_PST1_SAV_LANE_5_0
#define reg_CDS_DTL_LMS_FFE_PRE2_SAV_LANE_4_0  CDS_DTL_LMS_REG2.BF.CDS_DTL_LMS_FFE_PRE2_SAV_LANE_4_0
#define reg_CDS_DTL_LMS_FFE_PRE1_SAV_LANE_5_0  CDS_DTL_LMS_REG2.BF.CDS_DTL_LMS_FFE_PRE1_SAV_LANE_5_0

// 0x017c	CDS_DTL_LMS_REG3		CDS DTL LMS Register 3
typedef union {
	struct {
		uint8_t CDS_DTL_LMS_BLW_SAV_LANE_4_0             : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t CDS_DTL_LMS_GAIN_SAV_LANE_9_0_b0         : 8;	/* [17:8]     r/w   0*/
		uint8_t CDS_DTL_LMS_GAIN_SAV_LANE_9_0_b1         : 2;	/* [17:8]     r/w   0*/
		uint8_t RESERVED_18                              : 6;	/*[23:18]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PST3_SAV_LANE_3_0        : 4;	/*[27:24]     r/w   0*/
		uint8_t CDS_DTL_LMS_FFE_PRE3_SAV_LANE_3_0        : 4;	/*[31:28]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DTL_LMS_REG3_t;
__xdata __at( 0x617c ) volatile CDS_DTL_LMS_REG3_t CDS_DTL_LMS_REG3;
#define reg_CDS_DTL_LMS_BLW_SAV_LANE_4_0  CDS_DTL_LMS_REG3.BF.CDS_DTL_LMS_BLW_SAV_LANE_4_0
#define reg_CDS_DTL_LMS_GAIN_SAV_LANE_9_0_b0  CDS_DTL_LMS_REG3.BF.CDS_DTL_LMS_GAIN_SAV_LANE_9_0_b0
#define reg_CDS_DTL_LMS_GAIN_SAV_LANE_9_0_b1  CDS_DTL_LMS_REG3.BF.CDS_DTL_LMS_GAIN_SAV_LANE_9_0_b1
#define reg_CDS_DTL_LMS_FFE_PST3_SAV_LANE_3_0  CDS_DTL_LMS_REG3.BF.CDS_DTL_LMS_FFE_PST3_SAV_LANE_3_0
#define reg_CDS_DTL_LMS_FFE_PRE3_SAV_LANE_3_0  CDS_DTL_LMS_REG3.BF.CDS_DTL_LMS_FFE_PRE3_SAV_LANE_3_0

// 0x0180	CDS_DP_LMS_REG0		CDS DP LMS Register 0
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_PRE4_EXT_LANE_4_0         : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE3_EXT_LANE_4_0         : 5;	/* [12:8]     r/w   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE2_EXT_LANE_5_0         : 6;	/*[21:16]     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE1_EXT_LANE_6_0         : 7;	/*[30:24]     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG0_t;
__xdata __at( 0x6180 ) volatile CDS_DP_LMS_REG0_t CDS_DP_LMS_REG0;
#define reg_CDS_DP_LMS_FFE_PRE4_EXT_LANE_4_0  CDS_DP_LMS_REG0.BF.CDS_DP_LMS_FFE_PRE4_EXT_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PRE3_EXT_LANE_4_0  CDS_DP_LMS_REG0.BF.CDS_DP_LMS_FFE_PRE3_EXT_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PRE2_EXT_LANE_5_0  CDS_DP_LMS_REG0.BF.CDS_DP_LMS_FFE_PRE2_EXT_LANE_5_0
#define reg_CDS_DP_LMS_FFE_PRE1_EXT_LANE_6_0  CDS_DP_LMS_REG0.BF.CDS_DP_LMS_FFE_PRE1_EXT_LANE_6_0

// 0x0184	CDS_DP_LMS_REG1		CDS DP LMS Register 1
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_PST3_EXT_LANE_4_0         : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST2_EXT_LANE_5_0         : 6;	/* [13:8]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST1_EXT_LANE_6_0         : 7;	/*[22:16]     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE6_EXT_LANE_2_0         : 3;	/*[26:24]     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE5_EXT_LANE_2_0         : 3;	/*[30:28]     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG1_t;
__xdata __at( 0x6184 ) volatile CDS_DP_LMS_REG1_t CDS_DP_LMS_REG1;
#define reg_CDS_DP_LMS_FFE_PST3_EXT_LANE_4_0  CDS_DP_LMS_REG1.BF.CDS_DP_LMS_FFE_PST3_EXT_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PST2_EXT_LANE_5_0  CDS_DP_LMS_REG1.BF.CDS_DP_LMS_FFE_PST2_EXT_LANE_5_0
#define reg_CDS_DP_LMS_FFE_PST1_EXT_LANE_6_0  CDS_DP_LMS_REG1.BF.CDS_DP_LMS_FFE_PST1_EXT_LANE_6_0
#define reg_CDS_DP_LMS_FFE_PRE6_EXT_LANE_2_0  CDS_DP_LMS_REG1.BF.CDS_DP_LMS_FFE_PRE6_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PRE5_EXT_LANE_2_0  CDS_DP_LMS_REG1.BF.CDS_DP_LMS_FFE_PRE5_EXT_LANE_2_0

// 0x0188	CDS_DP_LMS_REG2		CDS DP LMS Register 2
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_PST8_EXT_LANE_3_0         : 4;	/*  [3:0]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST7_EXT_LANE_3_0         : 4;	/*  [7:4]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST6_EXT_LANE_4_0         : 5;	/* [12:8]     r/w   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST5_EXT_LANE_4_0         : 5;	/*[20:16]     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST4_EXT_LANE_4_0         : 5;	/*[28:24]     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG2_t;
__xdata __at( 0x6188 ) volatile CDS_DP_LMS_REG2_t CDS_DP_LMS_REG2;
#define reg_CDS_DP_LMS_FFE_PST8_EXT_LANE_3_0  CDS_DP_LMS_REG2.BF.CDS_DP_LMS_FFE_PST8_EXT_LANE_3_0
#define reg_CDS_DP_LMS_FFE_PST7_EXT_LANE_3_0  CDS_DP_LMS_REG2.BF.CDS_DP_LMS_FFE_PST7_EXT_LANE_3_0
#define reg_CDS_DP_LMS_FFE_PST6_EXT_LANE_4_0  CDS_DP_LMS_REG2.BF.CDS_DP_LMS_FFE_PST6_EXT_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PST5_EXT_LANE_4_0  CDS_DP_LMS_REG2.BF.CDS_DP_LMS_FFE_PST5_EXT_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PST4_EXT_LANE_4_0  CDS_DP_LMS_REG2.BF.CDS_DP_LMS_FFE_PST4_EXT_LANE_4_0

// 0x018c	CDS_DP_LMS_REG3		CDS DP LMS Register 3
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_PST16_EXT_LANE_2_0        : 3;	/*  [2:0]     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST15_EXT_LANE_2_0        : 3;	/*  [6:4]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST14_EXT_LANE_2_0        : 3;	/* [10:8]     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST13_EXT_LANE_2_0        : 3;	/*[14:12]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST12_EXT_LANE_2_0        : 3;	/*[18:16]     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST11_EXT_LANE_2_0        : 3;	/*[22:20]     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST10_EXT_LANE_2_0        : 3;	/*[26:24]     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST9_EXT_LANE_2_0         : 3;	/*[30:28]     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG3_t;
__xdata __at( 0x618c ) volatile CDS_DP_LMS_REG3_t CDS_DP_LMS_REG3;
#define reg_CDS_DP_LMS_FFE_PST16_EXT_LANE_2_0  CDS_DP_LMS_REG3.BF.CDS_DP_LMS_FFE_PST16_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST15_EXT_LANE_2_0  CDS_DP_LMS_REG3.BF.CDS_DP_LMS_FFE_PST15_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST14_EXT_LANE_2_0  CDS_DP_LMS_REG3.BF.CDS_DP_LMS_FFE_PST14_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST13_EXT_LANE_2_0  CDS_DP_LMS_REG3.BF.CDS_DP_LMS_FFE_PST13_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST12_EXT_LANE_2_0  CDS_DP_LMS_REG3.BF.CDS_DP_LMS_FFE_PST12_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST11_EXT_LANE_2_0  CDS_DP_LMS_REG3.BF.CDS_DP_LMS_FFE_PST11_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST10_EXT_LANE_2_0  CDS_DP_LMS_REG3.BF.CDS_DP_LMS_FFE_PST10_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST9_EXT_LANE_2_0  CDS_DP_LMS_REG3.BF.CDS_DP_LMS_FFE_PST9_EXT_LANE_2_0

// 0x0190	CDS_DP_LMS_REG4		CDS DP LMS Register 4
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_FLT8_EXT_LANE_2_0         : 3;	/*  [2:0]     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT7_EXT_LANE_2_0         : 3;	/*  [6:4]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT6_EXT_LANE_2_0         : 3;	/* [10:8]     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT5_EXT_LANE_2_0         : 3;	/*[14:12]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT4_EXT_LANE_2_0         : 3;	/*[18:16]     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT3_EXT_LANE_2_0         : 3;	/*[22:20]     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT2_EXT_LANE_2_0         : 3;	/*[26:24]     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT1_EXT_LANE_2_0         : 3;	/*[30:28]     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG4_t;
__xdata __at( 0x6190 ) volatile CDS_DP_LMS_REG4_t CDS_DP_LMS_REG4;
#define reg_CDS_DP_LMS_FFE_FLT8_EXT_LANE_2_0  CDS_DP_LMS_REG4.BF.CDS_DP_LMS_FFE_FLT8_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT7_EXT_LANE_2_0  CDS_DP_LMS_REG4.BF.CDS_DP_LMS_FFE_FLT7_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT6_EXT_LANE_2_0  CDS_DP_LMS_REG4.BF.CDS_DP_LMS_FFE_FLT6_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT5_EXT_LANE_2_0  CDS_DP_LMS_REG4.BF.CDS_DP_LMS_FFE_FLT5_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT4_EXT_LANE_2_0  CDS_DP_LMS_REG4.BF.CDS_DP_LMS_FFE_FLT4_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT3_EXT_LANE_2_0  CDS_DP_LMS_REG4.BF.CDS_DP_LMS_FFE_FLT3_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT2_EXT_LANE_2_0  CDS_DP_LMS_REG4.BF.CDS_DP_LMS_FFE_FLT2_EXT_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT1_EXT_LANE_2_0  CDS_DP_LMS_REG4.BF.CDS_DP_LMS_FFE_FLT1_EXT_LANE_2_0

// 0x0194	CDS_DP_LMS_REG5		CDS DP LMS Register 5
typedef union {
	struct {
		uint8_t CDS_DP_LMS_DFE_EXT_LANE_5_0              : 6;	/*  [5:0]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t CDS_DP_LMS_BLW_EXT_LANE_5_0              : 6;	/* [13:8]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:14]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG5_t;
__xdata __at( 0x6194 ) volatile CDS_DP_LMS_REG5_t CDS_DP_LMS_REG5;
#define reg_CDS_DP_LMS_DFE_EXT_LANE_5_0  CDS_DP_LMS_REG5.BF.CDS_DP_LMS_DFE_EXT_LANE_5_0
#define reg_CDS_DP_LMS_BLW_EXT_LANE_5_0  CDS_DP_LMS_REG5.BF.CDS_DP_LMS_BLW_EXT_LANE_5_0

// 0x0198	CDS_DP_LMS_REG6		CDS DP LMS Register 6
typedef union {
	struct {
		uint8_t CDS_DP_LMS_GAIN_EXT_LANE_10_0_b0         : 8;	/* [10:0]     r/w   0*/
		uint8_t CDS_DP_LMS_GAIN_EXT_LANE_10_0_b1         : 3;	/* [10:0]     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t CDS_DP_FFE_FLT_B1_SEL_EXT_LANE_5_0       : 6;	/*[21:16]     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t CDS_DP_FFE_FLT_B0_SEL_EXT_LANE_5_0       : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG6_t;
__xdata __at( 0x6198 ) volatile CDS_DP_LMS_REG6_t CDS_DP_LMS_REG6;
#define reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b0  CDS_DP_LMS_REG6.BF.CDS_DP_LMS_GAIN_EXT_LANE_10_0_b0
#define reg_CDS_DP_LMS_GAIN_EXT_LANE_10_0_b1  CDS_DP_LMS_REG6.BF.CDS_DP_LMS_GAIN_EXT_LANE_10_0_b1
#define reg_CDS_DP_FFE_FLT_B1_SEL_EXT_LANE_5_0  CDS_DP_LMS_REG6.BF.CDS_DP_FFE_FLT_B1_SEL_EXT_LANE_5_0
#define reg_CDS_DP_FFE_FLT_B0_SEL_EXT_LANE_5_0  CDS_DP_LMS_REG6.BF.CDS_DP_FFE_FLT_B0_SEL_EXT_LANE_5_0

// 0x01a0	CDS_DP_LMS_REG8		CDS DP LMS Register 8
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_PRE4_SAV_LANE_4_0         : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE3_SAV_LANE_4_0         : 5;	/* [12:8]     r/w   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE2_SAV_LANE_5_0         : 6;	/*[21:16]     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE1_SAV_LANE_6_0         : 7;	/*[30:24]     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG8_t;
__xdata __at( 0x61a0 ) volatile CDS_DP_LMS_REG8_t CDS_DP_LMS_REG8;
#define reg_CDS_DP_LMS_FFE_PRE4_SAV_LANE_4_0  CDS_DP_LMS_REG8.BF.CDS_DP_LMS_FFE_PRE4_SAV_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PRE3_SAV_LANE_4_0  CDS_DP_LMS_REG8.BF.CDS_DP_LMS_FFE_PRE3_SAV_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PRE2_SAV_LANE_5_0  CDS_DP_LMS_REG8.BF.CDS_DP_LMS_FFE_PRE2_SAV_LANE_5_0
#define reg_CDS_DP_LMS_FFE_PRE1_SAV_LANE_6_0  CDS_DP_LMS_REG8.BF.CDS_DP_LMS_FFE_PRE1_SAV_LANE_6_0

// 0x01a4	CDS_DP_LMS_REG9		CDS DP LMS Register 9
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_PST3_SAV_LANE_4_0         : 5;	/*  [4:0]     r/w   0*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST2_SAV_LANE_5_0         : 6;	/* [13:8]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST1_SAV_LANE_6_0         : 7;	/*[22:16]     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE6_SAV_LANE_2_0         : 3;	/*[26:24]     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PRE5_SAV_LANE_2_0         : 3;	/*[30:28]     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG9_t;
__xdata __at( 0x61a4 ) volatile CDS_DP_LMS_REG9_t CDS_DP_LMS_REG9;
#define reg_CDS_DP_LMS_FFE_PST3_SAV_LANE_4_0  CDS_DP_LMS_REG9.BF.CDS_DP_LMS_FFE_PST3_SAV_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PST2_SAV_LANE_5_0  CDS_DP_LMS_REG9.BF.CDS_DP_LMS_FFE_PST2_SAV_LANE_5_0
#define reg_CDS_DP_LMS_FFE_PST1_SAV_LANE_6_0  CDS_DP_LMS_REG9.BF.CDS_DP_LMS_FFE_PST1_SAV_LANE_6_0
#define reg_CDS_DP_LMS_FFE_PRE6_SAV_LANE_2_0  CDS_DP_LMS_REG9.BF.CDS_DP_LMS_FFE_PRE6_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PRE5_SAV_LANE_2_0  CDS_DP_LMS_REG9.BF.CDS_DP_LMS_FFE_PRE5_SAV_LANE_2_0

// 0x01a8	CDS_DP_LMS_REG10		CDS DP LMS Register 10
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_PST8_SAV_LANE_3_0         : 4;	/*  [3:0]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST7_SAV_LANE_3_0         : 4;	/*  [7:4]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST6_SAV_LANE_4_0         : 5;	/* [12:8]     r/w   0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST5_SAV_LANE_4_0         : 5;	/*[20:16]     r/w   0*/
		uint8_t RESERVED_21                              : 3;	/*[23:21]     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST4_SAV_LANE_4_0         : 5;	/*[28:24]     r/w   0*/
		uint8_t RESERVED_29                              : 3;	/*[31:29]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG10_t;
__xdata __at( 0x61a8 ) volatile CDS_DP_LMS_REG10_t CDS_DP_LMS_REG10;
#define reg_CDS_DP_LMS_FFE_PST8_SAV_LANE_3_0  CDS_DP_LMS_REG10.BF.CDS_DP_LMS_FFE_PST8_SAV_LANE_3_0
#define reg_CDS_DP_LMS_FFE_PST7_SAV_LANE_3_0  CDS_DP_LMS_REG10.BF.CDS_DP_LMS_FFE_PST7_SAV_LANE_3_0
#define reg_CDS_DP_LMS_FFE_PST6_SAV_LANE_4_0  CDS_DP_LMS_REG10.BF.CDS_DP_LMS_FFE_PST6_SAV_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PST5_SAV_LANE_4_0  CDS_DP_LMS_REG10.BF.CDS_DP_LMS_FFE_PST5_SAV_LANE_4_0
#define reg_CDS_DP_LMS_FFE_PST4_SAV_LANE_4_0  CDS_DP_LMS_REG10.BF.CDS_DP_LMS_FFE_PST4_SAV_LANE_4_0

// 0x01ac	CDS_DP_LMS_REG11		CDS DP LMS Register 11
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_PST16_SAV_LANE_2_0        : 3;	/*  [2:0]     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST15_SAV_LANE_2_0        : 3;	/*  [6:4]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST14_SAV_LANE_2_0        : 3;	/* [10:8]     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST13_SAV_LANE_2_0        : 3;	/*[14:12]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST12_SAV_LANE_2_0        : 3;	/*[18:16]     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST11_SAV_LANE_2_0        : 3;	/*[22:20]     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST10_SAV_LANE_2_0        : 3;	/*[26:24]     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_PST9_SAV_LANE_2_0         : 3;	/*[30:28]     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG11_t;
__xdata __at( 0x61ac ) volatile CDS_DP_LMS_REG11_t CDS_DP_LMS_REG11;
#define reg_CDS_DP_LMS_FFE_PST16_SAV_LANE_2_0  CDS_DP_LMS_REG11.BF.CDS_DP_LMS_FFE_PST16_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST15_SAV_LANE_2_0  CDS_DP_LMS_REG11.BF.CDS_DP_LMS_FFE_PST15_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST14_SAV_LANE_2_0  CDS_DP_LMS_REG11.BF.CDS_DP_LMS_FFE_PST14_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST13_SAV_LANE_2_0  CDS_DP_LMS_REG11.BF.CDS_DP_LMS_FFE_PST13_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST12_SAV_LANE_2_0  CDS_DP_LMS_REG11.BF.CDS_DP_LMS_FFE_PST12_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST11_SAV_LANE_2_0  CDS_DP_LMS_REG11.BF.CDS_DP_LMS_FFE_PST11_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST10_SAV_LANE_2_0  CDS_DP_LMS_REG11.BF.CDS_DP_LMS_FFE_PST10_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_PST9_SAV_LANE_2_0  CDS_DP_LMS_REG11.BF.CDS_DP_LMS_FFE_PST9_SAV_LANE_2_0

// 0x01b0	CDS_DP_LMS_REG12		CDS DP LMS Register 12
typedef union {
	struct {
		uint8_t CDS_DP_LMS_FFE_FLT8_SAV_LANE_2_0         : 3;	/*  [2:0]     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT7_SAV_LANE_2_0         : 3;	/*  [6:4]     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT6_SAV_LANE_2_0         : 3;	/* [10:8]     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT5_SAV_LANE_2_0         : 3;	/*[14:12]     r/w   0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT4_SAV_LANE_2_0         : 3;	/*[18:16]     r/w   0*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT3_SAV_LANE_2_0         : 3;	/*[22:20]     r/w   0*/
		uint8_t RESERVED_23                              : 1;	/*     23     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT2_SAV_LANE_2_0         : 3;	/*[26:24]     r/w   0*/
		uint8_t RESERVED_27                              : 1;	/*     27     r/w   0*/
		uint8_t CDS_DP_LMS_FFE_FLT1_SAV_LANE_2_0         : 3;	/*[30:28]     r/w   0*/
		uint8_t RESERVED_31                              : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG12_t;
__xdata __at( 0x61b0 ) volatile CDS_DP_LMS_REG12_t CDS_DP_LMS_REG12;
#define reg_CDS_DP_LMS_FFE_FLT8_SAV_LANE_2_0  CDS_DP_LMS_REG12.BF.CDS_DP_LMS_FFE_FLT8_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT7_SAV_LANE_2_0  CDS_DP_LMS_REG12.BF.CDS_DP_LMS_FFE_FLT7_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT6_SAV_LANE_2_0  CDS_DP_LMS_REG12.BF.CDS_DP_LMS_FFE_FLT6_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT5_SAV_LANE_2_0  CDS_DP_LMS_REG12.BF.CDS_DP_LMS_FFE_FLT5_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT4_SAV_LANE_2_0  CDS_DP_LMS_REG12.BF.CDS_DP_LMS_FFE_FLT4_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT3_SAV_LANE_2_0  CDS_DP_LMS_REG12.BF.CDS_DP_LMS_FFE_FLT3_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT2_SAV_LANE_2_0  CDS_DP_LMS_REG12.BF.CDS_DP_LMS_FFE_FLT2_SAV_LANE_2_0
#define reg_CDS_DP_LMS_FFE_FLT1_SAV_LANE_2_0  CDS_DP_LMS_REG12.BF.CDS_DP_LMS_FFE_FLT1_SAV_LANE_2_0

// 0x01b4	CDS_DP_LMS_REG13		CDS DP LMS Register 13
typedef union {
	struct {
		uint8_t CDS_DP_LMS_DFE_SAV_LANE_5_0              : 6;	/*  [5:0]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t CDS_DP_LMS_BLW_SAV_LANE_5_0              : 6;	/* [13:8]     r/w   0*/
		uint8_t RESERVED_14                              : 2;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:14]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:14]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG13_t;
__xdata __at( 0x61b4 ) volatile CDS_DP_LMS_REG13_t CDS_DP_LMS_REG13;
#define reg_CDS_DP_LMS_DFE_SAV_LANE_5_0  CDS_DP_LMS_REG13.BF.CDS_DP_LMS_DFE_SAV_LANE_5_0
#define reg_CDS_DP_LMS_BLW_SAV_LANE_5_0  CDS_DP_LMS_REG13.BF.CDS_DP_LMS_BLW_SAV_LANE_5_0

// 0x01b8	CDS_DP_LMS_REG14		CDS DP LMS Register 14
typedef union {
	struct {
		uint8_t CDS_DP_LMS_GAIN_SAV_LANE_10_0_b0         : 8;	/* [10:0]     r/w   0*/
		uint8_t CDS_DP_LMS_GAIN_SAV_LANE_10_0_b1         : 3;	/* [10:0]     r/w   0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t CDS_DP_FFE_FLT_B1_SEL_SAV_LANE_5_0       : 6;	/*[21:16]     r/w   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t CDS_DP_FFE_FLT_B0_SEL_SAV_LANE_5_0       : 6;	/*[29:24]     r/w   0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} CDS_DP_LMS_REG14_t;
__xdata __at( 0x61b8 ) volatile CDS_DP_LMS_REG14_t CDS_DP_LMS_REG14;
#define reg_CDS_DP_LMS_GAIN_SAV_LANE_10_0_b0  CDS_DP_LMS_REG14.BF.CDS_DP_LMS_GAIN_SAV_LANE_10_0_b0
#define reg_CDS_DP_LMS_GAIN_SAV_LANE_10_0_b1  CDS_DP_LMS_REG14.BF.CDS_DP_LMS_GAIN_SAV_LANE_10_0_b1
#define reg_CDS_DP_FFE_FLT_B1_SEL_SAV_LANE_5_0  CDS_DP_LMS_REG14.BF.CDS_DP_FFE_FLT_B1_SEL_SAV_LANE_5_0
#define reg_CDS_DP_FFE_FLT_B0_SEL_SAV_LANE_5_0  CDS_DP_LMS_REG14.BF.CDS_DP_FFE_FLT_B0_SEL_SAV_LANE_5_0

// 0x01c0	RX_ADC_CAL_OFST_GAIN_REG		Rx ADC Calibration Offset And Gain Register
typedef union {
	struct {
		uint8_t SU_CTLE_OUT_DC_SEL_LANE_2_0              : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t RESERVED_3                               : 5;	/*  [7:3]     r/w   0*/
		uint8_t SU_ADC_IF_DELTA_ZERO_LANE_4_0            : 5;	/* [12:8]     r/w 5'h1e*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w   0*/
		uint8_t SU_ADC_IF_AVE_REJ_MU_LANE_2_0            : 3;	/*[18:16]     r/w 3'h7*/
		uint8_t RESERVED_19                              : 1;	/*     19     r/w   0*/
		uint8_t SU_ADC_IF_TARGET_MU_LANE_3_0             : 4;	/*[23:20]     r/w 4'h5*/
		uint8_t SU_ADC_IF_GAIN_MU_LANE_3_0               : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t SU_ADC_IF_OFST_MU_LANE_3_0               : 4;	/*[31:28]     r/w 4'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_CAL_OFST_GAIN_REG_t;
__xdata __at( 0x61c0 ) volatile RX_ADC_CAL_OFST_GAIN_REG_t RX_ADC_CAL_OFST_GAIN_REG;
#define reg_SU_CTLE_OUT_DC_SEL_LANE_2_0  RX_ADC_CAL_OFST_GAIN_REG.BF.SU_CTLE_OUT_DC_SEL_LANE_2_0
#define reg_SU_ADC_IF_DELTA_ZERO_LANE_4_0  RX_ADC_CAL_OFST_GAIN_REG.BF.SU_ADC_IF_DELTA_ZERO_LANE_4_0
#define reg_SU_ADC_IF_AVE_REJ_MU_LANE_2_0  RX_ADC_CAL_OFST_GAIN_REG.BF.SU_ADC_IF_AVE_REJ_MU_LANE_2_0
#define reg_SU_ADC_IF_TARGET_MU_LANE_3_0  RX_ADC_CAL_OFST_GAIN_REG.BF.SU_ADC_IF_TARGET_MU_LANE_3_0
#define reg_SU_ADC_IF_GAIN_MU_LANE_3_0  RX_ADC_CAL_OFST_GAIN_REG.BF.SU_ADC_IF_GAIN_MU_LANE_3_0
#define reg_SU_ADC_IF_OFST_MU_LANE_3_0  RX_ADC_CAL_OFST_GAIN_REG.BF.SU_ADC_IF_OFST_MU_LANE_3_0

// 0x01c4	RX_ADC_CAL_SKEW_REG0		Rx ADC Calibration Skew Register 0
typedef union {
	struct {
		uint8_t SU_SKEW_CAL_MU_SHIFT_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h5*/
		uint8_t SU_SKEW_CAL_COARSE_GAIN_LANE_1_0         : 2;	/*  [5:4]     r/w   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t SU_SKEW_CAL_MAP_ROT_LANE_2_0             : 3;	/* [10:8]     r/w   0*/
		uint8_t RESERVED_11                              : 1;	/*     11     r/w   0*/
		uint8_t SU_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0      : 4;	/*[15:12]     r/w 4'h5*/
		uint8_t SU_SKEW_CAL_AVE_MU_LP_LANE_3_0           : 4;	/*[19:16]     r/w 4'h5*/
		uint8_t SU_SKEW_CAL_AVE_REJ_MU_LANE_3_0          : 4;	/*[23:20]     r/w 4'h5*/
		uint8_t SU_SKEW_CAL_AVE_SIZE_LANE_2_0            : 3;	/*[26:24]     r/w   0*/
		uint8_t RESERVED_27                              : 5;	/*[31:27]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_CAL_SKEW_REG0_t;
__xdata __at( 0x61c4 ) volatile RX_ADC_CAL_SKEW_REG0_t RX_ADC_CAL_SKEW_REG0;
#define reg_SU_SKEW_CAL_MU_SHIFT_LANE_3_0  RX_ADC_CAL_SKEW_REG0.BF.SU_SKEW_CAL_MU_SHIFT_LANE_3_0
#define reg_SU_SKEW_CAL_COARSE_GAIN_LANE_1_0  RX_ADC_CAL_SKEW_REG0.BF.SU_SKEW_CAL_COARSE_GAIN_LANE_1_0
#define reg_SU_SKEW_CAL_MAP_ROT_LANE_2_0  RX_ADC_CAL_SKEW_REG0.BF.SU_SKEW_CAL_MAP_ROT_LANE_2_0
#define reg_SU_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0  RX_ADC_CAL_SKEW_REG0.BF.SU_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0
#define reg_SU_SKEW_CAL_AVE_MU_LP_LANE_3_0  RX_ADC_CAL_SKEW_REG0.BF.SU_SKEW_CAL_AVE_MU_LP_LANE_3_0
#define reg_SU_SKEW_CAL_AVE_REJ_MU_LANE_3_0  RX_ADC_CAL_SKEW_REG0.BF.SU_SKEW_CAL_AVE_REJ_MU_LANE_3_0
#define reg_SU_SKEW_CAL_AVE_SIZE_LANE_2_0  RX_ADC_CAL_SKEW_REG0.BF.SU_SKEW_CAL_AVE_SIZE_LANE_2_0

// 0x01c8	RX_ADC_CAL_SKEW_REG1		Rx ADC Calibration Skew Register 1
typedef union {
	struct {
		uint8_t SU_SKEW_CAL_PAT_SEL_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h1a*/
		uint8_t BG_SKEW_CAL_BLIND_EN_LANE                : 1;	/*      6     r/w   0*/
		uint8_t TR_SKEW_CAL_BLIND_EN_LANE                : 1;	/*      7     r/w 1'h1*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w   0*/
		uint8_t BG_ADC_IF_GAIN_MU_LANE_3_0               : 4;	/*[19:16]     r/w 4'h3*/
		uint8_t BG_ADC_IF_OFST_MU_LANE_3_0               : 4;	/*[23:20]     r/w 4'h3*/
		uint8_t TR_ADC_IF_GAIN_MU_LANE_3_0               : 4;	/*[27:24]     r/w 4'h5*/
		uint8_t TR_ADC_IF_OFST_MU_LANE_3_0               : 4;	/*[31:28]     r/w 4'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_CAL_SKEW_REG1_t;
__xdata __at( 0x61c8 ) volatile RX_ADC_CAL_SKEW_REG1_t RX_ADC_CAL_SKEW_REG1;
#define reg_SU_SKEW_CAL_PAT_SEL_LANE_5_0  RX_ADC_CAL_SKEW_REG1.BF.SU_SKEW_CAL_PAT_SEL_LANE_5_0
#define reg_BG_SKEW_CAL_BLIND_EN_LANE  RX_ADC_CAL_SKEW_REG1.BF.BG_SKEW_CAL_BLIND_EN_LANE
#define reg_TR_SKEW_CAL_BLIND_EN_LANE  RX_ADC_CAL_SKEW_REG1.BF.TR_SKEW_CAL_BLIND_EN_LANE
#define reg_BG_ADC_IF_GAIN_MU_LANE_3_0  RX_ADC_CAL_SKEW_REG1.BF.BG_ADC_IF_GAIN_MU_LANE_3_0
#define reg_BG_ADC_IF_OFST_MU_LANE_3_0  RX_ADC_CAL_SKEW_REG1.BF.BG_ADC_IF_OFST_MU_LANE_3_0
#define reg_TR_ADC_IF_GAIN_MU_LANE_3_0  RX_ADC_CAL_SKEW_REG1.BF.TR_ADC_IF_GAIN_MU_LANE_3_0
#define reg_TR_ADC_IF_OFST_MU_LANE_3_0  RX_ADC_CAL_SKEW_REG1.BF.TR_ADC_IF_OFST_MU_LANE_3_0

// 0x01cc	RX_ADC_CAL_SKEW_REG2		Rx ADC Calibration Skew Register 2
typedef union {
	struct {
		uint8_t BG_SKEW_CAL_MU_SHIFT_LANE_3_0            : 4;	/*  [3:0]     r/w 4'h8*/
		uint8_t BG_SKEW_CAL_AVE_REJ_MU_LANE_3_0          : 4;	/*  [7:4]     r/w 4'h8*/
		uint8_t BG_SKEW_CAL_AVE_MU_LP_LANE_3_0           : 4;	/* [11:8]     r/w 4'h7*/
		uint8_t TR_SKEW_CAL_MU_SHIFT3_LANE_3_0           : 4;	/*[15:12]     r/w 4'h8*/
		uint8_t TR_SKEW_CAL_MU_SHIFT2_LANE_3_0           : 4;	/*[19:16]     r/w 4'h6*/
		uint8_t TR_SKEW_CAL_MU_SHIFT1_LANE_3_0           : 4;	/*[23:20]     r/w 4'h5*/
		uint8_t TR_SKEW_CAL_AVE_REJ_MU_LANE_3_0          : 4;	/*[27:24]     r/w 4'h8*/
		uint8_t TR_SKEW_CAL_AVE_MU_LP_LANE_3_0           : 4;	/*[31:28]     r/w 4'h7*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_CAL_SKEW_REG2_t;
__xdata __at( 0x61cc ) volatile RX_ADC_CAL_SKEW_REG2_t RX_ADC_CAL_SKEW_REG2;
#define reg_BG_SKEW_CAL_MU_SHIFT_LANE_3_0  RX_ADC_CAL_SKEW_REG2.BF.BG_SKEW_CAL_MU_SHIFT_LANE_3_0
#define reg_BG_SKEW_CAL_AVE_REJ_MU_LANE_3_0  RX_ADC_CAL_SKEW_REG2.BF.BG_SKEW_CAL_AVE_REJ_MU_LANE_3_0
#define reg_BG_SKEW_CAL_AVE_MU_LP_LANE_3_0  RX_ADC_CAL_SKEW_REG2.BF.BG_SKEW_CAL_AVE_MU_LP_LANE_3_0
#define reg_TR_SKEW_CAL_MU_SHIFT3_LANE_3_0  RX_ADC_CAL_SKEW_REG2.BF.TR_SKEW_CAL_MU_SHIFT3_LANE_3_0
#define reg_TR_SKEW_CAL_MU_SHIFT2_LANE_3_0  RX_ADC_CAL_SKEW_REG2.BF.TR_SKEW_CAL_MU_SHIFT2_LANE_3_0
#define reg_TR_SKEW_CAL_MU_SHIFT1_LANE_3_0  RX_ADC_CAL_SKEW_REG2.BF.TR_SKEW_CAL_MU_SHIFT1_LANE_3_0
#define reg_TR_SKEW_CAL_AVE_REJ_MU_LANE_3_0  RX_ADC_CAL_SKEW_REG2.BF.TR_SKEW_CAL_AVE_REJ_MU_LANE_3_0
#define reg_TR_SKEW_CAL_AVE_MU_LP_LANE_3_0  RX_ADC_CAL_SKEW_REG2.BF.TR_SKEW_CAL_AVE_MU_LP_LANE_3_0

// 0x01d0	RX_ADC_CAL_TIMER_REG0		Rx ADC Calibration Timer Register 0
typedef union {
	struct {
		uint8_t SU_ADC_IF_OFST_TIMER_LANE_15_0_b0        : 8;	/* [15:0]     r/w 16'h200*/
		uint8_t SU_ADC_IF_OFST_TIMER_LANE_15_0_b1        : 8;	/* [15:0]     r/w 16'h200*/
		uint8_t SU_ADC_IF_GAIN_TIMER_LANE_15_0_b0        : 8;	/*[31:16]     r/w 16'h200*/
		uint8_t SU_ADC_IF_GAIN_TIMER_LANE_15_0_b1        : 8;	/*[31:16]     r/w 16'h200*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_ADC_CAL_TIMER_REG0_t;
__xdata __at( 0x61d0 ) volatile RX_ADC_CAL_TIMER_REG0_t RX_ADC_CAL_TIMER_REG0;
#define reg_SU_ADC_IF_OFST_TIMER_LANE_15_0_b0  RX_ADC_CAL_TIMER_REG0.BF.SU_ADC_IF_OFST_TIMER_LANE_15_0_b0
#define reg_SU_ADC_IF_OFST_TIMER_LANE_15_0_b1  RX_ADC_CAL_TIMER_REG0.BF.SU_ADC_IF_OFST_TIMER_LANE_15_0_b1
#define reg_SU_ADC_IF_GAIN_TIMER_LANE_15_0_b0  RX_ADC_CAL_TIMER_REG0.BF.SU_ADC_IF_GAIN_TIMER_LANE_15_0_b0
#define reg_SU_ADC_IF_GAIN_TIMER_LANE_15_0_b1  RX_ADC_CAL_TIMER_REG0.BF.SU_ADC_IF_GAIN_TIMER_LANE_15_0_b1
#define reg_SU_ADC_IF_OFST_TIMER_LANE_15_0  RX_ADC_CAL_TIMER_REG0.WT.W0
#define reg_SU_ADC_IF_GAIN_TIMER_LANE_15_0  RX_ADC_CAL_TIMER_REG0.WT.W1

// 0x01d4	RX_ADC_CAL_TIMER_REG1		Rx ADC Calibration Timer Register 1
typedef union {
	struct {
		uint8_t SU_ADC_IF_TARGET_TIMER_LANE_15_0_b0      : 8;	/* [15:0]     r/w 16'h200*/
		uint8_t SU_ADC_IF_TARGET_TIMER_LANE_15_0_b1      : 8;	/* [15:0]     r/w 16'h200*/
		uint8_t BG_AGC_TARGET_TIMER_LANE_15_0_b0         : 8;	/*[31:16]     r/w 16'h80*/
		uint8_t BG_AGC_TARGET_TIMER_LANE_15_0_b1         : 8;	/*[31:16]     r/w 16'h80*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_ADC_CAL_TIMER_REG1_t;
__xdata __at( 0x61d4 ) volatile RX_ADC_CAL_TIMER_REG1_t RX_ADC_CAL_TIMER_REG1;
#define reg_SU_ADC_IF_TARGET_TIMER_LANE_15_0_b0  RX_ADC_CAL_TIMER_REG1.BF.SU_ADC_IF_TARGET_TIMER_LANE_15_0_b0
#define reg_SU_ADC_IF_TARGET_TIMER_LANE_15_0_b1  RX_ADC_CAL_TIMER_REG1.BF.SU_ADC_IF_TARGET_TIMER_LANE_15_0_b1
#define reg_BG_AGC_TARGET_TIMER_LANE_15_0_b0  RX_ADC_CAL_TIMER_REG1.BF.BG_AGC_TARGET_TIMER_LANE_15_0_b0
#define reg_BG_AGC_TARGET_TIMER_LANE_15_0_b1  RX_ADC_CAL_TIMER_REG1.BF.BG_AGC_TARGET_TIMER_LANE_15_0_b1
#define reg_SU_ADC_IF_TARGET_TIMER_LANE_15_0  RX_ADC_CAL_TIMER_REG1.WT.W0
#define reg_BG_AGC_TARGET_TIMER_LANE_15_0  RX_ADC_CAL_TIMER_REG1.WT.W1

// 0x01d8	RX_ADC_CAL_TIMER_REG2		Rx ADC Calibration Timer Register 2
typedef union {
	struct {
		uint8_t SU_SKEW_FINE_TIMER_LANE_15_0_b0          : 8;	/* [15:0]     r/w 16'h200*/
		uint8_t SU_SKEW_FINE_TIMER_LANE_15_0_b1          : 8;	/* [15:0]     r/w 16'h200*/
		uint8_t SU_SKEW_COARSE_TIMER_LANE_15_0_b0        : 8;	/*[31:16]     r/w 16'h200*/
		uint8_t SU_SKEW_COARSE_TIMER_LANE_15_0_b1        : 8;	/*[31:16]     r/w 16'h200*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_ADC_CAL_TIMER_REG2_t;
__xdata __at( 0x61d8 ) volatile RX_ADC_CAL_TIMER_REG2_t RX_ADC_CAL_TIMER_REG2;
#define reg_SU_SKEW_FINE_TIMER_LANE_15_0_b0  RX_ADC_CAL_TIMER_REG2.BF.SU_SKEW_FINE_TIMER_LANE_15_0_b0
#define reg_SU_SKEW_FINE_TIMER_LANE_15_0_b1  RX_ADC_CAL_TIMER_REG2.BF.SU_SKEW_FINE_TIMER_LANE_15_0_b1
#define reg_SU_SKEW_COARSE_TIMER_LANE_15_0_b0  RX_ADC_CAL_TIMER_REG2.BF.SU_SKEW_COARSE_TIMER_LANE_15_0_b0
#define reg_SU_SKEW_COARSE_TIMER_LANE_15_0_b1  RX_ADC_CAL_TIMER_REG2.BF.SU_SKEW_COARSE_TIMER_LANE_15_0_b1
#define reg_SU_SKEW_FINE_TIMER_LANE_15_0  RX_ADC_CAL_TIMER_REG2.WT.W0
#define reg_SU_SKEW_COARSE_TIMER_LANE_15_0  RX_ADC_CAL_TIMER_REG2.WT.W1

// 0x01dc	RX_ADC_CAL_TIMER_REG3		Rx ADC Calibration Timer Register 3
typedef union {
	struct {
		uint8_t TR_SKEW_TIMER_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h200*/
		uint8_t TR_SKEW_TIMER_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h200*/
		uint8_t TR_ADC_IF_GAO_TIMER_LANE_15_0_b0         : 8;	/*[31:16]     r/w 16'h200*/
		uint8_t TR_ADC_IF_GAO_TIMER_LANE_15_0_b1         : 8;	/*[31:16]     r/w 16'h200*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_ADC_CAL_TIMER_REG3_t;
__xdata __at( 0x61dc ) volatile RX_ADC_CAL_TIMER_REG3_t RX_ADC_CAL_TIMER_REG3;
#define reg_TR_SKEW_TIMER_LANE_15_0_b0  RX_ADC_CAL_TIMER_REG3.BF.TR_SKEW_TIMER_LANE_15_0_b0
#define reg_TR_SKEW_TIMER_LANE_15_0_b1  RX_ADC_CAL_TIMER_REG3.BF.TR_SKEW_TIMER_LANE_15_0_b1
#define reg_TR_ADC_IF_GAO_TIMER_LANE_15_0_b0  RX_ADC_CAL_TIMER_REG3.BF.TR_ADC_IF_GAO_TIMER_LANE_15_0_b0
#define reg_TR_ADC_IF_GAO_TIMER_LANE_15_0_b1  RX_ADC_CAL_TIMER_REG3.BF.TR_ADC_IF_GAO_TIMER_LANE_15_0_b1
#define reg_TR_SKEW_TIMER_LANE_15_0  RX_ADC_CAL_TIMER_REG3.WT.W0
#define reg_TR_ADC_IF_GAO_TIMER_LANE_15_0  RX_ADC_CAL_TIMER_REG3.WT.W1

// 0x01e0	RX_ADC_CAL_STATUS_REG		Rx ADC Calibration Status
typedef union {
	struct {
		uint8_t ADC_CAL_STATE_LANE_7_0                   : 8;	/*  [7:0]     r/w 8'h0*/
		uint8_t RESERVED_8                               : 8;	/* [28:8]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [28:8]     r/w   0*/
		uint8_t RESERVED_24                              : 5;	/* [28:8]     r/w   0*/
		uint8_t SU_SKEW_CAL_LOCK_DET_RD_LANE             : 1;	/*     29       r   0*/
		uint8_t SU_ADC_IF_GAIN_LOCK_DET_RD_LANE          : 1;	/*     30       r   0*/
		uint8_t SU_ADC_IF_OFST_LOCK_DET_RD_LANE          : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_CAL_STATUS_REG_t;
__xdata __at( 0x61e0 ) volatile RX_ADC_CAL_STATUS_REG_t RX_ADC_CAL_STATUS_REG;
#define reg_ADC_CAL_STATE_LANE_7_0  RX_ADC_CAL_STATUS_REG.BF.ADC_CAL_STATE_LANE_7_0
#define reg_SU_SKEW_CAL_LOCK_DET_RD_LANE  RX_ADC_CAL_STATUS_REG.BF.SU_SKEW_CAL_LOCK_DET_RD_LANE
#define reg_SU_ADC_IF_GAIN_LOCK_DET_RD_LANE  RX_ADC_CAL_STATUS_REG.BF.SU_ADC_IF_GAIN_LOCK_DET_RD_LANE
#define reg_SU_ADC_IF_OFST_LOCK_DET_RD_LANE  RX_ADC_CAL_STATUS_REG.BF.SU_ADC_IF_OFST_LOCK_DET_RD_LANE

// 0x01e4	RX_ADC_CAL_RUN_STOP_REG		Rx ADC Calibration Run Stop Register
typedef union {
	struct {
		uint8_t BG_ADC_IF_STOP_TIME_LANE_5_0             : 6;	/*  [5:0]     r/w 6'h10*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t BG_ADC_IF_RUN_TIME_LANE_5_0              : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[29:14]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/*[29:14]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/*[29:14]     r/w   0*/
		uint8_t PWR_OPT_TEST_FUNC_CLK_OFF_LANE           : 1;	/*     30     r/w   0*/
		uint8_t BG_ADC_IF_RUN_STOP_EN_LANE               : 1;	/*     31     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RX_ADC_CAL_RUN_STOP_REG_t;
__xdata __at( 0x61e4 ) volatile RX_ADC_CAL_RUN_STOP_REG_t RX_ADC_CAL_RUN_STOP_REG;
#define reg_BG_ADC_IF_STOP_TIME_LANE_5_0  RX_ADC_CAL_RUN_STOP_REG.BF.BG_ADC_IF_STOP_TIME_LANE_5_0
#define reg_BG_ADC_IF_RUN_TIME_LANE_5_0  RX_ADC_CAL_RUN_STOP_REG.BF.BG_ADC_IF_RUN_TIME_LANE_5_0
#define reg_PWR_OPT_TEST_FUNC_CLK_OFF_LANE  RX_ADC_CAL_RUN_STOP_REG.BF.PWR_OPT_TEST_FUNC_CLK_OFF_LANE
#define reg_BG_ADC_IF_RUN_STOP_EN_LANE  RX_ADC_CAL_RUN_STOP_REG.BF.BG_ADC_IF_RUN_STOP_EN_LANE

// 0x01e8	RX_ADC_CAL_AGC_REG		Rx ADC Calibration AGC Register
typedef union {
	struct {
		uint8_t BG_AGC_TH_LANE_9_0_b0                    : 8;	/*  [9:0]     r/w 10'h1a*/
		uint8_t BG_AGC_TH_LANE_9_0_b1                    : 2;	/*  [9:0]     r/w 10'h1a*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w   0*/
		uint8_t BG_AGC_GAIN_INIT_LANE_4_0                : 5;	/*[20:16]     r/w 5'h10*/
		uint8_t RESERVED_21                              : 3;	/*[31:21]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:21]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RX_ADC_CAL_AGC_REG_t;
__xdata __at( 0x61e8 ) volatile RX_ADC_CAL_AGC_REG_t RX_ADC_CAL_AGC_REG;
#define reg_BG_AGC_TH_LANE_9_0_b0  RX_ADC_CAL_AGC_REG.BF.BG_AGC_TH_LANE_9_0_b0
#define reg_BG_AGC_TH_LANE_9_0_b1  RX_ADC_CAL_AGC_REG.BF.BG_AGC_TH_LANE_9_0_b1
#define reg_BG_AGC_GAIN_INIT_LANE_4_0  RX_ADC_CAL_AGC_REG.BF.BG_AGC_GAIN_INIT_LANE_4_0

// 0x0200	DFE_OPT_REG0		DFE Optimization Register 0 
typedef union {
	struct {
		uint8_t DFE_OPT_FFE_PST1_MAX_LANE_6_0            : 7;	/*  [6:0]     r/w 7'h3c*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
		uint8_t DFE_OPT_DFE_STEP_LANE_2_0                : 3;	/* [10:8]     r/w 3'h1*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w   0*/
		uint8_t DFE_OPT_DFE_MAX_LANE_5_0                 : 6;	/*[21:16]     r/w 6'h1f*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DFE_OPT_DFE_MIN_LANE_5_0                 : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DFE_OPT_REG0_t;
__xdata __at( 0x6200 ) volatile DFE_OPT_REG0_t DFE_OPT_REG0;
#define reg_DFE_OPT_FFE_PST1_MAX_LANE_6_0  DFE_OPT_REG0.BF.DFE_OPT_FFE_PST1_MAX_LANE_6_0
#define reg_DFE_OPT_DFE_STEP_LANE_2_0  DFE_OPT_REG0.BF.DFE_OPT_DFE_STEP_LANE_2_0
#define reg_DFE_OPT_DFE_MAX_LANE_5_0  DFE_OPT_REG0.BF.DFE_OPT_DFE_MAX_LANE_5_0
#define reg_DFE_OPT_DFE_MIN_LANE_5_0  DFE_OPT_REG0.BF.DFE_OPT_DFE_MIN_LANE_5_0

// 0x0204	DFE_OPT_REG1		DFE Optimization Register 1
typedef union {
	struct {
		uint8_t DFE_OPT_TIMER_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h4*/
		uint8_t DFE_OPT_TIMER_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h4*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_OPT_REG1_t;
__xdata __at( 0x6204 ) volatile DFE_OPT_REG1_t DFE_OPT_REG1;
#define reg_DFE_OPT_TIMER_LANE_15_0_b0  DFE_OPT_REG1.BF.DFE_OPT_TIMER_LANE_15_0_b0
#define reg_DFE_OPT_TIMER_LANE_15_0_b1  DFE_OPT_REG1.BF.DFE_OPT_TIMER_LANE_15_0_b1
#define reg_DFE_OPT_TIMER_LANE_15_0  DFE_OPT_REG1.WT.W0

// 0x0208	DFE_OPT_REG2		DFE Optimization Register 2
typedef union {
	struct {
		uint8_t DFE_OPT_BEST_SNR_LANE_15_0_b0            : 8;	/* [15:0]       r   0*/
		uint8_t DFE_OPT_BEST_SNR_LANE_15_0_b1            : 8;	/* [15:0]       r   0*/
		uint8_t DFE_OPT_BEST_DFE_LANE_5_0                : 6;	/*[21:16]       r   0*/
		uint8_t DFE_OPT_FAIL_LANE                        : 1;	/*     22       r   0*/
		uint8_t RESERVED_23                              : 1;	/*[31:23]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:23]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_OPT_REG2_t;
__xdata __at( 0x6208 ) volatile DFE_OPT_REG2_t DFE_OPT_REG2;
#define reg_DFE_OPT_BEST_SNR_LANE_15_0_b0  DFE_OPT_REG2.BF.DFE_OPT_BEST_SNR_LANE_15_0_b0
#define reg_DFE_OPT_BEST_SNR_LANE_15_0_b1  DFE_OPT_REG2.BF.DFE_OPT_BEST_SNR_LANE_15_0_b1
#define reg_DFE_OPT_BEST_DFE_LANE_5_0  DFE_OPT_REG2.BF.DFE_OPT_BEST_DFE_LANE_5_0
#define reg_DFE_OPT_FAIL_LANE  DFE_OPT_REG2.BF.DFE_OPT_FAIL_LANE
#define reg_DFE_OPT_BEST_SNR_LANE_15_0  DFE_OPT_REG2.WT.W0

// 0x020c	DFE_OPT_REG3		DFE Optimization Register 3
typedef union {
	struct {
		uint8_t DFE_OPT_BEST_MSE_LANE_15_0_b0            : 8;	/* [15:0]       r   0*/
		uint8_t DFE_OPT_BEST_MSE_LANE_15_0_b1            : 8;	/* [15:0]       r   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DFE_OPT_REG3_t;
__xdata __at( 0x620c ) volatile DFE_OPT_REG3_t DFE_OPT_REG3;
#define reg_DFE_OPT_BEST_MSE_LANE_15_0_b0  DFE_OPT_REG3.BF.DFE_OPT_BEST_MSE_LANE_15_0_b0
#define reg_DFE_OPT_BEST_MSE_LANE_15_0_b1  DFE_OPT_REG3.BF.DFE_OPT_BEST_MSE_LANE_15_0_b1
#define reg_DFE_OPT_BEST_MSE_LANE_15_0  DFE_OPT_REG3.WT.W0

// 0x0210	FFE_FLT_OPT_REG0		FFE Floating Tap Optimization Register 0
typedef union {
	struct {
		uint8_t FFE_FLT_OPT_STEP_LANE_2_0                : 3;	/*  [2:0]     r/w 3'h1*/
		uint8_t FFE_FLT_OPT_AVG_NUM_LANE_2_0             : 3;	/*  [5:3]     r/w 3'h3*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t FFE_FLT_OPT_STOP_LANE_5_0                : 6;	/* [13:8]     r/w 6'h28*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t FFE_FLT_OPT_START_LANE_5_0               : 6;	/*[21:16]     r/w 6'h0*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FFE_FLT_OPT_REG0_t;
__xdata __at( 0x6210 ) volatile FFE_FLT_OPT_REG0_t FFE_FLT_OPT_REG0;
#define reg_FFE_FLT_OPT_STEP_LANE_2_0  FFE_FLT_OPT_REG0.BF.FFE_FLT_OPT_STEP_LANE_2_0
#define reg_FFE_FLT_OPT_AVG_NUM_LANE_2_0  FFE_FLT_OPT_REG0.BF.FFE_FLT_OPT_AVG_NUM_LANE_2_0
#define reg_FFE_FLT_OPT_STOP_LANE_5_0  FFE_FLT_OPT_REG0.BF.FFE_FLT_OPT_STOP_LANE_5_0
#define reg_FFE_FLT_OPT_START_LANE_5_0  FFE_FLT_OPT_REG0.BF.FFE_FLT_OPT_START_LANE_5_0

// 0x0214	FFE_FLT_OPT_REG1		FFE Floating Tap Optimization Register 1
typedef union {
	struct {
		uint8_t FFE_FLT_OPT_DLT_SNR_TH_LANE_15_0_b0      : 8;	/* [15:0]     r/w 16'h1a*/
		uint8_t FFE_FLT_OPT_DLT_SNR_TH_LANE_15_0_b1      : 8;	/* [15:0]     r/w 16'h1a*/
		uint8_t FFE_FLT_OPT_MAX_SNR_TH_LANE_15_0_b0      : 8;	/*[31:16]     r/w 16'h0*/
		uint8_t FFE_FLT_OPT_MAX_SNR_TH_LANE_15_0_b1      : 8;	/*[31:16]     r/w 16'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} FFE_FLT_OPT_REG1_t;
__xdata __at( 0x6214 ) volatile FFE_FLT_OPT_REG1_t FFE_FLT_OPT_REG1;
#define reg_FFE_FLT_OPT_DLT_SNR_TH_LANE_15_0_b0  FFE_FLT_OPT_REG1.BF.FFE_FLT_OPT_DLT_SNR_TH_LANE_15_0_b0
#define reg_FFE_FLT_OPT_DLT_SNR_TH_LANE_15_0_b1  FFE_FLT_OPT_REG1.BF.FFE_FLT_OPT_DLT_SNR_TH_LANE_15_0_b1
#define reg_FFE_FLT_OPT_MAX_SNR_TH_LANE_15_0_b0  FFE_FLT_OPT_REG1.BF.FFE_FLT_OPT_MAX_SNR_TH_LANE_15_0_b0
#define reg_FFE_FLT_OPT_MAX_SNR_TH_LANE_15_0_b1  FFE_FLT_OPT_REG1.BF.FFE_FLT_OPT_MAX_SNR_TH_LANE_15_0_b1
#define reg_FFE_FLT_OPT_DLT_SNR_TH_LANE_15_0  FFE_FLT_OPT_REG1.WT.W0
#define reg_FFE_FLT_OPT_MAX_SNR_TH_LANE_15_0  FFE_FLT_OPT_REG1.WT.W1

// 0x0218	FFE_FLT_OPT_REG2		FFE Floating Tap Optimization Register 2
typedef union {
	struct {
		uint8_t FFE_FLT_OPT_TIMER_LANE_15_0_b0           : 8;	/* [15:0]     r/w 16'h4*/
		uint8_t FFE_FLT_OPT_TIMER_LANE_15_0_b1           : 8;	/* [15:0]     r/w 16'h4*/
		uint8_t FFE_FLT_OPT_PWR_TH_LANE_7_0              : 8;	/*[23:16]     r/w 8'h3*/
		uint8_t RESERVED_24                              : 8;	/*[31:24]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} FFE_FLT_OPT_REG2_t;
__xdata __at( 0x6218 ) volatile FFE_FLT_OPT_REG2_t FFE_FLT_OPT_REG2;
#define reg_FFE_FLT_OPT_TIMER_LANE_15_0_b0  FFE_FLT_OPT_REG2.BF.FFE_FLT_OPT_TIMER_LANE_15_0_b0
#define reg_FFE_FLT_OPT_TIMER_LANE_15_0_b1  FFE_FLT_OPT_REG2.BF.FFE_FLT_OPT_TIMER_LANE_15_0_b1
#define reg_FFE_FLT_OPT_PWR_TH_LANE_7_0  FFE_FLT_OPT_REG2.BF.FFE_FLT_OPT_PWR_TH_LANE_7_0
#define reg_FFE_FLT_OPT_TIMER_LANE_15_0  FFE_FLT_OPT_REG2.WT.W0

// 0x021c	FFE_FLT_OPT_REG3		FFE Floating Tap Optimization Register 3
typedef union {
	struct {
		uint8_t FFE_FLT_OPT_MIN_SNR_LANE_15_0_b0         : 8;	/* [15:0]       r   0*/
		uint8_t FFE_FLT_OPT_MIN_SNR_LANE_15_0_b1         : 8;	/* [15:0]       r   0*/
		uint8_t FFE_FLT_OPT_MAX_SNR_LANE_15_0_b0         : 8;	/*[31:16]       r   0*/
		uint8_t FFE_FLT_OPT_MAX_SNR_LANE_15_0_b1         : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} FFE_FLT_OPT_REG3_t;
__xdata __at( 0x621c ) volatile FFE_FLT_OPT_REG3_t FFE_FLT_OPT_REG3;
#define reg_FFE_FLT_OPT_MIN_SNR_LANE_15_0_b0  FFE_FLT_OPT_REG3.BF.FFE_FLT_OPT_MIN_SNR_LANE_15_0_b0
#define reg_FFE_FLT_OPT_MIN_SNR_LANE_15_0_b1  FFE_FLT_OPT_REG3.BF.FFE_FLT_OPT_MIN_SNR_LANE_15_0_b1
#define reg_FFE_FLT_OPT_MAX_SNR_LANE_15_0_b0  FFE_FLT_OPT_REG3.BF.FFE_FLT_OPT_MAX_SNR_LANE_15_0_b0
#define reg_FFE_FLT_OPT_MAX_SNR_LANE_15_0_b1  FFE_FLT_OPT_REG3.BF.FFE_FLT_OPT_MAX_SNR_LANE_15_0_b1
#define reg_FFE_FLT_OPT_MIN_SNR_LANE_15_0  FFE_FLT_OPT_REG3.WT.W0
#define reg_FFE_FLT_OPT_MAX_SNR_LANE_15_0  FFE_FLT_OPT_REG3.WT.W1

// 0x0220	FFE_FLT_OPT_REG4		FFE Floating Tap Optimization Register 4
typedef union {
	struct {
		uint8_t FFE_FLT_OPT_BEST_POS_LANE_5_0            : 6;	/*  [5:0]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t FFE_FLT_OPT_MAX_SNR_POS_LANE_5_0         : 6;	/* [13:8]       r   0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t FFE_FLT_OPT_MAX_PWR_POS_LANE_5_0         : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t FFE_FLT_OPT_MAX_PWR_LANE_7_0             : 8;	/*[31:24]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FFE_FLT_OPT_REG4_t;
__xdata __at( 0x6220 ) volatile FFE_FLT_OPT_REG4_t FFE_FLT_OPT_REG4;
#define reg_FFE_FLT_OPT_BEST_POS_LANE_5_0  FFE_FLT_OPT_REG4.BF.FFE_FLT_OPT_BEST_POS_LANE_5_0
#define reg_FFE_FLT_OPT_MAX_SNR_POS_LANE_5_0  FFE_FLT_OPT_REG4.BF.FFE_FLT_OPT_MAX_SNR_POS_LANE_5_0
#define reg_FFE_FLT_OPT_MAX_PWR_POS_LANE_5_0  FFE_FLT_OPT_REG4.BF.FFE_FLT_OPT_MAX_PWR_POS_LANE_5_0
#define reg_FFE_FLT_OPT_MAX_PWR_LANE_7_0  FFE_FLT_OPT_REG4.BF.FFE_FLT_OPT_MAX_PWR_LANE_7_0

// 0x0230	DTL_PH_OPT_REG0		DTL Phase Optimization Register 0
typedef union {
	struct {
		uint8_t DTL_PH_OPT_CONT_STEP_NUM_LANE_5_0        : 6;	/*  [5:0]     r/w 6'h2*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t DTL_PH_OPT_TRAIN_STEP_NUM_LANE_5_0       : 6;	/* [13:8]     r/w 6'h2*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t DTL_PH_OPT_STEP_LANE_2_0                 : 3;	/*[18:16]     r/w 3'h1*/
		uint8_t DTL_PH_OPT_AVG_NUM_LANE_2_0              : 3;	/*[21:19]     r/w 3'h3*/
		uint8_t RESERVED_22                              : 2;	/*[31:22]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:22]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} DTL_PH_OPT_REG0_t;
__xdata __at( 0x6230 ) volatile DTL_PH_OPT_REG0_t DTL_PH_OPT_REG0;
#define reg_DTL_PH_OPT_CONT_STEP_NUM_LANE_5_0  DTL_PH_OPT_REG0.BF.DTL_PH_OPT_CONT_STEP_NUM_LANE_5_0
#define reg_DTL_PH_OPT_TRAIN_STEP_NUM_LANE_5_0  DTL_PH_OPT_REG0.BF.DTL_PH_OPT_TRAIN_STEP_NUM_LANE_5_0
#define reg_DTL_PH_OPT_STEP_LANE_2_0  DTL_PH_OPT_REG0.BF.DTL_PH_OPT_STEP_LANE_2_0
#define reg_DTL_PH_OPT_AVG_NUM_LANE_2_0  DTL_PH_OPT_REG0.BF.DTL_PH_OPT_AVG_NUM_LANE_2_0

// 0x0234	DTL_PH_OPT_REG1		DTL Phase Optimization Register 1
typedef union {
	struct {
		uint8_t DTL_PH_OPT_SEARCH_TIMER_LANE_15_0_b0     : 8;	/* [15:0]     r/w 16'h64*/
		uint8_t DTL_PH_OPT_SEARCH_TIMER_LANE_15_0_b1     : 8;	/* [15:0]     r/w 16'h64*/
		uint8_t DTL_PH_OPT_MOVE_TIMER_LANE_15_0_b0       : 8;	/*[31:16]     r/w 16'h14*/
		uint8_t DTL_PH_OPT_MOVE_TIMER_LANE_15_0_b1       : 8;	/*[31:16]     r/w 16'h14*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DTL_PH_OPT_REG1_t;
__xdata __at( 0x6234 ) volatile DTL_PH_OPT_REG1_t DTL_PH_OPT_REG1;
#define reg_DTL_PH_OPT_SEARCH_TIMER_LANE_15_0_b0  DTL_PH_OPT_REG1.BF.DTL_PH_OPT_SEARCH_TIMER_LANE_15_0_b0
#define reg_DTL_PH_OPT_SEARCH_TIMER_LANE_15_0_b1  DTL_PH_OPT_REG1.BF.DTL_PH_OPT_SEARCH_TIMER_LANE_15_0_b1
#define reg_DTL_PH_OPT_MOVE_TIMER_LANE_15_0_b0  DTL_PH_OPT_REG1.BF.DTL_PH_OPT_MOVE_TIMER_LANE_15_0_b0
#define reg_DTL_PH_OPT_MOVE_TIMER_LANE_15_0_b1  DTL_PH_OPT_REG1.BF.DTL_PH_OPT_MOVE_TIMER_LANE_15_0_b1
#define reg_DTL_PH_OPT_SEARCH_TIMER_LANE_15_0  DTL_PH_OPT_REG1.WT.W0
#define reg_DTL_PH_OPT_MOVE_TIMER_LANE_15_0  DTL_PH_OPT_REG1.WT.W1

// 0x0238	DTL_PH_OPT_REG2		DTL Phase Optimization Register 2
typedef union {
	struct {
		uint8_t DTL_PH_OPT_BEST_SNR_LANE_15_0_b0         : 8;	/* [15:0]       r   0*/
		uint8_t DTL_PH_OPT_BEST_SNR_LANE_15_0_b1         : 8;	/* [15:0]       r   0*/
		uint8_t DTL_PH_OPT_INIT_SNR_LANE_15_0_b0         : 8;	/*[31:16]       r   0*/
		uint8_t DTL_PH_OPT_INIT_SNR_LANE_15_0_b1         : 8;	/*[31:16]       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DTL_PH_OPT_REG2_t;
__xdata __at( 0x6238 ) volatile DTL_PH_OPT_REG2_t DTL_PH_OPT_REG2;
#define reg_DTL_PH_OPT_BEST_SNR_LANE_15_0_b0  DTL_PH_OPT_REG2.BF.DTL_PH_OPT_BEST_SNR_LANE_15_0_b0
#define reg_DTL_PH_OPT_BEST_SNR_LANE_15_0_b1  DTL_PH_OPT_REG2.BF.DTL_PH_OPT_BEST_SNR_LANE_15_0_b1
#define reg_DTL_PH_OPT_INIT_SNR_LANE_15_0_b0  DTL_PH_OPT_REG2.BF.DTL_PH_OPT_INIT_SNR_LANE_15_0_b0
#define reg_DTL_PH_OPT_INIT_SNR_LANE_15_0_b1  DTL_PH_OPT_REG2.BF.DTL_PH_OPT_INIT_SNR_LANE_15_0_b1
#define reg_DTL_PH_OPT_BEST_SNR_LANE_15_0  DTL_PH_OPT_REG2.WT.W0
#define reg_DTL_PH_OPT_INIT_SNR_LANE_15_0  DTL_PH_OPT_REG2.WT.W1

// 0x023c	DTL_PH_OPT_REG3		DTL Phase Optimization Register 3
typedef union {
	struct {
		uint8_t DTL_PH_OPT_FINAL_SNR_LANE_15_0_b0        : 8;	/* [15:0]       r   0*/
		uint8_t DTL_PH_OPT_FINAL_SNR_LANE_15_0_b1        : 8;	/* [15:0]       r   0*/
		uint8_t DTL_PH_OPT_FINAL_FFE_PRE1_LANE_5_0       : 6;	/*[21:16]       r   0*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t DTL_PH_OPT_BEST_FFE_PRE1_LANE_5_0        : 6;	/*[29:24]       r   0*/
		uint8_t RESERVED_30                              : 1;	/*     30     r/w   0*/
		uint8_t DTL_PH_OPT_FAIL_LANE                     : 1;	/*     31       r   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} DTL_PH_OPT_REG3_t;
__xdata __at( 0x623c ) volatile DTL_PH_OPT_REG3_t DTL_PH_OPT_REG3;
#define reg_DTL_PH_OPT_FINAL_SNR_LANE_15_0_b0  DTL_PH_OPT_REG3.BF.DTL_PH_OPT_FINAL_SNR_LANE_15_0_b0
#define reg_DTL_PH_OPT_FINAL_SNR_LANE_15_0_b1  DTL_PH_OPT_REG3.BF.DTL_PH_OPT_FINAL_SNR_LANE_15_0_b1
#define reg_DTL_PH_OPT_FINAL_FFE_PRE1_LANE_5_0  DTL_PH_OPT_REG3.BF.DTL_PH_OPT_FINAL_FFE_PRE1_LANE_5_0
#define reg_DTL_PH_OPT_BEST_FFE_PRE1_LANE_5_0  DTL_PH_OPT_REG3.BF.DTL_PH_OPT_BEST_FFE_PRE1_LANE_5_0
#define reg_DTL_PH_OPT_FAIL_LANE  DTL_PH_OPT_REG3.BF.DTL_PH_OPT_FAIL_LANE
#define reg_DTL_PH_OPT_FINAL_SNR_LANE_15_0  DTL_PH_OPT_REG3.WT.W0

// 0x0240	FFE_LEN_OPT_REG0		FFE Length Optimization Register 0
typedef union {
	struct {
		uint8_t FFE_LEN_OPT_FFE_LD_ZERO_LANE             : 1;	/*      0     r/w 1'h1*/
		uint8_t FFE_LEN_OPT_FFE_TH_LANE_1_0              : 2;	/*  [2:1]     r/w 2'h1*/
		uint8_t FFE_LEN_OPT_CUMSUM_TH_LANE_2_0           : 3;	/*  [5:3]     r/w 3'h2*/
		uint8_t RESERVED_6                               : 2;	/* [20:6]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [20:6]     r/w   0*/
		uint8_t RESERVED_16                              : 5;	/* [20:6]     r/w   0*/
		uint8_t FFE_LEN_OPT_FLT_START_TAP_LANE_2_0       : 3;	/*[23:21]     r/w 3'h0*/
		uint8_t FFE_LEN_OPT_PST_START_TAP_LANE_4_0       : 5;	/*[28:24]     r/w 5'h8*/
		uint8_t FFE_LEN_OPT_PRE_START_TAP_LANE_2_0       : 3;	/*[31:29]     r/w 3'h5*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} FFE_LEN_OPT_REG0_t;
__xdata __at( 0x6240 ) volatile FFE_LEN_OPT_REG0_t FFE_LEN_OPT_REG0;
#define reg_FFE_LEN_OPT_FFE_LD_ZERO_LANE  FFE_LEN_OPT_REG0.BF.FFE_LEN_OPT_FFE_LD_ZERO_LANE
#define reg_FFE_LEN_OPT_FFE_TH_LANE_1_0  FFE_LEN_OPT_REG0.BF.FFE_LEN_OPT_FFE_TH_LANE_1_0
#define reg_FFE_LEN_OPT_CUMSUM_TH_LANE_2_0  FFE_LEN_OPT_REG0.BF.FFE_LEN_OPT_CUMSUM_TH_LANE_2_0
#define reg_FFE_LEN_OPT_FLT_START_TAP_LANE_2_0  FFE_LEN_OPT_REG0.BF.FFE_LEN_OPT_FLT_START_TAP_LANE_2_0
#define reg_FFE_LEN_OPT_PST_START_TAP_LANE_4_0  FFE_LEN_OPT_REG0.BF.FFE_LEN_OPT_PST_START_TAP_LANE_4_0
#define reg_FFE_LEN_OPT_PRE_START_TAP_LANE_2_0  FFE_LEN_OPT_REG0.BF.FFE_LEN_OPT_PRE_START_TAP_LANE_2_0

// 0x0244	FFE_LEN_OPT_REG1		FFE Length Optimization Register 1
typedef union {
	struct {
		uint8_t FFE_LEN_OPT_FLT_STOP_TAP_MAX_LANE_2_0    : 3;	/*  [2:0]       r   0*/
		uint8_t FFE_LEN_OPT_FLT_STOP_TAP_MIN_LANE_2_0    : 3;	/*  [5:3]       r   0*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t FFE_LEN_OPT_PST_STOP_TAP_LANE_4_0        : 5;	/* [12:8]       r   0*/
		uint8_t FFE_LEN_OPT_PRE_STOP_TAP_LANE_2_0        : 3;	/*[15:13]       r   0*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} FFE_LEN_OPT_REG1_t;
__xdata __at( 0x6244 ) volatile FFE_LEN_OPT_REG1_t FFE_LEN_OPT_REG1;
#define reg_FFE_LEN_OPT_FLT_STOP_TAP_MAX_LANE_2_0  FFE_LEN_OPT_REG1.BF.FFE_LEN_OPT_FLT_STOP_TAP_MAX_LANE_2_0
#define reg_FFE_LEN_OPT_FLT_STOP_TAP_MIN_LANE_2_0  FFE_LEN_OPT_REG1.BF.FFE_LEN_OPT_FLT_STOP_TAP_MIN_LANE_2_0
#define reg_FFE_LEN_OPT_PST_STOP_TAP_LANE_4_0  FFE_LEN_OPT_REG1.BF.FFE_LEN_OPT_PST_STOP_TAP_LANE_4_0
#define reg_FFE_LEN_OPT_PRE_STOP_TAP_LANE_2_0  FFE_LEN_OPT_REG1.BF.FFE_LEN_OPT_PRE_STOP_TAP_LANE_2_0

// 0x0250	LMS_RUN_STOP_REG0		LMS Continuous Mode Run Stop Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [29:0]     r/w   0*/
		uint8_t RESERVED_8                               : 8;	/* [29:0]     r/w   0*/
		uint8_t RESERVED_16                              : 8;	/* [29:0]     r/w   0*/
		uint8_t RESERVED_24                              : 6;	/* [29:0]     r/w   0*/
		uint8_t CDS_DP_LMS_RUN_STOP_EN_LANE              : 1;	/*     30     r/w 1'h1*/
		uint8_t CDS_DTL_LMS_RUN_STOP_EN_LANE             : 1;	/*     31     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LMS_RUN_STOP_REG0_t;
__xdata __at( 0x6250 ) volatile LMS_RUN_STOP_REG0_t LMS_RUN_STOP_REG0;
#define reg_CDS_DP_LMS_RUN_STOP_EN_LANE  LMS_RUN_STOP_REG0.BF.CDS_DP_LMS_RUN_STOP_EN_LANE
#define reg_CDS_DTL_LMS_RUN_STOP_EN_LANE  LMS_RUN_STOP_REG0.BF.CDS_DTL_LMS_RUN_STOP_EN_LANE

// 0x0254	LMS_RUN_STOP_REG1		LMS Continuous Mode Run Stop Register 1
typedef union {
	struct {
		uint8_t CDS_DP_LMS_STOP_TIME_LANE_5_0            : 6;	/*  [5:0]     r/w 6'h10*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w   0*/
		uint8_t CDS_DP_LMS_RUN_TIME_LANE_5_0             : 6;	/* [13:8]     r/w 6'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w   0*/
		uint8_t CDS_DTL_LMS_STOP_TIME_LANE_5_0           : 6;	/*[21:16]     r/w 6'h10*/
		uint8_t RESERVED_22                              : 2;	/*[23:22]     r/w   0*/
		uint8_t CDS_DTL_LMS_RUN_TIME_LANE_5_0            : 6;	/*[29:24]     r/w 6'h0*/
		uint8_t RESERVED_30                              : 2;	/*[31:30]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} LMS_RUN_STOP_REG1_t;
__xdata __at( 0x6254 ) volatile LMS_RUN_STOP_REG1_t LMS_RUN_STOP_REG1;
#define reg_CDS_DP_LMS_STOP_TIME_LANE_5_0  LMS_RUN_STOP_REG1.BF.CDS_DP_LMS_STOP_TIME_LANE_5_0
#define reg_CDS_DP_LMS_RUN_TIME_LANE_5_0  LMS_RUN_STOP_REG1.BF.CDS_DP_LMS_RUN_TIME_LANE_5_0
#define reg_CDS_DTL_LMS_STOP_TIME_LANE_5_0  LMS_RUN_STOP_REG1.BF.CDS_DTL_LMS_STOP_TIME_LANE_5_0
#define reg_CDS_DTL_LMS_RUN_TIME_LANE_5_0  LMS_RUN_STOP_REG1.BF.CDS_DTL_LMS_RUN_TIME_LANE_5_0

// 0x0260	ADC_RES_CFG_REG0		ADC Resolution Configuration Register 0
typedef union {
	struct {
		uint8_t ADC_RES_TIMER_LANE_15_0_b0               : 8;	/* [15:0]     r/w 16'h1*/
		uint8_t ADC_RES_TIMER_LANE_15_0_b1               : 8;	/* [15:0]     r/w 16'h1*/
		uint8_t RESERVED_16                              : 8;	/*[31:16]     r/w   0*/
		uint8_t RESERVED_24                              : 8;	/*[31:16]     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} ADC_RES_CFG_REG0_t;
__xdata __at( 0x6260 ) volatile ADC_RES_CFG_REG0_t ADC_RES_CFG_REG0;
#define reg_ADC_RES_TIMER_LANE_15_0_b0  ADC_RES_CFG_REG0.BF.ADC_RES_TIMER_LANE_15_0_b0
#define reg_ADC_RES_TIMER_LANE_15_0_b1  ADC_RES_CFG_REG0.BF.ADC_RES_TIMER_LANE_15_0_b1
#define reg_ADC_RES_TIMER_LANE_15_0  ADC_RES_CFG_REG0.WT.W0

#endif
