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

static void scheduler_cmn_pu_ivref() {

    if(reg_PU_IVREF_FELL && reg_PIN_PU_IVREF_RD) {
        
        PHY_STATUS_CMN = ST_P1CLKREQ_WK;

        //Inform all lane MCUs that they need to toggle ANA_PU_SQ_LANE

        cmx_REFCLK_DIS_FALLING_QUERY_7_0 = 1;

        //Wait for all lane MCUs to be ready

        while(   (!cmx_REFCLK_DIS_FALLING_RESPONSE_LANE0_7_0)
              #ifndef CONFIG_5NM_56G_X1_2PLL
              || (!cmx_REFCLK_DIS_FALLING_RESPONSE_LANE1_7_0)
              || (!cmx_REFCLK_DIS_FALLING_RESPONSE_LANE2_7_0)
              || (!cmx_REFCLK_DIS_FALLING_RESPONSE_LANE3_7_0)
              #endif // #ifndef CONFIG_5NM_56G_X1_2PLL
             ) {
            ;
        }

        //All ANA_PU_SQ_LANE registers are now 0 and all
        //lane MCUs are now waiting for cmx_ALL_LANES_TOGGLE_ANA_PU_SQ_7_0 = 1

        cmx_REFCLK_DIS_FALLING_QUERY_7_0 = 0;

        PM_CMN_REG2.BT.B2 = 0x0e; //reg_ANA_PU_IVREF_DLY3 = 0;
        PM_CMN_REG2.BT.B2 = 0x0c; //reg_ANA_PU_IVREF_DLY2 = 0;
        PM_CMN_REG2.BT.B2 = 0x08; //reg_ANA_PU_IVREF_DLY1 = 0;
        PM_CMN_REG2.BT.B2 = 0;

        cmx_ALL_LANES_TOGGLE_ANA_PU_SQ_7_0 = 1;

        //! All MCUs will be synchronized here

        while( !reg_PIN_PU_IVREF_RD );

        if( reg_PU_BG_FELL == 1)
            delay(200);						
        
        pu_ivref_on();

        cmx_ALL_LANES_TOGGLE_ANA_PU_SQ_7_0 = 0;

        PHY_STATUS_CMN = ST_PLLREADY;		
    }	
}

void scheduler(void) {

	if(mcuid==MCU_CMN) {
		
		while(1){			
			if(cmx_CAL_START) {				
				Calibration();
			}	
			
            scheduler_cmn_pu_ivref();
			
			#ifdef SUPPORT_TEMP_SINGLE_SHOT_MODE
			TR1 = 1;
			if(tsen_check) {	
				read_tsen_cal();
				tsen_check = 0;	
			}
			#endif	
			
		}
	}

	// -- lane MCU 
	while(1) {

		#ifdef _LAB
		if( PHY_STATUS != old_status ) {
			old_status = PHY_STATUS;
			//DBG_Printf("\r\n%x", old_status);
		}
		#endif

        #if defined _SAS_BUILD
        if( reg_TX_SFT_RST_CHG_RISING_ISR_LANE ) {
            tx_soft_reset();
            continue;
        }

        if( reg_RX_SFT_RST_CHG_RISING_ISR_LANE ) {
            rx_soft_reset();
            continue;			
        }	

        if( reg_TX_SFT_RST_CHG_FALLING_ISR_LANE ) {
            tx_soft_reset_release();
        }

        if( reg_RX_SFT_RST_CHG_FALLING_ISR_LANE ) {
            rx_soft_reset_release();
        }

        if( PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 & 0xfc ){
            Serdes_Power_Management();	
        }
        #endif //#if defined _SAS_BUILD

        #if defined _SERDES_BUILD
        Serdes_Power_Speed_Management();
        #else 
        if( reg_INT_PHY_GEN_TX_CHG_ISR_LANE || reg_INT_PHY_GEN_RX_CHG_ISR_LANE ) {
            SpeedChange_top();
        }	
        #endif // #if defined _SERDES_BUILD

		#if defined _PCIE_BUILD || defined _USB_BUILD
		//if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE || reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {
		//	PowerUp_Seq();
		//}		
		Pcie_Power_Management();					
		#endif

		#ifdef SUPPORT_LANE_MARGINE
		if( reg_LANE_MARGIN_EN_ISR_LANE ) {
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
		if( lnx_CLI_START_LANE ) {
            cli_monitor();
        }
		#endif

		if( cmx_CAL_START ) {				
			Calibration();
		}	

		#ifdef SUPPORT_PI_DCC_PATCH //Patch for No Rx Edge Clock Toggling at Some Parts, Request by Yuchen 07/01/2020
        if(lnx_RX_PI_DCC_CONT_CAL_FW_EN_LANE /*|| reg_MCU_DEBUGE_LANE_7_0*/) { //no need for 7nm R1.1
			Rx_PI_DCC_cont_cal();	
		}	
		#endif

        #if defined(CONFIG_5NM_56G_X4_4PLL_R1P1) || defined(CONFIG_5NM_56G_X1_2PLL)
        drv_command_interface();
		#endif

	    //EOM 
	    Check_EOM_Stage_fmExt();
	
        #ifdef SUPPORT_CTLE_ADAPT
        CTLE_Adaptation();
        #endif
	
	    #ifdef PLL_SHARING_ROUTE
        pll_check_and_execute_if_master();
	    #endif// #ifdef _56G_5NM

		#ifdef _LAB
		uart_monitor();
		#endif
	}
}

