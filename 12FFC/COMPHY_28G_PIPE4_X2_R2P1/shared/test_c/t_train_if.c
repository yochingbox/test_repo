/******************************************************************
 * * 	        Marvell Semiconductor  
 * *******************************************************************
 * * \file main.c
 * * \purpose main top
 * * \History
 * *	10/13/2015 Heejeong Ryu		Initial 
 * */

#include "common.h"

/* Function Declaration */
int _sdcc_external_startup(void);
void int0_isr   (void) __interrupt (0)  __using (1); 
void int1_isr   (void) __interrupt (2)  __using (1); 
void timer1_isr (void) __interrupt (3)  __using (1);
void int2_isr   (void) __interrupt (9)  __using (1); 
void int3_isr   (void) __interrupt (10) __using (1); 
void int4_isr   (void) __interrupt (11) __using (1); 
void int5_isr   (void) __interrupt (12) __using (1); 
void int6_isr 	(void) __interrupt (13) __using (1);
void int7_isr 	(void) __interrupt (8)  __using (1);
void int8_isr 	(void) __interrupt (17) __using (1);
void int9_isr 	(void) __interrupt (18) __using (1);
void int10_isr 	(void) __interrupt (19) __using (1);
void int11_isr 	(void) __interrupt (20) __using (1);
void int12_isr 	(void) __interrupt (21) __using (1);
void uart0_isr  (void) __interrupt (4)  __using (1); 

_sdcc_external_startup() {
    return(1);
}

/**
 * \module test main
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
*/
void init(){
  
 //set train interrupt enable & initial 
  	phy_mode = reg_PHY_MODE_2_0;

    link_train_mode = reg_LINK_TRAIN_MODE_LANE;
    if(phy_mode == SERDES ) {//Ethernet, 
   
     //For SAS, n=2680, train_pat_num=0x42 (default)
 	 //For Ethernet mode, n=4384, train_pat_num=0x88
	 reg_TRAIN_PAT_NUM_LANE_8_0_b0 = 0x08; //0x88; //
	 reg_TRAIN_PAT_NUM_LANE_8_0_b1 = 0x01; 
	 reg_TX_TRAIN_PAT_TWO_ZERO_LANE = 1;
	 reg_TX_TRAIN_PAT_TOGGLE_LANE = 0;
	 reg_TX_TRAIN_PAT_SEL_LANE = 1;
	 reg_TX_TRAIN_PAT_MODE_LANE = 0;
         reg_TX_EM_CTRL_REG_EN_LANE = 1;
         reg_TX_EM_CTRL_PIPE_SEL_LANE = 0;
         reg_TX_EM_PO_CTRL_LANE_3_0 = 15;
         reg_TX_EM_PRE_CTRL_LANE_3_0 = 15;
	 
	 if(gen_rx <= 2 )  // data_rate <= 5G 32bit
		reg_DFE_TAP_SETTLE_SCALE_LANE_1_0 = 3;
	 else	
		reg_DFE_TAP_SETTLE_SCALE_LANE_1_0 = 1;

	 max_gen = 0;
		
       } 
       else { //   
         reg_DME_ENC_BALANCE_CAL_EN_LANE = 1;
	 reg_DME_DEC_BALANCE_CHK_EN_LANE = 1;

	 if(cmx_PHY_GEN_MAX_3_0 < max_gen) 
	     max_gen = cmx_PHY_GEN_MAX_3_0;
       }


	if( link_train_mode) {
	//int7
	#ifdef SUPPORT_LINK_TRAIN_MODE
	reg_INT7_PIN_TX_TRAIN_ENABLE_INT_EN_LANE = 1;
	#endif
	}
	else {	
	//int5
	#ifdef SUPPORT_AUTO_TRAIN_MODE
	reg_INT5_PIN_TX_TRAIN_ENABLE_INT_EN_LANE = 1;
	#endif
	}
	if(phy_mode != PCIE)
	reg_INT4_REMOTE_CTRL_VALID_INT_EN_LANE = 1;

 }

void SpeedChange_fast(){



  gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_3_0;
  gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_3_0;
  gen_pll = max(gen_tx, gen_rx);

//SERDES 28.125G, 125M, PI enable
//speed table, PLL
  cmx_PLL_RATE_SEL_3_0 = 4;
  reg_PLL_REG_SEL_2_0 = 4;
  reg_FBDIV_1_0 = 0;
  reg_FBDIV_9_2 = 14; 
  reg_REFDIV_3_0 = 2;
  reg_VIND_BAND_SEL = 1;
  reg_DIV_1G_4_0 = 14;
  reg_ICP_3_0 = 14;
  reg_PLL_LPFR_1_0 = 0;
  reg_PLL_LPFC_1_0 = 1;
  cmx_SPEED_THRESH_15_0 = 2009;

//speed table TX
  reg_TX_SPEED_DIV_1_0 = 0;
  reg_TX_CLK_DIV_DIG_LANE_1_0 = 0;
  reg_TX_REG_SPEED_TRK_CLK_LANE_2_0 = 7;
  reg_TX_REG_SPEED_TRK_DATA_LANE_2_0 = 7;
  reg_TX_EM_CTRL_REG_EN_LANE = 1;
  reg_TX_EM_CTRL_PIPE_SEL_LANE = 0;
  reg_SLEWRATE_EN_LANE_1_0 = 0;
  
//no speed table Rx, open loop testing.

  reg_DTL_CLK_OFF_LANE= 0; 
  reg_DTX_CLK_OFF = 0;
  reg_DFE_CLK_OFF_LANE = 0; 
  reg_RESET_DTL_LANE = 0;	
  reg_RESET_DTX	= 0; 
  reg_PIN_PLL_READY_RX_LANE = 1;
  reg_PIN_PLL_READY_TX_LANE = 1;
  reg_PWRON_SEQ = 0;
  
  DBG_Printf("\r\nLoaded Speed Table, waiting for training trigger\n");
  PHY_STATUS = ST_PLLREADY;
}

void emphasis_sweep(){

  uint8_t i;

  reg_ANA_TX_EM_PRE_EN_LANE = 1;
  reg_ANA_TX_EM_PO_EN_LANE = 1;
  reg_ANA_TX_EM_PEAK_EN_LANE = 1;

  for (i = 0; i <= 14; i++) {
    reg_TX_EM_PEAK_CTRL_LANE_3_0 = i;
    reg_TX_EM_PRE_CTRL_LANE_3_0 = i;
    reg_TX_EM_PO_CTRL_LANE_3_0 = 15 - i;
    delay(T_p5us);
  }

  reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 1;
  do_train = 0;
  reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 1;
  while( reg_PIN_TX_TRAIN_ENABLE_MUX_RD_LANE ); //wait for hardware check ttui transfer finish.
  reg_REMOTE_TX_TRAIN_COMPLETE_LANE = 0;
  reg_LOCAL_TX_TRAIN_COMPLETE_LANE = 0;

}

void main(){
  EA = 0;
  cpu_init();
  init();	
  EA = 1;
        
  clear_xdata();	//clear xdata memory
  //PowerUp_Seq_Test(); //power up pins forced by testbench
  SpeedChange_fast(); //just force speed table and assert PLL_READY
  
  while(1){
    switch(PHY_STATUS){
    case ST_TRXTRAIN: emphasis_sweep(); break;	
    case ST_PLLREADY: 	break; 
    case ST_NORMAL: 	break;
    } 
  if(do_train | do_rxtrain)   {PHY_STATUS = ST_TRXTRAIN; }  
  }		

}

