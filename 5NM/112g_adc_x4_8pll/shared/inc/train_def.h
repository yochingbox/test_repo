#ifndef TRAIN_DEF_H
#define TRAIN_DEF_H

#define CE_NORMAL	    0
#define CE_P1_NO_EQ     1
#define CE_P2_PRE_POST  2
#define CE_P3_PRE_ONLY  3

#define CE_CL72_INIT_PRE_POST   1
#define CE_CL72_PRESET_NO_EQ    2

// ctrl_pat 
#define CP_PAM2         0
#define CP_RESERVED     1
#define CP_PAM4_GRAY    2
#define CP_PAM4_PREC    3

#define QR 2
#define HR 0
#define FR 1


//--- train interface
#define READY		0
#define UPDATED		1
#define MIN			2
#define MAX			3
#define ST_HOLD		0
#define ST_INC			1
#define ST_DEC			2
#define ST_NO_EQ		3

//=====================

// [simReg]
//#define tag_RANDOM_SEED 257222794
//#define tag_CHANNEL_CASE 1
// [commReg]

//for 112G silicon
#define DFE_CAL_ACCU


//end for 112G silicon

#define tag_MAX_BIG_LOOP 1
#define tag_MAX_BLIND_LOOP 2

#define tag_SAME_SET_NO_UPDATE 0//1
#define tag_BLIND_TRAIN_EN 0
#define tag_SAME_SET_ALWAYS_UPDATE 1
//not used #define tag_dfe_res_ini 1
//#define tag_sampler_by2_ini 0
#define tag_RXFFE_R_GAIN_TRAIN 4 //lnx_RXFFE_R_GAIN_TRAIN_LANE_3_0 //8 //4 //3
#define tag_RXFFE_C_GAIN_TRAIN 15
#define gt0_size 4
#define gt1_size 19	
#define gt2_size 7
#define gt3_size 22
#define tag_RX_FAST_ACQ_EN	1

// [controlReg]
#define LEN_OFFSETRC 9 //not used
#define tag_THRES_K_BASE 16 //from sysParam.h
#define tag_THRES_K_SHFT 4 // = log2(THRES_K_BASE)

// [topReg]
#define tag_TOP_TX_PRESET_INDEX 3
#define tag_TOP_TX_PRESET_INSIDE_ROTATE 0

// [dfeReg]
#define tag_DFE_F0_SAT_THRES 62
//#define tag_DFE_F1_SAT_THRES 30
#define tag_DFE_F1_SAT_THRES 60
#define tag_DFE_F2_SAT_THRES 30

#define tag_GAIN_TRAIN_INIT_EN 1 //lnx_GAIN_TRAIN_INIT_EN_LANE //1
#define tag_GAIN_TRAIN_END_EN 1//lnx_GAIN_TRAIN_END_EN_LANE // 1
#define tag_GAIN_TRAIN_WITH_C 1
#define tag_GAIN_TRAIN_WITH_SAMPLER 0
#define tag_DFE_RES_F0A_LOW_THRES 36 //32
#define tag_DFE_RES_F0A_HIGH_THRES 45 //54 //50
#define tag_DFE_F0_SAT_PROTECT_THRES 58
#define tag_DFE_FX_SUM_SAT_THRES 9 //56G training

#define tag_DFE_VH_EO_MODE 0 
#define tag_DFE_FAST_TIMER 0 // DFE Timer run fast 
#define tag_DFE_F0_MAX 63 
#define tag_DFE_F0_MIN 0  
#define tag_GAIN_TRAIN_ALWAYS 1 //not used reg_DFE_RES_TRAIN_ALWAYS
#define tag_DFE_OB_EN 1 // overboost_en
#define tag_EYE_CHECK_DISABLE 0 //reg_EYE_CHECK_DISABLE 
#define tag_EYE_CHECK_EO_THRE 0 //GR 12 //reg_EYE_CHECK_EO_THRE_1_0 
#ifndef NEW_CDS
#define tag_RESET_PH_EN_DTL 1
#define tag_EO_BASED  1 //reg_EO_BASED
#endif
#define tag_DFE_INIT_REG 	0//lnx_DFE_INIT_REG_LANE //0//hr:follow hphy. <-1

#define tag_DFE_FN1_MAX	63
#define tag_DFE_FN1_MIN	-64

#define tag_OS_PH_ADJ_THRE			4

#define tag_DFE_F0_RES_SEL_MAX		3
#define tag_DFE_F1_RES_SEL_MAX		3
#define tag_DFE_F2_RES_SEL_MAX 		3
#define tag_DFE_F34_RES_SEL_MAX 	1
#define tag_DFE_F567_RES_SEL_MAX 	1
#define tag_DFE_F8TO15_RES_SEL_MAX 	1
#define tag_DFE_FFLOAT_RES_SEL_MAX 	1
#define tag_DFE_OFST_RES_SEL_MAX 	3

//vref train
#define tag_VREF_TBL_SIZE			4
#define tag_VREF_RES_INI			3
#define tag_VREF_RES_LOW_THRES		40//32
#define tag_VREF_RES_HIGH_THRES		55//60

//gain train

#define tag_DFE_RES_F0A_LOW_THRES_01_INIT  30
#define tag_DFE_RES_F0A_LOW_THRES_0_INIT   30
#define tag_DFE_RES_F0A_LOW_THRES_1_INIT   11
#define tag_DFE_RES_F0A_LOW_THRES_2_INIT   10
#define tag_DFE_RES_F0A_LOW_THRES_3_INIT   6
#define tag_DFE_RES_F0A_HIGH_THRES_INIT    50

#define tag_DFE_RES_F0A_LOW_THRES_01_END  30 
#define tag_DFE_RES_F0A_LOW_THRES_2_END   30 
#define tag_DFE_RES_F0A_LOW_THRES_3_END   30 
#define tag_DFE_RES_F0A_HIGH_THRES_END    50

#define tag_DFE_RES_F0A_LOW_THRES_01  25 //36
#define tag_DFE_RES_F0A_LOW_THRES_2   25 //41
#define tag_DFE_RES_F0A_LOW_THRES_3   25 //44

#define tag_DFE_RES_F1_LOW_01  20
#define tag_DFE_RES_F1_LOW_2   22
#define tag_DFE_RES_F1_LOW_3   24

#define tag_DFE_REA_F1_LOW			20
#define tag_DFE_REA_F1_HIGH			29
#define tag_DFE_REA_F2_LOW			20
#define tag_DFE_REA_F2_HIGH			29
#define tag_DFE_REA_F3_LOW			10
#define tag_DFE_REA_F3_HIGH			13
#define tag_DFE_REA_F4_LOW			20
#define tag_DFE_REA_F4_HIGH			29
#define tag_DFE_REA_F5_LOW			16
#define tag_DFE_REA_F5_HIGH			29
#define tag_DFE_REA_F6_LOW			16
#define tag_DFE_REA_F6_HIGH			29
#define tag_DFE_REA_F7_LOW			8
#define tag_DFE_REA_F7_HIGH			13


// [cdrReg]
#define tag_CDR_PHASE_OPT_IN_BLIND 1
#define tag_CDR_PHASE_LAST_ALWAYS 0
#define tag_CDR_PHASE_LAST_ONLY 1
#define tag_CDR_PHASE_OPT_FIRST_EN 0 //1 //0
#define tag_CDR_MIN_PHASE_OS -50 //45 
#define tag_CDR_MAX_PHASE_OS 31  //127 
#define tag_CDR_MIN_PHASE_OS_MODE01 -127 //-28 //-20  //+/-10
#define tag_CDR_MAX_PHASE_OS_MODE01 127 //18 //1 //20
#define tag_CDR_MIN_PHASE_OS_MODE23 -60 //-50 //32 //a range around -0.5UI to 0.5UI
#define tag_CDR_MAX_PHASE_OS_MODE23 60 //50 //32   
#define tag_CDR_ALIGN90_INC_IS_CLOCK_DELAY	1
#define tag_CDR_EOM_INC_IS_CLOCK_DELAY	0
#define tag_CDR_HALF_UI_PI_CODE	32 //24 
#define tag_CDR_PHASE_STEP_SIZE 2
#define tag_CDR_STEP_NUM 8
#define tag_CDR_F0P_EO_BASED 1
#define tag_CDR_STOP_IF_WORSE 1
#define tag_CDR_SKIP_CDR_MODE_EN 0
#define tag_CDR_STOPPING_THRE 5 
#define tag_CDR_MAXF0P_EN 1
#define tag_CDR_MIDPOINT_EN 1
#define tag_CDR_EYE_WIDTH_EN 0 //new phase train
#define tag_CDR_ADD_PHASE_OS_ONLY 0
#define tag_CDR_MIDPOINT_SMALL_THRES_K 8 //lnx_MIDPOINT_SMALL_THRES_K_LANE_7_0 //8 
#define tag_CDR_MIDPOINT_SMALL_THRES_C 0 //lnx_MIDPOINT_SMALL_THRES_C_LANE_7_0 //0 
#define tag_CDR_MIDPOINT_LARGE_THRES_K 9 //lnx_MIDPOINT_LARGE_THRES_K_LANE_7_0 //9 //8 
#define tag_CDR_MIDPOINT_LARGE_THRES_C 2 //lnx_MIDPOINT_LARGE_THRES_C_LANE_7_0 //2 //0 
//moved to var #define tag_CDR_MIDPOINT_PHASE_OS  0 //lnx_MIDPOINT_PHASE_OS_LANE_7_0 // 0
#define tag_CDR_EO_BYPASS_THRES 63 
#define tag_CDR_F0P_REJECT_THRES 8
#define tag_CDR_F0P_PHASEUPDATE_THRES 0
#define tag_CDR_OPT_PHASE_BEFORE_DFE 1

#define tag_CDR_MAX_DFE_ADAPT0	 1
#define tag_CDR_MAX_DFE_ADAPT1	 2

#define tag_CDR_OS_PH_JMP_STEP 4 // minimal jump for os_ph_offset
#define tag_CDR_EYEWIDTH_SMALL_THRES 1
#define tag_CDR_EYEWIDTH_LARGE_THRES 1
#define tag_CDR_EYEWIDTH_STEP_SIZE 1
#define tag_CDR_MAX_ROUND_EYEWIDTH 50
#define tag_CDR_EYEWIDTH_PHASE_OS 0
#define PH_TRAIN_STEP_SIZE 3 //=8

#define tag_CDR_PHASE_PROTECT_EN  1
#define tag_CDR_PHASE_LEVEL_PROTECT_EN 1
#define tag_CDR_PHASE_EO_PROTECT_EN 1
#define tag_CDR_TRAIN_PH_CONTROL_MODE 2 //Mode2 EOM_ERROR, EOM_ERROR 

// [rxReg]
//new todo
#define CTLE_CAP_TB_28G 0	//1:28G, 0:25G
#define tag_RX_CAP_FINAL_ADJUST_EN	0 //1 
#define tag_RX_CAP_FINAL_ALWAY_RUN	0 //1
#define tag_RX_CAP_FINAL_SHORT_TRACE 1
#define tag_RX_CAP_FINAL_LONG_TRACE	1
#define tag_RX_CAP_FINAL_EO_PROTEC_EN 1
#define tag_RX_TEST_FFE_MODE 0
#define tag_RX_DC_FAST_TRIGGER_EN 0
#define tag_RX_R_STEP_SIZE 1 //not used
#define tag_RX_C_STEP_SIZE 1 //not used
#define tag_RX_EO_FFEUPDATE_THRES 7 
#define tag_RX_EO_REJECT_THRES 15 //not used
#define tag_RX_R_MIDPOINT_EN 0
#define tag_RX_R_MIDPOINT_THRES_K 16 //not used
#define tag_RX_R_MIDPOINT_THRES_C -5 //not used
#define tag_RX_C_MIDPOINT_EN 0 //not used
#define tag_RX_C_MIDPOINT_THRES_K 16 //not used
#define tag_RX_C_MIDPOINT_THRES_C -5 //not used
#define tag_RX_MIDPOINT_LAST_ALWAYS 0
#define tag_RX_FFE_OVERBOOST_EN 1
#define tag_RX_FFE_OVERBOOST_THRES 3
#define tag_RX_F12_OVERBOOST_THRES 3 //todo
#define tag_RX_FFE_OVERBOOST_UPDATE_THRES 4
#define tag_RX_F1_OVERBOOST_THRES 	0 //todo
#define tag_RX_F2_OVERBOOST_THRES 	0 //todo
#define tag_RX_F3_OVERBOOST_THRES 	-5
#define tag_RX_F4_OVERBOOST_THRES 	-1
#define tag_RX_F5_OVERBOOST_THRES 	-1
#define tag_RX_SIZE_FFE_TABLE 16 //24
#define tag_RX_RXFFE_R_INI lnx_RX_RXFFE_R_INI_LANE_3_0 //4 //lnx_RX_RXFFE_R_INI_LANE_3_0 //4 //0
#define tag_RX_RXFFE_C_INI 15
#define tag_RX_RXFFE_R_MIN 0
#define tag_RX_RXFFE_R_MAX 15
#define tag_RX_RXFFE_C_MIN 8 //4 //0	
#define tag_RX_RXFFE_C_MAX 15
#define tag_RX_MIN_BOOST_MODE 1
#define tag_RX_LEVEL_PROTECTION_IN_MIN_BOOST 1
#define tag_RX_C_SAT_THRES 3
#define tag_RX_MAX_DFE_ADAPT0	 0

#define tag_RX_MAX_DFE_ADAPT1	 0 //todo debug 2//3

#define tag_RX_CMAX  15
#define tag_RX_CMIN  0
#define tag_RX_RMAX  7
#define tag_RX_RMIN  0


#define tag_SUMFTAP_EN_0 	0
#define tag_SUMFTAP_EN_1 	0 //1
#define tag_SUMFTAP_EN_2 	1 
#define tag_SUMFTAP_EN_3 	1
#define tag_SUMFTAP_EN_4 	1
#define tag_SUMFTAP_EN_5 	1
#define tag_SUMFTAP_EN_6 	0
#define tag_SUMFTAP_EN_7 	0
#define tag_SUMFTAP_SIGN_0 	0
#define tag_SUMFTAP_SIGN_1 	1
#define tag_SUMFTAP_SIGN_2 	1
#define tag_SUMFTAP_SIGN_3 	1
#define tag_SUMFTAP_SIGN_4 	1
#define tag_SUMFTAP_SIGN_5 	1
#define tag_SUMFTAP_SIGN_6 	1
#define tag_SUMFTAP_SIGN_7 	1
#define tag_SUMF_BOOST_TARGET_K	0 //lnx_SUMF_BOOST_TARGET_K_LANE_7_0 //0 //1 //0
//#define sumF_boost_target_c	-60 //lnx_SUMF_BOOST_TARGET_C_LANE_7_0 //-60 //-44 //-22 //-30 //-2 //0x1e //LJ 0
#define tag_SUMF_OVERBOOST_THRES_K  0 //unsigned 4 bits.
#define tag_SUMF_OVERBOOST_THRES_C  3 //signed 9 bits
#define tag_RX_BOOST_MIN  0
#define tag_RX_BOOST_MAX  8191

#define tag_OVERBOOST_DET_MODE  0
#define tag_UNDERBOOST_DET_MODE 0

#define tag_ADJUST_FFE_R2	1
#define tag_TEMP_ADJUST_FFE_R  0 //don't have to open because min_boost para direct changed based on temp.


// [txReg]
#define tag_TX_ADAPT_G0_EN 1 
#define tag_TX_ADAPT_GN1_EN 1 
#define tag_TX_ADAPT_G1_EN 0  
#define tag_TX_SWEEP_PRESET_EN 0
#define tag_TX_STATUS_PCIE_MODE 0
#define tag_TX_NUM_TX_PRESET 3
//#define tag_TX_NUM_TX_PRESET 4

#define tag_TX_PRESET_INDEX 1
#define tag_TX_PRESET_INSIDE_ROTATE 1
//#define	tag_MAX_TRX_TRAINING_NUM 4
#define	tag_MAX_TRX_TRAINING_NUM 3

#define _SUPPORT_BLIND_TRAIN 0
#define tag_TX_BLIND_TRAIN_NO_RESET 0
#define tag_TX_BLIND_OFFSET_G0 2
#define tag_TX_BLIND_OFFSET_GN1 1
#define tag_TX_BLIND_OFFSET_G1 -1
#define tag_TX_TRAIN_P2P_HOLD  lnx_TX_TRAIN_P2P_HOLD_LANE //1 //0
#define tag_TX_F0T_EO_BASED 1
#define tag_TX_MAX_LOOP 1
//#define tag_TX_MAX_LOOP 2
#define tag_TX_G0_STEP_SIZE 1
#define tag_TX_GN1_STEP_SIZE 1
#define tag_TX_G1_STEP_SIZE 1
#define tag_TX_G0_STEP_NUM 8 //10

#define tag_TX_GN1_STEP_NUM 6
#define tag_TX_G1_STEP_NUM 6

#define tag_TX_STOP_IF_WORSE 1

#define tag_TX_STOP_THRES 5
#define tag_TX_EO_BYPASS_THRES 50
#define tag_TX_F0T_REJECT_THRES 8
#define tag_TX_F0T_G0UPDATE_THRES 4
#define tag_TX_F0T_GN1UPDATE_THRES 2
#define tag_TX_F0T_G1UPDATE_THRES 2
#define tag_TX_F0A_HIGH_THRES 50
#define tag_TX_G1_OVERBOOST_THRES 0
#define tag_TX_GN1_MIDPOINT_THRES_K 16
#define tag_TX_GN1_MIDPOINT_THRES_C -5 //-4 //-5
#define tag_TX_GN1_MIDPOINT_INDEX_OS 0 //-8 //-4 //0
#define tag_TX_G1_MIDPOINT_THRES_K 16
#define tag_TX_G1_MIDPOINT_THRES_C -5
#define tag_TX_G1_MIDPOINT_INDEX_OS 0
#define tag_TX_GN1_OVERBOOST_THRES 0
#define tag_TX_PRESET_INDEX_SET0 1
#define tag_TX_PRESET_INDEX_SET1 2
#define tag_TX_PRESET_INDEX_SET2 3
#define tag_TX_PRESET_INDEX_SET3 4
#define tag_TX_PRESET_INDEX_SET4 5
#define tag_TX_PRESET_INDEX_SET5 6
#define tag_TX_PRESET_INDEX_SET6 7
#define tag_TX_PRESET_INDEX_SET7 8

#define tag_TX_GN1_MAXF0T_EN 1
#define tag_TX_GN1_MIDPOINT_EN 1
#define tag_TX_ADD_GN1_OS_ONLY 0


#define tag_TX_G1_MAXF0T_EN 1
#define tag_TX_G1_MIDPOINT_EN 1
#define tag_TX_ADD_G1_OS_ONLY 0

#define tag_TX_MAX_MIDPOINT_CTRL_CNT 128
#define tag_TX_SWEEP_FIRST_EN 0
#define tag_TX_PRESET_UPDATE_THRES 5
#define tag_TX_GN1_OVERBOOST_EN 1

#define tag_TX_GN1_OVERBOOST_UPDATE_THRES 4
#define tag_TX_G1_OVERBOOST_EN 1

#define tag_TX_G1_OVERBOOST_UPDATE_THRES 4

#define tag_TX_G0_INDEX_MIN 9
#define tag_TX_G1_INDEX_MIN 0
#define tag_TX_GN1_INDEX_MIN 0
#define tag_TX_G0_INDEX_MAX 26
#define tag_TX_G1_INDEX_MAX 12
#define tag_TX_GN1_INDEX_MAX 12
#define tag_TX_VMA_PROTECT_EN	0 //todo ???1	
#define tag_TX_POWER_PROTECT_EN 0 //todo ???1 

#define tag_TX_MAX_DFE_ADAPT 0 // debug 1 //3

#define tag_TRAIN_IF_TIME_OUT_EN 1


//===========================

#define tag_PHASE_MOVE_WITH_DFE_EN	0
#define tag_NOT_SUPPORT_TRAIN_USE_DAT_ONLY	0 //1
#define tag_DFE_SAT_PREFER_HIGH_DC	1
#define tag_DFE_ISI_RES_ADAPT_EN	1
#define tag_FINAL_BOTH_SAMPLER_ADAPT	1
#define tag_RX_CAP_FINAL_MIN_BOOST_LEVEL_PROTECT_EN 1

#ifdef _LAB
#define tag_CLOCK_ALIGN_RUN1_NUM	4 //16 //1,2,4,8,16,32,64,128
#define tag_CLOCK_ALIGN_RUN2_NUM	32 //64 //32//512 //32,64,128,256,512,1024,2048,4096
#define tag_CLOCK_ALIGN_RUN3_NUM	32 //64 //32//512 //32,64,128,256,512,1024,2048,4096
#define tag_CLOCK_ALIGN_PHASE_STEP_SIZE2		0 //1 //4 // 1/2^4
#define tag_CLOCK_ALIGN_PHASE_STEP_SIZE3		1 //1 //4 // 1/2^4
#else
#define tag_CLOCK_ALIGN_RUN1_NUM	4 //16 //1,2,4,8,16,32,64,128
#define tag_CLOCK_ALIGN_RUN2_NUM	32 //256 //256 //32//512 //32,64,128,256,512,1024,2048,4096
#define tag_CLOCK_ALIGN_RUN3_NUM	128 //256 //256 //32//512 //32,64,128,256,512,1024,2048,4096
#define tag_CLOCK_ALIGN_PHASE_STEP_SIZE2		1 //2 //1 //4 // 1/2^4
#define tag_CLOCK_ALIGN_PHASE_STEP_SIZE3		4 //2 //1 //4 // 1/2^4
#endif

#define tag_EOM_DRIVE_DATA_EN_MODE2		1
#define tag_EOM_DRIVE_DATA_EN_MODE1 	0

#define tag_CDR_PHASE_MIN	0
#define tag_CDR_PHASE_MAX	192 //45'
#define tag_CDR_ESM_PHASE_MIN 0
#define tag_CDR_ESM_PHASE_MAX 127

#define tag_USE_COMP_TEST_TB 1

#define tag_USE_SEL_EDGE_DLY 1

#define tag_F0D_ERR_LP_CNT 20

#define tag_DFE_ADAPT_NORMAL_SOFT_CONT_EN	lnx_DFE_ADAPT_NORMAL_SOFT_CONT_EN_LANE
#define tag_RXFFE_ACCAP_EN	1

#define tag_PHASE_ADAPT_TEMP_AUTO_CTRL	0

#define tag_AVERAGE_EO_MODE	0

//----------------

#define tag_DFE_ERR_RERUN	0//1

//#define tag_TRAIN_TIME_OUT_EN 1 


#define tag_dfe_adapt_lp_num_dtl		  16 //lnx_DFE_ADAPT_LP_NUM_DTL_LANE_7_0		//16
#define tag_dfe_adapt_lp_num_f0a          16 //lnx_DFE_ADAPT_LP_NUM_F0A_LANE_7_0      //16
#define tag_dfe_adapt_lp_num_corase       16 //lnx_DFE_ADAPT_LP_NUM_CORASE_LANE_7_0   //16
#define tag_dfe_adapt_lp_num_fine         16 //lnx_DFE_ADAPT_LP_NUM_FINE_LANE_7_0     //16
#define tag_dfe_adapt_lp_num_accu         16 //lnx_DFE_ADAPT_LP_NUM_ACCU_LANE_7_0     //16
#define tag_dfe_adapt_lp_num_ofst         16 //lnx_DFE_ADAPT_LP_NUM_OFST_LANE_7_0     //16
#define tag_dfe_adapt_lp_num_f0b          16 //lnx_DFE_ADAPT_LP_NUM_F0B_LANE_7_0      //16
#define tag_dfe_adapt_lp_num_f0d	      16 //lnx_DFE_ADAPT_LP_NUM_F0D_LANE_7_0	    //16
#define tag_pol_tb_lp_num_dtl             1 //lnx_POL_TB_LP_NUM_DTL_LANE_7_0         //1
#define tag_pol_tb_lp_num_f0a             8 //lnx_POL_TB_LP_NUM_F0A_LANE_7_0         //8
#define tag_pol_tb_lp_num_corase          1 //lnx_POL_TB_LP_NUM_CORASE_LANE_7_0      //1
#define tag_pol_tb_lp_num_fine            1 //lnx_POL_TB_LP_NUM_FINE_LANE_7_0        //1
#define tag_pol_tb_lp_num_accu            1 //lnx_POL_TB_LP_NUM_ACCU_LANE_7_0        //1
#define tag_pol_tb_lp_num_ofst            2 //lnx_POL_TB_LP_NUM_OFST_LANE_7_0        //2
#define tag_pol_tb_lp_num_f0b             1 //lnx_POL_TB_LP_NUM_F0B_LANE_7_0         //1
#define tag_pol_tb_lp_num_f0d             2 //lnx_POL_TB_LP_NUM_F0D_LANE_7_0         //2

#endif

typedef enum {
    RX_CTLE_CUR_TIA_SEL2_LANE = 0,
    RX_CTLE_CUR1_SEL2_LANE,
    RX_CTLE_CUR2_SEL2_LANE,
    RX_CTLE_RL1_CTRL_LANE,
    RX_CTLE_RL1_EXTRA_LANE,
    CTLE_R,
    CTLE_C,
    CTLE_GC
} SMOOTH_CTRL_OPT_ARG_t;

