#ifndef C_XSRPHY_112G_N5_MARVELL_SOFTWARE_RX_V00.49_H
#define C_XSRPHY_112G_N5_MARVELL_SOFTWARE_RX_V00.49_H



// 0x0000	RECEIVER_CONFIGURATION_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t NRZMODE                                  : 1;	/*      0     r/w 1'h0*/
		uint8_t PLLDIV2                                  : 1;	/*      1       r 1'hX*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t QRATE                                    : 1;	/*      3     r/w 1'h0*/
		uint8_t PLLDIV1P5                                : 1;	/*      4       r 1'h0*/
		uint8_t RESERVED_5                               : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t PDWN_SW_OVRD                             : 1;	/*      7     r/w 1'h0*/
		uint8_t ROAMTAPEN                                : 1;	/*      8     r/w 1'h0*/
		uint8_t RESERVED_9                               : 1;	/*      9     r/w 1'h0*/
		uint8_t PAM4_INIT                                : 1;	/*     10     r/w 1'h0*/
		uint8_t NRZMODE_QUAL                             : 1;	/*     11     r/w 1'h1*/
		uint8_t NRZMODE_INIT                             : 1;	/*     12     r/w 1'h1*/
		uint8_t FUNC_SPI                                 : 1;	/*     13     r/w 1'h1*/
		uint8_t LINKRESET                                : 1;	/*     14     r/w 1'h0*/
		uint8_t LINKENABLE                               : 1;	/*     15     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_CONFIGURATION_CONTROL_REGISTER_t;
__xdata __at( 0x400 ) volatile RECEIVER_CONFIGURATION_CONTROL_REGISTER_t RECEIVER_CONFIGURATION_CONTROL_REGISTER;
#define reg_NRZMODE  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.NRZMODE
#define reg_PLLDIV2  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.PLLDIV2
#define reg_QRATE  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.QRATE
#define reg_PLLDIV1P5  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.PLLDIV1P5
#define reg_PDWN_SW_OVRD  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.PDWN_SW_OVRD
#define reg_ROAMTAPEN  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.ROAMTAPEN
#define reg_PAM4_INIT  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.PAM4_INIT
#define reg_NRZMODE_QUAL  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.NRZMODE_QUAL
#define reg_NRZMODE_INIT  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.NRZMODE_INIT
#define reg_FUNC_SPI  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.FUNC_SPI
#define reg_LINKRESET  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.LINKRESET
#define reg_LINKENABLE  RECEIVER_CONFIGURATION_CONTROL_REGISTER.BF.LINKENABLE

// 0x0008	RECEIVER_CDR_FLYWHEEL_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t ROTFWVAL_6_0                             : 7;	/*  [6:0]       r 7'hXX*/
		uint8_t FWRAILOVRD                               : 1;	/*      7     r/w 1'h1*/
		uint8_t KIGAIN_3_0                               : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t RESERVED_12                              : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t RESETFW                                  : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_CDR_FLYWHEEL_CONTROL_REGISTER_t;
__xdata __at( 0x408 ) volatile RECEIVER_CDR_FLYWHEEL_CONTROL_REGISTER_t RECEIVER_CDR_FLYWHEEL_CONTROL_REGISTER;
#define reg_ROTFWVAL_6_0  RECEIVER_CDR_FLYWHEEL_CONTROL_REGISTER.BF.ROTFWVAL_6_0
#define reg_FWRAILOVRD  RECEIVER_CDR_FLYWHEEL_CONTROL_REGISTER.BF.FWRAILOVRD
#define reg_KIGAIN_3_0  RECEIVER_CDR_FLYWHEEL_CONTROL_REGISTER.BF.KIGAIN_3_0
#define reg_RESETFW  RECEIVER_CDR_FLYWHEEL_CONTROL_REGISTER.BF.RESETFW

// 0x000c	RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t RESETROT                                 : 1;	/*      0     r/w 1'h0*/
		uint8_t ELDIRSWAP                                : 1;	/*      1     r/w 1'h0*/
		uint8_t ROTSNAPSHOT                              : 1;	/*      2     r/w 1'h0*/
		uint8_t PHSLOCK                                  : 1;	/*      3     r/w 1'h0*/
		uint8_t PHSUP                                    : 1;	/*      4     r/w 1'h0*/
		uint8_t PHSDN                                    : 1;	/*      5     r/w 1'h0*/
		uint8_t KPGAIN_5_0_b0                            : 2;	/* [11:6]     r/w 6'h04*/
		uint8_t KPGAIN_5_0_b1                            : 4;	/* [11:6]     r/w 6'h04*/
		uint8_t MSBLSBINV                                : 1;	/*     12     r/w 1'h0*/
		uint8_t BUMP64E                                  : 1;	/*     13     r/w 1'h0*/
		uint8_t BUMP64L                                  : 1;	/*     14     r/w 1'h0*/
		uint8_t BOOSTKPGAINEN                            : 1;	/*     15     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER_t;
__xdata __at( 0x40c ) volatile RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER_t RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER;
#define reg_RESETROT  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.RESETROT
#define reg_ELDIRSWAP  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.ELDIRSWAP
#define reg_ROTSNAPSHOT  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.ROTSNAPSHOT
#define reg_PHSLOCK  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.PHSLOCK
#define reg_PHSUP  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.PHSUP
#define reg_PHSDN  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.PHSDN
#define reg_KPGAIN_5_0_b0  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.KPGAIN_5_0_b0
#define reg_KPGAIN_5_0_b1  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.KPGAIN_5_0_b1
#define reg_MSBLSBINV  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.MSBLSBINV
#define reg_BUMP64E  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.BUMP64E
#define reg_BUMP64L  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.BUMP64L
#define reg_BOOSTKPGAINEN  RECEIVER_PHASE_ROTATOR_CONTROL_REGISTER.BF.BOOSTKPGAINEN

// 0x0010	RECEIVER_PHASE_ROTATOR_POSITION_REGISTER		RX Register
typedef union {
	struct {
		uint8_t ROTDPOS_7_0                              : 8;	/*  [7:0]       r 8'h00*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_PHASE_ROTATOR_POSITION_REGISTER_t;
__xdata __at( 0x410 ) volatile RECEIVER_PHASE_ROTATOR_POSITION_REGISTER_t RECEIVER_PHASE_ROTATOR_POSITION_REGISTER;
#define reg_ROTDPOS_7_0  RECEIVER_PHASE_ROTATOR_POSITION_REGISTER.BF.ROTDPOS_7_0

// 0x0014	RECEIVER_SPI_ADDRESS_OVERRIDE_REGISTER		RX Register
typedef union {
	struct {
		uint8_t SPITXADDR_3_0                            : 4;	/*  [3:0]     r/w 4'hX*/
		uint8_t SPIRXADDR_3_0                            : 4;	/*  [7:4]     r/w 4'hX*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_SPI_ADDRESS_OVERRIDE_REGISTER_t;
__xdata __at( 0x414 ) volatile RECEIVER_SPI_ADDRESS_OVERRIDE_REGISTER_t RECEIVER_SPI_ADDRESS_OVERRIDE_REGISTER;
#define reg_SPITXADDR_3_0  RECEIVER_SPI_ADDRESS_OVERRIDE_REGISTER.BF.SPITXADDR_3_0
#define reg_SPIRXADDR_3_0  RECEIVER_SPI_ADDRESS_OVERRIDE_REGISTER.BF.SPIRXADDR_3_0

// 0x0018	RECEIVER_FFE_TRAINING_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t FFETAPIND_2_0                            : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [13:3]     r/w 11'h000*/
		uint8_t RESERVED_8                               : 6;	/* [13:3]     r/w 11'h000*/
		uint8_t FFEUPDTRDY                               : 1;	/*     14       r 1'h0*/
		uint8_t FFEUPDTCMP                               : 1;	/*     15       w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_FFE_TRAINING_CONTROL_REGISTER_t;
__xdata __at( 0x418 ) volatile RECEIVER_FFE_TRAINING_CONTROL_REGISTER_t RECEIVER_FFE_TRAINING_CONTROL_REGISTER;
#define reg_FFETAPIND_2_0  RECEIVER_FFE_TRAINING_CONTROL_REGISTER.BF.FFETAPIND_2_0
#define reg_FFEUPDTRDY  RECEIVER_FFE_TRAINING_CONTROL_REGISTER.BF.FFEUPDTRDY
#define reg_FFEUPDTCMP  RECEIVER_FFE_TRAINING_CONTROL_REGISTER.BF.FFEUPDTCMP

// 0x001c	RECEIVER_FFE_TAP_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t FFETAPDAT_13_0_b0                        : 8;	/* [13:0]     r/w 14'h0000*/
		uint8_t FFETAPDAT_13_0_b1                        : 6;	/* [13:0]     r/w 14'h0000*/
		uint8_t FFECONVSTAT1                             : 1;	/*     14       r 1'h0*/
		uint8_t FFECONVSTAT                              : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_FFE_TAP_CONTROL_REGISTER_t;
__xdata __at( 0x41c ) volatile RECEIVER_FFE_TAP_CONTROL_REGISTER_t RECEIVER_FFE_TAP_CONTROL_REGISTER;
#define reg_FFETAPDAT_13_0_b0  RECEIVER_FFE_TAP_CONTROL_REGISTER.BF.FFETAPDAT_13_0_b0
#define reg_FFETAPDAT_13_0_b1  RECEIVER_FFE_TAP_CONTROL_REGISTER.BF.FFETAPDAT_13_0_b1
#define reg_FFECONVSTAT1  RECEIVER_FFE_TAP_CONTROL_REGISTER.BF.FFECONVSTAT1
#define reg_FFECONVSTAT  RECEIVER_FFE_TAP_CONTROL_REGISTER.BF.FFECONVSTAT

// 0x0020	RECEIVER_AMPLITUDE_SAMPLING_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t RESETAMP                                 : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 4;	/*  [4:1]     r/w 4'h0*/
		uint8_t STANDBY                                  : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w 10'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w 10'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_AMPLITUDE_SAMPLING_CONTROL_REGISTER_t;
__xdata __at( 0x420 ) volatile RECEIVER_AMPLITUDE_SAMPLING_CONTROL_REGISTER_t RECEIVER_AMPLITUDE_SAMPLING_CONTROL_REGISTER;
#define reg_RESETAMP  RECEIVER_AMPLITUDE_SAMPLING_CONTROL_REGISTER.BF.RESETAMP
#define reg_STANDBY  RECEIVER_AMPLITUDE_SAMPLING_CONTROL_REGISTER.BF.STANDBY

// 0x0024	RECEIVER_PEAK_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t FFE_PEAK_WINDOW_4_0                      : 5;	/*  [4:0]     r/w 5'h0A*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t FFE_AVG_SEL_1_0                          : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w 6'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_PEAK_CONTROL_REGISTER_t;
__xdata __at( 0x424 ) volatile RECEIVER_PEAK_CONTROL_REGISTER_t RECEIVER_PEAK_CONTROL_REGISTER;
#define reg_FFE_PEAK_WINDOW_4_0  RECEIVER_PEAK_CONTROL_REGISTER.BF.FFE_PEAK_WINDOW_4_0
#define reg_FFE_AVG_SEL_1_0  RECEIVER_PEAK_CONTROL_REGISTER.BF.FFE_AVG_SEL_1_0

// 0x0028	RECEIVER_VGA_OFFSET_REGISTER		RX Register
typedef union {
	struct {
		uint8_t GOFF_VAL_7_0                             : 8;	/*  [7:0]     r/w 8'h00*/
		uint8_t GOFF_OVRD_EN                             : 1;	/*      8     r/w 1'h0*/
		uint8_t GOFF_READ_SEL                            : 1;	/*      9     r/w 1'h0*/
		uint8_t GOFF_SCAN_DIR                            : 1;	/*     10     r/w 1'h0*/
		uint8_t GOVWRTEN                                 : 1;	/*     11       w 1'h0*/
		uint8_t RESERVED_12                              : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t GOFFSNAPSHOT                             : 1;	/*     15       w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_VGA_OFFSET_REGISTER_t;
__xdata __at( 0x428 ) volatile RECEIVER_VGA_OFFSET_REGISTER_t RECEIVER_VGA_OFFSET_REGISTER;
#define reg_GOFF_VAL_7_0  RECEIVER_VGA_OFFSET_REGISTER.BF.GOFF_VAL_7_0
#define reg_GOFF_OVRD_EN  RECEIVER_VGA_OFFSET_REGISTER.BF.GOFF_OVRD_EN
#define reg_GOFF_READ_SEL  RECEIVER_VGA_OFFSET_REGISTER.BF.GOFF_READ_SEL
#define reg_GOFF_SCAN_DIR  RECEIVER_VGA_OFFSET_REGISTER.BF.GOFF_SCAN_DIR
#define reg_GOVWRTEN  RECEIVER_VGA_OFFSET_REGISTER.BF.GOVWRTEN
#define reg_GOFFSNAPSHOT  RECEIVER_VGA_OFFSET_REGISTER.BF.GOFFSNAPSHOT

// 0x002c	RECEIVER_VGA_CONTROL_REGISTER_1_DPC		RX Register
typedef union {
	struct {
		uint8_t PEAKSTEPLIM_2_0                          : 3;	/*  [2:0]     r/w 3'h7*/
		uint8_t SVVGAGAIN_1_0                            : 2;	/*  [4:3]       r 2'h0*/
		uint8_t SVVGACTRL_3_0_b0                         : 3;	/*  [8:5]       r 4'h0*/
		uint8_t SVVGACTRL_3_0_b1                         : 1;	/*  [8:5]       r 4'h0*/
		uint8_t PEAKVAL_5_0                              : 6;	/* [14:9]     r/w 6'h00*/
		uint8_t DPC_CONVERGED                            : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_VGA_CONTROL_REGISTER_1_DPC_t;
__xdata __at( 0x42c ) volatile RECEIVER_VGA_CONTROL_REGISTER_1_DPC_t RECEIVER_VGA_CONTROL_REGISTER_1_DPC;
#define reg_PEAKSTEPLIM_2_0  RECEIVER_VGA_CONTROL_REGISTER_1_DPC.BF.PEAKSTEPLIM_2_0
#define reg_SVVGAGAIN_1_0  RECEIVER_VGA_CONTROL_REGISTER_1_DPC.BF.SVVGAGAIN_1_0
#define reg_SVVGACTRL_3_0_b0  RECEIVER_VGA_CONTROL_REGISTER_1_DPC.BF.SVVGACTRL_3_0_b0
#define reg_SVVGACTRL_3_0_b1  RECEIVER_VGA_CONTROL_REGISTER_1_DPC.BF.SVVGACTRL_3_0_b1
#define reg_PEAKVAL_5_0  RECEIVER_VGA_CONTROL_REGISTER_1_DPC.BF.PEAKVAL_5_0
#define reg_DPC_CONVERGED  RECEIVER_VGA_CONTROL_REGISTER_1_DPC.BF.DPC_CONVERGED

// 0x0030	RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN		RX Register
typedef union {
	struct {
		uint8_t VGAGAIN_3_0                              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t GAIN2DB_1_0                              : 2;	/*  [6:5]     r/w 2'h3*/
		uint8_t VGAGAIN_STABLE                           : 1;	/*      7       r 1'h0*/
		uint8_t KFGAIN_5_0                               : 6;	/* [13:8]     r/w 6'h04*/
		uint8_t FAST                                     : 1;	/*     14     r/w 1'h1*/
		uint8_t FAST2                                    : 1;	/*     15     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN_t;
__xdata __at( 0x430 ) volatile RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN_t RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN;
#define reg_VGAGAIN_3_0  RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN.BF.VGAGAIN_3_0
#define reg_GAIN2DB_1_0  RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN.BF.GAIN2DB_1_0
#define reg_VGAGAIN_STABLE  RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN.BF.VGAGAIN_STABLE
#define reg_KFGAIN_5_0  RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN.BF.KFGAIN_5_0
#define reg_FAST  RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN.BF.FAST
#define reg_FAST2  RECEIVER_VGA_CONTROL_REGISTER_2_OFFSET_GAIN.BF.FAST2

// 0x0034	RECEIVER_VGA_CONTROL_REGISTER_3_STATUS_AMAX_TARGET		RX Register
typedef union {
	struct {
		uint8_t AMAXTARGET_7_0                           : 8;	/*  [7:0]     r/w 8'h4B*/
		uint8_t TOLSELREG_1_0                            : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t VGALOCKEDONCE                            : 1;	/*     10     r/w 1'h0*/
		uint8_t VGALOCKED                                : 1;	/*     11     r/w 1'h0*/
		uint8_t GAIN2DBSVAL_2_0                          : 3;	/*[14:12]       r 3'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_VGA_CONTROL_REGISTER_3_STATUS_AMAX_TARGET_t;
__xdata __at( 0x434 ) volatile RECEIVER_VGA_CONTROL_REGISTER_3_STATUS_AMAX_TARGET_t RECEIVER_VGA_CONTROL_REGISTER_3_STATUS_AMAX_TARGET;
#define reg_AMAXTARGET_7_0  RECEIVER_VGA_CONTROL_REGISTER_3_STATUS_AMAX_TARGET.BF.AMAXTARGET_7_0
#define reg_TOLSELREG_1_0  RECEIVER_VGA_CONTROL_REGISTER_3_STATUS_AMAX_TARGET.BF.TOLSELREG_1_0
#define reg_VGALOCKEDONCE  RECEIVER_VGA_CONTROL_REGISTER_3_STATUS_AMAX_TARGET.BF.VGALOCKEDONCE
#define reg_VGALOCKED  RECEIVER_VGA_CONTROL_REGISTER_3_STATUS_AMAX_TARGET.BF.VGALOCKED
#define reg_GAIN2DBSVAL_2_0  RECEIVER_VGA_CONTROL_REGISTER_3_STATUS_AMAX_TARGET.BF.GAIN2DBSVAL_2_0

// 0x0038	RECEIVER_VGA_CONTROL_REGISTER_4		RX Register
typedef union {
	struct {
		uint8_t G2DBCURSOR_9_0_b0                        : 8;	/*  [9:0]     r/w 10'h0D2*/
		uint8_t G2DBCURSOR_9_0_b1                        : 2;	/*  [9:0]     r/w 10'h0D2*/
		uint8_t RESERVED_10                              : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t G2DBGTGT_3_0                             : 4;	/*[15:12]     r/w 4'hA*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_VGA_CONTROL_REGISTER_4_t;
__xdata __at( 0x438 ) volatile RECEIVER_VGA_CONTROL_REGISTER_4_t RECEIVER_VGA_CONTROL_REGISTER_4;
#define reg_G2DBCURSOR_9_0_b0  RECEIVER_VGA_CONTROL_REGISTER_4.BF.G2DBCURSOR_9_0_b0
#define reg_G2DBCURSOR_9_0_b1  RECEIVER_VGA_CONTROL_REGISTER_4.BF.G2DBCURSOR_9_0_b1
#define reg_G2DBGTGT_3_0  RECEIVER_VGA_CONTROL_REGISTER_4.BF.G2DBGTGT_3_0

// 0x003c	RECEIVER_VGA_CONTROL_REGISTER_5		RX Register
typedef union {
	struct {
		uint8_t FFECURSOR_9_0_b0                         : 8;	/*  [9:0]     r/w 10'h03C*/
		uint8_t FFECURSOR_9_0_b1                         : 2;	/*  [9:0]     r/w 10'h03C*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w 6'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_VGA_CONTROL_REGISTER_5_t;
__xdata __at( 0x43c ) volatile RECEIVER_VGA_CONTROL_REGISTER_5_t RECEIVER_VGA_CONTROL_REGISTER_5;
#define reg_FFECURSOR_9_0_b0  RECEIVER_VGA_CONTROL_REGISTER_5.BF.FFECURSOR_9_0_b0
#define reg_FFECURSOR_9_0_b1  RECEIVER_VGA_CONTROL_REGISTER_5.BF.FFECURSOR_9_0_b1

// 0x0040	RECEIVER_PRBS_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t PRBSCHKEN                                : 1;	/*      0     r/w 1'h0*/
		uint8_t PRBSCHKRST                               : 1;	/*      1     r/w 1'h0*/
		uint8_t PRBSSEL_1_0                              : 2;	/*  [3:2]     r/w 2'h1*/
		uint8_t RXBER_EN                                 : 1;	/*      4     r/w 1'h0*/
		uint8_t RXBER_SNAPSHOT                           : 1;	/*      5     r/w 1'h0*/
		uint8_t SLB_EN                                   : 1;	/*      6     r/w 1'h0*/
		uint8_t SPI_SLB_EN                               : 1;	/*      7     r/w 1'h0*/
		uint8_t BERCNTIDX_2_0                            : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 2;	/*[12:11]     r/w 2'h0*/
		uint8_t PRBS_AUTO_RESET                          : 1;	/*     13     r/w 1'h0*/
		uint8_t PRBSERROR                                : 1;	/*     14       r 1'h0*/
		uint8_t PRBSSYNC                                 : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_PRBS_CONTROL_REGISTER_t;
__xdata __at( 0x440 ) volatile RECEIVER_PRBS_CONTROL_REGISTER_t RECEIVER_PRBS_CONTROL_REGISTER;
#define reg_PRBSCHKEN  RECEIVER_PRBS_CONTROL_REGISTER.BF.PRBSCHKEN
#define reg_PRBSCHKRST  RECEIVER_PRBS_CONTROL_REGISTER.BF.PRBSCHKRST
#define reg_PRBSSEL_1_0  RECEIVER_PRBS_CONTROL_REGISTER.BF.PRBSSEL_1_0
#define reg_RXBER_EN  RECEIVER_PRBS_CONTROL_REGISTER.BF.RXBER_EN
#define reg_RXBER_SNAPSHOT  RECEIVER_PRBS_CONTROL_REGISTER.BF.RXBER_SNAPSHOT
#define reg_SLB_EN  RECEIVER_PRBS_CONTROL_REGISTER.BF.SLB_EN
#define reg_SPI_SLB_EN  RECEIVER_PRBS_CONTROL_REGISTER.BF.SPI_SLB_EN
#define reg_BERCNTIDX_2_0  RECEIVER_PRBS_CONTROL_REGISTER.BF.BERCNTIDX_2_0
#define reg_PRBS_AUTO_RESET  RECEIVER_PRBS_CONTROL_REGISTER.BF.PRBS_AUTO_RESET
#define reg_PRBSERROR  RECEIVER_PRBS_CONTROL_REGISTER.BF.PRBSERROR
#define reg_PRBSSYNC  RECEIVER_PRBS_CONTROL_REGISTER.BF.PRBSSYNC

// 0x0044	RECEIVER_BER_COUNT_DATA_REGISTER		RX Register
typedef union {
	struct {
		uint8_t BERCNT_15_0_b0                           : 8;	/* [15:0]       r 16'h0000*/
		uint8_t BERCNT_15_0_b1                           : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RECEIVER_BER_COUNT_DATA_REGISTER_t;
__xdata __at( 0x444 ) volatile RECEIVER_BER_COUNT_DATA_REGISTER_t RECEIVER_BER_COUNT_DATA_REGISTER;
#define reg_BERCNT_15_0_b0  RECEIVER_BER_COUNT_DATA_REGISTER.BF.BERCNT_15_0_b0
#define reg_BERCNT_15_0_b1  RECEIVER_BER_COUNT_DATA_REGISTER.BF.BERCNT_15_0_b1
#define reg_BERCNT_15_0  RECEIVER_BER_COUNT_DATA_REGISTER.WT.W0

// 0x0050	RECEIVER_AC_COUPLING_CURRENT_SOURCE_ADJUST_REGISTER		RX Register
typedef union {
	struct {
		uint8_t CSVAL_2_0                                : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t CSIND_1_0                                : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t PDWNACC                                  : 1;	/*      5     r/w 1'h0*/
		uint8_t FCSADJ                                   : 1;	/*      6     r/w 1'h1*/
		uint8_t RESERVED_7                               : 1;	/* [10:7]     r/w 4'h0*/
		uint8_t RESERVED_8                               : 3;	/* [10:7]     r/w 4'h0*/
		uint8_t ACCPLADJSMVAL_4_0                        : 5;	/*[15:11]       r 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_AC_COUPLING_CURRENT_SOURCE_ADJUST_REGISTER_t;
__xdata __at( 0x450 ) volatile RECEIVER_AC_COUPLING_CURRENT_SOURCE_ADJUST_REGISTER_t RECEIVER_AC_COUPLING_CURRENT_SOURCE_ADJUST_REGISTER;
#define reg_CSVAL_2_0  RECEIVER_AC_COUPLING_CURRENT_SOURCE_ADJUST_REGISTER.BF.CSVAL_2_0
#define reg_CSIND_1_0  RECEIVER_AC_COUPLING_CURRENT_SOURCE_ADJUST_REGISTER.BF.CSIND_1_0
#define reg_PDWNACC  RECEIVER_AC_COUPLING_CURRENT_SOURCE_ADJUST_REGISTER.BF.PDWNACC
#define reg_FCSADJ  RECEIVER_AC_COUPLING_CURRENT_SOURCE_ADJUST_REGISTER.BF.FCSADJ
#define reg_ACCPLADJSMVAL_4_0  RECEIVER_AC_COUPLING_CURRENT_SOURCE_ADJUST_REGISTER.BF.ACCPLADJSMVAL_4_0

// 0x0054	RECEIVER_AC_COUPLING_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t FACCPL                                   : 1;	/*      0     r/w 1'h1*/
		uint8_t ACCPLASTEP_4_0                           : 5;	/*  [5:1]     r/w 5'h10*/
		uint8_t ACCPLSTEP_1_0                            : 2;	/*  [7:6]     r/w 2'h3*/
		uint8_t ACCPLREF_1_0                             : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t ACCPLGAIN_2_0                            : 3;	/*[12:10]     r/w 3'h1*/
		uint8_t FACCPLDYN                                : 1;	/*     13     r/w 1'h1*/
		uint8_t ACCPLBIASSCANDIR                         : 1;	/*     14     r/w 1'h0*/
		uint8_t ACCCMPHYSTMODE                           : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_AC_COUPLING_CONTROL_REGISTER_t;
__xdata __at( 0x454 ) volatile RECEIVER_AC_COUPLING_CONTROL_REGISTER_t RECEIVER_AC_COUPLING_CONTROL_REGISTER;
#define reg_FACCPL  RECEIVER_AC_COUPLING_CONTROL_REGISTER.BF.FACCPL
#define reg_ACCPLASTEP_4_0  RECEIVER_AC_COUPLING_CONTROL_REGISTER.BF.ACCPLASTEP_4_0
#define reg_ACCPLSTEP_1_0  RECEIVER_AC_COUPLING_CONTROL_REGISTER.BF.ACCPLSTEP_1_0
#define reg_ACCPLREF_1_0  RECEIVER_AC_COUPLING_CONTROL_REGISTER.BF.ACCPLREF_1_0
#define reg_ACCPLGAIN_2_0  RECEIVER_AC_COUPLING_CONTROL_REGISTER.BF.ACCPLGAIN_2_0
#define reg_FACCPLDYN  RECEIVER_AC_COUPLING_CONTROL_REGISTER.BF.FACCPLDYN
#define reg_ACCPLBIASSCANDIR  RECEIVER_AC_COUPLING_CONTROL_REGISTER.BF.ACCPLBIASSCANDIR
#define reg_ACCCMPHYSTMODE  RECEIVER_AC_COUPLING_CONTROL_REGISTER.BF.ACCCMPHYSTMODE

// 0x0058	RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER		RX Register
typedef union {
	struct {
		uint8_t ACCPLBIAS_7_0                            : 8;	/*  [7:0]     r/w 8'hXX*/
		uint8_t RESERVED_8                               : 1;	/*      8     r/w 1'h0*/
		uint8_t ACCPLSEL                                 : 1;	/*      9     r/w 1'h0*/
		uint8_t WRTEN                                    : 1;	/*     10       w 1'h0*/
		uint8_t PNMOSSEL                                 : 1;	/*     11     r/w 1'h0*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w 1'h0*/
		uint8_t ACC_SCN_BUSY                             : 1;	/*     13       r 1'h1*/
		uint8_t ACCPLLOCK                                : 1;	/*     14       r 1'h0*/
		uint8_t ACCPLMEAS                                : 1;	/*     15       r 1'hX*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER_t;
__xdata __at( 0x458 ) volatile RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER_t RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER;
#define reg_ACCPLBIAS_7_0  RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER.BF.ACCPLBIAS_7_0
#define reg_ACCPLSEL  RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER.BF.ACCPLSEL
#define reg_WRTEN  RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER.BF.WRTEN
#define reg_PNMOSSEL  RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER.BF.PNMOSSEL
#define reg_ACC_SCN_BUSY  RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER.BF.ACC_SCN_BUSY
#define reg_ACCPLLOCK  RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER.BF.ACCPLLOCK
#define reg_ACCPLMEAS  RECEIVER_AC_COUPLING_CALIBRATION_VALUE_REGISTER.BF.ACCPLMEAS

// 0x005c	RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t MTSCANDIR_ACC                            : 1;	/*      6       r 1'h0*/
		uint8_t MTSCANENABLE_ACC                         : 1;	/*      7     r/w 1'h0*/
		uint8_t MTSCANRUN_ACC                            : 1;	/*      8     r/w 1'h0*/
		uint8_t MTSCANRST_ACC                            : 1;	/*      9     r/w 1'h0*/
		uint8_t MTSCANFAIL_ACC                           : 1;	/*     10       r 1'h0*/
		uint8_t MTSCANPASS_ACC                           : 1;	/*     11       r 1'h0*/
		uint8_t MTANLGRUN_ACC                            : 1;	/*     12     r/w 1'h0*/
		uint8_t MTANLGRST_ACC                            : 1;	/*     13     r/w 1'h0*/
		uint8_t MTANLGFAIL_ACC                           : 1;	/*     14       r 1'h0*/
		uint8_t MTANLGPASS_ACC                           : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER_t;
__xdata __at( 0x45c ) volatile RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER_t RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER;
#define reg_MTSCANDIR_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTSCANDIR_ACC
#define reg_MTSCANENABLE_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTSCANENABLE_ACC
#define reg_MTSCANRUN_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTSCANRUN_ACC
#define reg_MTSCANRST_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTSCANRST_ACC
#define reg_MTSCANFAIL_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTSCANFAIL_ACC
#define reg_MTSCANPASS_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTSCANPASS_ACC
#define reg_MTANLGRUN_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTANLGRUN_ACC
#define reg_MTANLGRST_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTANLGRST_ACC
#define reg_MTANLGFAIL_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTANLGFAIL_ACC
#define reg_MTANLGPASS_ACC  RECEIVER_AC_COUPLING_MACROTEST_CONTROL_REGISTER.BF.MTANLGPASS_ACC

// 0x0060	RECEIVER_AMP_LOOP_STATUS_REGISTER		RX Register
typedef union {
	struct {
		uint8_t AMAXMODELNEXT                            : 1;	/*      0     r/w 1'h1*/
		uint8_t SPINROTATOR                              : 1;	/*      1     r/w 1'h0*/
		uint8_t AMPLOOPDONE3                             : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w 13'h0000*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w 13'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_AMP_LOOP_STATUS_REGISTER_t;
__xdata __at( 0x460 ) volatile RECEIVER_AMP_LOOP_STATUS_REGISTER_t RECEIVER_AMP_LOOP_STATUS_REGISTER;
#define reg_AMAXMODELNEXT  RECEIVER_AMP_LOOP_STATUS_REGISTER.BF.AMAXMODELNEXT
#define reg_SPINROTATOR  RECEIVER_AMP_LOOP_STATUS_REGISTER.BF.SPINROTATOR
#define reg_AMPLOOPDONE3  RECEIVER_AMP_LOOP_STATUS_REGISTER.BF.AMPLOOPDONE3

// 0x0064	RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t SDLVL_9_0_b0                             : 8;	/*  [9:0]     r/w 10'h030*/
		uint8_t SDLVL_9_0_b1                             : 2;	/*  [9:0]     r/w 10'h030*/
		uint8_t RESERVED_10                              : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t SIGDET                                   : 1;	/*     12       r 1'h0*/
		uint8_t SDASSERT                                 : 1;	/*     13       r 1'h0*/
		uint8_t SDOVRDVAL                                : 1;	/*     14     r/w 1'h0*/
		uint8_t SDOVRDEN                                 : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER_t;
__xdata __at( 0x464 ) volatile RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER_t RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER;
#define reg_SDLVL_9_0_b0  RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER.BF.SDLVL_9_0_b0
#define reg_SDLVL_9_0_b1  RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER.BF.SDLVL_9_0_b1
#define reg_SIGDET  RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER.BF.SIGDET
#define reg_SDASSERT  RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER.BF.SDASSERT
#define reg_SDOVRDVAL  RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER.BF.SDOVRDVAL
#define reg_SDOVRDEN  RECEIVER_SIGNAL_DETECT_CONTROL_REGISTER.BF.SDOVRDEN

// 0x0068	RECEIVER_POWER_SEQUENCING_OVERRIDE_REGISTER		RX Register
typedef union {
	struct {
		uint8_t PDWN_6_0                                 : 7;	/*  [6:0]     r/w 7'h7F*/
		uint8_t RESERVED_7                               : 1;	/* [12:7]     r/w 6'h00*/
		uint8_t RESERVED_8                               : 5;	/* [12:7]     r/w 6'h00*/
		uint8_t PDWN_CMD                                 : 1;	/*     13       r 1'h1*/
		uint8_t PDWN_STATUS_1_0                          : 2;	/*[15:14]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_POWER_SEQUENCING_OVERRIDE_REGISTER_t;
__xdata __at( 0x468 ) volatile RECEIVER_POWER_SEQUENCING_OVERRIDE_REGISTER_t RECEIVER_POWER_SEQUENCING_OVERRIDE_REGISTER;
#define reg_PDWN_6_0  RECEIVER_POWER_SEQUENCING_OVERRIDE_REGISTER.BF.PDWN_6_0
#define reg_PDWN_CMD  RECEIVER_POWER_SEQUENCING_OVERRIDE_REGISTER.BF.PDWN_CMD
#define reg_PDWN_STATUS_1_0  RECEIVER_POWER_SEQUENCING_OVERRIDE_REGISTER.BF.PDWN_STATUS_1_0

// 0x006c	RECEIVER_CDAC1_HUNT_LIMIT_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t CDAC1LIMHR_7_0                           : 8;	/*  [7:0]     r/w 8'h01*/
		uint8_t CDAC1LIMFR_7_0                           : 8;	/* [15:8]     r/w 8'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_CDAC1_HUNT_LIMIT_CONTROL_REGISTER_t;
__xdata __at( 0x46c ) volatile RECEIVER_CDAC1_HUNT_LIMIT_CONTROL_REGISTER_t RECEIVER_CDAC1_HUNT_LIMIT_CONTROL_REGISTER;
#define reg_CDAC1LIMHR_7_0  RECEIVER_CDAC1_HUNT_LIMIT_CONTROL_REGISTER.BF.CDAC1LIMHR_7_0
#define reg_CDAC1LIMFR_7_0  RECEIVER_CDAC1_HUNT_LIMIT_CONTROL_REGISTER.BF.CDAC1LIMFR_7_0

// 0x0070	RECEIVER_CDAC2_HUNT_LIMIT_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t CDAC2LIMHR_7_0                           : 8;	/*  [7:0]     r/w 8'h01*/
		uint8_t CDAC2LIMFR_7_0                           : 8;	/* [15:8]     r/w 8'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_CDAC2_HUNT_LIMIT_CONTROL_REGISTER_t;
__xdata __at( 0x470 ) volatile RECEIVER_CDAC2_HUNT_LIMIT_CONTROL_REGISTER_t RECEIVER_CDAC2_HUNT_LIMIT_CONTROL_REGISTER;
#define reg_CDAC2LIMHR_7_0  RECEIVER_CDAC2_HUNT_LIMIT_CONTROL_REGISTER.BF.CDAC2LIMHR_7_0
#define reg_CDAC2LIMFR_7_0  RECEIVER_CDAC2_HUNT_LIMIT_CONTROL_REGISTER.BF.CDAC2LIMFR_7_0

// 0x0074	RECEIVER_CDAC1_AND_CDAC2_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t CDAC1DLL_2_0                             : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t CDAC2DLL_2_0                             : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w 10'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w 10'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_CDAC1_AND_CDAC2_CONTROL_REGISTER_t;
__xdata __at( 0x474 ) volatile RECEIVER_CDAC1_AND_CDAC2_CONTROL_REGISTER_t RECEIVER_CDAC1_AND_CDAC2_CONTROL_REGISTER;
#define reg_CDAC1DLL_2_0  RECEIVER_CDAC1_AND_CDAC2_CONTROL_REGISTER.BF.CDAC1DLL_2_0
#define reg_CDAC2DLL_2_0  RECEIVER_CDAC1_AND_CDAC2_CONTROL_REGISTER.BF.CDAC2DLL_2_0

// 0x0078	RECEIVER_STATUS_REGISTER_1		RX Register
typedef union {
	struct {
		uint8_t DCCCMP                                   : 1;	/*      0       r 1'h0*/
		uint8_t ACISRCCMP                                : 1;	/*      1       r 1'h0*/
		uint8_t ACCCMP                                   : 1;	/*      2       r 1'h0*/
		uint8_t VGACALCMP                                : 1;	/*      3       r 1'h0*/
		uint8_t SLICERDONE                               : 1;	/*      4       r 1'h0*/
		uint8_t FFECMP                                   : 1;	/*      5       r 1'h0*/
		uint8_t DPCMP                                    : 1;	/*      6       r 1'h0*/
		uint8_t VGAOFFSETCNVGD                           : 1;	/*      7       r 1'h0*/
		uint8_t RESERVED_8                               : 7;	/* [14:8]     r/w 7'h00*/
		uint8_t STANDBY_ACK                              : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_STATUS_REGISTER_1_t;
__xdata __at( 0x478 ) volatile RECEIVER_STATUS_REGISTER_1_t RECEIVER_STATUS_REGISTER_1;
#define reg_DCCCMP  RECEIVER_STATUS_REGISTER_1.BF.DCCCMP
#define reg_ACISRCCMP  RECEIVER_STATUS_REGISTER_1.BF.ACISRCCMP
#define reg_ACCCMP  RECEIVER_STATUS_REGISTER_1.BF.ACCCMP
#define reg_VGACALCMP  RECEIVER_STATUS_REGISTER_1.BF.VGACALCMP
#define reg_SLICERDONE  RECEIVER_STATUS_REGISTER_1.BF.SLICERDONE
#define reg_FFECMP  RECEIVER_STATUS_REGISTER_1.BF.FFECMP
#define reg_DPCMP  RECEIVER_STATUS_REGISTER_1.BF.DPCMP
#define reg_VGAOFFSETCNVGD  RECEIVER_STATUS_REGISTER_1.BF.VGAOFFSETCNVGD
#define reg_STANDBY_ACK  RECEIVER_STATUS_REGISTER_1.BF.STANDBY_ACK

// 0x007c	RECEIVER_FUNCTION_CONTROL_REGISTER_1		RX Register
typedef union {
	struct {
		uint8_t FUNC_TMOUT                               : 1;	/*      0     r/w 1'h0*/
		uint8_t FUNC_LOFF                                : 1;	/*      1     r/w 1'h1*/
		uint8_t FUNC_FFE_DYN                             : 1;	/*      2     r/w 1'h1*/
		uint8_t FUNC_FFE                                 : 1;	/*      3     r/w 1'h1*/
		uint8_t FUNC_AMP                                 : 1;	/*      4     r/w 1'h1*/
		uint8_t FUNC_GAIN2DBOV_1_0                       : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t FUNC_GAIN2DB                             : 1;	/*      7     r/w 1'h1*/
		uint8_t FUNC_DPC                                 : 1;	/*      8     r/w 1'h1*/
		uint8_t FUNC_DPC2                                : 1;	/*      9     r/w 1'h1*/
		uint8_t FUNC_VGAOFFSET                           : 1;	/*     10     r/w 1'h1*/
		uint8_t FUNC_VGAGAIN                             : 1;	/*     11     r/w 1'h1*/
		uint8_t POLARITY                                 : 1;	/*     12     r/w 1'h0*/
		uint8_t GRAYCODE_DIS                             : 1;	/*     13     r/w 1'h0*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_FUNCTION_CONTROL_REGISTER_1_t;
__xdata __at( 0x47c ) volatile RECEIVER_FUNCTION_CONTROL_REGISTER_1_t RECEIVER_FUNCTION_CONTROL_REGISTER_1;
#define reg_FUNC_TMOUT  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_TMOUT
#define reg_FUNC_LOFF  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_LOFF
#define reg_FUNC_FFE_DYN  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_FFE_DYN
#define reg_FUNC_FFE  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_FFE
#define reg_FUNC_AMP  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_AMP
#define reg_FUNC_GAIN2DBOV_1_0  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_GAIN2DBOV_1_0
#define reg_FUNC_GAIN2DB  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_GAIN2DB
#define reg_FUNC_DPC  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_DPC
#define reg_FUNC_DPC2  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_DPC2
#define reg_FUNC_VGAOFFSET  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_VGAOFFSET
#define reg_FUNC_VGAGAIN  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.FUNC_VGAGAIN
#define reg_POLARITY  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.POLARITY
#define reg_GRAYCODE_DIS  RECEIVER_FUNCTION_CONTROL_REGISTER_1.BF.GRAYCODE_DIS

// 0x0080	RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t FW_FUNC_LOFF                             : 1;	/*      1     r/w 1'h0*/
		uint8_t FW_FUNC_FFE_DYN                          : 1;	/*      2     r/w 1'h0*/
		uint8_t FW_FUNC_FFE                              : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 3;	/*  [6:4]     r/w 3'h0*/
		uint8_t FW_FUNC_GAIN2DB                          : 1;	/*      7     r/w 1'h0*/
		uint8_t FW_FUNC_DPC                              : 1;	/*      8     r/w 1'h0*/
		uint8_t FW_FUNC_DPC2                             : 1;	/*      9     r/w 1'h0*/
		uint8_t FW_FUNC_VGAOFFSET                        : 1;	/*     10     r/w 1'h0*/
		uint8_t FW_FUNC_VGAGAIN                          : 1;	/*     11     r/w 1'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER_t;
__xdata __at( 0x480 ) volatile RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER_t RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER;
#define reg_FW_FUNC_LOFF  RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER.BF.FW_FUNC_LOFF
#define reg_FW_FUNC_FFE_DYN  RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER.BF.FW_FUNC_FFE_DYN
#define reg_FW_FUNC_FFE  RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER.BF.FW_FUNC_FFE
#define reg_FW_FUNC_GAIN2DB  RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER.BF.FW_FUNC_GAIN2DB
#define reg_FW_FUNC_DPC  RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER.BF.FW_FUNC_DPC
#define reg_FW_FUNC_DPC2  RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER.BF.FW_FUNC_DPC2
#define reg_FW_FUNC_VGAOFFSET  RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER.BF.FW_FUNC_VGAOFFSET
#define reg_FW_FUNC_VGAGAIN  RECEIVER_MANUAL_FUNCTION_CONTROL_REGISTER.BF.FW_FUNC_VGAGAIN

// 0x0084	RECEIVER_LOCAL_OFFSET_LOFF_CHANNEL_SELECT_REGISTER		RX Register
typedef union {
	struct {
		uint8_t LOFFCHSEL_4_0                            : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t LOFFMEASSEL_2_0                          : 3;	/* [10:8]     r/w 3'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_LOCAL_OFFSET_LOFF_CHANNEL_SELECT_REGISTER_t;
__xdata __at( 0x484 ) volatile RECEIVER_LOCAL_OFFSET_LOFF_CHANNEL_SELECT_REGISTER_t RECEIVER_LOCAL_OFFSET_LOFF_CHANNEL_SELECT_REGISTER;
#define reg_LOFFCHSEL_4_0  RECEIVER_LOCAL_OFFSET_LOFF_CHANNEL_SELECT_REGISTER.BF.LOFFCHSEL_4_0
#define reg_LOFFMEASSEL_2_0  RECEIVER_LOCAL_OFFSET_LOFF_CHANNEL_SELECT_REGISTER.BF.LOFFMEASSEL_2_0

// 0x0088	RECEIVER_LOFF_OFFSET_REGISTER		RX Register
typedef union {
	struct {
		uint8_t OFFSET_8_0_b0                            : 8;	/*  [8:0]     r/w 9'h000*/
		uint8_t OFFSET_8_0_b1                            : 1;	/*  [8:0]     r/w 9'h000*/
		uint8_t RESERVED_9                               : 2;	/* [10:9]     r/w 2'h0*/
		uint8_t DZLIMIT_3_0                              : 4;	/*[14:11]     r/w 4'hC*/
		uint8_t LOFF_SCN_BUSY                            : 1;	/*     15       r 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_LOFF_OFFSET_REGISTER_t;
__xdata __at( 0x488 ) volatile RECEIVER_LOFF_OFFSET_REGISTER_t RECEIVER_LOFF_OFFSET_REGISTER;
#define reg_OFFSET_8_0_b0  RECEIVER_LOFF_OFFSET_REGISTER.BF.OFFSET_8_0_b0
#define reg_OFFSET_8_0_b1  RECEIVER_LOFF_OFFSET_REGISTER.BF.OFFSET_8_0_b1
#define reg_DZLIMIT_3_0  RECEIVER_LOFF_OFFSET_REGISTER.BF.DZLIMIT_3_0
#define reg_LOFF_SCN_BUSY  RECEIVER_LOFF_OFFSET_REGISTER.BF.LOFF_SCN_BUSY

// 0x008c	RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t MTSCANADDR_LFE_4_0                       : 5;	/*  [4:0]       r 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t MTSCANDIR_LFE                            : 1;	/*      6       r 1'h0*/
		uint8_t MTSCANENABLE_LFE                         : 1;	/*      7     r/w 1'h0*/
		uint8_t MTSCANRUN_LFE                            : 1;	/*      8     r/w 1'h0*/
		uint8_t MTSCANRST_LFE                            : 1;	/*      9     r/w 1'h0*/
		uint8_t MTSCANFAIL_LFE                           : 1;	/*     10       r 1'h0*/
		uint8_t MTSCANPASS_LFE                           : 1;	/*     11       r 1'h0*/
		uint8_t MTANLGRUN_LFE                            : 1;	/*     12     r/w 1'h0*/
		uint8_t MTANLGRST_LFE                            : 1;	/*     13     r/w 1'h0*/
		uint8_t MTANLGFAIL_LFE                           : 1;	/*     14       r 1'h0*/
		uint8_t MTANLGPASS_LFE                           : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER_t;
__xdata __at( 0x48c ) volatile RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER_t RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER;
#define reg_MTSCANADDR_LFE_4_0  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTSCANADDR_LFE_4_0
#define reg_MTSCANDIR_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTSCANDIR_LFE
#define reg_MTSCANENABLE_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTSCANENABLE_LFE
#define reg_MTSCANRUN_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTSCANRUN_LFE
#define reg_MTSCANRST_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTSCANRST_LFE
#define reg_MTSCANFAIL_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTSCANFAIL_LFE
#define reg_MTSCANPASS_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTSCANPASS_LFE
#define reg_MTANLGRUN_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTANLGRUN_LFE
#define reg_MTANLGRST_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTANLGRST_LFE
#define reg_MTANLGFAIL_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTANLGFAIL_LFE
#define reg_MTANLGPASS_LFE  RECEIVER_LOFF_EVEN_MACROTEST_CONTROL_REGISTER.BF.MTANLGPASS_LFE

// 0x0090	RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t MTSCANADDR_LFO_4_0                       : 5;	/*  [4:0]       r 5'h00*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t MTSCANDIR_LFO                            : 1;	/*      6       r 1'h0*/
		uint8_t MTSCANENABLE_LFO                         : 1;	/*      7     r/w 1'h0*/
		uint8_t MTSCANRUN_LFO                            : 1;	/*      8     r/w 1'h0*/
		uint8_t MTSCANRST_LFO                            : 1;	/*      9     r/w 1'h0*/
		uint8_t MTSCANFAIL_LFO                           : 1;	/*     10       r 1'h0*/
		uint8_t MTSCANPASS_LFO                           : 1;	/*     11       r 1'h0*/
		uint8_t MTANLGRUN_LFO                            : 1;	/*     12     r/w 1'h0*/
		uint8_t MTANLGRST_LFO                            : 1;	/*     13     r/w 1'h0*/
		uint8_t MTANLGFAIL_LFO                           : 1;	/*     14       r 1'h0*/
		uint8_t MTANLGPASS_LFO                           : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER_t;
__xdata __at( 0x490 ) volatile RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER_t RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER;
#define reg_MTSCANADDR_LFO_4_0  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTSCANADDR_LFO_4_0
#define reg_MTSCANDIR_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTSCANDIR_LFO
#define reg_MTSCANENABLE_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTSCANENABLE_LFO
#define reg_MTSCANRUN_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTSCANRUN_LFO
#define reg_MTSCANRST_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTSCANRST_LFO
#define reg_MTSCANFAIL_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTSCANFAIL_LFO
#define reg_MTSCANPASS_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTSCANPASS_LFO
#define reg_MTANLGRUN_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTANLGRUN_LFO
#define reg_MTANLGRST_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTANLGRST_LFO
#define reg_MTANLGFAIL_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTANLGFAIL_LFO
#define reg_MTANLGPASS_LFO  RECEIVER_LOFF_ODD_MACROTEST_CONTROL_REGISTER.BF.MTANLGPASS_LFO

// 0x0094	RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t MTSCANDIR_GOF                            : 1;	/*      6       r 1'h0*/
		uint8_t MTSCANENABLE_GOF                         : 1;	/*      7     r/w 1'h0*/
		uint8_t MTSCANRUN_GOF                            : 1;	/*      8     r/w 1'h0*/
		uint8_t MTSCANRST_GOF                            : 1;	/*      9     r/w 1'h0*/
		uint8_t MTSCANFAIL_GOF                           : 1;	/*     10       r 1'h0*/
		uint8_t MTSCANPASS_GOF                           : 1;	/*     11       r 1'h0*/
		uint8_t MTANLGRUN_GOF                            : 1;	/*     12     r/w 1'h0*/
		uint8_t MTANLGRST_GOF                            : 1;	/*     13     r/w 1'h0*/
		uint8_t MTANLGFAIL_GOF                           : 1;	/*     14       r 1'h0*/
		uint8_t MTANLGPASS_GOF                           : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER_t;
__xdata __at( 0x494 ) volatile RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER_t RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER;
#define reg_MTSCANDIR_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTSCANDIR_GOF
#define reg_MTSCANENABLE_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTSCANENABLE_GOF
#define reg_MTSCANRUN_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTSCANRUN_GOF
#define reg_MTSCANRST_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTSCANRST_GOF
#define reg_MTSCANFAIL_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTSCANFAIL_GOF
#define reg_MTSCANPASS_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTSCANPASS_GOF
#define reg_MTANLGRUN_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTANLGRUN_GOF
#define reg_MTANLGRST_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTANLGRST_GOF
#define reg_MTANLGFAIL_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTANLGFAIL_GOF
#define reg_MTANLGPASS_GOF  RECEIVER_GLOBAL_OFFSET_MACROTEST_CONTROL_REGISTER.BF.MTANLGPASS_GOF

// 0x0098	RECEIVER_LOFF_REGISTER		RX Register
typedef union {
	struct {
		uint8_t LOFF_CURRENT_3_0                         : 4;	/*  [3:0]       r 4'hC*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w 1'h0*/
		uint8_t LOFF_IDLE                                : 1;	/*      5       r 1'h1*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w 1'h0*/
		uint8_t LOFF_GO_TARGET                           : 1;	/*      7     r/w 1'h0*/
		uint8_t LOFF_TARGET_3_0                          : 4;	/* [11:8]     r/w 4'h0*/
		uint8_t LOFF_PDFQUAD                             : 1;	/*     12     r/w 1'h0*/
		uint8_t RESERVED_13                              : 1;	/*     13     r/w 1'h0*/
		uint8_t LOFF_FREEZE                              : 1;	/*     14     r/w 1'h0*/
		uint8_t LOFF_APPLY_OFF                           : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_LOFF_REGISTER_t;
__xdata __at( 0x498 ) volatile RECEIVER_LOFF_REGISTER_t RECEIVER_LOFF_REGISTER;
#define reg_LOFF_CURRENT_3_0  RECEIVER_LOFF_REGISTER.BF.LOFF_CURRENT_3_0
#define reg_LOFF_IDLE  RECEIVER_LOFF_REGISTER.BF.LOFF_IDLE
#define reg_LOFF_GO_TARGET  RECEIVER_LOFF_REGISTER.BF.LOFF_GO_TARGET
#define reg_LOFF_TARGET_3_0  RECEIVER_LOFF_REGISTER.BF.LOFF_TARGET_3_0
#define reg_LOFF_PDFQUAD  RECEIVER_LOFF_REGISTER.BF.LOFF_PDFQUAD
#define reg_LOFF_FREEZE  RECEIVER_LOFF_REGISTER.BF.LOFF_FREEZE
#define reg_LOFF_APPLY_OFF  RECEIVER_LOFF_REGISTER.BF.LOFF_APPLY_OFF

// 0x009c	RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t MTSCANADDR_DF_3_0                        : 4;	/*  [3:0]       r 4'h0*/
		uint8_t RESERVED_4                               : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t MTSCANDIR_DF                             : 1;	/*      6       r 1'h0*/
		uint8_t MTSCANENABLE_DF                          : 1;	/*      7     r/w 1'h0*/
		uint8_t MTSCANRUN_DF                             : 1;	/*      8     r/w 1'h0*/
		uint8_t MTSCANRST_DF                             : 1;	/*      9     r/w 1'h0*/
		uint8_t MTSCANFAIL_DF                            : 1;	/*     10       r 1'h0*/
		uint8_t MTSCANPASS_DF                            : 1;	/*     11       r 1'h0*/
		uint8_t MTANLGRUN_DF                             : 1;	/*     12     r/w 1'h0*/
		uint8_t MTANLGRST_DF                             : 1;	/*     13     r/w 1'h0*/
		uint8_t MTANLGFAIL_DF                            : 1;	/*     14       r 1'h0*/
		uint8_t MTANLGPASS_DF                            : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER_t;
__xdata __at( 0x49c ) volatile RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER_t RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER;
#define reg_MTSCANADDR_DF_3_0  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANADDR_DF_3_0
#define reg_MTSCANDIR_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANDIR_DF
#define reg_MTSCANENABLE_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANENABLE_DF
#define reg_MTSCANRUN_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANRUN_DF
#define reg_MTSCANRST_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANRST_DF
#define reg_MTSCANFAIL_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANFAIL_DF
#define reg_MTSCANPASS_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANPASS_DF
#define reg_MTANLGRUN_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTANLGRUN_DF
#define reg_MTANLGRST_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTANLGRST_DF
#define reg_MTANLGFAIL_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTANLGFAIL_DF
#define reg_MTANLGPASS_DF  RECEIVER_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTANLGPASS_DF

// 0x00a0	RECEIVER_ANALOG_SWITCH_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t ANLGSW_7_0                               : 8;	/*  [7:0]     r/w 8'h00*/
		uint8_t TUNESLEWT_ACC_1_0                        : 2;	/*  [9:8]     r/w 2'h1*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w 6'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_ANALOG_SWITCH_CONTROL_REGISTER_t;
__xdata __at( 0x4a0 ) volatile RECEIVER_ANALOG_SWITCH_CONTROL_REGISTER_t RECEIVER_ANALOG_SWITCH_CONTROL_REGISTER;
#define reg_ANLGSW_7_0  RECEIVER_ANALOG_SWITCH_CONTROL_REGISTER.BF.ANLGSW_7_0
#define reg_TUNESLEWT_ACC_1_0  RECEIVER_ANALOG_SWITCH_CONTROL_REGISTER.BF.TUNESLEWT_ACC_1_0

// 0x00a4	RECEIVER_DAC_THRESHOLD_REGISTER		RX Register
typedef union {
	struct {
		uint8_t MTDLLTHRESH_6_0                          : 7;	/*  [6:0]     r/w 7'h7F*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w 9'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w 9'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_DAC_THRESHOLD_REGISTER_t;
__xdata __at( 0x4a4 ) volatile RECEIVER_DAC_THRESHOLD_REGISTER_t RECEIVER_DAC_THRESHOLD_REGISTER;
#define reg_MTDLLTHRESH_6_0  RECEIVER_DAC_THRESHOLD_REGISTER.BF.MTDLLTHRESH_6_0

// 0x00a8	RECEIVER_PDF_EYE_METRICS_REGISTER		RX Register
typedef union {
	struct {
		uint8_t APDF_12_0_b0                             : 8;	/* [12:0]       r 13'h0000*/
		uint8_t APDF_12_0_b1                             : 5;	/* [12:0]       r 13'h0000*/
		uint8_t EMPDFRDY                                 : 1;	/*     13       r 1'h0*/
		uint8_t EMPDFRST                                 : 1;	/*     14       w 1'h0*/
		uint8_t EMPDFEN                                  : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_PDF_EYE_METRICS_REGISTER_t;
__xdata __at( 0x4a8 ) volatile RECEIVER_PDF_EYE_METRICS_REGISTER_t RECEIVER_PDF_EYE_METRICS_REGISTER;
#define reg_APDF_12_0_b0  RECEIVER_PDF_EYE_METRICS_REGISTER.BF.APDF_12_0_b0
#define reg_APDF_12_0_b1  RECEIVER_PDF_EYE_METRICS_REGISTER.BF.APDF_12_0_b1
#define reg_EMPDFRDY  RECEIVER_PDF_EYE_METRICS_REGISTER.BF.EMPDFRDY
#define reg_EMPDFRST  RECEIVER_PDF_EYE_METRICS_REGISTER.BF.EMPDFRST
#define reg_EMPDFEN  RECEIVER_PDF_EYE_METRICS_REGISTER.BF.EMPDFEN

// 0x00ac	RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1		RX Register
typedef union {
	struct {
		uint8_t AWVFRM_8_0_b0                            : 8;	/*  [8:0]       r 9'h000*/
		uint8_t AWVFRM_8_0_b1                            : 1;	/*  [8:0]       r 9'h000*/
		uint8_t RESERVED_9                               : 3;	/* [11:9]     r/w 3'h0*/
		uint8_t EMWVFRMRDY                               : 1;	/*     12       r 1'h0*/
		uint8_t EMWVFRMNEXT                              : 1;	/*     13       w 1'h0*/
		uint8_t EMWVFRMRST                               : 1;	/*     14     r/w 1'h0*/
		uint8_t EMWVFRMEN                                : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1_t;
__xdata __at( 0x4ac ) volatile RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1_t RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1;
#define reg_AWVFRM_8_0_b0  RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1.BF.AWVFRM_8_0_b0
#define reg_AWVFRM_8_0_b1  RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1.BF.AWVFRM_8_0_b1
#define reg_EMWVFRMRDY  RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1.BF.EMWVFRMRDY
#define reg_EMWVFRMNEXT  RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1.BF.EMWVFRMNEXT
#define reg_EMWVFRMRST  RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1.BF.EMWVFRMRST
#define reg_EMWVFRMEN  RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_1.BF.EMWVFRMEN

// 0x00b0	RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_2		RX Register
typedef union {
	struct {
		uint8_t EMWVFRMLNGTH_8_0_b0                      : 8;	/*  [8:0]     r/w 9'h0FC*/
		uint8_t EMWVFRMLNGTH_8_0_b1                      : 1;	/*  [8:0]     r/w 9'h0FC*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w 7'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_2_t;
__xdata __at( 0x4b0 ) volatile RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_2_t RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_2;
#define reg_EMWVFRMLNGTH_8_0_b0  RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_2.BF.EMWVFRMLNGTH_8_0_b0
#define reg_EMWVFRMLNGTH_8_0_b1  RECEIVER_WAVEFORM_EYE_METRICS_REGISTER_2.BF.EMWVFRMLNGTH_8_0_b1

// 0x00b4	RECEIVER_STATE_MACHINE_STATUS_0_REGISTER		RX Register
typedef union {
	struct {
		uint8_t SVRX_PWRSEQ_2_0                          : 3;	/*  [2:0]       r 3'h0*/
		uint8_t SV_PWRSEQ_2_0                            : 3;	/*  [5:3]       r 3'h0*/
		uint8_t SVLINKCTRL_3_0_b0                        : 2;	/*  [9:6]       r 4'h0*/
		uint8_t SVLINKCTRL_3_0_b1                        : 2;	/*  [9:6]       r 4'h0*/
		uint8_t SVAMPLOOPCTRL_4_0                        : 5;	/*[14:10]       r 5'h00*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_STATE_MACHINE_STATUS_0_REGISTER_t;
__xdata __at( 0x4b4 ) volatile RECEIVER_STATE_MACHINE_STATUS_0_REGISTER_t RECEIVER_STATE_MACHINE_STATUS_0_REGISTER;
#define reg_SVRX_PWRSEQ_2_0  RECEIVER_STATE_MACHINE_STATUS_0_REGISTER.BF.SVRX_PWRSEQ_2_0
#define reg_SV_PWRSEQ_2_0  RECEIVER_STATE_MACHINE_STATUS_0_REGISTER.BF.SV_PWRSEQ_2_0
#define reg_SVLINKCTRL_3_0_b0  RECEIVER_STATE_MACHINE_STATUS_0_REGISTER.BF.SVLINKCTRL_3_0_b0
#define reg_SVLINKCTRL_3_0_b1  RECEIVER_STATE_MACHINE_STATUS_0_REGISTER.BF.SVLINKCTRL_3_0_b1
#define reg_SVAMPLOOPCTRL_4_0  RECEIVER_STATE_MACHINE_STATUS_0_REGISTER.BF.SVAMPLOOPCTRL_4_0

// 0x00b8	RECEIVER_STATE_MACHINE_STATUS_1_REGISTER		RX Register
typedef union {
	struct {
		uint8_t SVACCPLCTRL_3_0                          : 4;	/*  [3:0]       r 4'h0*/
		uint8_t SVACCPLSCAN_3_0                          : 4;	/*  [7:4]       r 4'h0*/
		uint8_t SVMTACCPLSCAN_4_0                        : 5;	/* [12:8]       r 5'h00*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_STATE_MACHINE_STATUS_1_REGISTER_t;
__xdata __at( 0x4b8 ) volatile RECEIVER_STATE_MACHINE_STATUS_1_REGISTER_t RECEIVER_STATE_MACHINE_STATUS_1_REGISTER;
#define reg_SVACCPLCTRL_3_0  RECEIVER_STATE_MACHINE_STATUS_1_REGISTER.BF.SVACCPLCTRL_3_0
#define reg_SVACCPLSCAN_3_0  RECEIVER_STATE_MACHINE_STATUS_1_REGISTER.BF.SVACCPLSCAN_3_0
#define reg_SVMTACCPLSCAN_4_0  RECEIVER_STATE_MACHINE_STATUS_1_REGISTER.BF.SVMTACCPLSCAN_4_0

// 0x00bc	RECEIVER_STATE_MACHINE_STATUS_2_REGISTER		RX Register
typedef union {
	struct {
		uint8_t SVFFEHUNT_3_0                            : 4;	/*  [3:0]       r 4'h0*/
		uint8_t SVTOKENCTRL_2_0                          : 3;	/*  [6:4]       r 3'h0*/
		uint8_t SVCFGSEL_4_0_b0                          : 1;	/* [11:7]       r 5'h02*/
		uint8_t SVCFGSEL_4_0_b1                          : 4;	/* [11:7]       r 5'h02*/
		uint8_t SVCSEL_2_0                               : 3;	/*[14:12]       r 3'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_STATE_MACHINE_STATUS_2_REGISTER_t;
__xdata __at( 0x4bc ) volatile RECEIVER_STATE_MACHINE_STATUS_2_REGISTER_t RECEIVER_STATE_MACHINE_STATUS_2_REGISTER;
#define reg_SVFFEHUNT_3_0  RECEIVER_STATE_MACHINE_STATUS_2_REGISTER.BF.SVFFEHUNT_3_0
#define reg_SVTOKENCTRL_2_0  RECEIVER_STATE_MACHINE_STATUS_2_REGISTER.BF.SVTOKENCTRL_2_0
#define reg_SVCFGSEL_4_0_b0  RECEIVER_STATE_MACHINE_STATUS_2_REGISTER.BF.SVCFGSEL_4_0_b0
#define reg_SVCFGSEL_4_0_b1  RECEIVER_STATE_MACHINE_STATUS_2_REGISTER.BF.SVCFGSEL_4_0_b1
#define reg_SVCSEL_2_0  RECEIVER_STATE_MACHINE_STATUS_2_REGISTER.BF.SVCSEL_2_0

// 0x00c0	RECEIVER_STATE_MACHINE_STATUS_3_REGISTER		RX Register
typedef union {
	struct {
		uint8_t SVLOFFCTRLE_3_0                          : 4;	/*  [3:0]       r 4'h0*/
		uint8_t SVLOFFSCANE_3_0                          : 4;	/*  [7:4]       r 4'h0*/
		uint8_t SVMTLOFFSCANE_4_0                        : 5;	/* [12:8]       r 5'h00*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_STATE_MACHINE_STATUS_3_REGISTER_t;
__xdata __at( 0x4c0 ) volatile RECEIVER_STATE_MACHINE_STATUS_3_REGISTER_t RECEIVER_STATE_MACHINE_STATUS_3_REGISTER;
#define reg_SVLOFFCTRLE_3_0  RECEIVER_STATE_MACHINE_STATUS_3_REGISTER.BF.SVLOFFCTRLE_3_0
#define reg_SVLOFFSCANE_3_0  RECEIVER_STATE_MACHINE_STATUS_3_REGISTER.BF.SVLOFFSCANE_3_0
#define reg_SVMTLOFFSCANE_4_0  RECEIVER_STATE_MACHINE_STATUS_3_REGISTER.BF.SVMTLOFFSCANE_4_0

// 0x00c4	RECEIVER_STATE_MACHINE_STATUS_4_REGISTER		RX Register
typedef union {
	struct {
		uint8_t SVLOFFCTRLO_3_0                          : 4;	/*  [3:0]       r 4'h0*/
		uint8_t SVLOFFSCANO_3_0                          : 4;	/*  [7:4]       r 4'h0*/
		uint8_t SVMTLOFFSCANO_4_0                        : 5;	/* [12:8]       r 5'h00*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_STATE_MACHINE_STATUS_4_REGISTER_t;
__xdata __at( 0x4c4 ) volatile RECEIVER_STATE_MACHINE_STATUS_4_REGISTER_t RECEIVER_STATE_MACHINE_STATUS_4_REGISTER;
#define reg_SVLOFFCTRLO_3_0  RECEIVER_STATE_MACHINE_STATUS_4_REGISTER.BF.SVLOFFCTRLO_3_0
#define reg_SVLOFFSCANO_3_0  RECEIVER_STATE_MACHINE_STATUS_4_REGISTER.BF.SVLOFFSCANO_3_0
#define reg_SVMTLOFFSCANO_4_0  RECEIVER_STATE_MACHINE_STATUS_4_REGISTER.BF.SVMTLOFFSCANO_4_0

// 0x00c8	RECEIVER_SNAPSHOT_0_REGISTER		RX Register
typedef union {
	struct {
		uint8_t DATA63_48_15_0_b0                        : 8;	/* [15:0]       r 16'h0000*/
		uint8_t DATA63_48_15_0_b1                        : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RECEIVER_SNAPSHOT_0_REGISTER_t;
__xdata __at( 0x4c8 ) volatile RECEIVER_SNAPSHOT_0_REGISTER_t RECEIVER_SNAPSHOT_0_REGISTER;
#define reg_DATA63_48_15_0_b0  RECEIVER_SNAPSHOT_0_REGISTER.BF.DATA63_48_15_0_b0
#define reg_DATA63_48_15_0_b1  RECEIVER_SNAPSHOT_0_REGISTER.BF.DATA63_48_15_0_b1
#define reg_DATA63_48_15_0  RECEIVER_SNAPSHOT_0_REGISTER.WT.W0

// 0x00cc	RECEIVER_SNAPSHOT_1_REGISTER		RX Register
typedef union {
	struct {
		uint8_t DATA47_32_15_0_b0                        : 8;	/* [15:0]       r 16'h0000*/
		uint8_t DATA47_32_15_0_b1                        : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RECEIVER_SNAPSHOT_1_REGISTER_t;
__xdata __at( 0x4cc ) volatile RECEIVER_SNAPSHOT_1_REGISTER_t RECEIVER_SNAPSHOT_1_REGISTER;
#define reg_DATA47_32_15_0_b0  RECEIVER_SNAPSHOT_1_REGISTER.BF.DATA47_32_15_0_b0
#define reg_DATA47_32_15_0_b1  RECEIVER_SNAPSHOT_1_REGISTER.BF.DATA47_32_15_0_b1
#define reg_DATA47_32_15_0  RECEIVER_SNAPSHOT_1_REGISTER.WT.W0

// 0x00d0	RECEIVER_SNAPSHOT_2_REGISTER		RX Register
typedef union {
	struct {
		uint8_t DATA31_16_15_0_b0                        : 8;	/* [15:0]       r 16'h0000*/
		uint8_t DATA31_16_15_0_b1                        : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RECEIVER_SNAPSHOT_2_REGISTER_t;
__xdata __at( 0x4d0 ) volatile RECEIVER_SNAPSHOT_2_REGISTER_t RECEIVER_SNAPSHOT_2_REGISTER;
#define reg_DATA31_16_15_0_b0  RECEIVER_SNAPSHOT_2_REGISTER.BF.DATA31_16_15_0_b0
#define reg_DATA31_16_15_0_b1  RECEIVER_SNAPSHOT_2_REGISTER.BF.DATA31_16_15_0_b1
#define reg_DATA31_16_15_0  RECEIVER_SNAPSHOT_2_REGISTER.WT.W0

// 0x00d4	RECEIVER_SNAPSHOT_3_REGISTER		RX Register
typedef union {
	struct {
		uint8_t DATA15_00_15_0_b0                        : 8;	/* [15:0]       r 16'h0000*/
		uint8_t DATA15_00_15_0_b1                        : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RECEIVER_SNAPSHOT_3_REGISTER_t;
__xdata __at( 0x4d4 ) volatile RECEIVER_SNAPSHOT_3_REGISTER_t RECEIVER_SNAPSHOT_3_REGISTER;
#define reg_DATA15_00_15_0_b0  RECEIVER_SNAPSHOT_3_REGISTER.BF.DATA15_00_15_0_b0
#define reg_DATA15_00_15_0_b1  RECEIVER_SNAPSHOT_3_REGISTER.BF.DATA15_00_15_0_b1
#define reg_DATA15_00_15_0  RECEIVER_SNAPSHOT_3_REGISTER.WT.W0

// 0x00d8	RECEIVER_SNAPSHOT_4_REGISTER		RX Register
typedef union {
	struct {
		uint8_t PDATA43_28_15_0_b0                       : 8;	/* [15:0]       r 16'h0000*/
		uint8_t PDATA43_28_15_0_b1                       : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RECEIVER_SNAPSHOT_4_REGISTER_t;
__xdata __at( 0x4d8 ) volatile RECEIVER_SNAPSHOT_4_REGISTER_t RECEIVER_SNAPSHOT_4_REGISTER;
#define reg_PDATA43_28_15_0_b0  RECEIVER_SNAPSHOT_4_REGISTER.BF.PDATA43_28_15_0_b0
#define reg_PDATA43_28_15_0_b1  RECEIVER_SNAPSHOT_4_REGISTER.BF.PDATA43_28_15_0_b1
#define reg_PDATA43_28_15_0  RECEIVER_SNAPSHOT_4_REGISTER.WT.W0

// 0x00dc	RECEIVER_SNAPSHOT_5_REGISTER		RX Register
typedef union {
	struct {
		uint8_t PDATA27_12_15_0_b0                       : 8;	/* [15:0]       r 16'h0000*/
		uint8_t PDATA27_12_15_0_b1                       : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RECEIVER_SNAPSHOT_5_REGISTER_t;
__xdata __at( 0x4dc ) volatile RECEIVER_SNAPSHOT_5_REGISTER_t RECEIVER_SNAPSHOT_5_REGISTER;
#define reg_PDATA27_12_15_0_b0  RECEIVER_SNAPSHOT_5_REGISTER.BF.PDATA27_12_15_0_b0
#define reg_PDATA27_12_15_0_b1  RECEIVER_SNAPSHOT_5_REGISTER.BF.PDATA27_12_15_0_b1
#define reg_PDATA27_12_15_0  RECEIVER_SNAPSHOT_5_REGISTER.WT.W0

// 0x00e0	RECEIVER_SNAPSHOT_6_REGISTER		RX Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t PDATA11_0_11_0_b0                        : 4;	/* [15:4]       r 12'h000*/
		uint8_t PDATA11_0_11_0_b1                        : 8;	/* [15:4]       r 12'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_SNAPSHOT_6_REGISTER_t;
__xdata __at( 0x4e0 ) volatile RECEIVER_SNAPSHOT_6_REGISTER_t RECEIVER_SNAPSHOT_6_REGISTER;
#define reg_PDATA11_0_11_0_b0  RECEIVER_SNAPSHOT_6_REGISTER.BF.PDATA11_0_11_0_b0
#define reg_PDATA11_0_11_0_b1  RECEIVER_SNAPSHOT_6_REGISTER.BF.PDATA11_0_11_0_b1

// 0x00e4	RECEIVER_SNAPSHOT_7_REGISTER		RX Register
typedef union {
	struct {
		uint8_t AMP_EVEN_7_0                             : 8;	/*  [7:0]       r 8'h00*/
		uint8_t AMP_ODD_7_0                              : 8;	/* [15:8]       r 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_SNAPSHOT_7_REGISTER_t;
__xdata __at( 0x4e4 ) volatile RECEIVER_SNAPSHOT_7_REGISTER_t RECEIVER_SNAPSHOT_7_REGISTER;
#define reg_AMP_EVEN_7_0  RECEIVER_SNAPSHOT_7_REGISTER.BF.AMP_EVEN_7_0
#define reg_AMP_ODD_7_0  RECEIVER_SNAPSHOT_7_REGISTER.BF.AMP_ODD_7_0

// 0x00e8	RECEIVER_SNAPSHOT_8_REGISTER		RX Register
typedef union {
	struct {
		uint8_t EDGE_EVEN_7_0                            : 8;	/*  [7:0]       r 8'h00*/
		uint8_t EDGE_ODD_7_0                             : 8;	/* [15:8]       r 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_SNAPSHOT_8_REGISTER_t;
__xdata __at( 0x4e8 ) volatile RECEIVER_SNAPSHOT_8_REGISTER_t RECEIVER_SNAPSHOT_8_REGISTER;
#define reg_EDGE_EVEN_7_0  RECEIVER_SNAPSHOT_8_REGISTER.BF.EDGE_EVEN_7_0
#define reg_EDGE_ODD_7_0  RECEIVER_SNAPSHOT_8_REGISTER.BF.EDGE_ODD_7_0

// 0x00ec	RECEIVER_FUNCTION_CONTROL_REGISTER_2		RX Register
typedef union {
	struct {
		uint8_t FUNC_FDLL_DYN                            : 1;	/*      0     r/w 1'h1*/
		uint8_t FUNC_FDLL                                : 1;	/*      1     r/w 1'h1*/
		uint8_t FUNC_DCC_DYN                             : 1;	/*      2     r/w 1'h1*/
		uint8_t FUNC_DCC                                 : 1;	/*      3     r/w 1'h1*/
		uint8_t FUNC_CDAC                                : 1;	/*      4     r/w 1'h1*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w 11'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w 11'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_FUNCTION_CONTROL_REGISTER_2_t;
__xdata __at( 0x4ec ) volatile RECEIVER_FUNCTION_CONTROL_REGISTER_2_t RECEIVER_FUNCTION_CONTROL_REGISTER_2;
#define reg_FUNC_FDLL_DYN  RECEIVER_FUNCTION_CONTROL_REGISTER_2.BF.FUNC_FDLL_DYN
#define reg_FUNC_FDLL  RECEIVER_FUNCTION_CONTROL_REGISTER_2.BF.FUNC_FDLL
#define reg_FUNC_DCC_DYN  RECEIVER_FUNCTION_CONTROL_REGISTER_2.BF.FUNC_DCC_DYN
#define reg_FUNC_DCC  RECEIVER_FUNCTION_CONTROL_REGISTER_2.BF.FUNC_DCC
#define reg_FUNC_CDAC  RECEIVER_FUNCTION_CONTROL_REGISTER_2.BF.FUNC_CDAC

// 0x00f0	RECEIVER_DCC_FDLL_CONTROL_REGISTER		RX Register
typedef union {
	struct {
		uint8_t DCCFDLLDAC_9_0_b0                        : 8;	/*  [9:0]     r/w 10'h000*/
		uint8_t DCCFDLLDAC_9_0_b1                        : 2;	/*  [9:0]     r/w 10'h000*/
		uint8_t RESERVED_10                              : 1;	/*     10     r/w 1'h0*/
		uint8_t DCCFDLL_SCN_BUSY                         : 1;	/*     11       r 1'h1*/
		uint8_t DCCFDLL_IDX_2_0_2_0                      : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t DCCFDLL_WR_EN                            : 1;	/*     15       w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_DCC_FDLL_CONTROL_REGISTER_t;
__xdata __at( 0x4f0 ) volatile RECEIVER_DCC_FDLL_CONTROL_REGISTER_t RECEIVER_DCC_FDLL_CONTROL_REGISTER;
#define reg_DCCFDLLDAC_9_0_b0  RECEIVER_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLLDAC_9_0_b0
#define reg_DCCFDLLDAC_9_0_b1  RECEIVER_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLLDAC_9_0_b1
#define reg_DCCFDLL_SCN_BUSY  RECEIVER_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLL_SCN_BUSY
#define reg_DCCFDLL_IDX_2_0_2_0  RECEIVER_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLL_IDX_2_0_2_0
#define reg_DCCFDLL_WR_EN  RECEIVER_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLL_WR_EN

// 0x00f4	RECEIVER_STATUS_REGISTER_2		RX Register
typedef union {
	struct {
		uint8_t ILO_FDLL_DONE                            : 1;	/*      0       r 1'h0*/
		uint8_t DLL_FDLL_DONE                            : 1;	/*      1       r 1'h0*/
		uint8_t CLK0_DCC_DONE                            : 1;	/*      2       r 1'h0*/
		uint8_t CLK45_DCC_DONE                           : 1;	/*      3       r 1'h0*/
		uint8_t CLK90_DCC_DONE                           : 1;	/*      4       r 1'h0*/
		uint8_t CLK135_DCC_DONE                          : 1;	/*      5       r 1'h0*/
		uint8_t FDLL_INIT_DONE                           : 1;	/*      6       r 1'h0*/
		uint8_t DCC_INIT_DONE                            : 1;	/*      7       r 1'h0*/
		uint8_t SVDCCFDLL_SAMP_2_0                       : 3;	/* [10:8]       r 3'h0*/
		uint8_t SVDCCFDLL_4_0                            : 5;	/*[15:11]       r 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_STATUS_REGISTER_2_t;
__xdata __at( 0x4f4 ) volatile RECEIVER_STATUS_REGISTER_2_t RECEIVER_STATUS_REGISTER_2;
#define reg_ILO_FDLL_DONE  RECEIVER_STATUS_REGISTER_2.BF.ILO_FDLL_DONE
#define reg_DLL_FDLL_DONE  RECEIVER_STATUS_REGISTER_2.BF.DLL_FDLL_DONE
#define reg_CLK0_DCC_DONE  RECEIVER_STATUS_REGISTER_2.BF.CLK0_DCC_DONE
#define reg_CLK45_DCC_DONE  RECEIVER_STATUS_REGISTER_2.BF.CLK45_DCC_DONE
#define reg_CLK90_DCC_DONE  RECEIVER_STATUS_REGISTER_2.BF.CLK90_DCC_DONE
#define reg_CLK135_DCC_DONE  RECEIVER_STATUS_REGISTER_2.BF.CLK135_DCC_DONE
#define reg_FDLL_INIT_DONE  RECEIVER_STATUS_REGISTER_2.BF.FDLL_INIT_DONE
#define reg_DCC_INIT_DONE  RECEIVER_STATUS_REGISTER_2.BF.DCC_INIT_DONE
#define reg_SVDCCFDLL_SAMP_2_0  RECEIVER_STATUS_REGISTER_2.BF.SVDCCFDLL_SAMP_2_0
#define reg_SVDCCFDLL_4_0  RECEIVER_STATUS_REGISTER_2.BF.SVDCCFDLL_4_0

// 0x00f8	RECEIVER_MACROTEST_REGISTER_2		RX Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t RESERVED_8                               : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} RECEIVER_MACROTEST_REGISTER_2_t;
__xdata __at( 0x4f8 ) volatile RECEIVER_MACROTEST_REGISTER_2_t RECEIVER_MACROTEST_REGISTER_2;

// 0x00fc	RECEIVER_MACROTEST_REGISTER_1		RX Register
typedef union {
	struct {
		uint8_t MACROTEST_HOLD                           : 1;	/*      0     r/w 1'h0*/
		uint8_t SPARE3_1_0                               : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t RXBSOUT                                  : 1;	/*      3     r/w 1'h0*/
		uint8_t SPARE2_6_0_b0                            : 4;	/* [10:4]     r/w 7'h00*/
		uint8_t SPARE2_6_0_b1                            : 3;	/* [10:4]     r/w 7'h00*/
		uint8_t DSYNCMASK                                : 1;	/*     11     r/w 1'h0*/
		uint8_t SPARE1_1_0                               : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t ATESTEN                                  : 1;	/*     14     r/w 1'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} RECEIVER_MACROTEST_REGISTER_1_t;
__xdata __at( 0x4fc ) volatile RECEIVER_MACROTEST_REGISTER_1_t RECEIVER_MACROTEST_REGISTER_1;
#define reg_MACROTEST_HOLD  RECEIVER_MACROTEST_REGISTER_1.BF.MACROTEST_HOLD
#define reg_SPARE3_1_0  RECEIVER_MACROTEST_REGISTER_1.BF.SPARE3_1_0
#define reg_RXBSOUT  RECEIVER_MACROTEST_REGISTER_1.BF.RXBSOUT
#define reg_SPARE2_6_0_b0  RECEIVER_MACROTEST_REGISTER_1.BF.SPARE2_6_0_b0
#define reg_SPARE2_6_0_b1  RECEIVER_MACROTEST_REGISTER_1.BF.SPARE2_6_0_b1
#define reg_DSYNCMASK  RECEIVER_MACROTEST_REGISTER_1.BF.DSYNCMASK
#define reg_SPARE1_1_0  RECEIVER_MACROTEST_REGISTER_1.BF.SPARE1_1_0
#define reg_ATESTEN  RECEIVER_MACROTEST_REGISTER_1.BF.ATESTEN

#endif
