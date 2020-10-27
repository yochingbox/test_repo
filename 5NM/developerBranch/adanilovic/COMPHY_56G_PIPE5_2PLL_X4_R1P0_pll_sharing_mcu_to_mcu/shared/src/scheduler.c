/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file scheduler.c
* \purpose scheduler driven by event
* \History
*	4/17/2019 Heejeong Ryu		Initial
*/

#include "common.h"
#include "pll_sharing.h"

enum {
PST_RX_SFT_RST,
#if defined _SERDES_BUILD || defined _SAS_BUILD   
PST_TX_SFT_RST,
#endif
PST_SPD_CHG,
PST_POWER,
PST_RXINIT,
PST_TRXTRAIN,
PST_RXTRAIN,
PST_CLI,	
PST_CAL,
PST_EOM,
};	


void scheduler(void) {

	if(mcuid==MCU_CMN) {


		while(1){			
			if(cmx_CAL_START) {				
				Calibration();
			}	
			
			if(reg_PU_IVREF_FELL && reg_PIN_PU_IVREF_RD) {
				
				PHY_STATUS_CMN = ST_P1CLKREQ_WK;
				
				PM_CMN_REG2.BT.B2 = 0x0e; //reg_ANA_PU_IVREF_DLY3 = 0;
				PM_CMN_REG2.BT.B2 = 0x0c; //reg_ANA_PU_IVREF_DLY2 = 0;
				PM_CMN_REG2.BT.B2 = 0x08; //reg_ANA_PU_IVREF_DLY1 = 0;
				PM_CMN_REG2.BT.B2 = 0;

				while( !reg_PIN_PU_IVREF_RD );
				
				if( reg_PU_BG_FELL == 1)
					delay(200);						
				
				pu_ivref_on();
						
				PHY_STATUS_CMN = ST_PLLREADY;		
				
			}	
		}
	}
	
	// -- lane MCU 
	while(1) {

		#ifdef _LAB
		if( PHY_STATUS != old_status) {
			old_status = PHY_STATUS;
			//DBG_Printf("\r\n%x", old_status);
		}
		#endif
				
		if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {
			tx_soft_reset();
			continue;
		}
		if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {
			rx_soft_reset();
			continue;			
		}	

		if (reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {
			tx_soft_reset_release();
		}
		if (reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {
			rx_soft_reset_release();
		}
	
		
		#if defined _SERDES_BUILD || defined _SAS_BUILD   
		if(PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 & 0xfc){
			Serdes_Power_Management();	
		}
		#endif //_SERDES_BUILD
	
		#if defined _PCIE_BUILD || defined _USB_BUILD
		//if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {
		//	PowerUp_Seq();
		//}		
		Pcie_Power_Management();					
		#endif

		if(reg_INT_PHY_GEN_TX_CHG_ISR_LANE || reg_INT_PHY_GEN_RX_CHG_ISR_LANE) {
			SpeedChange_top();
		}	

		#ifdef SUPPORT_LANE_MARGINE
		if(reg_LANE_MARGIN_EN_ISR_LANE) {
			reg_LANE_MARGIN_EN_ISR_CLEAR_LANE = 1;
			reg_LANE_MARGIN_EN_ISR_CLEAR_LANE = 0;
			lane_margin_start();	
		}
		#endif
				
		if( reg_INT_RX_INIT_CHG_RISING_ISR_LANE ) {
			RX_Init();
		}
	
		if( reg_TX_TRAIN_ENABLE_ISR_LANE ) {
			TRX_Train();
		}	
	
		if( reg_RX_TRAIN_ENABLE_ISR_LANE ) {
			TRX_Train();
		}	
		
		#ifdef SUPPORT_CLI
		if( lnx_CLI_START_LANE ) cli_monitor();
		#endif

		if(cmx_CAL_START) {				
			Calibration();
		}	

	    //EOM 
	    Check_EOM_Stage_fmExt();
	
        pll_check_and_execute_if_master();

		#ifdef _LAB
		uart_monitor();
		#endif
		
	}
	
	
}

