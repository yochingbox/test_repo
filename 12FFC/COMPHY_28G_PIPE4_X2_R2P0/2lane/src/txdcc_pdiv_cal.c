/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file cal_top.c
* \purpose txdcc dic calibration ram replacement
* \History
*	6/27/2019 Heejeong Ryu		Initial 
*/
#include "common.h"
// Code banking configuration, do not remove
#ifdef USE_BANKING
#pragma codeseg BANK1
#pragma constseg BANK1
#endif

#define TRXDCCIN_SEL                     reg_TRXDCCIN_SEL_LANE_2_0
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

void txdcc_pdiv_cal_ram(void) BANKING_CTRL {

#ifdef SUPPORT_TXDCC_PDIV_PATCH
  
  int8_t  dcc_cnt;             //PDIV use binary code instead of abs+sign
  uint8_t latched_TXDCC_DN;
  uint8_t int_dn, int_up;
  uint8_t dir;
  uint8_t time_out_cnt;
  uint8_t in_cont_mode;
  uint8_t in_power_on;  
  uint8_t ext_en;
  uint8_t saved_speed_div;

  PHY_STATUS = ST_TXDCC_PDIV_CAL;    //xbi

  lnx_TXDCC_PDIV_CAL_DONE_LANE = 0; 
  
  //TXDCC PDIV calibration only needed for SPEED_DIV != 0
  if (TX_SPEED_DIV == 0) {
      lnx_TXDCC_PDIV_CAL_DONE_LANE = 1;
      return;
  }

  in_cont_mode = 0;
  in_power_on = 0;
  saved_speed_div = 0;
  time_out_cnt = 0;
  dir = 0;  

  //identify which kind of calibration is triggered
  if (lnx_CAL_DONE_LANE == 0) {     //power-on calibration, only performed when speed_div != 0
    ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_TXDCC_PDIV_CAL_EXT_EN;
    if (ext_en)                                     //use ext value for power-on (stored into PWR), bypass calibration
      dcc_cnt = lnx_cal_txdcc_pdiv[PWR][tx_pll_rate];
    else {                                          //use normal power-on calibration
	  lnx_TXDCC_PDIV_CAL_PASS_LANE = 0; 
      TXDCCCAL_PDIV_EN = 1;
	  TXDCCCAL_EN = 1;
      TRXDCCIN_SEL = 4;
      saved_speed_div = TX_SPEED_DIV;               //PDIV clock DCC cal need to force SPEED_DIV to 1
      in_power_on = 1;
      TX_SPEED_DIV = 1;                             //Before force SPEED_DIV to 1, save the original one 
      dcc_cnt = 32;
    }
    TXDCC_EN = 1;                                  //enable TXDCC_EN during power-on, never deassert
    txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;         //during power-on (inc. EXT_EN), reset fraction code to middle
  } //lnx_CAL_DONE_LANE == 0
  else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
                                                  //either load power-on, or previous cont cal result for target speed
    dcc_cnt = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
    txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
  }
  else if (cmx_TXDCC_PDIV_CAL_CONT_EN) {               //not power-on. Continious mode.
    TXDCCCAL_PDIV_EN = 1;
    TXDCCCAL_EN = 1;
    TRXDCCIN_SEL = 4;
    dcc_cnt = lnx_cal_txdcc_pdiv[CONT][tx_pll_rate];    //always load cont result
    in_cont_mode = 1;                              //when continious mode, use fraction code
  }
  else {                                          //Continious mode, but disabled, or SPEED_DIV != 0
    lnx_TXDCC_PDIV_CAL_DONE_LANE = 1;
    return;
  }

//main loop  
  do {
    TXDCC_PDIV_CNT = dcc_cnt;
    txdcc_clk_toggle();

    time_out_cnt ++;
    if( TXDCCCAL_PDIV_EN == 0 ) break;                                       //either LOAD, or EXT_EN in power-on
    if( lnx_CAL_DONE_LANE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
    if( lnx_CAL_DONE_LANE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_TXDCC_PDIV_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
    if( lnx_CAL_DONE_LANE == 0 && time_out_cnt >= TXDCC_PDIV_LOOP_MAX && cmx_TXDCC_PDIV_CAL_TIMEOUT_DIS == 0) break;     //power-on, reached maximum rounds

    latched_TXDCC_DN = TXDCC_DN;
    int_up = 0;
    int_dn = 0; 

    if (in_cont_mode) { //continious calibration
      if (latched_TXDCC_DN) {txdcc_pdiv_step_cnt--;}
      else                  {txdcc_pdiv_step_cnt++;}

      if( txdcc_pdiv_step_cnt == 0) {
        int_up = 0;
        int_dn = 1; 
        txdcc_pdiv_step_cnt = TXDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
      else if(txdcc_pdiv_step_cnt>=(TXDCC_CAL_STEP_SIZE<<1)) {
        int_up = 1;
        int_dn = 0; 
        txdcc_pdiv_step_cnt = TXDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
    }
    else {              //power-on calibration
      if (latched_TXDCC_DN) {int_up = 0; int_dn = 1;}
      else                  {int_up = 1; int_dn = 0;}
    }        

    if (int_dn == 1) {
      if (dcc_cnt == 0) {dcc_cnt = 0;}
      else              {dcc_cnt--;}
    }
    else if (int_up == 1) {
      dir |= 1;
      if (dcc_cnt == 63) {dcc_cnt = 63;}
      else               {dcc_cnt++;}
    }
    dir<<=1;
    dir = dir & 0x3f;

  } while (1); 

  //if SPEED_DIV is forced to 1 during power-on calibration for E2C, restore it.
  if (in_power_on)
    TX_SPEED_DIV = saved_speed_div;

  //save calibration result
  if (lnx_CAL_DONE_LANE == 0) {                        //if power-on calibration
    lnx_cal_txdcc_pdiv[PWR][tx_pll_rate] = dcc_cnt;      //save to power-on result
  }
  lnx_cal_txdcc_pdiv[CONT][tx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
                                                  //for next continious mode to read
  //TXDCCCAL_PDIV_EN = 0; //[HR] per Hui, if TXDCCCAL_PDIV_EN=0, txdcc_pdiv_cnt become 0, will cause TX Jitter. FW should set 1 after pdiv_cal
  TXDCCCAL_EN = 0;
  lnx_TXDCC_PDIV_CAL_DONE_LANE = 1;

#endif //SUPPORT_TXDCC_PDIV_PATCH
} 

