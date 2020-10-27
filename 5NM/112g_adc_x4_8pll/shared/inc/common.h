/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file common.h
* \purpose Definitions, Declaration
* \History
*	10/13/2015 Heejeong Ryu		Initial 
*/
#ifndef COMMON_H
#define COMMON_H

#ifndef DSP_BUILD
#include <compiler.h>
#include "sfr_r8051.h"
#else
#define __xdata
#define __code const
#define __at(a) 
#define __volatile volatile
#define BANKING_CTRL
typedef unsigned char __bit;
#endif

//#include "cdr_dfe_scheme.h"
// code banking controls
// Comment out USE_BANKING definition to use 64k version of FW. makefile needs adjustment, too.
// #define USE_BANKING
#ifdef USE_BANKING
#define BANKING_CTRL __banked
#pragma constseg CSEG
#else
#define BANKING_CTRL
#endif

typedef unsigned char uint8_t;
typedef unsigned int  uint16_t;
typedef unsigned long uint32_t;

typedef signed char   int8_t;
typedef signed int    int16_t;
typedef signed long   int32_t;

typedef unsigned char bool;
typedef __bit         BIT;
#define at			  __at

// compile options
#include "config.h"
#include "drv_phy_reg.h"

#define ANA_TRX_LANE_BASE    	0x0000
#define ANA_DFEE_LANE_BASE   	0x0200
#define ANA_DFEO_LANE_BASE   	0x0300
#define TX_LANE_BASE         	0x2000
#define RX_LANE_BASE         	0x2100
#define MCU_LANE_BASE        	0x2200
#define PHYTEST_LANE_BASE    	0x2300
#define RX_EQ_LANE_BASE      	0x2400
#define TX_TRAIN_IF_LANE_BASE	0x2600
#define PIPE_LANE_BASE       	0x4000
#define XDAT_LANE_BASE       	0x6000
#define CDS_LANE_BASE       	0x6100
#define ANA_CMN_BASE         	0x8000
#define TX_CMN_BASE          	0xA000
#define RX_CMN_BASE          	0xA100
#define MCU_CMN_BASE         	0xA200
#define CMN_CMN_BASE         	0xA300
#define PIPE_CMN_BASE        	0xC000
#define XDAT_CMN_BASE        	0xE600 

#define XDAT_BASE				0x6000
#define MAXXDATLANE				0x800 //max allocated 0x800
#define MAXXDATCMN				0x50 

//#define SPDTBL_XDAT_CMN_BASE	0xe000
//#define SPDTBL_XDAT_CMN_BASE    0x6500
#define SPDTBL_XDAT_CMN_BASE    0x6700
//#define SPDTBL_XDAT_LANE_BASE	0x6300
#define SPDTBL_XDAT_LANE_BASE 0x6820

#define PLL_TBL_MAX 21
//#define RINGPLL_TBL_MAX 4
#define GEN_TBL_MAX 38

#define _SATA
#define _GEN 	0

//phy_mode define
#define SATA	0
#define SAS		1
#define PCIE	3
#define SERDES  4
#define USB		5

// phy register list
#include "phy_reg_c_ana_cmn_cal_cmn.h"
#include "phy_reg_c_ana_cmn_cmn.h"
#include "phy_reg_c_ana_pll_rs_cal_lane.h"
#include "phy_reg_c_ana_pll_rs_lane.h"
#include "phy_reg_c_ana_pll_ts_cal_lane.h"
#include "phy_reg_c_ana_pll_ts_lane.h"
#include "phy_reg_c_ana_rx_lane.h"
#include "phy_reg_c_ana_trx_cal_bot_lane.h"
#include "phy_reg_c_ana_trx_ivref_lane.h"
#include "phy_reg_c_ana_tx_lane.h"

#ifdef DRV_N5P_REG_LIST_V1
#include "phy_reg_c_ana_tx_cal_bot_lane.h"
#include "phy_reg_c_ana_rx_cal_bot_lane.h"
#include "phy_reg_c_ana_rx_cal_top_lane.h"
#else
#include "phy_reg_c_ana_trx_cal_top_lane.h"
#endif


#ifdef DRV_N5P_REG_LIST_V1
#include "phy_reg_c_cmn_if.h"
#include "phy_reg_c_pll_rs_if_lane.h"
#include "phy_reg_c_pll_ts_if_lane.h"
#include "phy_reg_c_rx_if_lane.h"
#include "phy_reg_c_tx_if_lane.h"
#endif

#if 0
#include "reg_interface.h"
#endif

#include "phy_reg_c_cds_lane.h"
#include "phy_reg_c_cmn_cmn.h"
#include "phy_reg_c_mcu_cmn.h"
#include "phy_reg_c_mcu_lane.h"
#include "phy_reg_c_pll_rs_lane.h"
#include "phy_reg_c_pll_ts_lane.h"
#include "phy_reg_c_rx_adc_if_lane.h"
#include "phy_reg_c_rx_dp_lane.h"
#include "phy_reg_c_rx_dtl_lane.h"
#include "phy_reg_c_rx_eq_mon_lane.h"
#include "phy_reg_c_rx_eq_top_lane.h"
#include "phy_reg_c_rx_lane.h"
#include "phy_reg_c_rx_skew_cal_lane.h"
#include "phy_reg_c_tx_lane.h"
#include "phy_reg_c_tx_train_if_lane.h"
#include "phy_reg_c_xdat_cmn.h"
#include "phy_reg_c_xdat_lane.h"
#include "phy_reg_def.h"

#include "train_def.h"
//#include "cdr_dfe_scheme.h"
//#include "ph_ctrl.h"
#include "driver.h"

/****************************************
 * Definitions
*****************************************/

// -- Timer delay 
#define T_p125us 1 //mininum
#define T_p25us  2
#define T_p4us   4  
#define T_p5us   5
#define T_p75us  8   
#define Tus      10  
#define T_1p5us  15
#define T_2us    20 
#define T_2p5us  25 
#define T_3us    30 
#define T_3p75us 38
#define T_4us    40
#define T_4p5us  45 
#define T_5us    50
#define T_6us    60
#define T_6p25us 63
#define T_7p5us  75
#define T_8us    80 
#define T_9us    90
#define T_10us   100
#define T_12us   120
#define T_12p5us 125
#define T_15us   150
#define T_16us   160
#define T_20us   200
#define T_25us   250
#define T_32us   320
#define T_35us   350
#define T_37p5us 375
#define T_40us   400
#define T_50us   500
#define T_62p5us 625
#define T_64us   640
#define T_100us  1000
#define T_128us  1280


/*#define TIMEOUT_DLL_CAL					1000
#define TIMEOUT_RXEOMDCC_CAL			1000
#define TIMEOUT_RXDCC_CAL				1000
#define TIMEOUT_RXIMP_CAL				1000
#define TIMEOUT_TXIMP_CAL				1000
#define TIMEOUT_TXDCC_CAL				1000
#define TIMEOUT_SQ_OFST_CAL				1000
#define TIMEOUT_SQ_THRESH_CAL			1000*/

// --
#define false	0
#define	true	1
#define _EXIT_FAIL 1
#define _EXIT_SUCCESS 0

// -- DMA 
#define DMA0	0
#define DMA1	1
#define DMA2	2
#define DMA3	3

// -- MCU CMN
#define MCU_LANE0	0
#define MCU_LANE1	1
#define MCU_LANE2	2
#define MCU_LANE3	3
#define MAX_MCU_ID	3
#define MCU_CMN		0xc0

#define mcuid						reg_MCU_ID_LANE_7_0		
#define PHY_STATUS					reg_MCU_STATUS0_LANE_31_0_b0
#define PHY_NS						reg_MCU_STATUS0_LANE_31_0_b1
#define PHY_STATUS_CMN					reg_MCU_STATUS0_CMN_31_0_b0

#define PHY_CHECK_LANE				reg_MCU_STATUS0_LANE_31_0_b2
#define PHY_CHECK_LANE0_READ		//reg_MCU_STATUS0_LANE0_31_0_b2
#define PHY_CHECK_LANE1_READ		//reg_MCU_STATUS0_LANE1_31_0_b2
#define PHY_CHECK_LANE2_READ		//reg_MCU_STATUS0_LANE2_31_0_b2
#define PHY_CHECK_LANE3_READ		//reg_MCU_STATUS0_LANE3_31_0_b2

#define PHY_INT_LANE				reg_MCU_STATUS0_LANE_31_0_b3

#define TRAIN_STATUS				reg_MCU_STATUS2_LANE_31_0_b0

#define POWERUP_SIMPLE				cmx_POWER_UP_SIMPLE_EN	
#define FAST_POWER_ON_EN			cmx_FAST_POWER_ON_EN //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x01)
#define EXT_FORCE_CAL_DONE			cmx_EXT_FORCE_CAL_DONE //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x02)
#define BYPASS_DELAY				cmx_BYPASS_DELAY_2_0 //((reg_MCU_COMMAND0_LANE_31_0_b0 & 0x1c)>>2)
#define BYPASS_POWERON_DELAY			cmx_BYPASS_POWER_ON_DELAY //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x20)
#define BYPASS_XDATA_INIT			cmx_BYPASS_XDAT_INIT //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x40)
#define BYPASS_SPDTBL_LOAD			cmx_BYPASS_SPEED_TABLE_LOAD //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x80)
#define SIMENV_ON				(cmx_BYPASS_DELAY_2_0 || cmx_BYPASS_POWER_ON_DELAY || cmx_BYPASS_XDATA_INIT || cmx_BYPASS_SPEED_TABLE_LOAD || reg_EXT_FORCE_CAL_DONE)
#define FAST_DFE_TIMER_EN			cmx_FAST_DFE_TIMER_EN
#define TRAIN_SIM_EN				cmx_TRAIN_SIM_EN
#define FORCE_CONT_CAL_SKIP			cmx_FORCE_CONT_CAL_SKIP
#define TX_TRAIN_ONLY_START			lnx_TX_TRAIN_ONLY_START_LANE

#define MOST_SIMPLE_LEVEL		1
#define NORMAL_LEVEL			0

#define DLL_PHASE_STEP	0
#define DLL_VDDA_STEP	1

#define phy_mode 					reg_PIN_PHY_MODE_RD_2_0
// --
//master control
#define SYNC_REQUEST_LANE			reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b0	
#define SYNC_STATUS_LANE1_READ		reg_MCU_STATUS1_LANE1_31_0_b0
#define SYNC_STATUS_LANE2_READ		reg_MCU_STATUS1_LANE2_31_0_b0
#define SYNC_STATUS_LANE3_READ		reg_MCU_STATUS1_LANE3_31_0_b0
#define SYNC_STATUS_AND				reg_MCU_STATUS1_AND_31_0_b0
#define SYNC_STATUS_OR				reg_MCU_STATUS1_OR_31_0_b0
#define SYNC_STATUS_LANE0_EN_READ	reg_MCU_STATUS1_LANE0_31_0_b2
#define SYNC_STATUS_LANE1_EN_READ	reg_MCU_STATUS1_LANE1_31_0_b2
#define SYNC_STATUS_LANE2_EN_READ	reg_MCU_STATUS1_LANE2_31_0_b2
#define SYNC_STATUS_LANE3_EN_READ	reg_MCU_STATUS1_LANE3_31_0_b2
#define SYNC_SATUS_PLL_OR_OFF           reg_MCU_STATUS0_CMN_31_0_b1
#define SYNC_SATUS_P2_2_P1_ON  		reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b2

//slave control
#define SYNC_STATUS_LANE			reg_MCU_STATUS1_LANE_31_0_b0
#define SYNC_REQEST_LANE_READ		reg_MCU_COMMAND_ALL0_LANE_31_0_b0
#define SYNC_STATUS_LANE_EN			reg_MCU_STATUS1_LANE_31_0_b2
#define SYNC_SATUS_PLL_OR_CHG_READ  reg_MCU_COMMAND_ALL0_LANE_31_0_b1
#define SYNC_SATUS_P2_2_P1_ON_READ	reg_MCU_COMMAND_ALL0_LANE_31_0_b2

//
#define SYNC_IDLE					0xff
#define SYNC_LINE_HOLD				reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b3
#define SYNC_LINE_HOLD_READ			reg_MCU_COMMAND_ALL0_LANE_31_0_b3

// -- 
// bitmatch syncup
#define BITMATCH_SYNC_EN			reg_MCU_STATUS1_LANE_31_0_b1

// there is a design change in this area where the mcu en is no long sufficient
// FW should use the en_lane instead
#define mcu_en0  cmx_MCU_EN_LANE0_RD //reg_PIN_PU_RD_LANE0 
#define mcu_en1  cmx_MCU_EN_LANE1_RD //reg_PIN_PU_RD_LANE1
#define mcu_en2  cmx_MCU_EN_LANE2_RD //reg_PIN_PU_RD_LANE2
#define mcu_en3  cmx_MCU_EN_LANE3_RD //reg_PIN_PU_RD_LANE3

#define MCU_INIT_DONE_LANE0	cmx_MCU_INIT_DONE_LANE0_RD
#define MCU_INIT_DONE_LANE1	cmx_MCU_INIT_DONE_LANE1_RD
#define MCU_INIT_DONE_LANE2	cmx_MCU_INIT_DONE_LANE2_RD
#define MCU_INIT_DONE_LANE3	cmx_MCU_INIT_DONE_LANE3_RD

#define MCU_SYNC_LANE0		cmx_MCU_SYNC_LANE0_RD
#define MCU_SYNC_LANE1		cmx_MCU_SYNC_LANE1_RD
#define MCU_SYNC_LANE2		cmx_MCU_SYNC_LANE2_RD
#define MCU_SYNC_LANE3		cmx_MCU_SYNC_LANE3_RD

#define CAL_DONE_LANE0		cmx_CAL_DONE_LANE0_RD
#define CAL_DONE_LANE1		cmx_CAL_DONE_LANE1_RD
#define CAL_DONE_LANE2		cmx_CAL_DONE_LANE2_RD
#define CAL_DONE_LANE3		cmx_CAL_DONE_LANE3_RD

#define RXIMP_CAL_DONE_LANE0	cmx_RXIMP_CAL_DONE_LANE0_RD
#define RXIMP_CAL_DONE_LANE1	cmx_RXIMP_CAL_DONE_LANE1_RD
#define RXIMP_CAL_DONE_LANE2	cmx_RXIMP_CAL_DONE_LANE2_RD
#define RXIMP_CAL_DONE_LANE3	cmx_RXIMP_CAL_DONE_LANE3_RD

#define TXIMP_CAL_DONE_LANE0	cmx_TXIMP_CAL_DONE_LANE0_RD
#define TXIMP_CAL_DONE_LANE1	cmx_TXIMP_CAL_DONE_LANE1_RD
#define TXIMP_CAL_DONE_LANE2	cmx_TXIMP_CAL_DONE_LANE2_RD
#define TXIMP_CAL_DONE_LANE3	cmx_TXIMP_CAL_DONE_LANE3_RD

#define VDD_CAL_DONE_LANE0	cmx_VDD_CAL_DONE_LANE0_RD
#define VDD_CAL_DONE_LANE1	cmx_VDD_CAL_DONE_LANE1_RD
#define VDD_CAL_DONE_LANE2	cmx_VDD_CAL_DONE_LANE2_RD
#define VDD_CAL_DONE_LANE3	cmx_VDD_CAL_DONE_LANE3_RD

//ctrl 
#define IDLE	0
#define WAIT	1
#define ACK		1

//
#define TRAIN_ON 0
#define NORM_ON 1
#define NO_SAVE 2

enum {
PWR,
CONT
};

enum {
BOTH_ON,
TS_ON,
RS_ON,
SWAP_BOTH_ON,
};

enum {
	SELLV_RXDLL, //RX_CLKTOP_VDD_DLL
	SELLV_RXINTP, //RX_CLKTOP_VDD_PI
	SELLV_RX_INTPEOM_DLLEOM, //RX_CLKTOP_VDD_PI_EOM
	SELLV_RX_A90_DATACLK, //RX_CLKTOP_VDD_A90
	SELLV_RX_DIV2, //RX_CLKTOP_VDD_DIV2
	SELLV_RX_SKEW_EOMCLK, //RX_CLKTOP_VDD_SKEW
	SELLV_RX_THCLK_SAMPLER, //RX_ADC_VDD_THCLK
	SELLV_RX_THDRV, //RX_ADC_VDD_THDRV
	SELLV_RX_CTLE, //RX_CTLE_VDDL
	SELLV_RX_CLKTOPVDDL, //RX_CLKTOP_VDDL
	SELLV_TXDATA,  //VDDA_TXDATA
	SELLV_TXCLK  //VDDA_TXCLK
};

#define RX_CLKTOP_VDD_DLL	0x0001
#define RX_CLKTOP_VDD_PI	0x0002
#define RX_CLKTOP_VDD_PI_EOM	0x0004
#define RX_CLKTOP_VDD_A90	0x0008
#define RX_CLKTOP_VDD_DIV2	0x0010
#define RX_CLKTOP_VDD_SKEW	0x0020
#define RX_ADC_VDD_THCLK	0x0040
#define RX_ADC_VDD_THDRV	0x0080
#define RX_CTLE_VDDL		0x0100
#define RX_CLKTOP_VDDL		0x0200
#define VDDA_TXDATA		0x0400
#define VDDA_TXCLK		0x0800
#define MAX_NUM_REGS		12

#define TX_REGULATORS		0x0c00
#define RX_REGULATORS		0x03ff
#define RX_IVREF_REGS		0x00f8 // RX_CLKTOP_VDD_A90, RX_CLKTOP_VDD_DIV2, RX_CLKTOP_VDD_SKEW, RX_ADC_VDD_THCLK, RX_ADC_VDD_THDRV

enum {
OFST_TOP_D_E,
OFST_MID_D_E,
OFST_BOT_D_E,
OFST_TOP_D_O,
OFST_MID_D_O,
OFST_BOT_D_O,
OFST_TOP_S_E,
OFST_MID_S_E,
OFST_BOT_S_E,
OFST_TOP_S_O,
OFST_MID_S_O,
OFST_BOT_S_O,
OFST_EDGE_E,
OFST_EDGE_O
};
	
// --
enum {
CDS_DEFAULT,
CDS_SKIPCDR,
CDS_EOMADAPT,
CDS_EYECHECK,
CDS_DATAADAPT,
CDS_NORMF0D,
CDS_DATAF0D,
CDS_RXINIT,
CDS_FASTACQ,
CDS_STATUS_DATAADAPT,
};

enum {
ACCAP_CKFW,
ACCAP_REFCLK,
ACCAP_DEMUX,
ACCAP_DEMUX1
};

#define TRAIN_INIT_EN               0x000001
#define INIT_ADC_SAT_CHECK_EN       0x000002
#define SET_TX_MOD_EN               0x000004
#define TXFFE_DET_PRESET_PAM2_EN    0x000008
#define RX_BLIND_TRAIN_EN1          0x000010
#define TXFFE_DET_PRESET_PAM4_EN    0x000020
#define RX_BW_GAIN_TRAIN_EN         0x000040
#define LOCK_CDR_EN1                0x000080
#define ADC_CAL_EN                  0x000100
#define SWEEP_COARSE_CTLE_EN        0x000200
#define TXFFE_SET_PRESET_EN         0x000400
#define RX_BLIND_TRAIN_EN2          0x000800
#define LOCK_CDR_EN2                0x001000
#define TXFFE_SHAPE_BASE_EN         0x002000
#define TRX_OPT_EN                  0x004000
#define TRX_OPT_FINE_EN             0x008000
#define RX_CTLE_TUNE                0x010000
#define TRX_FINAL_TUNE              0x020000 
#define TRAIN_EXIT                  0x040000

#define MAX_TRAIN_MODULE 19

#define TX_TRAIN_OPS 0x7fdff //0000 0000 0000 0111 1111 1101 1111 1111
#define RX_TRAIN_OPS 0x741d3 //0000 0000 0000 0111 0100 0001 1101 0011

#define reset_bypass 			0x0001
#define coarse_dtl_bypass		0x0002
#define edge_eq_en				0x0008 
#define dfe_adapt_f0a_en		0x0020
#define coarse_dfe_en			0x0040 
#define coarse_f0_en			0x0080 
#define fine_dfe_en				0x0100
#define accu_dfe_en				0x0200
#ifndef NEW_CDS
#define phase_move_with_dfe_en  0x0004
#define dfe_adapt_en			0x0010
#define f0b_adapt_en			0x0400
#define f0d_adapt_en			0x0800
#endif



#define vh_eo_mode				0x1000
#define eye_check_bypass		0x2000
#define ofst_adapt_en			0x4000
#define lock_dfe_on				0x8000

enum STAGE_SET {
	INITIALIZATION_STAGE, //0
	CDR_COARSE_STATE, //1
	DFE_ADAPT_F0A_STATE,//2
	PHASE_MOVE_WITH_DFE_STATE, //3
	DFE_COARSE_ADAPT_STATE, //4
	DFE_FINE_ADAPT_STATE, //5
	RESOLUTION_ADJUST_STATE,//6
	DFE_ACCU_ADAPT_STATE, //7
	F0B_FINE_MEASURE_STATE, //8
	F0B_ACCU_MEASURE_STATE,//9
	F0D_COARSE_MEASURE_STATE, //a
	F0D_FINE_MEASURE_STATE, //b
	DFE_MAXEO_FINE_ADAPT_STATE, //c
	DFE_MAXEO_ACCU_ADAPT_STATE, //d
	EYE_WIDTH_MEASURE_STATE, //e
	EYEWIDTH_MEASURE_INIT_STATE, //f
	EYEWIDTH_LEFT_MEASURE_STATE, //10
	EYEWIDTH_RIGHT_MEASURE_STATE, //11
	PHASE_FINE_ADAPT_PER_EYEWIDTH_STATE,//12
	PHASE_ACCU_ADAPT_PER_EYEWIDTH_STATE,//13
	EYE_HEIGHT_MEASURE_STATE, //14
	EYE_HEIGHT_RESULT_STATE, //15
	EYE_DIAGRAM_CAPTURE_STATE, //16
	EYE_DIAGRAM_RESULT_STATE, //17
	OFST_ADAPT_STATE, //18
	IDLE_STATE //19
};

//
#define tag_edge_sampler_normal_en  0 //1
//#define tag_phase_adapt_temp_thr	lnx_PHASE_ADAPT_TEMP_THR_LANE_7_0 //12  //5'

// -- cds registers
#define SLICER_SMPL_ONLY	1
#define BOTH_SMPL			0

#define MAXEO_ADAPT_MODE		0
#define MMSE_ADAPT_MODE			1


//--- train interface
#define SNR_DTL_TH  lnx_TRX_TRAIN_SNR_DTL_CHECK_LANE_15_0 //288  // 9* 2^5

//error code
#define UNKNOWN_ERROR				0
#define UNSUPPORTED_PATTERN_TYPE 		1
#define RESERVED_PATTERN_TYPE			2
#define RESERVED_TTIU_BIT_SET_TO_ONE 	3   
#define MULTI_RESERVED_COE_REQ			0x10
#define RESERVED_COE_1_REQ				0x11
#define RESERVED_COE_2_REQ				0x12
#define RESERVED_COE_3_REQ				0x13

// -- macro 
#define simulation_stop()			reg_MCU_DEBUG_CMN_7_7_0 = 0xbb 
#define simulation_start()			reg_MCU_DEBUG_CMN_0_7_0 = 0xaa 


// -- Assign a bitfield to a whole byte
#define ASSIGN8(a,b) {a = 0xff & b;}
#define ASSIGN16(a,b) {a = 0xffff & b;}
#define ASSIGN32(a,b) {a = 0xffffffff & b;}

// -- structure define

typedef struct REG_tag{
	uint16_t addr;
	uint8_t lo, mask;
} REG_t;

typedef struct Status_dfe_sm_struct{ //size 62+2 bytes
	uint8_t f0_d_p_e, f0_d_n_e, f0_s_p_e, f0_s_n_e;
	uint8_t f2_d_p_e, f2_d_n_e, f2_s_p_e, f2_s_n_e;
	uint8_t f3_d_p_e, f3_d_n_e, f3_s_p_e, f3_s_n_e;
	uint8_t f1_e, f4_e, f5_e, f6_e, f7_e, f8_e, f9_e;
	uint8_t f10_e, f11_e, f12_e, f13_e, f14_e, f15_e;
	uint8_t ff0_e, ff1_e, ff2_e, ff3_e, ff4_e, ff5_e;
	uint8_t	dummy_e;
	uint8_t f0_d_p_o, f0_d_n_o, f0_s_p_o, f0_s_n_o;
	uint8_t f2_d_p_o, f2_d_n_o, f2_s_p_o, f2_s_n_o;
	uint8_t f3_d_p_o, f3_d_n_o, f3_s_p_o, f3_s_n_o;
	uint8_t f1_o, f4_o, f5_o, f6_o, f7_o, f8_o, f9_o;
	uint8_t f10_o, f11_o, f12_o, f13_o, f14_o, f15_o;
	uint8_t ff0_o, ff1_o, ff2_o, ff3_o, ff4_o, ff5_o;
	uint8_t	dummy_o;
} Status_dfe_sm_t;

typedef struct Status_dfe_2c_struct{
	int8_t f0_d_p_e, f0_d_n_e, f0_s_p_e, f0_s_n_e;
	int8_t f2_d_p_e, f2_d_n_e, f2_s_p_e, f2_s_n_e;
	int8_t f3_d_p_e, f3_d_n_e, f3_s_p_e, f3_s_n_e;
	int8_t f1_e, f4_e, f5_e, f6_e, f7_e, f8_e, f9_e;
	int8_t f10_e, f11_e, f12_e, f13_e, f14_e, f15_e;
	int8_t ff0_e, ff1_e, ff2_e, ff3_e, ff4_e, ff5_e;
	int8_t	dummy_e;
	int8_t f0_d_p_o, f0_d_n_o, f0_s_p_o, f0_s_n_o;
	int8_t f2_d_p_o, f2_d_n_o, f2_s_p_o, f2_s_n_o;
	int8_t f3_d_p_o, f3_d_n_o, f3_s_p_o, f3_s_n_o;
	int8_t f1_o, f4_o, f5_o, f6_o, f7_o, f8_o, f9_o;
	int8_t f10_o, f11_o, f12_o, f13_o, f14_o, f15_o;
	int8_t ff0_o, ff1_o, ff2_o, ff3_o, ff4_o, ff5_o;
	int8_t	dummy_o;
} Status_dfe_2c_t;

typedef union {
	struct {
	uint8_t cn1				: 2;		
	uint8_t c0				: 2;		
	uint8_t c1				: 2;		
	uint8_t reserved1 		: 2;
	uint8_t reserved2 		: 2;
	uint8_t	co_setting 		: 2;
	uint8_t reserved3 		: 1;
	uint8_t pattern_type 	: 3;
	} c;
	struct {
	uint8_t ce				: 6;		
	uint8_t reserved1 		: 2;
	uint8_t reserved2 		: 2;
	uint8_t	co_setting 		: 2;
	uint8_t reserved3 		: 1;
	uint8_t pattern_type 	: 3;
	} c1;
	uint16_t v;
} ttiu_ctrl_t;

typedef struct Status_Train_tag {
	//int8_t phase_offset; // CDR phase offset train=>reg_OS_DELTA_5_0
	uint8_t g0_index; // the index of TX FFE G0 train=>reg_TX_AMP_INDEX
	uint8_t g1_index; // the index of G1 train=>reg_TX_EMPH1_INDEX
	uint8_t gn1_index; // the index of Gn1 train=>reg_TX_EMPH0_INDEX
	uint8_t gn2_index; // the index of Gn1 train=>reg_TX_EMPH2_INDEX
	uint8_t f0a_max, f0a_max_data, f0a_max_slicer;
	uint8_t f0a, f0a_data, f0a_slicer; // value of F0A (F0 - F-1)
	uint8_t f0, f0_data, f0_slicer; 
	int8_t f1; // value of ISI taps
	int8_t f2, f2_data, f2_slicer;
	int8_t f3, f3_data, f3_slicer;
	int8_t f4;
	int8_t f5;
	int8_t f6;
	int8_t f7;
    //int8_t dc_os;
	int8_t fn1; // f0b-f0a
	uint8_t f0t;
	uint8_t eo, eo_data, eo_slicer; // value of eye open    //del f0p f0_minus_abs_fn1
	int8_t phase_offset_data; // CDR phase offset: match the global phase_offset
	int8_t phase_offset_esm; //[BIKE@20160904_16nm12G1p0]eye shape monitor phase offset: always 0 in training, do not exist in RTL code (double check). Implement in C code for algorithm understanding and potential future design change
	//int8_t phase_offset_training; //[BIKE@20160904_16nm12G1p0]: introduce a new phase offset variable which is only used to record optimal phase offest when ph_control_mode = train_ph_control_mode during training
	//int8_t phase_offset_tracking; //[BIKE@20160904_16nm12G1p0]: introduce a new phase offset variable which is only used to record optimal phase offest when ph_control_mode = 0 for tracking stage
	uint8_t level; // level of TRX FFE
	uint8_t rx_ffe_index, r, c; // the index of RX FFE = {c.r}
	uint8_t tx_preset_index; 
	bool f0a_saturate;
	bool dfe_saturate;
	bool saturated; 
	bool excellent_eo;
	bool good_eo;
	//uint8_t poor_eo;
	bool eye_check_pass; 
	uint16_t boost;
	int16_t sumFtap;
} Status_Train_t;

typedef struct Status_TX_tag{
	// Variables used for TX training state only
	//bool status_detected; // whether the TX status can be detected
	bool blind_training; // whether in TX blind training
	bool ffe_updated; // indicated whether FFE is updated(opt needs update)	
	uint8_t num_tx_loop; // the number of TX training loops
	
	bool g0_is_max; // output of get_tx_status
	bool g0_is_min; // ??? when to update
	bool g1_is_max;
	bool g1_is_min;
	bool gn1_is_max;
	bool gn1_is_min;
	bool gn2_is_max;
	bool gn2_is_min;

	bool become_worse;
	uint8_t num_count;
	bool direction;

	bool train_overboost;
	bool opt_overboost;
} Status_TX_t;

typedef struct Status_RX_tag{
	bool blind_training; // whether in RX blind training
	//uint8_t max_num_round[4]; // the number of rounds in each or test stage
	//bool ffe_training_on; // turn on/off FFE training
	//bool dc_gain_triger; // whether DC gain control is triggerd
	//bool dc_gain_done; // if DC gain control is done
	//bool dc_gain_success; // if DC gain control is successed
	//uint8_t stage; // indicate the current stage
	//uint8_t index; // the current index in a FFE training set
	//uint8_t step_size; // the step size of binary search in Stage 0
	//uint8_t num_round; // the counter of rounds in each stage
	//uint8_t max_num_round; 
	//bool step_two; // enable/disable Step two of Stage 0 or 1
	//bool step_one; // enable/disable Step one of Stage 0 or 1
	//bool c_updated; // indicate whether the value of C is updated
	//uint8_t ffe_set_index[16]; // the index of FFE training set
	//uint8_t size_ffe_set; // the length of FFEs in the training set
	bool ffe_updated; // indicate whether the index of RX FFE is updated
	//bool rc_updated;
	//uint8_t ffe_index; // the temporarily saved RX FFE index
	uint8_t ffe_index2; //  // another temporarily saved RX FFE index
	//bool set_opt_update; // indicate the global or set optimal data is used for comparison with training data
	//uint8_t direction; // the direction during Stage 0 0=- 1=+

	//bool become_worse;
	//uint8_t r_small;
	//uint8_t r_large;
	//uint8_t c_small;
	//uint8_t c_large;

	bool train_overboost;
	bool opt_overboost;
   
} Status_RX_t;	 

typedef struct Status_CDR_tag{
	uint8_t num_count ;
	bool direction; // go left in the beginning // 0=left 1=right

	uint8_t train_f0p; // value of F0P
	uint8_t opt_level;
	uint8_t opt_f0p;
	int8_t opt_phase_offset;
	int8_t ini_phase_offset;
	uint8_t ini_level;
	uint8_t ini_f0p;
	int8_t  min_phase_os, max_phase_os;
	bool become_worse;
	int8_t phase_small;
	int8_t phase_large;
	bool advanced_clock_align_converged;
}Status_CDR_t;

//typedef struct Status_NORM_tag{
	//uint8_t f0;
	//int8_t f1;
	//uint8_t f1_frac;
	//uint8_t f0d_c;
	//uint8_t f0d_l;
	//uint8_t f0d_r;
	//uint8_t  eom_ph_os_c;
	//uint8_t  eom_ph_os_l;
	//uint8_t  eom_ph_os_r;
//} Status_NORM_t;

/****************************************
 * Include Declaration
*****************************************/
// phy_state definition
#include "phy_state.h"
// global variables
#include "global.h"
/****************************************
 * Function Declaration
*****************************************/
	// -- cpu
	void cpu_init(void);

	// -- scheduler
	void scheduler(void);
	void mini_scheduler(void);

	// -- misc
	void delay(int16_t);
	void short_delay();
	void short_delay_0(void);
	void short_delay_4g(void) ;

	bool wait_for(bool *,uint16_t );
//	#ifndef SIM_ENV
#define timeout_start(a) {TR1=0;TF1=0;TMR1=~(a-1);TR1=1; timeout=0;}  //have to be a>1, unit 1 uS.
//#define timeout2_start(a) {TMR2=~(a-1); T2CON=0x7a; timeout2=0; } //62  //have to be a>1, unit 1uS/1mS.

//	#else
//#define timeout_start(a) timeout=1
//	#endif
#define timeout_stop     { TR1=0; TF1= 0; }
//#define timeout_stop2    { T2CON=0x60; TF2=0; }

// wait_for usage:
// The function will wait until the following situation
// 1. we get the done signal (done_sig gets to 1)
// 2. time has passed "timer" us
// To determine the scenario either from 1 or 2 is by the global variable "timeout".
// If timeout is 1, it means after waiting for "timer"us, it still cannot get done_sig
// If timeout is 0, it means within "timer"us, we got done_sig.
#define wait_for(done_sig,timer)    if((timer) == 0){\
                                        timeout=0;\
                                        while(!(done_sig));}\
                                    else {timeout_start(timer);\
                                        while((!(done_sig))&&(!(timeout)));\
                                        timeout_stop}

	int8_t max(int8_t a, int8_t b);
  int8_t min(int8_t a, int8_t b);
  int8_t clamp(int8_t a, int8_t ub, int8_t db);
	uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db);
	int16_t clamp16(int16_t a, int16_t ub, int16_t db);
#ifndef DSP_BUILD
  int8_t abs(int8_t a);
#endif
	int16_t abs16(int16_t a);
	int8_t reg2int(uint8_t val, uint8_t bit_width);
	// output_cnt is needed to only check valid bit(output) in the val, significant 1 to 6, same effect when larger than 6
	uint8_t conv_thermo_2_bi(uint8_t val);	
	//uint16_t u16mul (uint16_t a, uint16_t b);
#ifndef DSP_BUILD
	void memcpy(uint8_t *des, uint8_t *src, int n);
#endif
	void memset0(uint8_t *dest, int n);

	// -- Soft reset
	void rx_soft_reset(void) BANKING_CTRL;
	void rx_soft_reset_release(void) BANKING_CTRL;
	void tx_soft_reset(void) BANKING_CTRL;
	void tx_soft_reset_release(void) BANKING_CTRL;
	void trx_soft_reset(void) BANKING_CTRL;
	void trx_soft_reset_release(void) BANKING_CTRL;

	// -- power
	void PowerUp_Seq_Cal(void) BANKING_CTRL;
#define PowerUp_Seq_Simple() PowerUp_Seq_Cal()
	void PowerUp_Seq(void) BANKING_CTRL;
	void set_pwron_seq(bool val) BANKING_CTRL ;
	void clear_all_isr(void) BANKING_CTRL ;
	void clear_tx_isr(void) BANKING_CTRL ;
	void clear_rx_isr(void) BANKING_CTRL ;
	void Power_P0s_P1( void ) BANKING_CTRL;
	void drv_default_toggle(void) BANKING_CTRL;
	void drv_tx_default_toggle(void) BANKING_CTRL;
	void drv_rx_default_toggle(void) BANKING_CTRL;
	void drv_power_on_seq(void) BANKING_CTRL;
	void drv_power_on_dig_prot_dis(void) BANKING_CTRL;
	void drv_power_off_dig_prot_en(void) BANKING_CTRL;
	void Serdes_Power_Speed_Management(void) BANKING_CTRL;
	void Mini_Serdes_Power_Speed_Management(void) BANKING_CTRL;
	void Power_Slumber(void) BANKING_CTRL;
	void Power_Patial_Slumber_Rx(void) BANKING_CTRL;
	void Power_Patial_Slumber_Tx(void) BANKING_CTRL;
	void Power_Patial_Slumber_Wakeup_Rx(void) BANKING_CTRL;
	void Power_Patial_Slumber_Wakeup_Tx(void) BANKING_CTRL;
	//void Power_PLL_Control(void) ;
	void clear_xdata(void) BANKING_CTRL;
	void init_xdata(void) BANKING_CTRL;
	void xdat_lane_init(void) BANKING_CTRL;
	void cds_lane_init(void) BANKING_CTRL;
	void xdat_cmn_init(void) BANKING_CTRL;
	void set_mcu_en(void) BANKING_CTRL ;
	void init_interrupt_cfg(void) BANKING_CTRL;
	void pll_cmn_func_cfg(void) BANKING_CTRL;
	void pll_tx_lane_cfg(void) BANKING_CTRL;
	void pll_rx_lane_cfg(void) BANKING_CTRL;
	void reset_pwr_reg(void) BANKING_CTRL;
	void tx_pll_dig_off(void) BANKING_CTRL;
	void tx_pll_dig_on(void) BANKING_CTRL;
	void rx_pll_dig_off(void) BANKING_CTRL;
	void rx_pll_dig_on(void) BANKING_CTRL;
	void tx_pll_ana_off(void) BANKING_CTRL;
	void tx_pll_ana_on(void) BANKING_CTRL;
	void rx_pll_ana_off(void) BANKING_CTRL;
	void rx_pll_ana_on(void) BANKING_CTRL;
	void tx_pll_cal(void) BANKING_CTRL;
	void rx_pll_cal(void) BANKING_CTRL;
	void check_tx_pll_lock(void) BANKING_CTRL;
	void check_rx_pll_lock(void) BANKING_CTRL;
	void tx_pll_fast_cal_sel(void) BANKING_CTRL;
	void rx_pll_fast_cal_sel(void) BANKING_CTRL;
	void pll_clk_rx_ready_1(void) BANKING_CTRL;
	void pll_clk_rx_ready_0(void) BANKING_CTRL;
	void pll_clk_tx_ready_1(void) BANKING_CTRL;
	void pll_clk_tx_ready_0(void) BANKING_CTRL;
	void tx_plldcc_cal(void) BANKING_CTRL;
	void rx_plldcc_cal(void) BANKING_CTRL;
	void pll_reset_rx_0(void) BANKING_CTRL;
	void pll_reset_rx_1(void) BANKING_CTRL;
	void pll_reset_tx_0(void) BANKING_CTRL;
	void pll_reset_tx_1(void) BANKING_CTRL;
	void set_timer_cnt() BANKING_CTRL;
	void DTL_DTX_DFE_clkoff_reset_0(void) BANKING_CTRL;
	void DTL_DTX_DFE_clkoff_reset_1(void) BANKING_CTRL;
	void txlane_align(void) BANKING_CTRL;
	void pll_clk_ready_all_0(void) BANKING_CTRL;
	void pll_clk_rs_ready_0(void) BANKING_CTRL;
	void pll_clk_ts_ready_0(void) BANKING_CTRL;
	void check_pll_clk_ready(void) BANKING_CTRL;
	void check_pll_rs_clk_ready(void) BANKING_CTRL;
	void check_pll_ts_clk_ready(void) BANKING_CTRL;
	void check_pu_ivref(void) BANKING_CTRL;
	void pu_ivref_on(void) BANKING_CTRL;
	void pu_pll_on(void) BANKING_CTRL;
	void pu_pll_rs_on(void) BANKING_CTRL;
	void pu_pll_ts_on(void) BANKING_CTRL;
	void pu_pll_off(void) BANKING_CTRL;
	void pu_pll_rs_off(void) BANKING_CTRL;
	void pu_pll_ts_off(void) BANKING_CTRL;
	void pu_rx_on(void) BANKING_CTRL;
	void pu_rx_off(void) BANKING_CTRL;
	void pll_reset_all_0(void) BANKING_CTRL;
	void pll_reset_all_1(void) BANKING_CTRL;
	void pll_reset_rs_0(void) BANKING_CTRL;
	void pll_reset_rs_1(void) BANKING_CTRL;
	void pll_reset_ts_0(void) BANKING_CTRL;
	void pll_reset_ts_1(void) BANKING_CTRL;
	
	//Test power functions
	void reset_core_rx_up(void) BANKING_CTRL;
	void reset_core_rx_down(void) BANKING_CTRL;
	void reset_core_tx_up(void) BANKING_CTRL;
	void reset_core_tx_down(void) BANKING_CTRL;
	void reset_core_tx_only_up(void) BANKING_CTRL;
	void reset_core_tx_only_down(void) BANKING_CTRL;

	void pu_rx_up(void) BANKING_CTRL;
	void pu_rx_down(void) BANKING_CTRL;
	void pu_tx_up(void) BANKING_CTRL;
	void pu_tx_down(void) BANKING_CTRL;
	void pu_tx_only_up(void) BANKING_CTRL;
	void pu_tx_only_down(void) BANKING_CTRL;

	void spd_chg_rx(void) BANKING_CTRL;
	void spd_chg_tx(void) BANKING_CTRL;
	void spd_chg_tx_only(void) BANKING_CTRL;

	//RX_OFF
	void drv_rx_off_dig_prot_en(void) BANKING_CTRL;
	void drv_rx_off_seq(void) BANKING_CTRL;
	//RX_PLL_OFF:
	void drv_pll_rs_off_dig_prot_en(void) BANKING_CTRL;
	void drv_pll_rs_off_seq(void) BANKING_CTRL;
	//RX PLL slow wakeup:
	void drv_pll_rs_on_seq(void) BANKING_CTRL;
	void drv_pll_rs_on_dig_prot_dis(void) BANKING_CTRL;
	//RX slow wakeup:
	void drv_rx_on_seq(void) BANKING_CTRL;
	void drv_rx_on_dig_prot_dis(void) BANKING_CTRL;
	void drv_rx_gb_fifo_clk_toggle(void) BANKING_CTRL;

	//TX_OFF:
	void drv_tx_off_dig_prot_en(void) BANKING_CTRL;
	void drv_tx_off_seq(void) BANKING_CTRL;
	//TX_PLL_OFF:
	void drv_pll_ts_off_dig_prot_en(void) BANKING_CTRL;
	void drv_pll_ts_off_seq(void) BANKING_CTRL;
	//TX PLL slow wakeup:
	void drv_pll_ts_on_seq(void) BANKING_CTRL;
	void drv_pll_ts_on_dig_prot_dis(void) BANKING_CTRL;
	//TX slow wakeup:
	void drv_tx_on_seq(void) BANKING_CTRL;
	void drv_tx_on_dig_prot_dis(void) BANKING_CTRL;

	void drv_spd_cfg_dec(void) BANKING_CTRL;
	// -- SFT reset HW driver
	void drv_tx_sft_rst_assert(void) BANKING_CTRL;
	void drv_rx_sft_rst_assert(void) BANKING_CTRL;
	void drv_trx_sft_rst_assert(void) BANKING_CTRL;
	//CLI lab test driver
	void drv_iso_trx_pu_down (void) BANKING_CTRL ;
	void drv_iso_trx_pu_up (void) BANKING_CTRL ;
	void drv_iso_trx_sft_rst_down (void) BANKING_CTRL ;
	void drv_iso_trx_sft_rst_up (void) BANKING_CTRL ;
	void drv_iso_trx_phy_gen_chg (void) BANKING_CTRL ;


    // -- Speed Control
	void SpeedChange(void) BANKING_CTRL;
	void SpeedChange_rx(void) BANKING_CTRL;
	void SpeedChange_tx(void) BANKING_CTRL;

	void drv_rx_train_if_cfg(void) BANKING_CTRL;
	void drv_rx_eq_cfg (void) BANKING_CTRL;
	void drv_rx_func_cfg(void) BANKING_CTRL;
	void drv_rx_train_cfg (void) BANKING_CTRL;
	void drv_tx_phy_mode_cfg(void) BANKING_CTRL;
	void drv_tx_train_if_cfg(void) BANKING_CTRL;
	void drv_tx_func_cfg(void) BANKING_CTRL;
	void drv_rs_pll_cfg(void) BANKING_CTRL;
	void drv_ts_pll_cfg(void) BANKING_CTRL;

	void LoadSpeedtbl(void) BANKING_CTRL;
	void LoadSpeedtbl_rx(void) BANKING_CTRL;
	void LoadSpeedtbl_tx(void) BANKING_CTRL;
	void drv_nt_decoder_tx(void) BANKING_CTRL;
	void drv_nt_decoder_rx(void) BANKING_CTRL;
	void loadspeedtbl_lc_pll(uint8_t pll_rate_sel, uint8_t ref_clk_sel, int tsrs_sel) BANKING_CTRL;
	void loadspeedtbl_tx(void) BANKING_CTRL;
	void loadspeedtbl_rx(void) BANKING_CTRL;
	void loadspeedtbl_train() BANKING_CTRL;
	void loadspeedtbl_rx_eq_cfg() BANKING_CTRL;
	//void loadSpdtbl_4_fcnt(void) BANKING_CTRL;
	void loadSpdtbl_4_fcnt_tx(void) BANKING_CTRL;
	void loadSpdtbl_4_fcnt_rx(void) BANKING_CTRL;
	//void check_speed_table_load(void);

    // -- Calibrations
	void SpeedChange_top(void) BANKING_CTRL;
	void Calibration(void) BANKING_CTRL;
	void Calibration_rx(void) BANKING_CTRL;
	void Calibration_tx(void) BANKING_CTRL;
	void clear_spd_chg_isr(void) BANKING_CTRL;
	void rx_cal_init(void) BANKING_CTRL;
	void set_test_pattern(uint8_t pt_4t_en) BANKING_CTRL;
	void recover_test_pattern(void) BANKING_CTRL;
	void is_pause(uint8_t mask) BANKING_CTRL;
	void Cal_Cont(void) BANKING_CTRL;
	void Rx_Cal_Cont(void) BANKING_CTRL;
	void Tx_Cal_Cont(void) BANKING_CTRL;
	void turn_off_cont_cal(void) BANKING_CTRL;
	void turn_off_rx_cont_cal(void) BANKING_CTRL;
	void turn_off_tx_cont_cal(void) BANKING_CTRL;
	void tsen_on(void) ;
//	void tsen_adc_sw(bool tsen_mode) BANKING_CTRL;
	int16_t read_tsen(bool tsen) ;
	//int16_t read_tsen(void) BANKING_CTRL;
	void rs_plldcc_cal(void) BANKING_CTRL;
	void ts_plldcc_cal(void) BANKING_CTRL;
	void rs_pllvdda_cal(uint8_t enable_flag) BANKING_CTRL;
	void ts_pllvdda_cal(uint8_t enable_flag) BANKING_CTRL;
	void rs_plldcc_cal_cont(void) BANKING_CTRL;
	void ts_plldcc_cal_cont(void) BANKING_CTRL;
	void set_rs_bypass_en(uint8_t val) BANKING_CTRL;
	void set_ts_bypass_en(uint8_t val) BANKING_CTRL;
	void rs_pll_cal(void) BANKING_CTRL;
	void rs_pll_tempc_speed_adj(void) BANKING_CTRL;
	void check_rs_pll_lock(void) BANKING_CTRL;
	void rs_pll_cal_init(void) BANKING_CTRL;
	void ts_pll_cal(void) BANKING_CTRL;
	void ts_pll_tempc_speed_adj(void) BANKING_CTRL;
	void check_ts_pll_lock(void) BANKING_CTRL;
	void ts_pll_cal_init(void) BANKING_CTRL;
	void rs_pll_amp_cal(void) BANKING_CTRL;
	void ts_pll_amp_cal(void) BANKING_CTRL;
	void rs_pll_amp_cal_cont(void) BANKING_CTRL;
	void ts_pll_amp_cal_cont(void) BANKING_CTRL;
	void rs_pll_fast_cal(void) BANKING_CTRL;
	void ts_pll_fast_cal(void) BANKING_CTRL;
	void pll_temp_force_idle(void) BANKING_CTRL;
	void pll_temp_cal( void ) BANKING_CTRL;
	void spdchg_pll_fast_cal(void) BANKING_CTRL;
	void eom_align_cal(void) BANKING_CTRL;
	void set_vref_vdda_half(void) BANKING_CTRL;
	void dll_e2c_init(void) BANKING_CTRL;
	void dll_init_2nd_rnd(void) BANKING_CTRL;
	void dll_cal(void) BANKING_CTRL;
	void dll_e2c_init_cont(void) BANKING_CTRL;
	void dll_e2c_cal_cont(void) BANKING_CTRL;

	/*void dll_comp_cal( void ) BANKING_CTRL;
	void dll_gm_cal( void ) BANKING_CTRL;
	void dll_vdda_cal(  uint8_t mode ) BANKING_CTRL;
	void dll_eom_gm_cal( void ) BANKING_CTRL;
	void dll_eom_vdda_cal(  uint8_t mode ) BANKING_CTRL;
	void set_sellv_rxdll_ch(uint8_t val) BANKING_CTRL;
	uint8_t get_sellv_rxdll_ch(void) BANKING_CTRL;
	void set_sellv_rxeomdll_ch(uint8_t val) BANKING_CTRL;
	uint8_t get_sellv_rxeomdll_ch(void) BANKING_CTRL;*/
	void rxdcc_dll_cal(void) BANKING_CTRL;
	//void rxdcc_data_cal_init(void) BANKING_CTRL;
	//void rxdcc_data_cal(void) BANKING_CTRL;

	void rx_clk_cal_init(void) BANKING_CTRL;
	void rx_clk_cal(void) BANKING_CTRL;
	void rx_clk_cal_cont(void) BANKING_CTRL;

	void rx_eom_cal_init(void) BANKING_CTRL;
	void rx_eom_cal(void) BANKING_CTRL;

	void rxalign90_cal(void) BANKING_CTRL;
	void print_osft_f1p(void) BANKING_CTRL; 
	void tximp_cal(void) BANKING_CTRL;
	void rximp_cal(void) BANKING_CTRL;
	void tximp_cal_init(void) BANKING_CTRL;
	void tximp_cal_n(void) BANKING_CTRL;
	void tximp_cal_p(void) BANKING_CTRL;
	void tximp_icc_cal(void) BANKING_CTRL;
	void tximp_ext(void) BANKING_CTRL;
	void adc_cal(void) BANKING_CTRL;
	void adc_cal_cont(void) BANKING_CTRL;
	void adc_cmn_mode_cal(void) BANKING_CTRL;
	void adc_vddr_cal(void) BANKING_CTRL;

	//void txdetect_cal(void) BANKING_CTRL;
	void txdcc_cal_init(void) BANKING_CTRL;
	void txdcc_cal(void) BANKING_CTRL;
	void tx_a90_dcc_imp_cal_init(void) BANKING_CTRL;
	void txdcc_cal_cont(void) BANKING_CTRL;

	void vdd_cal_init(uint8_t vref) BANKING_CTRL;
	void vdd_cal(uint8_t vref, uint16_t mask) BANKING_CTRL;
	void set_vdd_cal(uint8_t sel, uint8_t val) BANKING_CTRL;
	uint8_t get_vdd_cal(uint8_t sel) BANKING_CTRL;
	void save_vdd_cal(uint8_t sel, uint8_t cont, uint8_t val) BANKING_CTRL;
	void vdd_cal_calen(uint8_t sel, uint8_t val ) BANKING_CTRL;
	void vdd_cal_set_pass(uint8_t sel, uint8_t val ) BANKING_CTRL;
	void vdd_cal_sel(uint8_t sel) BANKING_CTRL;
	uint8_t vdd_cal_op(uint8_t sel) BANKING_CTRL;
	void proc_cal(void) BANKING_CTRL;
	//void squelch_cal(void) BANKING_CTRL;
	void rx_sq_ofst_init(void) BANKING_CTRL;
	void rx_sq_ofst_cal(void) BANKING_CTRL;
	void rx_sq_thresh_init(void) BANKING_CTRL;
	void rx_sq_thresh_cal(void) BANKING_CTRL;

	void all_cal_ext(void) BANKING_CTRL;
	void all_cal_ext_rx(void) BANKING_CTRL;
	void all_cal_ext_tx(void) BANKING_CTRL;

	void rxclk_cal(void) BANKING_CTRL;
	//void rxeom_cal(void);
	void txalign90_dcc_cal(void) BANKING_CTRL;

	void pll_clk_ready_all_1(void) BANKING_CTRL;
	void pll_clk_rs_ready_1(void) BANKING_CTRL;
	void pll_clk_ts_ready_1(void) BANKING_CTRL;
	void pll_clk_ready_ring_1(void) BANKING_CTRL;
	//void fast_startup_mode_ring (void) ;
	void load_rx_cal_data(void) BANKING_CTRL;
	void load_tx_cal_data(void) BANKING_CTRL;
	void mcu_align_0(void) BANKING_CTRL;
	//uint8_t find_next_mcu(void) ;
	/*void enter_ringpll_reg_access(void) ;
	void exit_ringpll_reg_access(void) ;
	void ring_pll_fast_cal(void) BANKING_CTRL;
	void ring_pll_cont(void) BANKING_CTRL;
	void Edge_Sampler_Update(void) BANKING_CTRL;
	void ringpll_save(uint8_t no) BANKING_CTRL;
	void ringpll_load(uint8_t no) BANKING_CTRL;
	void ringpll_dac_fine_output(void) BANKING_CTRL;
	void pllcal_load(uint8_t no) BANKING_CTRL;
	void pllcal_save(uint8_t no) BANKING_CTRL;
	uint8_t pll_amp_dac_dec(void) BANKING_CTRL;
	uint8_t pll_amp_dac_inc(void) BANKING_CTRL;*/
	//void check_pll_lock(void); // BANKING_CTRL;
	void check_rx_pll_lock(void); // BANKING_CTRL;
	void check_tx_pll_lock(void); // BANKING_CTRL;
	//uint8_t align90_read_pd(void) BANKING_CTRL;
	//bool eom_comp_out_rd(void) BANKING_CTRL;
	//uint8_t	temp_level_todic_rd(void) BANKING_CTRL;
	//bool align90_dac_inc(void);
	//bool align90_dac_dec(void);
	//void align90_cal_update(void) BANKING_CTRL;
	void load_init_temp_table(bool rs_on) BANKING_CTRL;
	
	// -- rxinit
	void RX_Init(void);

	// -- DFE
	void dfe_adaptation(void) BANKING_CTRL;
	//void cdr_dfe_scheme(void) BANKING_CTRL;
	void dfe_fsm_run(void) BANKING_CTRL;
	void dfe_load_reset(void) BANKING_CTRL;
	void sampler_load_reset(void) BANKING_CTRL;
	void disable_all_tap_adapt(void) BANKING_CTRL;
	void DFE_Final_Calculation( void ) BANKING_CTRL;
	void level_ffe() BANKING_CTRL ;
	void get_f0a_max(void) BANKING_CTRL;
	//void get_f0d_min(void) ;
#ifndef NEW_CDS
	void dfe_load(void) BANKING_CTRL;
	void dfe_save(void) BANKING_CTRL;
#endif
	//void sampler_load(void) BANKING_CTRL;
	//void sampler_save(void) ;
	void dfe_hardware_cont_run(void) BANKING_CTRL;
	void dfe_hardware_cont_stop(void) BANKING_CTRL;
	void DFE_Oncewhile_Adapt(void) BANKING_CTRL;
	void RxFFE_ACCap(void) BANKING_CTRL;
	void enable_all_tap_adapt(void) BANKING_CTRL;
	void f0d_measure(void) BANKING_CTRL;
	void check_eye_check_pass(uint8_t) BANKING_CTRL;
	void debug_print(void) BANKING_CTRL;
	void set_slicer_data_sampler_adapt(bool flag) BANKING_CTRL;
	void set_mmse_fb_mode(void) BANKING_CTRL;

	// -- CDR phase
	void cdr_phase_update(int8_t phase);
	void phase_control_func();
	void phase_control_func_0(int8_t ph_dat, int8_t ph_esm); 
	void cdr_phase_opt_init();
	void cdr_phase_opt_end();
	void cdr_phase_maxf0p();
	void cdr_phase_midpoint();
	void cdr_phase_opt_final_processing();
	void calculatef0p();
	void phase_lookup_tracking(uint8_t step_size); 
	void phase_faststartup(void);
	bool get_dac_inc(void);
	bool get_dac_dec(void);
	void cdr_phase_opt(void);
	void cdr_phase_opt_final_processing(void);
	void advanced_clk_align(void) ;
	void set_sel_sdge_dly_tb(int8_t ph) ;
	void set_sel_sdge_dly_tb_mode3(int8_t dat) ;
	void eom_cal_control(void);
	void print_ph_ctrl_status(void) ;
	uint8_t get_f0d_data(void) BANKING_CTRL;
	uint8_t get_f0d_slicer(void) BANKING_CTRL;
	void cdr_dfe_init(void) BANKING_CTRL;

	// -- Training 
	void TRX_Train(void);
	void trx_train_one_time(void);
	void train_status_reset(void);
	void opt2train(void) ;
	void train2opt() ;
	void update_opt_trx_ffe();
	void trx_train_init(void) ;
	void trx_train_control(void) ;
	void trx_train_end();
	void dfe_cdr_phase_opt(void);
	void gain_train(void);
	void sq_auto_train_enable(void) ;
	void prbs_checker_init (void);
	void prbs_checker_ber (void);
	void load_clte_from_spt(void);
	void cds_prot(void);
	uint8_t skew_prot(void);
	void train_init(void);
	uint16_t mse_mnt_ave(bool dtl_sel, uint8_t Nave);
	int argmax(uint16_t *alist);
	void ctle_grid_search(uint8_t cds_mode); 
	void init_adc_sat_check(void);
	uint8_t trx_train_txffe_det_preset(void);
	void trx_train_txffe_set_preset(uint8_t preset_num);
	bool txffe_gradient_base_train(int8_t * gradient);
	void trx_opt(void);
	void ctle_walk(int8_t s_ctle_R, int8_t s_ctle_C, int8_t s_ctle_GC);
	void trx_opt_fine(void);
	void trx_final_tune(void);
	void train_end(void);
	void fft_dtl_phase_delay(void);
	bool train_pass_check(void);
	void ctle_tune_GC_mid(void);
	void smooth_ctrl_opt(uint8_t reg_idx, uint8_t snr_th, uint8_t ctrl_start, uint8_t ctrl_stop, int8_t step);
	void ctle_tune_cur(void);
	void trx_train_top(void);
	//bool set_single_TXFFE_incdec(int8_t step, uint8_t tap);	
	int8_t set_TXFFE_tap(uint8_t tap, int8_t dir);
	void adc_sig_mnt(uint8_t adc_th1, uint8_t adc_th2);
	bool rx_lr_sr_bw_gain_train(void) BANKING_CTRL;
	void rx_blind_train(void);
	void set_gain_coarse(int8_t signed_ctle_GC);
	void set_ctle(int8_t signed_ctle_R, int8_t signed_ctle_C);
	void set_dp_lp(uint8_t num_set);
	void set_dp_hp(uint8_t num_set);
	int8_t ctle_C_incdec(int8_t step, bool iscode);
	int8_t ctle_R_incdec(int8_t step);
	int8_t ctle_gain_coarse_incdec(int8_t step);
	// -- RX training
	void rx_train(void);
	void rx_train_dummy(void) ;
	void ffe_cap_final_adjust(void) ;
	void Set_Rx_FFE(uint8_t, uint8_t);
	void rx_ffe_train(void);
	void RX_FFE_Comparision();
	void set_train(void);
	void ffe_res_temp_adjust(void) ;
	void ffe_res2_adjust(void) ;

	// -- TX training
	void set_lms_continuous(void);
	void disable_lms_continuous(void);
	void tx_train(void);
	void tx_train_dummy(void) ;
	void tx_reset(uint8_t index);
	void set_TXFFE_preset(uint8_t index);
	void tx_train_initial();
	void tx_train_end();
	void tx_train_control();
	void tx_blind_train();
	void tx_ffe_train();
	void tx_g0_train();
	void tx_gn1_train();
	void tx_g1_train();
	void g1n1_maxf0t(bool HOLD, uint8_t X, uint8_t* IDX, bool* IS_MIN, bool* IS_MAX, void(* update_g)(int8_t));
	void g1n1_midpoint(bool HOLD, uint8_t X, uint8_t* IDX, bool* IS_MIN, bool* IS_MAX, void(* update_g)(int8_t));
	//void compare_gx(bool arg, uint8_t th, int8_t g);
	void compare_g0(void);
	//void compare_gn1();
	//void compare_g1();
	void compare_g1n1(uint8_t X);
	void compare_tx_preset();
	bool update_g0(int8_t update); 
	bool update_gn1(int8_t update);
	bool update_g1(int8_t update);
	bool update_gn2(int8_t update);
	void txffe_shape_base_train(void);
	void set_tx_modulation(uint8_t ctrl_pat);
	
	// -- train if
	void train_if_init() ;
	void set_train_comp() ;
	//void remote_ctrl(void);
	//uint8_t remote_check_minmax(void) ;
	void local_pam2_tx_minmax_check(void) ;
	//void run_tx_ffe_preset( uint8_t inx);
	//void check_min_max(void);
	void trainif_init(void);
	void frame_marker_ready(void) ;
	void sq_wait(void) ;
	void request_local_ctrl(uint16_t dat);
	void request_local_status(uint16_t dat);
	//void Send_ctrl_to_tx(uint16_t);
	void req_local_ctrl(uint8_t s, uint8_t c1, uint8_t c0, uint8_t cn1, uint8_t cn2, uint8_t cn3, uint8_t ctrl_pat);
	 
	// -- Real Time Phase Adapt
	void eom_phase_update( int16_t eom_dpher ) ;
#ifndef NEW_CDS
	void move_eom_phase(int16_t update_ph) ;
#endif
	#define eom_ui_align()	EOM_clock_analog_align()
	void Phase_Adaptation(void);
	//void Set_Eye_check_cnt_vote( uint8_t stage);
	void Init_Phase_Adapt(void);
	void EOM_Clock_Alignment(void);
	void Data_EOM_Align90_Adapt_EyeHeihgtMode(void);
	void Data_EOM_Align90_Adapt_EyeWidthMode(void);
	void Data_Path_DFE_Adapt(void);
	void EOM_clock_DFE_Adapt(void);
	void F0d_measurement(void);
	void EOM_clock_analog_align(void);

	void align90ee_ref_adapt( bool tracking_mode_en );
	//void align90ee_ref_adapt( void );
	
	// -- eom
	void Check_EOM_Stage_fmExt(void);
	
	// -- UART
	#ifdef _LAB
	#define Prompt()   		Puts("\r\n>")
	#define DBG_Printf		Printf
	#define DBG_PS			Printf
	#else
	#define Prompt()
	#define DBG_Printf(fmt, ...)
	#define DBG_PS
	#endif
	#define UART_RX_BUF_MAX		30
	void Printf(const char *fmt, ... );
	void uart_tx(uint8_t tx_buf);
	uint8_t uart_rx(void);
	bool uart_rx_ready(void);
#ifndef DSP_BUILD
	void putchar(uint8_t x);
#endif
	void Puts(char* s);
	void uart_monitor(void);
	
	// -- test
	void cli_monitor(void);

    void drv_mse_run() ;
    void drv_mse_init();
    void drv_mse_start();
    void drv_mse_read();
    void drv_mse_done_int();
    void drv_mse_high_int();
    void drv_mse_low_int();
    void drv_mse_exit();

    int16_t drv_eom_chest_wa(void) BANKING_CTRL;
    bool check_eye(void) BANKING_CTRL;
    void drv_eom_prepare(void) BANKING_CTRL;
    void drv_eom_align_adc00(void) BANKING_CTRL;
    void drv_eom_move_phase(int16_t update_ph) BANKING_CTRL;
    void drv_eom_set_recon_flt(void) BANKING_CTRL;
    void drv_eom_exit(void) BANKING_CTRL;
    int16_t drv_eom_chest(void) BANKING_CTRL;

#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
    void drv_command_interface(void) BANKING_CTRL;
    void drv_cmd_pm_spd(void) BANKING_CTRL;
    void drv_cmd_reg_access(void) BANKING_CTRL;
    void drv_cmd_datapath(void) BANKING_CTRL;    
#endif

	// snr appro
	uint16_t snr_approx(uint16_t mse);
//IPDOC AUTOGEN functions
void pll_amp_rs(void) BANKING_CTRL;
void pll_amp_rs_cont(void) BANKING_CTRL;
void pll_amp_ts(void) BANKING_CTRL;
void pll_amp_ts_cont(void) BANKING_CTRL;
void pll_dcc_vdd_rs(void) BANKING_CTRL;
void pll_dcc_vdd_rs_cont(void) BANKING_CTRL;
void pll_dcc_vdd_ts(void) BANKING_CTRL;
void pll_dcc_vdd_ts_cont(void) BANKING_CTRL;
void pll_tempc_rs_cont(void) BANKING_CTRL;
void pll_tempc_ts_cont(void) BANKING_CTRL;
void pll_vdd_freq_rs(void) BANKING_CTRL;
void pll_vdd_freq_ts(void) BANKING_CTRL;
void trx_ivref_vddr_cont(void) BANKING_CTRL;
void trx_ivref_vddr_rx_1st(void) BANKING_CTRL;
void trx_ivref_vddr_tx(void) BANKING_CTRL;
void tx_align90_dcc(void) BANKING_CTRL;
void tx_align90_dcc_imp_cont(void) BANKING_CTRL;
void tx_imp(void) BANKING_CTRL;
void tx_tempc(void) BANKING_CTRL;

    // 32bit us: overflow at 4294.96s
    void timer2_init() BANKING_CTRL;
    uint32_t get_time() BANKING_CTRL;

    // Users make sure timer_index<MAX_TIMERS; Modules can share timer if they will not overlap with each other
    // !!!Please use explicit type conversion when passing duration (uint32_t, L)!!!
    void timeout2_start(uint8_t timer_index, uint32_t duration) BANKING_CTRL;
    // Start timer2. Same as running a 1us timeout2.
    #define timer2_start(a) timeout2_start((a),1L)
    uint8_t timeout2_check(uint8_t timer_index) BANKING_CTRL;
    uint32_t timer2_check(uint8_t timer_index) BANKING_CTRL;
    #define timeout2_running(a) (timeout2_timers[a].duration != 0)
    // Also record elapsed time
    void timeout2_stop(uint8_t timer_index) BANKING_CTRL;
    #define timer2_stop(a) timeout2_stop(a)`
#endif //COMMON_H
