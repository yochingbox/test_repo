/******************************************************************
* 	        Marvell Semiconductor  
*******************************************************************
* \file scheduler.c
* \purpose scheduler driven by event
* \History
*	4/17/2019 Heejeong Ryu		Initial
*/

#include "common.h"


void scheduler(void) {

	uint8_t sft_rst;

	if(mcuid==MCU_CMN) {

		while((reg_MCU_DEBUGA_LANE_7_0=0x85)&&1){
			if(cmx_CAL_START) {
				Calibration();
			}

			if(reg_PU_IVREF_FELL && reg_PIN_PU_IVREF_RD) {

				//PHY_STATUS_CMN = ST_P1CLKREQ_WK;

				PM_CMN_REG2.BT.B2 = 0x0e; //reg_ANA_PU_IVREF_DLY3 = 0;
				PM_CMN_REG2.BT.B2 = 0x0c; //reg_ANA_PU_IVREF_DLY2 = 0;
				PM_CMN_REG2.BT.B2 = 0x08; //reg_ANA_PU_IVREF_DLY1 = 0;
				PM_CMN_REG2.BT.B2 = 0;

				while((reg_MCU_DEBUGA_LANE_7_0=0x86)&& !reg_PIN_PU_IVREF_RD );

				if( reg_PU_BG_FELL == 1)
					delay(200);

				pu_ivref_on();

				PHY_STATUS_CMN = ST_PLLREADY;
			}
		}
	}

	// -- lane MCU
	while((reg_MCU_DEBUGA_LANE_7_0=0x87)&&1) {

		#ifdef _LAB
		if( PHY_STATUS != old_status) {
			old_status = PHY_STATUS;
			//DBG_Printf("\r\n%x", old_status);
		}
		#endif

		#if defined _SERDES_BUILD || defined _SAS_BUILD   
#if 1
		Serdes_Power_Speed_Management();
	
#else
		if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE && reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {
			sft_rst = reg_SFT_RST_NO_REG_RX_RD_LANE;

			rx_soft_reset();

			// Clear ISR
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;

			//if (reg_SFT_RST_NO_REG_RX_RD_LANE == 0) {
			if (sft_rst == 0) {
				rx_soft_reset_release();
				clear_rx_isr();
			}

			// Clear ISR
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
		}
		else if (reg_RX_SFT_RST_CHG_RISING_ISR_LANE) {
			if (reg_SFT_RST_NO_REG_RX_RD_LANE) {
				rx_soft_reset();
			}

			// Clear ISR
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
		}
		else if (reg_RX_SFT_RST_CHG_FALLING_ISR_LANE) {
			if (reg_SFT_RST_NO_REG_RX_RD_LANE == 0) {
				rx_soft_reset_release();
				clear_rx_isr();
			}

			// Clear ISR
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_RX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
		}

		// Handle TX soft reset
		if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE && reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {
			sft_rst = reg_SFT_RST_NO_REG_TX_RD_LANE;

			tx_soft_reset();

			// Clear ISR
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;

			//if (reg_SFT_RST_NO_REG_TX_RD_LANE == 0) {
			if (sft_rst == 0) {
				tx_soft_reset_release();
				clear_tx_isr();
			}

			// Clear ISR
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
		}
		else if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {
			if (reg_SFT_RST_NO_REG_TX_RD_LANE) {
				tx_soft_reset();
			}

			// Clear ISR
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
		}
		else if (reg_TX_SFT_RST_CHG_FALLING_ISR_LANE) {
			if (reg_SFT_RST_NO_REG_TX_RD_LANE == 0) {
				tx_soft_reset_release();
				clear_tx_isr();
			}

			// Clear ISR
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
		}
#endif

//		if(PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 & 0xfc){
//			Serdes_Power_Management();
//		}
		#endif //_SERDES_BUILD

		#if defined _PCIE_BUILD || defined _USB_BUILD
		if (reg_TX_SFT_RST_CHG_RISING_ISR_LANE) {
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_RISING_ISR_CLEAR_LANE = 0;
			PHY_STATUS = ST_TX_SFT_RST;
			trx_soft_reset();
			//while((reg_MCU_DEBUGA_LANE_7_0=0x88)&&!reg_TX_SFT_RST_CHG_FALLING_ISR_LANE);
			wait_for(reg_TX_SFT_RST_CHG_FALLING_ISR_LANE,0);
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 1;
			reg_TX_SFT_RST_CHG_FALLING_ISR_CLEAR_LANE = 0;
			clear_all_isr();
			trx_soft_reset_release();
		}

		if(reg_INT_PHY_GEN_TX_CHG_ISR_LANE || reg_INT_PHY_GEN_RX_CHG_ISR_LANE) {

			SpeedChange_top();
		}

		Pcie_Power_Management();

		#ifdef SUPPORT_LANE_MARGINE
		if(reg_LANE_MARGIN_EN_ISR_LANE) {
			reg_LANE_MARGIN_EN_ISR_CLEAR_LANE = 1;
			reg_LANE_MARGIN_EN_ISR_CLEAR_LANE = 0;
			lane_margin_start();
		}
		#endif
		#endif // _PCIE_BUILD

		if( reg_INT_RX_INIT_CHG_RISING_ISR_LANE ) {
			RX_Init();
			reg_INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE = 1;
			reg_INT_RX_INIT_CHG_RISING_ISR_CLEAR_LANE = 0;
		}

		if( reg_TX_TRAIN_ENABLE_ISR_LANE ) {
			reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
			reg_TX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;

			do_train = 1;
			do_rxtrain = 0;
			TRX_Train();
		}

		if( reg_RX_TRAIN_ENABLE_ISR_LANE ) {
			reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 1;
			reg_RX_TRAIN_ENABLE_ISR_CLEAR_LANE = 0;	

			do_rxtrain = 1;
			do_train = 0;
			TRX_Train();
		}

#ifdef _5FF_COMPHY_112G_ADC_X4_8PLL_R1P1
        //Command Interface
        drv_command_interface();
#endif
		//EOM
		Check_EOM_Stage_fmExt();

		#ifdef SUPPORT_CLI
		if( lnx_CLI_START_LANE == 1 ) cli_monitor();
		#endif

		if(cmx_CAL_START) {
			Calibration();
		}

		PHY_STATUS = ST_NORMAL;
	}
}

/*
 * Module: mini_scheduler()
 *	Schedule 
 *	Input: None
 *	Output: None
 */
void mini_scheduler(void) {
	
	//Any tasks requested? Exit if there is no request.
	if ( !(PM_CTRL_INTERRUPT_REG1_LANE.BT.B3 || (SPD_CTRL_INTERRUPT_REG1_LANE.BT.B3 & 0xc0)))
		return;

	if (do_rxtrain) {
		//check and handle the following tasks:
		// -Tx soft reset
		// - Tx speed change
		if (reg_INT_PHY_GEN_TX_CHG_ISR_LANE)
			SpeedChange_tx();
		// - Tx power management
		// - Rx train abort
	}

	if (do_train) {
		//check and handle the following tasks:
		// - Tx soft reset
		// - Tx speed change
		if (reg_INT_PHY_GEN_TX_CHG_ISR_LANE)
			SpeedChange_tx();
		// - Tx power management
		// - Tx train abort
	}
}
