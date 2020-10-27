/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file power_serdes.c
* \purpose power control for SERDES
* \History
*	04/15/2019 Heejeong Ryu		Initial & clean up
*/

#include "common.h"

/*#ifdef USE_BANKING*/
/*#pragma codeseg BANK1*/
/*#endif*/

#if defined TRX_SFT_RESET_CONTROL && defined _SERDES_BUILD

static void clr_phy_gen_rx_tx_isr() {
    reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
    reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
    reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
    reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
}

void Serdes_Power_Speed_Management(void) BANKING_CTRL {
	//do {
/*	
		if (reg_INT_PU_PLL_CHG_FALLING_ISR_LANE) {
				Power_Slumber();		
		}
			
		if (reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {
				Power_Patial_Slumber_Rx();
		}						

		if (reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {
				Power_Patial_Slumber_Tx();
		}						

		if (reg_INT_PU_TX_CHG_RISING_ISR_LANE) {
				Power_Patial_Slumber_Wakeup_Tx();
		}

		if (reg_INT_PU_RX_CHG_RISING_ISR_LANE) {
				Power_Patial_Slumber_Wakeup_Rx();
		}
		
		//if(reg_PIN_PLL_READY_RX_LANE && reg_PIN_PLL_READY_TX_LANE) break;
		//if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_RISING_ISR_LANE) break;
		
	//} while((reg_MCU_DEBUGA_LANE_7_0=0x6C)&&1);	

Serdes mode sft_rst has new scheduling*/
	if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
	        reg_MCU_DEBUG0_LANE_7_0 = 0x55;
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE && reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x70;*/
			delay(Tus);

			reset_core_rx_up();
	        
            /*reg_MCU_DEBUG0_LANE_7_0 = 0x7c;*/

			delay(Tus);

			reset_core_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x81;
		}
		//Case 2 Only SFT_RST rising
		else if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x71;*/
			delay(Tus);

			reset_core_rx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0x82;

		}//Case 3 Only SFT_RST falling
		else {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x72;*/
			delay(Tus);

			reset_core_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x83;
		}
 	}
	
	if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
	        reg_MCU_DEBUG0_LANE_7_0 = 0x56;
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE && reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x73;*/
			delay(Tus);

			reset_core_tx_up();
            
            /*reg_MCU_DEBUG0_LANE_7_0 = 0x7d;*/

			reset_core_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x84;
		}
		//Case 2 Only SFT_RST rising
		else if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x74;*/
			delay(Tus);

			reset_core_tx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0x85;

		}//Case 3 Only SFT_RST falling
		else if(reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x75;*/
			delay(Tus);

			reset_core_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x86;
		}
	}

	//PU polling
	if (reg_INT_PU_TX_CHG_RISING_ISR_LANE || reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
	        reg_MCU_DEBUG0_LANE_7_0 = 0x57;
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_INT_PU_TX_CHG_RISING_ISR_LANE && reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x76;*/
			delay(Tus);

			pu_tx_down();

            /*reg_MCU_DEBUG0_LANE_7_0 = 0x7e;*/

			pu_tx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0x87;
		}
		//Case 2 Only PU rising
		else if(reg_INT_PU_TX_CHG_RISING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x77;*/
			delay(Tus);

			pu_tx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0x88;

		}//Case 3 Only PU falling
        else if(reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x78;*/
			delay(Tus);

			pu_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x89;
		}
		
	}
	
	//PU polling
	if (reg_INT_PU_RX_CHG_RISING_ISR_LANE || reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
	        reg_MCU_DEBUG0_LANE_7_0 = 0x58;
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_INT_PU_RX_CHG_RISING_ISR_LANE && reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x79;*/
			delay(Tus);

			pu_rx_down();
            
            reg_MCU_DEBUG0_LANE_7_0 = 0x7f;

			pu_rx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0x8a;
		}
		//Case 2 Only PU rising
		else if(reg_INT_PU_RX_CHG_RISING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x7a;*/
			delay(Tus);

			pu_rx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0x8b;

		}//Case 3 Only PU falling
		else if(reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {	
			/*reg_MCU_DEBUG0_LANE_7_0 = 0x7b;*/
			delay(Tus);

			pu_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x8c;
		}
		
	}
	
	if (reg_INT_PHY_GEN_RX_CHG_ISR_LANE) {
	        reg_MCU_DEBUG0_LANE_7_0 = 0x59;
		
		delay(Tus);
	
		spd_chg_rx();
	
		reg_MCU_DEBUG0_LANE_7_0 = 0x8d;
		
	}
	if (reg_INT_PHY_GEN_TX_CHG_ISR_LANE) {
	        reg_MCU_DEBUG0_LANE_7_0 = 0x5a;
		
		delay(Tus);
	
		spd_chg_tx();
	
		reg_MCU_DEBUG0_LANE_7_0 = 0x8e;
		
	}

}	

/**
 * \module Power_Slumber
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: 
 *    Output: 
*/

//Commented as Serdes mode would always sft_rst during power events, SATA/SAS may apply

#if 0
void Power_Slumber( void ) BANKING_CTRL {

	PHY_STATUS = ST_SLUMBER;

	turn_off_cont_cal();

	reg_INT_PU_PLL_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_PLL_CHG_FALLING_ISR_CLEAR_LANE = 0;
	reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;
	reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

//SYNC_STATUS_LANE_EN = 0;	
//	if(reg_DFE_ADAPT_CONT_LANE == 1) 
//	{
//		reg_DFE_ADAPT_CONT_LANE = 0;
//	//	while((reg_MCU_DEBUGA_LANE_7_0=0x6D)&&!reg_DFE_DONE_LANE);
//		reg_DFE_START_LANE = 0;
//	}

	drv_rx_off_dig_prot_en();
	drv_rx_off_seq();

	drv_tx_off_dig_prot_en();
	drv_tx_off_seq();

	rx_pll_dig_off();
	rx_pll_ana_off();

	tx_pll_dig_off();
	tx_pll_ana_off();
	
	do {
#ifdef DRV_PWR_V0
		if( reg_PIN_REFCLK_DIS_RD == 1 ) {
#else
		if( reg_PIN_REFCLK_DIS_RD_LANE == 1 ) {
#endif
			PHY_STATUS = ST_SLUMBER_CLK;
			TCON  = 0x04; //EX0=LVL 
			reg_INT_REFCLK_DIS_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_REFCLK_DIS_CHG_RISING_ISR_CLEAR_LANE = 0;			
			reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 1;
			PCON = 0x8a; //mcu stop 
			
			//wait for mcu wakeup
			
			TCON  = 0x05; //EX0=FALL
			reg_INT0_REFCLK_DIS_EN_INT_EN_LANE = 0;
			reg_INT_REFCLK_DIS_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_REFCLK_DIS_CHG_FALLING_ISR_CLEAR_LANE = 0;
		}
		
		if (reg_INT_PU_PLL_CHG_RISING_ISR_LANE) {
			reg_INT_PU_PLL_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_PLL_CHG_RISING_ISR_CLEAR_LANE = 0;
			break;
		}
		
		if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE) return;
		
	} while((reg_MCU_DEBUGA_LANE_7_0=0x6E)&&1) ;


	PHY_STATUS = ST_SLUMBER_WK;
	
	if( reg_PU_IVREF_FELL == 1 ) {

		reg_ANA_PU_SQ_LANE = 0; 

		check_pu_ivref();

		delay(T_5us);
		reg_ANA_PU_SQ_LANE=1;
		delay(T_20us);
	}

	{
		tx_pll_ana_on();
		tx_pll_fast_cal_sel();
		tx_pll_dig_on();

		rx_pll_ana_on();
		rx_pll_fast_cal_sel();
		rx_pll_dig_on();
		
		drv_tx_on_seq();
		load_tx_cal_data();
		reg_TX_RESET_ANA_LANE = 0;
		drv_tx_on_dig_prot_dis();
		
		drv_rx_on_seq();
		load_rx_cal_data();
		reg_RX_RESET_ANA_LANE = 0;
		reg_RX_ADC_RESET_LANE = 1;
		delay(T_p25us);
		reg_RX_ADC_RESET_LANE = 0;
		drv_rx_on_dig_prot_dis();
		
	}	
 	
	
	//delay(T_p5us);
	//
	//drv_tx_on_seq();	
	//
	//if(reg_PIN_PU_RX_RD_LANE) drv_rx_on_seq();		
	//else drv_rx_off_seq();
	//
	//pll_fast_cal();	
	

	//if( reg_PIN_PU_TX_RD_LANE==1 && reg_PIN_PU_RX_RD_LANE==1) 
	//{
	//	reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
	//	reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;
	//	reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
	//	reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;
    //
	////DTL_DTX_DFE_clkoff_reset_0();
    //
	//	//delay(T_10us);
	//	//txlane_align();		
	//	//delay(T_6us);
	//	//txdigital_align();
    //
	//	//timeout = 0;
	//	//timeout_start((uint16_t)6); //50mS
	//	//while((reg_MCU_DEBUGA_LANE_7_0=0x6F)&&!timeout);
	//	drv_tx_on_seq();
	//	drv_rx_on_seq();
	//	
	//	//TODO local cal
    //
	//	drv_tx_on_dig_prot_dis();
	//	drv_rx_on_dig_prot_dis();
	//	
	//	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	//	PHY_STATUS = ST_PLLREADY; 
	//	//else	
	//	//	PHY_STATUS = ST_DTL;
	//}
	//else {
	//	do_wake = 0;
	//	//if( reg_PIN_PU_TX_RD_LANE==0 ) 	PHY_STATUS = ST_PSLUMBER_TX;
	//	//else PHY_STATUS = ST_PSLUMBER;
	//}
}


/**
 * \module Power_Partial_Slumber TX/RX
 * 
 * \param 
 *    <NONE> 
 * \return
 *    <NONE> 
 * \note
 *    Input: patrial tx: pin_pu_tx : H -> L -> H, pin_pu_rx : H
 *           partial_rx: pin_pu_rx : H -> L -> H, pin_pu_tx : H
 *    Output: 
*/
void Power_Patial_Slumber_Tx( void ) BANKING_CTRL {

	PHY_STATUS = ST_PSLUMBER_TX;
	turn_off_tx_cont_cal();

	drv_tx_off_dig_prot_en();	
	drv_tx_off_seq();
	
	reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;
}

void Power_Patial_Slumber_Rx( void ) BANKING_CTRL {

	PHY_STATUS = ST_PSLUMBER_RX;
	turn_off_rx_cont_cal();

	//if(reg_PIN_PU_RX_RD_LANE == 0 && reg_DFE_ADAPT_CONT_LANE == 1) 
	//{
	//	reg_DFE_ADAPT_CONT_LANE = 0;
	//	//while((reg_MCU_DEBUGA_LANE_7_0=0x70)&&!reg_DFE_DONE_LANE);
	//	reg_DFE_START_LANE = 0;
	//}

	drv_rx_off_dig_prot_en();
	drv_rx_off_seq();

	reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;
}


void Power_Patial_Slumber_Wakeup_Tx( void ) BANKING_CTRL {

	PHY_STATUS = ST_PSLUMBER_WK_TX;

	reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;

	drv_tx_on_seq();	

	//load_tx_cal_data();
	Tx_Cal_Cont();
	reg_TX_RESET_ANA_LANE = 0;

	drv_tx_on_dig_prot_dis();

	//	PHY_STATUS = ST_PLLREADY; 	
	
}

void Power_Patial_Slumber_Wakeup_Rx( void ) BANKING_CTRL {

	PHY_STATUS = ST_PSLUMBER_WK_RX;

	reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
	reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;

	drv_rx_on_seq();

	//load_rx_cal_data();
	Rx_Cal_Cont();
	delay(T_10us);
	reg_RX_RESET_ANA_LANE = 0;
	reg_RX_ADC_RESET_LANE = 1;
	delay(T_p25us);
	reg_RX_ADC_RESET_LANE = 0;
	
	drv_rx_on_dig_prot_dis();
	
	//if(cmx_AUTO_RX_INIT_EN == 0)
	//	PHY_STATUS = ST_PLLREADY; 
	//else	
	//	PHY_STATUS = ST_DTL;

}
#endif
//PM & SPD functions
void reset_core_tx_up(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0xa1;

	//RX sft rst together without pending RX sft rst release
	if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE == 1) {

		//PM rising isr clear only in sft_rst enter, as well as SPD_CHG, to avoid unwanted PU when reset
                
		PHY_STATUS = ST_TRX_SFT_RST;

		trx_soft_reset();

		reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
		                              
		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;

		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;

		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

        clr_phy_gen_rx_tx_isr();

        #ifndef CONFIG_5NM_56G_X4_4PLL_R1P0
            reg_PIN_RESET_CORE_ACK_TX_LANE = 1;
            reg_PIN_RESET_CORE_ACK_RX_LANE = 1;
        #endif
	}
	//Only TX sft rst
	else {
	
		//PM rising isr clear only in sft_rst enter, as well as SPD_CHG, to avoid unwanted PU when reset

                PHY_STATUS = ST_TX_SFT_RST;

		tx_soft_reset();

		reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;

		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;

		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;

        #ifndef CONFIG_5NM_56G_X4_4PLL_R1P0
            reg_PIN_RESET_CORE_ACK_TX_LANE = 1;
        #endif
	}
}

void reset_core_tx_down(void) BANKING_CTRL {

	//clear_all_isr();    Commented for test revision

	reg_MCU_DEBUG0_LANE_7_0 = 0xa2;
	
	//RX sft rst release together without pending RX sft rst enter
	if(reg_RX_SFT_RST_CHG_FALLING_ISR_LANE == 1) {

		wait_for((reg_PIN_PU_RX_RD_LANE && !reg_PIN_RESET_CORE_RX_RD_LANE) || (reg_PIN_PU_TX_RD_LANE && !reg_PIN_RESET_CORE_TX_RD_LANE), 0);   //TRX SFT_RST wakeup needs to wait at least one PU and RESET_CORE level to be asserted
				
		reg_MCU_DEBUG0_LANE_7_0 = 0x00;

		if((reg_PIN_PU_RX_RD_LANE && !reg_PIN_RESET_CORE_RX_RD_LANE) && (reg_PIN_PU_TX_RD_LANE && !reg_PIN_RESET_CORE_TX_RD_LANE)) {
			//clear all lower ISRs and SFT_RST fall/rise after PU starts
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;	
			
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
			
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
			
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
		
			//PU falling clear first, then rising
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;

            clr_phy_gen_rx_tx_isr();
			
			PHY_STATUS = ST_TRX_SFT_RST_OFF;

			trx_soft_reset_release();	
		}
		else if(reg_PIN_PU_TX_RD_LANE && !reg_PIN_RESET_CORE_TX_RD_LANE){
			//clear all lower ISRs and SFT_RST fall/rise after PU starts
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;	
			
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
			
			//PU falling clear first, then rising
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;
		
			reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
			reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
			
			PHY_STATUS = ST_TX_SFT_RST_OFF;
			
			tx_soft_reset_release();
		}
		else if(reg_PIN_PU_RX_RD_LANE && !reg_PIN_RESET_CORE_RX_RD_LANE){  //Only RX PU
			//clear all lower ISRs and SFT_RST fall/rise after PU starts
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;

			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
			
			//PU falling clear first, then rising
			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;
		
			reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
			reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
			
			PHY_STATUS = ST_RX_SFT_RST_OFF;
			
			rx_soft_reset_release();
		}
	}
	//Only TX release
	else {	
		wait_for(reg_PIN_PU_TX_RD_LANE && !reg_PIN_RESET_CORE_TX_RD_LANE, 0); //SFT_RST wakeup needs to wait PU & RESET_CORE signals	
		
		reg_MCU_DEBUG0_LANE_7_0 = 0x00;

		if(reg_PIN_PU_TX_RD_LANE && !reg_PIN_RESET_CORE_TX_RD_LANE){
			//clear all lower ISRs and SFT_RST fall/rise after PU starts
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;	

			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;

			//PU falling clear first, then rising
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;
		
			reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
			reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
			
			PHY_STATUS = ST_TX_SFT_RST_OFF;
			
			tx_soft_reset_release();
		}
	}
}

void reset_core_rx_up(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0xa3;
	//TX sft rst together without pending TX sft rst release
	if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE == 1) {

		//PM rising isr clear only in sft_rst enter, as well as SPD_CHG, to avoid unwanted PU when reset

                PHY_STATUS = ST_TRX_SFT_RST;

		trx_soft_reset();

		reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
		
		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;

		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;

		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

        clr_phy_gen_rx_tx_isr();

        #ifndef CONFIG_5NM_56G_X4_4PLL_R1P0
            reg_PIN_RESET_CORE_ACK_TX_LANE = 1;
            reg_PIN_RESET_CORE_ACK_RX_LANE = 1;
        #endif
	}
	//Only RX sft rst
	else {
	
		//PM rising isr clear only in sft_rst enter, as well as SPD_CHG, to avoid unwanted PU when reset

                PHY_STATUS = ST_RX_SFT_RST;

		rx_soft_reset();

		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;

		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;

        #ifndef CONFIG_5NM_56G_X4_4PLL_R1P0
            reg_PIN_RESET_CORE_ACK_RX_LANE = 1;
        #endif
	}
}

void reset_core_rx_down(void) BANKING_CTRL {


	//clear_all_isr();    Commented for test revision
	
	reg_MCU_DEBUG0_LANE_7_0 = 0xa4;

	//TX sft rst release together without pending TX sft rst enter
	if(reg_TX_SFT_RST_CHG_FALLING_ISR_LANE == 1) {

		wait_for((reg_PIN_PU_RX_RD_LANE && !reg_PIN_RESET_CORE_RX_RD_LANE) || (reg_PIN_PU_TX_RD_LANE && !reg_PIN_RESET_CORE_TX_RD_LANE), 0);   //TRX SFT_RST wakeup needs to wait at least one PU and RESET_CORE level to be asserted

		reg_MCU_DEBUG0_LANE_7_0 = 0x00;
				
		if((reg_PIN_PU_RX_RD_LANE && !reg_PIN_RESET_CORE_RX_RD_LANE) && (reg_PIN_PU_TX_RD_LANE && !reg_PIN_RESET_CORE_TX_RD_LANE)) {
			//clear all lower ISRs and SFT_RST fall/rise after PU starts
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;	
			
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
			
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
			
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;

			//PU falling clear first, then rising
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;

            clr_phy_gen_rx_tx_isr();
			
			PHY_STATUS = ST_TRX_SFT_RST_OFF;
			
			trx_soft_reset_release();	
		}
		else if(reg_PIN_PU_TX_RD_LANE && !reg_PIN_RESET_CORE_TX_RD_LANE){
			//clear all lower ISRs and SFT_RST fall/rise after PU starts
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;	

			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
	
			//PU falling clear first, then rising
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;
			
			reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
			reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;
			
			PHY_STATUS = ST_TX_SFT_RST_OFF;
			
			tx_soft_reset_release();
		}
		else if(reg_PIN_PU_RX_RD_LANE && !reg_PIN_RESET_CORE_RX_RD_LANE){  //Only RX PU
			//clear all lower ISRs and SFT_RST fall/rise after PU starts
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;	

			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
			
			//PU falling clear first, then rising
			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;
			
			reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
			reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
			
			PHY_STATUS = ST_RX_SFT_RST_OFF;
			
			rx_soft_reset_release();
		}
	}
	//Only RX release
	else {		
		wait_for(reg_PIN_PU_RX_RD_LANE && !reg_PIN_RESET_CORE_RX_RD_LANE, 0); //SFT_RST wakeup needs to wait PU & RESET_CORE signals	
		
		reg_MCU_DEBUG0_LANE_7_0 = 0x00;

		if(reg_PIN_PU_RX_RD_LANE && !reg_PIN_RESET_CORE_RX_RD_LANE){  //Only RX PU
			//clear all lower ISRs and SFT_RST fall/rise after PU starts
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;	

			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
			
			//PU falling clear first, then rising
			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;
		
			reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
			reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;
			
			PHY_STATUS = ST_RX_SFT_RST_OFF;
			
			rx_soft_reset_release();
		}
	}
}



void pu_tx_down(void) BANKING_CTRL {
	reg_MCU_DEBUG0_LANE_7_0 = 0xa5;
	//if higher layer happens, go back to higher and serve higher only
	if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE && reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_tx_up();

			reset_core_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0xc5;

			return;
		}
		//Case 2 Only SFT_RST rising
		else if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {	

			reset_core_tx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0xc6;

			return;

		}//Case 3 Only SFT_RST falling
		else if(reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0xc7;

			return;
		}
	}

	//RX power off together withoug RX power up
	if(reg_INT_PU_RX_CHG_FALLING_ISR_LANE == 1) {
	//if higher layer happens, go back to higher and serve higher only
		if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
			//Case 1 Both happened when polled, do whole DN/UP cycle
			if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE && reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_rx_up();
	
				reset_core_rx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xc8;
	
				return;
			}
			//Case 2 Only SFT_RST rising
			else if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {	
	
				reset_core_rx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xc9;
	
				return;
	
			}//Case 3 Only SFT_RST falling
			else if(reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_rx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xca;
	
				return;
			}
		}
	
		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;
	
		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

        clr_phy_gen_rx_tx_isr();

                PHY_STATUS = ST_SLUMBER;

		trx_soft_reset();
	}
	//TX only
	else {
		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;

		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;

		PHY_STATUS = ST_PSLUMBER_TX;

		tx_soft_reset();
	}
}

void pu_tx_up(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0xa6;
	//if higher layer happens, go back to higher and serve higher only, reset assertion has priority
	if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE && reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_tx_up();

			reset_core_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0xc2;

			return;
		}
		//Case 2 Only SFT_RST rising
		else if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {	

			reset_core_tx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0xc3;

			return;

		}//Case 3 Only SFT_RST falling
		else if(reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0xc4;

			return;
		}
	}
	//RX power up together withoug RX power off
	if(reg_INT_PU_RX_CHG_RISING_ISR_LANE == 1) {
		//if higher layer happens, go back to higher and serve higher only, reset assertion has priority
		if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
			//Case 1 Both happened when polled, do whole DN/UP cycle
			if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE && reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_rx_up();
	
				reset_core_rx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xcb;
	
				return;
			}
			//Case 2 Only SFT_RST rising
			else if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {	
	
				reset_core_rx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xcc;
	
				return;
	
			}//Case 3 Only SFT_RST falling
			else if(reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_rx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xcd;
	
				return;
			}
		}

		reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;

		reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;

        clr_phy_gen_rx_tx_isr();
		
		PHY_STATUS = ST_SLUMBER_WK;
		
		trx_soft_reset_release();
	}
	else { //TX only

		reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;

		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;

		PHY_STATUS = ST_PSLUMBER_WK_TX;

		tx_soft_reset_release();
	}
}

void pu_rx_down(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0xa7;
	//if higher layer happens, go back to higher and serve higher only
	if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE && reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_rx_up();

			reset_core_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0xce;

			return;
		}
		//Case 2 Only SFT_RST rising
		else if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {	

			reset_core_rx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0xcf;

			return;

		}//Case 3 Only SFT_RST falling
		else if(reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0xd0;

			return;
		}
	}

	//TX power off together withoug TX power up
	if(reg_INT_PU_TX_CHG_FALLING_ISR_LANE == 1) {
	//if higher layer happens, go back to higher and serve higher only
		if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
			//Case 1 Both happened when polled, do whole DN/UP cycle
			if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE && reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_tx_up();
	
				reset_core_tx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xd1;
	
				return;
			}
			//Case 2 Only SFT_RST rising
			else if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {	
	
				reset_core_tx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xd2;
	
				return;
	
			}//Case 3 Only SFT_RST falling
			else if(reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_tx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xd3;
	
				return;
			}
		}
	
		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_TX_CHG_FALLING_ISR_CLEAR_LANE = 0;
	
		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

        clr_phy_gen_rx_tx_isr();

                PHY_STATUS = ST_SLUMBER;

		trx_soft_reset();
	}
	//RX only
	else {
		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_RX_CHG_FALLING_ISR_CLEAR_LANE = 0;

		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;

		PHY_STATUS = ST_PSLUMBER_RX;

		rx_soft_reset();
	}
}

void pu_rx_up(void) BANKING_CTRL {

	reg_MCU_DEBUG0_LANE_7_0 = 0xa8;
	//if higher layer happens, go back to higher and serve higher only, reset assertion has priority
	if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE && reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_rx_up();

			reset_core_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x9c;

			return;
		}
		//Case 2 Only SFT_RST rising
		else if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {	

			reset_core_rx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0x9d;

			return;

		}//Case 3 Only SFT_RST falling
		else if(reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x9e;

			return;
		}
	}
	//TX power up together without TX power off
	if(reg_INT_PU_TX_CHG_RISING_ISR_LANE == 1) {
		//if higher layer happens, go back to higher and serve higher only, reset assertion has priority
		if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
			//Case 1 Both happened when polled, do whole DN/UP cycle
			if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE && reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_tx_up();
	
				reset_core_tx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0x9f;
	
				return;
			}
			//Case 2 Only SFT_RST rising
			else if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {	
	
				reset_core_tx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xc0;
	
				return;
	
			}//Case 3 Only SFT_RST falling
			else if(reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_tx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xc1;
	
				return;
			}
		}

		reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_TX_CHG_RISING_ISR_CLEAR_LANE = 0;

		reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;

        clr_phy_gen_rx_tx_isr();
		
		PHY_STATUS = ST_SLUMBER_WK;
		
		trx_soft_reset_release();
	}
	else { //RX only

		reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 1;
		reg_INT_PU_RX_CHG_RISING_ISR_CLEAR_LANE = 0;

		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;

		PHY_STATUS = ST_PSLUMBER_WK_RX;

		rx_soft_reset_release();
	}
}

void spd_chg_tx(void) BANKING_CTRL {
	reg_MCU_DEBUG0_LANE_7_0 = 0xa9;
	//if higher layer happens, go back to higher and serve higher only
	if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE && reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_tx_up();

			reset_core_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x96;

			return;
		}
		//Case 2 Only SFT_RST rising
		else if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {	

			reset_core_tx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0x97;

			return;

		}//Case 3 Only SFT_RST falling
		else if(reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x98;

			return;
		}
	}

	if (reg_INT_PU_TX_CHG_RISING_ISR_LANE || reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_INT_PU_TX_CHG_RISING_ISR_LANE && reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {	

			pu_tx_down();

			pu_tx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0xd4;

			return;
		}
		//Case 2 Only PU rising
		else if(reg_INT_PU_TX_CHG_RISING_ISR_LANE) {	

			pu_tx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0xd5;

			return;

		}//Case 3 Only PU falling
		else if(reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {	

			pu_tx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0xd6;

			return;
		}	
	}
//RX together
	if(reg_INT_PHY_GEN_RX_CHG_ISR_LANE)	{
		//if higher layer happens, go back to higher and serve higher only
		if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
			//Case 1 Both happened when polled, do whole DN/UP cycle
			if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE && reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_rx_up();
	
				reset_core_rx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0x99;
	
				return;
			}
			//Case 2 Only SFT_RST rising
			else if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {	
	
				reset_core_rx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0x9a;
	
				return;
	
			}//Case 3 Only SFT_RST falling
			else if(reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_rx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0x9b;
	
				return;
			}
		}

		if (reg_INT_PU_RX_CHG_RISING_ISR_LANE || reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
			//Case 1 Both happened when polled, do whole DN/UP cycle
			if(reg_INT_PU_RX_CHG_RISING_ISR_LANE && reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {	
	
				pu_rx_down();
	
				pu_rx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xd7;
	
				return;
			}
			//Case 2 Only PU rising
			else if(reg_INT_PU_RX_CHG_RISING_ISR_LANE) {	
	
				pu_rx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xd8;
	
				return;
	
			}//Case 3 Only PU falling
			else if(reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {	
	
				pu_rx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xd9;
	
				return;
			}	
		}

        clr_phy_gen_rx_tx_isr();

		PHY_STATUS = ST_SPDCHG;

		//turn_off_tx_cont_cal();   //From current spd_chg function. Commented in this test patch
		//turn_off_rx_cont_cal();   //From current spd_chg function. Commented in this test patch
		
		trx_soft_reset();
		
		trx_soft_reset_release();
	}

//TX only
	else {
		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_TX_CHG_ISR_CLEAR_LANE = 0;

		PHY_STATUS = ST_SPDCHG_TX;	

		//turn_off_tx_cont_cal();   //From current spd_chg function. Commented in this test patch
		
		tx_soft_reset();
		
		tx_soft_reset_release();
	}
}

void spd_chg_rx(void) BANKING_CTRL {
	reg_MCU_DEBUG0_LANE_7_0 = 0xaa;
	//if higher layer happens, go back to higher and serve higher only
	if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE && reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_rx_up();

			reset_core_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x90;

			return;
		}
		//Case 2 Only SFT_RST rising
		else if(reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {	

			reset_core_rx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0x91;

			return;

		}//Case 3 Only SFT_RST falling
		else if(reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {	

			reset_core_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0x92;

			return;
		}
	}

	if (reg_INT_PU_RX_CHG_RISING_ISR_LANE || reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
		//Case 1 Both happened when polled, do whole DN/UP cycle
		if(reg_INT_PU_RX_CHG_RISING_ISR_LANE && reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {	

			pu_rx_down();

			pu_rx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0xda;

			return;
		}
		//Case 2 Only PU rising
		else if(reg_INT_PU_RX_CHG_RISING_ISR_LANE) {	

			pu_rx_up();

			reg_MCU_DEBUG0_LANE_7_0 = 0xdb;

			return;

		}//Case 3 Only PU falling
		else if(reg_INT_PU_RX_CHG_FALLING_ISR_LANE) {	

			pu_rx_down();

			reg_MCU_DEBUG0_LANE_7_0 = 0xdc;

			return;
		}	
	}

//TX together
	if(reg_INT_PHY_GEN_TX_CHG_ISR_LANE)	{
		//if higher layer happens, go back to higher and serve higher only
		if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
			//Case 1 Both happened when polled, do whole DN/UP cycle
			if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE && reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_tx_up();
	
				reset_core_tx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0x93;
	
				return;
			}
			//Case 2 Only SFT_RST rising
			else if(reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {	
	
				reset_core_tx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0x94;
	
				return;
	
			}//Case 3 Only SFT_RST falling
			else if(reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {	
	
				reset_core_tx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0x95;
	
				return;
			}
		}

		if (reg_INT_PU_TX_CHG_RISING_ISR_LANE || reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {    //Separate RISE/FALL polling to avoid stuck
			//Case 1 Both happened when polled, do whole DN/UP cycle
			if(reg_INT_PU_TX_CHG_RISING_ISR_LANE && reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {	
	
				pu_tx_down();
	
				pu_tx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xdd;
	
				return;
			}
			//Case 2 Only PU rising
			else if(reg_INT_PU_TX_CHG_RISING_ISR_LANE) {	
	
				pu_tx_up();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xde;
	
				return;
	
			}//Case 3 Only PU falling
			else if(reg_INT_PU_TX_CHG_FALLING_ISR_LANE) {	
	
				pu_tx_down();
	
				reg_MCU_DEBUG0_LANE_7_0 = 0xdf;
	
				return;
			}	
		}

        clr_phy_gen_rx_tx_isr();

		PHY_STATUS = ST_SPDCHG;

		//turn_off_tx_cont_cal();   //From current spd_chg function. Commented in this test patch
		//turn_off_rx_cont_cal();   //From current spd_chg function. Commented in this test patch
		
		trx_soft_reset();
		
		trx_soft_reset_release();
	}

//RX only
	else {
		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 1;
		reg_INT_PHY_GEN_RX_CHG_ISR_CLEAR_LANE = 0;

		PHY_STATUS = ST_SPDCHG_RX;	

		//turn_off_tx_cont_cal();   //From current spd_chg function. Commented in this test patch
		
		rx_soft_reset();
		
		rx_soft_reset_release();
	}
}

#endif //#if defined TRX_SFT_RESET_CONTROL && _SERDES_BUILD
