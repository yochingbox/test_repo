#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

// -- ADC_CAL Variables
//__code uint16_t adc_cal_table[]   = {
//	0x03FF, // ADC_CAL_DEFAULT,
//	0x0003, // ADC_CAL_INIT,
//	0x000F, // ADC_CAL_STARTUP, TODO disable skew for debug
//	0x0300  // ADC_CAL_BACKGROUD
//};

// -- ADC_CAL State declaration
typedef enum {
        ADC_CAL_ST_INIT         = 0,
        ADC_CAL_ST_GAO_INIT     = 1,
        ADC_CAL_ST_SKEW_INIT    = 2,
        ADC_CAL_ST_OFST         = 3,
        ADC_CAL_ST_GAIN         = 4,
        ADC_CAL_ST_PT_SET       = 5,
        ADC_CAL_ST_SKEW_COARSE  = 6,
        ADC_CAL_ST_SKEW_FINE    = 7,
        ADC_CAL_ST_PT_CLR       = 8,
        ADC_CAL_ST_GAO_CONT     = 9,
        ADC_CAL_ST_SKEW_CONT    = 10,
        ADC_CAL_ST_DONE         = 11,
} ADC_CAL_STATE_t;

#define ADC_CAL_ST reg_ADC_CAL_STATE_LANE_7_0
#define ADC_CAL_ST_JUMP(name)  {ADC_CAL_ST = ADC_CAL_ST_ ## name;}

#define gao_init_en    0x0001
#define skew_init_en   0x0002
#define ofst_en        0x0004
#define gain_en        0x0008
#define pt_set_en      0x0010
#define skew_coarse_en 0x0020
#define skew_fine_en   0x0040
#define pt_clr_en      0x0080
#define gao_cont_en    0x0100
#define skew_cont_en   0x0200

//TODO no Rx clock before calibration done and release DTL reset, add to Minh seqeunce

#ifdef DRV_ADC_CAL_V0
void drv_adc_cal (uint16_t adc_cal_en) BANKING_CTRL
{

    uint8_t sav_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE;
    uint8_t sav_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE;
    uint8_t sav_RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE;
    uint8_t sav_RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE;
    uint8_t sav_RX_ADC_IF_AGC_SQ_FREZ_EN_LANE;
    uint8_t sav_RX_SKEW_CAL_SQ_FREZ_EN_LANE;
    uint8_t sav_RX_CTLE_RL1_CTRL_LANE_3_0;
    uint8_t sav_RX_CTLE_CS2_CTRL_LANE_4_0;
    uint8_t sav_RX_CTLE_RS2_CTRL_LANE_4_0;
    uint8_t sav_RX_CTLE_GAIN_COARSE_LANE_3_0;
    uint8_t sav_RX_CTLE_CL1_CTRL_LANE_3_0;
    uint8_t sav_RX_CTLE_RL1_EXTRA_LANE_2_0;
    uint8_t sav_RX_CTLE_LB_RES_SEL_LANE_3_0;

    if(TRAIN_SIM_EN) return;

    ADC_CAL_ST_JUMP(INIT);

    if(adc_cal_en & gao_init_en)
    {
    ADC_CAL_ST_JUMP(GAO_INIT);

        //Disable SQ protection for power up calibration
        sav_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE = reg_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE;
        sav_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE = reg_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE;
        sav_RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE = reg_RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE;
        sav_RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE = reg_RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE;
        sav_RX_ADC_IF_AGC_SQ_FREZ_EN_LANE = reg_RX_ADC_IF_AGC_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE = 0;
        reg_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE = 0;
        reg_RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE = 0;
        reg_RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE = 0;
        reg_RX_ADC_IF_AGC_SQ_FREZ_EN_LANE = 0;
        //Reset ADC CAL and AGC circuit
        reg_RX_ADC_IF_RST_LANE = 1;
        reg_RX_ADC_IF_RST_LANE = 0;
        //Initial AGC to digital
        reg_RX_ADC_IF_AGC_GAIN_EXT_LANE_4_0 = 16;
        reg_RX_ADC_IF_AGC_LOAD_LANE = 1;
        reg_RX_ADC_IF_AGC_LOAD_LANE = 0;
        //Initial AGC to analog
        reg_RX_ADC_IF_AGC_FORCE_LANE = 1;
        reg_RX_ADC_IF_AGC_CLK_EXT_LANE = 1;
        reg_RX_ADC_IF_AGC_CLK_EXT_LANE = 0;
        reg_RX_ADC_IF_AGC_FORCE_LANE = 0;
	//Set periods
	reg_RX_ADC_IF_TARGET_AVG_SIZE_LANE_1_0 = 0; //0:1024
	reg_RX_ADC_IF_AVG_SIZE_LANE_1_0 = 0; //0:1024
	reg_RX_ADC_IF_AGC_RATE_LANE_1_0 = 0; //0:1024
	is_pause();

    }

    if(adc_cal_en & skew_init_en)
    {
    ADC_CAL_ST_JUMP(SKEW_INIT);

        //Turn on Tx data path TODO remove in the future
        reg_TX_CLK_EN_LANE = 1;
        reg_TX_FIR_CLK_OFF_LANE = 0;
        reg_TX_RESET_FIR_LANE = 0;
        //Disable SQ protection for power up calibration
        sav_RX_SKEW_CAL_SQ_FREZ_EN_LANE = reg_RX_SKEW_CAL_SQ_FREZ_EN_LANE;
        reg_RX_SKEW_CAL_SQ_FREZ_EN_LANE = 0;
        //Reset SKEW circuit
        reg_RX_SKEW_CAL_RST_LANE = 1;
        reg_RX_SKEW_CAL_RST_LANE = 0;
        //Initial SKEW to analog
        reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE = 1;
        reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE = 1;
        reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE = 0;
        reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE = 0;
	//Set SKEW calibration
	reg_RX_SKEW_CAL_TH_EN_LANE_7_0 = 0xff;
	reg_RX_SKEW_CAL_AVE_SIZE_LANE_2_0 = reg_SU_SKEW_CAL_AVE_SIZE_LANE_2_0;
	is_pause();

    }

    if(adc_cal_en & ofst_en)
    {
    ADC_CAL_ST_JUMP(OFST);

	//Set ADC short option for Offset Calibration
	reg_RX_CTLE_OUT_SQ_EN_LANE = 1;
	delay(T_5us);
	//Set OFST MU
	reg_RX_ADC_IF_DAT_OFST_MU_LANE_3_0 = reg_SU_ADC_IF_DAT_OFST_MU_LANE_3_0;
	//Set OFST only
	reg_RX_ADC_IF_DELTA_ZERO_LANE_4_0 = reg_SU_ADC_IF_DELTA_ZERO_LANE_4_0; //compensate analog model mismatch
	reg_RX_ADC_IF_DAT_OFST_EN_LANE = 1; //enable ofst
	reg_RX_ADC_IF_DAT_GAIN_EN_LANE = 0; //disable gain
	//Start ADC calibration
	reg_RX_ADC_IF_TOP_EN_LANE = 1;
	reg_RX_ADC_IF_OFST_LOCK_DET_EN_LANE = 1;
	wait_converge (reg_SU_ADC_IF_OFST_TIMER_LANE_15_0);
	reg_SU_ADC_IF_OFST_LOCK_DET_RD_LANE = reg_RX_ADC_IF_OFST_LOCK_DET_LANE;
	reg_RX_ADC_IF_OFST_LOCK_DET_EN_LANE = 0;
	reg_RX_ADC_IF_TOP_EN_LANE = 0;
	//Clear setting
	reg_RX_CTLE_OUT_SQ_EN_LANE = 0;
	is_pause();

    }

    if(adc_cal_en & gain_en)
    {
    ADC_CAL_ST_JUMP(GAIN);

	//Set ADC DC option for Gain Calibration
	reg_RX_CTLE_OUT_DC_SEL_LANE_2_0 = reg_SU_CTLE_OUT_DC_SEL_LANE_2_0; //set dc to 50mv
	reg_RX_CTLE_OUT_DC_EN_LANE = 1;
	delay(T_5us);
	//Set GAIN MU
	reg_RX_ADC_IF_TARGET_MU_LANE_3_0 = reg_SU_ADC_IF_TARGET_MU_LANE_3_0;
	reg_RX_ADC_IF_DAT_GAIN_MU_LANE_3_0 = reg_SU_ADC_IF_DAT_GAIN_MU_LANE_3_0;
	reg_RX_ADC_IF_AVE_REJ_MU_LANE_2_0 = reg_SU_ADC_IF_AVE_REJ_MU_LANE_2_0;
	reg_RX_ADC_IF_AVE_REJ_EN_LANE = 0; //disable average rejection
	//Set GAIN only
	reg_RX_ADC_IF_DAT_OFST_EN_LANE = 0; //disable ofst
	reg_RX_ADC_IF_DAT_GAIN_EN_LANE = 1; //enable gain
        //Select ADC00 as reference
        reg_RX_ADC_IF_TARGET_SEL_LANE = 1;
        reg_RX_ADC_IF_EXT_SEL_LANE_6_0 = 0;
        reg_RX_ADC_IF_GAIN_EXT_LANE_7_0 = 0;
        reg_RX_ADC_IF_GAIN_LOAD_LANE = 1; //freeze ADC00
        //Start Target calibration
	reg_RX_ADC_IF_TARGET_EN_LANE = 1;
	wait_converge (reg_SU_ADC_IF_GAIN_TIMER_LANE_15_0);
	reg_RX_ADC_IF_TARGET_EN_LANE = 0;
	//Start ADC calibration
	reg_RX_ADC_IF_TOP_EN_LANE = 1;
	reg_RX_ADC_IF_GAIN_LOCK_DET_EN_LANE = 1;
	wait_converge (reg_SU_ADC_IF_GAIN_TIMER_LANE_15_0);
	reg_SU_ADC_IF_GAIN_LOCK_DET_RD_LANE = reg_RX_ADC_IF_GAIN_LOCK_DET_LANE;
	reg_RX_ADC_IF_GAIN_LOCK_DET_EN_LANE = 0;
	reg_RX_ADC_IF_TOP_EN_LANE = 0;
	//Clear setting
	reg_RX_CTLE_OUT_DC_EN_LANE = 0;
        reg_RX_ADC_IF_GAIN_LOAD_LANE = 0;
	is_pause();

    }

    if(adc_cal_en & pt_set_en)
    {
    ADC_CAL_ST_JUMP(PT_SET);

	//Save Calibration CTLE setting
	sav_RX_CTLE_RL1_CTRL_LANE_3_0 = reg_RX_CTLE_RL1_CTRL_LANE_3_0;
	sav_RX_CTLE_CS2_CTRL_LANE_4_0 = reg_RX_CTLE_CS2_CTRL_LANE_4_0;
	sav_RX_CTLE_RS2_CTRL_LANE_4_0 = reg_RX_CTLE_RS2_CTRL_LANE_4_0;
	sav_RX_CTLE_GAIN_COARSE_LANE_3_0 = reg_RX_CTLE_GAIN_COARSE_LANE_3_0;
	sav_RX_CTLE_CL1_CTRL_LANE_3_0 = reg_RX_CTLE_CL1_CTRL_LANE_3_0;
	sav_RX_CTLE_RL1_EXTRA_LANE_2_0 = reg_RX_CTLE_RL1_EXTRA_LANE_2_0;
	sav_RX_CTLE_LB_RES_SEL_LANE_3_0 = reg_RX_CTLE_LB_RES_SEL_LANE_3_0;
	//Set Calibration CTLE setting
	reg_RX_CTLE_RL1_CTRL_LANE_3_0 = 6;
	reg_RX_CTLE_CS2_CTRL_LANE_4_0 = 0;
	reg_RX_CTLE_RS2_CTRL_LANE_4_0 = 0;
	reg_RX_CTLE_GAIN_COARSE_LANE_3_0 = 0;
	reg_RX_CTLE_CL1_CTRL_LANE_3_0 = 12;
	reg_RX_CTLE_RL1_EXTRA_LANE_2_0 = 2;
	reg_RX_CTLE_LB_RES_SEL_LANE_3_0 = 15;
	//Set PHY test pattern
	reg_PT_TX_PATTERN_SEL_LANE_5_0 = reg_SU_SKEW_CAL_PAT_SEL_LANE_5_0; //prbs31
	reg_PT_TX_EN_MODE_LANE_1_0 = 0;
	reg_PT_TX_EN_LANE = 1;
	//Set internal loopback
	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE = 1;
	delay(T_5us);
	is_pause();

    }

    if(adc_cal_en & skew_coarse_en)
    {
    ADC_CAL_ST_JUMP(SKEW_COARSE);

	//Set SKEW AVG REJ
	reg_RX_SKEW_CAL_FEEDFORWARD_REJ_EN_LANE = 1; //fdfwd_avg_rej
	reg_RX_SKEW_CAL_FEEDBACK_REJ_EN_LANE = 0; // fdbk_avg_rej 
	reg_RX_SKEW_CAL_AVE_REJ_MU_LANE_3_0 = reg_SU_SKEW_CAL_AVE_REJ_MU_LANE_3_0;
	reg_RX_SKEW_CAL_AVE_MU_LP_LANE_3_0 = reg_SU_SKEW_CAL_AVE_MU_LP_LANE_3_0;
	//Set blind SKEW 
	reg_RX_SKEW_CAL_BLIND_EN_LANE = 1;
	reg_RX_SKEW_CAL_SIGN_LANE = 1; //blind:1
	reg_RX_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0 = reg_SU_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0;
	reg_RX_SKEW_CAL_MAP_ROT_LANE_2_0 = reg_SU_SKEW_CAL_MAP_ROT_LANE_2_0;
	//Set coarse gain
	reg_RX_SKEW_CAL_COARSE_LANE = 1;
	reg_RX_SKEW_CAL_COARSE_GAIN_LANE_1_0 = reg_SU_SKEW_CAL_COARSE_GAIN_LANE_1_0;
	//Start SKEW Calibration
	reg_RX_SKEW_CAL_EN_LANE = 1;
	wait_converge (reg_SU_ADC_IF_SKEW_COARSE_TIMER_LANE_15_0);
	reg_RX_SKEW_CAL_EN_LANE = 0;
	//Clear setting
	reg_RX_SKEW_CAL_BLIND_EN_LANE = 0;
	reg_RX_SKEW_CAL_SIGN_LANE = 0;
	is_pause();

    }

    if(adc_cal_en & skew_fine_en)
    {
    ADC_CAL_ST_JUMP(SKEW_FINE);

	//Set SKEW AVG REJ
	reg_RX_SKEW_CAL_FEEDFORWARD_REJ_EN_LANE = 1; //fdfwd_avg_rej
	reg_RX_SKEW_CAL_FEEDBACK_REJ_EN_LANE = 0; // fdbk_avg_rej 
	reg_RX_SKEW_CAL_AVE_REJ_MU_LANE_3_0 = reg_SU_SKEW_CAL_AVE_REJ_MU_LANE_3_0;
	reg_RX_SKEW_CAL_AVE_MU_LP_LANE_3_0 = reg_SU_SKEW_CAL_AVE_MU_LP_LANE_3_0;
	//Set blind SKEW 
	reg_RX_SKEW_CAL_BLIND_EN_LANE = 1;
	reg_RX_SKEW_CAL_SIGN_LANE = 1; //blind:1
	reg_RX_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0 = reg_SU_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0;
	reg_RX_SKEW_CAL_MAP_ROT_LANE_2_0 = reg_SU_SKEW_CAL_MAP_ROT_LANE_2_0;
	//Set fine gain
	reg_RX_SKEW_CAL_COARSE_LANE = 0;
	reg_RX_SKEW_CAL_MU_SHIFT_LANE_3_0 = reg_SU_SKEW_CAL_MU_SHIFT_LANE_3_0;
	//Start SKEW Calibration
	reg_RX_SKEW_CAL_EN_LANE = 1;
	reg_RX_SKEW_CAL_LOCK_DET_EN_LANE = 1;
	wait_converge (reg_SU_ADC_IF_SKEW_FINE_TIMER_LANE_15_0);
	reg_SU_SKEW_CAL_LOCK_DET_RD_LANE = reg_RX_SKEW_CAL_LOCK_DET_LANE;
	reg_RX_SKEW_CAL_LOCK_DET_EN_LANE = 0;
	reg_RX_SKEW_CAL_EN_LANE = 0;
	//Clear setting
	reg_RX_SKEW_CAL_BLIND_EN_LANE = 0;
	reg_RX_SKEW_CAL_SIGN_LANE = 0;
	is_pause();

    }

    if(adc_cal_en & pt_clr_en)
    {
    ADC_CAL_ST_JUMP(PT_CLR);

	//Recover Calibration CTLE setting
	reg_RX_CTLE_RL1_CTRL_LANE_3_0 = sav_RX_CTLE_RL1_CTRL_LANE_3_0;
	reg_RX_CTLE_CS2_CTRL_LANE_4_0 = sav_RX_CTLE_CS2_CTRL_LANE_4_0;
	reg_RX_CTLE_RS2_CTRL_LANE_4_0 = sav_RX_CTLE_RS2_CTRL_LANE_4_0;
	reg_RX_CTLE_GAIN_COARSE_LANE_3_0 = sav_RX_CTLE_GAIN_COARSE_LANE_3_0;
	reg_RX_CTLE_CL1_CTRL_LANE_3_0 = sav_RX_CTLE_CL1_CTRL_LANE_3_0;
	reg_RX_CTLE_RL1_EXTRA_LANE_2_0 = sav_RX_CTLE_RL1_EXTRA_LANE_2_0;
	reg_RX_CTLE_LB_RES_SEL_LANE_3_0 = sav_RX_CTLE_LB_RES_SEL_LANE_3_0;
	//Recover loopback
	reg_LOCAL_ANA_TX2RX_LPBK_EN_LANE = 0;
	reg_PT_TX_EN_LANE = 0;
	is_pause();

    }

    if(adc_cal_en & gao_cont_en)
    {
    ADC_CAL_ST_JUMP(GAO_CONT);

	//GAIN and OFST
        //Recover SQ protection
        reg_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_AGC_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_AGC_SQ_FREZ_EN_LANE;
	//SET SMALL MU FOR OFFSET AND GAIN
	reg_RX_ADC_IF_DAT_OFST_MU_LANE_3_0 = reg_BG_ADC_IF_DAT_OFST_MU_LANE_3_0;
	reg_RX_ADC_IF_DAT_GAIN_MU_LANE_3_0 = reg_BG_ADC_IF_DAT_GAIN_MU_LANE_3_0;
	//ENABLE OFFSET/GAIN
	reg_RX_ADC_IF_DAT_OFST_EN_LANE = 1; //enable ofst
	reg_RX_ADC_IF_DAT_GAIN_EN_LANE = 1; //enable gain
	reg_RX_ADC_IF_TOP_EN_LANE = 1;
	is_pause();

    }

    if(adc_cal_en & skew_cont_en)
    {
    ADC_CAL_ST_JUMP(SKEW_CONT);

	//TED SKEW
        //Recover SQ protection
        reg_RX_SKEW_CAL_SQ_FREZ_EN_LANE = sav_RX_SKEW_CAL_SQ_FREZ_EN_LANE;
	//FINE MU FOR TED SKEW
	reg_RX_SKEW_CAL_COARSE_LANE = 0;
	reg_RX_SKEW_CAL_MU_SHIFT_LANE_3_0 = reg_BG_SKEW_CAL_MU_SHIFT_LANE_3_0;
	//ENABLE TED SKEW
	reg_RX_SKEW_CAL_BLIND_EN_LANE = 0;
	reg_RX_SKEW_CAL_SIGN_LANE = 0;
	reg_RX_SKEW_CAL_EN_LANE = 1;
	is_pause();

    }

    ADC_CAL_ST_JUMP(DONE);

}
#endif // DRV_ADC_CAL_V0

#ifdef DRV_ADC_CAL_V1
void drv_adc_cal (uint16_t adc_cal_en) BANKING_CTRL
{

}
#endif // DRV_ADC_CAL_V1


