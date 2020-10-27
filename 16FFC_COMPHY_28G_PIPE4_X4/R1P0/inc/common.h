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
#define XDAT_CMN_BASE        	0xE400 

#define XDAT_BASE				0x6000
#define MAXXDATLANE				0x800 //max allocated 0x800
#define MAXXDATCMN				0x50 

#define SPDTBL_XDAT_CMN_BASE	0xe000
#define SPDTBL_XDAT_LANE_BASE	0x6100

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

#ifdef SUPPORT_MCU_FREQ
#define T_p125us   1
#define T_p25us    3
#define T_p4us     4
#define T_p5us     5
#define T_p75us    8
#define Tus 	   10
#define T_1p5us    15
#define T_2us      20
#define T_2p5us    25
#define T_3us      30
#define T_3p75us   38
#define T_4us      40
#define T_4p5us    45
#define T_5us      50
#define T_6us      60
#define T_6p25us   63
#define T_7p5us    75
#define T_8us      80
#define T_9us	   90
#define T_10us     100
#define T_12us     120
#define T_12p5us   125
#define T_15us     150
#define T_16us     160
#define T_20us     200
#define T_25us     250
#define T_32us     320
#define T_37p5us   375
#define T_40us     400
#define T_50us     500
#define T_62p5us   625
#define T_100us    1000
#define T_128us    1280

#else
// -- Timer delay 
#ifdef MCUCLK_500MHz
#define T_p125us -8 //minimum
#define T_p25us -11
#define T_p4us  -16  
#define T_p5us  -20 
#define T_p75us -31 
#define Tus 	-41  
#define T_1p5us -61
#define T_2us   -82 
#define T_2p5us -102 
#define T_3us   -123 
#define T_3p75us -153
#define T_4us   -164             
#define T_4p5us -184 
#define T_5us   -205
#define T_6us   -246
#define T_6p25us -256
#define T_7p5us  -307
#define T_8us   -328 
#define T_9us	-369           
#define T_10us  -410
#define T_12us  -492
#define T_12p5us  -512            
#define T_15us   -615
#define T_16us  -656
#define T_20us  -820
#define T_25us  -1025
#define T_32us  -1312
#define T_37p5us -1537
#define T_40us  -1640
#define T_50us  -1050
#define T_62p5us -2562
#define T_100us -4100
#define T_128us -5248

#else //MCUCLK_400MHz

#define T_p125us -4 //mininum
#define T_p25us -8
#define T_p4us  -13  
#define T_p5us  -16
#define T_p75us -25   
#define Tus 	-33  
#define T_1p5us -50
#define T_2us   -66 
#define T_2p5us -83 
#define T_3us   -100 
#define T_3p75us -125
#define T_4us   -133             
#define T_4p5us -150 
#define T_5us   -166
#define T_6us   -200
#define T_6p25us -208
#define T_7p5us  -250
#define T_8us   -266 
#define T_9us	-300           
#define T_10us  -333
#define T_12us  -400
#define T_12p5us  -416            
#define T_15us   -500
#define T_16us  -533
#define T_20us  -666
#define T_25us  -833
#define T_32us  -1066
#define T_37p5us -1250
#define T_40us  -1333
#define T_50us  -1666
#define T_62p5us -2083
#define T_100us -3333
#define T_128us -4266

#endif
#endif
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
#define CHECK_SPEED_TABLE_LOAD		(reg_MCU_COMMAND0_LANE_31_0_b1 & 0x01)
#define SIMENV_ON					(reg_MCU_COMMAND0_LANE_31_0_b0!=0)

#define MOST_SIMPLE_LEVEL		1
#define NORMAL_LEVEL			0

#define DLL_PHASE_STEP	0
#define DLL_VDDA_STEP	1

#define phy_mode 					reg_PIN_PHY_MODE_RD_2_0
// --
//master control
#define SYNC_REQUEST_LANE			reg_SET_MCU_COMMAND_ALL_LANE_31_0_b0	
#define SYNC_STATUS_LANE0_READ		reg_MCU_STATUS1_LANE0_31_0_b0
#define SYNC_STATUS_LANE1_READ		reg_MCU_STATUS1_LANE1_31_0_b0
#define SYNC_STATUS_LANE2_READ		reg_MCU_STATUS1_LANE2_31_0_b0
#define SYNC_STATUS_LANE3_READ		reg_MCU_STATUS1_LANE3_31_0_b0
#define SYNC_STATUS_AND				reg_MCU_STATUS1_AND_31_0_b0
#define SYNC_STATUS_OR				reg_MCU_STATUS1_OR_31_0_b0
#define SYNC_STATUS_LANE0_EN_READ	reg_MCU_STATUS1_LANE0_31_0_b2
#define SYNC_STATUS_LANE1_EN_READ	reg_MCU_STATUS1_LANE1_31_0_b2
#define SYNC_STATUS_LANE2_EN_READ	reg_MCU_STATUS1_LANE2_31_0_b2
#define SYNC_STATUS_LANE3_EN_READ	reg_MCU_STATUS1_LANE2_31_0_b2
#define SYNC_SATUS_PLL_OR_CHG  		reg_SET_MCU_COMMAND_ALL_LANE_31_0_b1
#define SYNC_SATUS_P2_2_P1_ON  		reg_SET_MCU_COMMAND_ALL_LANE_31_0_b2

//slave control
#define SYNC_STATUS_LANE			reg_MCU_STATUS1_LANE_31_0_b0
#define SYNC_REQEST_LANE_READ		reg_MCU_COMMAND_ALL_LANE_31_0_b0
#define SYNC_STATUS_LANE_EN			reg_MCU_STATUS1_LANE_31_0_b2
#define SYNC_SATUS_PLL_OR_CHG_READ  reg_MCU_COMMAND_ALL_LANE_31_0_b1
#define SYNC_SATUS_P2_2_P1_ON_READ	reg_MCU_COMMAND_ALL_LANE_31_0_b2

//
#define SYNC_IDLE					0xff
#define SYNC_LINE_HOLD				reg_SET_MCU_COMMAND_ALL_LANE_31_0_b3
#define SYNC_LINE_HOLD_READ			reg_MCU_COMMAND_ALL_LANE_31_0_b3

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
OFST_F1P_D_E,
OFST_F1N_D_E,
OFST_F1P_D_O,
OFST_F1N_D_O,
OFST_F1P_S_E,
OFST_F1N_S_E,
OFST_F1P_S_O,
OFST_F1N_S_O,
OFST_EDGE_E,
OFST_EDGE_O
};
	
// --
#ifndef SUPPORT_NEW_CDS
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
CDS_DEFAULT_PHASE_MOVE_DFE_EN,
CDS_DEFAULT_PCIE,
CDS_OFSTDATAADAPT,
CDS_DEFAULT_PHASE_MOVE_DFE_DIS,
CDS_DFE_OFST
};
#else
enum {
CDS_DEFAULT,
CDS_DEFAULT_PCIE,
CDS_DFE_OFST, 
CDS_SKIPCDR,
CDS_DATAADAPT,
CDS_EOMADAPT,
CDS_EYECHECK,
CDS_F0D,
CDS_RXINIT,
CDS_FASTACQ
};
#endif

enum {
ACCAP_CKFW,
ACCAP_REFCLK,
ACCAP_DEMUX,
ACCAP_DEMUX1
};

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

#ifndef SUPPORT_NEW_CDS
#define reset_bypass 			0x0001
#define coarse_dtl_bypass		0x0002
#define phase_move_with_dfe_en  0x0004 
#define edge_eq_en				0x0008 
#define dfe_adapt_en			0x0010
#define dfe_adapt_f0a_en		0x0020
#define coarse_dfe_en			0x0040 
#define dis_adapt_f1			0x0080 
#define fine_dfe_en				0x0100
#define accu_dfe_en				0x0200
#define f0b_adapt_en			0x0400
#define f0d_adapt_en			0x0800
#define vh_eo_mode				0x1000
#define eye_check_bypass		0x2000
#define ofst_adapt_en			0x4000
#define lock_dfe_on				0x8000

#else

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


#endif
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
#define RESERVED_COE_2_REQ				0x12
#define RESERVED_COE_3_REQ				0x13
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
#define simulation_start()			reg_MCU_DEBUG_CMN_0_7_0 = 0xaa 


#define master_sync_request()	{ SYNC_STATUS_LANE = ACK; SYNC_REQUEST_LANE = WAIT; \
		while(!reg_MCU_STATUS1_AND_31_0_b0); }

#define master_sync_clean()	{ SYNC_STATUS_LANE = IDLE; SYNC_REQUEST_LANE = IDLE; \
		while(reg_MCU_STATUS1_OR_31_0_b0); }
	
		
#define slave_sync_wait()		{ 	while(SYNC_REQEST_LANE_READ!=WAIT); \
		SYNC_STATUS_LANE = ACK; \
		while(SYNC_REQEST_LANE_READ!=IDLE); \
		SYNC_STATUS_LANE = IDLE; }

#define pcie_master_sync_request()	{ SYNC_STATUS_LANE = ACK; SYNC_REQUEST_LANE = WAIT; \
		sync_check = 0; \
		do { \
		  sync_check = ((SYNC_STATUS_LANE1_EN_READ==1)? SYNC_STATUS_LANE1_READ:1) && \
			      ((SYNC_STATUS_LANE2_EN_READ==1)? SYNC_STATUS_LANE2_READ:1) && \
			      ((SYNC_STATUS_LANE3_EN_READ==1)? SYNC_STATUS_LANE3_READ:1);   \
		} while(!sync_check); }					
							
#define pcie_master_sync_clean()	{ SYNC_STATUS_LANE = IDLE; SYNC_REQUEST_LANE = IDLE; \
		sync_check = 0; \
		do { \
		  sync_check = ((SYNC_STATUS_LANE1_EN_READ==1)? SYNC_STATUS_LANE1_READ:0) || \
			      ((SYNC_STATUS_LANE2_EN_READ==1)? SYNC_STATUS_LANE2_READ:0) || \
			      ((SYNC_STATUS_LANE3_EN_READ==1)? SYNC_STATUS_LANE3_READ:0);   \
		} while(sync_check);  }				
			
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

typedef struct {
//    dfe_2c_t dfee; // 8
//    dfe_2c_t dfeo; // 8
    Status_dfe_t dfe_2c; // 72
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
	uint8_t g0_index; // the index of TX FFE G0 train=>reg_TX_AMP_INDEX
	uint8_t g1_index; // the index of G1 train=>reg_TX_EMPH1_INDEX
	uint8_t gn1_index; // the index of Gn1 train=>reg_TX_EMPH0_INDEX
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

typedef struct Status_CDS_tag{
	uint8_t f0a_data, f0a_slicer;
	uint8_t f0a_max_data, f0a_max_slicer;
	uint8_t f0_data, f0_slicer;
	int8_t f1;
	int8_t f2_data, f2_slicer;
	int8_t f3_data, f3_slicer;
	int8_t f4;
	int8_t f5;
	int8_t f6;
	int8_t f7;
	uint8_t f0d_data_center, f0d_slicer_center;
	uint8_t f0d_data_left, f0d_slicer_left;
	uint8_t f0d_data_right, f0d_slicer_right;
	int8_t eye_check_pass;
	int8_t ofst_data, ofst_slicer;
} Status_CDS_t;

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
#ifdef SUPPORT_NEW_CDS
//#include "ph_ctrl.h"
#endif
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
    void delay(int16_t);
	void short_delay();
	void short_delay_0(void);
	uint16_t u16mul (uint16_t a, uint16_t b);
	uint16_t u16div(uint16_t x, uint16_t y);
	BIT is_toggle_pat( uint8_t val );
//	#ifndef SIM_ENV
#define timeout_start(a) {TMR1=~(a-1);TR1=1; timeout=0;}  //have to be a>1, unit 1 uS.
#define timeout2_start(a) {TMR2=~(a-1); T2CON=0x7a; timeout2=0; } //62  //have to be a>1, unit 1uS/1mS.

//	#else
//#define timeout_start(a) timeout=1
//	#endif
#define timeout_stop     { TR1=0; TF1= 0; }
#define timeout_stop2    { T2CON=0x60; TF2=0; }

	int8_t max(int8_t a, int8_t b);
    int8_t min(int8_t a, int8_t b);
    int8_t clamp(int8_t a, int8_t ub, int8_t db);
	uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db);
	int16_t clamp16(int16_t a, int16_t ub, int16_t db);
    int8_t abs(int8_t a);
	int16_t abs16(int16_t a);
	void memcpy(uint8_t *des, uint8_t *src, int n) ;
	void memset0(uint8_t *dest, int n) ;
	
	// -- power
	void PowerUp_Seq_Test(void);
#define PowerUp_Seq_Simple() PowerUp_Seq_Test()
	void PowerUp_Seq(void);
	void Power_P0s_P1( void );
	void Power_P1_P2( void );
	void Power_P2_P1(void);
	void Power_P1_P0(void);
	void Power_P2_P0(void) ;
	void Power_P1_P1CLKREQ(void);
	void Power_P1CLKREQ_P1(void);
	void Power_P0_TXDETRX(void) ;
	void Power_P1_TXDETRX(void);	
	void Power_P2_TXDETRX(void);	
	void P0Off_TXDETRX(void);
	void Power_P2_BEACON(void);
	void Power_Slumber( void );
	void Power_Patial_Slumber( void );
	void Power_Slumber_Wakeup( void );
	//void Power_PLL_Control(void) ;
	void clear_xdata(void);
	void clear_xdata_error(void) ;
	void read_user_config(void) ;
	void init_xdata(void);
	void init_reg(void);
	void set_timer_cnt();
	void DTL_DTX_DFE_clkoff_reset_0(void);	
	void txlane_align(void) ;	
	void pll_clk_ready_all_0(void) ;
	void reset_pwr_reg(void) ;
	
    // -- Speed Control
	void SpeedChange(void);
	void loadSpeedtbl(void);
	void loadspeedtbl_pll(uint8_t gen);
	void loadspeedtbl_ringpll(uint8_t gen) ;
	void loadspeedtbl_gen(void);
	void loadSpdtbl_4_fcnt(void);
	void ringloadSpdtbl_4_fcnt(void) ;
	void check_speed_table_load(void); 

    // -- Calibrations
	void Calibration(void);
	void set_test_pattern(uint8_t pt_4t_en) ;
	void recover_test_pattern(void) ;	
	void Cal_Cont(void);
	int16_t read_tsen(void);
	void plldcc_cal(void);
	void pll_cal(void);
	void ring_pll_cal(void);
	void pll_amp_cal(void);	
	void pll_amp_cal_cont(void) ;
	uint8_t pll_amp_dec_inc(void) ;
	uint8_t pll_amp_dac_dec(void) ;
	void pll_temp_cal( void );
	void pll_fast_cal(void);
	void spdchg_pll_fast_cal(void);
	void eom_align_cal(void);
	void dll_cal(void);
	void dll_cal_cont(void);
	void dll_comp_cal( void );
	void dll_gm_cal( void ) ;
	void dll_vdda_cal(  uint8_t mode ) ;
	void dll_eom_gm_cal( void ) ;
	void dll_eom_vdda_cal(  uint8_t mode ) ;
	void set_sellv_rxdll_ch(uint8_t val) ;
	uint8_t get_sellv_rxdll_ch(void) ;
	void set_sellv_rxeomdll_ch(uint8_t val) ;
	uint8_t get_sellv_rxeomdll_ch(void) ;
	void rxdcc_dll_cal(void);
	void rxdcc_center_cal(void);
	void rxdcc_eom_cal(void);
	void rxalign90_cal(void);
	void eom_cal(void);	
	void set_sampler(int8_t val) ;
	void sampler_cal_sel(uint8_t sw);
	int8_t get_sampler(void) ;
	void sampler_sel(uint8_t sw);
	void sampler_cal(void);
	void print_osft_f1p(void); 
	void tximp_cal(void);
	void rximp_cal(void);
	void txdetect_cal(void);
	void txdcc_cal(void);
	void txdcc_post_div_cal(void);
	void vdd_cal(void);		
	void align90_comp_cal(void);
	void aling90_phaseshifter_tracking(void);
	void make_align90_soft_lookup(void) ;
	void proc_cal(void);
	void squelch_cal(void);
	bool vdd_cal_op (uint8_t sel);
	void all_cal_ext(void);	
	void pll_clk_ready_1(void);
	void pll_clk_ready_ring_1(void) ;
	void ringpll_dac_fine_output(void) ;
	void fast_startup_mode_ring (void) ;
	void load_cal_data(void) ;
	void mcu_align_0(void) ;
	uint8_t find_next_mcu(void) ;
	void enter_ringpll_reg_access(void) ;
	void exit_ringpll_reg_access(void) ;
	void ring_pll_fast_cal(void) ;
	void ring_pll_cont(void) ;
	void Edge_Sampler_Update(void) ;
	void  save_sampler_edge(void) ;
	bool find_align90_lock(void) ;
	
	// -- rxinit
	void RX_Init(void);

	// -- DFE
	void dfe_adaptation(void);
	void cdr_dfe_scheme(void);
	void dfe_fsm_run(uint8_t, uint8_t) ;
	void dfe_fsm_run_state(uint8_t stage) ;
	void cds_coarse_dfe(void) ;
	void cds_f0a_dfe(void) ;
	void dfe_load_reset(void) ;
	void sampler_load_reset(void) ;
	void sampler_load(void);
	void disable_all_tap_adapt(void) ;
	void DFE_Final_Calculation( void );
	void get_f0a_max(void);
	void get_f0d_min(void) ;
	void dfe_load(void) ;
	void dfe_load_type(uint8_t) ;
	void dfe_load_f0(void) ;
	void dfe_save(void) ;
	void sampler_load(void) ;
	void sampler_save(void) ;
	void sampler_save_mem(void) ;
	void sampler_load_mem(void) ;
	void dfe_hardware_cont_run(void);
	void dfe_hardware_cont_stop(void) ;
	void DFE_Oncewhile_Adapt(void) ;
	void RxFFE_ACCap(void) ;
	void enable_all_tap_adapt(void) ;
	void dfe_save_mem(void) ;
	void dfe_load_mem(void) ;
	void f0d_measure(void) ;
	void check_eye_check_pass(uint8_t) ;
	void debug_print(void) ;
	void set_slicer_data_sampler_adapt(bool flag) ;
	void set_mmse_fb_mode(void) ;
	void f1_ofst_adjust(void);
	void level_ffe();
	
	void dfe_load_type(uint8_t type);
	void dfe_fsm(uint16_t lpnum, uint8_t tap_en);
	void set_ph_mode(void);
	void set_ph_dat(int8_t phase);
	void set_ph_esm(int8_t phase);
	void set_edge_dly(int8_t, int8_t);
	
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
	int8_t dfe_adapt_align(void) ;
	void set_sel_sdge_dly_tb(int8_t ph) ;
	void set_sel_sdge_dly_tb_mode3(int8_t dat) ;
	void eom_cal_control(void);
	void print_ph_ctrl_status(void) ;
	uint8_t get_f0d_data(void) ;
	uint8_t get_f0d_slicer(void) ;
	void cdr_dfe_init(void) ;

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
	
	// -- train if
	void remote_ctrl(void);
	 //void run_tx_ffe_preset( uint8_t inx);
	 //void check_min_max(void);
	 void trainif_init(void);
	 void frame_marker_ready(void) ;
	 void sq_wait(void) ;
	 void request_local_ctrl(uint16_t dat);
	 void request_local_status(uint16_t dat);
	 void Send_ctrl_to_tx(uint16_t);
	 void get_tx_status(uint8_t check);
	 
	 
	// -- Real Time Phase Adapt
	void eom_phase_update( int16_t eom_dpher ) ;
	void move_eom_phase(int16_t update_ph) ;
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
	
	// -- eom
	void Check_EOM_Stage_fmExt(void);
	
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
	
	// -- command interface
	void cmdif_monitor(void);
#endif //COMMON_H
