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
#define TX_TRAIN_IF_LANE_BASE	0x2600
#define PIPE_LANE_BASE       	0x4000
#define XDAT_LANE_BASE       	0x6000
#define CDS_LANE_BASE       	0x6300
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

//phy_mode define
#define SATA	0
#define SAS		1
#define PCIE	3
#define SERDES  4
#define USB		5

#ifdef _56G_5NM

// phy register list
//#include "phy_reg_c_an_lane.h"
#include "phy_reg_c_ana_cmn_cal_cmn.h"
#include "phy_reg_c_ana_cmn_cmn.h"
#include "phy_reg_c_ana_pll_rs_cal_lane.h"
#include "phy_reg_c_ana_pll_rs_lane.h"
#include "phy_reg_c_ana_pll_ts_cal_lane.h"
#include "phy_reg_c_ana_pll_ts_lane.h"
#include "phy_reg_c_ana_trx_cal_bot_lane.h"
#include "phy_reg_c_ana_trx_cal_top_lane.h"
#include "phy_reg_c_ana_dfee_lane.h"
#include "phy_reg_c_ana_dfeo_lane.h"

#include "phy_reg_c_cds_lane.h"
#include "phy_reg_c_cmn_cmn.h"
#include "phy_reg_c_mcu_cmn.h"
#include "phy_reg_c_mcu_lane.h"
#include "phy_reg_c_pll_rs_lane.h"
#include "phy_reg_c_pll_ts_lane.h"
#include "phy_reg_c_cmn_if.h"
#include "phy_reg_c_pll_rs_if_lane.h"
#include "phy_reg_c_pll_ts_if_lane.h"
#include "phy_reg_c_rx_if_lane.h"
#include "phy_reg_c_tx_if_lane.h"
//#include "phy_reg_c_rx_cmn.h"
#include "phy_reg_c_rx_lane.h"
#include "phy_reg_c_rx_if_lane.h"
#include "phy_reg_c_rx_eq_lane.h"
//#include "phy_reg_c_tx_cmn.h"
#include "phy_reg_c_tx_lane.h"
#include "phy_reg_c_tx_train_if_lane.h"
#include "phy_reg_c_xdat_cmn.h"
#include "phy_reg_c_xdat_lane.h"
#include "phy_reg_c_ana_trx_lane.h"
#include "phy_reg_c_pipe_lane.h"
#include "phy_reg_c_pipe_glob_lane.h"
#include "phy_reg_def.h"

#else
// phy register list
//#include "phy_reg_c_an_lane.h"
#include "phy_reg_c_ana_cmn_cal_cmn.h"
#include "phy_reg_c_ana_cmn_cmn.h"
#include "phy_reg_c_ana_pll_rs_cal_lane.h"
#include "phy_reg_c_ana_pll_rs_lane.h"
#include "phy_reg_c_ana_pll_ts_cal_lane.h"
#include "phy_reg_c_ana_pll_ts_lane.h"
#include "phy_reg_c_ana_trx_cal_bot_lane.h"
#include "phy_reg_c_ana_trx_cal_top_lane.h"
#include "phy_reg_c_ana_dfee_lane.h"
#include "phy_reg_c_ana_dfeo_lane.h"

#include "phy_reg_c_cds_lane.h"
#include "phy_reg_c_cmn_cmn.h"
#include "phy_reg_c_mcu_cmn.h"
#include "phy_reg_c_mcu_lane.h"
#include "phy_reg_c_pll_rs_lane.h"
#include "phy_reg_c_pll_ts_lane.h"
//#include "phy_reg_c_rx_cmn.h"
#include "phy_reg_c_rx_lane.h"
#include "phy_reg_c_rx_eq_lane.h"
//#include "phy_reg_c_tx_cmn.h"
#include "phy_reg_c_tx_lane.h"
#include "phy_reg_c_tx_train_if_lane.h"
#include "phy_reg_c_xdat_cmn.h"
#include "phy_reg_c_xdat_lane.h"
#include "phy_reg_c_ana_trx_lane.h"
#include "phy_reg_c_pipe_lane.h"
#include "phy_reg_c_pipe_glob_lane.h"
#include "phy_reg_def.h"


#endif //_56G_5NM

#include "train_def.h"
#include "drv_cdr_dfe_scheme.h"
#include "ph_ctrl.h"
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
#define Tus 	 10  
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
#define T_9us	 90           
#define T_10us   100
#define T_12us   120
#define T_12p5us 125            
#define T_15us   150
#define T_16us   160
#define T_20us   200
#define T_25us   250
#define T_32us   320
#define T_37p5us 375
#define T_40us   400
#define T_50us   500
#define T_62p5us 625
#define T_100us  1000


/*#define TIMEOUT_DLL_CAL					1000
#define TIMEOUT_RXEOMDCC_CAL			1000
#define TIMEOUT_RXDCC_CAL				1000
#define TIMEOUT_RXIMP_CAL				1000
#define TIMEOUT_TXIMP_CAL				1000
#define TIMEOUT_TXDCC_CAL				1000
#define TIMEOUT_SQ_OFST_CAL				1000
#define TIMEOUT_SQ_THRESH_CAL			1000*/

// --
#define NULL 0
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
#define NUM_MCU_LANES (MAX_MCU_ID + 1)
#define MCU_CMN		0xc0

#define ELEMENT_CNT(arr) ((sizeof(arr))/(sizeof(arr[0])))

#define MOST_SIMPLE_LEVEL		1
#define NORMAL_LEVEL			0

#define DLL_PHASE_STEP	0
#define DLL_VDDA_STEP	1

//ctrl 
#define IDLE	0
#define WAIT	1
#define ACK		1

//
#define TRAIN_ON 0
#define NORM_ON 1
#define NO_SAVE 2

#define MCU_SYNC_LANE0		cmx_MCU_SYNC_LANE0_RD
#define MCU_SYNC_LANE1		cmx_MCU_SYNC_LANE1_RD
#define MCU_SYNC_LANE2		cmx_MCU_SYNC_LANE2_RD
#define MCU_SYNC_LANE3		cmx_MCU_SYNC_LANE3_RD

#define TX_PLL_RATE_INX		lnx_TX_PLL_RATE_INDEX_LANE_7_0
#define RX_PLL_RATE_INX		lnx_RX_PLL_RATE_INDEX_LANE_7_0

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
TS_PLL,
RS_PLL,
};	

enum {
	SELLV_RXDLL=0, //RXDLL_HF
	SELLV_RXDLL_EOM=2, //RXDLL_EOM_HF
	SELLV_RXCLK=3, //RXCLK_HF
	SELLV_RXCLK_EOM=5, //RXCLK_EOM_HF
	SELLV_RXSMPLR=6, //RXSMPLR_HF
	SELLV_TXDATA=10,  //VDDA_TXDATA
	SELLV_TXCLK=11  //VDDA_TXCLK
};

/*
enum {
CDS_TX_TRAIN_PRESET, //CDS_EN_FASTACQ	
CDS_GAINTRAIN_INIT,
CDS_GAINTRAIN_INIT1,
CDS_GAINTRAIN_INIT2,
CDS_INIT_PHASE_TRAIN,
CDS_RES_F0_START, //not use
CDS_RES_F0,
CDS_INIT_PHASE_TRAIN1,
CDS_RSWEEP,
CDS_RSWEEP_SHORT,
CDS_RES_F0VREF, //??
//CDS_RES_F0VREF_END, //??
CDS_PHASE_TRAIN, //??
CDS_OPT_PHASE_TRAIN, //??
CDS_RL2_TUNE_ADJ, //??
CDS_PHASE_TRAIN_FINAL, //??
CDS_PHASE_TRAIN_FINAL1, //??
CDS_RES_F0_END, //??
CDS_GAINTRAIN_END,
CDS_ADV_CLK_ALIGN, //??
CDS_RES_VREF_ISI,
CDS_FINAL,
CDS_FINAL_MEASURE, //??
CDS_NULL
};*/


#define CDS_TX_TRAIN_PRESET		0
#define CDS_GAINTRAIN_INIT		1
#define CDS_GAINTRAIN_INIT1		2
#define CDS_GAINTRAIN_INIT2		3
#define CDS_INIT_PHASE_TRAIN		4	
#define CDS_RES_F0_START		5
#define CDS_RES_F0			6
#define CDS_INIT_PHASE_TRAIN2		7
#define CDS_RSWEEP			8
#define CDS_RSWEEP_SHORT		9
#define CDS_DFE_RES			10
#define CDS_RES_VREF			11
#define CDS_PHASE_TRAIN			12
#define CDS_RL2_TUNE_ADJ		13
#define CDS_PHASE_TRAIN_FINAL		14
#define CDS_FINAL_PRE			15
#define CDS_FINAL			16
#define CDS_FINAL_MEASURE		17
#define CDS_TRX_TRAIN			18
#define CDS_PCIE_TRAIN			19
#define CDS_PCIE_TRAIN_F0B		20
#define CDS_PCIE_FINAL			21
#define CDS_PCIE_GAINTRAIN_INIT		22
#define CDS_NULL			23

#define VDDA_RXDLL		0x0001
#define VDDA_RXDLL_EOM		0x0004
#define VDDA_RXCLK		0x0008
#define VDDA_RXCLK_EOM		0x0020
#define VDDA_RXSMPLR		0x0040
#define VDDA_TXDATA		0x0400
#define VDDA_TXCLK		0x0800
#define MAX_NUM_REGS		12
#define TX_REGULATORS		0x0c00
#define RX_CLK_TOP_REGULATORS	0x002d
#define ALL_REGULATORS		0x0c6d

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
typedef enum {
   CDS_EN_DEFAULT,
   CDS_EN_DEFAULTPCIE,
   CDS_EN_DEFAULTPCIE_F0B,
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
   CDS_EN_PHASE_TRAIN_ADV,
   CDS_EN_TRACKMEAS
} CDS_EN_t;


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

// -- Assign a bitfield to a whole byte
#define ASSIGN8(a,b) {a = 0xff & b;}
#define ASSIGN16(a,b) {a = 0xffff & b;}
#define ASSIGN32(a,b) {a = 0xffffffff & b;}

// -- structure define

typedef struct REG_tag{
	uint16_t addr;
	uint8_t lo, mask;
} REG_t;


typedef struct Status_Train_tag {
	uint8_t train_step; //
	uint8_t g0_index; //  the index of TX FFE G0 train=>reg_TX_AMP_INDEX
	uint8_t g1_index; // the index of G1 train=>reg_TX_EMPH1_INDEX
	uint8_t gn1_index; // the index of Gn1 train=>reg_TX_EMPH0_INDEX
	uint8_t gn2_index; // the index of Gn2 train=>reg_TX_EMPH2_INDEX
	uint8_t f0a_max;
	uint8_t f0a; // value of F0A (F0 - F-1)
	uint8_t f0;
	uint8_t f0k; 
	int8_t f1; // value of ISI taps
	int8_t f2; //, f2_data, f2_slicer;
	int8_t f3; //, f3_data, f3_slicer;
	int8_t f4;
	int8_t f5;
	int8_t f6;
	int8_t f7;
	uint8_t f0x;
	int8_t fn1; // f0b-f0a
	int8_t fn2; // f0b-f0x
	uint8_t f0t;
	uint8_t eo;//, eo_data, eo_slicer; // value of eye open    //del f0p f0_minus_abs_fn1
	int8_t phase_offset_data; 
	int8_t phase_offset_esm; 
	uint8_t level; // level of TRX FFE
	uint8_t rx_ffe_index; // the index of RX FFE = {c.r}
	uint8_t r,c;
	uint8_t tx_preset_index; 
	bool f0a_saturate;
	bool dfe_saturate;
	bool oe_saturate;
	bool saturated; 
	bool excellent_eo;
	bool good_eo;
	bool poor_eo;
	bool eye_check_pass; 
	uint16_t boost;
	int16_t sumFtap;
	uint16_t outer_eye;
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

typedef void (*_fpTrain)(void);

typedef struct TRAIN_FNC_tag {
	uint8_t train_stm;
	//uint8_t train_cds;
	_fpTrain func;	
} TRAIN_FNC_t;


typedef struct Timeout2_Timer_tag{
	uint32_t start_time;
	uint32_t duration;
}Timeout2_Timer_t;

#define MAX_TIMERS 11 
// timer index
#define TRAINING_TIMER 0
#define DFE_POWER_SAVING_TIMER 1
#define CTLE_TIMER 2
#define PRBS_TIMER 3
#define PHASE_TIMER 4
#define CTLE_TIMER_2 5
#define RL2_TIMER 6
#define TSTEMPC	  7
#define RSTEMPC	  8
#define CAL_TIMER  9
#define CLI_TIMER  10


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
    void delay(int16_t) ;
    void force_delay(int16_t);
	void short_delay();
    #if 0
	void short_delay_0(void);
    #endif
	void short_delay_4g(void) ;

#define timeout_start(a) {TR1=0;TF1=0;TMR1=~(a-1);TR1=1; timeout=0;}  //have to be a>1, unit 1 uS.
//#define timeout2_start(a) {TMR2=~(a-1); T2CON=0x7a; timeout2=0; } //62  //have to be a>1, unit 1uS/1mS.
#define timeout2_running(a) (timeout2_timers[a].duration != 0)
#define timer2_stop(a) timeout2_stop(a)
#define timer2_start(a) timeout2_start((a),1L)

#define timeout_stop     { TR1=0; TF1= 0; }
#define timeout_stop2    { T2CON=0x60; TF2=0; }

// wait_for usage:
// The function will wait until the following situation
// 1. we get the done signal (done_sig gets to 1)
// 2. time has passed "timer" us
// To determine the scenario either from 1 or 2 is by the global variable "timeout".
// If timeout is 1, it means after waiting for "timer"us, it still cannot get done_sig
// If timeout is 0, it means within "timer"us, we got done_sig.

#define wait_for(done_sig,timer)    if((timer) == 0)\
                                        while(!(done_sig));\
                                    else {timeout_start(timer);\
                                        while((!(done_sig))&&(!(timeout)));\
                                        timeout_stop}

	int8_t max(int8_t a, int8_t b) ;
  int8_t min(int8_t a, int8_t b) ;
  int8_t clamp(int8_t a, int8_t ub, int8_t db);
    #if 0
	uint8_t clamp_u8(uint8_t a, uint8_t ub, uint8_t db);
    #endif
	int16_t clamp16(int16_t a, int16_t ub, int16_t db);
  int8_t abs(int8_t a);
	int16_t abs16(int16_t a);
	// output_cnt is needed to only check valid bit(output) in the val, significant 1 to 6, same effect when larger than 6
    #if 0
	uint8_t conv_thermo_2_bi(uint8_t val);	
    #endif
	uint8_t conv_gray2bin(uint8_t) ;
	uint8_t conv_bin2gray(uint8_t) ;
	void memcpy(uint8_t *des, uint8_t *src, int n);
	void memset0(uint8_t *dest, int n);
    void timer2_init();
	uint32_t timer2_check(uint8_t timer_index) ;
	void timeout2_stop(uint8_t timer_index) ;
	uint8_t timeout2_check(uint8_t timer_index) ;
	void timeout2_start(uint8_t timer_index, uint32_t duration) ;
	uint32_t get_time() ;
	void timer2_init() ;
	
	void scheduler(void) ;
	
	void cds_lane_init() BANKING_CTRL;
	void xdat_cmn_init() BANKING_CTRL;
	void xdat_lane_init() BANKING_CTRL ;
	
	void set_mcu_en(void) BANKING_CTRL ;
    void clr_mcu_en(void) BANKING_CTRL ;
	
	// -- Power	
	void PowerUp_Seq_Cal(void) BANKING_CTRL;
#define PowerUp_Seq_Simple() PowerUp_Seq_Cal()
	void PowerUp_Seq(void) BANKING_CTRL;
    bool is_first_time_power_up() BANKING_CTRL;
    void set_first_time_power_up() BANKING_CTRL;
    void clear_first_time_power_up() BANKING_CTRL;
	void set_pwron_seq(uint8_t val) BANKING_CTRL ;
	void clear_all_isr(void) BANKING_CTRL ;
	void clear_tx_isr(void) BANKING_CTRL ;
	void clear_rx_isr(void) BANKING_CTRL ;
	void Power_P0s_P1( void ) BANKING_CTRL;
	void Power_P2( void ) BANKING_CTRL;
	void Power_P2_P1(void) BANKING_CTRL;
	void Power_P1_P0(void) BANKING_CTRL;
	void Power_P2_P0(void) BANKING_CTRL;
	void Power_P1_P1CLKREQ(void) BANKING_CTRL ;
	void Power_P1CLKREQ_P1(void) BANKING_CTRL;
	void Power_P0_TXDETRX(void) BANKING_CTRL;
	void Power_P1_TXDETRX(void) BANKING_CTRL;
	void Power_P2_TXDETRX(void) BANKING_CTRL;
	void P0Off_TXDETRX(void) BANKING_CTRL;
	void Power_P2_BEACON(void) BANKING_CTRL;
    void Power_P1_Snooze_P1_Off(void) BANKING_CTRL;
	void Power_P1_P1CLKREQ_Wakeup(void) BANKING_CTRL ;
	void Power_Slumber( void ) BANKING_CTRL;
	void Power_Patial_Slumber_Tx( void ) BANKING_CTRL;
	void Power_Patial_Slumber_Rx( void ) BANKING_CTRL;
	void Power_Patial_Slumber_Wakeup_Tx( void ) BANKING_CTRL ;
	void Power_Patial_Slumber_Wakeup_Rx( void ) BANKING_CTRL ;
	void Power_Slumber_Wakeup( void ) BANKING_CTRL;	
	//void Power_PLL_Control(void) ;
    void do_nothing_bank1(void) BANKING_CTRL;
	void Pcie_Power_Management(void) BANKING_CTRL;	
	void Serdes_Power_Management(void) BANKING_CTRL ;
    void Serdes_Power_Speed_Management(void) BANKING_CTRL;
	void clear_xdata(void) BANKING_CTRL;
	void init_xdata(void) BANKING_CTRL;
    void powerup_seq__lane_config_update() BANKING_CTRL;
	void init_reg(void) BANKING_CTRL;
	void reset_pwr_reg(void) BANKING_CTRL;
	void set_timer_cnt() BANKING_CTRL;
	void txlane_align(void) BANKING_CTRL;
	void pll_clk_ready_all_0(void) BANKING_CTRL;
	void pll_clk_tx_ready_0(void) BANKING_CTRL ;
	void pll_clk_rx_ready_0(void) BANKING_CTRL ;
	void pll_clk_rs_ready_0(void) BANKING_CTRL;
	void pll_clk_ts_ready_0(void) BANKING_CTRL;
	void check_pll_clk_ready(void) BANKING_CTRL;
    #if 0
	void check_pll_rs_clk_ready(void) BANKING_CTRL;
	void check_pll_ts_clk_ready(void) BANKING_CTRL;
    #endif
	void check_pu_ivref(void) BANKING_CTRL;
	void tx_pll_dig_off(void) BANKING_CTRL ;
	void tx_pll_dig_on(void) BANKING_CTRL ;
	void rx_pll_dig_off(void) BANKING_CTRL;
	void rx_pll_dig_on(void) BANKING_CTRL ;
	void tx_pll_ana_off(void) BANKING_CTRL ;
	void tx_pll_ana_on(void) BANKING_CTRL ;
	void rx_pll_ana_off(void) BANKING_CTRL ;
	void rx_pll_ana_on(void) BANKING_CTRL ;
	void tx_pll_fast_cal_sel(void) BANKING_CTRL ;
    void tx_spd_chg_pll_fast_cal_sel(void) BANKING_CTRL;
	void rx_pll_fast_cal_sel(void) BANKING_CTRL ;
    void rx_spd_chg_pll_fast_cal_sel(void) BANKING_CTRL;
	
	void drv_spd_cfg_dec(void) BANKING_CTRL ;
	void drv_nt_decoder_tx(void) BANKING_CTRL ;
	void drv_nt_decoder_rx(void) BANKING_CTRL ;
	
	void drv_cmn_func_cfg(void) BANKING_CTRL ;
	void drv_rx_func_cfg(void) BANKING_CTRL ;
	void drv_rx_train_if_cfg(void) BANKING_CTRL ;
	void drv_rx_eq_cfg (void) BANKING_CTRL ;
	void drv_tx_func_cfg(void) BANKING_CTRL ;
	void drv_tx_train_if_cfg(void) BANKING_CTRL ;
	void drv_default_toggle(void) BANKING_CTRL ;
    void drv_pll_power_on() BANKING_CTRL ;
    void drv_pll_intpreset_ext() BANKING_CTRL ;
    void drv_pll_reset_ana_lane() BANKING_CTRL ;
	void drv_power_on_seq(void) BANKING_CTRL ;
	void drv_power_on_dig_prot_dis(const bool free_pll) BANKING_CTRL ;
	void drv_power_off_dig_prot_en(void) BANKING_CTRL;
	void drv_rx_off_dig_prot_en(void) BANKING_CTRL ;
	void drv_rx_off_seq(void) BANKING_CTRL ;
	void drv_pll_rs_off_dig_prot_en(void) BANKING_CTRL ;
	void drv_pll_rs_off_seq(void) BANKING_CTRL ;
	void drv_pll_rs_on_seq(void) BANKING_CTRL ;
	void drv_pll_rs_on_dig_prot_dis(void) BANKING_CTRL ;
    void drv_pll_spd_chg_rs_fast_cal() BANKING_CTRL;
	void drv_rx_on_seq(void) BANKING_CTRL ;
    void drv_rx_slow_on_seq(void) BANKING_CTRL ;
	void drv_rx_on_dig_prot_dis(void) BANKING_CTRL ;
	void drv_tx_off_dig_prot_en(void) BANKING_CTRL ;
	void drv_tx_off_seq(void) BANKING_CTRL ;
	void drv_pll_ts_off_dig_prot_en(void) BANKING_CTRL ;
	void drv_pll_ts_off_seq(void) BANKING_CTRL ;
	void drv_pll_ts_on_seq(void) BANKING_CTRL ;
	void drv_pll_ts_on_dig_prot_dis(void) BANKING_CTRL ;
    void drv_pll_spd_chg_ts_fast_cal() BANKING_CTRL;
	void drv_tx_on_seq(void) BANKING_CTRL ;
	void drv_tx_on_dig_prot_dis(void) BANKING_CTRL ;
	void drv_tx_loz2hiz(void) BANKING_CTRL ;
	void drv_tx_hiz2loz(void) BANKING_CTRL ;
    void drv_command_interface(void) BANKING_CTRL;
    void drv_cmd_reg_access(void) BANKING_CTRL;
    void drv_cmd_datapath(void) BANKING_CTRL;

    #ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #endif //#ifdef CONFIG_5NM_56G_X4_4PLL_R1P0

    #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
        #define mcu_remote_command_b0 reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b0     
        #define mcu_remote_command_b1 reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b1 
        #define mcu_remote_command_b2 reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b2 
        #define mcu_remote_command_b3 reg_PIN_MCU_REMOTE_COMMAND_RD_LANE_31_0_b3 
        #define mcu_remote_status_b0  reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_0_b0  
        #define mcu_remote_status_b1  reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_0_b1  
        #define mcu_remote_status_b2  reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_0_b2 
        #define mcu_remote_status_b3  reg_PIN_MCU_REMOTE_STATUS_RD_LANE_31_0_b3 
        #define mcu_local_status_b0   reg_MCU_LOCAL_STATUS_LANE_31_0_b0          
        #define mcu_local_status_b1   reg_MCU_LOCAL_STATUS_LANE_31_0_b1          
        #define mcu_local_status_b2   reg_MCU_LOCAL_STATUS_LANE_31_0_b2          
        #define mcu_local_status_b3   reg_MCU_LOCAL_STATUS_LANE_31_0_b3          
    #endif // #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)

	void pu_ivref_on(void) BANKING_CTRL;
	void pu_pll_on(void) BANKING_CTRL;
	void pu_pll_rs_on(void) BANKING_CTRL;
	void pu_pll_ts_on(void) BANKING_CTRL;
	void pu_pll_off(void) BANKING_CTRL;
    #if 0
	void pu_pll_rs_off(void) BANKING_CTRL;
	void pu_pll_ts_off(void) BANKING_CTRL;
    #endif
    void rx_soft_reset__clear_isr() BANKING_CTRL;
    void tx_soft_reset__clear_isr() BANKING_CTRL;
	void tx_soft_reset(void) BANKING_CTRL ;
	void rx_soft_reset(void) BANKING_CTRL ;
	void rx_soft_reset_release(void) BANKING_CTRL ;
	void tx_soft_reset_release(void) BANKING_CTRL ;
	void trx_soft_reset(void) BANKING_CTRL ;
	void trx_soft_reset_release(void) BANKING_CTRL ;
    void trx_soft_reset_top_wrapper() BANKING_CTRL;
    void trx_soft_reset_top() BANKING_CTRL;
    void set_mcu_soft_reset_occurred(uint8_t val) BANKING_CTRL;
    bool did_mcu_soft_reset_occur() BANKING_CTRL;

	void reset_core_rx_up(void) BANKING_CTRL;
	void reset_core_rx_down(void) BANKING_CTRL;
	void reset_core_tx_up(void) BANKING_CTRL;
	void reset_core_tx_down(void) BANKING_CTRL;

	void pu_rx_up(void) BANKING_CTRL;
	void pu_rx_down(void) BANKING_CTRL;
	void pu_tx_up(void) BANKING_CTRL;
	void pu_tx_down(void) BANKING_CTRL;

	void spd_chg_rx(void) BANKING_CTRL;
	void spd_chg_tx(void) BANKING_CTRL;

	void txloz2hiz_quick(void) BANKING_CTRL ;
	void txdetrx(void) BANKING_CTRL ;
	
    // -- Speed Control
	void rx_eq_cfg (void);

	void SpeedChange_top(void) BANKING_CTRL;
	void SpeedChange(void) BANKING_CTRL;
	void SpeedChange_rx(void) BANKING_CTRL;
	void SpeedChange_tx(void) BANKING_CTRL;
    void turn_off_rx_cont_cal_rs_pll(void) BANKING_CTRL;
    void turn_off_rx_only_cont_cal(void) BANKING_CTRL;
 	void turn_off_rx_cont_cal(void) BANKING_CTRL;
    void turn_off_tx_cont_cal_ts_pll(void) BANKING_CTRL;
    void turn_off_tx_only_cont_cal(void) BANKING_CTRL;
	void turn_off_tx_cont_cal(void) BANKING_CTRL;
	void loadspeedtbl_lc_pll(uint8_t pll_rate_sel, uint8_t ref_clk_sel, int tsrs_sel) BANKING_CTRL;
	//void loadspeedtbl_gen(void);
	void LoadSpeedtbl_tx(void) BANKING_CTRL;
	void LoadSpeedtbl_rx(void) BANKING_CTRL;
	void loadspeedtbl_tx(void) BANKING_CTRL;
	void loadspeedtbl_rx(void) BANKING_CTRL;
    void loadspeedtbl_avdd() BANKING_CTRL;
	void loadSpdtbl_4_fcnt_tx(void) BANKING_CTRL;
	void loadSpdtbl_4_fcnt_rx(void) BANKING_CTRL;
	uint8_t get_pll_rate_index(uint8_t rate) BANKING_CTRL ;
	
    // -- Calibrations
	void Calibration(void) BANKING_CTRL;
	void Calibration_rx(void) BANKING_CTRL;
	void Calibration_tx(void) BANKING_CTRL;
	void set_test_pattern(uint8_t pt_4t_en) BANKING_CTRL;
	void recover_test_pattern(void) BANKING_CTRL;
	void tsen_on(void)  ;
	void check_tsen_ready() ;
	int8_t read_tsen(void) ;
	void read_tsen_cal(void) ;
	void tsen_adc_ctrl_run(void) BANKING_CTRL;
	void rx_bypass_default(void) BANKING_CTRL;
	void tx_bypass_default(void) BANKING_CTRL;
	void rx_plldcc_cal(void) BANKING_CTRL;
	void tx_plldcc_cal(void) BANKING_CTRL;
	void rs_plldcc_cal(void) BANKING_CTRL;
	void ts_plldcc_cal(void) BANKING_CTRL;
    void rx_pll_refclk_sel(void) BANKING_CTRL;
    void tx_pll_refclk_sel(void) BANKING_CTRL;

	//void pll_cal(void);
	void rx_pll_cal(void) BANKING_CTRL;
	void rs_pll_cal(void) BANKING_CTRL;
	void rs_pll_cal_init(void) BANKING_CTRL;
	void rs_pll_fast_cal(void) BANKING_CTRL;
	void ts_pll_fast_cal(void) BANKING_CTRL;
    void turn_on_tx_cont_cal_ts_pll(void) BANKING_CTRL;
    void turn_on_tx_only_cont_cal(void) BANKING_CTRL;
	void turn_on_tx_cont_cal(void) BANKING_CTRL;
    void turn_on_rx_cont_cal_rs_pll(void) BANKING_CTRL;
    void turn_on_rx_only_cont_cal(void) BANKING_CTRL;
	void turn_on_rx_cont_cal(void) BANKING_CTRL;
	void tx_pll_cal(void) BANKING_CTRL;
	void ts_pll_cal(void) BANKING_CTRL;
	void ts_pll_cal_init(void) BANKING_CTRL;
	void rs_pll_amp_cal(void) BANKING_CTRL;
	void ts_pll_amp_cal(void) BANKING_CTRL;
	void ts_pll_amp_cal_cont(void) BANKING_CTRL;
	void rs_pll_amp_cal_cont(void) BANKING_CTRL;
    void pll_amp_rs(void) BANKING_CTRL;
    void pll_amp_ts(void) BANKING_CTRL;
    void pll_amp_rs_cont(void) BANKING_CTRL;
    void pll_amp_ts_cont(void) BANKING_CTRL;
	void rs_pllvdda_cal(uint8_t enable_flag) BANKING_CTRL ;
	void ts_pllvdda_cal(uint8_t enable_flag) BANKING_CTRL ;
	void rs_plldcc_cal_cont(void) BANKING_CTRL;
	void ts_plldcc_cal_cont(void) BANKING_CTRL;
    void pll_dcc_vdd_rs(void) BANKING_CTRL;
    void pll_dcc_vdd_ts(void) BANKING_CTRL;
    void pll_vdd_freq_rs(void) BANKING_CTRL;
    void pll_vdd_freq_ts(void) BANKING_CTRL;
    void pll_dcc_vdd_rs_cont(void) BANKING_CTRL;
    void pll_dcc_vdd_ts_cont(void) BANKING_CTRL;
    void pll_tempc_rs_cont(void) BANKING_CTRL;
    void pll_tempc_ts_cont(void) BANKING_CTRL;
	void rs_plldcc_cal_cont(void) BANKING_CTRL;
	void ts_plldcc_cal_cont(void) BANKING_CTRL;
	void pll_temp_force_idle(void) BANKING_CTRL;
	void pll_temp_cal( void ); // BANKING_CTRL;
	void pll_fast_cal(void);
	void spdchg_pll_fast_cal(void) BANKING_CTRL;
	//void eom_align_cal(void) BANKING_CTRL;
	void set_vref_vdda_half(void) BANKING_CTRL;
	void dll_init(void) BANKING_CTRL;
	void dll_cal(void) BANKING_CTRL;
	void dll_init_cont(void) BANKING_CTRL;

	/*void dll_comp_cal( void ) BANKING_CTRL;
	void dll_gm_cal( void ) BANKING_CTRL;
	void dll_vdda_cal(  uint8_t mode ) BANKING_CTRL;
	void dll_eom_gm_cal( void ) BANKING_CTRL;
	void dll_eom_vdda_cal(  uint8_t mode ) BANKING_CTRL;
	void set_sellv_rxdll_ch(uint8_t val) BANKING_CTRL;
	uint8_t get_sellv_rxdll_ch(void) BANKING_CTRL;
	void set_sellv_rxeomdll_ch(uint8_t val) BANKING_CTRL;
	uint8_t get_sellv_rxeomdll_ch(void) BANKING_CTRL;*/
	//void rxdcc_dll_cal(void) BANKING_CTRL;
	//void rxdcc_data_cal_init(void) BANKING_CTRL;
	//void rxdcc_data_cal(void) BANKING_CTRL;

	void rx_clk_cont_cal(void) BANKING_CTRL ;
    void rx_clk_cont(void) BANKING_CTRL;

	//void rxalign90_cal(void) BANKING_CTRL;
	void txalign90_cal(void) BANKING_CTRL;
	/*void set_sampler(int8_t val) BANKING_CTRL;
	int8_t get_sampler(void) BANKING_CTRL;
	void sampler_sel(uint8_t sw) BANKING_CTRL;*/
	void sampler_cal(void) BANKING_CTRL;
    void smplr_even(void) BANKING_CTRL;
    void smplr_odd(void) BANKING_CTRL;
    void rx_clk(void) BANKING_CTRL;
    void rx_eom(void) BANKING_CTRL;

	//void config_sampler_p1to3_ext(uint8_t val);
	void config_sampler_ext(uint8_t val) BANKING_CTRL;
	//void smplr_to_dfe_ofst_P1P3(void);
	void smplr_to_dfe_ofst(void) BANKING_CTRL;
	void print_osft_f1p(void) BANKING_CTRL; 
	void tximp_cal(void) BANKING_CTRL;
    void tx_imp(void) BANKING_CTRL;
    void tx_tempc(void) BANKING_CTRL;
	void tximp_cal_init(void) BANKING_CTRL;
	void tximp_cal_n(void) BANKING_CTRL;
	void tximp_cal_p(void) BANKING_CTRL;
	void tximp_ext(void) BANKING_CTRL;
    void rx_imp(void) BANKING_CTRL;

	//void txdetect_cal(void) BANKING_CTRL;

    void tx_align90_dcc(void) BANKING_CTRL;
	void txdcc_cal(void) BANKING_CTRL;
    void tx_align90_dcc_imp_cont(void) BANKING_CTRL;
	void txdcc_cal_init_cont(void) BANKING_CTRL;
	void txdcc_cal_cont(void) BANKING_CTRL;
	//void txdcc_pdiv_cal(void) BANKING_CTRL;
	void vdd_cal(uint16_t) BANKING_CTRL;
	uint8_t vdd_cal_op(uint8_t sel) BANKING_CTRL;
	void vdd_cal_sel(uint8_t sel) BANKING_CTRL;
	void vdd_cal_set_pass(uint8_t sel, uint8_t val) BANKING_CTRL ;
	void vdd_cal_calen(uint8_t sel, uint8_t val) BANKING_CTRL ;
	void save_vdd_cal(uint8_t sel, uint8_t cont, uint8_t val) BANKING_CTRL ;
	uint8_t get_vdd_cal(uint8_t sel) BANKING_CTRL ;
	void set_test_pattern(uint8_t pt_4t_en) BANKING_CTRL;
	void recover_test_pattern(void) BANKING_CTRL;
	//void align90_comp_cal(void) BANKING_CTRL;
	void proc_cal(void) BANKING_CTRL;
	//void squelch_cal(void) BANKING_CTRL;
	void rx_sq_ofst_init(void) BANKING_CTRL;
	void rx_sq_ofst_cal(void) BANKING_CTRL;
	void rx_sq_thresh_init(void) BANKING_CTRL;
	void rx_sq_thresh_cal(void) BANKING_CTRL;
    void rx_sq_ofst(void) BANKING_CTRL;
    void rx_sq_thr(void) BANKING_CTRL;

	void all_cal_ext(void) BANKING_CTRL;	
	void all_cal_ext_rx(void) BANKING_CTRL ;
	void all_cal_ext_tx(void) BANKING_CTRL ;

	void rx_eom_cal(void) BANKING_CTRL ;
	void eom_clk_cont_cal(void) BANKING_CTRL ;
    void rx_eom_cont(void) BANKING_CTRL;
	void rx_e2c_dcc_cal(void) BANKING_CTRL ;
	void rx_dll_cal(void) BANKING_CTRL ;
	void rx_pi_dcc_cal(void) BANKING_CTRL ;
	void rx_data_dcc_cal(void) BANKING_CTRL ;
	void rx_edge_dcc_cal(void) BANKING_CTRL ;
	void rx_eom_dll_cal(void) BANKING_CTRL ;
	void rx_eom_pi_cal(void) BANKING_CTRL ;
	void rx_eom_pi_dcc_cal(void) BANKING_CTRL ;

    #if 0
	void pll_clk_ready_all_1(void) BANKING_CTRL ;
    #endif
	void pll_clk_ready_1(void) BANKING_CTRL;
	void pll_clk_rs_ready_1(void) BANKING_CTRL;
	void pll_clk_ts_ready_1(void) BANKING_CTRL;
	void pll_clk_rx_ready_1(void) BANKING_CTRL;
	void pll_clk_tx_ready_1(void) BANKING_CTRL;
	//void fast_startup_mode_ring (void) ;
	void load_cal_data_dll(void) ;
	void tx_cal_load(void) BANKING_CTRL ;
	void rx_cal_load(void) BANKING_CTRL ;
	void ts_pllcal_load(void) BANKING_CTRL;
	void rs_pllcal_load(void) BANKING_CTRL;
	//uint8_t find_next_mcu(void) ;
	/*void enter_ringpll_reg_access(void) ;
	void exit_ringpll_reg_access(void) ;
	void ring_pll_fast_cal(void) BANKING_CTRL;
	void ring_pll_cont(void) BANKING_CTRL;
	void Edge_Sampler_Update(void) BANKING_CTRL;
	void ringpll_save(uint8_t no) BANKING_CTRL;
	void ringpll_load(uint8_t no) BANKING_CTRL;
	void ringpll_dac_fine_output(void) BANKING_CTRL;
	void pllcal_save(uint8_t no) BANKING_CTRL;
	uint8_t pll_amp_dac_dec(void) BANKING_CTRL;
	uint8_t pll_amp_dac_inc(void) BANKING_CTRL;*/
	//void check_pll_lock(void); // BANKING_CTRL;
	void check_rx_pll_lock(void) BANKING_CTRL;
	void check_tx_pll_lock(void) BANKING_CTRL;
	void check_rs_pll_lock(void) BANKING_CTRL;
	void check_ts_pll_lock(void) BANKING_CTRL;
    #ifdef _56G_5NM
    void wait_for_pll_lock() BANKING_CTRL;
    void wait_for_rx_pll_lock() BANKING_CTRL;
    void wait_for_tx_pll_lock() BANKING_CTRL;
    uint8_t drv_pll_read_pll_ts_lock() BANKING_CTRL;
    uint8_t drv_pll_read_pll_rs_lock() BANKING_CTRL;
    #endif // #ifdef _56G_5NM
	//uint8_t align90_read_pd(void) BANKING_CTRL;
	//bool eom_comp_out_rd(void) BANKING_CTRL;
	//uint8_t	temp_level_todic_rd(void) BANKING_CTRL;
	//bool align90_dac_inc(void);
	//bool align90_dac_dec(void);
	//void align90_cal_update(void) BANKING_CTRL;
	void load_init_temp_table(bool) BANKING_CTRL;
	void rs_pll_tempc_speed_adj(void) BANKING_CTRL ;
	void ts_pll_tempc_speed_adj(void) BANKING_CTRL ;
	
	// -- rxinit
	void RX_Init(void) BANKING_CTRL;

	// -- DFE
	void dfe_adaptation(void) BANKING_CTRL;
	void drv_cdr_dfe_scheme(uint32_t) BANKING_CTRL;
	void dfe_fsm_run(void) BANKING_CTRL;
	void dfe_load_reset(void) BANKING_CTRL;
	void sampler_load_reset(void) BANKING_CTRL;
	void disable_all_tap_adapt(void) BANKING_CTRL;
	void enable_all_tap_adapt(void) BANKING_CTRL;
	void f0d_measure(void) BANKING_CTRL;
	void check_eye_check_pass(uint8_t) BANKING_CTRL;
	void debug_print(void) BANKING_CTRL;
	void debug_print_head(void) BANKING_CTRL;
	void set_slicer_data_sampler_adapt(bool flag) BANKING_CTRL;
	void set_mmse_fb_mode(void) BANKING_CTRL;
	void turn_off_floating_taps(void)  BANKING_CTRL;
	void dfe_setoff(void) BANKING_CTRL ;
	void dfe_backon(void) BANKING_CTRL ;
	
	// -- CDR phase
	void phase_control_func() BANKING_CTRL;
	void phase_lookup_tracking(uint8_t step_size); 
	bool get_dac_inc(void);
	bool get_dac_dec(void);
	void cdr_phase_opt(void) BANKING_CTRL;
	void advanced_clk_align(void) BANKING_CTRL;
    #if 0
	void set_sel_sdge_dly_tb(int8_t ph) BANKING_CTRL;
	void set_sel_sdge_dly_tb_mode3(int8_t dat) BANKING_CTRL;
    #endif
	void eom_cal_control(void);
	void print_ph_ctrl_status(void) BANKING_CTRL;
	uint8_t get_f0d_data(void) BANKING_CTRL;
	uint8_t get_f0d_slicer(void) BANKING_CTRL;
	void cdr_dfe_init(void) BANKING_CTRL;

	// -- Training 
	void TRX_Train(void);
	void trx_train_one_time(void);
	void trx_train_top(void) ;
	void opt2train(void) ;
	void train2opt() ;
	void train2optrcd() ;
	void update_opt_trx_ffe();
	void tx_train_dummy(void) ;
	void trx_train_dummy(void) ;
	void trx_train_init(void) ;
	void trx_train_control(void) ;
	void trx_train_end();
	void dfe_cdr_phase_opt(void);
	void gain_train(void);
	void sq_auto_train_enable(void) ;
	//void prbs_checker_ber (void);
	uint8_t update_dfe_res(bool vref_en, bool f0_en, bool isi_en) ;
	void prbs_checker_init(void) BANKING_CTRL;
	void prbs_checker_start(void) BANKING_CTRL;
	void prbs_checker_check_ber (void) BANKING_CTRL;
	void prbs_checker_stop(void) BANKING_CTRL;
	void prbs_checker_uninit(void) BANKING_CTRL;
	int8_t vote_res(uint8_t res, uint8_t res_max, int8_t low_th, int8_t high_th,
int8_t val, uint8_t res_min) ;
	void train_log(uint8_t step);
	void rx_train(void);
	void rx_train_dummy(void) ;
	void ffe_cap_final_adjust(void) ;
	void Set_Rx_FFE(void);
	void rx_ffe_train(void);
	void RX_FFE_Comparision();
	void set_train(void);
	void ffe_res_temp_adjust(void) ;
	void ffe_final_gain_adjust(void) ;
	void rsweep(void) ;
	void rx_dfe_f0_vref_train(void) ;
	void rx_phase_train(void) ;
	void rx_rl2_tune_adjust(void) ;
	void ffe_res2_adjust(void) ;
	void rx_final_phase_train(void) ;
	void train_log(uint8_t step) ;

	// -- TX training
	void tx_train(void);
	void rx_train_dummy(void) ;
	void tx_reset(uint8_t index);
	void tx_preset_sweep(void);
	void tx_train_initial();
	void tx_train_end();
	void tx_train_control();
	void tx_blind_train();
	void tx_ffe_train();
	void tx_g0_train();
	void tx_gn1_train();
	void tx_g1_train();
	void tx_gx_adjust(int8_t x) ;
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
	void update_gn2(int8_t update);
	void tx_train_PCIe(void) ;
	
	// -- train if
	void tx_train_abort();
	void train_if_init() ;
	void set_train_comp() ;
	void set_remote_tx_pam2() ;
	void set_remote_tx_pam4() ;
	void set_remote_tx() ;
	//void remote_ctrl(void);
	//uint8_t remote_check_minmax(void) ;
	//void local_pam2_tx_minmax_check(void) ;
	 //void run_tx_ffe_preset( uint8_t inx);
	 //void check_min_max(void);
	 //void trainif_init(void);
	 //void frame_marker_ready(void) ;
	 //void sq_wait(void) ;
	 //void request_local_ctrl(uint16_t dat);
	 //void request_local_status(uint16_t dat);
	 //void Send_ctrl_to_tx(uint16_t);
	  void req_local_ctrl(uint8_t s, uint8_t c1, uint8_t c0, uint8_t cn1, uint8_t cn2) BANKING_CTRL;	 
	 
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
	void EOM_clock_analog_align(void) BANKING_CTRL;

        void align90ee_ref_adapt( bool tracking_mode_en );
	//void align90ee_ref_adapt( void );
	
	void CTLE_Adaptation(void) BANKING_CTRL;

	uint8_t get_rl2_tune_per_temp(int8_t temp) BANKING_CTRL;
	// -- eom
	void Check_EOM_Stage_fmExt(void);

	// -- lane margin
    void lane_margin_start(void) BANKING_CTRL;
    void cfg_dfe_fm_lane_en(void) BANKING_CTRL;
    void lane_margin_dfe_run(void) BANKING_CTRL;
	
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
#ifndef DSP_BUILD
	void putchar(uint8_t x);
#endif
	void Puts(char* s);
	void uart_monitor(void);
	
	// -- test
	void cli_monitor(void) ;


#endif //COMMON_H
