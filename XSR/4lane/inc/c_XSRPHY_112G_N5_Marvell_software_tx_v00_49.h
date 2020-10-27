#ifndef C_XSRPHY_112G_N5_MARVELL_SOFTWARE_TX_V00.49_H
#define C_XSRPHY_112G_N5_MARVELL_SOFTWARE_TX_V00.49_H



// 0x0000	TRANSMIT_CONFIGURATION_REGISTER		TX Register
typedef union {
	struct {
		uint8_t NRZEN                                    : 1;	/*      0     r/w 1'h0*/
		uint8_t PLLDIV2                                  : 1;	/*      1       r 1'hX*/
		uint8_t PATHSEL                                  : 1;	/*      2     r/w 1'h0*/
		uint8_t QRATE                                    : 1;	/*      3     r/w 1'h0*/
		uint8_t PLLDIV1P5                                : 1;	/*      4       r 1'h0*/
		uint8_t RESERVED_5                               : 3;	/* [13:5]     r/w 9'h000*/
		uint8_t RESERVED_8                               : 6;	/* [13:5]     r/w 9'h000*/
		uint8_t LINKRST                                  : 1;	/*     14     r/w 1'h0*/
		uint8_t LINKEN                                   : 1;	/*     15     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_CONFIGURATION_REGISTER_t;
__xdata __at( 0x0 ) volatile TRANSMIT_CONFIGURATION_REGISTER_t TRANSMIT_CONFIGURATION_REGISTER;
#define reg_NRZEN  TRANSMIT_CONFIGURATION_REGISTER.BF.NRZEN
#define reg_PLLDIV2  TRANSMIT_CONFIGURATION_REGISTER.BF.PLLDIV2
#define reg_PATHSEL  TRANSMIT_CONFIGURATION_REGISTER.BF.PATHSEL
#define reg_QRATE  TRANSMIT_CONFIGURATION_REGISTER.BF.QRATE
#define reg_PLLDIV1P5  TRANSMIT_CONFIGURATION_REGISTER.BF.PLLDIV1P5
#define reg_LINKRST  TRANSMIT_CONFIGURATION_REGISTER.BF.LINKRST
#define reg_LINKEN  TRANSMIT_CONFIGURATION_REGISTER.BF.LINKEN

// 0x0004	TRANSMIT_TEST_CONTROL_REGISTER		TX Register
typedef union {
	struct {
		uint8_t TPSEL_3_0                                : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TPINV                                    : 1;	/*      4     r/w 1'h0*/
		uint8_t TPGMD                                    : 1;	/*      5     r/w 1'h0*/
		uint8_t PRST                                     : 1;	/*      6     r/w 1'h0*/
		uint8_t FRCERR                                   : 1;	/*      7       w 1'h0*/
		uint8_t SPISLBEN                                 : 1;	/*      8     r/w 1'h0*/
		uint8_t SLB_EN                                   : 1;	/*      9     r/w 1'h0*/
		uint8_t SPINROTFASTER                            : 1;	/*     10     r/w 1'h0*/
		uint8_t SPINROTSLOWER                            : 1;	/*     11     r/w 1'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TEST_CONTROL_REGISTER_t;
__xdata __at( 0x4 ) volatile TRANSMIT_TEST_CONTROL_REGISTER_t TRANSMIT_TEST_CONTROL_REGISTER;
#define reg_TPSEL_3_0  TRANSMIT_TEST_CONTROL_REGISTER.BF.TPSEL_3_0
#define reg_TPINV  TRANSMIT_TEST_CONTROL_REGISTER.BF.TPINV
#define reg_TPGMD  TRANSMIT_TEST_CONTROL_REGISTER.BF.TPGMD
#define reg_PRST  TRANSMIT_TEST_CONTROL_REGISTER.BF.PRST
#define reg_FRCERR  TRANSMIT_TEST_CONTROL_REGISTER.BF.FRCERR
#define reg_SPISLBEN  TRANSMIT_TEST_CONTROL_REGISTER.BF.SPISLBEN
#define reg_SLB_EN  TRANSMIT_TEST_CONTROL_REGISTER.BF.SLB_EN
#define reg_SPINROTFASTER  TRANSMIT_TEST_CONTROL_REGISTER.BF.SPINROTFASTER
#define reg_SPINROTSLOWER  TRANSMIT_TEST_CONTROL_REGISTER.BF.SPINROTSLOWER

// 0x0008	TRANSMIT_CONTROL_REGISTER		TX Register
typedef union {
	struct {
		uint8_t ALOAD                                    : 1;	/*      0       w 1'h0*/
		uint8_t ALOADUPDT                                : 1;	/*      1       w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t DRVDSBL                                  : 1;	/*      3     r/w 1'h0*/
		uint8_t RESERVED_4                               : 4;	/* [15:4]     r/w 12'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:4]     r/w 12'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_CONTROL_REGISTER_t;
__xdata __at( 0x8 ) volatile TRANSMIT_CONTROL_REGISTER_t TRANSMIT_CONTROL_REGISTER;
#define reg_ALOAD  TRANSMIT_CONTROL_REGISTER.BF.ALOAD
#define reg_ALOADUPDT  TRANSMIT_CONTROL_REGISTER.BF.ALOADUPDT
#define reg_DRVDSBL  TRANSMIT_CONTROL_REGISTER.BF.DRVDSBL

// 0x000c	TRANSMIT_MODE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t LPNRZ                                    : 1;	/*      0     r/w 1'h0*/
		uint8_t LPNOFFE                                  : 1;	/*      1     r/w 1'h0*/
		uint8_t DSBLSPI                                  : 1;	/*      2     r/w 1'h0*/
		uint8_t ROAMPWRCTRL_1_0                          : 2;	/*  [4:3]     r/w 2'h2*/
		uint8_t EQMODE                                   : 1;	/*      5     r/w 1'h1*/
		uint8_t PDWN_SW_OVRD                             : 1;	/*      6     r/w 1'h0*/
		uint8_t SWOVRDDCLKALIGN                          : 1;	/*      7     r/w 1'h0*/
		uint8_t SWOVRDCFGSEQ                             : 1;	/*      8     r/w 1'h0*/
		uint8_t SWOVRD_IDAC_COMP                         : 1;	/*      9     r/w 1'h0*/
		uint8_t SWOVRD_SPI_PKTS                          : 1;	/*     10     r/w 1'h0*/
		uint8_t SWOVRD_FFE_CNTL                          : 1;	/*     11     r/w 1'h0*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_MODE_REGISTER_t;
__xdata __at( 0xc ) volatile TRANSMIT_MODE_REGISTER_t TRANSMIT_MODE_REGISTER;
#define reg_LPNRZ  TRANSMIT_MODE_REGISTER.BF.LPNRZ
#define reg_LPNOFFE  TRANSMIT_MODE_REGISTER.BF.LPNOFFE
#define reg_DSBLSPI  TRANSMIT_MODE_REGISTER.BF.DSBLSPI
#define reg_ROAMPWRCTRL_1_0  TRANSMIT_MODE_REGISTER.BF.ROAMPWRCTRL_1_0
#define reg_EQMODE  TRANSMIT_MODE_REGISTER.BF.EQMODE
#define reg_PDWN_SW_OVRD  TRANSMIT_MODE_REGISTER.BF.PDWN_SW_OVRD
#define reg_SWOVRDDCLKALIGN  TRANSMIT_MODE_REGISTER.BF.SWOVRDDCLKALIGN
#define reg_SWOVRDCFGSEQ  TRANSMIT_MODE_REGISTER.BF.SWOVRDCFGSEQ
#define reg_SWOVRD_IDAC_COMP  TRANSMIT_MODE_REGISTER.BF.SWOVRD_IDAC_COMP
#define reg_SWOVRD_SPI_PKTS  TRANSMIT_MODE_REGISTER.BF.SWOVRD_SPI_PKTS
#define reg_SWOVRD_FFE_CNTL  TRANSMIT_MODE_REGISTER.BF.SWOVRD_FFE_CNTL

// 0x0010	TRANSMIT_OVERRIDE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t ZCALOVRD                                 : 1;	/*      1     r/w 1'h0*/
		uint8_t INVPOL                                   : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t DSBLGRAY                                 : 1;	/*      4     r/w 1'h0*/
		uint8_t MSBFLIP                                  : 1;	/*      5     r/w 1'h0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w 1'h0*/
		uint8_t FFERAILCOMSIGN                           : 1;	/*      7     r/w 1'h0*/
		uint8_t DSBL_DCC                                 : 1;	/*      8     r/w 1'h0*/
		uint8_t SDOVRDEN                                 : 1;	/*      9     r/w 1'h0*/
		uint8_t FRCDCLKALIGN                             : 1;	/*     10     r/w 1'h0*/
		uint8_t DSBLDCLKALIGN                            : 1;	/*     11     r/w 1'h0*/
		uint8_t SLCOVRDEN                                : 1;	/*     12     r/w 1'h0*/
		uint8_t VLOWOVRDEN                               : 1;	/*     13     r/w 1'h0*/
		uint8_t FRCCLKSKIP                               : 1;	/*     14     r/w 1'h0*/
		uint8_t FRCSYNCFIFO                              : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_OVERRIDE_REGISTER_t;
__xdata __at( 0x10 ) volatile TRANSMIT_OVERRIDE_REGISTER_t TRANSMIT_OVERRIDE_REGISTER;
#define reg_ZCALOVRD  TRANSMIT_OVERRIDE_REGISTER.BF.ZCALOVRD
#define reg_INVPOL  TRANSMIT_OVERRIDE_REGISTER.BF.INVPOL
#define reg_DSBLGRAY  TRANSMIT_OVERRIDE_REGISTER.BF.DSBLGRAY
#define reg_MSBFLIP  TRANSMIT_OVERRIDE_REGISTER.BF.MSBFLIP
#define reg_FFERAILCOMSIGN  TRANSMIT_OVERRIDE_REGISTER.BF.FFERAILCOMSIGN
#define reg_DSBL_DCC  TRANSMIT_OVERRIDE_REGISTER.BF.DSBL_DCC
#define reg_SDOVRDEN  TRANSMIT_OVERRIDE_REGISTER.BF.SDOVRDEN
#define reg_FRCDCLKALIGN  TRANSMIT_OVERRIDE_REGISTER.BF.FRCDCLKALIGN
#define reg_DSBLDCLKALIGN  TRANSMIT_OVERRIDE_REGISTER.BF.DSBLDCLKALIGN
#define reg_SLCOVRDEN  TRANSMIT_OVERRIDE_REGISTER.BF.SLCOVRDEN
#define reg_VLOWOVRDEN  TRANSMIT_OVERRIDE_REGISTER.BF.VLOWOVRDEN
#define reg_FRCCLKSKIP  TRANSMIT_OVERRIDE_REGISTER.BF.FRCCLKSKIP
#define reg_FRCSYNCFIFO  TRANSMIT_OVERRIDE_REGISTER.BF.FRCSYNCFIFO

// 0x0014	TRANSMIT_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t CFGDONE                                  : 1;	/*      0       r 1'h0*/
		uint8_t DCLKDONE                                 : 1;	/*      1       r 1'h0*/
		uint8_t DCC_SCAN_DONE                            : 1;	/*      2       r 1'h0*/
		uint8_t DCC_QCC_DONE                             : 1;	/*      3       r 1'h0*/
		uint8_t FFE_UPDT_DONE                            : 1;	/*      4       r 1'h0*/
		uint8_t FFE_INIT_DONE                            : 1;	/*      5       r 1'h0*/
		uint8_t SPI_TX_ACTIVE                            : 1;	/*      6       r 1'h0*/
		uint8_t RESERVED_7                               : 1;	/*  [8:7]     r/w 2'h0*/
		uint8_t RESERVED_8                               : 1;	/*  [8:7]     r/w 2'h0*/
		uint8_t DRVDSBLD                                 : 1;	/*      9       r 1'h0*/
		uint8_t DCLKSAMP                                 : 1;	/*     10       r 1'h0*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_STATUS_REGISTER_t;
__xdata __at( 0x14 ) volatile TRANSMIT_STATUS_REGISTER_t TRANSMIT_STATUS_REGISTER;
#define reg_CFGDONE  TRANSMIT_STATUS_REGISTER.BF.CFGDONE
#define reg_DCLKDONE  TRANSMIT_STATUS_REGISTER.BF.DCLKDONE
#define reg_DCC_SCAN_DONE  TRANSMIT_STATUS_REGISTER.BF.DCC_SCAN_DONE
#define reg_DCC_QCC_DONE  TRANSMIT_STATUS_REGISTER.BF.DCC_QCC_DONE
#define reg_FFE_UPDT_DONE  TRANSMIT_STATUS_REGISTER.BF.FFE_UPDT_DONE
#define reg_FFE_INIT_DONE  TRANSMIT_STATUS_REGISTER.BF.FFE_INIT_DONE
#define reg_SPI_TX_ACTIVE  TRANSMIT_STATUS_REGISTER.BF.SPI_TX_ACTIVE
#define reg_DRVDSBLD  TRANSMIT_STATUS_REGISTER.BF.DRVDSBLD
#define reg_DCLKSAMP  TRANSMIT_STATUS_REGISTER.BF.DCLKSAMP

// 0x0018	TRANSMIT_TAP_0_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t NXTT0_5_0                                : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w 10'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w 10'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_0_COEFFICIENT_REGISTER_t;
__xdata __at( 0x18 ) volatile TRANSMIT_TAP_0_COEFFICIENT_REGISTER_t TRANSMIT_TAP_0_COEFFICIENT_REGISTER;
#define reg_NXTT0_5_0  TRANSMIT_TAP_0_COEFFICIENT_REGISTER.BF.NXTT0_5_0

// 0x001c	TRANSMIT_TAP_1_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t NXTT1_8_0_b0                             : 8;	/*  [8:0]     r/w 9'h01E*/
		uint8_t NXTT1_8_0_b1                             : 1;	/*  [8:0]     r/w 9'h01E*/
		uint8_t RESERVED_9                               : 7;	/* [15:9]     r/w 7'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_1_COEFFICIENT_REGISTER_t;
__xdata __at( 0x1c ) volatile TRANSMIT_TAP_1_COEFFICIENT_REGISTER_t TRANSMIT_TAP_1_COEFFICIENT_REGISTER;
#define reg_NXTT1_8_0_b0  TRANSMIT_TAP_1_COEFFICIENT_REGISTER.BF.NXTT1_8_0_b0
#define reg_NXTT1_8_0_b1  TRANSMIT_TAP_1_COEFFICIENT_REGISTER.BF.NXTT1_8_0_b1

// 0x0020	TRANSMIT_TAP_2_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t NXTT2_6_0                                : 7;	/*  [6:0]     r/w 7'h00*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w 9'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w 9'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_2_COEFFICIENT_REGISTER_t;
__xdata __at( 0x20 ) volatile TRANSMIT_TAP_2_COEFFICIENT_REGISTER_t TRANSMIT_TAP_2_COEFFICIENT_REGISTER;
#define reg_NXTT2_6_0  TRANSMIT_TAP_2_COEFFICIENT_REGISTER.BF.NXTT2_6_0

// 0x0024	TRANSMIT_TAP_3_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t NXTT3_5_0                                : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w 10'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w 10'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_3_COEFFICIENT_REGISTER_t;
__xdata __at( 0x24 ) volatile TRANSMIT_TAP_3_COEFFICIENT_REGISTER_t TRANSMIT_TAP_3_COEFFICIENT_REGISTER;
#define reg_NXTT3_5_0  TRANSMIT_TAP_3_COEFFICIENT_REGISTER.BF.NXTT3_5_0

// 0x0028	TRANSMIT_TAP_4_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t NXTT4_4_0                                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t NXTT4ADDR_4_0                            : 5;	/* [12:8]     r/w 5'h00*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_4_COEFFICIENT_REGISTER_t;
__xdata __at( 0x28 ) volatile TRANSMIT_TAP_4_COEFFICIENT_REGISTER_t TRANSMIT_TAP_4_COEFFICIENT_REGISTER;
#define reg_NXTT4_4_0  TRANSMIT_TAP_4_COEFFICIENT_REGISTER.BF.NXTT4_4_0
#define reg_NXTT4ADDR_4_0  TRANSMIT_TAP_4_COEFFICIENT_REGISTER.BF.NXTT4ADDR_4_0

// 0x002c	TRANSMIT_TAP_5_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t NXTT5_4_0                                : 5;	/*  [4:0]     r/w 5'h00*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t NXTT5ADDR_4_0                            : 5;	/* [12:8]     r/w 5'h10*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_5_COEFFICIENT_REGISTER_t;
__xdata __at( 0x2c ) volatile TRANSMIT_TAP_5_COEFFICIENT_REGISTER_t TRANSMIT_TAP_5_COEFFICIENT_REGISTER;
#define reg_NXTT5_4_0  TRANSMIT_TAP_5_COEFFICIENT_REGISTER.BF.NXTT5_4_0
#define reg_NXTT5ADDR_4_0  TRANSMIT_TAP_5_COEFFICIENT_REGISTER.BF.NXTT5ADDR_4_0

// 0x0034	TRANSMIT_SERIAL_PACKET_INTERFACE_ADDRESS_OVERRIDE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t SPITXADDR_3_0                            : 4;	/*  [3:0]     r/w 4'hX*/
		uint8_t SPIRXADDR_3_0                            : 4;	/*  [7:4]     r/w 4'hX*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_SERIAL_PACKET_INTERFACE_ADDRESS_OVERRIDE_REGISTER_t;
__xdata __at( 0x34 ) volatile TRANSMIT_SERIAL_PACKET_INTERFACE_ADDRESS_OVERRIDE_REGISTER_t TRANSMIT_SERIAL_PACKET_INTERFACE_ADDRESS_OVERRIDE_REGISTER;
#define reg_SPITXADDR_3_0  TRANSMIT_SERIAL_PACKET_INTERFACE_ADDRESS_OVERRIDE_REGISTER.BF.SPITXADDR_3_0
#define reg_SPIRXADDR_3_0  TRANSMIT_SERIAL_PACKET_INTERFACE_ADDRESS_OVERRIDE_REGISTER.BF.SPIRXADDR_3_0

// 0x0038	TRANSMIT_TAP_POLARITY_REGISTER		TX Register
typedef union {
	struct {
		uint8_t NXTPOL_5_0                               : 6;	/*  [5:0]     r/w 6'h00*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w 10'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w 10'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_POLARITY_REGISTER_t;
__xdata __at( 0x38 ) volatile TRANSMIT_TAP_POLARITY_REGISTER_t TRANSMIT_TAP_POLARITY_REGISTER;
#define reg_NXTPOL_5_0  TRANSMIT_TAP_POLARITY_REGISTER.BF.NXTPOL_5_0

// 0x0040	TRANSMIT_PATTERN_BUFFER_BYTES_1_0_REGISTER		TX Register
typedef union {
	struct {
		uint8_t XDAT10_15_0_b0                           : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t XDAT10_15_0_b1                           : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_PATTERN_BUFFER_BYTES_1_0_REGISTER_t;
__xdata __at( 0x40 ) volatile TRANSMIT_PATTERN_BUFFER_BYTES_1_0_REGISTER_t TRANSMIT_PATTERN_BUFFER_BYTES_1_0_REGISTER;
#define reg_XDAT10_15_0_b0  TRANSMIT_PATTERN_BUFFER_BYTES_1_0_REGISTER.BF.XDAT10_15_0_b0
#define reg_XDAT10_15_0_b1  TRANSMIT_PATTERN_BUFFER_BYTES_1_0_REGISTER.BF.XDAT10_15_0_b1
#define reg_XDAT10_15_0  TRANSMIT_PATTERN_BUFFER_BYTES_1_0_REGISTER.WT.W0

// 0x0044	TRANSMIT_PATTERN_BUFFER_BYTES_3_2_REGISTER		TX Register
typedef union {
	struct {
		uint8_t XDAT32_15_0_b0                           : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t XDAT32_15_0_b1                           : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_PATTERN_BUFFER_BYTES_3_2_REGISTER_t;
__xdata __at( 0x44 ) volatile TRANSMIT_PATTERN_BUFFER_BYTES_3_2_REGISTER_t TRANSMIT_PATTERN_BUFFER_BYTES_3_2_REGISTER;
#define reg_XDAT32_15_0_b0  TRANSMIT_PATTERN_BUFFER_BYTES_3_2_REGISTER.BF.XDAT32_15_0_b0
#define reg_XDAT32_15_0_b1  TRANSMIT_PATTERN_BUFFER_BYTES_3_2_REGISTER.BF.XDAT32_15_0_b1
#define reg_XDAT32_15_0  TRANSMIT_PATTERN_BUFFER_BYTES_3_2_REGISTER.WT.W0

// 0x0048	TRANSMIT_PATTERN_BUFFER_BYTES_5_4_REGISTER		TX Register
typedef union {
	struct {
		uint8_t XDAT54_15_0_b0                           : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t XDAT54_15_0_b1                           : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_PATTERN_BUFFER_BYTES_5_4_REGISTER_t;
__xdata __at( 0x48 ) volatile TRANSMIT_PATTERN_BUFFER_BYTES_5_4_REGISTER_t TRANSMIT_PATTERN_BUFFER_BYTES_5_4_REGISTER;
#define reg_XDAT54_15_0_b0  TRANSMIT_PATTERN_BUFFER_BYTES_5_4_REGISTER.BF.XDAT54_15_0_b0
#define reg_XDAT54_15_0_b1  TRANSMIT_PATTERN_BUFFER_BYTES_5_4_REGISTER.BF.XDAT54_15_0_b1
#define reg_XDAT54_15_0  TRANSMIT_PATTERN_BUFFER_BYTES_5_4_REGISTER.WT.W0

// 0x004c	TRANSMIT_PATTERN_BUFFER_BYTES_7_6_REGISTER		TX Register
typedef union {
	struct {
		uint8_t XDAT76_15_0_b0                           : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t XDAT76_15_0_b1                           : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_PATTERN_BUFFER_BYTES_7_6_REGISTER_t;
__xdata __at( 0x4c ) volatile TRANSMIT_PATTERN_BUFFER_BYTES_7_6_REGISTER_t TRANSMIT_PATTERN_BUFFER_BYTES_7_6_REGISTER;
#define reg_XDAT76_15_0_b0  TRANSMIT_PATTERN_BUFFER_BYTES_7_6_REGISTER.BF.XDAT76_15_0_b0
#define reg_XDAT76_15_0_b1  TRANSMIT_PATTERN_BUFFER_BYTES_7_6_REGISTER.BF.XDAT76_15_0_b1
#define reg_XDAT76_15_0  TRANSMIT_PATTERN_BUFFER_BYTES_7_6_REGISTER.WT.W0

// 0x0050	TRANSMIT_PATTERN_BUFFER_BYTES_9_8_REGISTER		TX Register
typedef union {
	struct {
		uint8_t XDAT98_15_0_b0                           : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t XDAT98_15_0_b1                           : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_PATTERN_BUFFER_BYTES_9_8_REGISTER_t;
__xdata __at( 0x50 ) volatile TRANSMIT_PATTERN_BUFFER_BYTES_9_8_REGISTER_t TRANSMIT_PATTERN_BUFFER_BYTES_9_8_REGISTER;
#define reg_XDAT98_15_0_b0  TRANSMIT_PATTERN_BUFFER_BYTES_9_8_REGISTER.BF.XDAT98_15_0_b0
#define reg_XDAT98_15_0_b1  TRANSMIT_PATTERN_BUFFER_BYTES_9_8_REGISTER.BF.XDAT98_15_0_b1
#define reg_XDAT98_15_0  TRANSMIT_PATTERN_BUFFER_BYTES_9_8_REGISTER.WT.W0

// 0x0054	TRANSMIT_PATTERN_BUFFER_BYTES_11_10_REGISTER		TX Register
typedef union {
	struct {
		uint8_t XDAT1110_15_0_b0                         : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t XDAT1110_15_0_b1                         : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_PATTERN_BUFFER_BYTES_11_10_REGISTER_t;
__xdata __at( 0x54 ) volatile TRANSMIT_PATTERN_BUFFER_BYTES_11_10_REGISTER_t TRANSMIT_PATTERN_BUFFER_BYTES_11_10_REGISTER;
#define reg_XDAT1110_15_0_b0  TRANSMIT_PATTERN_BUFFER_BYTES_11_10_REGISTER.BF.XDAT1110_15_0_b0
#define reg_XDAT1110_15_0_b1  TRANSMIT_PATTERN_BUFFER_BYTES_11_10_REGISTER.BF.XDAT1110_15_0_b1
#define reg_XDAT1110_15_0  TRANSMIT_PATTERN_BUFFER_BYTES_11_10_REGISTER.WT.W0

// 0x0058	TRANSMIT_PATTERN_BUFFER_BYTES_13_12_REGISTER		TX Register
typedef union {
	struct {
		uint8_t XDAT1312_15_0_b0                         : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t XDAT1312_15_0_b1                         : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_PATTERN_BUFFER_BYTES_13_12_REGISTER_t;
__xdata __at( 0x58 ) volatile TRANSMIT_PATTERN_BUFFER_BYTES_13_12_REGISTER_t TRANSMIT_PATTERN_BUFFER_BYTES_13_12_REGISTER;
#define reg_XDAT1312_15_0_b0  TRANSMIT_PATTERN_BUFFER_BYTES_13_12_REGISTER.BF.XDAT1312_15_0_b0
#define reg_XDAT1312_15_0_b1  TRANSMIT_PATTERN_BUFFER_BYTES_13_12_REGISTER.BF.XDAT1312_15_0_b1
#define reg_XDAT1312_15_0  TRANSMIT_PATTERN_BUFFER_BYTES_13_12_REGISTER.WT.W0

// 0x005c	TRANSMIT_PATTERN_BUFFER_BYTES_15_14_REGISTER		TX Register
typedef union {
	struct {
		uint8_t XDAT1514_15_0_b0                         : 8;	/* [15:0]     r/w 16'h0000*/
		uint8_t XDAT1514_15_0_b1                         : 8;	/* [15:0]     r/w 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_PATTERN_BUFFER_BYTES_15_14_REGISTER_t;
__xdata __at( 0x5c ) volatile TRANSMIT_PATTERN_BUFFER_BYTES_15_14_REGISTER_t TRANSMIT_PATTERN_BUFFER_BYTES_15_14_REGISTER;
#define reg_XDAT1514_15_0_b0  TRANSMIT_PATTERN_BUFFER_BYTES_15_14_REGISTER.BF.XDAT1514_15_0_b0
#define reg_XDAT1514_15_0_b1  TRANSMIT_PATTERN_BUFFER_BYTES_15_14_REGISTER.BF.XDAT1514_15_0_b1
#define reg_XDAT1514_15_0  TRANSMIT_PATTERN_BUFFER_BYTES_15_14_REGISTER.WT.W0

// 0x0068	TRANSMIT_DCLK_ALIGNMENT_OFFSET_REGISTER		TX Register
typedef union {
	struct {
		uint8_t ALIGN_OFFSET_2_0                         : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 5;	/* [15:3]     r/w 13'h0000*/
		uint8_t RESERVED_8                               : 8;	/* [15:3]     r/w 13'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_DCLK_ALIGNMENT_OFFSET_REGISTER_t;
__xdata __at( 0x68 ) volatile TRANSMIT_DCLK_ALIGNMENT_OFFSET_REGISTER_t TRANSMIT_DCLK_ALIGNMENT_OFFSET_REGISTER;
#define reg_ALIGN_OFFSET_2_0  TRANSMIT_DCLK_ALIGNMENT_OFFSET_REGISTER.BF.ALIGN_OFFSET_2_0

// 0x0080	TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER		TX Register
typedef union {
	struct {
		uint8_t RESETROT                                 : 1;	/*      0     r/w 1'h0*/
		uint8_t ELDIRSWAP                                : 1;	/*      1     r/w 1'h0*/
		uint8_t ROTSNAPSHOT                              : 1;	/*      2     r/w 1'h0*/
		uint8_t PHSLOCK                                  : 1;	/*      3     r/w 1'h0*/
		uint8_t PHSUP                                    : 1;	/*      4     r/w 1'h0*/
		uint8_t PHSDN                                    : 1;	/*      5     r/w 1'h0*/
		uint8_t KPGAIN_5_0_b0                            : 2;	/* [11:6]     r/w 6'h18*/
		uint8_t KPGAIN_5_0_b1                            : 4;	/* [11:6]     r/w 6'h18*/
		uint8_t CDRTRAININGDONE                          : 1;	/*     12       r 1'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER_t;
__xdata __at( 0x80 ) volatile TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER_t TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER;
#define reg_RESETROT  TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER.BF.RESETROT
#define reg_ELDIRSWAP  TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER.BF.ELDIRSWAP
#define reg_ROTSNAPSHOT  TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER.BF.ROTSNAPSHOT
#define reg_PHSLOCK  TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER.BF.PHSLOCK
#define reg_PHSUP  TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER.BF.PHSUP
#define reg_PHSDN  TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER.BF.PHSDN
#define reg_KPGAIN_5_0_b0  TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER.BF.KPGAIN_5_0_b0
#define reg_KPGAIN_5_0_b1  TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER.BF.KPGAIN_5_0_b1
#define reg_CDRTRAININGDONE  TRANSMIT_PHASE_ROTATOR_CONTROL_REGISTER.BF.CDRTRAININGDONE

// 0x0084	TRANSMIT_PHASE_ROTATOR_POSITION_REGISTER		TX Register
typedef union {
	struct {
		uint8_t ROTDPOS_7_0                              : 8;	/*  [7:0]       r 8'h00*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_PHASE_ROTATOR_POSITION_REGISTER_t;
__xdata __at( 0x84 ) volatile TRANSMIT_PHASE_ROTATOR_POSITION_REGISTER_t TRANSMIT_PHASE_ROTATOR_POSITION_REGISTER;
#define reg_ROTDPOS_7_0  TRANSMIT_PHASE_ROTATOR_POSITION_REGISTER.BF.ROTDPOS_7_0

// 0x0088	TRANSMIT_CDR_FLYWHEEL_CONTROL_REGISTER		TX Register
typedef union {
	struct {
		uint8_t ROTFWVAL_6_0                             : 7;	/*  [6:0]       r 7'hXX*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w 1'h0*/
		uint8_t KIGAIN_3_0                               : 4;	/* [11:8]     r/w 4'h8*/
		uint8_t RESERVED_12                              : 3;	/*[14:12]     r/w 3'h0*/
		uint8_t RESETFW                                  : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_CDR_FLYWHEEL_CONTROL_REGISTER_t;
__xdata __at( 0x88 ) volatile TRANSMIT_CDR_FLYWHEEL_CONTROL_REGISTER_t TRANSMIT_CDR_FLYWHEEL_CONTROL_REGISTER;
#define reg_ROTFWVAL_6_0  TRANSMIT_CDR_FLYWHEEL_CONTROL_REGISTER.BF.ROTFWVAL_6_0
#define reg_KIGAIN_3_0  TRANSMIT_CDR_FLYWHEEL_CONTROL_REGISTER.BF.KIGAIN_3_0
#define reg_RESETFW  TRANSMIT_CDR_FLYWHEEL_CONTROL_REGISTER.BF.RESETFW

// 0x008c	TRANSMIT_DCC_FDLL_FUNCTION_REGISTER		TX Register
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
} TRANSMIT_DCC_FDLL_FUNCTION_REGISTER_t;
__xdata __at( 0x8c ) volatile TRANSMIT_DCC_FDLL_FUNCTION_REGISTER_t TRANSMIT_DCC_FDLL_FUNCTION_REGISTER;
#define reg_FUNC_FDLL_DYN  TRANSMIT_DCC_FDLL_FUNCTION_REGISTER.BF.FUNC_FDLL_DYN
#define reg_FUNC_FDLL  TRANSMIT_DCC_FDLL_FUNCTION_REGISTER.BF.FUNC_FDLL
#define reg_FUNC_DCC_DYN  TRANSMIT_DCC_FDLL_FUNCTION_REGISTER.BF.FUNC_DCC_DYN
#define reg_FUNC_DCC  TRANSMIT_DCC_FDLL_FUNCTION_REGISTER.BF.FUNC_DCC
#define reg_FUNC_CDAC  TRANSMIT_DCC_FDLL_FUNCTION_REGISTER.BF.FUNC_CDAC

// 0x0090	TRANSMIT_DCC_FDLL_CONTROL_REGISTER		TX Register
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
} TRANSMIT_DCC_FDLL_CONTROL_REGISTER_t;
__xdata __at( 0x90 ) volatile TRANSMIT_DCC_FDLL_CONTROL_REGISTER_t TRANSMIT_DCC_FDLL_CONTROL_REGISTER;
#define reg_DCCFDLLDAC_9_0_b0  TRANSMIT_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLLDAC_9_0_b0
#define reg_DCCFDLLDAC_9_0_b1  TRANSMIT_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLLDAC_9_0_b1
#define reg_DCCFDLL_SCN_BUSY  TRANSMIT_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLL_SCN_BUSY
#define reg_DCCFDLL_IDX_2_0_2_0  TRANSMIT_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLL_IDX_2_0_2_0
#define reg_DCCFDLL_WR_EN  TRANSMIT_DCC_FDLL_CONTROL_REGISTER.BF.DCCFDLL_WR_EN

// 0x0094	TRANSMIT_DCC_FDLL_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t ILO_FDLL_DONE                            : 1;	/*      0       r 1'h0*/
		uint8_t DLL_FDLL_DONE                            : 1;	/*      1       r 1'h0*/
		uint8_t CLK0_DCC_DONE                            : 1;	/*      2       r 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t CLK90_DCC_DONE                           : 1;	/*      4       r 1'h0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w 1'h0*/
		uint8_t FDLL_INIT_DONE                           : 1;	/*      6       r 1'h0*/
		uint8_t DCC_INIT_DONE                            : 1;	/*      7       r 1'h0*/
		uint8_t SVDCCFDLL_SAMP_2_0                       : 3;	/* [10:8]       r 3'h0*/
		uint8_t SVDCCFDLL_4_0                            : 5;	/*[15:11]       r 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_DCC_FDLL_STATUS_REGISTER_t;
__xdata __at( 0x94 ) volatile TRANSMIT_DCC_FDLL_STATUS_REGISTER_t TRANSMIT_DCC_FDLL_STATUS_REGISTER;
#define reg_ILO_FDLL_DONE  TRANSMIT_DCC_FDLL_STATUS_REGISTER.BF.ILO_FDLL_DONE
#define reg_DLL_FDLL_DONE  TRANSMIT_DCC_FDLL_STATUS_REGISTER.BF.DLL_FDLL_DONE
#define reg_CLK0_DCC_DONE  TRANSMIT_DCC_FDLL_STATUS_REGISTER.BF.CLK0_DCC_DONE
#define reg_CLK90_DCC_DONE  TRANSMIT_DCC_FDLL_STATUS_REGISTER.BF.CLK90_DCC_DONE
#define reg_FDLL_INIT_DONE  TRANSMIT_DCC_FDLL_STATUS_REGISTER.BF.FDLL_INIT_DONE
#define reg_DCC_INIT_DONE  TRANSMIT_DCC_FDLL_STATUS_REGISTER.BF.DCC_INIT_DONE
#define reg_SVDCCFDLL_SAMP_2_0  TRANSMIT_DCC_FDLL_STATUS_REGISTER.BF.SVDCCFDLL_SAMP_2_0
#define reg_SVDCCFDLL_4_0  TRANSMIT_DCC_FDLL_STATUS_REGISTER.BF.SVDCCFDLL_4_0

// 0x0098	TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER		TX Register
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
} TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER_t;
__xdata __at( 0x98 ) volatile TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER_t TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER;
#define reg_MTSCANADDR_DF_3_0  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANADDR_DF_3_0
#define reg_MTSCANDIR_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANDIR_DF
#define reg_MTSCANENABLE_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANENABLE_DF
#define reg_MTSCANRUN_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANRUN_DF
#define reg_MTSCANRST_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANRST_DF
#define reg_MTSCANFAIL_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANFAIL_DF
#define reg_MTSCANPASS_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTSCANPASS_DF
#define reg_MTANLGRUN_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTANLGRUN_DF
#define reg_MTANLGRST_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTANLGRST_DF
#define reg_MTANLGFAIL_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTANLGFAIL_DF
#define reg_MTANLGPASS_DF  TRANSMIT_DCCFDLL_MACROTEST_CONTROL_REGISTER.BF.MTANLGPASS_DF

// 0x009c	TRANSMIT_CDAC1_HUNT_LIMIT_CONTROL_REGISTER		TX Register
typedef union {
	struct {
		uint8_t CDAC1LIMHR_7_0                           : 8;	/*  [7:0]     r/w 8'h01*/
		uint8_t CDAC1LIMFR_7_0                           : 8;	/* [15:8]     r/w 8'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_CDAC1_HUNT_LIMIT_CONTROL_REGISTER_t;
__xdata __at( 0x9c ) volatile TRANSMIT_CDAC1_HUNT_LIMIT_CONTROL_REGISTER_t TRANSMIT_CDAC1_HUNT_LIMIT_CONTROL_REGISTER;
#define reg_CDAC1LIMHR_7_0  TRANSMIT_CDAC1_HUNT_LIMIT_CONTROL_REGISTER.BF.CDAC1LIMHR_7_0
#define reg_CDAC1LIMFR_7_0  TRANSMIT_CDAC1_HUNT_LIMIT_CONTROL_REGISTER.BF.CDAC1LIMFR_7_0

// 0x00a0	TRANSMIT_CDAC2_HUNT_LIMIT_CONTROL_REGISTER		TX Register
typedef union {
	struct {
		uint8_t CDAC2LIMHR_7_0                           : 8;	/*  [7:0]     r/w 8'h01*/
		uint8_t CDAC2LIMFR_7_0                           : 8;	/* [15:8]     r/w 8'h01*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_CDAC2_HUNT_LIMIT_CONTROL_REGISTER_t;
__xdata __at( 0xa0 ) volatile TRANSMIT_CDAC2_HUNT_LIMIT_CONTROL_REGISTER_t TRANSMIT_CDAC2_HUNT_LIMIT_CONTROL_REGISTER;
#define reg_CDAC2LIMHR_7_0  TRANSMIT_CDAC2_HUNT_LIMIT_CONTROL_REGISTER.BF.CDAC2LIMHR_7_0
#define reg_CDAC2LIMFR_7_0  TRANSMIT_CDAC2_HUNT_LIMIT_CONTROL_REGISTER.BF.CDAC2LIMFR_7_0

// 0x00a4	TRANSMIT_CDAC1_AND_CDAC2_CONTROL_REGISTER		TX Register
typedef union {
	struct {
		uint8_t CDAC1DLL_2_0                             : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t CDAC2DLL_2_0                             : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w 10'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w 10'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_CDAC1_AND_CDAC2_CONTROL_REGISTER_t;
__xdata __at( 0xa4 ) volatile TRANSMIT_CDAC1_AND_CDAC2_CONTROL_REGISTER_t TRANSMIT_CDAC1_AND_CDAC2_CONTROL_REGISTER;
#define reg_CDAC1DLL_2_0  TRANSMIT_CDAC1_AND_CDAC2_CONTROL_REGISTER.BF.CDAC1DLL_2_0
#define reg_CDAC2DLL_2_0  TRANSMIT_CDAC1_AND_CDAC2_CONTROL_REGISTER.BF.CDAC2DLL_2_0

// 0x00a8	TRANSMIT_DAC_THRESHOLD_REGISTER		TX Register
typedef union {
	struct {
		uint8_t MTDLLTHRESH_6_0                          : 7;	/*  [6:0]     r/w 7'h7F*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w 9'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w 9'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_DAC_THRESHOLD_REGISTER_t;
__xdata __at( 0xa8 ) volatile TRANSMIT_DAC_THRESHOLD_REGISTER_t TRANSMIT_DAC_THRESHOLD_REGISTER;
#define reg_MTDLLTHRESH_6_0  TRANSMIT_DAC_THRESHOLD_REGISTER.BF.MTDLLTHRESH_6_0

// 0x00c0	TRANSMIT_ANALOG_OVERRIDE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t FFERAILAMP_2_0                           : 3;	/*  [2:0]     r/w 3'h6*/
		uint8_t FFEVLOWAMP_3_0                           : 4;	/*  [6:3]     r/w 4'h1*/
		uint8_t DRVAMPTUNE_1_0_b0                        : 1;	/*  [8:7]     r/w 2'h2*/
		uint8_t DRVAMPTUNE_1_0_b1                        : 1;	/*  [8:7]     r/w 2'h2*/
		uint8_t SLCENT_2_0                               : 3;	/* [11:9]     r/w 3'h7*/
		uint8_t CMTRIM_1_0                               : 2;	/*[13:12]     r/w 2'h1*/
		uint8_t DSBLPROGOPAMP                            : 1;	/*     14     r/w 1'h0*/
		uint8_t RESERVED_15                              : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_ANALOG_OVERRIDE_REGISTER_t;
__xdata __at( 0xc0 ) volatile TRANSMIT_ANALOG_OVERRIDE_REGISTER_t TRANSMIT_ANALOG_OVERRIDE_REGISTER;
#define reg_FFERAILAMP_2_0  TRANSMIT_ANALOG_OVERRIDE_REGISTER.BF.FFERAILAMP_2_0
#define reg_FFEVLOWAMP_3_0  TRANSMIT_ANALOG_OVERRIDE_REGISTER.BF.FFEVLOWAMP_3_0
#define reg_DRVAMPTUNE_1_0_b0  TRANSMIT_ANALOG_OVERRIDE_REGISTER.BF.DRVAMPTUNE_1_0_b0
#define reg_DRVAMPTUNE_1_0_b1  TRANSMIT_ANALOG_OVERRIDE_REGISTER.BF.DRVAMPTUNE_1_0_b1
#define reg_SLCENT_2_0  TRANSMIT_ANALOG_OVERRIDE_REGISTER.BF.SLCENT_2_0
#define reg_CMTRIM_1_0  TRANSMIT_ANALOG_OVERRIDE_REGISTER.BF.CMTRIM_1_0
#define reg_DSBLPROGOPAMP  TRANSMIT_ANALOG_OVERRIDE_REGISTER.BF.DSBLPROGOPAMP

// 0x00c4	TRANSMIT_IMPEDANCE_CALIBRATION_OVERRIDE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t CALRES_4_0                               : 5;	/*  [4:0]     r/w 5'h1E*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w 11'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w 11'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_IMPEDANCE_CALIBRATION_OVERRIDE_REGISTER_t;
__xdata __at( 0xc4 ) volatile TRANSMIT_IMPEDANCE_CALIBRATION_OVERRIDE_REGISTER_t TRANSMIT_IMPEDANCE_CALIBRATION_OVERRIDE_REGISTER;
#define reg_CALRES_4_0  TRANSMIT_IMPEDANCE_CALIBRATION_OVERRIDE_REGISTER.BF.CALRES_4_0

// 0x00c8	TRANSMIT_ANALOG_TEST_REGISTER		TX Register
typedef union {
	struct {
		uint8_t TXSPARE_3_0                              : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t RESERVED_4                               : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t SLBBIASCTRL_1_0                          : 2;	/*  [7:6]     r/w 2'h2*/
		uint8_t TSTIDACTUNE_1_0                          : 2;	/*  [9:8]     r/w 2'h2*/
		uint8_t DSBLMAINENPROG                           : 1;	/*     10     r/w 1'h0*/
		uint8_t DSBLMAINENMAX                            : 1;	/*     11     r/w 1'h0*/
		uint8_t DSBLMAINCOMPEN                           : 1;	/*     12     r/w 1'h0*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_ANALOG_TEST_REGISTER_t;
__xdata __at( 0xc8 ) volatile TRANSMIT_ANALOG_TEST_REGISTER_t TRANSMIT_ANALOG_TEST_REGISTER;
#define reg_TXSPARE_3_0  TRANSMIT_ANALOG_TEST_REGISTER.BF.TXSPARE_3_0
#define reg_SLBBIASCTRL_1_0  TRANSMIT_ANALOG_TEST_REGISTER.BF.SLBBIASCTRL_1_0
#define reg_TSTIDACTUNE_1_0  TRANSMIT_ANALOG_TEST_REGISTER.BF.TSTIDACTUNE_1_0
#define reg_DSBLMAINENPROG  TRANSMIT_ANALOG_TEST_REGISTER.BF.DSBLMAINENPROG
#define reg_DSBLMAINENMAX  TRANSMIT_ANALOG_TEST_REGISTER.BF.DSBLMAINENMAX
#define reg_DSBLMAINCOMPEN  TRANSMIT_ANALOG_TEST_REGISTER.BF.DSBLMAINCOMPEN

// 0x00cc	TRANSMIT_POWER_SEQUENCING_OVERRIDE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t PDWN_11_0_b0                             : 8;	/* [11:0]     r/w 12'hFFF*/
		uint8_t PDWN_11_0_b1                             : 4;	/* [11:0]     r/w 12'hFFF*/
		uint8_t RESERVED_12                              : 1;	/*     12     r/w 1'h0*/
		uint8_t PDWN_CMD                                 : 1;	/*     13       r 1'h1*/
		uint8_t PDWN_STATUS_1_0                          : 2;	/*[15:14]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_POWER_SEQUENCING_OVERRIDE_REGISTER_t;
__xdata __at( 0xcc ) volatile TRANSMIT_POWER_SEQUENCING_OVERRIDE_REGISTER_t TRANSMIT_POWER_SEQUENCING_OVERRIDE_REGISTER;
#define reg_PDWN_11_0_b0  TRANSMIT_POWER_SEQUENCING_OVERRIDE_REGISTER.BF.PDWN_11_0_b0
#define reg_PDWN_11_0_b1  TRANSMIT_POWER_SEQUENCING_OVERRIDE_REGISTER.BF.PDWN_11_0_b1
#define reg_PDWN_CMD  TRANSMIT_POWER_SEQUENCING_OVERRIDE_REGISTER.BF.PDWN_CMD
#define reg_PDWN_STATUS_1_0  TRANSMIT_POWER_SEQUENCING_OVERRIDE_REGISTER.BF.PDWN_STATUS_1_0

// 0x00d0	TRANSMIT_SOFTWARE_OVERRIDE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t SWDCLKALIGN_DONE                         : 1;	/*      0     r/w 1'h0*/
		uint8_t SWDCLKALIGN_PEND                         : 1;	/*      1     r/w 1'h0*/
		uint8_t SW_OVRD_SPI_ACT                          : 1;	/*      2     r/w 1'h0*/
		uint8_t SW_IDAC_RESULT                           : 1;	/*      3     r/w 1'h0*/
		uint8_t SW_IDAC_DONE                             : 1;	/*      4     r/w 1'h0*/
		uint8_t SW_IDAC_START                            : 1;	/*      5     r/w 1'h0*/
		uint8_t SW_SPI_RESP_GO                           : 1;	/*      6     r/w 1'h0*/
		uint8_t RESERVED_7                               : 1;	/* [15:7]     r/w 9'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:7]     r/w 9'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_SOFTWARE_OVERRIDE_REGISTER_t;
__xdata __at( 0xd0 ) volatile TRANSMIT_SOFTWARE_OVERRIDE_REGISTER_t TRANSMIT_SOFTWARE_OVERRIDE_REGISTER;
#define reg_SWDCLKALIGN_DONE  TRANSMIT_SOFTWARE_OVERRIDE_REGISTER.BF.SWDCLKALIGN_DONE
#define reg_SWDCLKALIGN_PEND  TRANSMIT_SOFTWARE_OVERRIDE_REGISTER.BF.SWDCLKALIGN_PEND
#define reg_SW_OVRD_SPI_ACT  TRANSMIT_SOFTWARE_OVERRIDE_REGISTER.BF.SW_OVRD_SPI_ACT
#define reg_SW_IDAC_RESULT  TRANSMIT_SOFTWARE_OVERRIDE_REGISTER.BF.SW_IDAC_RESULT
#define reg_SW_IDAC_DONE  TRANSMIT_SOFTWARE_OVERRIDE_REGISTER.BF.SW_IDAC_DONE
#define reg_SW_IDAC_START  TRANSMIT_SOFTWARE_OVERRIDE_REGISTER.BF.SW_IDAC_START
#define reg_SW_SPI_RESP_GO  TRANSMIT_SOFTWARE_OVERRIDE_REGISTER.BF.SW_SPI_RESP_GO

// 0x00d4	TRANSMIT_IDAC_COMPARE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t IDAC_COMP_SW_REQ                         : 1;	/*      0       r 1'h0*/
		uint8_t IDAC_COMP_SMDONE                         : 1;	/*      1       r 1'h0*/
		uint8_t IDACRAIL_CMPSMP                          : 1;	/*      2       r 1'h0*/
		uint8_t IDACCOMP_VALCTR_6_0_b0                   : 5;	/*  [9:3]       r 7'h00*/
		uint8_t IDACCOMP_VALCTR_6_0_b1                   : 2;	/*  [9:3]       r 7'h00*/
		uint8_t RESERVED_10                              : 6;	/*[15:10]     r/w 6'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_IDAC_COMPARE_REGISTER_t;
__xdata __at( 0xd4 ) volatile TRANSMIT_IDAC_COMPARE_REGISTER_t TRANSMIT_IDAC_COMPARE_REGISTER;
#define reg_IDAC_COMP_SW_REQ  TRANSMIT_IDAC_COMPARE_REGISTER.BF.IDAC_COMP_SW_REQ
#define reg_IDAC_COMP_SMDONE  TRANSMIT_IDAC_COMPARE_REGISTER.BF.IDAC_COMP_SMDONE
#define reg_IDACRAIL_CMPSMP  TRANSMIT_IDAC_COMPARE_REGISTER.BF.IDACRAIL_CMPSMP
#define reg_IDACCOMP_VALCTR_6_0_b0  TRANSMIT_IDAC_COMPARE_REGISTER.BF.IDACCOMP_VALCTR_6_0_b0
#define reg_IDACCOMP_VALCTR_6_0_b1  TRANSMIT_IDAC_COMPARE_REGISTER.BF.IDACCOMP_VALCTR_6_0_b1

// 0x00d8	TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t SWPWR_RESP_3_0                           : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t SWC5_RESP_1_0                            : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t SWC4_RESP_1_0                            : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t SWC3_RESP_1_0                            : 2;	/*  [9:8]     r/w 2'h0*/
		uint8_t SWC2_RESP_1_0                            : 2;	/*[11:10]     r/w 2'h0*/
		uint8_t SWC1_RESP_1_0                            : 2;	/*[13:12]     r/w 2'h0*/
		uint8_t SWC0_RESP_1_0                            : 2;	/*[15:14]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER_t;
__xdata __at( 0xd8 ) volatile TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER_t TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER;
#define reg_SWPWR_RESP_3_0  TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER.BF.SWPWR_RESP_3_0
#define reg_SWC5_RESP_1_0  TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER.BF.SWC5_RESP_1_0
#define reg_SWC4_RESP_1_0  TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER.BF.SWC4_RESP_1_0
#define reg_SWC3_RESP_1_0  TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER.BF.SWC3_RESP_1_0
#define reg_SWC2_RESP_1_0  TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER.BF.SWC2_RESP_1_0
#define reg_SWC1_RESP_1_0  TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER.BF.SWC1_RESP_1_0
#define reg_SWC0_RESP_1_0  TRANSMIT_SW_OVERRIDE_FFE_TRAINING_RESPONSE_REGISTER.BF.SWC0_RESP_1_0

// 0x0100	TRANSMIT_TAP_0_APPLIED_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t C0MAG_5_0                                : 6;	/*  [5:0]       r 6'h00*/
		uint8_t RESERVED_6                               : 2;	/* [14:6]     r/w 9'h000*/
		uint8_t RESERVED_8                               : 7;	/* [14:6]     r/w 9'h000*/
		uint8_t C0SIGN                                   : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_0_APPLIED_COEFFICIENT_REGISTER_t;
__xdata __at( 0x100 ) volatile TRANSMIT_TAP_0_APPLIED_COEFFICIENT_REGISTER_t TRANSMIT_TAP_0_APPLIED_COEFFICIENT_REGISTER;
#define reg_C0MAG_5_0  TRANSMIT_TAP_0_APPLIED_COEFFICIENT_REGISTER.BF.C0MAG_5_0
#define reg_C0SIGN  TRANSMIT_TAP_0_APPLIED_COEFFICIENT_REGISTER.BF.C0SIGN

// 0x0104	TRANSMIT_TAP_1_APPLIED_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t C1MAG_8_0_b0                             : 8;	/*  [8:0]       r 9'h000*/
		uint8_t C1MAG_8_0_b1                             : 1;	/*  [8:0]       r 9'h000*/
		uint8_t RESERVED_9                               : 6;	/* [14:9]     r/w 6'h00*/
		uint8_t C1SIGN                                   : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_1_APPLIED_COEFFICIENT_REGISTER_t;
__xdata __at( 0x104 ) volatile TRANSMIT_TAP_1_APPLIED_COEFFICIENT_REGISTER_t TRANSMIT_TAP_1_APPLIED_COEFFICIENT_REGISTER;
#define reg_C1MAG_8_0_b0  TRANSMIT_TAP_1_APPLIED_COEFFICIENT_REGISTER.BF.C1MAG_8_0_b0
#define reg_C1MAG_8_0_b1  TRANSMIT_TAP_1_APPLIED_COEFFICIENT_REGISTER.BF.C1MAG_8_0_b1
#define reg_C1SIGN  TRANSMIT_TAP_1_APPLIED_COEFFICIENT_REGISTER.BF.C1SIGN

// 0x0108	TRANSMIT_TAP_2_APPLIED_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t C2MAG_6_0                                : 7;	/*  [6:0]       r 7'h00*/
		uint8_t RESERVED_7                               : 1;	/* [14:7]     r/w 8'h00*/
		uint8_t RESERVED_8                               : 7;	/* [14:7]     r/w 8'h00*/
		uint8_t C2SIGN                                   : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_2_APPLIED_COEFFICIENT_REGISTER_t;
__xdata __at( 0x108 ) volatile TRANSMIT_TAP_2_APPLIED_COEFFICIENT_REGISTER_t TRANSMIT_TAP_2_APPLIED_COEFFICIENT_REGISTER;
#define reg_C2MAG_6_0  TRANSMIT_TAP_2_APPLIED_COEFFICIENT_REGISTER.BF.C2MAG_6_0
#define reg_C2SIGN  TRANSMIT_TAP_2_APPLIED_COEFFICIENT_REGISTER.BF.C2SIGN

// 0x010c	TRANSMIT_TAP_3_APPLIED_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t C3MAG_5_0                                : 6;	/*  [5:0]       r 6'h00*/
		uint8_t RESERVED_6                               : 2;	/* [14:6]     r/w 9'h000*/
		uint8_t RESERVED_8                               : 7;	/* [14:6]     r/w 9'h000*/
		uint8_t C3SIGN                                   : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_3_APPLIED_COEFFICIENT_REGISTER_t;
__xdata __at( 0x10c ) volatile TRANSMIT_TAP_3_APPLIED_COEFFICIENT_REGISTER_t TRANSMIT_TAP_3_APPLIED_COEFFICIENT_REGISTER;
#define reg_C3MAG_5_0  TRANSMIT_TAP_3_APPLIED_COEFFICIENT_REGISTER.BF.C3MAG_5_0
#define reg_C3SIGN  TRANSMIT_TAP_3_APPLIED_COEFFICIENT_REGISTER.BF.C3SIGN

// 0x0110	TRANSMIT_TAP_4_APPLIED_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t C4MAG_4_0                                : 5;	/*  [4:0]       r 5'h00*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t C4ADDR_4_0                               : 5;	/* [12:8]       r 5'h00*/
		uint8_t RESERVED_13                              : 2;	/*[14:13]     r/w 2'h0*/
		uint8_t C4SIGN                                   : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_4_APPLIED_COEFFICIENT_REGISTER_t;
__xdata __at( 0x110 ) volatile TRANSMIT_TAP_4_APPLIED_COEFFICIENT_REGISTER_t TRANSMIT_TAP_4_APPLIED_COEFFICIENT_REGISTER;
#define reg_C4MAG_4_0  TRANSMIT_TAP_4_APPLIED_COEFFICIENT_REGISTER.BF.C4MAG_4_0
#define reg_C4ADDR_4_0  TRANSMIT_TAP_4_APPLIED_COEFFICIENT_REGISTER.BF.C4ADDR_4_0
#define reg_C4SIGN  TRANSMIT_TAP_4_APPLIED_COEFFICIENT_REGISTER.BF.C4SIGN

// 0x0114	TRANSMIT_TAP_5_APPLIED_COEFFICIENT_REGISTER		TX Register
typedef union {
	struct {
		uint8_t C5MAG_4_0                                : 5;	/*  [4:0]       r 5'h00*/
		uint8_t RESERVED_5                               : 3;	/*  [7:5]     r/w 3'h0*/
		uint8_t C5ADDR_4_0                               : 5;	/* [12:8]       r 5'h10*/
		uint8_t RESERVED_13                              : 2;	/*[14:13]     r/w 2'h0*/
		uint8_t C5SIGN                                   : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_TAP_5_APPLIED_COEFFICIENT_REGISTER_t;
__xdata __at( 0x114 ) volatile TRANSMIT_TAP_5_APPLIED_COEFFICIENT_REGISTER_t TRANSMIT_TAP_5_APPLIED_COEFFICIENT_REGISTER;
#define reg_C5MAG_4_0  TRANSMIT_TAP_5_APPLIED_COEFFICIENT_REGISTER.BF.C5MAG_4_0
#define reg_C5ADDR_4_0  TRANSMIT_TAP_5_APPLIED_COEFFICIENT_REGISTER.BF.C5ADDR_4_0
#define reg_C5SIGN  TRANSMIT_TAP_5_APPLIED_COEFFICIENT_REGISTER.BF.C5SIGN

// 0x0120	TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER		TX Register
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t PWRBELOWTGT16                            : 1;	/*      1       r 1'h0*/
		uint8_t PWRBELOWTGT                              : 1;	/*      2       r 1'h0*/
		uint8_t PWROVRTGT                                : 1;	/*      3       r 1'h0*/
		uint8_t C5RESP_1_0                               : 2;	/*  [5:4]       r 2'h0*/
		uint8_t C4RESP_1_0                               : 2;	/*  [7:6]       r 2'h0*/
		uint8_t C3RESP_1_0                               : 2;	/*  [9:8]       r 2'h0*/
		uint8_t C2RESP_1_0                               : 2;	/*[11:10]       r 2'h0*/
		uint8_t C1RESP_1_0                               : 2;	/*[13:12]       r 2'h0*/
		uint8_t C0RESP_1_0                               : 2;	/*[15:14]       r 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER_t;
__xdata __at( 0x120 ) volatile TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER_t TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER;
#define reg_PWRBELOWTGT16  TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER.BF.PWRBELOWTGT16
#define reg_PWRBELOWTGT  TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER.BF.PWRBELOWTGT
#define reg_PWROVRTGT  TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER.BF.PWROVRTGT
#define reg_C5RESP_1_0  TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER.BF.C5RESP_1_0
#define reg_C4RESP_1_0  TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER.BF.C4RESP_1_0
#define reg_C3RESP_1_0  TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER.BF.C3RESP_1_0
#define reg_C2RESP_1_0  TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER.BF.C2RESP_1_0
#define reg_C1RESP_1_0  TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER.BF.C1RESP_1_0
#define reg_C0RESP_1_0  TRANSMIT_FFE_TRAINING_RESPONSE_REGISTER.BF.C0RESP_1_0

// 0x0124	TRANSMIT_FFE_COEFFICIENT_SUM_REGISTER		TX Register
typedef union {
	struct {
		uint8_t SUMOFCOEFF_10_0_b0                       : 8;	/* [10:0]       r 11'h000*/
		uint8_t SUMOFCOEFF_10_0_b1                       : 3;	/* [10:0]       r 11'h000*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_COEFFICIENT_SUM_REGISTER_t;
__xdata __at( 0x124 ) volatile TRANSMIT_FFE_COEFFICIENT_SUM_REGISTER_t TRANSMIT_FFE_COEFFICIENT_SUM_REGISTER;
#define reg_SUMOFCOEFF_10_0_b0  TRANSMIT_FFE_COEFFICIENT_SUM_REGISTER.BF.SUMOFCOEFF_10_0_b0
#define reg_SUMOFCOEFF_10_0_b1  TRANSMIT_FFE_COEFFICIENT_SUM_REGISTER.BF.SUMOFCOEFF_10_0_b1

// 0x0128	TRANSMIT_SPI_COMMAND_PACKET_BYTES_7		6_Register
typedef union {
	struct {
		uint8_t SPI_CMD_DATA_B76_13_0_b0                 : 8;	/* [13:0]       r 14'h0000*/
		uint8_t SPI_CMD_DATA_B76_13_0_b1                 : 6;	/* [13:0]       r 14'h0000*/
		uint8_t SPI_DATA_VALID                           : 1;	/*     14       r 1'h0*/
		uint8_t SPI_PKT_PENDING                          : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_SPI_COMMAND_PACKET_BYTES_7_t;
__xdata __at( 0x128 ) volatile TRANSMIT_SPI_COMMAND_PACKET_BYTES_7_t TRANSMIT_SPI_COMMAND_PACKET_BYTES_7;
#define reg_SPI_CMD_DATA_B76_13_0_b0  TRANSMIT_SPI_COMMAND_PACKET_BYTES_7.BF.SPI_CMD_DATA_B76_13_0_b0
#define reg_SPI_CMD_DATA_B76_13_0_b1  TRANSMIT_SPI_COMMAND_PACKET_BYTES_7.BF.SPI_CMD_DATA_B76_13_0_b1
#define reg_SPI_DATA_VALID  TRANSMIT_SPI_COMMAND_PACKET_BYTES_7.BF.SPI_DATA_VALID
#define reg_SPI_PKT_PENDING  TRANSMIT_SPI_COMMAND_PACKET_BYTES_7.BF.SPI_PKT_PENDING

// 0x012c	TRANSMIT_SPI_COMMAND_PACKET_BYTES_5		4_Register
typedef union {
	struct {
		uint8_t SPI_CMD_DATA_B54_15_0_b0                 : 8;	/* [15:0]       r 16'h0000*/
		uint8_t SPI_CMD_DATA_B54_15_0_b1                 : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_SPI_COMMAND_PACKET_BYTES_5_t;
__xdata __at( 0x12c ) volatile TRANSMIT_SPI_COMMAND_PACKET_BYTES_5_t TRANSMIT_SPI_COMMAND_PACKET_BYTES_5;
#define reg_SPI_CMD_DATA_B54_15_0_b0  TRANSMIT_SPI_COMMAND_PACKET_BYTES_5.BF.SPI_CMD_DATA_B54_15_0_b0
#define reg_SPI_CMD_DATA_B54_15_0_b1  TRANSMIT_SPI_COMMAND_PACKET_BYTES_5.BF.SPI_CMD_DATA_B54_15_0_b1
#define reg_SPI_CMD_DATA_B54_15_0  TRANSMIT_SPI_COMMAND_PACKET_BYTES_5.WT.W0

// 0x0130	TRANSMIT_SPI_COMMAND_PACKET_BYTES_3		2_Register
typedef union {
	struct {
		uint8_t SPI_CMD_DATA_B32_15_0_b0                 : 8;	/* [15:0]       r 16'h0000*/
		uint8_t SPI_CMD_DATA_B32_15_0_b1                 : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_SPI_COMMAND_PACKET_BYTES_3_t;
__xdata __at( 0x130 ) volatile TRANSMIT_SPI_COMMAND_PACKET_BYTES_3_t TRANSMIT_SPI_COMMAND_PACKET_BYTES_3;
#define reg_SPI_CMD_DATA_B32_15_0_b0  TRANSMIT_SPI_COMMAND_PACKET_BYTES_3.BF.SPI_CMD_DATA_B32_15_0_b0
#define reg_SPI_CMD_DATA_B32_15_0_b1  TRANSMIT_SPI_COMMAND_PACKET_BYTES_3.BF.SPI_CMD_DATA_B32_15_0_b1
#define reg_SPI_CMD_DATA_B32_15_0  TRANSMIT_SPI_COMMAND_PACKET_BYTES_3.WT.W0

// 0x0134	TRANSMIT_SPI_COMMAND_PACKET_BYTES_1		0_Register
typedef union {
	struct {
		uint8_t SPI_CMD_DATA_B10_15_0_b0                 : 8;	/* [15:0]       r 16'h0000*/
		uint8_t SPI_CMD_DATA_B10_15_0_b1                 : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_SPI_COMMAND_PACKET_BYTES_1_t;
__xdata __at( 0x134 ) volatile TRANSMIT_SPI_COMMAND_PACKET_BYTES_1_t TRANSMIT_SPI_COMMAND_PACKET_BYTES_1;
#define reg_SPI_CMD_DATA_B10_15_0_b0  TRANSMIT_SPI_COMMAND_PACKET_BYTES_1.BF.SPI_CMD_DATA_B10_15_0_b0
#define reg_SPI_CMD_DATA_B10_15_0_b1  TRANSMIT_SPI_COMMAND_PACKET_BYTES_1.BF.SPI_CMD_DATA_B10_15_0_b1
#define reg_SPI_CMD_DATA_B10_15_0  TRANSMIT_SPI_COMMAND_PACKET_BYTES_1.WT.W0

// 0x0138	TRANSMIT_SPI_RESPONSE_PACKET_BYTES_2		1_Register
typedef union {
	struct {
		uint8_t SPI_RESP_DATA_B21_15_0_b0                : 8;	/* [15:0]       r 16'h0000*/
		uint8_t SPI_RESP_DATA_B21_15_0_b1                : 8;	/* [15:0]       r 16'h0000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	struct{uint16_t W0:16;uint16_t W1:16;}WT;
	uint32_t VAL;
} TRANSMIT_SPI_RESPONSE_PACKET_BYTES_2_t;
__xdata __at( 0x138 ) volatile TRANSMIT_SPI_RESPONSE_PACKET_BYTES_2_t TRANSMIT_SPI_RESPONSE_PACKET_BYTES_2;
#define reg_SPI_RESP_DATA_B21_15_0_b0  TRANSMIT_SPI_RESPONSE_PACKET_BYTES_2.BF.SPI_RESP_DATA_B21_15_0_b0
#define reg_SPI_RESP_DATA_B21_15_0_b1  TRANSMIT_SPI_RESPONSE_PACKET_BYTES_2.BF.SPI_RESP_DATA_B21_15_0_b1
#define reg_SPI_RESP_DATA_B21_15_0  TRANSMIT_SPI_RESPONSE_PACKET_BYTES_2.WT.W0

// 0x013c	TRANSMIT_SPI_RESPONSE_PACKET_BYTE_0_REGISTER		TX Register
typedef union {
	struct {
		uint8_t SPI_RESP_DATA_B0_7_0                     : 8;	/*  [7:0]       r 8'h00*/
		uint8_t RESERVED_8                               : 8;	/* [15:8]     r/w 8'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_SPI_RESPONSE_PACKET_BYTE_0_REGISTER_t;
__xdata __at( 0x13c ) volatile TRANSMIT_SPI_RESPONSE_PACKET_BYTE_0_REGISTER_t TRANSMIT_SPI_RESPONSE_PACKET_BYTE_0_REGISTER;
#define reg_SPI_RESP_DATA_B0_7_0  TRANSMIT_SPI_RESPONSE_PACKET_BYTE_0_REGISTER.BF.SPI_RESP_DATA_B0_7_0

// 0x0180	TRANSMIT_FFE_CONTROL_REGISTER_1		TX Register
typedef union {
	struct {
		uint8_t COMPCLKDN_4_0                            : 5;	/*  [4:0]     r/w 5'h0C*/
		uint8_t COMPCLKUP_4_0_b0                         : 3;	/*  [9:5]     r/w 5'h0C*/
		uint8_t COMPCLKUP_4_0_b1                         : 2;	/*  [9:5]     r/w 5'h0C*/
		uint8_t NUMSAMP_5_0                              : 6;	/*[15:10]     r/w 6'h02*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_CONTROL_REGISTER_1_t;
__xdata __at( 0x180 ) volatile TRANSMIT_FFE_CONTROL_REGISTER_1_t TRANSMIT_FFE_CONTROL_REGISTER_1;
#define reg_COMPCLKDN_4_0  TRANSMIT_FFE_CONTROL_REGISTER_1.BF.COMPCLKDN_4_0
#define reg_COMPCLKUP_4_0_b0  TRANSMIT_FFE_CONTROL_REGISTER_1.BF.COMPCLKUP_4_0_b0
#define reg_COMPCLKUP_4_0_b1  TRANSMIT_FFE_CONTROL_REGISTER_1.BF.COMPCLKUP_4_0_b1
#define reg_NUMSAMP_5_0  TRANSMIT_FFE_CONTROL_REGISTER_1.BF.NUMSAMP_5_0

// 0x0184	TRANSMIT_FFE_CONTROL_REGISTER_2		TX Register
typedef union {
	struct {
		uint8_t RAILTHRESH_5_0                           : 6;	/*  [5:0]     r/w 6'h31*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'h0*/
		uint8_t PERCAL_INT_2_0                           : 3;	/* [10:8]     r/w 3'h6*/
		uint8_t PERCALEN                                 : 1;	/*     11     r/w 1'h1*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_CONTROL_REGISTER_2_t;
__xdata __at( 0x184 ) volatile TRANSMIT_FFE_CONTROL_REGISTER_2_t TRANSMIT_FFE_CONTROL_REGISTER_2;
#define reg_RAILTHRESH_5_0  TRANSMIT_FFE_CONTROL_REGISTER_2.BF.RAILTHRESH_5_0
#define reg_PERCAL_INT_2_0  TRANSMIT_FFE_CONTROL_REGISTER_2.BF.PERCAL_INT_2_0
#define reg_PERCALEN  TRANSMIT_FFE_CONTROL_REGISTER_2.BF.PERCALEN

// 0x0188	TRANSMIT_FFE_CONTROL_REGISTER_3		TX Register
typedef union {
	struct {
		uint8_t CSUMMIN_7_0                              : 8;	/*  [7:0]     r/w 8'h71*/
		uint8_t CSUMMAX_7_0                              : 8;	/* [15:8]     r/w 8'h69*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_CONTROL_REGISTER_3_t;
__xdata __at( 0x188 ) volatile TRANSMIT_FFE_CONTROL_REGISTER_3_t TRANSMIT_FFE_CONTROL_REGISTER_3;
#define reg_CSUMMIN_7_0  TRANSMIT_FFE_CONTROL_REGISTER_3.BF.CSUMMIN_7_0
#define reg_CSUMMAX_7_0  TRANSMIT_FFE_CONTROL_REGISTER_3.BF.CSUMMAX_7_0

// 0x01a0	TRANSMIT_FFE_TAP_0_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t T0PROGDAC_4_0                            : 5;	/*  [4:0]       r 5'hXX*/
		uint8_t RESERVED_5                               : 2;	/*  [6:5]     r/w 2'hX*/
		uint8_t T0SIGN                                   : 1;	/*      7       r 1'hX*/
		uint8_t T0SEGEN_1_0                              : 2;	/*  [9:8]       r 2'hX*/
		uint8_t RESERVED_10                              : 2;	/*[11:10]     r/w 2'hX*/
		uint8_t T0SEGMAX_1_0                             : 2;	/*[13:12]       r 2'hX*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'hX*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_TAP_0_STATUS_REGISTER_t;
__xdata __at( 0x1a0 ) volatile TRANSMIT_FFE_TAP_0_STATUS_REGISTER_t TRANSMIT_FFE_TAP_0_STATUS_REGISTER;
#define reg_T0PROGDAC_4_0  TRANSMIT_FFE_TAP_0_STATUS_REGISTER.BF.T0PROGDAC_4_0
#define reg_T0SIGN  TRANSMIT_FFE_TAP_0_STATUS_REGISTER.BF.T0SIGN
#define reg_T0SEGEN_1_0  TRANSMIT_FFE_TAP_0_STATUS_REGISTER.BF.T0SEGEN_1_0
#define reg_T0SEGMAX_1_0  TRANSMIT_FFE_TAP_0_STATUS_REGISTER.BF.T0SEGMAX_1_0

// 0x01a4	TRANSMIT_FFE_TAP_1_SEGMENT_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t T1SEGEN_5_0                              : 6;	/*  [5:0]       r 6'hXX*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'hX*/
		uint8_t T1SEGMAX_5_0                             : 6;	/* [13:8]       r 6'hXX*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'hX*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_TAP_1_SEGMENT_STATUS_REGISTER_t;
__xdata __at( 0x1a4 ) volatile TRANSMIT_FFE_TAP_1_SEGMENT_STATUS_REGISTER_t TRANSMIT_FFE_TAP_1_SEGMENT_STATUS_REGISTER;
#define reg_T1SEGEN_5_0  TRANSMIT_FFE_TAP_1_SEGMENT_STATUS_REGISTER.BF.T1SEGEN_5_0
#define reg_T1SEGMAX_5_0  TRANSMIT_FFE_TAP_1_SEGMENT_STATUS_REGISTER.BF.T1SEGMAX_5_0

// 0x01a8	TRANSMIT_FFE_TAP_1_DAC_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t T1PROGDAC_5_0                            : 6;	/*  [5:0]       r 6'hXX*/
		uint8_t RESERVED_6                               : 2;	/* [15:6]     r/w 10'hXXX*/
		uint8_t RESERVED_8                               : 8;	/* [15:6]     r/w 10'hXXX*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_TAP_1_DAC_STATUS_REGISTER_t;
__xdata __at( 0x1a8 ) volatile TRANSMIT_FFE_TAP_1_DAC_STATUS_REGISTER_t TRANSMIT_FFE_TAP_1_DAC_STATUS_REGISTER;
#define reg_T1PROGDAC_5_0  TRANSMIT_FFE_TAP_1_DAC_STATUS_REGISTER.BF.T1PROGDAC_5_0

// 0x01ac	TRANSMIT_FFE_TAP_2_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t T2PROGDAC_4_0                            : 5;	/*  [4:0]       r 5'hXX*/
		uint8_t RESERVED_5                               : 2;	/*  [6:5]     r/w 2'hX*/
		uint8_t T2SIGN                                   : 1;	/*      7       r 1'hX*/
		uint8_t T2SEGEN_3_0                              : 4;	/* [11:8]       r 4'hX*/
		uint8_t T2SEGMAX_3_0                             : 4;	/*[15:12]       r 4'hX*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_TAP_2_STATUS_REGISTER_t;
__xdata __at( 0x1ac ) volatile TRANSMIT_FFE_TAP_2_STATUS_REGISTER_t TRANSMIT_FFE_TAP_2_STATUS_REGISTER;
#define reg_T2PROGDAC_4_0  TRANSMIT_FFE_TAP_2_STATUS_REGISTER.BF.T2PROGDAC_4_0
#define reg_T2SIGN  TRANSMIT_FFE_TAP_2_STATUS_REGISTER.BF.T2SIGN
#define reg_T2SEGEN_3_0  TRANSMIT_FFE_TAP_2_STATUS_REGISTER.BF.T2SEGEN_3_0
#define reg_T2SEGMAX_3_0  TRANSMIT_FFE_TAP_2_STATUS_REGISTER.BF.T2SEGMAX_3_0

// 0x01b0	TRANSMIT_FFE_TAP_3_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t T3PROGDAC_4_0                            : 5;	/*  [4:0]       r 5'hXX*/
		uint8_t RESERVED_5                               : 2;	/*  [6:5]     r/w 2'hX*/
		uint8_t T3SIGN                                   : 1;	/*      7       r 1'hX*/
		uint8_t T3SEGEN_1_0                              : 2;	/*  [9:8]       r 2'hX*/
		uint8_t RESERVED_10                              : 2;	/*[11:10]     r/w 2'hX*/
		uint8_t T3SEGMAX_1_0                             : 2;	/*[13:12]       r 2'hX*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'hX*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_TAP_3_STATUS_REGISTER_t;
__xdata __at( 0x1b0 ) volatile TRANSMIT_FFE_TAP_3_STATUS_REGISTER_t TRANSMIT_FFE_TAP_3_STATUS_REGISTER;
#define reg_T3PROGDAC_4_0  TRANSMIT_FFE_TAP_3_STATUS_REGISTER.BF.T3PROGDAC_4_0
#define reg_T3SIGN  TRANSMIT_FFE_TAP_3_STATUS_REGISTER.BF.T3SIGN
#define reg_T3SEGEN_1_0  TRANSMIT_FFE_TAP_3_STATUS_REGISTER.BF.T3SEGEN_1_0
#define reg_T3SEGMAX_1_0  TRANSMIT_FFE_TAP_3_STATUS_REGISTER.BF.T3SEGMAX_1_0

// 0x01b4	TRANSMIT_FFE_TAP_4_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t T4PROGDAC_4_0                            : 5;	/*  [4:0]       r 5'hXX*/
		uint8_t RESERVED_5                               : 2;	/*  [6:5]     r/w 2'hX*/
		uint8_t T4SIGN                                   : 1;	/*      7       r 1'hX*/
		uint8_t TAP4ADDR_4_0                             : 5;	/* [12:8]       r 5'hXX*/
		uint8_t RESERVED_13                              : 2;	/*[14:13]     r/w 2'hX*/
		uint8_t T4SEGEN                                  : 1;	/*     15       r 1'hX*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_TAP_4_STATUS_REGISTER_t;
__xdata __at( 0x1b4 ) volatile TRANSMIT_FFE_TAP_4_STATUS_REGISTER_t TRANSMIT_FFE_TAP_4_STATUS_REGISTER;
#define reg_T4PROGDAC_4_0  TRANSMIT_FFE_TAP_4_STATUS_REGISTER.BF.T4PROGDAC_4_0
#define reg_T4SIGN  TRANSMIT_FFE_TAP_4_STATUS_REGISTER.BF.T4SIGN
#define reg_TAP4ADDR_4_0  TRANSMIT_FFE_TAP_4_STATUS_REGISTER.BF.TAP4ADDR_4_0
#define reg_T4SEGEN  TRANSMIT_FFE_TAP_4_STATUS_REGISTER.BF.T4SEGEN

// 0x01b8	TRANSMIT_FFE_TAP_5_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t T5PROGDAC_4_0                            : 5;	/*  [4:0]       r 5'hXX*/
		uint8_t RESERVED_5                               : 2;	/*  [6:5]     r/w 2'hX*/
		uint8_t T5SIGN                                   : 1;	/*      7       r 1'hX*/
		uint8_t TAP5ADDR_4_0                             : 5;	/* [12:8]       r 5'hXX*/
		uint8_t RESERVED_13                              : 2;	/*[14:13]     r/w 2'hX*/
		uint8_t T5SEGEN                                  : 1;	/*     15       r 1'hX*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_TAP_5_STATUS_REGISTER_t;
__xdata __at( 0x1b8 ) volatile TRANSMIT_FFE_TAP_5_STATUS_REGISTER_t TRANSMIT_FFE_TAP_5_STATUS_REGISTER;
#define reg_T5PROGDAC_4_0  TRANSMIT_FFE_TAP_5_STATUS_REGISTER.BF.T5PROGDAC_4_0
#define reg_T5SIGN  TRANSMIT_FFE_TAP_5_STATUS_REGISTER.BF.T5SIGN
#define reg_TAP5ADDR_4_0  TRANSMIT_FFE_TAP_5_STATUS_REGISTER.BF.TAP5ADDR_4_0
#define reg_T5SEGEN  TRANSMIT_FFE_TAP_5_STATUS_REGISTER.BF.T5SEGEN

// 0x01bc	TRANSMIT_FFE_RAIL_STATUS_REGISTER		TX Register
typedef union {
	struct {
		uint8_t RAILXOVER_5_0                            : 6;	/*  [5:0]       r 6'hXX*/
		uint8_t RESERVED_6                               : 2;	/*  [7:6]     r/w 2'hX*/
		uint8_t RAILDET                                  : 1;	/*      8       r 1'hX*/
		uint8_t RESERVED_9                               : 6;	/* [14:9]     r/w 6'hXX*/
		uint8_t ROAMTAPEN                                : 1;	/*     15       r 1'hX*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_RAIL_STATUS_REGISTER_t;
__xdata __at( 0x1bc ) volatile TRANSMIT_FFE_RAIL_STATUS_REGISTER_t TRANSMIT_FFE_RAIL_STATUS_REGISTER;
#define reg_RAILXOVER_5_0  TRANSMIT_FFE_RAIL_STATUS_REGISTER.BF.RAILXOVER_5_0
#define reg_RAILDET  TRANSMIT_FFE_RAIL_STATUS_REGISTER.BF.RAILDET
#define reg_ROAMTAPEN  TRANSMIT_FFE_RAIL_STATUS_REGISTER.BF.ROAMTAPEN

// 0x01c0	TRANSMIT_STATE_MACHINE_STATUS_0_REGISTER		TX Register
typedef union {
	struct {
		uint8_t TAPCTRLSM_5_0                            : 6;	/*  [5:0]       r 6'hXX*/
		uint8_t FFECTRLSM_3_0_b0                         : 2;	/*  [9:6]       r 4'hX*/
		uint8_t FFECTRLSM_3_0_b1                         : 2;	/*  [9:6]       r 4'hX*/
		uint8_t SPIINTFCSM_2_0                           : 3;	/*[12:10]       r 3'hX*/
		uint8_t RESERVED_13                              : 3;	/*[15:13]     r/w 3'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_STATE_MACHINE_STATUS_0_REGISTER_t;
__xdata __at( 0x1c0 ) volatile TRANSMIT_STATE_MACHINE_STATUS_0_REGISTER_t TRANSMIT_STATE_MACHINE_STATUS_0_REGISTER;
#define reg_TAPCTRLSM_5_0  TRANSMIT_STATE_MACHINE_STATUS_0_REGISTER.BF.TAPCTRLSM_5_0
#define reg_FFECTRLSM_3_0_b0  TRANSMIT_STATE_MACHINE_STATUS_0_REGISTER.BF.FFECTRLSM_3_0_b0
#define reg_FFECTRLSM_3_0_b1  TRANSMIT_STATE_MACHINE_STATUS_0_REGISTER.BF.FFECTRLSM_3_0_b1
#define reg_SPIINTFCSM_2_0  TRANSMIT_STATE_MACHINE_STATUS_0_REGISTER.BF.SPIINTFCSM_2_0

// 0x01c4	TRANSMIT_STATE_MACHINE_STATUS_1_REGISTER		TX Register
typedef union {
	struct {
		uint8_t RAILHUNTSM_4_0                           : 5;	/*  [4:0]       r 5'hXX*/
		uint8_t IDACCOMPSM_2_0                           : 3;	/*  [7:5]       r 3'hX*/
		uint8_t ROTCTRLSM_2_0                            : 3;	/* [10:8]       r 3'hX*/
		uint8_t RESERVED_11                              : 5;	/*[15:11]     r/w 5'h00*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_STATE_MACHINE_STATUS_1_REGISTER_t;
__xdata __at( 0x1c4 ) volatile TRANSMIT_STATE_MACHINE_STATUS_1_REGISTER_t TRANSMIT_STATE_MACHINE_STATUS_1_REGISTER;
#define reg_RAILHUNTSM_4_0  TRANSMIT_STATE_MACHINE_STATUS_1_REGISTER.BF.RAILHUNTSM_4_0
#define reg_IDACCOMPSM_2_0  TRANSMIT_STATE_MACHINE_STATUS_1_REGISTER.BF.IDACCOMPSM_2_0
#define reg_ROTCTRLSM_2_0  TRANSMIT_STATE_MACHINE_STATUS_1_REGISTER.BF.ROTCTRLSM_2_0

// 0x01c8	TRANSMIT_STATE_MACHINE_STATUS_2_REGISTER		TX Register
typedef union {
	struct {
		uint8_t CONFIGSELSM_3_0                          : 4;	/*  [3:0]       r 4'h6*/
		uint8_t PWRDNSM_2_0                              : 3;	/*  [6:4]       r 3'hX*/
		uint8_t PWRUPDNSM_2_0_b0                         : 1;	/*  [9:7]       r 3'hX*/
		uint8_t PWRUPDNSM_2_0_b1                         : 2;	/*  [9:7]       r 3'hX*/
		uint8_t DCLKALIGNSM_3_0                          : 4;	/*[13:10]       r 4'hX*/
		uint8_t RESERVED_14                              : 2;	/*[15:14]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_STATE_MACHINE_STATUS_2_REGISTER_t;
__xdata __at( 0x1c8 ) volatile TRANSMIT_STATE_MACHINE_STATUS_2_REGISTER_t TRANSMIT_STATE_MACHINE_STATUS_2_REGISTER;
#define reg_CONFIGSELSM_3_0  TRANSMIT_STATE_MACHINE_STATUS_2_REGISTER.BF.CONFIGSELSM_3_0
#define reg_PWRDNSM_2_0  TRANSMIT_STATE_MACHINE_STATUS_2_REGISTER.BF.PWRDNSM_2_0
#define reg_PWRUPDNSM_2_0_b0  TRANSMIT_STATE_MACHINE_STATUS_2_REGISTER.BF.PWRUPDNSM_2_0_b0
#define reg_PWRUPDNSM_2_0_b1  TRANSMIT_STATE_MACHINE_STATUS_2_REGISTER.BF.PWRUPDNSM_2_0_b1
#define reg_DCLKALIGNSM_3_0  TRANSMIT_STATE_MACHINE_STATUS_2_REGISTER.BF.DCLKALIGNSM_3_0

// 0x01cc	TRANSMIT_STATE_MACHINE_STATUS_3_REGISTER		TX Register
typedef union {
	struct {
		uint8_t SVCOEFFCSAN_3_0                          : 4;	/*  [3:0]       r 4'hX*/
		uint8_t SVMTCOEFFSCAN_4_0_b0                     : 4;	/*  [8:4]       r 5'hXX*/
		uint8_t SVMTCOEFFSCAN_4_0_b1                     : 1;	/*  [8:4]       r 5'hXX*/
		uint8_t SVSPITX_2_0                              : 3;	/* [11:9]       r 3'hX*/
		uint8_t RESERVED_12                              : 4;	/*[15:12]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_STATE_MACHINE_STATUS_3_REGISTER_t;
__xdata __at( 0x1cc ) volatile TRANSMIT_STATE_MACHINE_STATUS_3_REGISTER_t TRANSMIT_STATE_MACHINE_STATUS_3_REGISTER;
#define reg_SVCOEFFCSAN_3_0  TRANSMIT_STATE_MACHINE_STATUS_3_REGISTER.BF.SVCOEFFCSAN_3_0
#define reg_SVMTCOEFFSCAN_4_0_b0  TRANSMIT_STATE_MACHINE_STATUS_3_REGISTER.BF.SVMTCOEFFSCAN_4_0_b0
#define reg_SVMTCOEFFSCAN_4_0_b1  TRANSMIT_STATE_MACHINE_STATUS_3_REGISTER.BF.SVMTCOEFFSCAN_4_0_b1
#define reg_SVSPITX_2_0  TRANSMIT_STATE_MACHINE_STATUS_3_REGISTER.BF.SVSPITX_2_0

// 0x01e0	TRANSMIT_APPLIED_TUNE_VECTOR_REGISTER		TX Register
typedef union {
	struct {
		uint8_t ATUNE_4_0                                : 5;	/*  [4:0]       r 5'h1E*/
		uint8_t RESERVED_5                               : 3;	/* [15:5]     r/w 11'h000*/
		uint8_t RESERVED_8                               : 8;	/* [15:5]     r/w 11'h000*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_APPLIED_TUNE_VECTOR_REGISTER_t;
__xdata __at( 0x1e0 ) volatile TRANSMIT_APPLIED_TUNE_VECTOR_REGISTER_t TRANSMIT_APPLIED_TUNE_VECTOR_REGISTER;
#define reg_ATUNE_4_0  TRANSMIT_APPLIED_TUNE_VECTOR_REGISTER.BF.ATUNE_4_0

// 0x01f8	TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER		TX Register
typedef union {
	struct {
		uint8_t MTSCANADDR_FFE_2_0                       : 3;	/*  [2:0]       r 3'h0*/
		uint8_t RESERVED_3                               : 3;	/*  [5:3]     r/w 3'h0*/
		uint8_t MTSCANDIR_FFE                            : 1;	/*      6       r 1'h0*/
		uint8_t MTSCANENABLE_FFE                         : 1;	/*      7     r/w 1'h0*/
		uint8_t MTSCANRUN_FFE                            : 1;	/*      8     r/w 1'h0*/
		uint8_t MTSCANRST_FFE                            : 1;	/*      9     r/w 1'h0*/
		uint8_t MTSCANFAIL_FFE                           : 1;	/*     10       r 1'h0*/
		uint8_t MTSCANPASS_FFE                           : 1;	/*     11       r 1'h0*/
		uint8_t MTANLGRUN_FFE                            : 1;	/*     12     r/w 1'h0*/
		uint8_t MTANLGRST_FFE                            : 1;	/*     13     r/w 1'h0*/
		uint8_t MTANLGFAIL_FFE                           : 1;	/*     14       r 1'h0*/
		uint8_t MTANLGPASS_FFE                           : 1;	/*     15       r 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER_t;
__xdata __at( 0x1f8 ) volatile TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER_t TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER;
#define reg_MTSCANADDR_FFE_2_0  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTSCANADDR_FFE_2_0
#define reg_MTSCANDIR_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTSCANDIR_FFE
#define reg_MTSCANENABLE_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTSCANENABLE_FFE
#define reg_MTSCANRUN_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTSCANRUN_FFE
#define reg_MTSCANRST_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTSCANRST_FFE
#define reg_MTSCANFAIL_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTSCANFAIL_FFE
#define reg_MTSCANPASS_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTSCANPASS_FFE
#define reg_MTANLGRUN_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTANLGRUN_FFE
#define reg_MTANLGRST_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTANLGRST_FFE
#define reg_MTANLGFAIL_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTANLGFAIL_FFE
#define reg_MTANLGPASS_FFE  TRANSMIT_FFE_MACROTEST_CONTROL_REGISTER.BF.MTANLGPASS_FFE

// 0x01fc	TRANSMIT_MACRO_TEST_CONTROL_REGISTER_1		TX Register
typedef union {
	struct {
		uint8_t MACROTEST_HOLD                           : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 7;	/* [14:1]     r/w 14'h0000*/
		uint8_t RESERVED_8                               : 7;	/* [14:1]     r/w 14'h0000*/
		uint8_t ATESTEN                                  : 1;	/*     15     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TRANSMIT_MACRO_TEST_CONTROL_REGISTER_1_t;
__xdata __at( 0x1fc ) volatile TRANSMIT_MACRO_TEST_CONTROL_REGISTER_1_t TRANSMIT_MACRO_TEST_CONTROL_REGISTER_1;
#define reg_MACROTEST_HOLD  TRANSMIT_MACRO_TEST_CONTROL_REGISTER_1.BF.MACROTEST_HOLD
#define reg_ATESTEN  TRANSMIT_MACRO_TEST_CONTROL_REGISTER_1.BF.ATESTEN

#endif
