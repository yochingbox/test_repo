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

#include <compiler.h>
#include "sfr_r8051.h"

// code banking controls
// Comment out USE_BANKING definition to use 64k version of FW. makefile needs adjustment, too.
// #define USE_BANKING
#ifdef USE_BANKING
#define BANKING_CTRL __banked
#else
#define BANKING_CTRL
#endif

#define CMD_BANK
#define EOM_BANK 
#define RXTRAIN_BANK 

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
#define TX_TRAIN_IF_LANE_BASE	0x2600
#define PIPE_LANE_BASE       	0x4000
#define XDAT_LANE_BASE       	0x6000
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

#define SPDTBL_XDAT_CMN_BASE	0xe000
#define SPDTBL_XDAT_LANE_BASE	0x6300
//#define LC_SIZE 32
//#define RING_SIZE 36
//#define GEN_SIZE 80
#define PLL_TBL_MAX		7
#define RINGPLL_TBL_MAX	4
#define GEN_TBL_MAX     7 

#define _SATA
#define _GEN 	0

//phy_mode define
#define SATA	0
#define SAS		1
#define PCIE	3
#define SERDES  4
#define USB		5

// phy register list
#include "phy_reg_c_ana_trx_top_lane.h"
#include "phy_reg_c_ana_trx_bot_lane.h"
#include "phy_reg_c_ana_dfee_top_lane.h" 
#include "phy_reg_c_ana_dfee_bot_lane.h" 
#include "phy_reg_c_ana_dfeo_top_lane.h" 
#include "phy_reg_c_ana_dfeo_bot_lane.h" 
#include "phy_reg_c_ana_cmn_top.h" 
#include "phy_reg_c_ana_cmn_bot.h" 
#include "phy_reg_c_tx_lane.h" 
#include "phy_reg_c_rx_lane.h" 
#include "phy_reg_c_pipe_lane.h" 
#include "phy_reg_c_mcu_lane.h" 
#include "phy_reg_c_phytest_lane.h" 
#include "phy_reg_c_rx_eq_lane.h" 
#include "phy_reg_c_xdat_lane.h" 
#include "phy_reg_c_tx_cmn.h" 
#include "phy_reg_c_rx_cmn.h" 
#include "phy_reg_c_pipe_cmn.h" 
#include "phy_reg_c_mcu_cmn.h" 
#include "phy_reg_c_cmn_cmn.h" 
#include "phy_reg_c_xdat_cmn.h"
#include "phy_reg_c_tx_train_if_lane.h"
#include "phy_reg_def.h"
#include "phy_reg_c_cds_lane.h" //this is xdat_lane

// speed table address offset
#include "spdtb_oft.h"

// train parameter define
#include "train_def.h"

/****************************************
 * Definitions
*****************************************/

// --
#define false	0
#define	true	1
#define _EXIT_FAIL 1
#define _EXIT_SUCCESS 0
#define _EXIT_DO_NOTHING 2

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
#define MAX_MCU_ID	1

#define mcuid						reg_MCU_ID_LANE_7_0		
#define PHY_STATUS					reg_MCU_STATUS0_LANE_31_0_b0
#define PHY_NS						reg_MCU_STATUS0_LANE_31_0_b1

#define PHY_CHECK_LANE				reg_MCU_STATUS0_LANE_31_0_b2
#define PHY_CHECK_LANE0_READ		reg_MCU_STATUS0_LANE0_31_0_b2
#define PHY_CHECK_LANE1_READ		reg_MCU_STATUS0_LANE1_31_0_b2
#define PHY_CHECK_LANE2_READ		reg_MCU_STATUS0_LANE2_31_0_b2
#define PHY_CHECK_LANE3_READ		reg_MCU_STATUS0_LANE3_31_0_b2

#define PHY_INT_LANE				reg_MCU_STATUS0_LANE_31_0_b3

#define POWERUP_SIMPLE				(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x01)
#define FORCE_EXIT_CAL				(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x02)
#define BYPASS_DELAY				((reg_MCU_COMMAND0_LANE_31_0_b0 & 0x1c)>>2)
#define BYPASS_POWERON_DELAY		(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x20)
#define BYPASS_XDAT_INIT			(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x40)
#define BYPASS_SPDTBL_LOAD			(reg_MCU_COMMAND0_LANE_31_0_b0 & 0x80)
#define SIMENV_ON					(reg_MCU_COMMAND0_LANE_31_0_b0!=0)

#define PHY_STATUS_INT				reg_MCU_STATUS2_LANE_31_0_b0
#define SPDCHG_ON_READ				((reg_MCU_STATUS2_LANE_31_0_b0&0x01)==0x01)
#define SPDCHG_ON					0x01
#define LCPLL_CAL_LOOP_DONE			0x02

#define TX_REMOTE_CTRL_REQ			reg_MCU_STATUS2_LANE_31_0_b1

#define SKIP_RX_INIT				reg_MCU_STATUS2_LANE_31_0_b2

#define MOST_SIMPLE_LEVEL		1
#define NORMAL_LEVEL			0

#define DLL_PHASE_STEP	0
#define DLL_VDDA_STEP	1

#define phy_mode 					reg_PIN_PHY_MODE_RD_2_0
// --
//master control
#define SYNC_REQUEST_LANE			reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b0	
#define SYNC_STATUS_LANE0_READ		reg_MCU_STATUS1_LANE0_31_0_b0
#define SYNC_STATUS_LANE1_READ		reg_MCU_STATUS1_LANE1_31_0_b0
#define SYNC_STATUS_LANE2_READ		reg_MCU_STATUS1_LANE2_31_0_b0
#define SYNC_STATUS_LANE3_READ		reg_MCU_STATUS1_LANE3_31_0_b0
#define SYNC_STATUS_AND				reg_MCU_STATUS1_AND_31_0_b0
#define SYNC_STATUS_OR				reg_MCU_STATUS1_OR_31_0_b0
#define SYNC_STATUS_LANE0_EN_READ	reg_MCU_STATUS1_LANE0_31_0_b2
#define SYNC_STATUS_LANE1_EN_READ	reg_MCU_STATUS1_LANE1_31_0_b2
#define SYNC_STATUS_LANE2_EN_READ	reg_MCU_STATUS1_LANE2_31_0_b2
#define SYNC_STATUS_LANE3_EN_READ	reg_MCU_STATUS1_LANE3_31_0_b2
#define SYNC_SATUS_PLL_OR_PLL_OFF	reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b1
#define SYNC_SATUS_P2_2_P1_ON  		reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b2
#define SYNC_STATUS_IVREF_ON_REQ	reg_SET_MCU_COMMAND_ALL1_LANE_31_0_b0

//slave control
#define SYNC_STATUS_LANE			reg_MCU_STATUS1_LANE_31_0_b0
#define SYNC_REQEST_LANE_READ		reg_MCU_COMMAND_ALL0_LANE_31_0_b0
#define SYNC_STATUS_LANE_EN			reg_MCU_STATUS1_LANE_31_0_b2
#define SYNC_SATUS_PLL_OR_PLL_OFF_READ  reg_MCU_COMMAND_ALL0_LANE_31_0_b1

//
#define SYNC_IDLE					0xff
#define SYNC_LINE_HOLD				reg_SET_MCU_COMMAND_ALL0_LANE_31_0_b3
#define SYNC_LINE_HOLD_READ			reg_MCU_COMMAND_ALL0_LANE_31_0_b3

// -- 
// bitmatch syncup
#define BITMATCH_SYNC_EN			reg_MCU_STATUS1_LANE_31_0_b1

// --
#define MCU_INIT_ST					reg_MCU_STATUS3_LANE_31_0_b0
#define MCU_INIT_DONE_RD			(reg_MCU_STATUS3_LANE_31_0_b0 & 0x01)
#define MCU_INIT					0x01

#define mcu_en0  SYNC_STATUS_LANE0_EN_READ //reg_MCU_EN_LANE0
#define mcu_en1  SYNC_STATUS_LANE1_EN_READ //reg_MCU_EN_LANE1
#define mcu_en2  0
#define mcu_en3  0

//ctrl 
#define IDLE	0
#define WAIT	1
#define ACK		1

//
#define TRAIN_ON 0
#define NORM_ON 1
#define NO_SAVE 2

//
enum {
//PHY SYNC
CHECK_CLEAR, //0
CHECK_WAIT, //1
CHECK_MP_PU_PLL_ON, //2
CHECK_MP_PLL_CLK_READY_ON, //3
CHECK_MP_PLL_LOCK_ON, //4
CHECK_MP_PLL_CLK_READY_RING_ON, //5
CHECK_MP_PLL_CAL_LOOP_DONE, //6
CHECK_MP_TXALIGN_SYNC_START, //7
CHECK_MP_TXALIGN_SYNC_END, //8
CHECK_MP_SPDCHG, //9
};

enum {
PWR,
CONT
};

enum {
SELLV_TXCLK,SELLV_TXDATA,SELLV_TXPRE,
SELLV_RXEOMCLK, SELLV_RXDATACLK, SELLV_RXSAMPLER
};

enum {
OFST_F1P_D_E,
OFST_F1N_D_E,
OFST_F1P_S_E,
OFST_F1N_S_E,
OFST_F1P_D_O,
OFST_F1N_D_O,
OFST_F1P_S_O,
OFST_F1N_S_O,
OFST_EDGE_E,
OFST_EDGE_O
};
	
// --
enum {
CDS_DEFAULT,
CDS_DEFAULT_PCIE,
CDS_DFE_OFST, 
CDS_MAXEO,
CDS_SKIPCDR,
CDS_EYECHECK,
CDS_EOMADAPT,
CDS_DATAADAPT,
CDS_F0D,
CDS_RXINIT,
CDS_FASTACQ,
CDS_DEFAULT_PHASE_MOVE_DFE_EN,
CDS_DEFAULT_PCIE_F0B,
CDS_F0A
};

enum {
ACCAP_CKFW,
ACCAP_REFCLK,
ACCAP_DEMUX,
ACCAP_DEMUX1
};

#define reset_en                0x0001
#define coarse_dtl_en           0x0002
#define phase_move_with_dfe_en  0x0004 
//RSVD #define ee_os_adapt_en          0x0008 
#define dfe_adapt_en            0x0010
#define f0a_coarse_en           0x0020
#define dfe_coarse_en           0x0040 
#define dfe_fine_en             0x0080 
#define dfe_accu_en             0x0100 
#define dc_adapt_en             0x0200
#define f0b_adapt_en            0x0400
//RSVD#define f0k_adapt_en            0x0800
#define f0d_adapt_en            0x1000
#define maxeo_adapt_en          0x2000
#define eye_chk_en              0x4000
//RSVD


enum STAGE_SET {
    BEGIN_STAGE,//0
	INITIALIZATION_STAGE, //1
	CDR_COARSE_STATE, //2
	DFE_ADAPT_F0A_STATE,//3
	PHASE_MOVE_WITH_DFE_STATE, //4
	DFE_COARSE_ADAPT_STATE, //5
	DFE_FINE_ADAPT_STATE, //6
	RESOLUTION_ADJUST_STATE,//7
	DFE_ACCU_ADAPT_STATE, //8
	F0B_FINE_MEASURE_STATE, //9
	F0B_ACCU_MEASURE_STATE,//a
	F0D_COARSE_MEASURE_STATE, //b
	F0D_FINE_MEASURE_STATE, //c
	DFE_MAXEO_FINE_ADAPT_STATE, //d
	DFE_MAXEO_ACCU_ADAPT_STATE, //e
	EYE_WIDTH_MEASURE_STATE, //f
	EYEWIDTH_MEASURE_INIT_STATE, //10
	EYEWIDTH_LEFT_MEASURE_STATE, //11
	EYEWIDTH_RIGHT_MEASURE_STATE, //12
	PHASE_FINE_ADAPT_PER_EYEWIDTH_STATE,//13
	PHASE_ACCU_ADAPT_PER_EYEWIDTH_STATE,//14
	EYE_HEIGHT_MEASURE_STATE, //15
	EYE_HEIGHT_RESULT_STATE, //16
	EYE_DIAGRAM_CAPTURE_STATE, //17
	EYE_DIAGRAM_RESULT_STATE, //18
	OFST_ADAPT_STATE, //19
	EYE_CHECK_STATE, //1a
	IDLE_STATE //1b
};

enum DFE_FSM_STAGE_t {
DFE_FSM_RESET_STATE,
DFE_FSM_DTL_STATE,	
DFE_FSM_F0A_STATE,   
DFE_FSM_DFE_CORASE_STATE,
DFE_FSM_DFE_FINE_STATE,   
DFE_FSM_DFE_ACCU_STATE,   
DFE_FSM_OFST_STATE,   
DFE_FSM_F0B_FINE_STATE,   
DFE_FSM_F0B_ACCU_STATE, 
DFE_FSM_F0D_FINE_STATE,
DFE_FSM_F0D_COARSE_STATE,
DFE_FSM_FASTACQ_STATE,
};

// CDS Save //
typedef enum {
    Savf0a      = 0x00,
    Savf0b      = 0x01,
    Savf0d      = 0x02,
    Savf0d_l    = 0x03,
    Savf0d_r    = 0x04,
    Savf0k      = 0x06,
    Savdfe      = 0x10,
    Saveyechk   = 0x11,
    Savdc       = 0x12
} CDS_sav_t;

//
#define tag_edge_sampler_normal_en  1
//#define tag_phase_adapt_temp_thr	lnx_PHASE_ADAPT_TEMP_THR_LANE_7_0 //12  //5'

// -- cds registers
#define SLICER_SMPL_ONLY	1
#define BOTH_SMPL			0

#define MAXEO_ADAPT_MODE		0
#define MMSE_ADAPT_MODE			1


//--- train interface

//error code
#define UNKNOWN_ERROR		     		0
#define UNSUPPORTED_PATTERN_TYPE 		1
#define RESERVED_PATTERN_TYPE    	 	2
#define RESERVED_TTIU_BIT_SET_TO_ONE 	3   
#define MULTI_RESERVED_COE_REQ			0x10
#define RESERVED_COE_1_REQ				0x11
#define RESERVED_COE_2_REQ				0x13
#define RESERVED_COE_3_REQ				0x15
#define RESERVED_COMB_COE_REQ			0x1A

//status
#define READY		0
#define UPDATED		1
#define MIN			2
#define MAX			3
#define C1_is_max  		0x30	
#define C1_is_min  		0x20	
#define C1_updated  	0x10	
#define C0_is_max  		0x0c	
#define C0_is_min  		0x08	
#define C0_updated	  	0x04	
#define Cn1_is_max  	0x03	
#define Cn1_is_min  	0x02	
#define Cn1_updated  	0x01	

#define tx_amp_max			lnx_TX_EM_PEAK_MAX_LANE_3_0 //0x0e 
#define tx_amp_min			0//lnx_TX_EM_PEAK_MIN_LANE_3_0 //0 	 
#define tx_emph1_max		lnx_TX_EM_PO_MAX_LANE_3_0 //0xf	 
#define tx_emph1_min		0//lnx_TX_EM_PO_MIN_LANE_3_0 //0 	 
#define tx_emph0_max		lnx_TX_EM_PRE_MAX_LANE_3_0 //0xf 
#define tx_emph0_min		0//lnx_TX_EM_PRE_MIN_LANE_3_0 //0 	 
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
#define simulation_start()			reg_MCU_DEBUG_CMN_0_7_0 = 0xaa 

// ---
		
#define req_local_ctrl(s,a,b,c) 	Send_ctrl_to_tx((s)|((a)<<4)|((b)<<2)|(c))

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

typedef struct Status_dfe_sm_dc_struct{ 
    uint8_t dc_d_p_e, dc_d_n_e, dc_s_p_e, dc_s_n_e;     
    uint8_t dc_d_p_o, dc_d_n_o, dc_s_p_o, dc_s_n_o;     
} Status_dfe_sm_dc_t; 

typedef struct Status_dfe_2c_dc_struct{ 
    int8_t dc_d_p_e, dc_d_n_e, dc_s_p_e, dc_s_n_e;     
    int8_t dc_d_p_o, dc_d_n_o, dc_s_p_o, dc_s_n_o;     
} Status_dfe_2c_dc_t; 

// ----
// new cds structure
typedef struct {
    uint8_t d_p_e;
    uint8_t d_n_e;
    uint8_t s_p_e;
    uint8_t s_n_e;
    uint8_t d_p_o;
    uint8_t d_n_o;
    uint8_t s_p_o;
    uint8_t s_n_o;
} dfe_f0_t;
/*
typedef struct Status_dfe_struct{ // 72 bytes
    uint8_t f0_d_p_e, f0_d_n_e, f0_s_p_e, f0_s_n_e;     // 0x80
    uint8_t f2_d_p_e, f2_d_n_e, f2_s_p_e, f2_s_n_e;     // 0x84
    uint8_t f3_d_p_e, f3_d_n_e, f3_s_p_e, f3_s_n_e;     // 0x88
    uint8_t f1_e, f4_e, f5_e, f6_e;                     // 0x8c
    uint8_t f7_e, f8_e, f9_e, f10_e;                    // 0x90
    uint8_t f11_e, f12_e, f13_e, f14_e;                 // 0x94
    uint8_t f15_e, ff0_e, ff1_e, ff2_e;                 // 0x98
    uint8_t ff3_e, ff4_e, ff5_e, dummy_e;               // 0x9c

    uint8_t f0_d_p_o, f0_d_n_o, f0_s_p_o, f0_s_n_o;     
    uint8_t f2_d_p_o, f2_d_n_o, f2_s_p_o, f2_s_n_o;     
    uint8_t f3_d_p_o, f3_d_n_o, f3_s_p_o, f3_s_n_o;     
    uint8_t f1_o, f4_o, f5_o, f6_o;                     
    uint8_t f7_o, f8_o, f9_o, f10_o;                    
    uint8_t f11_o, f12_o, f13_o, f14_o;                 
    uint8_t f15_o, ff0_o, ff1_o, ff2_o;                 
    uint8_t ff3_o, ff4_o, ff5_o, dummy_o;               

    uint8_t dc_d_p_e, dc_d_n_e, dc_s_p_e, dc_s_n_e;     // 0xc0
    uint8_t dc_d_p_o, dc_d_n_o, dc_s_p_o, dc_s_n_o;     // 0xc4
} Status_dfe_t; // Saved tap values
*/
typedef struct {
    Status_dfe_2c_t dfe_2c; // 64 //72
    Status_dfe_2c_dc_t dfe_2c_dc; // 8    
    dfe_f0_t f0a; // 8
    dfe_f0_t f0b; // 8
    dfe_f0_t f0d; // 8
    dfe_f0_t f0d_left; // 8
    dfe_f0_t f0d_right; // 8
//    dfe_dc_t dc; // 10
//    int8_t dc_e_e; // 28G no edge eq
//    int8_t dc_e_o;
//    dfe_res_t dfe_res; // 5
    bool eye_check_pass;
    bool f0a_saturate;
//    bool dfe_saturate;
//    bool saturated; 
} Status_CDS_28G_t; // 114 Byte

// -----
typedef struct Status_Train_tag {
	uint8_t f0a_data, f0a_slicer;
	uint8_t f0a_max_data, f0a_max_slicer;
	uint8_t f0_data, f0_slicer;
	int8_t f1;// value of ISI taps
	int8_t f2_data, f2_slicer;
	int8_t f3_data, f3_slicer;
	int8_t f4;
	int8_t f5;
	int8_t f6;
	int8_t f7;
	uint8_t eo_data, eo_slicer;
	uint8_t f0d_data_left, f0d_slicer_left;
	uint8_t f0d_data_right, f0d_slicer_right;
	int8_t eye_check_pass;
	int8_t ofst_data, ofst_slicer;
    //--
	uint8_t f0a_max;
	uint8_t f0a; // value of F0A (F0 - F-1)
	uint8_t f0; 
	int8_t f2;
	int8_t f3;
    //int8_t dc_os;
	int8_t fn1; // f0b-f0a
	uint8_t f0t;
	uint8_t eo; // value of eye open    //del f0p f0_minus_abs_fn1
	int8_t ofst;
	int8_t phase_offset_data; // CDR phase offset: match the global phase_offset
	int8_t phase_offset_esm; //[BIKE@20160904_16nm12G1p0]eye shape monitor phase offset: always 0 in training, do not exist in RTL code (double check). Implement in C code for algorithm understanding and potential future design change
	//int8_t phase_offset_training; //[BIKE@20160904_16nm12G1p0]: introduce a new phase offset variable which is only used to record optimal phase offest when ph_control_mode = train_ph_control_mode during training
	//int8_t phase_offset_tracking; //[BIKE@20160904_16nm12G1p0]: introduce a new phase offset variable which is only used to record optimal phase offest when ph_control_mode = 0 for tracking stage
	uint8_t level; // level of TRX FFE
	uint8_t rx_ffe_index; // the index of RX FFE = {c.r}
    uint8_t tx_preset_index; 
	bool f0a_saturate;
	bool dfe_saturate;
	bool saturated; 
	bool excellent_eo;
	bool good_eo;
	//uint8_t poor_eo;//9
	//bool eye_check_pass; 
	uint16_t boost;
	int16_t sumFtap;
	//int8_t phase_offset; // CDR phase offset train=>reg_OS_DELTA_5_0
	//uint8_t g0_index; // the index of TX FFE G0 train=>reg_TX_AMP_INDEX
	//uint8_t g1_index; // the index of G1 train=>reg_TX_EMPH1_INDEX
	//uint8_t gn1_index; // the index of Gn1 train=>reg_TX_EMPH0_INDEX
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
	//bool advanced_clock_align_converged;
}Status_CDR_t;

typedef struct Status_SUM_CDS_tag{
	uint16_t f0_data, f0_slicer;
	uint16_t f0a_data, f0a_slicer; 
	uint16_t f0a_max_data, f0a_max_slicer; 
	int16_t f1;
	int16_t f2_data, f2_slicer;
	int16_t f3_data, f3_slicer;
	int16_t f4;
	int16_t f5;
	int16_t f6;
	int16_t f7;
	uint16_t f0d_data, f0d_slicer;
	int16_t eye_check_pass;
	int16_t ofst_data, ofst_slicer;	
} Status_SUM_CDS_t;

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

    // -- misc
	void delay01(int16_t t) BANKING_CTRL;
	void delay(int16_t a) BANKING_CTRL;
	void short_delay() BANKING_CTRL;
	void short_delay_0(void) BANKING_CTRL;
#define timeout_start(a) {TMR1=~(a-1);TR1=1; timeout=0;}  //have to be a>1, unit 1 uS.
#define timeout2_start(a) {TMR2=~(a-1); T2CON=0x7a; timeout2=0; } //62  //have to be a>1, unit 1uS/1mS.
#define timeout_stop     { TR1=0; TF1= 0; }
#define timeout_stop2    { T2CON=0x60; TF2=0; }

	int8_t max(int8_t a, int8_t b) BANKING_CTRL;
	int8_t min(int8_t a, int8_t b) BANKING_CTRL;
	int8_t clamp(int8_t a, int8_t ub, int8_t db) BANKING_CTRL;
	uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db) BANKING_CTRL;
	int16_t clamp16(int16_t a, int16_t ub, int16_t db) BANKING_CTRL;
	int8_t abs(int8_t a) BANKING_CTRL;
	int16_t abs16(int16_t a) BANKING_CTRL;
	void memcpy(uint8_t *des, uint8_t *src, int n) BANKING_CTRL;
	void memset0(uint8_t *dest, int n) BANKING_CTRL;
	uint8_t sign_abs_up(uint8_t dcc_cnt) BANKING_CTRL;
	uint8_t sign_abs_dn(uint8_t dcc_cnt) BANKING_CTRL;
	// added parameter to specify number of toggles, first two parameters same as is_toggle_pat
	BIT is_num_toggle_pat( uint8_t val, uint8_t output_cnt, uint8_t target_toggles  ) BANKING_CTRL;
	// output_cnt is needed to only check valid bit(output) in the val, significant 1 to 6, same effect when larger than 6
	BIT is_toggle_pat( uint8_t val, uint8_t output_cnt ) BANKING_CTRL;
	//uint8_t fractional_noise_filter(uint8_t * cnt, uint8_t cal_out, uint8_t step_size);
	uint8_t conv_thermo_2_bi(uint8_t val) BANKING_CTRL;	
	uint8_t sum_32(uint32_t * accumulator, uint32_t * cnt) EOM_BANK;
	uint16_t u16div(uint16_t x, uint16_t y) BANKING_CTRL;
	uint16_t u16mul (uint16_t a, uint16_t b) BANKING_CTRL;

	// -- power
	void PowerUp_Seq_Test(void) BANKING_CTRL;
#define PowerUp_Seq_Simple() PowerUp_Seq_Test()
	void PowerUp_Seq(void) BANKING_CTRL;
	void PowerUp_Seq_pcie(void) BANKING_CTRL ;
	void txloz2hiz(void) BANKING_CTRL ;
	void txhiz2loz(void) BANKING_CTRL ;
	void txloz2hiz_quick(void) BANKING_CTRL ;
	void txdetrx(void) BANKING_CTRL ;
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
	void init_xdata(void) BANKING_CTRL;
	void init_reg(void) BANKING_CTRL;
	void init_irq(void) BANKING_CTRL ;
	void set_timer_cnt() BANKING_CTRL;
	void DTL_DTX_DFE_clkoff_reset_0(void) BANKING_CTRL;
	void DTL_DTX_DFE_clkoff_reset_1(bool) BANKING_CTRL;
	void txlane_align(void) BANKING_CTRL;
	void pll_clk_ready_all_0(void) BANKING_CTRL;
	void pll_clk_ready_0(void) BANKING_CTRL ;
	void pll_clk_ready_ring_0(void) BANKING_CTRL ;
	void check_pll_clk_ready(void) BANKING_CTRL;
	void check_pll_clk_ready_pcie(void) BANKING_CTRL ; 
	void check_pu_ivref(void) BANKING_CTRL;
	void pu_ivref_on(void) BANKING_CTRL;
	void pu_pll_on(void) BANKING_CTRL;
	void pu_pll_off(void) BANKING_CTRL;
	void pu_rx_on(void) BANKING_CTRL;
	void pu_rx_off(void) BANKING_CTRL;
	void reset_pwr_reg(void) BANKING_CTRL;
	void reset_pwr_reg_ext(void) BANKING_CTRL;
	void master_sync_request(void)	BANKING_CTRL;
	void master_sync_clean(void) BANKING_CTRL ;
	void slave_sync_wait(void) BANKING_CTRL ;
	void pcie_master_sync_request(void)	BANKING_CTRL ;
	void pcie_master_sync_clean(void) BANKING_CTRL ;
	void check_master_phy_status(uint8_t cmd) BANKING_CTRL ;
	void pll_tempc_speed_adj(void) BANKING_CTRL ;
	
    // -- Speed Control
	void SpeedChange(void);
	void sata_speedchange(void) ;
	void loadSpeedtbl(void);
	void loadspeedtbl_pll(uint8_t gen);
	void loadspeedtbl_ringpll(uint8_t gen) ;
	void loadspeedtbl_gen(void);
	void loadSpdtbl_4_fcnt(void);
	void ringloadSpdtbl_4_fcnt(void) ;
	void check_speed_table_load(void); 
	uint8_t get_gen_memory_index(uint8_t gen) ;
	void loadspeedtbl_lcpll_data(uint8_t fbck, uint8_t rate) BANKING_CTRL ;
	void loadspeedtbl_ringpll_data(uint8_t ck1g, uint8_t fbck, uint8_t rate) BANKING_CTRL;

    // -- Calibrations
	void Calibration(void) BANKING_CTRL;
	void set_test_pattern(uint8_t pt_4t_en) BANKING_CTRL;
	void recover_test_pattern(void) BANKING_CTRL;
	void Cal_Cont(void) BANKING_CTRL;
	void Cont_Cal_Power_state(void) BANKING_CTRL ;
	int16_t read_tsen(void) BANKING_CTRL;
	void plldcc_cal(void) BANKING_CTRL;
	void pll_cal(void) BANKING_CTRL;
	void pll_cal_loop(void) BANKING_CTRL ;
	void pll_cal_loop_ram(void) ;
	void pll_amp_cal_ram(void)  ;
	void set_lcvco_dac(uint8_t dac_h, uint8_t dac_l) BANKING_CTRL ;
	void ring_pll_cal(void) BANKING_CTRL;
	void pll_amp_cal(void) BANKING_CTRL;
	void pll_amp_cal_cont(void) BANKING_CTRL;
	void pll_temp_force_idle(void) BANKING_CTRL;
	void pll_temp_jump_idle(void) BANKING_CTRL ;
	void save_pll_temp_cal(void) BANKING_CTRL ;
	void pll_temp_cal( void ) BANKING_CTRL;
	void pll_fast_cal(void) BANKING_CTRL;
	void spdchg_pll_fast_cal(void) BANKING_CTRL;
	void check_pll_lock_0(void) BANKING_CTRL ;
	void eom_align_cal(void) BANKING_CTRL;
	void dll_cal(void) BANKING_CTRL;
	void dll_vdda_cal_loop( uint8_t mode ) BANKING_CTRL ;
	void dll_comp_cal( void ) BANKING_CTRL;
	void dll_gm_cal( void ) BANKING_CTRL;
	void dll_vdda_cal(  uint8_t mode ) BANKING_CTRL;
	void dll_eom_gm_cal( void ) BANKING_CTRL;
	void dll_eom_vdda_cal(  uint8_t mode ) BANKING_CTRL;
	void set_sellv_rxdll_ch(uint8_t val) BANKING_CTRL;
	uint8_t get_sellv_rxdll_ch(void) BANKING_CTRL;
	uint8_t get_vref_rxdll_sel(void) BANKING_CTRL;
	void set_sellv_rxeomdll_ch(uint8_t val) BANKING_CTRL;
	uint8_t get_sellv_rxeomdll_ch(void) BANKING_CTRL;
	void rxdcc_dll_cal(void) BANKING_CTRL;
	void rxdcc_data_cal(void) BANKING_CTRL;
	void rxdcc_eom_cal(void) BANKING_CTRL;
	void rxalign90_cal(void) BANKING_CTRL;
	void eom_cal(void);	
	void set_sampler(int8_t val) BANKING_CTRL;
	int8_t get_sampler(void) BANKING_CTRL;
	void sampler_sel(uint8_t sw) BANKING_CTRL;
	void sampler_cal(void) BANKING_CTRL;
	void print_osft_f1p(void) BANKING_CTRL; 
	void tximp_cal(void) BANKING_CTRL;
	void rximp_cal(void) BANKING_CTRL;
	void txdetect_cal(void) BANKING_CTRL;
	void txdcc_cal(void) BANKING_CTRL;
	void txdcc_pdiv_cal(void) BANKING_CTRL;
	void vdd_cal(void) BANKING_CTRL;
	void vdd_cal_sel(uint8_t sel) BANKING_CTRL;
	void align90_cal_update(void) BANKING_CTRL;
	void align90_update(void) BANKING_CTRL;
	void align90_comp_cal(void) BANKING_CTRL;
	bool find_align90_lock(void) BANKING_CTRL ;
	void proc_cal(void) BANKING_CTRL;
	void squelch_cal(void) BANKING_CTRL;
	bool vdd_cal_op (uint8_t sel) BANKING_CTRL;
	void all_cal_ext(void) BANKING_CTRL;	
	void pu_ringpll_off(void) BANKING_CTRL ;
	void pu_lcgpll_off(void) BANKING_CTRL ;
	void master_pu_pll_off(void) BANKING_CTRL ;
	void pll_clk_ready_1(void) BANKING_CTRL;
	void pll_clk_ready_ring_1(void) BANKING_CTRL;
	void fast_startup_mode_ring (void) ;
	void load_cal_data_all(void) BANKING_CTRL;
	void load_cal_data_dll(void) BANKING_CTRL;
	void mcu_align_0(uint8_t) BANKING_CTRL;
	uint8_t find_next_mcu(void) ;
	void ring_pll_fast_cal(void) BANKING_CTRL;
	void ring_pll_cont(void) BANKING_CTRL;
	void Edge_Sampler_Update(void) BANKING_CTRL;
	void  save_sampler_edge(void) BANKING_CTRL;
	//void set_accap_sel(uint8_t sel) BANKING_CTRL;
	#define set_accap_sel(sel) 		reg_CLK_RXACCAP_SEL_LANE_1_0 = sel
	void ringpll_save(uint8_t no) BANKING_CTRL;
	void ringpll_load(uint8_t no) BANKING_CTRL;
	void ringpll_dac_fine_output(void) BANKING_CTRL;
	void pllcal_load(uint8_t no) BANKING_CTRL;
	void pllcal_save(uint8_t no) BANKING_CTRL;
	uint8_t pll_amp_dac_dec(void) BANKING_CTRL;
	uint8_t pll_amp_dac_inc(void) BANKING_CTRL;
	void check_pll_lock(void) BANKING_CTRL;
	uint8_t align90_read_pd(void) BANKING_CTRL;
	bool eom_comp_out_rd(void) BANKING_CTRL;
	uint8_t	temp_level_todic_rd(void) BANKING_CTRL;
	bool align90_dac_dec(void);
	void load_init_temp_table(void) BANKING_CTRL;
	void clear_normal_mode_cal_en(void) BANKING_CTRL;
	
	// -- rxinit
	void RX_Init(void) BANKING_CTRL;
	void pre_normal_process(void) BANKING_CTRL ;

	// -- DFE
	void dfe_adaptation(void) BANKING_CTRL;
	void cdr_dfe_scheme(void) BANKING_CTRL;
	void dfe_fsm_run(uint8_t adapt_num, uint8_t pol_num) BANKING_CTRL;
	void sampler_load_reset(void) BANKING_CTRL;
	void sampler_train_save(void) BANKING_CTRL;
	void set_ofst(uint8_t no, int8_t ofst) BANKING_CTRL ;
	void DFE_Final_Calculation( void ) BANKING_CTRL;
	void dfe_save(void) BANKING_CTRL;
	void dfe_hardware_cont_run(void) BANKING_CTRL;
	void dfe_hardware_cont_stop(void) BANKING_CTRL;
	void DFE_Oncewhile_Adapt(void) BANKING_CTRL;
	void RxFFE_ACCap(void) BANKING_CTRL;
	void enable_all_tap_adapt(void) BANKING_CTRL;
	void f0d_measure(void) BANKING_CTRL;
	void debug_print(void) BANKING_CTRL;
	void debug_print_train_result(void) BANKING_CTRL;
	void set_slicer_data_sampler_adapt(bool flag) BANKING_CTRL;
	void level_ffe() BANKING_CTRL;
	void f1_ofst_adjust(void) BANKING_CTRL;
	void Check_F0d(void) BANKING_CTRL ;
	
	void dfe_load_type(uint8_t type) BANKING_CTRL;
	 void dfe_load_all(void) BANKING_CTRL ;
	void dfe_fsm(uint16_t lpnum, uint8_t tap_en) BANKING_CTRL;
	void set_ph_mode(uint8_t) ;
	void set_ph_dat(int8_t phase) ;
	void set_ph_esm(int8_t phase) ;
	void set_edge_dly(int8_t, int8_t) ;
	void set_ctle_accap(uint8_t mode) BANKING_CTRL;
	void cds_load_f0(uint8_t type) BANKING_CTRL;
	void dc_load(uint8_t type) BANKING_CTRL;
	void dfe_dc_latch(void) BANKING_CTRL ;
	void set_esm_voltage(uint8_t v) BANKING_CTRL;
	uint8_t get_ec_voltage() BANKING_CTRL;
	bool check_eye() BANKING_CTRL;
	bool check_eye_0(void) BANKING_CTRL;
	uint32_t maxu32(uint32_t a, uint32_t b) BANKING_CTRL ;

	void cds_save(uint8_t type) BANKING_CTRL;
	void set_dfe_fbmd(uint8_t type) BANKING_CTRL;
	#ifdef _RES_ADJ_IN_CDS
	bool dfe_res_adj(void) BANKING_CTRL;
	#endif
	
	// -- CDR phase
	void cdr_phase_update(int8_t phase) ;
	void phase_control_func() ;
	void phase_control_func_0(int8_t ph_dat, int8_t ph_esm) ; 
	void cdr_phase_opt_init() BANKING_CTRL;
	void cdr_phase_opt_end() BANKING_CTRL;
	void cdr_phase_maxf0p() BANKING_CTRL;
	void cdr_phase_midpoint() BANKING_CTRL;
    void cdr_phase_opt_final_processing() BANKING_CTRL;
    void calculatef0p() BANKING_CTRL;
	//void phase_lookup_tracking(uint8_t step_size); 
	//void phase_faststartup(void);
	bool get_dac_inc(void) BANKING_CTRL;
	bool get_dac_dec(void) BANKING_CTRL;
	void cdr_phase_opt(void) BANKING_CTRL;
	void advanced_clk_align(void) BANKING_CTRL;
	int8_t dfe_adapt_align(void) BANKING_CTRL;
	//void set_sel_sdge_dly_tb(int8_t ph) ;
	//void set_sel_sdge_dly_tb_mode3(int8_t dat) ;
	//void eom_cal_control(void);
	void print_ph_ctrl_status(void) BANKING_CTRL;
	//uint8_t get_f0d_slicer(void) BANKING_CTRL;
	void cdr_dfe_init(void) BANKING_CTRL;

	// -- Training 
	void TRX_Train(void);
	void trx_train_one_time(void);
	void train_status_reset(void);
	void cal_half_code(void) BANKING_CTRL;
	void opt2train(void) ;
	void train2opt() ;
	void update_opt_trx_ffe();
	void trx_train_init(void) ;
	void trx_train_control(void) ;
	void trx_train_end();
	void dfe_cdr_phase_opt(void);
	void gain_train(void);
	void sq_auto_train_enable(void) ;
	
	// -- RX training
	void rx_train(void) RXTRAIN_BANK;
	void rx_train_dummy(void) RXTRAIN_BANK;
	void ffe_cap_final_adjust(void) RXTRAIN_BANK;
	void Set_Rx_FFE(void) RXTRAIN_BANK;
	void save_train(bool, bool, bool, bool) ;
	void restore_train(void) ;
	void rx_ffe_train(void) RXTRAIN_BANK;
	void RX_FFE_Comparision() RXTRAIN_BANK;
	void set_train(void) RXTRAIN_BANK;
	void ffe_res_temp_adjust(void) RXTRAIN_BANK ;
	void ffe_res2_adjust(void) RXTRAIN_BANK;
	bool get_train_overboost(void) RXTRAIN_BANK ;
	bool get_opt_overboost(void) RXTRAIN_BANK ;

	// -- TX training
	void tx_train(void);
	void tx_train_dummy(void) ;
	void tx_train_PCIe(void) ;
	void tx_reset(uint8_t index);
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
	void update_g0(int8_t update); 
	void update_gn1(int8_t update);
	void update_g1(int8_t update);
	
	//-- apta train
	void apta_txtrain(void) BANKING_CTRL;
	
	// -- train if
	void remote_ctrl(void);
	 //void run_tx_ffe_preset( uint8_t inx);
	 //void check_min_max(void);
	 void trainif_init(void) BANKING_CTRL;
	 void txffe_force_ouput(void) BANKING_CTRL;
	 void txtrain_force_restart(void) BANKING_CTRL;
	 void frame_marker_ready(void) BANKING_CTRL;
	 void sq_wait(void) ;
	 bool request_local_ctrl(uint16_t dat) BANKING_CTRL;
	 void request_local_status(void) BANKING_CTRL;
	 void Send_ctrl_to_tx(uint16_t) BANKING_CTRL;
	 bool get_tx_status(uint8_t check) BANKING_CTRL;
	 uint8_t remote_error_check(uint16_t) BANKING_CTRL;
	 
	 
	// -- Real Time Phase Adapt
	void move_eom_phase(int16_t update_ph) ;
	void Phase_Adaptation(void) BANKING_CTRL;
	//void Set_Eye_check_cnt_vote( uint8_t stage);
	void Init_Phase_Adapt(void) BANKING_CTRL;
	void EOM_Clock_Alignment(void) BANKING_CTRL;
	void Data_EOM_Align90_Adapt_EyeHeihgtMode(void);
	void Data_EOM_Align90_Adapt_EyeWidthMode(void);
	void Data_Path_DFE_Adapt(void) BANKING_CTRL;
	void EOM_clock_DFE_Adapt(void) BANKING_CTRL;
	void F0d_measurement(void) BANKING_CTRL;
	void EOM_clock_analog_align(void) BANKING_CTRL;
	
	// -- eom
	void Check_EOM_Stage_fmExt(void) EOM_BANK;

	// -- lane margin
        void lane_margin_start(void) BANKING_CTRL;
        void lane_margin_dfe_run(void) BANKING_CTRL;
        void cfg_dfe_fm_lane_en(void) BANKING_CTRL;

	// -- cmd_if
	void cmd_if(void) CMD_BANK;
	uint8_t cmd_remote_tx_preset_index(uint8_t cmd_code) CMD_BANK ;
	uint8_t cmd_tx_preset(uint8_t cmd_code) CMD_BANK;
	uint8_t cmd_local_tx_preset_index(uint8_t cmd_code) CMD_BANK ;
	uint8_t cmd_ssc(uint8_t gen, uint8_t cmd_code) CMD_BANK;
	uint8_t cmd_rx_imp_cal(void) CMD_BANK;
	uint8_t cmd_tx_imp_cal(void) CMD_BANK;
	uint8_t cmd_tx_margin(uint8_t cmd_code) CMD_BANK;
	uint8_t cmd_rx_cdr_bw(uint8_t gen, uint8_t cmd_code) CMD_BANK;
	uint8_t cmd_bypass_ctle_train(uint8_t gen, uint8_t cmd_code) CMD_BANK;
	uint8_t cmd_tx_slew_rate(uint8_t gen, uint8_t cmd_code) CMD_BANK;
	uint8_t cmd_sq_thrs_ratio(uint8_t gen, uint8_t cmd_code) CMD_BANK;
	uint8_t cmd_rx_ffe(uint8_t gen, uint8_t cmd_code) CMD_BANK;
	uint8_t cmd_dfe_res(uint8_t gen, uint8_t cmd_code) CMD_BANK;
	uint8_t cmd_tx_ffe(uint8_t gen, uint8_t cmd_code) CMD_BANK;
	
	// -- UART
	#ifdef _LAB
	#define Prompt()   		Puts("\r\n>")
	#define DBG_Printf		Printf
	#define DBG_PS			Printf
	#else
	#define Prompt()
	#define DBG_Printf
	#define DBG_PS
	#endif
	#define UART_RX_BUF_MAX		30
	void Printf(const char *fmt, ... );
	void uart_tx(uint8_t tx_buf);
	uint8_t uart_rx(void);
	bool uart_rx_ready(void);
	void putchar(uint8_t x);
	void Puts(char* s);
	void uart_monitor(void);
	
	// -- test
	void cli_monitor(void) ;
	
#endif //COMMON_H
