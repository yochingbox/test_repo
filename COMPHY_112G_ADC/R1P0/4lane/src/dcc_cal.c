#include "common.h"
// Code banking configuration, do not remove
#if 0 //def USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

#if 0
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



void txdcc_clk_toggle( void ) BANKING_CTRL {

	TXDCC_CLK = 1;
	delay (T_3us);
	TXDCC_CLK = 0;
	delay (T_3us);
  
} //txdcc_out( int8_t dat)



void txdcc_cal(void) BANKING_CTRL {
  
  int8_t  dcc_cnt;
  uint8_t latched_TXDCC_DN;
  uint8_t int_dn, int_up;
  uint8_t dir;
  uint8_t time_out_cnt;
  uint8_t in_cont_mode;
  uint8_t in_power_on;
  uint8_t ext_en;
  uint8_t saved_speed_div;
  uint8_t hg_set;

  PHY_STATUS = ST_TXDCC_CAL;    

  //lnx_TXDCC_CAL_PASS_LANE = 0;
  lnx_TXDCC_CAL_DONE_LANE = 0; 
  
  in_cont_mode = 0;
  in_power_on = 0;
  saved_speed_div = 0;
  time_out_cnt = 0;
  dir = 0;  
  hg_set = 0;

  //identify which kind of calibration is triggered
  if (cmx_CAL_DONE == 0) {                        //power-on calibration
    ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_TXDCC_CAL_EXT_EN;
    if (ext_en){                                     //use ext value for power-on, bypass calibration
      dcc_cnt = lnx_cal_txdcc[PWR][tx_pll_rate];
      TXDCC_HG = lnx_cal_txdcc_hg[tx_pll_rate];      //load the HG setting. 
    }
    else {                                          //use normal power-on calibration
      TXDCCCAL_EN = 1;
      TXDCCCAL_PDIV_EN = 0;
      TRXDCCIN_SEL = 4;
      TXDCC_HG = 0; 
      saved_speed_div = TX_SPEED_DIV;               //E2C clock DCC cal need to force SPEED_DIV to 0
      in_power_on = 1;                              //flag the power-on calibration, so restore speed_div at the end
      TX_SPEED_DIV = 0;                             //Before force SPEED_DIV to 0, save the original one 
      dcc_cnt = 0x20;
    }
    TXDCC_EN = 1;                                  //enable TXDCC_EN during power-on, never deassert
    txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;              //for power-on (inc. EXT_EN), reset fraction code to middle
    lnx_TXDCC_CAL_PASS_LANE = 0;
  } //cmx_CAL_DONE == 0
  else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
                                                  //either load power-on, or previous cont cal result for target speed
    dcc_cnt = lnx_cal_txdcc[PWR + cmx_TXDCC_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
    txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
    TXDCC_HG = lnx_cal_txdcc_hg[tx_pll_rate];      //load the HG setting. 
  }
  else if (cmx_TXDCC_CAL_CONT_EN && TX_SPEED_DIV == 0) {  //not power-on. Continious mode, only performed when SPEED_DIV = 0
    TXDCCCAL_EN = 1;
    TXDCCCAL_PDIV_EN = 0;
    TRXDCCIN_SEL = 4;
    dcc_cnt = lnx_cal_txdcc[CONT][tx_pll_rate];    //always load cont result
    in_cont_mode = 1;                              //when continious mode, use fraction code
  }
  else {                                          //Continious mode, but disabled, or SPEED_DIV != 0
    lnx_TXDCC_CAL_DONE_LANE = 1;
    return;
  }

//main loop  
  do {
    TXDCC_CNT = dcc_cnt;
    txdcc_clk_toggle();

    time_out_cnt ++;
    if( TXDCCCAL_EN == 0 ) break;                                       //either LOAD, or EXT_EN in power-on
    if( cmx_CAL_DONE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
    if( cmx_CAL_DONE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_TXDCC_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
    if( cmx_CAL_DONE == 0 && time_out_cnt >= TXDCC_LOOP_MAX && cmx_TXDCC_CAL_TIMEOUT_DIS == 0) break;     //power-on, reached maximum rounds

    latched_TXDCC_DN = TXDCC_DN;
    int_up = 0;
    int_dn = 0; 

    if (in_cont_mode) { //continious calibration
      if (latched_TXDCC_DN) {txdcc_step_cnt--;}
      else                  {txdcc_step_cnt++;}

      if( txdcc_step_cnt == 0) {
        int_up = 0;
        int_dn = 1; 
        txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
      else if(txdcc_step_cnt>=(TXDCC_CAL_STEP_SIZE<<1)) {
        int_up = 1;
        int_dn = 0; 
        txdcc_step_cnt = TXDCC_CAL_STEP_SIZE;  //after up/dn triggered, reset fraction code to middle
      }
    }
    else {              //power-on calibration
      if (latched_TXDCC_DN) {int_up = 0; int_dn = 1;}
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
    if (in_power_on && (dcc_cnt & 0x1f == 24) && (hg_set == 0)){ 
        TXDCC_HG = 1;
        hg_set = 1;
        dcc_cnt = 0x20;
        time_out_cnt = 0;
    }

  } while (1); 

  //if power-on calibration
  if (in_power_on == 1)
    TX_SPEED_DIV = saved_speed_div;
    

  //save calibration result
  if (cmx_CAL_DONE == 0) {                        //if power-on calibration (including ext_en)
    lnx_cal_txdcc[PWR][tx_pll_rate] = dcc_cnt;      //save to power-on result
    lnx_cal_txdcc_hg[tx_pll_rate] = TXDCC_HG;       //save the HG setting for current rate, will be loaded by continious mode
  }
  lnx_cal_txdcc[CONT][tx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
                                                  //for next continious mode to read
  TXDCCCAL_EN = 0;
  lnx_TXDCC_CAL_DONE_LANE = 1;


} //txdcc_cal(void)



void txdcc_pdiv_cal(void) BANKING_CTRL {
  
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

  //lnx_TXDCC_PDIV_CAL_PASS_LANE = 0;
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
  if (cmx_CAL_DONE == 0) {     //power-on calibration, only performed when speed_div != 0
    ext_en = cmx_EXT_FORCE_CAL_DONE || cmx_TXDCC_PDIV_CAL_EXT_EN;
    if (ext_en)                                     //use ext value for power-on (stored into PWR), bypass calibration
      dcc_cnt = lnx_cal_txdcc_pdiv[PWR][tx_pll_rate];
    else {                                          //use normal power-on calibration
      TXDCCCAL_EN = 1;
      TXDCCCAL_PDIV_EN = 1;
      TRXDCCIN_SEL = 4;
      saved_speed_div = TX_SPEED_DIV;               //PDIV clock DCC cal need to force SPEED_DIV to 1
      in_power_on = 1;
      TX_SPEED_DIV = 1;                             //Before force SPEED_DIV to 1, save the original one 
      dcc_cnt = 32;
    }
    TXDCC_EN = 1;                                  //enable TXDCC_EN during power-on, never deassert
    txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;         //during power-on (inc. EXT_EN), reset fraction code to middle
    lnx_TXDCC_PDIV_CAL_PASS_LANE = 0;
  } //cmx_CAL_DONE == 0
  else if (LOAD_CAL_ON) {                         //not power-on. Speed-change, load result for current rate
                                                  //either load power-on, or previous cont cal result for target speed
    dcc_cnt = lnx_cal_txdcc_pdiv[PWR + cmx_TXDCC_PDIV_CAL_CONT_CUR_LOAD_EN][tx_pll_rate];  
    txdcc_pdiv_step_cnt = TXDCC_PDIV_CAL_STEP_SIZE;             //when speed change, restore the fracition code to middle
  }
  else if (cmx_TXDCC_PDIV_CAL_CONT_EN) {               //not power-on. Continious mode.
    TXDCCCAL_EN = 1;
    TXDCCCAL_PDIV_EN = 1;
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
    if( TXDCCCAL_EN == 0 ) break;                                       //either LOAD, or EXT_EN in power-on
    if( cmx_CAL_DONE == 1 && time_out_cnt > 1) break;                   //continious mode, has ran 1 round
    if( cmx_CAL_DONE == 0 && is_toggle_pat( dir, time_out_cnt - 1 ))  { lnx_TXDCC_PDIV_CAL_PASS_LANE = 1;  break; }     //power-on, toggled
    if( cmx_CAL_DONE == 0 && time_out_cnt >= TXDCC_PDIV_LOOP_MAX && cmx_TXDCC_PDIV_CAL_TIMEOUT_DIS == 0) break;     //power-on, reached maximum rounds

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
  if (cmx_CAL_DONE == 0) {                        //if power-on calibration
    lnx_cal_txdcc_pdiv[PWR][tx_pll_rate] = dcc_cnt;      //save to power-on result
  }
  lnx_cal_txdcc_pdiv[CONT][tx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
                                                  //for next continious mode to read
  TXDCCCAL_EN = 0;
  TXDCCCAL_PDIV_EN = 0;
  lnx_TXDCC_PDIV_CAL_DONE_LANE = 1;


} //txdcc_pdiv_cal(void)


void rxdcc_clk_toggle(void) BANKING_CTRL {
  delay(T_p5us);
  RXDCC_DAC_SYNC_CLK = 1;
  delay(T_p5us);
  RXDCC_DCLKMP_CLK = 1;
  delay(T_2p5us);
  RXDCC_DAC_SYNC_CLK = 0;
  delay(T_p5us);
  RXDCC_DCLKMP_CLK = 0;
  delay(T_2p5us);
}

void rxdcc_dll_cal(void) BANKING_CTRL {
  
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


void rxdcc_data_cal(void) BANKING_CTRL {
  
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
  if (cmx_CAL_DONE == 0) {                            //if power-on calibration
    lnx_cal_rxdcc_data[PWR][rx_pll_rate] = dcc_cnt;       //save to power-on result
    lnx_cal_rxdcc_data_hg[rx_pll_rate] = RXDCC_HG_DATACLK; //save the HG setting for current rate, will be loaded by continious mode
  }

  lnx_cal_rxdcc_data[CONT][rx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
                                                      //for next continious mode to read
  RXDCC_CAL_EN = 0;
  lnx_RXDCC_DATA_CAL_DONE_LANE = 1;


} //rxdcc_data_cal(void)


void rxdcc_eom_cal(void) BANKING_CTRL {
  
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
  if (cmx_CAL_DONE == 0) {                            //if power-on calibration
    lnx_cal_rxdcc_eom[PWR][rx_pll_rate] = dcc_cnt;       //save to power-on result
    lnx_cal_rxdcc_eom_hg[rx_pll_rate] = RXDCC_HG_EOMCLK; //save the HG setting for current rate, will be loaded by continious mode
  }
  lnx_cal_rxdcc_eom[CONT][rx_pll_rate] = dcc_cnt;     //no matter power-on or LOAD or continious, need to save to [CONT]
                                                      //for next continious mode to read

  if (saved_eom_clk_en == 0) {   //set EOM_CLK_EN back to 0 if it was 0 before power-on calibration
    EOM_CLK_EN = 0;
  }
  RXDCC_CAL_EN = 0;
  lnx_RXDCC_EOM_CAL_DONE_LANE = 1;


} //rxdcc_eom_cal(void)
#else
void txalign90_dcc_cal(void) {}
void txdcc_cal(void) {}
void txdcc_pdiv_cal(void) {}
void rxdcc_dll_cal(void) {}
void rxdcc_data_cal(void) {}
void rxdcc_eom_cal(void) {}
#endif









