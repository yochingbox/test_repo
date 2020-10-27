/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file spd_ctrl.c
* \purpose Speed Change
* \History
*	04/15/2019 Heejeong Ryu		Clean up 
*/
#include "common.h"
#include "calibration_common.h"
#include "pll_sharing.h"
#include "mcu_command.h"

#ifdef USE_BANKING
#pragma codeseg BANK3
#pragma constseg BANK3
#endif

void SpeedChange_top(void) BANKING_CTRL{
		delay(Tus);
	if ((reg_INT_PHY_GEN_TX_CHG_ISR_LANE && reg_INT_PHY_GEN_RX_CHG_ISR_LANE) || pll_sel==TS_ON || pll_sel==RS_ON) 
		SpeedChange();
	#if defined _SERDES_BUILD || _SAS_BUILD
	else if (reg_INT_PHY_GEN_TX_CHG_ISR_LANE) 
		SpeedChange_tx();
	else if (reg_INT_PHY_GEN_RX_CHG_ISR_LANE) 
		SpeedChange_rx();
	#endif
}	

/**
 * \module SpeedChange
 *
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/

void SpeedChange(void) BANKING_CTRL{

	if(!reg_ANA_PU_RX_LANE || !reg_PIN_PU_RX_RD_LANE ||
	!reg_ANA_PU_TX_LANE || !reg_PIN_PU_TX_RD_LANE) return;
	
	PHY_STATUS = ST_SPDCHG;
	reg_MCU_DEBUG0_LANE_7_0 = 0x1a;

    pll_request_pll_access(PLL_SEQUENCE__SpeedChange);

	//TODO
	//if (cmx_CAL_DONE == 1)
	turn_off_rx_cont_cal();
	turn_off_tx_cont_cal();
	
	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
	
	drv_power_off_dig_prot_en(); //Both TRX spd_chg digital off
	
    pll_access_route(PLL__RS_OR_TS__TS, MCU_SPD_CHG_RESET_PLL_TS);
    pll_access_route(PLL__RS_OR_TS__RS, MCU_SPD_CHG_RESET_PLL_RS);

	LoadSpeedtbl_tx();
	LoadSpeedtbl_rx();	
	
	if(phy_mode == PCIE || phy_mode == USB)	{ 
		if( gen_tx < 2) {						
			reg_TX_SEL_BITS_LANE = 0; reg_RX_SEL_BITS_LANE = 0;		
			//reg_TX_DEEMPH_FM_REG_LANE = 0;
		}
		else {						
			reg_TX_SEL_BITS_LANE = 1; reg_RX_SEL_BITS_LANE = 1;
			//reg_TX_DEEMPH_FM_REG_LANE = 1;
		}
	}

    pll_access_route(PLL__RS_OR_TS__TS, MCU_SPD_CHG_CLR_RESET_PLL_TS);
    pll_access_route(PLL__RS_OR_TS__RS, MCU_SPD_CHG_CLR_RESET_PLL_RS);

	if(phy_mode != SERDES){
		if(pll_sel != RS_ON) {
            pll_access_route(PLL__RS_OR_TS__TS, MCU_SPD_CHG_PLL_CAL_TX);
        }

		if(pll_sel != TS_ON) {
            pll_access_route(PLL__RS_OR_TS__RS, MCU_SPD_CHG_PLL_CAL_RX);
        }
		
		//load calibration & enable cont_cal 
		tx_cal_load();
		rx_cal_load();
		turn_on_tx_cont_cal();
		turn_on_rx_cont_cal();
	}
	else {
		//serdes speed change calibration

		//TODO 
		//load_cal_default or ana_pu down

		if(cmx_EXT_FORCE_CAL_DONE==0) {
			if(pll_sel != RS_ON) { 
                pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_CAL);
			}
			if(pll_sel != TS_ON) { 
                pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_CAL);
			}
            calibration_execute(TXDCC_CAL_INDEX); // txdcc_cal included txalign90
            calibration_execute(RX_CLK_CAL_INDEX);
            calibration_execute(RXEOM_CAL_INDEX);
		}
		else {
			if(pll_sel != RS_ON) {
                pll_access_route(PLL__RS_OR_TS__TS, MCU_CLK_TS_READY_1);
            }
			if(pll_sel != TS_ON) {
                pll_access_route(PLL__RS_OR_TS__RS, MCU_CLK_RS_READY_1);
            }
		}	
	}	

	
	if(phy_mode == PCIE || phy_mode == USB){
		if((reg_MCU_ISR0_RD_LANE_31_0_b0&0xfe)==0 ) drv_power_on_dig_prot_dis();
	}	
	else {
		if((reg_MCU_ISR0_RD_LANE_31_0_b0&0xfa)==0 ) {
			drv_power_on_dig_prot_dis();
		}	
	}			
	
    pll_free_pll();

	PHY_STATUS = ST_PLLREADY;
	
}

#if defined _SERDES_BUILD || defined _SAS_BUILD
void SpeedChange_rx(void) BANKING_CTRL{

	if(!reg_ANA_PU_RX_LANE || !reg_PIN_PU_RX_RD_LANE) return;

	PHY_STATUS = ST_SPDCHG_RX;
	reg_MCU_DEBUG0_LANE_7_0 = 0x1a;

	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
	reg_INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE = 0;

    pll_request_pll_access(PLL_SEQUENCE__SpeedChange_rx);

	//RX dig OFF
	drv_rx_off_dig_prot_en();
	
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_PLL_DIG_OFF_SPD_CHG);

	//TODO
	//turn_off_rx_cont_cal();

	Calibration_rx();

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_RX_PLL_DIG_ON);

    pll_free_pll();

	//RX dig ON
	drv_rx_on_dig_prot_dis();

	PHY_STATUS = ST_PLLREADY;
	
}

void SpeedChange_tx(void) BANKING_CTRL {

	if(!reg_ANA_PU_TX_LANE || !reg_PIN_PU_TX_RD_LANE) return;

	PHY_STATUS = ST_SPDCHG_TX;
	reg_MCU_DEBUG0_LANE_7_0 = 0x1b;

	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
	reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;

    pll_request_pll_access(PLL_SEQUENCE__SpeedChange_tx);

	//TX dig OFF
	drv_tx_off_dig_prot_en();
	
    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_PLL_DIG_OFF_SPD_CHG);

	//if (cmx_CAL_DONE == 1)
		// TODO - turn on when we have the calibration turn_off_tx_cont_cal();
	
	Calibration_tx();

    pll_access_route(PLL__RS_OR_TS__ANY, MCU_TX_PLL_DIG_ON);

    pll_free_pll();

	//TX dig ON
	drv_tx_on_dig_prot_dis();

	PHY_STATUS = ST_PLLREADY;
	
}
#endif //_SERDES_BUILD || _SAS_BUILD

void LoadSpeedtbl_rx(void) BANKING_CTRL {

	PHY_STATUS = ST_LD_SPDTBL_RX;

	lnx_RX_LOAD_SPEEDTBL_DONE_LANE = 0;

	new_gen_rx = reg_PIN_PHY_GEN_RX_RD_LANE_5_0;
	gen_rx = min(new_gen_rx, reg_PIN_PHY_GEN_MAX_RX_RD_LANE_5_0);
	gen_rx = new_gen_rx;

	if(BYPASS_SPDTBL_LOAD==0) {
		loadspeedtbl_rx();
		if(phy_mode != SERDES ) RX_PLL_RATE_INX = get_pll_rate_index(reg_RX_PLL_RATE_SEL_LANE_4_0);
		if(pll_sel != TS_ON) {
            pll_access_route_data(PLL__RS_OR_TS__RS,
                                  MCU_LOADSPEEDTBL_LC_PLL_RS,
                                  0,
                                  PIN_REF_FREF_SEL_RD);
			#ifdef _56G_7NM
			if(phy_mode == PCIE) {
			   if( RX_PLL_RATE_INX >= 1) {
				if(mcuid==MCU_LANE2 || mcuid==MCU_LANE3) {
					reg_PLL_RS_PLL_LPFR_LANE_2_0 = 7;
				}
                           }
			}
			#endif
		}
		//rx_eq_cfg();		
	}
	

	if(phy_mode == PCIE || phy_mode == USB)	{ 
		if( gen_rx < 2) {						
			reg_RX_SEL_BITS_LANE = 0;		
			//reg_TX_DEEMPH_FM_REG_LANE = 0;
		}
		else {						
			reg_RX_SEL_BITS_LANE = 1;
			//reg_TX_DEEMPH_FM_REG_LANE = 1;
		}
	}
	
	dfe_spd_init();

        drv_rx_func_cfg();

	lnx_RX_LOAD_SPEEDTBL_DONE_LANE = 1;
	
}

void LoadSpeedtbl_tx(void) BANKING_CTRL {

	PHY_STATUS = ST_LD_SPDTBL_TX;
	
	lnx_TX_LOAD_SPEEDTBL_DONE_LANE = 0;

	new_gen_tx = reg_PIN_PHY_GEN_TX_RD_LANE_5_0;
	gen_tx = min(new_gen_tx, reg_PIN_PHY_GEN_MAX_TX_RD_LANE_5_0);
	gen_tx = new_gen_tx;

	if(BYPASS_SPDTBL_LOAD==0) {
		loadspeedtbl_tx();
#if defined IPCE_COMPHY_1630_WA && defined _SERDES_BUILD
		// only affect data rates 7.5Gbps and below
		if ((gen_tx <= 13) || (gen_tx == 46)) {
			reg_TXCLK_DIV_DIG_LANE_2_0 = 0;
			if (gen_tx == 13) { //data rate = 7.5Gbps
				reg_TXSPEED_DIV_LANE_2_0 = 1;
			} else if ((gen_tx >= 7) && (gen_tx <= 12)) { //between 4.25GBps and 6.25GBps
				reg_TXSPEED_DIV_LANE_2_0 = 2;
			} else if (gen_tx <= 2) { // 1.25Gbps and below
				reg_TXSPEED_DIV_LANE_2_0 = 4;
				reg_TXREG_SPEEDTRK_DATA_LANE_3_0 = 0;
				reg_TXREG_SPEEDTRK_CLK_LANE_3_0 = 0;
			} else { // between 2.125Gbps and 3.125Gbps 
				reg_TXSPEED_DIV_LANE_2_0 = 3;
			}
		}
#endif
		if(phy_mode != SERDES ) TX_PLL_RATE_INX = get_pll_rate_index(reg_TX_PLL_RATE_SEL_LANE_4_0);
		if(pll_sel != RS_ON) {
            pll_access_route_data(PLL__RS_OR_TS__TS,
                                  MCU_LOADSPEEDTBL_LC_PLL_TS,
                                  0,
                                  PIN_REF_FREF_SEL_RD);
			#ifdef _56G_7NM	
			if(phy_mode == PCIE) {
			    if( TX_PLL_RATE_INX >= 1) {
				if(mcuid==MCU_LANE2 || mcuid==MCU_LANE3) {
					reg_PLL_TS_PLL_LPFR_LANE_2_0 = 7;
				}
			    }
			}
			#endif
		}
	}		


	if(phy_mode == PCIE || phy_mode == USB)	{ 
		if( gen_tx < 2) {						
			reg_TX_SEL_BITS_LANE = 0; 
			//reg_TX_DEEMPH_FM_REG_LANE = 0;
		}
		else {						
			reg_TX_SEL_BITS_LANE = 1; 
			//reg_TX_DEEMPH_FM_REG_LANE = 1;
		}
	}
	
        drv_tx_func_cfg();

	lnx_TX_LOAD_SPEEDTBL_DONE_LANE = 1;
	
}

void loadSpdtbl_4_fcnt_tx(void) BANKING_CTRL {

	reg_PLL_TS_FBDIV_LANE_7_0 = reg_PLL_TS_FBDIV_CAL_LANE_9_0_b0;
	reg_PLL_TS_FBDIV_LANE_9_8 = reg_PLL_TS_FBDIV_CAL_LANE_9_0_b1;
}

void loadSpdtbl_4_fcnt_rx(void) BANKING_CTRL {

	reg_PLL_RS_FBDIV_LANE_7_0 = reg_PLL_RS_FBDIV_CAL_LANE_9_0_b0;
	reg_PLL_RS_FBDIV_LANE_9_8 = reg_PLL_RS_FBDIV_CAL_LANE_9_0_b1;
}

uint8_t get_pll_rate_index(uint8_t rate) BANKING_CTRL {
	uint8_t rate_inx;
	
	rate_inx = 0;
	
	if(phy_mode == PCIE) {
		
		if(rate == 0x17) rate_inx = 0;
		else if(rate == 0x18) rate_inx = 1;
		else rate_inx = 2;
	}	
	else if(phy_mode <= SAS) { 
		if(rate == 0x15) rate_inx = 0;
		else rate_inx = 1;
	}
	
	return rate_inx;
}
