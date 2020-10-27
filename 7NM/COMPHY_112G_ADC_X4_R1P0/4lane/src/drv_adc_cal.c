#include "common.h"
#include "driver.h"

#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

#define FAST_CAL_REG_RW

// -- ADC_CAL Variables
//__code uint16_t adc_cal_table[]   = {
//        0x0001, // ADC_CAL_STOP_GAO,
//        0x0002, // ADC_CAL_STOP_SKEW
//        0x0005, // ADC_CAL_RESET_GAO,
//        0x000A, // ADC_CAL_RESET_SKEW,
//        0x0035, // ADC_CAL_SINGLE_GAO,
//        0x03CA, // ADC_CAL_SINGLE_SKEW,
//        0x0400, // ADC_CAL_TRAIN_GAO,
//        0x0800, // ADC_CAL_TRAIN_SKEW,
//        0x1000, // ADC_CAL_CONT_GAO,
//        0x2000, // ADC_CAL_CONT_SKEW,
//        0x4000, // ADC_CAL_CONT_AGC,
//};

// -- ADC_CAL State declaration
typedef enum {
        ADC_CAL_ST_INIT         = 0,
        ADC_CAL_ST_STOP_GAO     = 1,
        ADC_CAL_ST_STOP_SKEW    = 2,
        ADC_CAL_ST_RESET_GAO    = 3,
        ADC_CAL_ST_RESET_SKEW   = 4,
        ADC_CAL_ST_OFST         = 5,
        ADC_CAL_ST_GAIN         = 6,
        ADC_CAL_ST_PT_SET       = 7,
        ADC_CAL_ST_SKEW_COARSE  = 8,
        ADC_CAL_ST_SKEW_FINE    = 9,
        ADC_CAL_ST_PT_CLR       = 10,
        ADC_CAL_ST_TRAIN_GAO    = 11,
        ADC_CAL_ST_TRAIN_SKEW   = 12,
        ADC_CAL_ST_CONT_GAO     = 13,
        ADC_CAL_ST_CONT_SKEW    = 14,
        ADC_CAL_ST_CONT_AGC     = 15,
        ADC_CAL_ST_DONE         = 16,
} ADC_CAL_STATE_t;

#define ADC_CAL_ST reg_ADC_CAL_STATE_LANE_7_0
#define ADC_CAL_ST_JUMP(name)  {ADC_CAL_ST = ADC_CAL_ST_ ## name;}

#define stop_gao_en     0x0001
#define stop_skew_en    0x0002
#define reset_gao_en    0x0004
#define reset_skew_en   0x0008
#define ofst_en         0x0010
#define gain_en         0x0020
#define pt_set_en       0x0040
#define skew_coarse_en  0x0080
#define skew_fine_en    0x0100
#define pt_clr_en       0x0200
#define train_gao_en    0x0400
#define train_skew_en   0x0800
#define cont_gao_en     0x1000
#define cont_skew_en    0x2000
#define cont_agc_en     0x4000



void skew_dmclk_force (void) BANKING_CTRL
{

  #ifndef FAST_CAL_REG_RW
    reg_RX_SKEW_FORCE_DAC_TH0_LANE_5_0 = reg_SKEW_ADAPT0_LANE_8_0_b0 & 0x3f;
    reg_RX_SKEW_FORCE_GM_TH0_LANE_1_0  = (reg_SKEW_ADAPT0_LANE_8_0_b0 >> 6) ^ (reg_SKEW_ADAPT0_LANE_8_0_b0 >> 7);
    reg_RX_SKEW_FORCE_DAC_TH1_LANE_5_0 = reg_SKEW_ADAPT1_LANE_8_0_b0 & 0x3f;
    reg_RX_SKEW_FORCE_GM_TH1_LANE_1_0  = (reg_SKEW_ADAPT1_LANE_8_0_b0 >> 6) ^ (reg_SKEW_ADAPT1_LANE_8_0_b0 >> 7);
    reg_RX_SKEW_FORCE_DAC_TH2_LANE_5_0 = reg_SKEW_ADAPT2_LANE_8_0_b0 & 0x3f;
    reg_RX_SKEW_FORCE_GM_TH2_LANE_1_0  = (reg_SKEW_ADAPT2_LANE_8_0_b0 >> 6) ^ (reg_SKEW_ADAPT2_LANE_8_0_b0 >> 7);
    reg_RX_SKEW_FORCE_DAC_TH3_LANE_5_0 = reg_SKEW_ADAPT3_LANE_8_0_b0 & 0x3f;
    reg_RX_SKEW_FORCE_GM_TH3_LANE_1_0  = (reg_SKEW_ADAPT3_LANE_8_0_b0 >> 6) ^ (reg_SKEW_ADAPT3_LANE_8_0_b0 >> 7);
    reg_RX_SKEW_FORCE_DAC_TH4_LANE_5_0 = reg_SKEW_ADAPT4_LANE_8_0_b0 & 0x3f;
    reg_RX_SKEW_FORCE_GM_TH4_LANE_1_0  = (reg_SKEW_ADAPT4_LANE_8_0_b0 >> 6) ^ (reg_SKEW_ADAPT4_LANE_8_0_b0 >> 7);
    reg_RX_SKEW_FORCE_DAC_TH5_LANE_5_0 = reg_SKEW_ADAPT5_LANE_8_0_b0 & 0x3f;
    reg_RX_SKEW_FORCE_GM_TH5_LANE_1_0  = (reg_SKEW_ADAPT5_LANE_8_0_b0 >> 6) ^ (reg_SKEW_ADAPT5_LANE_8_0_b0 >> 7);
    reg_RX_SKEW_FORCE_DAC_TH6_LANE_5_0 = reg_SKEW_ADAPT6_LANE_8_0_b0 & 0x3f;
    reg_RX_SKEW_FORCE_GM_TH6_LANE_1_0  = (reg_SKEW_ADAPT6_LANE_8_0_b0 >> 6) ^ (reg_SKEW_ADAPT6_LANE_8_0_b0 >> 7);
    reg_RX_SKEW_FORCE_DAC_TH7_LANE_5_0 = reg_SKEW_ADAPT7_LANE_8_0_b0 & 0x3f;
    reg_RX_SKEW_FORCE_GM_TH7_LANE_1_0  = (reg_SKEW_ADAPT7_LANE_8_0_b0 >> 6) ^ (reg_SKEW_ADAPT7_LANE_8_0_b0 >> 7);
  #else
    RX_SKEW_CAL_CTRL_17.BT.B0 = ((reg_SKEW_ADAPT0_LANE_8_0_b0 ^ (reg_SKEW_ADAPT0_LANE_8_0_b0 >> 1)) & 0xc0) |
                                (reg_SKEW_ADAPT0_LANE_8_0_b0 & 0x3f);
    RX_SKEW_CAL_CTRL_17.BT.B1 = ((reg_SKEW_ADAPT1_LANE_8_0_b0 ^ (reg_SKEW_ADAPT1_LANE_8_0_b0 >> 1)) & 0xc0) |
                                (reg_SKEW_ADAPT1_LANE_8_0_b0 & 0x3f);
    RX_SKEW_CAL_CTRL_17.BT.B2 = ((reg_SKEW_ADAPT2_LANE_8_0_b0 ^ (reg_SKEW_ADAPT2_LANE_8_0_b0 >> 1)) & 0xc0) |
                                (reg_SKEW_ADAPT2_LANE_8_0_b0 & 0x3f);
    RX_SKEW_CAL_CTRL_17.BT.B3 = ((reg_SKEW_ADAPT3_LANE_8_0_b0 ^ (reg_SKEW_ADAPT3_LANE_8_0_b0 >> 1)) & 0xc0) |
                                (reg_SKEW_ADAPT3_LANE_8_0_b0 & 0x3f);
    RX_SKEW_CAL_CTRL_18.BT.B0 = ((reg_SKEW_ADAPT4_LANE_8_0_b0 ^ (reg_SKEW_ADAPT4_LANE_8_0_b0 >> 1)) & 0xc0) |
                                (reg_SKEW_ADAPT4_LANE_8_0_b0 & 0x3f);
    RX_SKEW_CAL_CTRL_18.BT.B1 = ((reg_SKEW_ADAPT5_LANE_8_0_b0 ^ (reg_SKEW_ADAPT5_LANE_8_0_b0 >> 1)) & 0xc0) |
                                (reg_SKEW_ADAPT5_LANE_8_0_b0 & 0x3f);
    RX_SKEW_CAL_CTRL_18.BT.B2 = ((reg_SKEW_ADAPT6_LANE_8_0_b0 ^ (reg_SKEW_ADAPT6_LANE_8_0_b0 >> 1)) & 0xc0) |
                                (reg_SKEW_ADAPT6_LANE_8_0_b0 & 0x3f);
    RX_SKEW_CAL_CTRL_18.BT.B3 = ((reg_SKEW_ADAPT7_LANE_8_0_b0 ^ (reg_SKEW_ADAPT7_LANE_8_0_b0 >> 1)) & 0xc0) |
                                (reg_SKEW_ADAPT7_LANE_8_0_b0 & 0x3f);
  #endif

  #ifndef FAST_CAL_REG_RW
    reg_RX_SKEW_FORCE_DAC_TH0_EN_LANE = 1;
    reg_RX_SKEW_FORCE_GM_TH0_EN_LANE  = 1;
    reg_RX_SKEW_FORCE_DAC_TH1_EN_LANE = 1;
    reg_RX_SKEW_FORCE_GM_TH1_EN_LANE  = 1;
    reg_RX_SKEW_FORCE_DAC_TH2_EN_LANE = 1;
    reg_RX_SKEW_FORCE_GM_TH2_EN_LANE  = 1;
    reg_RX_SKEW_FORCE_DAC_TH3_EN_LANE = 1;
    reg_RX_SKEW_FORCE_GM_TH3_EN_LANE  = 1;
    reg_RX_SKEW_FORCE_DAC_TH4_EN_LANE = 1;
    reg_RX_SKEW_FORCE_GM_TH4_EN_LANE  = 1;
    reg_RX_SKEW_FORCE_DAC_TH5_EN_LANE = 1;
    reg_RX_SKEW_FORCE_GM_TH5_EN_LANE  = 1;
    reg_RX_SKEW_FORCE_DAC_TH6_EN_LANE = 1;
    reg_RX_SKEW_FORCE_GM_TH6_EN_LANE  = 1;
    reg_RX_SKEW_FORCE_DAC_TH7_EN_LANE = 1;
    reg_RX_SKEW_FORCE_GM_TH7_EN_LANE  = 1;
  #else
    RX_SKEW_CAL_CTRL_19.BT.B0 = 0xff;
    RX_SKEW_CAL_CTRL_19.BT.B1 = 0xff;
  #endif

  #ifndef FAST_CAL_REG_RW
    reg_RX_SKEW_CAL_DMCLK0_FORCE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK0_FORCE_VALUE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK1_FORCE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK1_FORCE_VALUE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK2_FORCE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK2_FORCE_VALUE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK3_FORCE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK3_FORCE_VALUE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK4_FORCE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK4_FORCE_VALUE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK5_FORCE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK5_FORCE_VALUE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK6_FORCE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK6_FORCE_VALUE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK7_FORCE_LANE = 1;
    reg_RX_SKEW_CAL_DMCLK7_FORCE_VALUE_LANE = 1;
  #else
    RX_SKEW_CAL_CTRL_11.BT.B1 = 0xff;
    RX_SKEW_CAL_CTRL_11.BT.B2 = 0xff;
  #endif

    //set force value to analog
    reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE = 1;
    reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE = 1;
    reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE = 0;
    reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE = 0;

  #ifndef FAST_CAL_REG_RW
    reg_RX_SKEW_FORCE_DAC_TH0_EN_LANE = 0;
    reg_RX_SKEW_FORCE_GM_TH0_EN_LANE  = 0;
    reg_RX_SKEW_FORCE_DAC_TH1_EN_LANE = 0;
    reg_RX_SKEW_FORCE_GM_TH1_EN_LANE  = 0;
    reg_RX_SKEW_FORCE_DAC_TH2_EN_LANE = 0;
    reg_RX_SKEW_FORCE_GM_TH2_EN_LANE  = 0;
    reg_RX_SKEW_FORCE_DAC_TH3_EN_LANE = 0;
    reg_RX_SKEW_FORCE_GM_TH3_EN_LANE  = 0;
    reg_RX_SKEW_FORCE_DAC_TH4_EN_LANE = 0;
    reg_RX_SKEW_FORCE_GM_TH4_EN_LANE  = 0;
    reg_RX_SKEW_FORCE_DAC_TH5_EN_LANE = 0;
    reg_RX_SKEW_FORCE_GM_TH5_EN_LANE  = 0;
    reg_RX_SKEW_FORCE_DAC_TH6_EN_LANE = 0;
    reg_RX_SKEW_FORCE_GM_TH6_EN_LANE  = 0;
    reg_RX_SKEW_FORCE_DAC_TH7_EN_LANE = 0;
    reg_RX_SKEW_FORCE_GM_TH7_EN_LANE  = 0;
  #else
    RX_SKEW_CAL_CTRL_19.BT.B0 = 0x00;
    RX_SKEW_CAL_CTRL_19.BT.B1 = 0x00;
  #endif

  #ifndef FAST_CAL_REG_RW
    reg_RX_SKEW_CAL_DMCLK0_FORCE_LANE = 0;
    reg_RX_SKEW_CAL_DMCLK1_FORCE_LANE = 0;
    reg_RX_SKEW_CAL_DMCLK2_FORCE_LANE = 0;
    reg_RX_SKEW_CAL_DMCLK3_FORCE_LANE = 0;
    reg_RX_SKEW_CAL_DMCLK4_FORCE_LANE = 0;
    reg_RX_SKEW_CAL_DMCLK5_FORCE_LANE = 0;
    reg_RX_SKEW_CAL_DMCLK6_FORCE_LANE = 0;
    reg_RX_SKEW_CAL_DMCLK7_FORCE_LANE = 0;
  #else
    RX_SKEW_CAL_CTRL_11.BT.B1 = 0xaa;
    RX_SKEW_CAL_CTRL_11.BT.B2 = 0xaa;
  #endif
}


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
    uint8_t sav_RX_PU_EOM_PI_LANE;
    uint8_t sav_RX_PU_EOM_DLY_LANE;


    if(TRAIN_SIM_EN) return;

    ADC_CAL_ST_JUMP(INIT);

    if(adc_cal_en & stop_gao_en)
    {
    ADC_CAL_ST_JUMP(STOP_GAO);

        //Stop AGC GAIN
        reg_RX_ADC_IF_AGC_EN_LANE = 0;
        //Stop Target calibration
        reg_RX_ADC_IF_TARGET_EN_LANE = 0;
        //Stop ADC calibration
        reg_RX_ADC_IF_TOP_EN_LANE = 0;

    }

    if(adc_cal_en & stop_skew_en)
    {
    ADC_CAL_ST_JUMP(STOP_SKEW);

        //Stop SKEW calibration
        reg_RX_SKEW_CAL_EN_LANE = 0;
        skew_dmclk_force(); //avoid stop at dummy clock cycle

    }

    if(adc_cal_en & reset_gao_en)
    {
    ADC_CAL_ST_JUMP(RESET_GAO);

        //Reset ADC CAL and AGC circuit
        reg_RX_ADC_IF_RST_LANE = 1;
        reg_RX_ADC_IF_RST_LANE = 0;
        //Initial AGC to digital
        reg_RX_ADC_IF_AGC_GAIN_EXT_LANE_4_0 = reg_BG_AGC_GAIN_INIT_LANE_4_0;
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
        is_pause(4);

    }

    if(adc_cal_en & reset_skew_en)
    {
    ADC_CAL_ST_JUMP(RESET_SKEW);

        //Turn on Tx data path TODO remove in the future
        //reg_TX_CLK_EN_LANE = 1;
        //reg_TX_FIR_CLK_OFF_LANE = 0;
        //reg_TX_RESET_FIR_LANE = 0;
        //Reset SKEW circuit
        reg_RX_SKEW_CAL_RST_LANE = 1;
        reg_RX_SKEW_CAL_RST_LANE = 0;
        //Initial SKEW to analog
        reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE = 1;
        reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE = 1;
        reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_VALUE_LANE = 0;
        reg_RX_SKEW_CAL_SYNCLK_TH_FORCE_LANE = 0;
        //Reset Analog ADC
        reg_RX_ADC_RESET_LANE = 1;
        reg_RX_ADC_RESET_LANE = 0;
        //Set SKEW calibration
        reg_RX_SKEW_CAL_TH_EN_LANE_7_0 = 0xff;
        reg_RX_SKEW_CAL_AVE_SIZE_LANE_2_0 = reg_SU_SKEW_CAL_AVE_SIZE_LANE_2_0;
        is_pause(4);

    }

    if(adc_cal_en & ofst_en)
    {
    ADC_CAL_ST_JUMP(OFST);

        //Enable EOM
        sav_RX_PU_EOM_PI_LANE = reg_RX_PU_EOM_PI_LANE;
        sav_RX_PU_EOM_DLY_LANE = reg_RX_PU_EOM_DLY_LANE;
        reg_RX_PU_EOM_PI_LANE = 1;
        delay(T_2us);
        reg_RX_PU_EOM_DLY_LANE = 1;
        delay(T_5us);
        //Disable SQ protection for power up calibration
        sav_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE = reg_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE;
        sav_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE = reg_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE = 0;
        reg_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE = 0;
        //Set ADC short option for Offset Calibration
        reg_RX_CTLE_OUT_SQ_EN_LANE = 1;
        delay(T_5us);
        //Set OFST MU
        reg_RX_ADC_IF_DAT_OFST_MU_LANE_3_0 = reg_SU_ADC_IF_OFST_MU_LANE_3_0;
        reg_RX_ADC_IF_EOM_OFST_MU_LANE_3_0 = reg_SU_ADC_IF_OFST_MU_LANE_3_0;
        //Set OFST only
        reg_RX_ADC_IF_DELTA_ZERO_LANE_4_0 = reg_SU_ADC_IF_DELTA_ZERO_LANE_4_0; //compensate analog model mismatch
        reg_RX_ADC_IF_DAT_OFST_EN_LANE = 1; //enable ofst
        reg_RX_ADC_IF_EOM_OFST_EN_LANE = 1; //enable ofst
        reg_RX_ADC_IF_DAT_GAIN_EN_LANE = 0; //disable gain
        reg_RX_ADC_IF_EOM_GAIN_EN_LANE = 0; //disable gain
        //Start ADC calibration
        reg_RX_ADC_IF_TOP_EN_LANE = 1;
        reg_RX_ADC_IF_OFST_LOCK_DET_EN_LANE = 1;
        wait_converge (reg_SU_ADC_IF_OFST_TIMER_LANE_15_0);
        reg_SU_ADC_IF_OFST_LOCK_DET_RD_LANE = reg_RX_ADC_IF_OFST_LOCK_DET_LANE;
        reg_RX_ADC_IF_OFST_LOCK_DET_EN_LANE = 0;
        reg_RX_ADC_IF_TOP_EN_LANE = 0;
        //Clear setting
        reg_RX_CTLE_OUT_SQ_EN_LANE = 0;
        //Recover SQ protection
        reg_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE;
        //Recover EOM setting
        reg_RX_PU_EOM_PI_LANE = sav_RX_PU_EOM_PI_LANE;
        reg_RX_PU_EOM_DLY_LANE = sav_RX_PU_EOM_DLY_LANE;
        delay(T_5us);
        is_pause(4);

    }

    if(adc_cal_en & gain_en)
    {
    ADC_CAL_ST_JUMP(GAIN);

        //Enable EOM
        sav_RX_PU_EOM_PI_LANE = reg_RX_PU_EOM_PI_LANE;
        sav_RX_PU_EOM_DLY_LANE = reg_RX_PU_EOM_DLY_LANE;
        reg_RX_PU_EOM_PI_LANE = 1;
        delay(T_2us);
        reg_RX_PU_EOM_DLY_LANE = 1;
        delay(T_5us);
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
        //Set ADC DC option for Gain Calibration
        reg_RX_CTLE_OUT_DC_SEL_LANE_2_0 = reg_SU_CTLE_OUT_DC_SEL_LANE_2_0; //set dc to 50mv
        reg_RX_CTLE_OUT_DC_EN_LANE = 1;
        delay(T_5us);
        //Set GAIN MU
        reg_RX_ADC_IF_TARGET_MU_LANE_3_0 = reg_SU_ADC_IF_TARGET_MU_LANE_3_0;
        reg_RX_ADC_IF_DAT_GAIN_MU_LANE_3_0 = reg_SU_ADC_IF_GAIN_MU_LANE_3_0;
        reg_RX_ADC_IF_EOM_GAIN_MU_LANE_3_0 = reg_SU_ADC_IF_GAIN_MU_LANE_3_0;
        reg_RX_ADC_IF_AVE_REJ_MU_LANE_2_0 = reg_SU_ADC_IF_AVE_REJ_MU_LANE_2_0;
        reg_RX_ADC_IF_AVE_REJ_EN_LANE = 0; //disable average rejection
        //Set GAIN only
        reg_RX_ADC_IF_DAT_OFST_EN_LANE = 0; //disable ofst
        reg_RX_ADC_IF_EOM_OFST_EN_LANE = 0; //disable ofst
        reg_RX_ADC_IF_DAT_GAIN_EN_LANE = 1; //enable gain
        reg_RX_ADC_IF_EOM_GAIN_EN_LANE = 1; //enable gain
        //Select ADC00 as reference
        reg_RX_ADC_IF_TARGET_SEL_LANE = 1;
        reg_RX_ADC_IF_EXT_SEL_LANE_6_0 = 0;
        reg_RX_ADC_IF_GAIN_EXT_LANE_7_0 = 0;
        reg_RX_ADC_IF_GAIN_LOAD_LANE = 1; //freeze ADC00
        //Start Target calibration
        reg_RX_ADC_IF_TARGET_EN_LANE = 1;
        wait_converge (reg_SU_ADC_IF_TARGET_TIMER_LANE_15_0);
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
        //reg_RX_ADC_IF_GAIN_LOAD_LANE = 0;
        //Recover SQ protection
        reg_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_DP_CTRL_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_EP_CTRL_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_TARGET_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_AVE_REJ_SQ_FREZ_EN_LANE;
        reg_RX_ADC_IF_AGC_SQ_FREZ_EN_LANE = sav_RX_ADC_IF_AGC_SQ_FREZ_EN_LANE;
        //Recover EOM setting
        reg_RX_PU_EOM_PI_LANE = sav_RX_PU_EOM_PI_LANE;
        reg_RX_PU_EOM_DLY_LANE = sav_RX_PU_EOM_DLY_LANE;
        delay(T_5us);
        is_pause(4);

    }

    if(adc_cal_en & pt_set_en)
    {
    ADC_CAL_ST_JUMP(PT_SET);

        //Disable SQ protection for power up calibration
        sav_RX_SKEW_CAL_SQ_FREZ_EN_LANE = reg_RX_SKEW_CAL_SQ_FREZ_EN_LANE;
        reg_RX_SKEW_CAL_SQ_FREZ_EN_LANE = 0;
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
        is_pause(4);

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
        reg_RX_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0 = reg_SU_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0;
        reg_RX_SKEW_CAL_MAP_ROT_LANE_2_0 = reg_SU_SKEW_CAL_MAP_ROT_LANE_2_0;
        //Set coarse gain
        reg_RX_SKEW_CAL_COARSE_LANE = 1;
        reg_RX_SKEW_CAL_COARSE_GAIN_LANE_1_0 = reg_SU_SKEW_CAL_COARSE_GAIN_LANE_1_0;
        //Start SKEW Calibration
        reg_RX_SKEW_CAL_EN_LANE = 1;
        wait_converge (reg_SU_SKEW_COARSE_TIMER_LANE_15_0);
        reg_RX_SKEW_CAL_EN_LANE = 0;
        skew_dmclk_force(); //avoid stop at dummy clock cycle
        //Clear setting
        reg_RX_SKEW_CAL_BLIND_EN_LANE = 0;
        is_pause(4);

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
        reg_RX_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0 = reg_SU_SKEW_CAL_BLIND_MU_SHIFT_LANE_3_0;
        reg_RX_SKEW_CAL_MAP_ROT_LANE_2_0 = reg_SU_SKEW_CAL_MAP_ROT_LANE_2_0;
        //Set fine gain
        reg_RX_SKEW_CAL_COARSE_LANE = 0;
        reg_RX_SKEW_CAL_MU_SHIFT_LANE_3_0 = reg_SU_SKEW_CAL_MU_SHIFT_LANE_3_0;
        //Start SKEW Calibration
        reg_RX_SKEW_CAL_EN_LANE = 1;
        reg_RX_SKEW_CAL_LOCK_DET_EN_LANE = 1;
        wait_converge (reg_SU_SKEW_FINE_TIMER_LANE_15_0);
        reg_SU_SKEW_CAL_LOCK_DET_RD_LANE = reg_RX_SKEW_CAL_LOCK_DET_LANE;
        reg_RX_SKEW_CAL_LOCK_DET_EN_LANE = 0;
        reg_RX_SKEW_CAL_EN_LANE = 0;
        skew_dmclk_force(); //avoid stop at dummy clock cycle
        //Clear setting
        reg_RX_SKEW_CAL_BLIND_EN_LANE = 0;
        is_pause(4);

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
        //Recover SQ protection
        reg_RX_SKEW_CAL_SQ_FREZ_EN_LANE = sav_RX_SKEW_CAL_SQ_FREZ_EN_LANE;
        is_pause(4);

    }

    if(adc_cal_en & train_gao_en)
    {
    ADC_CAL_ST_JUMP(TRAIN_GAO);

        //GAIN and OFST
        //SET SMALL MU FOR OFFSET AND GAIN
        reg_RX_ADC_IF_DAT_OFST_MU_LANE_3_0 = reg_TR_ADC_IF_OFST_MU_LANE_3_0;
        reg_RX_ADC_IF_EOM_OFST_MU_LANE_3_0 = reg_TR_ADC_IF_OFST_MU_LANE_3_0;
        reg_RX_ADC_IF_DAT_GAIN_MU_LANE_3_0 = reg_TR_ADC_IF_GAIN_MU_LANE_3_0;
        reg_RX_ADC_IF_EOM_GAIN_MU_LANE_3_0 = reg_TR_ADC_IF_GAIN_MU_LANE_3_0;
        //ENABLE OFFSET/GAIN
        reg_RX_ADC_IF_DAT_OFST_EN_LANE = 1; //enable ofst
        reg_RX_ADC_IF_EOM_OFST_EN_LANE = 0; //disable ofst
        reg_RX_ADC_IF_DAT_GAIN_EN_LANE = 1; //enable gain
        reg_RX_ADC_IF_EOM_GAIN_EN_LANE = 0; //disable gain
        //Start Target calibration
        reg_RX_ADC_IF_TARGET_EN_LANE = 1;
        //Start ADC calibration
        reg_RX_ADC_IF_TOP_EN_LANE = 1;
        wait_converge (reg_TR_ADC_IF_GAO_TIMER_LANE_15_0);
        reg_RX_ADC_IF_TOP_EN_LANE = 0;
        reg_RX_ADC_IF_TARGET_EN_LANE = 0;
        is_pause(4);

    }

    if(adc_cal_en & train_skew_en)
    {
    ADC_CAL_ST_JUMP(TRAIN_SKEW);

        //TED SKEW
        //FINE MU FOR TED SKEW
        reg_RX_SKEW_CAL_COARSE_LANE = 0;
        reg_RX_SKEW_CAL_FEEDFORWARD_REJ_EN_LANE = 1;
        reg_RX_SKEW_CAL_FEEDBACK_REJ_EN_LANE = 0;
        reg_RX_SKEW_CAL_AVE_MU_LP_LANE_3_0 = reg_TR_SKEW_CAL_AVE_MU_LP_LANE_3_0; //7
        reg_RX_SKEW_CAL_AVE_REJ_MU_LANE_3_0 = reg_TR_SKEW_CAL_AVE_REJ_MU_LANE_3_0; //8
        //ENABLE TED SKEW
        reg_RX_SKEW_CAL_BLIND_EN_LANE = reg_TR_SKEW_CAL_BLIND_EN_LANE; //1
        //Gear Shift 1
        reg_RX_SKEW_CAL_MU_SHIFT_LANE_3_0 = reg_TR_SKEW_CAL_MU_SHIFT1_LANE_3_0; //5
        //Start SKEW Calibration
        reg_RX_SKEW_CAL_EN_LANE = 1;
        wait_converge (reg_TR_SKEW_TIMER_LANE_15_0);
        reg_RX_SKEW_CAL_EN_LANE = 0;
        //Gear Shift 2
        reg_RX_SKEW_CAL_MU_SHIFT_LANE_3_0 = reg_TR_SKEW_CAL_MU_SHIFT2_LANE_3_0; //6
        //Start SKEW Calibration
        reg_RX_SKEW_CAL_EN_LANE = 1;
        wait_converge (reg_TR_SKEW_TIMER_LANE_15_0);
        reg_RX_SKEW_CAL_EN_LANE = 0;
        //Gear Shift 3
        reg_RX_SKEW_CAL_MU_SHIFT_LANE_3_0 = reg_TR_SKEW_CAL_MU_SHIFT3_LANE_3_0; //8
        //Start SKEW Calibration
        reg_RX_SKEW_CAL_EN_LANE = 1;
        wait_converge (reg_TR_SKEW_TIMER_LANE_15_0);
        reg_RX_SKEW_CAL_EN_LANE = 0;
        skew_dmclk_force(); //avoid stop at dummy clock cycle
        is_pause(4);

    }

    if(adc_cal_en & cont_gao_en)
    {
    ADC_CAL_ST_JUMP(CONT_GAO);

        //GAIN and OFST
        //SET SMALL MU FOR OFFSET AND GAIN
        reg_RX_ADC_IF_DAT_OFST_MU_LANE_3_0 = reg_BG_ADC_IF_OFST_MU_LANE_3_0;
        reg_RX_ADC_IF_EOM_OFST_MU_LANE_3_0 = reg_BG_ADC_IF_OFST_MU_LANE_3_0;
        reg_RX_ADC_IF_DAT_GAIN_MU_LANE_3_0 = reg_BG_ADC_IF_GAIN_MU_LANE_3_0;
        reg_RX_ADC_IF_EOM_GAIN_MU_LANE_3_0 = reg_BG_ADC_IF_GAIN_MU_LANE_3_0;
        //ENABLE OFFSET/GAIN
        reg_RX_ADC_IF_DAT_OFST_EN_LANE = 1; //enable ofst
        reg_RX_ADC_IF_EOM_OFST_EN_LANE = 0; //disable ofst
        reg_RX_ADC_IF_DAT_GAIN_EN_LANE = 1; //enable gain
        reg_RX_ADC_IF_EOM_GAIN_EN_LANE = 0; //disable gain
        //Start Target calibration
        reg_RX_ADC_IF_TARGET_EN_LANE = 1;
        //Start ADC calibration
        reg_RX_ADC_IF_TOP_EN_LANE = 1;
        is_pause(4);

    }

    if(adc_cal_en & cont_skew_en)
    {
    ADC_CAL_ST_JUMP(CONT_SKEW);

        //TED SKEW
        //FINE MU FOR TED SKEW
        reg_RX_SKEW_CAL_COARSE_LANE = 0;
        reg_RX_SKEW_CAL_FEEDFORWARD_REJ_EN_LANE = 1;
        reg_RX_SKEW_CAL_FEEDBACK_REJ_EN_LANE = 0;
        reg_RX_SKEW_CAL_FEEDBACK_REJ_EN_LANE = 0;
        reg_RX_SKEW_CAL_MU_SHIFT_LANE_3_0 = reg_BG_SKEW_CAL_MU_SHIFT_LANE_3_0;
        reg_RX_SKEW_CAL_AVE_MU_LP_LANE_3_0 = reg_BG_SKEW_CAL_AVE_MU_LP_LANE_3_0;
        reg_RX_SKEW_CAL_AVE_REJ_MU_LANE_3_0 = reg_BG_SKEW_CAL_AVE_REJ_MU_LANE_3_0;
        //ENABLE TED SKEW
        reg_RX_SKEW_CAL_BLIND_EN_LANE = reg_BG_SKEW_CAL_BLIND_EN_LANE;
        reg_RX_SKEW_CAL_EN_LANE = 1;
        is_pause(4);

    }

    if(adc_cal_en & cont_agc_en)
    {
    ADC_CAL_ST_JUMP(CONT_AGC);

        //Start Target calibration
        reg_RX_ADC_IF_TARGET_EN_LANE = 1;
        wait_converge (reg_BG_AGC_TARGET_TIMER_LANE_15_0);
        //Initial AGC to digital
        reg_RX_ADC_IF_AGC_GAIN_EXT_LANE_4_0 = reg_BG_AGC_GAIN_INIT_LANE_4_0;
        reg_RX_ADC_IF_AGC_LOAD_LANE = 1;
        reg_RX_ADC_IF_AGC_LOAD_LANE = 0;
        //Initial AGC to analog
        reg_RX_ADC_IF_AGC_FORCE_LANE = 1;
        reg_RX_ADC_IF_AGC_CLK_EXT_LANE = 1;
        reg_RX_ADC_IF_AGC_CLK_EXT_LANE = 0;
        reg_RX_ADC_IF_AGC_FORCE_LANE = 0;
        //Read out Target word
        reg_RX_ADC_IF_RD_REQ_LANE = 1;
        reg_RX_ADC_IF_RD_REQ_LANE = 0;
        //Set AGC Reference
        reg_RX_ADC_IF_AGC_REF_LANE_12_0_b0 = ((reg_RX_ADC_IF_TARGET_WORD_LANE_14_0_b1 << 7) & 0x80) | ((reg_RX_ADC_IF_TARGET_WORD_LANE_14_0_b0 >> 1) & 0x7f);
        reg_RX_ADC_IF_AGC_REF_LANE_12_0_b1 = reg_RX_ADC_IF_TARGET_WORD_LANE_14_0_b1 >> 1;
        //Set AGC Reference Threshold
        reg_RX_ADC_IF_AGC_TH_LANE_9_0_b0 = reg_BG_AGC_TH_LANE_9_0_b0;
        reg_RX_ADC_IF_AGC_TH_LANE_9_0_b1 = reg_BG_AGC_TH_LANE_9_0_b1;
        //Enable AGC GAIN
        reg_RX_ADC_IF_AGC_EN_LANE = 1;
        is_pause(4);

    }

    ADC_CAL_ST_JUMP(DONE);

}
