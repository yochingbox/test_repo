/*
 * rxdcc_data_cal_01.c
 *
 *  Created on: Sep 20, 2017
 *      Author: echeng
 */



#include "common.h"

#define RXDCC_CMP_OUT                    reg_ANA_TRX_TXDCC_DN_RD_LANE
#define RXDCC_CAL_EN                     reg_RXDCC_CAL_EN_LANE
#define RXDCC_EN_DLLCLK                  reg_RXDCC_EN_DLLCLK_LANE
#define RXDCC_EN_DATACLK                 reg_RXDCC_EN_DATACLK_LANE
#define RXDCC_EN_EOMCLK                  reg_RXDCC_EN_EOMCLK_LANE
#define TRXDCCIN_SEL                     reg_TRXDCCIN_SEL_LANE_2_0
#define RXDCC_HG_DLLCLK                  reg_RXDCC_HG_DLLCLK_LANE
#define RXDCC_HG_DATACLK                 reg_RXDCC_HG_DATACLK_LANE
#define RXDCC_HG_EOMCLK                  reg_RXDCC_HG_EOMCLK_LANE
#define RXDCC_DLLCLK                     reg_RXDCC_DLLCLK_LANE_5_0
#define RXDCC_DATACLK                    reg_RXDCC_DATACLK_LANE_5_0
#define RXDCC_EOMCLK                     reg_RXDCC_EOMCLK_LANE_5_0
#define EOM_CLK_EN                       reg_EOM_CLK_EN_LANE
#define RXDCC_DLL_LOOP_MAX               64
#define RXDCC_DATA_LOOP_MAX              64
#define RXDCC_EOM_LOOP_MAX               64
#define RXDCC_DCLKMP_CLK                 reg_TRXDCC_CAL_CLK100KHZ_LANE
#define RXDCC_DAC_SYNC_CLK               reg_RXDCC_DAC_SYNC_CLK_LANE
#define TXDCC_DN                         reg_ANA_TRX_TXDCC_DN_RD_LANE
#define TXDCC_CLK                        reg_TRXDCC_CAL_CLK100KHZ_LANE
#define TXDCC_EN                         reg_TXDCC_EN_LANE
#define TXDCCCAL_EN                      reg_TXDCCCAL_EN_LANE
#define TXDCC_HG                         reg_TXDCC_HG_LANE
#define TXDCC_CNT                        reg_TXDCC_CNT_LANE_5_0
#define TXDCC_LOOP_MAX                   64
#define TXDCC_PDIV_LOOP_MAX              64
#define TXDCCCAL_PDIV_EN                 reg_TXDCCCAL_PDIV_EN_LANE
#define TXDCC_PDIV_CNT                   reg_TXDCCCAL_PDIV_CNT_LANE_5_0
#define TX_SPEED_DIV                     reg_TX_SPEED_DIV_LANE_2_0
#define RX_SPEED_DIV                     reg_RX_SPEED_DIV_LANE_2_0

extern void rxdcc_clk_toggle(void) BANKING_CTRL;

void rxdcc_data_cal_01(void) {

  int8_t  dcc_cnt;
  uint8_t latched_RXDCC_DN;
  uint8_t int_dn, int_up;
  uint8_t dir;
  uint8_t time_out_cnt;
  uint8_t in_power_on;
  uint8_t in_cont_mode;
  uint8_t ext_en;
  uint8_t hg_set;

  PHY_STATUS = ST_RXDCC_DATA_CAL;

  //lnx_RXDCC_DATA_CAL_PASS_LANE = 0;
  lnx_RXDCC_DATA_CAL_DONE_LANE = 0;

  in_cont_mode = 0;
  in_power_on = 0;
  time_out_cnt = 0;
  dir = 0;
  hg_set = 0;

  //identify which kind of calibration is triggered
  if (cmx_CAL_DONE == 0) {                        //power-on calibration
    ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_RXDCC_DATA_CAL_EXT_EN;
    if (ext_en) {                                     //use ext value for power-on, bypass calibration
      dcc_cnt = lnx_cal_rxdcc_data[PWR][rx_pll_rate];
      RXDCC_HG_DATACLK = lnx_cal_rxdcc_data_hg[rx_pll_rate];          //load the HG setting.
    }
    else {                                          //use normal power-on calibration
      RXDCC_CAL_EN = 1;
      TRXDCCIN_SEL = 1;
      RXDCC_HG_DATACLK = 0;
      dcc_cnt = 0x20;
      in_power_on = 1;
    }
    RXDCC_EN_DATACLK = 1;                           //enable RXDCC_EN during power-on, never deassert
    rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;      //for power-on (inc. EXT_EN), reset fraction code to middle
    lnx_RXDCC_DATA_CAL_PASS_LANE = 0;
  } //cmx_CAL_DONE == 0
  else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
                                                  //either load power-on, or previous cont cal result for target speed
    dcc_cnt = lnx_cal_rxdcc_data[PWR + cmx_RXDCC_DATA_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];
    rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
    RXDCC_HG_DATACLK = lnx_cal_rxdcc_data_hg[rx_pll_rate];          //load the HG setting.
  }
  else if (cmx_RXDCC_DATA_CAL_CONT_EN) {  //not power-on. Continious mode, only performed when SPEED_DIV = 0
    RXDCC_CAL_EN = 1;
    TRXDCCIN_SEL = 1;
    dcc_cnt = lnx_cal_rxdcc_data[CONT][rx_pll_rate];    //always load cont result
    in_cont_mode = 1;                                  //when continious mode, use fraction code
  }
  else {                                               //Continious mode, but disabled, or SPEED_DIV != 0
    lnx_RXDCC_DATA_CAL_DONE_LANE = 1;
    return;
  }

//main loop
  do {
    RXDCC_DATACLK = dcc_cnt;
    rxdcc_clk_toggle();

    time_out_cnt ++;
    if( RXDCC_CAL_EN == 0 ) break;                                      //either LOAD, or EXT_EN in power-on
    if( cmx_CAL_DONE == 0 && RX_SPEED_DIV > 3 ) break;                  //power-on, but SPEED_DIV = 1xx, skip and keep using init code (0x20)
    if( cmx_CAL_DONE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
    if( cmx_CAL_DONE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_RXDCC_DATA_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
    if( cmx_CAL_DONE == 0 && time_out_cnt >= RXDCC_DATA_LOOP_MAX && cmx_RXDCC_DATA_CAL_TIMEOUT_DIS == 0) break; //power-on, reached maximum rounds

    latched_RXDCC_DN = TXDCC_DN;   //RXDCC shares TXDCC up/dn
    int_up = 0;
    int_dn = 0;

    if (in_cont_mode) { //continious calibration
      if (latched_RXDCC_DN) {rxdcc_data_step_cnt--;}
      else                  {rxdcc_data_step_cnt++;}

      if( rxdcc_data_step_cnt == 0) {
        int_up = 0;
        int_dn = 1;
        rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
      else if(rxdcc_data_step_cnt>=(RXDCC_DATA_CAL_STEP_SIZE<<1)) {
        int_up = 1;
        int_dn = 0;
        rxdcc_data_step_cnt = RXDCC_DATA_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
    }
    else {              //power-on calibration
      if (latched_RXDCC_DN) {int_up = 0; int_dn = 1;}
      else                  {int_up = 1; int_dn = 0;}
    }

    if (int_dn == 1) {
      dcc_cnt = sign_abs_dn(dcc_cnt);
    }
    else if (int_up == 1) {
      dir |= 1;
      dcc_cnt = sign_abs_up(dcc_cnt);
    }
    dir<<=1;
    dir = dir & 0x3f;


    //In power-on calibration, set HG to 1 if the code reached pre-set boundry.
    //don't set it back inside this loop. Set it back when calibration finishes.
    if (in_power_on && ((dcc_cnt & 0x1f) == 24) && (hg_set == 0)){
      RXDCC_HG_DATACLK = 1;
      hg_set = 1;
      dcc_cnt = 0x20;
      time_out_cnt = 0;
    }
  } while (1);

  //save calibration result
/*  if (cmx_CAL_DONE == 0) {                            //if power-on calibration
    lnx_cal_rxdcc_data[PWR][gen_rx] = dcc_cnt;       //save to power-on result
    lnx_cal_rxdcc_data_hg[gen_rx] = RXDCC_HG_DATACLK; //save the HG setting for current rate, will be loaded by continious mode
  }

  lnx_cal_rxdcc_data[CONT][gen_rx] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
  */
  if (cmx_CAL_DONE == 0) {                            //if power-on calibration
      lnx_cal_rxdcc_data[PWR][rx_pll_rate] = dcc_cnt;       //save to power-on result
      lnx_cal_rxdcc_data_hg[rx_pll_rate] = RXDCC_HG_DATACLK; //save the HG setting for current rate, will be loaded by continious mode
    }
    lnx_cal_rxdcc_data[CONT][rx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
    													//for next continious mode to read
  RXDCC_CAL_EN = 0;
  lnx_RXDCC_DATA_CAL_DONE_LANE = 1;

} //rxdcc_data_cal(void)

void rxdcc_eom_cal_01(void) {

  int8_t  dcc_cnt;
  uint8_t latched_RXDCC_DN;
  uint8_t int_dn, int_up;
  uint8_t dir;
  uint8_t time_out_cnt;
  uint8_t in_power_on;
  uint8_t in_cont_mode;
  uint8_t ext_en;
  uint8_t saved_eom_clk_en;
  uint8_t hg_set;

  PHY_STATUS = ST_RXDCC_EOM_CAL;

  //lnx_RXDCC_EOM_CAL_PASS_LANE = 0;
  lnx_RXDCC_EOM_CAL_DONE_LANE = 0;


  in_cont_mode = 0;
  in_power_on = 0;
  time_out_cnt = 0;
  saved_eom_clk_en = 1;
  dir = 0;
  hg_set = 0;

  //identify which kind of calibration is triggered
  if (cmx_CAL_DONE == 0) {                        //power-on calibration
    ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_RXDCC_EOM_CAL_EXT_EN;
    if (ext_en){                                     //use ext value for power-on, bypass calibration
      dcc_cnt = lnx_cal_rxdcc_eom[PWR][rx_pll_rate];
      RXDCC_HG_EOMCLK = lnx_cal_rxdcc_eom_hg[rx_pll_rate];          //load the HG setting.
    }
    else {                                          //use normal power-on calibration
      saved_eom_clk_en = EOM_CLK_EN;
      EOM_CLK_EN = 1;
      RXDCC_CAL_EN = 1;
      TRXDCCIN_SEL = 2;
      RXDCC_HG_EOMCLK = 0;
      dcc_cnt = 0x20;
      in_power_on = 1;
    }
    RXDCC_EN_EOMCLK = 1;                           //enable RXDCC_EN during power-on, never deassert
    rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;      //for power-on (inc. EXT_EN), reset fraction code to middle
    lnx_RXDCC_EOM_CAL_PASS_LANE = 0;
  } //cmx_CAL_DONE == 0
  else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
                                                  //either load power-on, or previous cont cal result for target speed
    dcc_cnt = lnx_cal_rxdcc_eom[PWR + cmx_RXDCC_EOM_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];
    rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
    RXDCC_HG_EOMCLK = lnx_cal_rxdcc_eom_hg[rx_pll_rate];          //load the HG setting.
  }
  else if (cmx_RXDCC_EOM_CAL_CONT_EN && EOM_CLK_EN == 1) {  //not power-on. Continious mode, only performed when EOM_CLK_EN == 1
    RXDCC_CAL_EN = 1;
    TRXDCCIN_SEL = 2;
    dcc_cnt = lnx_cal_rxdcc_eom[CONT][rx_pll_rate];    //always load cont result
    in_cont_mode = 1;                                  //when continious mode, use fraction code
  }
  else {                                               //Continious mode, but disabled, or SPEED_DIV != 0
    lnx_RXDCC_EOM_CAL_DONE_LANE = 1;
    return;
  }

//main loop
  do {
    RXDCC_EOMCLK = dcc_cnt;
    rxdcc_clk_toggle();

    time_out_cnt ++;
    if( RXDCC_CAL_EN == 0 ) break;                                      //either LOAD, or EXT_EN in power-on
    if( cmx_CAL_DONE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
    if( cmx_CAL_DONE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_RXDCC_EOM_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
    if( cmx_CAL_DONE == 0 && time_out_cnt >= RXDCC_EOM_LOOP_MAX && cmx_RXDCC_EOM_CAL_TIMEOUT_DIS == 0) break; //power-on, reached maximum rounds

    latched_RXDCC_DN = TXDCC_DN;   //RXDCC shares TXDCC up/dn
    int_up = 0;
    int_dn = 0;

    if (in_cont_mode) { //continious calibration
      if (latched_RXDCC_DN) {rxdcc_eom_step_cnt--;}
      else                  {rxdcc_eom_step_cnt++;}

      if( rxdcc_eom_step_cnt == 0) {
        int_up = 0;
        int_dn = 1;
        rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
      else if(rxdcc_eom_step_cnt>=(RXDCC_EOM_CAL_STEP_SIZE<<1)) {
        int_up = 1;
        int_dn = 0;
        rxdcc_eom_step_cnt = RXDCC_EOM_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
    }
    else {              //power-on calibration
      if (latched_RXDCC_DN) {int_up = 0; int_dn = 1;}
      else                  {int_up = 1; int_dn = 0;}
    }

    if (int_dn == 1) {
      dcc_cnt = sign_abs_dn(dcc_cnt);
    }
    else if (int_up == 1) {
      dir |= 1;
      dcc_cnt = sign_abs_up(dcc_cnt);
    }
    dir<<=1;
    dir = dir & 0x3f;

    //In power-on calibration, set HG to 1 if the code reached pre-set boundry.
    //don't set it back inside this loop. Set it back when calibration finishes.
    if (in_power_on && ((dcc_cnt & 0x1f) == 24) && (hg_set == 0)){
        RXDCC_HG_EOMCLK = 1;
        hg_set = 1;
        dcc_cnt = 0x20;
        time_out_cnt = 0;
    }

  } while (1);

  //save calibration result
  /*if (cmx_CAL_DONE == 0) {                            //if power-on calibration
    lnx_cal_rxdcc_eom[PWR][gen_rx] = dcc_cnt;       //save to power-on result
    lnx_cal_rxdcc_eom_hg[gen_rx] = RXDCC_HG_EOMCLK; //save the HG setting for current rate, will be loaded by continious mode
  }
  lnx_cal_rxdcc_eom[CONT][gen_rx] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
*/
  if (cmx_CAL_DONE == 0) {                            //if power-on calibration
      lnx_cal_rxdcc_eom[PWR][rx_pll_rate] = dcc_cnt;       //save to power-on result
      lnx_cal_rxdcc_eom_hg[rx_pll_rate] = RXDCC_HG_EOMCLK; //save the HG setting for current rate, will be loaded by continious mode
    }
    lnx_cal_rxdcc_eom[CONT][rx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]                                                   //for next continious mode to read

  if (saved_eom_clk_en == 0) {   //set EOM_CLK_EN back to 0 if it was 0 before power-on calibration
    EOM_CLK_EN = 0;
  }
  RXDCC_CAL_EN = 0;
  lnx_RXDCC_EOM_CAL_DONE_LANE = 1;


} //rxdcc_eom_cal(void)

void rxdcc_dll_cal_01(void) {

  int8_t  dcc_cnt;
  uint8_t latched_RXDCC_DN;
  uint8_t int_dn, int_up;
  uint8_t dir;
  uint8_t time_out_cnt;
  uint8_t in_cont_mode;
  uint8_t in_power_on;
  uint8_t ext_en;
  uint8_t hg_set;

  PHY_STATUS = ST_RXDCC_DLL_CAL;

  //lnx_RXDCC_DLL_CAL_PASS_LANE = 0;
  lnx_RXDCC_DLL_CAL_DONE_LANE = 0;

  in_cont_mode = 0;
  in_power_on = 0;
  time_out_cnt = 0;
  dir = 0;
  hg_set = 0;

  //identify which kind of calibration is triggered
  if (cmx_CAL_DONE == 0) {                        //power-on calibration
    ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_RXDCC_DLL_CAL_EXT_EN;
    if (ext_en) {                                     //use ext value for power-on, bypass calibration
      dcc_cnt = lnx_cal_rxdcc_dll[PWR][rx_pll_rate];
      RXDCC_HG_DLLCLK = lnx_cal_rxdcc_dll_hg[rx_pll_rate];          //load the HG setting.
    }
    else {                                          //use normal power-on calibration
      RXDCC_CAL_EN = 1;
      TRXDCCIN_SEL = 0;
      RXDCC_HG_DLLCLK = 0;
      dcc_cnt = 0x20;
      in_power_on = 1;
    }
    RXDCC_EN_DLLCLK = 1;                           //enable RXDCC_EN during power-on, never deassert
    rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;      //for power-on (inc. EXT_EN), reset fraction code to middle
    lnx_RXDCC_DLL_CAL_PASS_LANE = 0;
  } //cmx_CAL_DONE == 0
  else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
                                                  //either load power-on, or previous cont cal result for target speed
    dcc_cnt = lnx_cal_rxdcc_dll[PWR + cmx_RXDCC_DLL_CAL_CONT_CUR_LOAD_EN][rx_pll_rate];
    rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;     //when speed change, restore the fracition code to middle
    RXDCC_HG_DLLCLK = lnx_cal_rxdcc_dll_hg[rx_pll_rate];          //load the HG setting.
  }
  else if (cmx_RXDCC_DLL_CAL_CONT_EN) {  //not power-on. Continious mode, only performed when SPEED_DIV = 0
    RXDCC_CAL_EN = 1;
    TRXDCCIN_SEL = 0;
    dcc_cnt = lnx_cal_rxdcc_dll[CONT][rx_pll_rate];    //always load cont result
    in_cont_mode = 1;                                  //when continious mode, use fraction code
  }
  else {                                               //Continious mode, but disabled, or SPEED_DIV != 0
    lnx_RXDCC_DLL_CAL_DONE_LANE = 1;
    return;
  }

//main loop
  do {
    RXDCC_DLLCLK = dcc_cnt;
    rxdcc_clk_toggle();

    time_out_cnt ++;
    if( RXDCC_CAL_EN == 0 ) break;                                      //either LOAD, or EXT_EN in power-on
    if( cmx_CAL_DONE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
    if( cmx_CAL_DONE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_RXDCC_DLL_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
    if( cmx_CAL_DONE == 0 && time_out_cnt >= RXDCC_DLL_LOOP_MAX && cmx_RXDCC_DLL_CAL_TIMEOUT_DIS == 0) break; //power-on, reached maximum rounds

    latched_RXDCC_DN = TXDCC_DN;   //RXDCC shares TXDCC up/dn
    int_up = 0;
    int_dn = 0;

    if (in_cont_mode) { //continious calibration
      if (latched_RXDCC_DN) {rxdcc_dll_step_cnt--;}
      else                  {rxdcc_dll_step_cnt++;}

      if( rxdcc_dll_step_cnt == 0) {
        int_up = 0;
        int_dn = 1;
        rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
      else if(rxdcc_dll_step_cnt>=(RXDCC_DLL_CAL_STEP_SIZE<<1)) {
        int_up = 1;
        int_dn = 0;
        rxdcc_dll_step_cnt = RXDCC_DLL_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
    }
    else {              //power-on calibration
      if (latched_RXDCC_DN) {int_up = 0; int_dn = 1;}
      else                  {int_up = 1; int_dn = 0;}
    }

    if (int_dn == 1) {
      dcc_cnt = sign_abs_dn(dcc_cnt);
    }
    else if (int_up == 1) {
      dir |= 1;
      dcc_cnt = sign_abs_up(dcc_cnt);
    }
    dir<<=1;
    dir = dir & 0x3f;


    //In power-on calibration, set HG to 1 if the code reached pre-set boundry.
    //don't set it back inside this loop. Set it back when calibration finishes.
    if (in_power_on && ((dcc_cnt & 0x1f) == 24) && (hg_set == 0)){
        RXDCC_HG_DLLCLK = 1;
        hg_set = 1;
        dcc_cnt = 0x20;
        time_out_cnt = 0;
    }

  } while (1);

  //save calibration result
  if (cmx_CAL_DONE == 0) {                            //if power-on calibration
    lnx_cal_rxdcc_dll[PWR][rx_pll_rate] = dcc_cnt;       //save to power-on result
    lnx_cal_rxdcc_dll_hg[rx_pll_rate] = RXDCC_HG_DLLCLK; //save the HG setting for current rate, will be loaded by continious mode
  }
  lnx_cal_rxdcc_dll[CONT][rx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
                                                      //for next continious mode to read
  RXDCC_CAL_EN = 0;
  lnx_RXDCC_DLL_CAL_DONE_LANE = 1;


} //rxdcc_dll_cal(void)
