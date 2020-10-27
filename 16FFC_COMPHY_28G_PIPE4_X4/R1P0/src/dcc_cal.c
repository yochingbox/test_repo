#include "common.h"

#define RXDCC_CMP_OUT                    reg_ANA_TRX_TXDCC_DN_RD_LANE
#define RXDCCCAL_EN                      reg_RXDCC_CAL_EN_LANE
#define RXDCC_EN_DLLCLK                  reg_RXDCC_EN_DLLCLK_LANE
#define RXDCC_EN_DCLK                    reg_RXDCC_EN_DATACLK_LANE
#define RXDCC_EN_EOMCLK                  reg_RXDCC_EN_EOMCLK_LANE
#define TRXDCCIN_SEL                     reg_TRXDCCIN_SEL_LANE_2_0
#define RXDCC_HG_DLL                     reg_RXDCC_HG_DLLCLK_LANE
#define RXDCC_HG_DCLK                    reg_RXDCC_HG_DATACLK_LANE
#define RXDCC_HG_EOMCLK                  reg_RXDCC_HG_EOMCLK_LANE
#define RXDCC_DLL                        reg_RXDCC_DLLCLK_LANE_5_0
#define RXDCC_DCLK                       reg_RXDCC_DATACLK_LANE_5_0
#define RXDCC_EOMCLK                     reg_RXDCC_EOMCLK_LANE_5_0                 
#define RXDCC_LOOP_MAX                   72
#define RXDCC_DCLKMP_CLK                 reg_TRXDCC_CAL_CLK100KHZ_LANE
#define RXDCC_DAC_SYNC_CLK				 reg_RXDCC_DAC_SYNC_CLK_LANE
#define TXDCC_DN                         reg_ANA_TRX_TXDCC_DN_RD_LANE
#define TXDCC_CLK                        reg_TRXDCC_CAL_CLK100KHZ_LANE
#define TXDCC_EN                         reg_TXDCC_EN_LANE
#define TXDCCCAL_EN                      reg_TXDCCCAL_EN_LANE
#define TXDCC_HG                         reg_TXDCC_HG_LANE 
#define TXDCC_CNT                        reg_TXDCC_CNT_LANE_5_0
#define TXDCC_LOOP_MAX                   48 
#define rate							 pll_rate//cmx_PLL_RATE_SEL_3_0

#define TXDCCCAL_PDIV_EN                 reg_TXDCCCAL_PDIV_EN_LANE
#define TXDCC_PDIV_CNT                   reg_TXDCCCAL_PDIV_CNT_LANE_5_0
#define TX_SPEED_DIV                     reg_TX_SPEED_DIV_LANE_2_0


void rxdcc_clk_toggle(void) {
		 delay(T_p5us);
		 RXDCC_DAC_SYNC_CLK = 1;
		 delay(T_p5us);
		 RXDCC_DCLKMP_CLK = 1;
		 delay(T_2p5us);
		 RXDCC_DAC_SYNC_CLK = 0;
		 delay(T_p5us);
		 RXDCC_DCLKMP_CLK = 0;
		 delay(T_p5us);
}

/**
* \module TXDCC Calibration
*
* \param 
 *    <NONE> 
 * \return
*    <NONE> 
 * \note
*    Input:  
 *    Output: 
*/

void txdcc_post_div_cal(void)
{
	uint8_t  time_out_cnt;
	uint8_t  saved_tx_speed_div = 0;

	PHY_STATUS = ST_TXDCC_CAL;		
	TRXDCCIN_SEL = 4;
	TXDCC_EN   = 1;
	TXDCC_HG = 0;

	TXDCCCAL_PDIV_EN = 1;
	TXDCCCAL_EN = 0;
	time_out_cnt = 0;
	lnx_TXDCC_PDIV_CAL_DONE_LANE = 0;
	lnx_TXDCC_PDIV_CAL_PASS_LANE = 0;
 
	if( cmx_CAL_DONE ) {
			if(TX_SPEED_DIV == 0)
				goto skip_out;
			if (rate == 1) {
				TXDCC_PDIV_CNT = lnx_CAL_TXDCC_PDIV_CNT_R1_LANE_7_0;
			}
			else {
				TXDCC_PDIV_CNT = lnx_CAL_TXDCC_PDIV_CNT_R0_LANE_7_0;
			}	
	}
	else {
			TXDCC_PDIV_CNT = 0x20;
			saved_tx_speed_div = TX_SPEED_DIV;
			TX_SPEED_DIV = 0x1;
	}		
	
	while (time_out_cnt < TXDCC_LOOP_MAX)
	{
		TXDCC_CLK = 1;
                delay (T_2p5us);
                TXDCC_CLK = 0;
                delay (T_2p5us);

		if (TXDCC_DN == 0){
			if (TXDCC_PDIV_CNT == 0x3f)
				break;
			else
				TXDCC_PDIV_CNT++;
		}else if(TXDCC_DN == 1)
		{
			if (TXDCC_PDIV_CNT == 0x0)
				break;  
			else
				TXDCC_PDIV_CNT--;
		}
		if (cmx_CAL_DONE ) break;
		time_out_cnt++;
	}
	
	if (rate == 1) {
		lnx_CAL_TXDCC_PDIV_CNT_R1_LANE_7_0 = TXDCC_PDIV_CNT;
	}
	else {
		lnx_CAL_TXDCC_PDIV_CNT_R0_LANE_7_0 = TXDCC_PDIV_CNT;
	}

	if (cmx_CAL_DONE == 0)	
 		TX_SPEED_DIV = saved_tx_speed_div;

skip_out:
	TXDCCCAL_PDIV_EN = 0;
	lnx_TXDCC_PDIV_CAL_DONE_LANE = 1;
	lnx_TXDCC_PDIV_CAL_PASS_LANE = 1;
}

void txdcc_cal(void) {
	
	int8_t  dcc_cnt_2c, stop_sel_count, inv_dcc_cnt_2c;

	PHY_STATUS = ST_TXDCC_CAL;		
	TRXDCCIN_SEL = 4;
	TXDCC_EN   = 1;
	
	TXDCC_HG = 0;	
    	TXDCCCAL_EN = 1;
	lnx_TXDCC_CAL_DONE_LANE = 0;
	lnx_TXDCC_CAL_PASS_LANE = 0;

	delay(Tus);
	stop_sel_count = 0;
		
	if(TX_SPEED_DIV != 0)
               goto skip_out;		
	   
    if ( cmx_CAL_DONE){
		if (rate == 1) {
			dcc_cnt_2c = lnx_CAL_TXDCC_CNT_R1_LANE_7_0;
		}
		else {
	       	dcc_cnt_2c = lnx_CAL_TXDCC_CNT_R0_LANE_7_0;
		}
	}
	else {
		dcc_cnt_2c = 0;
		TXDCC_CNT = 0x20;
	}		

	TXDCC_CLK = 1;
	delay (T_2p5us);
	TXDCC_CLK = 0;
	delay (T_2p5us);

	do {
	 	if(stop_sel_count >= TXDCC_LOOP_MAX) break;
 
	 	if (TXDCC_DN == 0) {
			if (TXDCC_CNT == 0x01) { dcc_cnt_2c = 0; TXDCC_CNT = 0;  goto txdcc_loop; }
			else if (TXDCC_CNT == 0x00) { dcc_cnt_2c = 0; TXDCC_CNT = 0x20;  goto txdcc_loop; }	 
			else if (dcc_cnt_2c < 31)  {	dcc_cnt_2c ++; }					 
	 	}
	 	else {
			if (TXDCC_CNT == 0x20) { dcc_cnt_2c = 0; TXDCC_CNT = 0;  goto txdcc_loop; }
			else if (dcc_cnt_2c > -31) { dcc_cnt_2c --; }
	 	}

	     	if (dcc_cnt_2c >= 0) {
			TXDCC_CNT  = dcc_cnt_2c  | 0x20;
	 	}
	 	else {
			inv_dcc_cnt_2c = - dcc_cnt_2c;
			TXDCC_CNT  = inv_dcc_cnt_2c;
		}
							 
	txdcc_loop:		 
	 	TXDCC_CLK = 1;
	 	delay (T_2p5us);
	 	TXDCC_CLK = 0;
		if (cmx_CAL_DONE) break;				

		delay (T_2p5us);
	 	stop_sel_count ++;

	} while (1); 
			
	if (rate == 1) {
		lnx_CAL_TXDCC_CNT_R1_LANE_7_0 = dcc_cnt_2c;
	}
	else {
		lnx_CAL_TXDCC_CNT_R0_LANE_7_0 = dcc_cnt_2c;
	}

skip_out:
	TXDCC_CLK  = 0;
	TXDCCCAL_EN = 0;
	
	lnx_TXDCC_CAL_PASS_LANE = 1;
	lnx_TXDCC_CAL_DONE_LANE = 1;

}

/**
* \module RXDCC Calibration
*
* \param 
 *    <NONE> 
 * \return
*    <NONE> 
 * \note
*    Input:  
 *    Output: 
*/
void rxdcc_dll_cal(void) {
	            int8_t dcc_cnt_2c, stop_sel_count, inv_dcc_cnt_2c;
                uint8_t dir, cmp_out;
                
				PHY_STATUS = ST_RXDCC_DLL_CAL;
				
				RXDCCCAL_EN = 1;
				TRXDCCIN_SEL = 0;
				RXDCC_EN_DLLCLK = 1;
				lnx_RXDCC_DLL_CAL_DONE_LANE = 0;
				lnx_RXDCC_DLL_CAL_PASS_LANE = 0;
                
				delay(Tus);
				
				{
				dcc_cnt_2c = 0;
				dir = 0;
				stop_sel_count = 0;
					
	            if ( cmx_CAL_DONE){
				    if (rate == 1) {
		              dcc_cnt_2c = lnx_CAL_RXDCC_DLL_R1_LANE_7_0;
					}
		            else {
		              dcc_cnt_2c = lnx_CAL_RXDCC_DLL_R0_LANE_7_0;
		            }
				}
	            else {
					dcc_cnt_2c = 0;
					RXDCC_DLL = 0x20;
					RXDCC_HG_DLL = 0;
				}
				
				rxdcc_clk_toggle();
				
				do {
				 if (stop_sel_count >= RXDCC_LOOP_MAX) break;
				 
				 dir <<= 1;
				 cmp_out = RXDCC_CMP_OUT;
				 if( cmp_out==1) 
					 dir |= 1;	

				 dir = dir & 0x0f;
				 if (dir ==0x0a || dir ==0x05) {
					 lnx_RXDCC_DLL_CAL_PASS_LANE = 1;
					 break;
				 }
					 
				 if( cmp_out==1) {
				     if (RXDCC_DLL == 0x20) { dcc_cnt_2c = 0; RXDCC_DLL = 0;  goto rxdcc_dll_loop; }
					 else dcc_cnt_2c--;									 
                 }   
				 else {
				     if (RXDCC_DLL == 0x01) { dcc_cnt_2c = 0; RXDCC_DLL = 0;  goto rxdcc_dll_loop; }
				     else if (RXDCC_DLL == 0x00) { dcc_cnt_2c = 0; RXDCC_DLL = 0x20;  goto rxdcc_dll_loop; }	 
					 else dcc_cnt_2c++;					 
				 }
				 	 
				 if(dcc_cnt_2c >= 0) {
					 RXDCC_DLL = dcc_cnt_2c | 0x20;
				 }
				 else {
					 inv_dcc_cnt_2c = - dcc_cnt_2c;
					 RXDCC_DLL = inv_dcc_cnt_2c;
				 }
		rxdcc_dll_loop:		 
				 rxdcc_clk_toggle();

                 if (lnx_RXDCC_DLL_CAL_STOP_SEL_LANE == 0) break;				
				 
				 stop_sel_count ++;
				 
				 if (dcc_cnt_2c ==0x1f || dcc_cnt_2c ==0x3f) {
					 if(RXDCC_HG_DLL == 1) break;
				 
				     RXDCC_HG_DLL = 1;
					 RXDCC_DLL = 0x20;
					 dcc_cnt_2c = 0;
					 dir = 0;
					 stop_sel_count = 0;
					 
					 rxdcc_clk_toggle();
				 }				 
 
                } while (1);

				if (rate == 1) {
				  lnx_CAL_RXDCC_DLL_R1_LANE_7_0 = dcc_cnt_2c;
				}
				else {
				  lnx_CAL_RXDCC_DLL_R0_LANE_7_0 = dcc_cnt_2c;
				}
				}		
                RXDCCCAL_EN = 0;
				RXDCC_EN_DLLCLK = 0;
                lnx_RXDCC_DLL_CAL_DONE_LANE = 1;
				
}

void rxdcc_center_cal(void) {
	            int8_t dcc_cnt_2c, stop_sel_count, inv_dcc_cnt_2c;
                uint8_t dir, cmp_out;
                
				if( reg_RX_SPEED_DIV_LANE_2_0 & 0x4 ) return; //no rxdcc_c when rx_speed_div[2]=1
				
				PHY_STATUS = ST_RXDCC_C_CAL;
				
				RXDCCCAL_EN = 1;
				TRXDCCIN_SEL = 1;
				RXDCC_EN_DCLK = 1;
                lnx_RXDCC_C_CAL_DONE_LANE = 0;
				lnx_RXDCC_C_CAL_PASS_LANE = 0;
                
				delay(Tus);
				
				{
				dcc_cnt_2c = 0;
				dir = 0;
				stop_sel_count = 0;
				
				if ( cmx_CAL_DONE ){
				    if (rate == 1) {
		              dcc_cnt_2c = lnx_CAL_RXDCC_DCLK_R1_LANE_7_0;
					}
		            else {
		              dcc_cnt_2c = lnx_CAL_RXDCC_DCLK_R0_LANE_7_0;
		            }
				}
	            else {
					dcc_cnt_2c = 0;
					RXDCC_DCLK = 0x20;
					RXDCC_HG_DCLK = 0;
				}
				
				rxdcc_clk_toggle();

				do {
				 if (stop_sel_count >= RXDCC_LOOP_MAX) break;
				 
				 dir <<= 1;
				 cmp_out = RXDCC_CMP_OUT;
				 if( cmp_out==1) {
					 dir |= 0x01;
				 }
				 dir = dir & 0x0f;
				 if (dir ==0x0a || dir ==0x05) {
					 lnx_RXDCC_C_CAL_PASS_LANE = 1;
					 break;
				 }
				 
				 if( cmp_out==1) { 
				     if (RXDCC_DCLK == 0x20) { dcc_cnt_2c = 0; RXDCC_DCLK = 0;  goto rxdcc_c_loop; }
					 dcc_cnt_2c--;
                 }   
				 else {
					 if (RXDCC_DCLK == 0x01) { dcc_cnt_2c = 0; RXDCC_DCLK = 0;  goto rxdcc_c_loop; }
				     else if (RXDCC_DCLK == 0x00) { dcc_cnt_2c = 0; RXDCC_DCLK = 0x20;  goto rxdcc_c_loop; }	 
					 else dcc_cnt_2c++;					
				 }
				 		 
				 if(dcc_cnt_2c >= 0) {
					 RXDCC_DCLK = dcc_cnt_2c | 0x20;
				 }
				 else {
					 inv_dcc_cnt_2c = - dcc_cnt_2c;
					 RXDCC_DCLK = inv_dcc_cnt_2c;
				 }
				 
		rxdcc_c_loop:
				 rxdcc_clk_toggle();
				 
				 if ( cmx_CAL_DONE ) break;
				 
				 stop_sel_count ++;				 
		 
				 if (RXDCC_DCLK ==0x1f || RXDCC_DCLK ==0x3f) {
					 if(RXDCC_HG_DCLK == 1) break;
				 
				     RXDCC_HG_DCLK = 1;
					 RXDCC_DCLK = 0x20;
					 dcc_cnt_2c = 0;
					 dir = 0;
					 stop_sel_count = 0;
					 
					 rxdcc_clk_toggle();
				 }
				 	 
                } while (1);

				if (rate == 1) {
				  lnx_CAL_RXDCC_DCLK_R1_LANE_7_0 = dcc_cnt_2c;
				}
				else {
				  lnx_CAL_RXDCC_DCLK_R0_LANE_7_0 = dcc_cnt_2c;
				}
				}
                RXDCCCAL_EN = 0;
				RXDCC_EN_DCLK = 0;
                lnx_RXDCC_C_CAL_DONE_LANE = 1;
				
}

void rxdcc_eom_cal(void) {
	            int8_t dcc_cnt_2c, stop_sel_count, inv_dcc_cnt_2c;
                uint8_t dir, cmp_out;
                
				if( reg_RX_SPEED_DIV_LANE_2_0 & 0x4 ) return; //no rxdcc_eom when rx_speed_div[2]=1

				PHY_STATUS = ST_RXDCC_EOM_CAL;
				
				RXDCCCAL_EN = 1;
				TRXDCCIN_SEL = 2;
				RXDCC_EN_EOMCLK = 1;
				lnx_RXDCC_EOM_CAL_DONE_LANE = 0;
				lnx_RXDCC_EOM_CAL_PASS_LANE = 0;
                
				{
				dcc_cnt_2c = 0;
				dir = 0;
				stop_sel_count = 0;
			
				if ( cmx_CAL_DONE ){
				    if (rate == 1) {
		              dcc_cnt_2c = lnx_CAL_RXDCC_EOMCLK_R1_LANE_7_0;
					}
		            else {
		              dcc_cnt_2c = lnx_CAL_RXDCC_EOMCLK_R0_LANE_7_0;
		            }
				}
	            else {
					dcc_cnt_2c = 0;
					RXDCC_EOMCLK = 0x20;
					RXDCC_HG_EOMCLK = 0;
				}
				
				 rxdcc_clk_toggle();		

				 do {
				 if (stop_sel_count >= RXDCC_LOOP_MAX) break;
				 
				 stop_sel_count ++;
				
                 dir = (dir << 1); 	
				 cmp_out = RXDCC_CMP_OUT;
				 if( cmp_out==1) 
					 dir |= 0x01;					 

				 dir = dir & 0x0f;
				 if (dir ==0x0a || dir ==0x05) {
					 lnx_RXDCC_EOM_CAL_PASS_LANE = 1;
					 break;
				 }

				 if( cmp_out==1) {
					 if (RXDCC_EOMCLK == 0x20) { dcc_cnt_2c = 0; RXDCC_EOMCLK = 0;  goto rxdcc_eom_loop; }
					 else dcc_cnt_2c--;
                 }   
				 else {
				     if (RXDCC_EOMCLK == 0x01) { dcc_cnt_2c = 0; RXDCC_EOMCLK = 0;  goto rxdcc_eom_loop; }
				     else if (RXDCC_EOMCLK == 0x00) { dcc_cnt_2c = 0; RXDCC_EOMCLK = 0x20;  goto rxdcc_eom_loop; }	 
					 else  dcc_cnt_2c++;
				 }
				 			 
				 if(dcc_cnt_2c >= 0) {
					 RXDCC_EOMCLK = dcc_cnt_2c | 0x20;
				 }
				 else {
					 inv_dcc_cnt_2c = - dcc_cnt_2c;
					 RXDCC_EOMCLK = inv_dcc_cnt_2c;
				 }
		rxdcc_eom_loop:		 
				 rxdcc_clk_toggle();

				 if ( cmx_CAL_DONE ) break;

				 if (RXDCC_EOMCLK ==0x1f || RXDCC_EOMCLK ==0x3f) {
					 if(RXDCC_HG_EOMCLK == 1) break;
				 
				     RXDCC_HG_EOMCLK = 1;
					 RXDCC_EOMCLK = 0x20;
					 dcc_cnt_2c = 0;
					 dir = 0;
					 stop_sel_count = 0;
				     
					 rxdcc_clk_toggle();
				 }
                } while (1);

				if (rate == 1) {
				  lnx_CAL_RXDCC_EOMCLK_R1_LANE_7_0 = dcc_cnt_2c;
				}
				else {
				  lnx_CAL_RXDCC_EOMCLK_R0_LANE_7_0 = dcc_cnt_2c;
				}
				}
                RXDCCCAL_EN = 0;
				RXDCC_EN_EOMCLK = 0;
                lnx_RXDCC_EOM_CAL_DONE_LANE = 1;
				
}
