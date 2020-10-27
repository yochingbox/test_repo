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
//#define USE_BANKING
#ifdef USE_BANKING
#define BANKING_CTRL __banked
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

#define ANA_TRX_LANE_BASE    	0x0000
#define ANA_DFEE_LANE_BASE   	0x0200
#define ANA_DFEO_LANE_BASE   	0x0300
#define TX_LANE_BASE         	0x2000
#define RX_LANE_BASE         	0x2100
#define MCU_LANE_BASE        	0x2200
#define PHYTEST_LANE_BASE    	0x2300
#define RX_EQ_LANE_BASE      	0x2400

#ifdef _12FFC_COMPHY_112G_X4_R1P2
#define TX_TRAIN_IF_LANE_BASE	0x2C00
#define TX_IF_LANE_BASE         0x2E00
#define RX_IF_LANE_BASE         0x2F00
#else
#define TX_TRAIN_IF_LANE_BASE	0x2600
#endif

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
#define SPDTBL_XDAT_CMN_BASE    0x6500
//#define SPDTBL_XDAT_LANE_BASE	0x6300
#define SPDTBL_XDAT_LANE_BASE 0x6620

#define LC_SIZE 32
#define RING_SIZE 36
#define GEN_SIZE 80

#define _SATA
#define _GEN 	0

//phy_mode define
#define SATA	0
#define SAS		1
#define PCIE	3
#define SERDES  4
#define USB		5

// phy register list
/*#include "phy_reg_c_ana_trx_top_lane.h"
#include "phy_reg_c_ana_trx_bot_lane.h"
#include "phy_reg_c_ana_dfee_top_lane.h" 
#include "phy_reg_c_ana_dfee_bot_lane.h" 
#include "phy_reg_c_ana_dfeo_top_lane.h" 
#include "phy_reg_c_ana_dfeo_bot_lane.h" 
#include "phy_reg_c_ana_cmn_top.h" 
#include "phy_reg_c_ana_cmn_bot.h"*/ 

#include "phy_reg_c_an_lane.h"

#include "phy_reg_c_ana_trx_lane.h"
//#include "phy_reg_c_ana_cmn.h"

#ifndef DEVELOP_TEMP
#include "phy_reg_c_pipe_lane.h"
#include "phy_reg_c_cds_lane.h"
#include "phy_reg_c_pipe_cmn.h"
#include "reg_interface.h"
// train parameter define
#include "train_def.h"
#endif

#include "phy_reg_def.h"
#include "phy_reg_c_ana_dfee_lane.h" 
#include "phy_reg_c_ana_dfeo_lane.h" 

#include "phy_reg_c_tx_lane.h" 
#include "phy_reg_c_rx_lane.h" 

#ifdef _12FFC_COMPHY_112G_X4_R1P2
	#include "phy_reg_c_tx_if_lane.h" 
	#include "phy_reg_c_rx_if_lane.h" 
#endif

#include "phy_reg_c_mcu_lane.h" 
#include "phy_reg_c_phytest_lane.h" 
#include "phy_reg_c_rx_eq_lane.h" 
#include "phy_reg_c_xdat_lane.h" 

#include "phy_reg_c_tx_cmn.h" 
#include "phy_reg_c_rx_cmn.h"
#include "phy_reg_c_mcu_cmn.h" 
#include "phy_reg_c_cmn_cmn.h" 

#ifdef _12FFC_COMPHY_112G_X4_R1P2
	#include "phy_reg_c_cmn_if.h" 
#endif

#include "phy_reg_c_xdat_cmn.h"
#include "phy_reg_c_tx_train_if_lane.h"

#include "phy_reg_c_ana_cmn_cal_cmn.h"
#include "phy_reg_c_ana_cmn_cmn.h"
#include "phy_reg_c_ana_dfe_p1_lane.h"
#include "phy_reg_c_ana_dfe_p2_lane.h"
#include "phy_reg_c_ana_dfe_p3_lane.h"
#include "phy_reg_c_ana_dfe_p4_lane.h"
#include "phy_reg_c_ana_trx_cal_bot_lane.h"
#include "phy_reg_c_ana_trx_cal_top_lane.h"
#include "phy_reg_c_cds_lane.h"
//#include "phy_reg_c_xdat_spd_cmn.h"
//#include "phy_reg_c_xdat_spd_lane.h"


// speed table address offset
#include "spdtb_oft.h"
#include "train_def.h"
#include "cdr_dfe_scheme.h"
//#include "ph_ctrl.h"

/****************************************
 * Definitions
*****************************************/

// -- Timer delay 
// unit: 0.1usec
#define T_p4us         4 
#define T_p5us         5 
#define T_p75us        7 
#define Tus 	       10 
#define T_1p5us        15
#define T_2us          20 
#define T_2p5us        25 
#define T_3us          30 
#define T_3p75us       37 
#define T_4us          40            
#define T_4p5us        45 
#define T_5us          50  
#define T_6us          60 
#define T_6p25us       62 
#define T_7p5us        70 
#define T_8us          80 
#define T_9us	       90          
#define T_10us         100 
#define T_12us         120 
#define T_12p5us       125             
#define T_15us         150 
#define T_16us         160 
#define T_20us         200 
#define T_25us         250 
#define T_32us         320 
#define T_37p5us       375 
#define T_40us         400 
#define T_50us         500 
#define T_62p5us       625 
#define T_100us        1000 
#define T_128us        1280 

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

#define PHY_CHECK_LANE				reg_MCU_STATUS0_LANE_31_0_b2
#define PHY_CHECK_LANE0_READ		//reg_MCU_STATUS0_LANE0_31_0_b2
#define PHY_CHECK_LANE1_READ		//reg_MCU_STATUS0_LANE1_31_0_b2
#define PHY_CHECK_LANE2_READ		//reg_MCU_STATUS0_LANE2_31_0_b2
#define PHY_CHECK_LANE3_READ		//reg_MCU_STATUS0_LANE3_31_0_b2

#define PHY_INT_LANE				reg_MCU_STATUS0_LANE_31_0_b3

#define POWERUP_SIMPLE				cmx_POWER_UP_SIMPLE_EN	
#define FAST_POWER_ON_EN			cmx_FAST_POWER_ON_EN //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x01)
#define FORCE_EXIT_CAL				cmx_EXT_FORCE_CAL_DONE //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x02)
#define BYPASS_DELAY				cmx_BYPASS_DELAY_2_0 //((reg_MCU_COMMAND0_LANE_31_0_b0 & 0x1c)>>2)
#define BYPASS_POWERON_DELAY			cmx_BYPASS_POWER_ON_DELAY //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x20)
#define BYPASS_XDAT_INIT			cmx_BYPASS_XDAT_INIT //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x40)
#define BYPASS_SPDTBL_LOAD			cmx_BYPASS_SPEED_TABLE_LOAD //(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x80)
#define SIMENV_ON				(cmx_BYPASS_DELAY_2_0 || cmx_BYPASS_POWER_ON_DELAY || cmx_BYPASS_XDAT_INIT || cmx_BYPASS_SPEED_TABLE_LOAD || reg_EXT_FORCE_CAL_DONE)
#define FAST_DFE_TIMER_EN			cmx_FAST_DFE_TIMER_EN
#define TRAIN_SIM_EN				cmx_TRAIN_SIM_EN

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
#define SYNC_SATUS_PLL_OR_CHG  		reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b1
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

#define mcu_en0  reg_MCU_EN_LANE0
#define mcu_en1  reg_MCU_EN_LANE1
#define mcu_en2  reg_MCU_EN_LANE2
#define mcu_en3  reg_MCU_EN_LANE3

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
SELLV_TXCLK,SELLV_TXDATA,SELLV_TXPRE,
SELLV_RXEOMCLK, SELLV_RXDATACLK, SELLV_RXSAMPLER
};

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
	
typedef enum {
   CDS_EN_DEFAULT,
   CDS_EN_DEFAULTPCIE,
   CDS_EN_DFEPLUSDC,
   CDS_EN_MAXEO,
   CDS_EN_PAM4_HR,
   CDS_EN_PAM2_HR,
   CDS_EN_PAM2_FR,
   CDS_EN_SKIPCDR,
   CDS_EN_EYECHECK,
   CDS_EN_EOMADAPT,
   CDS_EN_DATAADAPT,
   CDS_EN_F0D,
   CDS_EN_RXINIT,
   CDS_EN_FASTACQ,
   CDS_EN_PHASETRAIN,
   CDS_EN_PHASETRAIN2,
   CDS_EN_RESTRAIN,
   CDS_EN_RECOVER,
   CDS_EN_GAINTRAIN,
   CDS_EN_FINAL,
   CDS_EN_DEFAULT_PM,
   CDS_EN_PHASETRAIN_ADV,   
   CDS_EN_RTPCA,
   CDS_EN_TEST1,
} CDS_EN_t;

extern __code uint32_t cds_table[];

enum {
ACCAP_CKFW,
ACCAP_REFCLK,
ACCAP_DEMUX,
ACCAP_DEMUX1
};

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
#define READY		0
#define UPDATED		1
#define MIN			2
#define MAX			3
#define ST_HOLD		0
#define ST_INC			1
#define ST_DEC			2
#define ST_NO_EQ		3

#define tx_amp_max			0x0e 
#define tx_amp_min			0 	 
#define tx_emph1_max		0xf	 
#define tx_emph1_min		0 	 
#define tx_emph0_max		0xf 
#define tx_emph0_min		0 	 
#define tx_amp_offset		0 	 
#define C1_MAX				tx_emph1_max
#define C1_MIN				tx_emph1_min
#define C0_MAX				tx_amp_max
#define C0_MIN				tx_amp_min
#define CN1_MAX				tx_emph0_max
#define CN1_MIN				tx_emph0_min
#define tag_TX_VMA_PROTECT_EN	0 //todo ???1	
#define tag_TX_POWER_PROTECT_EN 0 //todo ???1 
#define tx_vma_min          4 	 //reg_TX_VMA_MIN_3_0   
#define tx_power_max		0x1c //reg_TX_POWER_MAX_5_0 

// -- macro 
#define simulation_stop()			reg_MCU_DEBUG_CMN_7_7_0 = 0xbb 
#define simulation_start()			reg_MCU_DEBUG_CMN_7_7_0 = 0xaa 

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
	uint8_t gn2_index; // the index of Gn2 train=>reg_TX_EMPH2_INDEX
	uint8_t f0a_max, f0a_max_data, f0a_max_slicer;
	uint8_t f0a, f0a_data, f0a_slicer; // value of F0A (F0 - F-1)
	uint8_t f0, f0_data, f0_slicer; 
	int8_t f1; // value of ISI taps
	int8_t f2; //, f2_data, f2_slicer;
	int8_t f3; //, f3_data, f3_slicer;
	int8_t f4;
	int8_t f5;
	int8_t f6;
	int8_t f7;
    //int8_t dc_os;
	uint8_t f0x;
	int8_t fn1; // f0b-f0a
	int8_t fn2; // f0b-f0x
#if _DBG_F0X
	int8_t f1_qr;
	int8_t fn3;
	int8_t fn4;
	int8_t fn5;
#endif
	uint8_t f0t;

    // Added by JL
    //
    uint8_t f0_tmb[NUM_PATH][NUM_DS];
    uint8_t f0x_tmb[NUM_PATH][NUM_DS];
    //int8_t fx_tmb[NUM_PATH][NUM_DS];
    uint8_t f0a_tmb[NUM_PATH][NUM_DS];
    uint8_t f0d_tmb[NUM_PATH][NUM_DS];

    int8_t f1_tmb[NUM_PATH][NUM_DS];
    int8_t fn1_tmb[NUM_PATH][NUM_DS];
    int8_t fn2_tmb[NUM_PATH][NUM_DS];
    int8_t fn3_tmb[NUM_PATH][NUM_DS];

    //

	uint8_t eo, eo_data, eo_slicer; // value of eye open    //del f0p f0_minus_abs_fn1
	int16_t phase_offset_data; // CDR phase offset: match the global phase_offset
	int8_t phase_offset_esm; //[BIKE@20160904_16nm12G1p0]eye shape monitor phase offset: always 0 in training, do not exist in RTL code (double check). Implement in C code for algorithm understanding and potential future design change
	//int8_t phase_offset_training; //[BIKE@20160904_16nm12G1p0]: introduce a new phase offset variable which is only used to record optimal phase offest when ph_control_mode = train_ph_control_mode during training
	//int8_t phase_offset_tracking; //[BIKE@20160904_16nm12G1p0]: introduce a new phase offset variable which is only used to record optimal phase offest when ph_control_mode = 0 for tracking stage
	uint8_t level; // level of TRX FFE
	uint8_t rx_ffe_index; // the index of RX FFE = {c.r}
	uint8_t tx_preset_index; 
	bool f0a_saturate;
	bool dfe_saturate;
	bool oe_saturate;
	bool saturated; 
	bool excellent_eo;
	bool good_eo;
	//uint8_t poor_eo;
	bool eye_check_pass; 
	uint16_t boost;
	int16_t sumFtap;
	uint16_t outer_eye;
	int8_t trained_fn1;
} Status_Train_t;

// Added by JL
typedef struct Status_Phase_Train_Adv_tag{
    uint8_t rx_align90_de_ref_7_0;
    uint8_t rx_align90_dd_ref_7_0;
    uint8_t rx_dcc_p1p3_ref_7_0; //dcc4
    uint8_t rx_dcc_p2p4_ref_7_0; //dcc1

    // ckpx_tune_code_lane_4_0 = da_tune - er_tune, where one of them must = 0
    int8_t ckp1_tune_code_lane_4_0;
    int8_t ckp2_tune_code_lane_4_0;
    int8_t ckp3_tune_code_lane_4_0;
    int8_t ckp4_tune_code_lane_4_0;

    uint16_t best_metric;
} Status_Phase_Train_Adv_t;

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
	int16_t opt_phase_offset;
	int16_t ini_phase_offset;
	uint8_t ini_level;
	uint8_t ini_f0p;
	int16_t  min_phase_os, max_phase_os;
	bool become_worse;
	int16_t phase_small;
	int16_t phase_large;
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

#include "ph_ctrl_adv.h"

/****************************************
 * Function Declaration
*****************************************/
	// -- cpu
	void cpu_init(void) BANKING_CTRL ;

    // -- misc
    void delay(int16_t) BANKING_CTRL;
	void short_delay() BANKING_CTRL ;
	void short_delay_0(void) BANKING_CTRL ;
//	#ifndef SIM_ENV
#define timeout_start(a) {TMR1=~(a-1);TR1=1; timeout=0;}  //have to be a>1, unit 1 uS.
//#define timeout2_start(a) {TMR2=~(a-1); T2CON=0x7a; timeout2=0; } //62  //have to be a>1, unit 1uS/1mS.
//#define timeout2_start(a) {TMR2=~(a-1); T2CON=0x62; timeout2=0; } //62  //have to be a>1, unit 1uS/1mS.

//	#else
//#define timeout_start(a) timeout=1
//	#endif
#define timeout_stop     { TR1=0; TF1= 0; }
//#define timeout_stop2    { T2CON=0x60; TF2=0; }
//#define timeout2_stop    { T2CON=0x60; TF2=0; }

	int8_t max(int8_t a, int8_t b) BANKING_CTRL;
  int8_t min(int8_t a, int8_t b) BANKING_CTRL;
  int8_t clamp(int8_t a, int8_t ub, int8_t db) BANKING_CTRL ;
	uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db) BANKING_CTRL ;
	int16_t clamp16(int16_t a, int16_t ub, int16_t db) BANKING_CTRL ;
  int8_t abs(int8_t a) BANKING_CTRL ;
	int16_t abs16(int16_t a) BANKING_CTRL ;
	uint8_t sign_abs_up(uint8_t dcc_cnt) BANKING_CTRL;
	uint8_t sign_abs_dn(uint8_t dcc_cnt) BANKING_CTRL;
	// output_cnt is needed to only check valid bit(output) in the val, significant 1 to 6, same effect when larger than 6
	BIT is_toggle_pat( uint8_t val, uint8_t output_cnt ) BANKING_CTRL;
	uint8_t fractional_noise_filter(uint8_t * cnt, uint8_t cal_out, uint8_t step_size) BANKING_CTRL ;
	uint8_t conv_thermo_2_bi(uint8_t val) BANKING_CTRL ;	
	uint16_t u16div(uint16_t x, uint16_t y) BANKING_CTRL;
	uint16_t u16mul (uint16_t a, uint16_t b) BANKING_CTRL;
	void memcpy(uint8_t *des, uint8_t *src, int n) BANKING_CTRL ;
	void memset0(uint8_t *dest, int n) BANKING_CTRL ;

	//to replace rom functions
	int8_t max_ram(int8_t a, int8_t b) BANKING_CTRL ;
	int8_t min_ram(int8_t a, int8_t b) BANKING_CTRL ;
	void delay_ram(int16_t a) BANKING_CTRL ;
	void set_test_pattern_ram(uint8_t pt_4t_en) BANKING_CTRL ;
	void recover_test_pattern_ram(void) BANKING_CTRL ;
	int16_t read_tsen_ram(void) BANKING_CTRL ;
	int8_t read_tsen_cel_ram(void) BANKING_CTRL ;
	uint16_t u16div_ram(uint16_t x, uint16_t y) BANKING_CTRL ;
	uint16_t u16mul_ram (uint16_t a, uint16_t b) BANKING_CTRL ;

	// -- power
	void PowerUp_Seq_Cal(void) BANKING_CTRL;
#define PowerUp_Seq_Simple() PowerUp_Seq_Cal()
	void PowerUp_Seq(void) BANKING_CTRL;
	void PowerUp_Seq_CMN(void) BANKING_CTRL;
	void Power_P0s_P1( void ) BANKING_CTRL;
	void Power_P1_P2( void ) BANKING_CTRL;
	void Power_P2_P1(void) BANKING_CTRL;
	void Power_P1_P0(void) BANKING_CTRL;
	void Power_P2_P0(void) BANKING_CTRL;
	//void Power_P1_P1CLKREQ(void);
	void Power_P1CLKREQ_P1(void) BANKING_CTRL;
	void Power_P0_TXDETRX(void) BANKING_CTRL;
	void Power_P1_TXDETRX(void) BANKING_CTRL;
	void Power_P2_TXDETRX(void) BANKING_CTRL;
	void P0Off_TXDETRX(void) BANKING_CTRL;
	void Power_P2_BEACON(void) BANKING_CTRL;
	void Power_Slumber( void ) BANKING_CTRL;
	void Power_Patial_Slumber( void ) BANKING_CTRL;
	void Power_Slumber_Wakeup( void ) BANKING_CTRL;
	//void Power_PLL_Control(void) ;
	void clear_xdata(void) BANKING_CTRL;
	void restore_xdata(void) BANKING_CTRL;
	void init_xdata(void) BANKING_CTRL;
	void init_reg(void) BANKING_CTRL;
	void reset_pwr_reg(void) BANKING_CTRL;
	void set_timer_cnt() BANKING_CTRL;
	void DTL_DTX_DFE_clkoff_reset_0(void) BANKING_CTRL;
	void DTL_DTX_DFE_clkoff_reset_1(void) BANKING_CTRL;
	void txlane_align(void) BANKING_CTRL;
	//void pll_clk_ready_all_0(void) BANKING_CTRL;
	#define pll_clk_ready_all_0() reg_ANA_PLL_CLK_READY_LANE = 0;
	void check_pll_clk_ready(void) BANKING_CTRL;
	void check_pu_ivref(void) BANKING_CTRL;
	void pu_ivref_on(void) BANKING_CTRL;
	void pu_pll_on(void) BANKING_CTRL;
	void pu_pll_off(void) BANKING_CTRL;
	void pu_rx_on(void) BANKING_CTRL;
	void pu_rx_off(void) BANKING_CTRL;
	
    // -- Speed Control
	void SpeedChange(void) BANKING_CTRL;
	void turn_off_cont_cal(void) BANKING_CTRL;
	void turn_on_cont_cal(void) BANKING_CTRL;
	void loadSpeedtbl(void);
	void loadspeedtbl_pll(uint8_t gen) BANKING_CTRL;
	void loadspeedtbl_ringpll(uint8_t gen) ;
	void loadspeedtbl_gen(void) BANKING_CTRL;
	void loadspeedtbl_gen_ctle(void) BANKING_CTRL;
	void loadSpdtbl_4_fcnt(void) BANKING_CTRL;
	void init_tx_fir(void) BANKING_CTRL;
	//void ringloadSpdtbl_4_fcnt(void) ;
	//void check_speed_table_load(void);
#if 0
	uint8_t get_gen_memory_index(uint8_t gen) ;
#endif

    // -- Calibrations
    void script_init() BANKING_CTRL;
	void Calibration(void) BANKING_CTRL;
	void set_test_pattern(uint8_t pt_4t_en) BANKING_CTRL;
	void recover_test_pattern(void) BANKING_CTRL;
	void Cal_Cont(void) BANKING_CTRL;
	int16_t read_tsen(void) BANKING_CTRL;
    void plldcc_cal(void) BANKING_CTRL;

    void plldcc_cal_ram(void) BANKING_CTRL;// BANKING_CTRL;

	void pll_cal(void) BANKING_CTRL;
	//void ring_pll_cal(void) BANKING_CTRL;
	void pll_cal_init( void ) BANKING_CTRL ;
	void pll_amp_cal(void) BANKING_CTRL;
	void pll_amp_cal_cont(void) BANKING_CTRL;
	void pll_temp_force_idle(void) BANKING_CTRL;
	void pll_temp_cal( void ); // BANKING_CTRL;
	void pll_fast_cal(void) BANKING_CTRL;
	void spdchg_pll_fast_cal(void) BANKING_CTRL;
	//void eom_align_cal(void) BANKING_CTRL;
	void set_vref_vdda_half(void) BANKING_CTRL;
	void dll_init(void) BANKING_CTRL;
	void dll_cal(void) BANKING_CTRL;

	void set_vref_vdda_half_ram(void) BANKING_CTRL ; //BANKING_CTRL;
	void dll_init_ram(void) BANKING_CTRL ; //BANKING_CTRL;
	void dll_cal_ram(void) BANKING_CTRL ; //BANKING_CTRL;
	void dll_init_cont_ram(void) BANKING_CTRL ;

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
	void rx_clk_cal_init_ram(void) BANKING_CTRL;
	void rx_clk_cal_ram(void) BANKING_CTRL;
	//void rxdcc_eom_cal_init(void) BANKING_CTRL;
	//void rxdcc_eom_cal(void) BANKING_CTRL;

    enum rx_eom_cal_type_t {
        RX_EOM_POWER_ON_CAL,
        RX_EOM_ON_DEMAND_CAL
    };

	void rx_eom_cal_init(void) BANKING_CTRL;
	void rx_eom_cal(void) BANKING_CTRL;
	void rx_eom_cal_ram(enum rx_eom_cal_type_t cal_type) BANKING_CTRL;

	//void rxalign90_cal(void) BANKING_CTRL;
	/*void set_sampler(int8_t val) BANKING_CTRL;
	int8_t get_sampler(void) BANKING_CTRL;
	void sampler_sel(uint8_t sw) BANKING_CTRL;*/
	void sampler_cal(void) BANKING_CTRL;
	void config_sampler_p1to3_ext(uint8_t val) BANKING_CTRL;
	void config_sampler_p2to4_ext(uint8_t val) BANKING_CTRL;
	void smplr_to_dfe_ofst_P1P3(void) BANKING_CTRL;
	void smplr_to_dfe_ofst_P2P4(void) BANKING_CTRL;
	void print_osft_f1p(void) BANKING_CTRL; 
	void tximp_cal(void) BANKING_CTRL;
	void rximp_cal(void) BANKING_CTRL;
	void tximp_cal_init(void) BANKING_CTRL;
	void tximp_cal_n(void) BANKING_CTRL;
	void tximp_cal_p(void) BANKING_CTRL;
	void tximp_ext(void) BANKING_CTRL;

	//imp_cal in RAM
	void tximp_cal_ram(void) BANKING_CTRL ; //BANKING_CTRL;
	void rximp_cal_ram(void) BANKING_CTRL ; //BANKING_CTRL;
	void tximp_cal_init_ram(void) BANKING_CTRL ; //BANKING_CTRL;
	void tximp_cal_n_ram(void) BANKING_CTRL ; //BANKING_CTRL;
	void tximp_cal_p_ram(void) BANKING_CTRL ; //BANKING_CTRL;
	void tximp_ext_ram(void) BANKING_CTRL ; //BANKING_CTRL;

	//void txdetect_cal(void) BANKING_CTRL;
	void txdcc_cal(void) BANKING_CTRL;
	void txdcc_cal_ram(void) BANKING_CTRL;
	void txdcc_pdiv_cal(void) BANKING_CTRL;
	void vdd_cal(void) BANKING_CTRL;
	//void vdd_cal_sel(uint8_t sel) BANKING_CTRL;
	//void align90_comp_cal(void) BANKING_CTRL;
	void proc_cal(void) BANKING_CTRL;
	//void squelch_cal(void) BANKING_CTRL;
	void rx_sq_ofst_init(void) BANKING_CTRL;
	void rx_sq_ofst_cal(void) BANKING_CTRL;
	void rx_sq_thresh_init(void) BANKING_CTRL;
	void rx_sq_thresh_cal(void) BANKING_CTRL;

	//the functions in RAM
	void rx_sq_ofst_init_ram(void) BANKING_CTRL;
	void rx_sq_ofst_cal_ram(void) BANKING_CTRL;
	void rx_sq_thresh_init_ram(void) BANKING_CTRL;
	void rx_sq_thresh_cal_ram(void) BANKING_CTRL;

	//bool vdd_cal_op (uint8_t sel) BANKING_CTRL;
	void all_cal_ext(void) BANKING_CTRL;	

	void dfe_f2_temp_workaround(void) BANKING_CTRL;
	//void dfe_f2_temp_workaround_switch(void) BANKING_CTRL;
	void phase_temp_adjustment(void) BANKING_CTRL;

	//void rxclk_cal(void);
	//void rxeom_cal(void);
	void txalign90_dcc_cal(void) BANKING_CTRL;

	//void pll_clk_ready_1(void) BANKING_CTRL;
	#define pll_clk_ready_1() reg_ANA_PLL_CLK_READY_LANE = 1
	void pll_clk_ready_ring_1(void) BANKING_CTRL;
	//void fast_startup_mode_ring (void) ;
	void load_cal_data_all(void) BANKING_CTRL;
	void load_cal_data_dll(void) BANKING_CTRL;
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
	void check_pll_lock(void) BANKING_CTRL;
	//uint8_t align90_read_pd(void) BANKING_CTRL;
	//bool eom_comp_out_rd(void) BANKING_CTRL;
	//uint8_t	temp_level_todic_rd(void) BANKING_CTRL;
	//bool align90_dac_inc(void);
	//bool align90_dac_dec(void);
	//void align90_cal_update(void) BANKING_CTRL;
	void load_init_temp_table(uint8_t rate) BANKING_CTRL;
	
	// -- rxinit
	void RX_Init(void) BANKING_CTRL;
	void rx_init_internal() BANKING_CTRL;

	// -- DFE
	void dfe_adaptation(void) BANKING_CTRL;
	uint16_t combine_f0(const uint8_t f0[][NUM_DS][NUM_TMB]) BANKING_CTRL;
	void combine_vref(const dfe_2c_path_t *dfe_2c, int16_t *tmb) BANKING_CTRL; 
	uint8_t max_f0(const uint8_t f0[][NUM_DS][NUM_TMB]) BANKING_CTRL; 
	int16_t combine_splr_tap(const dfe_2c_path_t *dfe_2c, uint8_t tap_id) BANKING_CTRL;
	int16_t combine_tmb_tap(const dfe_2c_path_t *dfe_2c, uint8_t tap_id) BANKING_CTRL; 
	int16_t combine_ml_tap(const dfe_2c_path_t *dfe_2c, uint8_t tap_id) BANKING_CTRL;

	void calculate_train_fn1_fx_tmb() BANKING_CTRL;
	void ffe_rl2_sel_adjust_qr() BANKING_CTRL;
	void init_xdata_at_core_reset() BANKING_CTRL;

	void debug_training() BANKING_CTRL;
	
	void TRX_Train_Cleanup() BANKING_CTRL;
	void ffe_rl2_tune_adjust_qr() BANKING_CTRL;
	
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
	//void sampler_save_mem(void) ;
	//void sampler_load_mem(void) ;
	void dfe_hardware_cont_run(void) BANKING_CTRL;
	void dfe_hardware_cont_stop(void) BANKING_CTRL;
	void DFE_Oncewhile_Adapt(void) BANKING_CTRL;
	void RxFFE_ACCap(void) BANKING_CTRL;
	void enable_all_tap_adapt(void) BANKING_CTRL;
	//void dfe_save_mem(void) ;
	//void dfe_load_mem(void) ;
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
	//uint8_t get_f0d_data(void) BANKING_CTRL;
	//uint8_t get_f0d_slicer(void) BANKING_CTRL;
	//void cdr_dfe_init(void) BANKING_CTRL;

	// -- Training 
    // Added by JL
    void print_header(void);
    //    
	void TRX_Train(void);
	void trx_train_one_time(void);
	void train_status_reset(void);
	void opt2train(void) ;
	void train2opt() ;
	void update_opt_trx_ffe();
	uint8_t update_dfe_res(bool vref_en, bool f0_en, bool isi_en);
	int8_t vote_res(uint8_t res, uint8_t res_max, int8_t low_th, int8_t high_th,
                  int8_t val, uint8_t res_min);
	void vref_train(void);
	void trx_train_init(void) ;
	void trx_train_control(void) ;
	void trx_train_end();
	void dfe_cdr_phase_opt(void);
	void gain_train(void);
	void sq_auto_train_enable(void) ;
	
	int8_t get_vref_distance();
	void vref_shift_adj() BANKING_CTRL;	
	
	void prbs_checker_init(void) BANKING_CTRL;
	void prbs_checker_start(void) BANKING_CTRL;
	void prbs_checker_check_ber (void) BANKING_CTRL;
	void prbs_checker_stop(void) BANKING_CTRL;
	void prbs_checker_uninit(void) BANKING_CTRL;
	
	// -- RX training
	void rx_train(void);
	void rx_train_dummy(void) ;
	void ffe_cap_final_adjust(void) ;
	void Set_Rx_FFE(void);
	void rx_ffe_train(void);
	void RX_FFE_Comparision();
	void set_train(void);
	void ffe_res_temp_adjust(void) ;
	void ffe_res2_adjust(void) ;
	//void set_ctle_tune(uint8_t val);
	//uint8_t get_ctle_tune();
	void set_ctle_sel(uint8_t val);
	void set_ctle_sel2(uint8_t val);
	uint8_t get_ctle_sel();
	uint8_t get_ctle_sel2();

	// -- TX training
	void tx_train(void);
	void rx_train_dummy(void) ;
	void tx_reset(uint8_t index);
	void tx_train_initial();
	void tx_train_end();
	void tx_train_control();
	void tx_blind_train();
	void tx_ffe_train();
	void tx_g0_train();
	void tx_gn1_train();
	void tx_g1_train();
	void g1n1_maxf0t(bool, uint8_t X, uint8_t* IDX, bool* IS_MIN, bool* IS_MAX, void(* update_g)(int8_t));
    void g1n1_midpoint(bool, uint8_t X, uint8_t* IDX, bool* IS_MIN, bool* IS_MAX, void(* update_g)(int8_t));
    //void compare_gx(bool arg, uint8_t th, int8_t g);
	void compare_g0(void);
	//void compare_gn1();
	//void compare_g1();
    void compare_g1n1(uint8_t X);
	void compare_tx_preset();
	void update_g0(int8_t update); 
	void update_gn1(int8_t update);
	void update_g1(int8_t update);
	void update_gn2(int8_t update);
	
	// -- train if
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
	  void req_local_ctrl(uint8_t s, uint8_t c1, uint8_t c0, uint8_t cn1, uint8_t cn2) ;	 
	 
	// -- Real Time Phase Adapt
	void eom_phase_update( int16_t eom_dpher ) ;
#ifndef NEW_CDS
	void move_eom_phase(int16_t update_ph) ;
#endif
	#define eom_ui_align()	EOM_clock_analog_align()
//	void Phase_Adaptation(void);
	//void Set_Eye_check_cnt_vote( uint8_t stage);
//	void Init_Phase_Adapt(void);
//	void EOM_Clock_Alignment(void);
//	void Data_EOM_Align90_Adapt_EyeHeihgtMode(void);
//	void Data_EOM_Align90_Adapt_EyeWidthMode(void);
//	void Data_Path_DFE_Adapt(void);
//	void EOM_clock_DFE_Adapt(void);
//	void F0d_measurement(void);
	void EOM_clock_analog_align(void);// BANKING_CTRL;
	void CTLE_Adaptation(void) BANKING_CTRL;
	void CTLE_Adaptation_Init(void) BANKING_CTRL;

	void rtpa_qr( int8_t ph_thresh, uint8_t niterations, int8_t step_size, int8_t* vote ) BANKING_CTRL;

        void align90ee_ref_adapt( bool tracking_mode_en );
	//void align90ee_ref_adapt( void );
	
	// -- eom
	void Check_EOM_Stage_fmExt(void);
#if _DBG_EOM
	void esm_measure();
#endif
	
	// -- UART
	#ifdef _LAB
	#define Prompt()   		Puts("\r\n>")
	#define DBG_Printf		Printf
	#define DBG_PS			Printf
	#else
	#define Prompt()
	#define DBG_Printf(fmt, ...)
	#define DBG_PS(fmt, ...)
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
	void cli_monitor(void) BANKING_CTRL;

#endif //COMMON_H
//void timerStart(void) BANKING_CTRL;
//void timerStop(void) BANKING_CTRL;
void rom_test1(uint8_t i) BANKING_CTRL;
uint8_t rom_test2(uint8_t i) BANKING_CTRL;
void comphy_int(void) BANKING_CTRL;

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
#define timer2_stop(a) timeout2_stop(a)

// PAUSE_ST as checkpoints
#define PAUSE_ST_CAL_START 0 // start of cal
#define PAUSE_ST_PLL_CAL 1 // after pll cal before turn_off_cont_cal
// reserved 2
#define PAUSE_ST_CAL_END 3 // before pll ready
#define PAUSE_ST_DTL 4 // after rx_init and call trx_train_init (before gain train)
#define PAUSE_ST_SLUMBER_WK 5 // before pll ready

#define PAUSE_ST_TRAIN_INIT 6 // before gain train
#define PAUSE_ST_GAIN_TRAIN 7 // after gain train
#define PAUSE_ST_DFE_RES_TRAIN 8 // after dfe res train

#define PAUSE_ST_TEST_9 9 // after init phase train

#define PAUSE_ST_TEST_A 0xa
#define PAUSE_ST_TEST_B 0xb
#define PAUSE_ST_TEST_C 0xc
#define PAUSE_ST_TEST_D 0xd
#define PAUSE_ST_TEST_E 0xe
#define PAUSE_ST_TEST_F 0xf

void check_pause_state(uint8_t pause_state) BANKING_CTRL;
void record_train_result(uint8_t number) BANKING_CTRL;
void record_temp(uint8_t number, uint8_t ctle_sel2) BANKING_CTRL;

#define adapt_data_en reg_ADAPT_DATA_EN_LANE
#define adapt_slicer_en reg_ADAPT_SLICER_EN_LANE

uint16_t get_program_memory_bank1(uint16_t addr) BANKING_CTRL;
uint16_t get_program_memory_bank2(uint16_t addr) BANKING_CTRL;
#ifdef _12FFC_COMPHY_112G_X4_R1P2
uint16_t get_program_memory_bank3(uint16_t addr) BANKING_CTRL;
#endif
uint32_t get_program_memory_checksum() BANKING_CTRL;


void regression_trap(uint8_t trap_number) BANKING_CTRL;

void txclk_nt_config() BANKING_CTRL;
void rxclk_nt_config() BANKING_CTRL;


