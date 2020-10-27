#ifndef PHY_REG_C_ANA_TX_LANE_H
#define PHY_REG_C_ANA_TX_LANE_H



// 0x0	ANA_TXSPEED_REG0		
typedef union {
	struct {
		uint8_t TXSPEED_DIV_LANE_2_0                     : 3;	/*  [2:0]     r/w 3'h0*/
		uint8_t RESERVED_3                               : 2;	/*  [4:3]     r/w 2'h0*/
		uint8_t TX_A90_VCAP_LANE_1_0                     : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t TX_HS_DIV2_SEL_LANE                      : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXSPEED_REG0_t;
__xdata __at( 0x1000 ) volatile ANA_TXSPEED_REG0_t ANA_TXSPEED_REG0;
#define reg_TXSPEED_DIV_LANE_2_0  ANA_TXSPEED_REG0.BF.TXSPEED_DIV_LANE_2_0
#define reg_TX_A90_VCAP_LANE_1_0  ANA_TXSPEED_REG0.BF.TX_A90_VCAP_LANE_1_0
#define reg_TX_HS_DIV2_SEL_LANE  ANA_TXSPEED_REG0.BF.TX_HS_DIV2_SEL_LANE

// 0x1	ANA_TXREG_REG0		
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_CLK_LANE_3_0              : 4;	/*  [3:0]     r/w 4'hF*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXREG_REG0_t;
__xdata __at( 0x1004 ) volatile ANA_TXREG_REG0_t ANA_TXREG_REG0;
#define reg_TXREG_SPEEDTRK_CLK_LANE_3_0  ANA_TXREG_REG0.BF.TXREG_SPEEDTRK_CLK_LANE_3_0

// 0x2	ANA_TXREG_REG1		
typedef union {
	struct {
		uint8_t TXREG_SPEEDTRK_DATA_LANE_3_0             : 4;	/*  [3:0]     r/w 4'hF*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXREG_REG1_t;
__xdata __at( 0x1008 ) volatile ANA_TXREG_REG1_t ANA_TXREG_REG1;
#define reg_TXREG_SPEEDTRK_DATA_LANE_3_0  ANA_TXREG_REG1.BF.TXREG_SPEEDTRK_DATA_LANE_3_0

// 0x3	ANA_TXDRV_REG		
typedef union {
	struct {
		uint8_t TXDRV_COMP_CURRENT_LANE_2_0              : 3;	/*  [2:0]     r/w   0*/
		uint8_t TXDRV_COMP_EN_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t TXDRV_REG_GM_LANE_1_0                    : 2;	/*  [5:4]     r/w 2'h3*/
		uint8_t TX_DRVREG_FB_SEL_LANE                    : 1;	/*      6     r/w   0*/
		uint8_t TX_DRVREG_HG_LANE                        : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDRV_REG_t;
__xdata __at( 0x100c ) volatile ANA_TXDRV_REG_t ANA_TXDRV_REG;
#define reg_TXDRV_COMP_CURRENT_LANE_2_0  ANA_TXDRV_REG.BF.TXDRV_COMP_CURRENT_LANE_2_0
#define reg_TXDRV_COMP_EN_LANE  ANA_TXDRV_REG.BF.TXDRV_COMP_EN_LANE
#define reg_TXDRV_REG_GM_LANE_1_0  ANA_TXDRV_REG.BF.TXDRV_REG_GM_LANE_1_0
#define reg_TX_DRVREG_FB_SEL_LANE  ANA_TXDRV_REG.BF.TX_DRVREG_FB_SEL_LANE
#define reg_TX_DRVREG_HG_LANE  ANA_TXDRV_REG.BF.TX_DRVREG_HG_LANE

// 0x4	ANA_TX_NT_REG		
typedef union {
	struct {
		uint8_t TXCLK_NT_CTRL_LANE_1_0                   : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TXCLK_NT_FIX_DIV_EN_LANE                 : 1;	/*      2     r/w 1'b0*/
		uint8_t TXCLK_NT_DIV_LANE_4_0                    : 5;	/*  [7:3]     r/w 5'h1e*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_NT_REG_t;
__xdata __at( 0x1010 ) volatile ANA_TX_NT_REG_t ANA_TX_NT_REG;
#define reg_TXCLK_NT_CTRL_LANE_1_0  ANA_TX_NT_REG.BF.TXCLK_NT_CTRL_LANE_1_0
#define reg_TXCLK_NT_FIX_DIV_EN_LANE  ANA_TX_NT_REG.BF.TXCLK_NT_FIX_DIV_EN_LANE
#define reg_TXCLK_NT_DIV_LANE_4_0  ANA_TX_NT_REG.BF.TXCLK_NT_DIV_LANE_4_0

// 0x5	ANA_CK_REG0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t IDCON_CUR_LANE_1_0                       : 2;	/*  [2:1]     r/w 2'h0*/
		uint8_t LOCAL_ANA_TX2RX_LPBK_EN_LANE             : 1;	/*      3     r/w   0*/
		uint8_t IDCON_VDDADATA_LANE                      : 1;	/*      4     r/w   0*/
		uint8_t TX_TXCLK_4X_EN_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t TX_TXCLK_NT_EN_LANE                      : 1;	/*      6     r/w   0*/
		uint8_t TXCLK_NT_DIV_RESET_LANE                  : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CK_REG0_t;
__xdata __at( 0x1014 ) volatile ANA_CK_REG0_t ANA_CK_REG0;
#define reg_IDCON_CUR_LANE_1_0  ANA_CK_REG0.BF.IDCON_CUR_LANE_1_0
#define reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE  ANA_CK_REG0.BF.LOCAL_ANA_TX2RX_LPBK_EN_LANE
#define reg_IDCON_VDDADATA_LANE  ANA_CK_REG0.BF.IDCON_VDDADATA_LANE
#define reg_TX_TXCLK_4X_EN_LANE  ANA_CK_REG0.BF.TX_TXCLK_4X_EN_LANE
#define reg_TX_TXCLK_NT_EN_LANE  ANA_CK_REG0.BF.TX_TXCLK_NT_EN_LANE
#define reg_TXCLK_NT_DIV_RESET_LANE  ANA_CK_REG0.BF.TXCLK_NT_DIV_RESET_LANE

// 0x6	ANA_TXDCC_REG0		
typedef union {
	struct {
		uint8_t TXDCC_PDIV_EN_LANE                       : 1;	/*      0     r/w   0*/
		uint8_t TXDCC_HG_LANE                            : 1;	/*      1     r/w   0*/
		uint8_t TXDCC_EN_LANE                            : 1;	/*      2     r/w   1*/
		uint8_t TXDCC_PDIV_HG_LANE                       : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 2;	/*  [6:5]     r/w 2'h0*/
		uint8_t TXCAL_EN_LANE                            : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDCC_REG0_t;
__xdata __at( 0x1018 ) volatile ANA_TXDCC_REG0_t ANA_TXDCC_REG0;
#define reg_TXDCC_PDIV_EN_LANE  ANA_TXDCC_REG0.BF.TXDCC_PDIV_EN_LANE
#define reg_TXDCC_HG_LANE  ANA_TXDCC_REG0.BF.TXDCC_HG_LANE
#define reg_TXDCC_EN_LANE  ANA_TXDCC_REG0.BF.TXDCC_EN_LANE
#define reg_TXDCC_PDIV_HG_LANE  ANA_TXDCC_REG0.BF.TXDCC_PDIV_HG_LANE
#define reg_TXCAL_EN_LANE  ANA_TXDCC_REG0.BF.TXCAL_EN_LANE

// 0x7	ANA_TXDETRX_REG1		
typedef union {
	struct {
		uint8_t TX_DETRX_IMP_LANE_1_0                    : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TX_DETRX_VTH_LANE_1_0                    : 2;	/*  [3:2]     r/w 2'h0*/
		uint8_t TX_HIZ_HOLD_CUR_LANE_1_0                 : 2;	/*  [5:4]     r/w 2'h0*/
		uint8_t TXDCC_A90_SEL_LANE_1_0                   : 2;	/*  [7:6]     r/w 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXDETRX_REG1_t;
__xdata __at( 0x101c ) volatile ANA_TXDETRX_REG1_t ANA_TXDETRX_REG1;
#define reg_TX_DETRX_IMP_LANE_1_0  ANA_TXDETRX_REG1.BF.TX_DETRX_IMP_LANE_1_0
#define reg_TX_DETRX_VTH_LANE_1_0  ANA_TXDETRX_REG1.BF.TX_DETRX_VTH_LANE_1_0
#define reg_TX_HIZ_HOLD_CUR_LANE_1_0  ANA_TXDETRX_REG1.BF.TX_HIZ_HOLD_CUR_LANE_1_0
#define reg_TXDCC_A90_SEL_LANE_1_0  ANA_TXDETRX_REG1.BF.TXDCC_A90_SEL_LANE_1_0

// 0x8	ANA_TXIMP_REG0		
typedef union {
	struct {
		uint8_t TXIMPCAL_EN_LANE                         : 1;	/*      0     r/w   0*/
		uint8_t TX_IMPCAL_NSIDE_LANE                     : 1;	/*      1     r/w   0*/
		uint8_t TX_IMPCAL_NMOS_LANE                      : 1;	/*      2     r/w   0*/
		uint8_t TX_IMPCAL_2ND_EN_LANE                    : 1;	/*      3     r/w   0*/
		uint8_t TX_TEMPC_MSBN_EN_LANE                    : 1;	/*      4     r/w   0*/
		uint8_t TX_TEMPC_MSBP_EN_LANE                    : 1;	/*      5     r/w   0*/
		uint8_t TXIMP_TEMPC_NMOS_CAL_EN_LANE             : 1;	/*      6     r/w   0*/
		uint8_t TXIMP_TEMPC_PMOS_CAL_EN_LANE             : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXIMP_REG0_t;
__xdata __at( 0x1020 ) volatile ANA_TXIMP_REG0_t ANA_TXIMP_REG0;
#define reg_TXIMPCAL_EN_LANE  ANA_TXIMP_REG0.BF.TXIMPCAL_EN_LANE
#define reg_TX_IMPCAL_NSIDE_LANE  ANA_TXIMP_REG0.BF.TX_IMPCAL_NSIDE_LANE
#define reg_TX_IMPCAL_NMOS_LANE  ANA_TXIMP_REG0.BF.TX_IMPCAL_NMOS_LANE
#define reg_TX_IMPCAL_2ND_EN_LANE  ANA_TXIMP_REG0.BF.TX_IMPCAL_2ND_EN_LANE
#define reg_TX_TEMPC_MSBN_EN_LANE  ANA_TXIMP_REG0.BF.TX_TEMPC_MSBN_EN_LANE
#define reg_TX_TEMPC_MSBP_EN_LANE  ANA_TXIMP_REG0.BF.TX_TEMPC_MSBP_EN_LANE
#define reg_TXIMP_TEMPC_NMOS_CAL_EN_LANE  ANA_TXIMP_REG0.BF.TXIMP_TEMPC_NMOS_CAL_EN_LANE
#define reg_TXIMP_TEMPC_PMOS_CAL_EN_LANE  ANA_TXIMP_REG0.BF.TXIMP_TEMPC_PMOS_CAL_EN_LANE

// 0x9	ANA_TXVCM_REG		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 6;	/*  [5:0]     r/w 6'h0*/
		uint8_t TX_VCM_SEL_LANE_1_0                      : 2;	/*  [7:6]     r/w 2'h2*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXVCM_REG_t;
__xdata __at( 0x1024 ) volatile ANA_TXVCM_REG_t ANA_TXVCM_REG;
#define reg_TX_VCM_SEL_LANE_1_0  ANA_TXVCM_REG.BF.TX_VCM_SEL_LANE_1_0

// 0xa	ANA_TX_FIR_REG0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w   0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w   0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t TX_FIR_2_DIG_CLK_DIV_LANE                : 1;	/*      4     r/w   0*/
		uint8_t TX_FIR_BYPASS_L3_DELAY_LANE              : 1;	/*      5     r/w   0*/
		uint8_t TX_FIR_BYPASS_L2_DELAY_LANE              : 1;	/*      6     r/w   0*/
		uint8_t TX_FIR_BYPASS_L1_DELAY_LANE              : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_REG0_t;
__xdata __at( 0x1028 ) volatile ANA_TX_FIR_REG0_t ANA_TX_FIR_REG0;
#define reg_TX_FIR_2_DIG_CLK_DIV_LANE  ANA_TX_FIR_REG0.BF.TX_FIR_2_DIG_CLK_DIV_LANE
#define reg_TX_FIR_BYPASS_L3_DELAY_LANE  ANA_TX_FIR_REG0.BF.TX_FIR_BYPASS_L3_DELAY_LANE
#define reg_TX_FIR_BYPASS_L2_DELAY_LANE  ANA_TX_FIR_REG0.BF.TX_FIR_BYPASS_L2_DELAY_LANE
#define reg_TX_FIR_BYPASS_L1_DELAY_LANE  ANA_TX_FIR_REG0.BF.TX_FIR_BYPASS_L1_DELAY_LANE

// 0xb	ANA_TX_FIR_REG1		
typedef union {
	struct {
		uint8_t TX_RESET_FIR_LANE                        : 1;	/*      0     r/w   0*/
		uint8_t TX_FIR_CLK_OFF_LANE                      : 1;	/*      1     r/w   0*/
		uint8_t TX_FIR_MAIN_TAP_LANE                     : 1;	/*      2     r/w   0*/
		uint8_t TX_FIR_FRAC_UPDATE_LANE                  : 1;	/*      3     r/w   0*/
		uint8_t TX_FIR_RESERVED_LANE_3_0                 : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_REG1_t;
__xdata __at( 0x102c ) volatile ANA_TX_FIR_REG1_t ANA_TX_FIR_REG1;
#define reg_TX_RESET_FIR_LANE  ANA_TX_FIR_REG1.BF.TX_RESET_FIR_LANE
#define reg_TX_FIR_CLK_OFF_LANE  ANA_TX_FIR_REG1.BF.TX_FIR_CLK_OFF_LANE
#define reg_TX_FIR_MAIN_TAP_LANE  ANA_TX_FIR_REG1.BF.TX_FIR_MAIN_TAP_LANE
#define reg_TX_FIR_FRAC_UPDATE_LANE  ANA_TX_FIR_REG1.BF.TX_FIR_FRAC_UPDATE_LANE
#define reg_TX_FIR_RESERVED_LANE_3_0  ANA_TX_FIR_REG1.BF.TX_FIR_RESERVED_LANE_3_0

// 0xc	ANA_TX_FIR_REG2		
typedef union {
	struct {
		uint8_t TX_FIR_FRAC_P3_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_REG2_t;
__xdata __at( 0x1030 ) volatile ANA_TX_FIR_REG2_t ANA_TX_FIR_REG2;
#define reg_TX_FIR_FRAC_P3_LANE_7_0  ANA_TX_FIR_REG2.BF.TX_FIR_FRAC_P3_LANE_7_0

// 0xd	ANA_TX_FIR_REG3		
typedef union {
	struct {
		uint8_t TX_FIR_FRAC_P1_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_REG3_t;
__xdata __at( 0x1034 ) volatile ANA_TX_FIR_REG3_t ANA_TX_FIR_REG3;
#define reg_TX_FIR_FRAC_P1_LANE_7_0  ANA_TX_FIR_REG3.BF.TX_FIR_FRAC_P1_LANE_7_0

// 0xe	ANA_TX_FIR_REG4		
typedef union {
	struct {
		uint8_t TX_FIR_FRAC_M1_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_REG4_t;
__xdata __at( 0x1038 ) volatile ANA_TX_FIR_REG4_t ANA_TX_FIR_REG4;
#define reg_TX_FIR_FRAC_M1_LANE_7_0  ANA_TX_FIR_REG4.BF.TX_FIR_FRAC_M1_LANE_7_0

// 0xf	ANA_TX_FIR_REG5		
typedef union {
	struct {
		uint8_t TX_FIR_FRAC_M3_LANE_7_0                  : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TX_FIR_REG5_t;
__xdata __at( 0x103c ) volatile ANA_TX_FIR_REG5_t ANA_TX_FIR_REG5;
#define reg_TX_FIR_FRAC_M3_LANE_7_0  ANA_TX_FIR_REG5.BF.TX_FIR_FRAC_M3_LANE_7_0

// 0x10	ANA_CK500DIV_REG0		
typedef union {
	struct {
		uint8_t TX_CLK500M_DIV_LANE_1_0                  : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w   0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w   0*/
		uint8_t RESERVED_4                               : 1;	/*      4     r/w   0*/
		uint8_t RESERVED_5                               : 1;	/*      5     r/w   0*/
		uint8_t RESERVED_6                               : 1;	/*      6     r/w   0*/
		uint8_t RESERVED_7                               : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_CK500DIV_REG0_t;
__xdata __at( 0x1040 ) volatile ANA_CK500DIV_REG0_t ANA_CK500DIV_REG0;
#define reg_TX_CLK500M_DIV_LANE_1_0  ANA_CK500DIV_REG0.BF.TX_CLK500M_DIV_LANE_1_0

// 0x11	ANA_MISC_REG0		
typedef union {
	struct {
		uint8_t TX_TEST_LANE_9_8                         : 2;	/*  [1:0]     r/w 2'h0*/
		uint8_t TX_TXCLK_ALIGN_EN_LANE                   : 1;	/*      2     r/w   0*/
		uint8_t TX_TSEN_SEL_LANE                         : 1;	/*      3     r/w   0*/
		uint8_t TXALIGN90_REF_FILT_BW_LANE               : 1;	/*      4     r/w   0*/
		uint8_t TX_FIR_OPT_MAP_LANE                      : 1;	/*      5     r/w   0*/
		uint8_t TXPAM2_EN_DUM_LANE                       : 1;	/*      6     r/w   0*/
		uint8_t TXAVDD09_SEL_LANE                        : 1;	/*      7     r/w   0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_MISC_REG0_t;
__xdata __at( 0x1044 ) volatile ANA_MISC_REG0_t ANA_MISC_REG0;
#define reg_TX_TEST_LANE_9_8  ANA_MISC_REG0.BF.TX_TEST_LANE_9_8
#define reg_TX_TXCLK_ALIGN_EN_LANE  ANA_MISC_REG0.BF.TX_TXCLK_ALIGN_EN_LANE
#define reg_TX_TSEN_SEL_LANE  ANA_MISC_REG0.BF.TX_TSEN_SEL_LANE
#define reg_TXALIGN90_REF_FILT_BW_LANE  ANA_MISC_REG0.BF.TXALIGN90_REF_FILT_BW_LANE
#define reg_TX_FIR_OPT_MAP_LANE  ANA_MISC_REG0.BF.TX_FIR_OPT_MAP_LANE
#define reg_TXPAM2_EN_DUM_LANE  ANA_MISC_REG0.BF.TXPAM2_EN_DUM_LANE
#define reg_TXAVDD09_SEL_LANE  ANA_MISC_REG0.BF.TXAVDD09_SEL_LANE

// 0x12	ANA_TEST_REG0		
typedef union {
	struct {
		uint8_t TX_TEST_LANE_7_0                         : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TEST_REG0_t;
__xdata __at( 0x1048 ) volatile ANA_TEST_REG0_t ANA_TEST_REG0;
#define reg_TX_TEST_LANE_7_0  ANA_TEST_REG0.BF.TX_TEST_LANE_7_0

// 0x13	ANA_TXMUX_SCAN_REG0		
typedef union {
	struct {
		uint8_t RESERVED_0                               : 7;	/*  [6:0]     r/w 7'h0*/
		uint8_t TX_MUX_SCAN_EN_LANE                      : 1;	/*      7     r/w 1'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN_REG0_t;
__xdata __at( 0x104c ) volatile ANA_TXMUX_SCAN_REG0_t ANA_TXMUX_SCAN_REG0;
#define reg_TX_MUX_SCAN_EN_LANE  ANA_TXMUX_SCAN_REG0.BF.TX_MUX_SCAN_EN_LANE

// 0x14	ANA_TXMUX_SCAN_REG1		
typedef union {
	struct {
		uint8_t TXMUX_SCAN0_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN_REG1_t;
__xdata __at( 0x1050 ) volatile ANA_TXMUX_SCAN_REG1_t ANA_TXMUX_SCAN_REG1;
#define reg_TXMUX_SCAN0_LANE_7_0  ANA_TXMUX_SCAN_REG1.BF.TXMUX_SCAN0_LANE_7_0

// 0x15	ANA_TXMUX_SCAN_REG2		
typedef union {
	struct {
		uint8_t TXMUX_SCAN1_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN_REG2_t;
__xdata __at( 0x1054 ) volatile ANA_TXMUX_SCAN_REG2_t ANA_TXMUX_SCAN_REG2;
#define reg_TXMUX_SCAN1_LANE_7_0  ANA_TXMUX_SCAN_REG2.BF.TXMUX_SCAN1_LANE_7_0

// 0x16	ANA_TXMUX_SCAN_REG3		
typedef union {
	struct {
		uint8_t TXMUX_SCAN2_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN_REG3_t;
__xdata __at( 0x1058 ) volatile ANA_TXMUX_SCAN_REG3_t ANA_TXMUX_SCAN_REG3;
#define reg_TXMUX_SCAN2_LANE_7_0  ANA_TXMUX_SCAN_REG3.BF.TXMUX_SCAN2_LANE_7_0

// 0x17	ANA_TXMUX_SCAN_REG4		
typedef union {
	struct {
		uint8_t TXMUX_SCAN3_LANE_7_0                     : 8;	/*  [7:0]       r 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN_REG4_t;
__xdata __at( 0x105c ) volatile ANA_TXMUX_SCAN_REG4_t ANA_TXMUX_SCAN_REG4;
#define reg_TXMUX_SCAN3_LANE_7_0  ANA_TXMUX_SCAN_REG4.BF.TXMUX_SCAN3_LANE_7_0

// 0x18	ANA_TXMUX_SCAN_REG5		
typedef union {
	struct {
		uint8_t TXMUX_SCAN3_LANE_9_8                     : 2;	/*  [1:0]       r 2'h0*/
		uint8_t TXMUX_SCAN2_LANE_9_8                     : 2;	/*  [3:2]       r 2'h0*/
		uint8_t TXMUX_SCAN1_LANE_9_8                     : 2;	/*  [5:4]       r 2'h0*/
		uint8_t TXMUX_SCAN0_LANE_9_8                     : 2;	/*  [7:6]       r 2'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} ANA_TXMUX_SCAN_REG5_t;
__xdata __at( 0x1060 ) volatile ANA_TXMUX_SCAN_REG5_t ANA_TXMUX_SCAN_REG5;
#define reg_TXMUX_SCAN3_LANE_9_8  ANA_TXMUX_SCAN_REG5.BF.TXMUX_SCAN3_LANE_9_8
#define reg_TXMUX_SCAN2_LANE_9_8  ANA_TXMUX_SCAN_REG5.BF.TXMUX_SCAN2_LANE_9_8
#define reg_TXMUX_SCAN1_LANE_9_8  ANA_TXMUX_SCAN_REG5.BF.TXMUX_SCAN1_LANE_9_8
#define reg_TXMUX_SCAN0_LANE_9_8  ANA_TXMUX_SCAN_REG5.BF.TXMUX_SCAN0_LANE_9_8

// 0x19	TX_RSVD_REG1		
typedef union {
	struct {
		uint8_t TX_RSVD1_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG1_t;
__xdata __at( 0x1064 ) volatile TX_RSVD_REG1_t TX_RSVD_REG1;
#define reg_TX_RSVD1_LANE_7_0  TX_RSVD_REG1.BF.TX_RSVD1_LANE_7_0

// 0x1a	TX_RSVD_REG2		
typedef union {
	struct {
		uint8_t TX_RSVD2_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG2_t;
__xdata __at( 0x1068 ) volatile TX_RSVD_REG2_t TX_RSVD_REG2;
#define reg_TX_RSVD2_LANE_7_0  TX_RSVD_REG2.BF.TX_RSVD2_LANE_7_0

// 0x1b	TX_RSVD_REG3		
typedef union {
	struct {
		uint8_t TX_RSVD3_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG3_t;
__xdata __at( 0x106c ) volatile TX_RSVD_REG3_t TX_RSVD_REG3;
#define reg_TX_RSVD3_LANE_7_0  TX_RSVD_REG3.BF.TX_RSVD3_LANE_7_0

// 0x1c	TX_RSVD_REG4		
typedef union {
	struct {
		uint8_t TX_RSVD4_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG4_t;
__xdata __at( 0x1070 ) volatile TX_RSVD_REG4_t TX_RSVD_REG4;
#define reg_TX_RSVD4_LANE_7_0  TX_RSVD_REG4.BF.TX_RSVD4_LANE_7_0

// 0x1d	TX_RSVD_REG5		
typedef union {
	struct {
		uint8_t TX_RSVD5_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG5_t;
__xdata __at( 0x1074 ) volatile TX_RSVD_REG5_t TX_RSVD_REG5;
#define reg_TX_RSVD5_LANE_7_0  TX_RSVD_REG5.BF.TX_RSVD5_LANE_7_0

// 0x1e	TX_RSVD_REG6		
typedef union {
	struct {
		uint8_t TX_RSVD6_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG6_t;
__xdata __at( 0x1078 ) volatile TX_RSVD_REG6_t TX_RSVD_REG6;
#define reg_TX_RSVD6_LANE_7_0  TX_RSVD_REG6.BF.TX_RSVD6_LANE_7_0

// 0x1f	TX_RSVD_REG7		
typedef union {
	struct {
		uint8_t TX_RSVD7_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG7_t;
__xdata __at( 0x107c ) volatile TX_RSVD_REG7_t TX_RSVD_REG7;
#define reg_TX_RSVD7_LANE_7_0  TX_RSVD_REG7.BF.TX_RSVD7_LANE_7_0

// 0x20	TX_RSVD_REG8		
typedef union {
	struct {
		uint8_t TX_RSVD8_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG8_t;
__xdata __at( 0x1080 ) volatile TX_RSVD_REG8_t TX_RSVD_REG8;
#define reg_TX_RSVD8_LANE_7_0  TX_RSVD_REG8.BF.TX_RSVD8_LANE_7_0

// 0x21	TX_RSVD_REG9		
typedef union {
	struct {
		uint8_t TX_RSVD9_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG9_t;
__xdata __at( 0x1084 ) volatile TX_RSVD_REG9_t TX_RSVD_REG9;
#define reg_TX_RSVD9_LANE_7_0  TX_RSVD_REG9.BF.TX_RSVD9_LANE_7_0

// 0x22	TX_RSVD_REG10		
typedef union {
	struct {
		uint8_t TX_RSVD0_LANE_7_0                        : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_RSVD_REG10_t;
__xdata __at( 0x1088 ) volatile TX_RSVD_REG10_t TX_RSVD_REG10;
#define reg_TX_RSVD0_LANE_7_0  TX_RSVD_REG10.BF.TX_RSVD0_LANE_7_0

// 0x23	TX_CAL_REG0		Digital tx Calibration Register 0
typedef union {
	struct {
		uint8_t RESERVED_0                               : 1;	/*      0     r/w 1'h0*/
		uint8_t RESERVED_1                               : 1;	/*      1     r/w 1'h0*/
		uint8_t RESERVED_2                               : 1;	/*      2     r/w 1'h0*/
		uint8_t RESERVED_3                               : 1;	/*      3     r/w 1'h0*/
		uint8_t TX_DIG_CAL_CLK_RST_BOT_LANE              : 1;	/*      4     r/w 1'h0*/
		uint8_t TX_DIG_CAL_CLK_EN_BOT_LANE               : 1;	/*      5     r/w 1'h1*/
		uint8_t TX_DIG_CAL_CLK_RST_TOP_LANE              : 1;	/*      6     r/w 1'h0*/
		uint8_t TX_DIG_CAL_CLK_EN_TOP_LANE               : 1;	/*      7     r/w 1'h1*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_CAL_REG0_t;
__xdata __at( 0x108c ) volatile TX_CAL_REG0_t TX_CAL_REG0;
#define reg_TX_DIG_CAL_CLK_RST_BOT_LANE  TX_CAL_REG0.BF.TX_DIG_CAL_CLK_RST_BOT_LANE
#define reg_TX_DIG_CAL_CLK_EN_BOT_LANE  TX_CAL_REG0.BF.TX_DIG_CAL_CLK_EN_BOT_LANE
#define reg_TX_DIG_CAL_CLK_RST_TOP_LANE  TX_CAL_REG0.BF.TX_DIG_CAL_CLK_RST_TOP_LANE
#define reg_TX_DIG_CAL_CLK_EN_TOP_LANE  TX_CAL_REG0.BF.TX_DIG_CAL_CLK_EN_TOP_LANE

// 0x24	TX_CAL_REG1		Digital tx Calibration Register 1
typedef union {
	struct {
		uint8_t TX_DIG_CAL2M_DIV_TOP_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_CAL_REG1_t;
__xdata __at( 0x1090 ) volatile TX_CAL_REG1_t TX_CAL_REG1;
#define reg_TX_DIG_CAL2M_DIV_TOP_LANE_7_0  TX_CAL_REG1.BF.TX_DIG_CAL2M_DIV_TOP_LANE_7_0

// 0x25	TX_CAL_REG2		Digital tx Calibration Register 2
typedef union {
	struct {
		uint8_t TX_DIG_CAL2M_DIV_BOT_LANE_7_0            : 8;	/*  [7:0]     r/w 8'h9c*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_CAL_REG2_t;
__xdata __at( 0x1094 ) volatile TX_CAL_REG2_t TX_CAL_REG2;
#define reg_TX_DIG_CAL2M_DIV_BOT_LANE_7_0  TX_CAL_REG2.BF.TX_DIG_CAL2M_DIV_BOT_LANE_7_0

// 0x26	TX_CAL_REG3		Digital TX Calibration Register 3
typedef union {
	struct {
		uint8_t RESERVED_0                               : 4;	/*  [3:0]     r/w 4'h0*/
		uint8_t TX_DIG_TESTBUS_SEL_BOT_LANE_3_0          : 4;	/*  [7:4]     r/w 4'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_CAL_REG3_t;
__xdata __at( 0x1098 ) volatile TX_CAL_REG3_t TX_CAL_REG3;
#define reg_TX_DIG_TESTBUS_SEL_BOT_LANE_3_0  TX_CAL_REG3.BF.TX_DIG_TESTBUS_SEL_BOT_LANE_3_0

// 0x27	TX_CAL_REG4		Digital TRX Calibration Register 4
typedef union {
	struct {
		uint8_t TRX_DIG_SCAN_FF_TOP_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_CAL_REG4_t;
__xdata __at( 0x109c ) volatile TX_CAL_REG4_t TX_CAL_REG4;
#define reg_TRX_DIG_SCAN_FF_TOP_LANE_7_0  TX_CAL_REG4.BF.TRX_DIG_SCAN_FF_TOP_LANE_7_0

// 0x28	TX_CAL_REG5		Digital TRX Calibration Register 5
typedef union {
	struct {
		uint8_t TRX_DIG_SCAN_FF_BOT_LANE_7_0             : 8;	/*  [7:0]     r/w 8'h0*/
	} BF;
	struct{uint8_t B0:8;uint8_t B1:8;uint8_t B2:8;uint8_t B3:8;}BT;
	uint32_t VAL;
} TX_CAL_REG5_t;
__xdata __at( 0x10a0 ) volatile TX_CAL_REG5_t TX_CAL_REG5;
#define reg_TRX_DIG_SCAN_FF_BOT_LANE_7_0  TX_CAL_REG5.BF.TRX_DIG_SCAN_FF_BOT_LANE_7_0

#endif
